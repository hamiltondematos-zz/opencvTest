#include "mainwindow.h"
#include <QApplication>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>


int main(int argc, char *argv[])
{

//    cv::Mat inputImage = cv::imread("C:\\Users\\hamilton.matos\\Downloads\\bira.jpg");
//    if(!inputImage.empty()) cv::imshow("Display Image", inputImage);

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}

