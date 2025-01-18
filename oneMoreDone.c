#include "worksheet2.h"

void oneMoreDone(gradStudent * g) {

    float markOfNewCourse;

    g->numCoursesDone++;
    printf("Enter the mark of the new course completed: ");
    scanf("%f", &markOfNewCourse);

    while (markOfNewCourse < 0 || markOfNewCourse > 100) {
        printf("Enter the mark of the new course completed (between 0 - 100): ");
        scanf("%f", &markOfNewCourse);
    }

    g->currentPercentage = ((g->currentPercentage * (g->numCoursesDone - 1)) + markOfNewCourse) / g->numCoursesDone;
}