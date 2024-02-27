#include <iostream>
#include <cmath>

int search_binary(int arr[], int size, int x) {
    int low = 0;
    int high = size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] < x) {
            low = mid + 1;
        } else if (arr[mid] > x) {
            high = mid - 1;
        } else {
            return mid;
        }
    }
    return -1;
}

int search_linear(int arr[], int size, int x) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int search_jump(int arr[], int size, int x) {
    int step = sqrt(size);
    int prev = 0;
    while (arr[std::min(step, size) - 1] < x) {
        prev = step;
        step += sqrt(size);
        if (prev >= size) {
            return -1;
        }
    }
    while (arr[prev] < x) {
        prev++;
        if (prev == std::min(step, size)) {
            return -1;
        }
    }
    if (arr[prev] == x) {
        return prev;
    }
    return -1;
}

int search_linear_sentinel(int arr[], int size, int x) {
    arr[size] = x;
    int i = 0;
    while (arr[i] != x) {
        i++;
    }
    if (i < size) {
        return i;
    } else {
        return -1;
    }
}