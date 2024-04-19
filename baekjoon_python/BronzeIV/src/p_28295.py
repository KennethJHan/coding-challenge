def get_direction(directions: list[int]) -> str:
    """get the direction of the compass after the given directions

    Args:
        directions (list[int]): list of directions

    Returns:
        str: the direction of the compass after the given directions
    """
    direction_map = {
        "N": {1: "W", 2: "N", 3: "E"},
        "W": {1: "S", 2: "W", 3: "N"},
        "S": {1: "E", 2: "S", 3: "W"},
        "E": {1: "N", 2: "E", 3: "S"},
    }
    res = "N"
    for direction in directions:
        res = direction_map[res][direction]

    return res


if __name__ == "__main__":
    directions = list(map(int, input().split()))
    res = get_direction(directions)
    print(res)
