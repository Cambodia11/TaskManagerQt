#include "mainwindow.h"
#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFont font = qApp->font();
    font.setBold(true);
    qApp->setFont(font);

    qApp->setStyleSheet(R"(

 QPushButton {
    background-color: transparent;
    border: none;
    color: white;
    padding: 0px;
    margin: 0px;
}
QPushButton:pressed {
    background-color: transparent;
}
QPushButton:focus {
outline: none;
 }
 QPushButton:hover {
 color: #00FF00;
  }

QTableWidget {
    background-color: transparent;
    color: white;
    font-size: 14pt;
    font-weight: bold;
    border: none;
    gridline-color: transparent;
}

QTableWidget::item {
    border: none;                  /* убрать рамки у ячеек */
    background-color: transparent; /* прозрачный фон ячеек */
    color: white;                  /* белый текст в ячейках */
}

QHeaderView::section {
    background-color: transparent; /* прозрачный фон заголовков */
    border: none;                  /* убрать рамки заголовков */
    color: white;                  /* белый цвет заголовков */
    font-weight: bold;             /* жирные заголовки */
    font-size: 14pt;               /* размер шрифта заголовков */
}

QListWidget {
    background-color: transparent;
    border: none;
}

QWidget:focus {
    outline: none;
    border: none;
}
)");


    QPalette darkPalette;
    darkPalette.setColor(QPalette::Window, QColor(53, 53, 53));
    darkPalette.setColor(QPalette::WindowText, Qt::white);
    darkPalette.setColor(QPalette::Base, QColor(42, 42, 42));
    darkPalette.setColor(QPalette::AlternateBase, QColor(66, 66, 66));
    darkPalette.setColor(QPalette::ToolTipBase, Qt::white);
    darkPalette.setColor(QPalette::ToolTipText, Qt::white);
    darkPalette.setColor(QPalette::Text, Qt::white);
    darkPalette.setColor(QPalette::Button, QColor(53, 53, 53));
    darkPalette.setColor(QPalette::ButtonText, Qt::white);
    darkPalette.setColor(QPalette::BrightText, Qt::red);
    darkPalette.setColor(QPalette::Link, QColor(42, 130, 218));
    darkPalette.setColor(QPalette::Highlight, QColor(42, 130, 218));
    darkPalette.setColor(QPalette::HighlightedText, Qt::black);

    a.setPalette(darkPalette);

    a.setStyle("Fusion");

    a.setWindowIcon(QIcon("resources/ico.ico"));

    MainWindow w;
    w.setWindowTitle("By Cambodia");
    w.show();



    return a.exec();
}
