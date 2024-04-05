import os
import sys

import pytest

SRC_DIR = os.path.dirname(os.path.abspath(__file__))
ROOT_DIR = os.path.dirname(SRC_DIR)
sys.path.append(ROOT_DIR)

from p_11098 import get_most_expensive_player


@pytest.mark.parametrize(
    "player_data, result",
    [
        (
            {
                "Iversen": 10,
                "Nannskog": 1000000,
                "Ronaldinho": 2000000,
            },
            "Ronaldinho",
        ),
        (
            {
                "Maradona": 1000000,
                "Batistuta": 999999,
            },
            "Maradona",
        ),
    ],
)
def test_get_most_expensive_player(player_data: dict[str, int], result: str):
    res = get_most_expensive_player(player_data)
    assert res == result
