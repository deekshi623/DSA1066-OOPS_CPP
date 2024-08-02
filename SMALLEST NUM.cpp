#include <iostream>
#include <vector>

int findSmallestMissingElement(const std::vector<int>& arr) {
    int size = arr.size();
    int missingElement = 0;

    int i = 0;
    while (i < size) {
        if (arr[i] != missingElement) {
            return missingElement;
        }
        ++missingElement;
        ++i;
    }

    return missingElement;
}

int main() {
    std::vector<int> arr = {0, 1, 2, 3, 5, 6, 7, 8, 9};

    int missingElement = findSmallestMissingElement(arr);
    std::cout << "The smallest missing element is: " << missingElement << std::endl;

    return 0;
}
