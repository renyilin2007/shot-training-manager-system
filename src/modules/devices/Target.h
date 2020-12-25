#ifndef TARGET_H
#define TARGET_H

#include <QWidget>

namespace Ui {
class Target;
}

class Target : public QWidget
{
    Q_OBJECT

public:
    explicit Target(QWidget *parent = 0);
    ~Target();

private:
    Ui::Target *ui;
};

#endif // TARGET_H
