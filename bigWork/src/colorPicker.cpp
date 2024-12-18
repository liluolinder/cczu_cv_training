#include "opencv2//imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include "iostream"


void colorPicker(cv::Mat img)
{
    using namespace cv;
    using namespace std;

    Mat imgHsv,mask;

    int hmin = 0, smin = 0, vmin = 0;
    int hmax = 179, smax = 255, vmax = 255;

    namedWindow("Trackbars", (640, 200));
    createTrackbar("Hue Min", "Trackbars", &hmin, 179);
    createTrackbar("Hue Max", "Trackbars", &hmax, 179);
    createTrackbar("Sat Min", "Trackbars", &smin, 255);
    createTrackbar("Sat Max", "Trackbars", &smax, 255);
    createTrackbar("Val Min", "Trackbars", &vmin, 255);
    createTrackbar("Val Max", "Trackbars", &vmax, 255);
    cvtColor(img,imgHsv,COLOR_BGR2HSV);
    Scalar lower(hmin,smin,vmin);
    Scalar upper(hmax,smax,vmax);
    inRange(imgHsv,lower,upper,mask);

    imshow("mask",mask);
}