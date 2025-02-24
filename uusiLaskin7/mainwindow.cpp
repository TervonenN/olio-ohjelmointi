#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , state(1)
    , result(0)
    , operand(0)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numberClickHandler()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if (button) {
        QString digit = button->text();
        if (state == 1) {
            number1 += digit;
            ui->num1->setText(number1);
        } else if (state == 2) {
            number2 += digit;
            ui->num2->setText(number2);
        }
    }
}

void MainWindow::on_N0_clicked() { numberClickHandler(); }
void MainWindow::on_N1_clicked() { numberClickHandler(); }
void MainWindow::on_N2_clicked() { numberClickHandler(); }
void MainWindow::on_N3_clicked() { numberClickHandler(); }
void MainWindow::on_N4_clicked() { numberClickHandler(); }
void MainWindow::on_N5_clicked() { numberClickHandler(); }
void MainWindow::on_N6_clicked() { numberClickHandler(); }
void MainWindow::on_N7_clicked() { numberClickHandler(); }
void MainWindow::on_N8_clicked() { numberClickHandler(); }
void MainWindow::on_N9_clicked() { numberClickHandler(); }

void MainWindow::resetLineEdits()
{
    ui->num1->clear();
    ui->num2->clear();
    ui->result->clear();
    number1 = "";
    number2 = "";
    state = 1;
}

void MainWindow::on_clear_clicked()
{
    resetLineEdits();
}

void MainWindow::on_enter_clicked()
{
    if (state == 1) {
        state = 2;
    } else if (state == 2) {
        float num1 = number1.toFloat();
        float num2 = number2.toFloat();

        switch(operand) {
        case 1: // Addition
            result = num1 + num2;
            break;
        case 2: // Subtraction
            result = num1 - num2;
            break;
        case 3: // Multiplication
            result = num1 * num2;
            break;
        case 4: // Division
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                ui->result->setText("Error");
                return;
            }
            break;
        }
        ui->result->setText(QString::number(result));
    }
}

void MainWindow::addSubMulDivClickHandler()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if (button) {
        if (button->text() == "+") operand = 1;
        else if (button->text() == "-") operand = 2;
        else if (button->text() == "*") operand = 3;
        else if (button->text() == "/") operand = 4;
        state = 2;
    }
}

void MainWindow::on_add_clicked() { addSubMulDivClickHandler(); }
void MainWindow::on_sub_clicked() { addSubMulDivClickHandler(); }
void MainWindow::on_mul_clicked() { addSubMulDivClickHandler(); }
void MainWindow::on_div_clicked() { addSubMulDivClickHandler(); }
