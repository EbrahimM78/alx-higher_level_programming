#!/usr/bin/python3

def max_integer(my_list=[]):
    if len(my_list) == 0:
        return None

    listnum = my_list[0]
    for num in my_list:
        if listnum < num:
            listnum = num
    return listnum
