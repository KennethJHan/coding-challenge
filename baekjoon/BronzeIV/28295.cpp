#include <iostream>
#include <unordered_map>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    char status = 'N';
    std::unordered_map<char, std::unordered_map<int, char>> map = {
        {'N', {{1, 'E'}, {2, 'S'}, {3, 'W'}}},
        {'E', {{1, 'S'}, {2, 'W'}, {3, 'N'}}},
        {'S', {{1, 'W'}, {2, 'N'}, {3, 'E'}}},
        {'W', {{1, 'N'}, {2, 'E'}, {3, 'S'}}},
    };
    for (int i = 0; i < 10; i++) {
        int t;
        std::cin >> t;
        if (t == 0)
            break;
        status = map[status][t];
    }
    std::cout << status << std::endl;
    return 0;
}
// $t_i=1$이라면 $i$ 번째 명령이 우향우임을, 
// $t_i=2$라면 $i$ 번째 명령이 뒤로 돌아임을,
// $t_i=3$이라면 $i$ 번째 명령이 좌향좌임을

// 1 2 3 1 2 3 1 2 3 1