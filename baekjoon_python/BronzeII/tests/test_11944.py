import os
import sys

import pytest

SRC_DIR = os.path.dirname(os.path.abspath(__file__)) + "/../src"
sys.path.append(SRC_DIR)

from p_11944 import make_nn


@pytest.mark.parametrize(
    "n, m, res",
    [
        (
            20,
            16,
            "2020202020202020",
        ),
        (
            1,
            10,
            "1",
        ),
        (
            5,
            5,
            "55555",
        ),
    ],
)
def test_make_nn(n: int, m: int, res: int):
    assert res == make_nn(n, m)
