#pragma once

#include <QCoreApplication>
#include <QObject>
#include <QTimer>
#include <QDebug>

class Rial : public QObject
{
    Q_OBJECT

public:
    Rial(QObject *parent);

private slots:
    void SlotEmiter();

signals:
    void finished();
};
