
def possible_numbers(number_of_stones, a, b):
    all_as = (number_of_stones - 1) * a
    all_bs = (number_of_stones -1) * b
    min_number = min(all_as, all_bs)
    max_number = max(all_as, all_bs)
    number = min_number
    all_numbers = [min_number, max_number]
    difference = abs(a - b)
    if difference > 0:
        while number < max_number - difference:
            number += difference
            all_numbers.append(number)
        all_numbers.sort()
        return all_numbers
    else:
        return [max_number]
        

def brute_force_possible_numbers(number_of_stones, a, b, iteration=0, stones=[0]):
    if iteration == number_of_stones - 1:
        stones.sort()
        return stones
    else:
        new_set_of_stones = []
        for stone in stones:
            new_set_of_stones.append(stone + a)
            new_set_of_stones.append(stone + b)
    return possible_numbers(number_of_stones, a, b, iteration + 1, list(set(new_set_of_stones)))

if __name__ == "__main__":
    test_count = int(raw_input().strip())
    for i in xrange(test_count):
        number_of_stones = int(raw_input().strip())
        a = int(raw_input().strip())
        b = int(raw_input().strip())

        print " ".join(map(str, possible_numbers(number_of_stones, a, b)))
