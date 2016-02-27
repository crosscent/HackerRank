def modify_map(cavity_map):
    modified_map = []
    size_of_map = len(cavity_map)
    for i in xrange(size_of_map):
        if i == 0 or i == size_of_map - 1:
            modified_map.append(cavity_map[i])
        else: 
            row = []
            for j in xrange(size_of_map):
                if j == 0 or j == size_of_map - 1:
                    row.append(cavity_map[i][j])
                else:
                    # check the numbers around it
                    center = cavity_map[i][j]
                    all_small = True
                    surrounding = [cavity_map[i-1][j],
                                   cavity_map[i][j-1],
                                   cavity_map[i][j+1],
                                   cavity_map[i+1][j]]

                    for number in surrounding:
                        if number >= center:
                            all_small = False

                    if all_small:
                        row.append("X")
                    else:
                        row.append(center)
            modified_map.append(row)
    return modified_map 
if __name__ == "__main__":
    length = int(raw_input().strip())
    cavity_map = []
    for i in xrange(length):
        cavity_map.append(map(int, list(raw_input().strip())))
    new_map = modify_map(cavity_map)
    for line in new_map:
        print "".join(map(str, line))
