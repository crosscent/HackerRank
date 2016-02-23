lane_count, test_count = map(int, raw_input().strip().split())
lane_width = map(int, raw_input().strip().split())

def max_size(start, end, lane_width):
    return min(lane_width[start:end+1])

for i in xrange(test_count):
    start, end = map(int, raw_input().strip().split())
    print max_size(start, end, lane_width)

