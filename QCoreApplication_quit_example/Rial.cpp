#include "Rial.h"

#define EmitSignal() emit finished()

Rial::Rial(QObject *parent)
    : QObject(parent)
{
    connect(this, &Rial::finished, this, []{ QCoreApplication::quit(); });
    QTimer::singleShot(3000, this, &Rial::SlotEmiter);
}


void Rial::SlotEmiter(){
    qDebug() << "start EmitSignal";
    EmitSignal(); //Missing emit keyword on signal call Rial::finished [clazy-incorrect-emit]
}
