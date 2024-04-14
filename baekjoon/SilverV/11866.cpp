#include <iostream>
#include <vector>

class Yosepus {
  private:
    int N, K;
    int start_pos;
    std::vector<int> v1;
    std::vector<int> v2;
    std::vector<int> result;

  public:
    Yosepus(int N, int K) { set_data(N, K); }
    void set_data(int _N, int _K) {
        N = _N;
        K = _K;
        start_pos = 0;
        for (int i = 1; i < _N + 1; i++) {
            v1.push_back(i);
            v2.push_back(0);
        }
    }
    int get_sum() {
        int sum_res = 0;
        for (int i : v2)
            sum_res += i;
        return sum_res;
    }
    void print() {
        std::cout << '<';
        for (int i = 0; i < N - 1; i++)
            std::cout << result[i] << ", ";
        std::cout << result[N - 1] << '>' << std::endl;
    }
    void mark() {
        int cnt = 0;
        int i = start_pos;
        while (true) {
            if (i >= N)
                i -= N;
            if (v2[i] == 0) {
                cnt++;
            }
            if (cnt == K) {
                v2[i] = 1;
                result.push_back(v1[i]);
                start_pos = i + 1;
                break;
            }
            i++;
        }
    }
};

int main() {
    int N, K;
    std::cin >> N >> K;
    Yosepus yosepus(N, K);
    while (true) {
        if (yosepus.get_sum() == N)
            break;
        yosepus.mark();
    }
    yosepus.print();
    return 0;
}

// 7 3
// <3, 6, 2, 7, 5, 1, 4>

// 1 2 3 4 5 6 7
// . . x . . . .
// . . x . . x .
// . x x . . x .
// . x x . . x x
// . x x . x x x
// x x x . x x x
// x x x x x x x