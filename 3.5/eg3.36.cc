#include <iostream>
#include <iterator>
#include <vector>
#include <array>

bool arrComp (int arr1[], int arr2[], int arr1Len, int arr2Len) {
    if (arr1Len != arr2Len) return false;
    for(int i = 0; i < 5; ++i)
        if (arr1[i] != arr2[i])
            return false;
    return true;
};

bool vecComp (std::vector<int> vec1, std::vector<int> vec2) {
    auto vec1Length = vec1.size(), vec2Length = vec2.size();
    if (vec1Length != vec2Length)
        return false;
    for (decltype(vec1Length) i = 0; i < vec1Length; ++i) {
        if (vec1[i] != vec2[i])
            return false;
    }
    return true;
}

int main() {
    int arr1[] = {1,2,3,4,5,6}, arr2[] = {1,2,3,4,5};
    int arr1Len = sizeof(arr1)/sizeof(arr1[0]), arr2Len = sizeof(arr2)/sizeof(arr2[0]);
    int *beg = std::begin(arr1);
    std::vector<int> vec1(10, 5), vec2(11,5);

    std::cout << arrComp(arr1, arr2, arr1Len, arr2Len) << std::endl;
    std::cout << vecComp(vec1, vec2) << std::endl;

    //std::cout << arr1[5] << std::endl;
    //program that compares two arrays for equaility.
    //
    //program that compares two vectors

}
