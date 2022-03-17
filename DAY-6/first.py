amt = int(input("Enter the amount: "))
count2000 = 0
count500 = 0
count100 = 0
count200 = 0
count50 = 0
count10 = 0
count5 = 0
count2 = 0
count1 = 0

while amt != 0:
    if(amt % 2000 != 0):
        count2000 += 1
        amt -= 2000
        print(amt)
    elif ( amt % 500 != 0):
        count500 += 1
        amt -= 500
        print(amt)
    elif ( amt % 200 != 0):
        count200 += 1
        amt -= 200
        print(amt)
    elif ( amt %100 != 0):
        count100 +=1
        amt -= 100
        print(amt)
    elif ( amt % 50 != 0):
        count50 += 1
        amt -= 50
        print(amt)
    elif ( amt % 10 != 0):
        count500 += 1
        amt -= 10
        print(amt)
    elif ( amt % 5 != 0):
        count5 += 1
        amt -= 5
        print(amt)
    elif ( amt % 2 != 0):
        count2 += 1
        amt -= 2
        print(amt)
    elif ( amt % 1 != 0):
        count1 += 1
        amt -= 1
        print(amt)

print(count2000, count500, count200, count100, count50, count10, count5, count2, count1)