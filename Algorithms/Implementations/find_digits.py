import sys

def divides_evenly(number):
    string_of_number = str(number)
    count = 0
    for i in string_of_number:
        if int(i) != 0 and number % int(i) == 0:
            count += 1
    return count

number_of_tests = int(raw_input().strip())
test_cases = []
for i in xrange(number_of_tests):
    test_cases.append(int(raw_input().strip()))

for case in test_cases:
    print divides_evenly(case)
