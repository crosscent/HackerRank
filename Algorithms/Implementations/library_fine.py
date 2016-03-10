def calculate_fine(returned_day, returned_month, returned_year, expected_day, expected_month, expected_year):
    if (returned_year < expected_year):
        return 0
    elif (returned_year > expected_year):
        return 10000
    
    if (returned_month < expected_month):
        return 0
    elif (returned_month > expected_month):
        return 500 * (returned_month - expected_month)

    if (returned_day < expected_day):
        return 0
    else:
        return 15 * (returned_day - expected_day)

if __name__ == "__main__":
    returned_day, returned_month, returned_year = map(int, raw_input().split())
    expected_day, expected_month, expected_year = map(int, raw_input().split())
    
    fine = calculate_fine(returned_day, returned_month, returned_year, expected_day, expected_month, expected_year)

    print(fine)
