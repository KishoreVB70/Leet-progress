double* convertTemperature(double celsius, int* returnSize) {
    double* result = (double*) malloc(2 * sizeof(double));
    *result = celsius + 273.15;
    *(result + 1) = celsius * 1.8 + 32.00;
    *returnSize = 2;
    return result;
}