#include <stdio.h>

void inputScores(float arr[3][3]){
 
    for(int i=0; i<3;i++){
        printf("Enter scores for student %d:\n",i+1);
        printf("  Math: ");
        scanf("%f",&arr[i][0]);
        printf("  Physics: ");
        scanf("%f",&arr[i][1]);
        printf("  Chemistry: ");
        scanf("%f",&arr[i][2]);
    }
}
void printTable(float arr[3][3]){
    printf("\nScore Table:\n");
    printf("Student\tMath\tPhysics\tChemistry\n");
    for(int i=0;i<3;i++){
        printf("%d\t%.2f\t%.2f\t%.2f\n",i+1,arr[i][0],arr[i][1],arr[i][2]);
    }
}
void printAverage(float arr[3][3]){
    float sumMath = 0,sumPhysics=0,sumChemistry=0;
    for(int i=0;i<3;i++){
        sumMath+=arr[i][0];
        sumPhysics+=arr[i][1];
        sumChemistry+=arr[i][2];
    }
    printf("\nAverage per subject:\n");
    printf("Math: %.2f\n", sumMath/3);
    printf("Physics: %.2f\n", sumPhysics/3);
    printf("Chemistry: %.2f\n", sumChemistry/3);
}
int main(){
    float scores[3][3];
    inputScores(scores);
    printTable(scores);
    printAverage(scores);
    return 0;
}
/*
void inputScores รับค่าคะแนน
วนลูปสำหรับนักเรียน3คน
แสดงข้อความ Enter scores for student
แสดงข้อความให้ผู้ใช้กรอกคะแนนวิชาคณิตศาสตร์
รับค่าคะแนนวิชาคณิตศาสตร์จากผู้ใช้
แสดงข้อความให้ผู้ใช้กรอกคะแนนวิชาฟิสิกศ์
รับค่าคะแนนวิชาฟิสิกศ์จากผู้ใช้
แสดงข้อความให้ผู้ใช้กรอกคะแนนวิชาเคมี
รับค่าคะแนนวิชาเคมีจากผู้ใช้
void printTable แสดงตารางคะแนน
แสดงข้อความ Score Table
วนลูปแสดงคะแนนของแต่ละคน
แสดงคะแนนแ่ตละวิชา
void printAverage แสดงค่าเฉลี่ยของแต่ละวิชา
กำหนดตัวแปรรวม  sumMath sumPhysics sumChemistry
วนลูปบวกคะแนนแต่ละวิชา
รวมคะแนนวิชา Math
รวมคะแนนวิชา Physics
รวมคะแนนวิชา Chemistry
แสดงข้อความ Average per subject
แสดงคะแนนเฉลี่ย Math
แสดงคะแนนเฉลี่ย Physics
แสดงคะแนนเฉลี่ย Chemistry
กำหนด  float scores[3][3]
เรียกใช้ฟังชัน inputScores เพื่อรับข้อมูล
เรียกใช้ฟังชัน printTable เพื่อแสดงตาราง
เรียกใช้ฟังชัน printAverage เพื่อแสดงค่าเฉลี่ย
จบการทำงาน
*/

