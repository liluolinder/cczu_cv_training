#include "opencv2//imgcodecs.hpp"
#include "opencv2/imgproc.hpp"

using namespace cv;
using namespace std;

extern void getContours(Mat mask,Mat img);

void findColor(Mat img)
{
    vector<vector<int>> colors={{0,32,43,177,248,255}
                                ,{89,164,11,174,250,255}};
    Mat imgHsv, mask;

    cvtColor(img,imgHsv,COLOR_BGR2HSV);

    for(int i = 0 ; i <colors.size() ; i++)
    {
        Scalar lower(colors[i][0],colors[i][2],colors[i][4]);
        Scalar upper(colors[i][1],colors[i][3],colors[i][5]);

        inRange(imgHsv,lower,upper,mask);

        getContours(mask,img);

        /*imshow(to_string(i),mask);*/
    }
}
