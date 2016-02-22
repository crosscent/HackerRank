import math
test_count = int(raw_input().strip())
tests = []

def square_count(a, b):
    count = 0
    sqrt_start = a**(0.5)
    sqrt_end = b**(0.5)
    return int(math.floor(sqrt_end) - math.ceil(sqrt_start) + 1)

for i in xrange(test_count):
    a, b = raw_input().split()
    tests.append([int(a), int(b)])

for a, b in tests:
    print square_count(a, b)
