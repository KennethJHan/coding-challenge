def get_most_expensive_player(player_data: dict[str, int]) -> str:
    """Return the most valuable player in a given dictionary.

    Args:
        player_data (dict[str, int]):
            key: name of player
            value: price of player

    Returns:
        str: Name of player with maximum price

    Examples:
        >>> player_data = {"p1": 100, "p2": 50}
        >>> res = get_most_expensive_player(player_data)
        >>> print(res)
        p1
    """
    max_price: int = 0
    max_name: str = ""
    for name, price in player_data.items():
        if price > max_price:
            max_price = price
            max_name = name

    return max_name


def main():
    n: int = int(input())
    for _ in range(n):
        p: int = int(input())
        player_data: dict[str, int] = dict()
        for _ in range(p):
            price, name = input().split()
            player_data[name] = price
        most_expensive_player_name: str = get_most_expensive_player(player_data)
        print(most_expensive_player_name)


if __name__ == "__main__":
    main()
