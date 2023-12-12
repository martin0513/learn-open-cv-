#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>

int main() {
    // 打开默认摄像头（通常是编号为 0 的摄像头）
    cv::VideoCapture cap(0);  // video capture 是处理视频输入的类，，，，然后创建名为cap的对象

    // 检查摄像头是否成功打开
    if (!cap.isOpened()) {
        std::cerr << "Error: Couldn't open the camera." << std::endl;
        return -1;
    }

    // 创建窗口用于显示摄像头图像
    cv::namedWindow("Camera", cv::WINDOW_NORMAL);//cv::namedWindow 是 OpenCV 中用于创建窗口的函数。
    //cv::WINDOW_NORMAL 是窗口的标志，指定窗口的属性。在这里，WINDOW_NORMAL 表示创建一个可调整大小的窗口，你可以手动调整窗口的大小。

    while (true) 
    {
        // 读取摄像头帧
        cv::Mat frame;  //申明图像矩阵对象 
        cap >> frame;

       // 这一行使用 >> 运算符从视频捕获对象 cap 中读取一帧图像，
       // 并将该图像数据存储到 frame 变量中。这是 OpenCV 提供的一种方便的方式，用于捕获连续的视频帧。

        // 显示帧
        cv::imshow("Camera", frame);

        // 检测按键，如果按下 'q' 键，退出循环
        if (cv::waitKey(30) == 'q') 
        {
            break;
        }
    }

    // 释放摄像头资源
    cap.release();

    // 关闭显示窗口
    cv::destroyAllWindows();

    return 0;
}
