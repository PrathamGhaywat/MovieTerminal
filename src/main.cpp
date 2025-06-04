#include <opencv2/opencv.hpp>
#include <iostream>
#include <thread>
using namespace std;
using namespace cv;
int main() {
    cout << "Enter video file path: ";
    string vid_path;
    cin >> vid_path;
    VideoCapture cap(vid_path);
    if (!cap.isOpened()) {
        cerr << "Error opening video file\n";
        return -1;
    }

    double fps = cap.get(cv::CAP_PROP_FPS);
    int width = 80, height = 40;  

    string ascii_chars = "@%#*+=-:. ";

    Mat frame, gray, resized;

    while (true) {
        if (!cap.read(frame))
            break;

        cvtColor(frame, gray, cv::COLOR_BGR2GRAY);
        resize(gray, resized, cv::Size(width, height));

        cout << "\033[2J\033[H";

        for (int i = 0; i < resized.rows; i++) {
            for (int j = 0; j < resized.cols; j++) {
                int pixel = resized.at<uchar>(i, j);
                char c = ascii_chars[pixel * ascii_chars.size() / 256];
                cout << c;
            }
            cout << "\n";
        }

        cout.flush();
        this_thread::sleep_for(chrono::milliseconds(int(1000 / fps)));
    }

    return 0;
}
