#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>
using namespace cv;

int main()
{
    cv::Mat img = cv::imread("C:/user_data/Visual Rubik's Cube Solver/DemoContent/1.jpg");
    namedWindow("Original", WINDOW_AUTOSIZE);
    cv::imshow("Original", img);
    cv::moveWindow("Original", 0, 45);

    namedWindow("Edited", WINDOW_AUTOSIZE);
    cv::Mat imgGray;
    cv::cvtColor(img, imgGray, COLOR_BGR2GRAY);
    cv::imshow("Edited", imgGray);






    cv::waitKey(0);
    cv::destroyAllWindows();
    return 0;
}