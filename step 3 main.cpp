#include "./visual.h"
int main()
{
#ifdef _OPENMP
    std::cout << "OpenMP is execuating" << std::endl; // jude the OpenMP is exsiting
#endif
    FILE *file_in1, *file_in2, *file_in3, *file_in4, *file_in5, *file_in6,
        *file_out1, *file_out2, *file_out3, *file_out4, *file_out5, *file_out6;
    /*primary of your picture*/
    file_in1 = fopen("R.bmp", "rb");
    file_in2 = fopen("OIP.bmp", "rb");
    file_in3 = fopen("OIP.bmp", "rb");
    file_in4 = fopen("R.bmp", "rb");
    file_in5 = fopen("OIP.bmp", "rb");
    file_in6 = fopen("OIP.bmp", "rb");
    file_out1 = fopen("out1.bmp", "wb");
    file_out2 = fopen("out2.bmp", "wb");
    file_out3 = fopen("out3.bmp", "wb");
    file_out4 = fopen("out4.bmp", "wb");
    file_out5 = fopen("out5.bmp", "wb");
    file_out6 = fopen("out6.bmp", "wb");
    visual cv1(file_in1), cv2(file_in2),
        cv3(file_in3), cv4(file_in4), cv5(file_in5), cv6(file_in6);

    /*your code put this*/
    cv1.ac_grepBitmap();
    cv2.ac_binaryzationBitmap(130);
    cv3.ac_segmentBitmap(900, 400, 700, 400);
    cv4.grepBitmap();
    cv5.binaryzationBitmap(130);
    cv6.segmentBitmap(900, 400, 700, 400); // there are your processes
    cv1.readBitmap(file_out1);
    cv2.readBitmap(file_out2);
    cv3.readBitmap(file_out3);
    cv4.readBitmap(file_out4);
    cv5.readBitmap(file_out5);
    cv6.readBitmap(file_out6); // put out your picture
    /*-------------------*/
    return 0;
}
