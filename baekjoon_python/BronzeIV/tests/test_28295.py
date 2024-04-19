import os
import sys

import pytest

SRC_DIR = os.path.dirname(os.path.abspath(__file__))
ROOT_DIR = os.path.dirname(SRC_DIR)

sys.path.append(ROOT_DIR)

from src.p_28295 import get_direction


def test_get_direction():
    directions = [1, 2, 3, 1, 2, 3, 1, 2, 3, 1]
    exp = "W"
    assert exp == get_direction(directions)
