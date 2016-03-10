def factorial_in_c(factorials):
    result = [1]
    number_of_digits = 1
    for i in xrange(1, factorials+1):
        carry_over = 0
        for j in xrange(len(result)):
            multiply = result[j] * i + carry_over
            digit = multiply % 10
            carry_over = multiply / 10
            result[j] = digit

        while carry_over:
            result.append(carry_over % 10)
            carry_over = carry_over / 10
    result_str = ""
    for i in reversed(xrange(len(result))):
        result_str += str(result[i])
    return int(result_str)

if __name__ == "__main__":
    factorials = int(raw_input())
    result = 1
    for i in xrange(1, factorials+1):
        result = result * i
    print result

    # since this is such an easy question to implement in python, I will
    # implement the same function as I would do it in C

    print factorial_in_c(factorials)
