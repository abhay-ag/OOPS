from inspect import ArgSpec


def getMax(*args):
    passedNum = [i for i in args]
    bigNum = -99999999
    for i in range(len(passedNum)):
        if (passedNum[i] > bigNum):
            bigNum = passedNum[i]
    print(bigNum)

getMax(11,334,5522,45234235,23,999999999)