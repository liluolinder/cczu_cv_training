#include "opencv2//imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include "iostream"

using namespace cv;
using namespace std;

extern void findColor(Mat img);
extern void colorPicker(Mat img);

int main()
{

    Mat img,imgHsv,mask;

    string path = "./res/video/装甲板大作业-视频2.avi";
    VideoCapture cap(path);


    int hmin = 0, smin = 0, vmin = 0;
    int hmax = 179, smax = 255, vmax = 255;

    namedWindow("Trackbars", (640, 200));
    createTrackbar("Hue Min", "Trackbars", &hmin, 179);
    createTrackbar("Hue Max", "Trackbars", &hmax, 179);
    createTrackbar("Sat Min", "Trackbars", &smin, 255);
    createTrackbar("Sat Max", "Trackbars", &smax, 255);
    createTrackbar("Val Min", "Trackbars", &vmin, 255);
    createTrackbar("Val Max", "Trackbars", &vmax, 255);



  /*  while(true)
    {

        cap.read(img);
        resize(img,img,Size(),0.5,0.5);
        cvtColor(img,imgHsv,COLOR_BGR2HSV);
        Scalar lower(hmin,smin,vmin);
        Scalar upper(hmax,smax,vmax);
        inRange(imgHsv,lower,upper,mask);

        imshow("img",img);
        imshow("mask",mask);
        waitKey(50);
    }*/

    do{
        cap.read(img);
        resize(img,img,Size(),0.5,0.5);
        findColor(img);
        imshow("124",img);
        waitKey(1);
    }while(!img.empty());

}





