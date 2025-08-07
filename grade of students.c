#include <stdio.h>

struct Grade {
    char subject[50];
    int totalMarks;
    int obtainedMarks;
};

float getPercentage(struct Grade g) {
    return (float)g.obtainedMarks / g.totalMarks * 100;
}

int main() {
    struct Grade g;
    printf("Enter subject name: ");
    scanf("%s", g.subject);
    printf("Enter total marks: ");
    scanf("%d", &g.totalMarks);
    printf("Enter marks obtained: ");
    scanf("%d", &g.obtainedMarks);

    float percent = getPercentage(g);
    printf("%s: %.2f%%\n", g.subject, percent);
    return 0;
}
