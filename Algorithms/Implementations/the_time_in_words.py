time_dict = {}
time_dict[0] = "o' clock"
time_dict[1] = "one"
time_dict[2] = "two"
time_dict[3] = "three"
time_dict[4] = "four"
time_dict[5] = "five"
time_dict[6] = "six"
time_dict[7] = "seven"
time_dict[8] = "eight"
time_dict[9] = "nine"
time_dict[10] = "ten"
time_dict[11] = "eleven"
time_dict[12] = "twelve"
time_dict[13] = "thirteen"
time_dict[14] = "fourteen"
time_dict[15] = "quarter"
time_dict[16] = "sixteen"
time_dict[17] = "seventeen"
time_dict[18] = "eighteen"
time_dict[19] = "nineteen"
time_dict[20] = "twenty"
time_dict[21] = "twenty one"
time_dict[22] = "twenty two"
time_dict[23] = "twenty three"
time_dict[24] = "twenty four"
time_dict[25] = "twenty five"
time_dict[26] = "twenty six"
time_dict[27] = "twenty seven"
time_dict[28] = "twenty eight"
time_dict[29] = "twenty nine"
time_dict[30] = "half"


if __name__ == "__main__":
    hour = int(raw_input())
    minute = int(raw_input())
    if minute > 30:
        if hour == 12:
            hour = 1
        else:
            hour+=1
        minute = 60 - minute
        if minute == 1:
            print "{0} minutes to {1}".format(time_dict[minute], time_dict[hour])
        elif minute == 15:
            print "{0} to {1}".format(time_dict[minute], time_dict[hour])
        else:
            print "{0} minutes to {1}".format(time_dict[minute], time_dict[hour])
    elif minute == 1:
        print "{0} minute past {1}".format(time_dict[minute], time_dict[hour])
    elif minute == 0:
        print "{0} {1}".format(time_dict[hour], time_dict[minute])
    elif minute == 15 or minute == 30:
        print "{0} past {1}".format(time_dict[minute], time_dict[hour])
    else:
        print "{0} minutes past {1}".format(time_dict[minute], time_dict[hour])
