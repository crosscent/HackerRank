#!/bin/python

import sys


def height(cycles, tree_height, season=0):
    if season == cycles:
        return tree_height
    elif season %2 == 0:
        tree_height = tree_height * 2
    else:
        tree_height += 1
    season +=1
    tree_height = height(cycles, tree_height, season)
    return tree_height 

t = int(raw_input().strip())
test_cases = []
for a0 in xrange(t):
    n = int(raw_input().strip())
    test_cases.append(n)

for test_case in test_cases:
    print height(test_case, 1)
