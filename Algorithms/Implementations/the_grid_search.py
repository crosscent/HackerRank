def find_pattern(source, search):
    search_pattern_length = len(search[0])
    for source_row_number in xrange(len(source) - len(search) + 1):
        rows_found = 0
        column_start = 0
        try:
            while column_start < len(source[source_row_number]):
                column_start += source[source_row_number][column_start:].index(search[0])
                for search_row_number in xrange(1, len(search)):
                    try:
                        search_row_found = source[source_row_number + search_row_number][column_start:column_start+search_pattern_length].index(search[search_row_number])
                        rows_found +=1
                    except ValueError:
                        continue
                    except IndexError:
                        continue
                if rows_found == len(search) - 1:
                    return True
                else:
                    column_start = column_start + search_pattern_length
        except ValueError:
            continue

    return False

if __name__ == "__main__":
    test_count = int(raw_input().strip())
    for i in xrange(test_count):
        source_row, source_column = map(int, raw_input().strip().split())

        source = []
        for j in xrange(source_row):
            source.append(raw_input().strip())

        search_row, search_column = map(int, raw_input().strip().split())

        search = []
        for k in xrange(search_row):
            search.append(raw_input().strip())

        found = find_pattern(source, search)
        if found == True:
            print "YES"
        else:
            print "NO"
