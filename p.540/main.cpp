#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int studentNumber;
    char name[20];
    int scores[3];
    int totalScore;
    float average;
    char grade;
} Student;

void calculate(Student* student) {
    student->totalScore = 0;
    for (int i = 0; i < 3; i++) {
        student->totalScore += student->scores[i];
    }
    student->average = (float)student->totalScore / 3;
    if (student->average >= 90) {
        student->grade = 'A';
    }
    else if (student->average >= 80) {
        student->grade = 'B';
    }
    else if (student->average >= 70) {
        student->grade = 'C';
    }
    else {
        student->grade = 'F';
    }
}

void printStudent(Student student) {
    printf("학번: %d\n", student.studentNumber);
    printf("이름: %s\n", student.name);
    printf("국어, 영어, 수학 점수: %d %d %d\n", student.scores[0], student.scores[1], student.scores[2]);
    printf("총점: %d\n", student.totalScore);
    printf("평균: %.1f\n", student.average);
    printf("학점: %c\n\n", student.grade);
}

int compareStudents(const void* a, const void* b) {
    const Student* studentA = (const Student*)a;
    const Student* studentB = (const Student*)b;
    return studentB->totalScore - studentA->totalScore;
}

int main() {
    Student students[5];

    // 학생 정보 입력
    students[0].studentNumber = 315;
    strcpy(students[0].name, "홍길동");
    students[0].scores[0] = 80;
    students[0].scores[1] = 75;
    students[0].scores[2] = 90;

    students[1].studentNumber = 316;
    strcpy(students[1].name, "이순신");
    students[1].scores[0] = 88;
    students[1].scores[1] = 92;
    students[1].scores[2] = 100;

    students[2].studentNumber = 317;
    strcpy(students[2].name, "서하윤");
    students[2].scores[0] = 95;
    students[2].scores[1] = 99;
    students[2].scores[2] = 98;

    students[3].studentNumber = 318;
    strcpy(students[3].name, "유관순");
    students[3].scores[0] = 84;
    students[3].scores[1] = 70;
    students[3].scores[2] = 72;

    students[4].studentNumber = 319;
    strcpy(students[4].name, "박신혜");
    students[4].scores[0] = 60;
    students[4].scores[1] = 65;
    students[4].scores[2] = 40;

    // 학생 정보 계산 및 출력
    printf("정렬 전 데이터...\n");
    for (int i = 0; i < 5; i++) {
        calculate(&students[i]);
        printStudent(students[i]);
    }

    // 총점 순으로 학생 정보 정렬
    qsort(students, 5, sizeof(Student), compareStudents);

    // 정렬 후 데이터 출력
    printf("정렬 후 데이터...\n");
    for (int i = 0; i < 5; i++) {
        printStudent(students[i]);
    }

    return 0;
}
