#include <iostream>
#include <iterator>

template <typename T>
void permutations(T list[], int k, int m) {
    if (k == m) {
        copy(list, list + m + 1, std::ostream_iterator<T>(std::cout, ""));
        std::cout << std::endl;
    } else {
        for (int i = k; i < m; i++) {
            std::swap(list[k], list[i]);
            permutations(list, k + 1, m);
            std::swap(list[k], list[i]);
        }
    }
}

int main(int argc, char const *argv[]) {
    int a[6] = {1, 2, 3, 4, 5, 6};

    permutations(a, 0, 5);

    return 0;
}
