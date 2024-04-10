import os
import sys

import pytest

SRC_DIR = os.path.dirname(os.path.abspath(__file__)) + "/../src"
sys.path.append(SRC_DIR)

from p_24075 import get_min_max


@pytest.mark.parametrize(
    "A,B,max,min",
    (
        (-2, -1, -1, -3),
        (-3, -4, 1, -7),
        (5, 0, 5, 5),
    ),
)
def test_get_min_max(A: int, B: int, max: int, min: int):
    assert (max, min) == get_min_max(A, B)
