def find_cost(test_case):
    num_black = test_case[0]
    num_white = test_case[1]
    cost_black = test_case[2]
    cost_white = test_case[3]
    cost_convert = test_case[4]

    if cost_black + cost_convert < cost_white:
        cost_white = cost_black + cost_convert
    elif cost_white + cost_convert < cost_black:
        cost_black = cost_white + cost_convert

    return (num_black * cost_black) + (num_white * cost_white)

if __name__ == "__main__":
    test_cases = int(raw_input())
    tests = []
    for i in xrange(test_cases):
       num_black, num_white = map(int, raw_input().split())
       cost_black, cost_white, cost_convert = map(int, raw_input().split())
       tests.append([num_black, num_white, cost_black, cost_white, cost_convert])

    for j in xrange(test_cases):
        print find_cost(tests[j])
