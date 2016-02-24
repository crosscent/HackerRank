def crypt_string(string, characters_to_move):
    new_string = ""
    for letter in string:
        letter_ord = ord(letter)
        new_letter_ord = letter_ord
        if letter_ord >= 65 and letter_ord <=122 and (letter_ord <=90 or letter_ord >= 97):
            new_letter_ord = letter_ord + characters_to_move

            while (letter_ord <=90 and new_letter_ord > 90) or (letter_ord <=122 and new_letter_ord > 122):
                new_letter_ord -= 26
        new_string += chr(new_letter_ord)
    return new_string

if __name__ == "__main__":
    length_of_string = int(raw_input().strip())
    string = raw_input().strip()
    characters_to_move = int(raw_input().strip())

    print crypt_string(string, characters_to_move)
