
def chocolate_count(dollar, cost, exchange_rate, wrappers=0):
    chocolate_purchased = dollar / cost
    total_wrappers = chocolate_purchased + wrappers
    chocolate_exchanged = total_wrappers / exchange_rate
    wrappers_left_over = total_wrappers - (chocolate_exchanged * exchange_rate) + chocolate_exchanged
    total = chocolate_purchased + chocolate_exchanged
    if wrappers_left_over >= exchange_rate:
        total += chocolate_count(dollar - (chocolate_purchased * cost), cost,
                exchange_rate, wrappers_left_over)
    return total

if __name__ == "__main__":
    test_count = int(raw_input().strip())
    for i in xrange(test_count):
        dollar, cost, exchange = map(int, raw_input().strip().split())
        print chocolate_count(dollar, cost, exchange)
