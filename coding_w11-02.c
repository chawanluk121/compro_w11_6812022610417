#include<stdio.h>

float average (int a, int b, int c){
return (a+b+c) /3.0;
}
int main(){
    int Math, Physics, Chemistry;
    float avg;
    printf("Enter Math: ");
    scanf("%d",&Math);
    printf("Enter Physics: ");
    scanf("%d",&Physics);
    printf("Enter Chemistry: ");
    scanf("%d",&Chemistry);
    avg=average(Math,Physics,Chemistry);

    printf("\nMath = %d\n",Math);
    printf("Physics = %d\n",Physics);
    printf("Chemistry = %d\n",Chemistry);
    printf("average = %.2f\n",avg);
return 0; 
}
/*
ฟังชัน average สำหรับคำนวณค่าเฉลี่ย ของ a,b,c หารด้วย 3
กำหนดตัวแปร  Math, Physics, Chemistry และ avg
แสดงข้อความให้ผู้ใช้กรอกคะแนนวิชาคณิตศาสตร์
รับค่าคะแนนวิชาคณิตศาสตร์จากผู้ใช้
แสดงข้อความให้ผู้ใช้กรอกคะแนนวิชาฟิสิกศ์
รับค่าคะแนนวิชาฟิสิกศ์จากผู้ใช้
แสดงข้อความให้ผู้ใช้กรอกคะแนนวิชาเคมี
รับค่าคะแนนวิชาเคมีจากผู้ใช้
ฟังชัน average คำนวณค่าเฉลี่ย
แสดงคะแนน math 
แสดงคะแนน physics 
แสดงคะแนน chemistry
แสดงค่าเฉลี่ย
จบการทำงาน

*/