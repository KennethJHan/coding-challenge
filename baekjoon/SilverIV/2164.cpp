#include <iostream>
#include <queue>

void print_queue(std::queue<int> q)
{
    std::queue<int> temp = q; // Create a copy of the queue
    while (!temp.empty())
    {
        std::cout << temp.front() << " ";
        temp.pop();
    }
    std::cout << std::endl;
}

int main()
{
    int N, tmp;
    std::cin >> N;
    std::queue<int> q;
    for (int i = 1; i < N + 1; i++)
        q.push(i);

    while (true)
    {
        if (q.size() == 1)
            break;

        print_queue(q);

        // remove first element.
        tmp = q.front();
        std::cout << "remove: " << tmp << '\n';
        q.pop();
        // move second element to last order.
        tmp = q.front();
        q.pop();
        std::cout << "back: " << tmp << '\n';
        q.push(tmp);
    }
    std::cout << q.front() << '\n';
    return 0;
}