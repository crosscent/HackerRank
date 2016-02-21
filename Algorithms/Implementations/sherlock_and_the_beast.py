import sys

def get_magic_number(digits):
    number_of_fives = digits
    while(number_of_fives % 3 !=0):
        number_of_fives -= 5
    if number_of_fives < 0:
        return -1
    else:
        return "5"* number_of_fives + "3" * (digits - number_of_fives)



t = int(raw_input().strip())
number_list = []
for i in xrange(t):
    number_list.append(int(raw_input().strip()))

for number in number_list:
    print get_magic_number(number)
