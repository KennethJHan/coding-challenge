def calc_digit(num: int):
    digit = 0
    while True:
        digit += 1
        if num < 10:
            break

        num /= 10

    return digit


if __name__ == "__main__":
    A, B = list(map(int, input().split()))
    digit = calc_digit(A + B)
    print(digit)
