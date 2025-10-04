#include<stdio.h>

void inputAndShow(){
    int math,physics,chemistry;
    printf("Enter Math: ");
    scanf("%d",&math);
    printf("Enter Physics: ");
    scanf("%d",&physics);
    printf("Enter Chemistry: ");
    scanf("%d",&chemistry);
    printf("\nScores: Math = %d, Physics = %d, Chemistry = %d\n",math,physics,chemistry);
   
} 

int main(){
    inputAndShow();
    return 0;
}
/*
สร้างฟังชัน void inputAndShow() เพื่อรับคะแนน Math, Physics, Chemistry จากผู้ใช้ และแสดงคะแนนที่รับมาทั้ง 3 วิชา
กำหนดตัวแปร  math,physics,chemistry
แสดงข้อความให้ผู้ใช้กรอกคะแนนวิชาคณิตศาสตร์
รับค่าคะแนนวิชาคณิตศาสตร์จากผู้ใช้
แสดงข้อความให้ผู้ใช้กรอกคะแนนวิชาฟิสิกศ์
รับค่าคะแนนวิชาฟิสิกศ์จากผู้ใช้
แสดงข้อความให้ผู้ใช้กรอกคะแนนวิชาเคมี
รับค่าคะแนนวิชาเคมีจากผู้ใช้
แสดงคะแนน math physics chemistry

เรียกใช้ฟังชัน   inputAndShow() เพื่อรับและแสดงคะแนน
จบการทำงาน
*/