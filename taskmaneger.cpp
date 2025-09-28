#include "taskmaneger.h"

TaskManeger::TaskManeger() {}

void TaskManeger::addTask(const QString &text)
{
    tasks.push_back(Task(text));
}

const QVector<Task>& TaskManeger::getTasks() const
{
    return tasks;
}

void TaskManeger::markTaskDone(int index, bool done)
{
    if(index >= 0 && index < tasks.size())
        tasks[index].setDone(done);
}


void TaskManeger::deleteTask(int index) {
    if (index >= 0 && index < tasks.size()) {
        tasks.removeAt(index);
    }
}

void TaskManeger::deleteAlltask()
{
    tasks.clear();
}

void TaskManeger::saveToFile(const QString& filename) const
{
    QJsonArray taskArray;
    for (const Task& task : tasks)
        taskArray.append(task.toJson());

    QJsonDocument doc(taskArray);
    QFile file(filename);
    if (file.open(QIODevice::WriteOnly)) {
        file.write(doc.toJson());
        file.close();
    }
}

void TaskManeger::loadFromFile(const QString& filename)
{
    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly))
        return;

    QByteArray data = file.readAll();
    file.close();

    QJsonDocument doc = QJsonDocument::fromJson(data);
    if (!doc.isArray())
        return;

    QJsonArray taskArray = doc.array();
    tasks.clear();
    for (const QJsonValue& value : taskArray) {
        if (value.isObject()) {
            Task task = Task::fromJson(value.toObject());
            tasks.append(task);
        }
    }
}
