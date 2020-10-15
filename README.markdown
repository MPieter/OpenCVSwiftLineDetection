__OpenCV with Swift: line detection__  

Purpose is to demonstrate how OpenCV can be used in combination with Swift on iOS for line detection (or any other computer vision task). 

The project AppDelegate and View Controller are written in Swift. Swift cannot talk directly to C++ (which we need for OpenCV), so we provide an Objective-C++ wrapper class to mediate between Swift and C++. We also provide an Objective-C++ category on UIImage to mediate between UIImage and CV::Mat image formats. The CVWrapper header file is pure Objective-C. 

A prefix header "OpenCVSwiftLineDetection.pch" is used to ensure the OpenCV headers are included before the Apple headers. Otherwise this will lead to compile errors.

__Installation__  
To run the project you need to install the OpenCV framework using Cocoapods. Run 'pod install' to install OpenCV for the project. From then on, always open the project in XCode from the `OpenCVSwiftLineDetection.xcworkspace` file that the pod install creates. 

__Use__  
The app has almost no user interface. On launch, a sample image is used to demonstrate the line detection algorithm of OpenCV. It uses the Canny Edge detector in combination with the Hough transform.

__Tested with__   
OpenCV 4.1,  XCode 11.7, Swift 4.2 and iOS 13.0  
