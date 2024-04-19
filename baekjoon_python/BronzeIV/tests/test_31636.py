import os
import sys

import pytest

SRC_DIR = os.path.dirname(os.path.abspath(__file__))
ROOT_DIR = os.path.dirname(SRC_DIR)

sys.path.append(ROOT_DIR)

from src.p_31636 import check_consecutive


@pytest.mark.parametrize(
    ("s", "exp"),
    (
        ("oxooo", "Yes"),
        ("xooxo", "No"),
        ("o", "No"),
        ("oooooooooo", "Yes"),
        ("xooxxoooxoxooxooxoox", "Yes"),
        ("xooxxxooxoxooxooxoox", "No"),
    ),
)
def test_check_consecutive(s: str, exp: str):
    assert exp == check_consecutive(s, 3)
