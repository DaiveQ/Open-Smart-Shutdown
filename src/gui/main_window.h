#pragma once

#include <chrono>

#include <QHBoxLayout>
#include <QListWidget>
#include <QMainWindow>
#include <QMessageBox>
#include <QPushButton>
#include <QTime>
#include <QVBoxLayout>

#include "configure_widget.h"
#include "main_state_monitor_widget.h"
#include "events/event_triggers.h"

class MainWindow : public QMainWindow {
Q_OBJECT
public:
    MainWindow();

    void toggleStart();

public slots:
    void updateTimeTillEventTrigger(QTime timeRemaining);
private:
    QPushButton* toggleActiveButton;
    MainStateMonitorWidget* mainStateMonitorWidget;
};
