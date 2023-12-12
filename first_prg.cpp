#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>

int main() 
{
    // 读取图像文件
    cv::Mat image = cv::imread("C:/Users/12075/Desktop/12344.jpg");
    //创建对象 image， imread 是读取图像的函数，保存像素 在image 中

    // 检查图像是否成功加载
    if (image.empty()) 
    {
        std::cerr << "Failed to load image." << std::endl;
        return -1;
    }

    // 在窗口中显示图像
    cv::imshow("OpenCV Test", image);//在窗口中显示image图像

    // 等待用户按下任意键
    cv::waitKey(0);

    return 0;
}
