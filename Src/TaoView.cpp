#include "stdafx.h"

#include "TaoView.h"

TaoView::TaoView(QWindow *parent) : QQuickView(parent)
{
    setFlag(Qt::FramelessWindowHint);
    setResizeMode(SizeRootObjectToView);
    setColor(QColor(Qt::transparent));
}

//bool TaoView::nativeEvent(const QByteArray &eventType, void *message, long *result)
//{

//}