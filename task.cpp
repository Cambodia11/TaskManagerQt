#include "task.h"


Task::Task(const QString& text,bool done) : Text(text), isDone(done) {}

QString Task::getText() const
{
    return Text;
}

bool Task::getisDone () const
{
    return isDone;
}

void Task::setText(const QString& newText)
{
    Text = newText;
}

void Task::setDone(bool done)
{
    isDone = done;
}

QJsonObject Task::toJson() const {
    QJsonObject obj;
    obj["text"] = Text;
    obj["done"] = isDone;
    return obj;
}

Task Task::fromJson(const QJsonObject& obj) {
    QString text = obj["text"].toString();
    bool done = obj["done"].toBool();
    return Task(text, done);
}
