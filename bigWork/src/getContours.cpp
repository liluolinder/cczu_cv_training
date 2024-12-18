#include "opencv2//imgcodecs.hpp"
#include "opencv2/imgproc.hpp"
#include "iostream"

using namespace cv;
using namespace std;

void getContours(Mat mask,Mat img)
{
    vector<vector<Point>> contours;
    vector<Vec4i> hierarchy;


    int area;

    findContours(mask,contours,hierarchy,RETR_EXTERNAL,CHAIN_APPROX_SIMPLE);

    for(int i = 0 ; i < contours.size();i++)
    {
        vector<vector<Point>>conPoly(contours.size());
        vector<Rect> boundRect(contours.size());
        area= contourArea(contours[i]);
        /*cout <<area<<endl;*/

        if(area>150)
        {
             approxPolyDP(contours[i],conPoly[i],0.02* arcLength(contours[i], true), true);
             boundRect[i]= boundingRect(conPoly[i]);
            /*drawContours(img,conPoly,i,Scalar(255,0,255),2);*/
            rectangle(img,boundRect[i],Scalar(0,255,0),5);
        }
    }



}