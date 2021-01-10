#ifndef DISTRIBUTIONSCHEME_H
#define DISTRIBUTIONSCHEME_H

#include <QWidget>
#include "SchemeItem.h"

namespace Ui {
class DistributionScheme;
}

class DistributionScheme : public QWidget
{
    Q_OBJECT

public:
    explicit DistributionScheme(QWidget *parent = 0);
    ~DistributionScheme();

private slots:
    void on_GenScheBtn_DistruScheUI_clicked();

    void on_CheckScheBtn_DistruScheUI_clicked();

    void on_SelectTarBtn_DistruScheUI_clicked();

    void on_pushButton_5_clicked();

public:
    SchemeItem ScheItem;
private:
    Ui::DistributionScheme *ui;
};

#endif // DISTRIBUTIONSCHEME_H
