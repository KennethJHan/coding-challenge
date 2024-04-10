import os
import sys
from typing import List

import pytest

SRC_DIR = os.path.dirname(os.path.abspath(__file__)) + "/../src"
sys.path.append(SRC_DIR)

from p_11399 import calc_min_time


@pytest.mark.parametrize(
    "data,res",
    (
        (
            [3, 1, 4, 3, 2],
            32,
        ),
        (
            [11, 103, 132, 19, 102],
            775,
        ),
    ),
)
def test_calc_min_time(data: List[int], res: int):
    assert calc_min_time(data) == res
