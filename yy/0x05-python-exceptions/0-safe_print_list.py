#!/usr/bin/python3
def safe_print_list(my_list=[], x=0):
    y = 0
    for y in range(x):
        try:
            print("{}".format(my_list[y]), end="")
        except IndexError:
            break
        y += 1
    print("")
    return (y)
