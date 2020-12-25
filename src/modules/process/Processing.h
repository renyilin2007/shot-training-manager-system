#ifndef PROCESSING_H
#define PROCESSING_H

#include <QWidget>

namespace Ui {
class Processing;
}

class Processing : public QWidget
{
    Q_OBJECT

public:
    explicit Processing(QWidget *parent = 0);
    ~Processing();

private:
    Ui::Processing *ui;
};

#endif // PROCESSING_H
