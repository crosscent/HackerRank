number_of_sticks = int(raw_input().strip())
list_of_sticks = map(int, raw_input().strip().split())

def to_keep(size):
    if size <= 0:
        return False 
    return True

while len(list_of_sticks) > 0:
    print len(list_of_sticks)
    smallest_stick = min(list_of_sticks)
    for i in xrange(len(list_of_sticks)):
        list_of_sticks[i] = list_of_sticks[i] - smallest_stick
    list_of_sticks = [stick for stick in list_of_sticks if to_keep(stick)]
