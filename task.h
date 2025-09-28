#ifndef TASK_H
#define TASK_H

#include<QString>
#include <QJsonObject>

class Task
{
private:
    QString Text;
    bool isDone;
public:
    Task(const QString& text,bool done = false);

    QString getText() const ;

    bool getisDone () const ;

    void setText(const QString& newText);

    void setDone(bool done);

    QJsonObject toJson() const;

    static Task fromJson(const QJsonObject& obj);
};

#endif // TASK_H
