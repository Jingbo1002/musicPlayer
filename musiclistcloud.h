#ifndef MUSICLISTCLOUD_H
#define MUSICLISTCLOUD_H

/**
 * @author: jingbo
 * @date: 2018/05/14
 * @desc: 音乐列表-云
 */

#include <QWidget>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QFile>
class MusicListCloud : public QWidget
{
    Q_OBJECT
public:
    explicit MusicListCloud(QWidget *parent = 0);

signals:

public slots:

private:
    QPushButton *icon;
    QLabel *prompt;
    QPushButton *useBtn;

    //-------Layout
    QHBoxLayout *iconLayout;
    QHBoxLayout *promptLayout;
    QHBoxLayout *useBtnLayout;
    QVBoxLayout *musicListCloudMainLayout;

    //-------Function
    void setControlsLayout();
    void setControlsForm();
    void setControlsStyle();
    void connectSlot();
};

#endif // MUSICLISTCLOUD_H
