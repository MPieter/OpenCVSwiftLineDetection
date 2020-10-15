//
//  lines.cpp
//  OpenCVSwiftLineDetection
//
//  Created by Pieter Meiresone on 09/10/2020.
//  Copyright © 2020 Pieter Meiresone. All rights reserved.
//

#include "lines.h"
#include <iostream>
#include <fstream>

bool try_use_gpu = false;
std::vector<cv::Mat> imgs;
std::string result_name = "result.jpg";

cv::Mat lines(cv::Mat & image)
{
    cv::Mat imgGrayscale, imgBlurred, imgCanny, imgLines;
    
    cv::cvtColor(image, imgGrayscale, cv::COLOR_BGR2GRAY);
    cv::GaussianBlur(imgGrayscale, imgBlurred, cv::Size(5,5), 1.8);
    cv:Canny(imgBlurred, imgCanny, 45, 90);
    
    std::vector<cv::Vec4i> lines;
    cv::HoughLinesP(imgCanny, lines, 1, CV_PI/180, 80, 40, 5);
    for( size_t i = 0; i < lines.size(); i++ )
    {
        cv::line(image, cv::Point(lines[i][0], lines[i][1]),
            cv::Point(lines[i][2], lines[i][3]), cv::Scalar(0,0,255), 3, 8);
    }
    return image;
}
