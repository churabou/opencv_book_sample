#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <cmath>
#include <opencv2/opencv.hpp>
std::string win_src = "src";

int main()
{
  // 640x480pixel�̍����摜
  cv::Mat img_src = cv::Mat::zeros(cv::Size(640, 480), CV_8UC3);

  // �E�C���h�E����
  cv::namedWindow(win_src, cv::WINDOW_AUTOSIZE);

  // �_(0, 0)�Ɠ_(640, 480)�����ԑ���5�̉��F�̐���
  line(img_src, cv::Point(0, 0), cv::Point(640, 480), cv::Scalar(0, 255, 255), 5);

  // ���S���W(320, 240)�C���a100�C����3�̐F�̉~
  cv::circle(img_src, cv::Point(320, 240), 100, cv::Scalar(255, 0, 0), 3);

  // ���S���W(500, 100)�C���a50�C�h��Ԃ��̗ΐF�̉~
  cv::circle(img_src, cv::Point(500, 100), 50, cv::Scalar(0, 255, 0), -1);

  // ������W(100, 150)�C��50�C����150�C����2�̐ԐF�̋�`
  cv::rectangle(img_src, cv::Rect(100, 150, 50, 150), cv::Scalar(0, 0, 255), 2);

  // ������W(50, 350)�C��200�C����50�C�h��Ԃ��̎��F�̋�`
  cv::rectangle(img_src, cv::Rect(50, 350, 200, 50), cv::Scalar(255, 0, 255), -1);

  // �������W(300, 450), �{��3�C����5�̐��F�̕�����123
  cv::putText(img_src, "123", cv::Point(300, 450), 0, 3, cv::Scalar(255, 255, 0), 5);

  // �\��
  cv::imshow(win_src, img_src);

  // �L�[���͑҂�
  cv::waitKey(0);

  return 0;
}