import os
import sys

import pytest

SRC_DIR = os.path.dirname(os.path.abspath(__file__))
ROOT_DIR = os.path.dirname(SRC_DIR)

sys.path.append(ROOT_DIR)

from src.p_24083 import calc_time


@pytest.mark.parametrize(
    ("A, B, res"),
    (
        (9, 5, 2),
        (4, 20, 12),
    ),
)
def test_calc_time(A, B, res):
    assert res == calc_time(A, B)
