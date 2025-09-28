#ifndef TASKMANEGER_H
#define TASKMANEGER_H

#include"task.h"
#include<QVector>
#include <QWidget>
#include <QStackedWidget>
#include <QTableWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QJsonArray>
#include <QJsonDocument>
#include <QFile>

class TaskManeger
{
private:
    QVector<Task> tasks;
public:
    TaskManeger();
    void saveToFile(const QString& filename) const;
    void loadFromFile(const QString& filename);
    void addTask(const QString &text);
    const QVector<Task>& getTasks() const;
    void markTaskDone(int index, bool done);
    void deleteTask(int index);
    void deleteAlltask ();

};
#endif // TASKMANEGER_H
