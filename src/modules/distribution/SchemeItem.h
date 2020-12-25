#ifndef SCHEMEITEM_H
#define SCHEMEITEM_H

#include <QWidget>

namespace Ui {
class SchemeItem;
}

class SchemeItem : public QWidget
{
    Q_OBJECT

public:
    explicit SchemeItem(QWidget *parent = 0);
    ~SchemeItem();

private:
    Ui::SchemeItem *ui;
};

#endif // SCHEMEITEM_H
