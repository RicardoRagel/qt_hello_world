#include <QApplication>
#include <QDebug>
#include <QWidget>
#include <QGridLayout>
#include <QLabel>
#include <QPushButton>

void closeMe()
{
    qDebug() << "Closing app...";
    exit(0);
}

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QWidget *window = new QWidget;
    
    // Layout and widgets
    QGridLayout *layout = new QGridLayout;
    window->setLayout(layout);
    
    QLabel *label = new QLabel;
    label->setText("Hello, I am <i>hello world</i> program using CMake and default installed Qt on Ubuntu");
    layout->addWidget(label, 0, 0, Qt::AlignCenter);

    QPushButton *button = new QPushButton;
    button->setText("Close me");
    button->setToolTip("Press this button to close the app");
    button->setFixedWidth(200);
    layout->addWidget(button, 1, 0, Qt::AlignCenter);

    // Callbacks
    QObject::connect(button, &QPushButton::clicked, closeMe);
    
    // Show application
    window->show();
    return app.exec();
}