#include <stdio.h>

#define SAMPLE_SIZE 3000

struct Sensor_Data {
    float time;
    double probability;
};
struct Sensor {
    int id;
    double threshold;
    struct Sensor_Data data[SAMPLE_SIZE];
    int  object_detection[300000];
};
