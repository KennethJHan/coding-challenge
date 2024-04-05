#include <algorithm>
#include <iostream>
#include <vector>

struct Member {
    int age;
    std::string name;
};

bool operator<(const Member &lhs, const Member &rhs) {
    return lhs.age < rhs.age;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int N;
    std::cin >> N;
    std::vector<Member> v;
    for (int i = 0; i < N; i++) {
        int age_tmp;
        std::string name_tmp;
        std::cin >> age_tmp >> name_tmp;
        v.push_back({age_tmp, name_tmp});
    }
    std::stable_sort(v.begin(), v.end());
    for (const Member &m : v) {
        std::cout << m.age << ' ' << m.name << '\n';
    }
    return 0;
}