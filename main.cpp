#include <bits/stdc++.h>
#include <gtest/gtest.h>

#include <chrono>
#include <future>
#include <iostream>
#include <string>
#include <thread>

#include "singleton/singleton.h"

using namespace std;


#include<gtest/gtest.h>
int add(int a,int b){
    return a+b;
}
//TEST(testCase,test0){
//    EXPECT_EQ(add(2,3),5);
//}

TEST(MyTest, Sum)
{
    std::vector<int> vec{1, 2, 3, 4, 5};
    int sum = std::accumulate(vec.begin(), vec.end(), 0);
    EXPECT_EQ(sum, 15);
}

int f_temp(int);
int main(int argc,char **argv){
  testing::InitGoogleTest(&argc,argv);

  design_pattern::Singleton& single = design_pattern::Singleton::getInstance();


  return RUN_ALL_TESTS();
}

//int main(int argc,char **argv)
//{


//    testing::InitGoogleTest(&argc,argv);
//    return RUN_ALL_TESTS();


//    auto t1 = std::chrono::high_resolution_clock::now();

//    for(int i = 0; i < 10000; ++i){
//        static int sum = 0;
//        sum += i;
//    }

//    cv::Mat m;
//    prt(m);



//    cv::Mat m = cv::Mat::zeros(cv::Size(1, 3), CV_8UC1);
//     cv::contourArea(m);
//    // m.ptr<uchar>(0)[0] = 0;
//    // m.ptr<uchar>(1)[0] = 1;
//    // m.ptr<uchar>(2)[0] = 2;
//    m.ptr<uchar>(2)[0] = 1;

//    cv::Mat m1(cv::Size(2, 4), CV_32SC1);
//    m.convertTo(m1, CV_32SC1);

//    std::cout << m1 << std::endl;

//    auto t2 = std::chrono::high_resolution_clock::now();

//    std::cout << std::chrono::duration<double>(t2 - t1).count() << std::endl;

//}

