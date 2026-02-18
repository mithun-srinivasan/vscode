def hanoi(n, a, b, c):
    if n == 1:
        print(a, "->", c)
    else:
        hanoi(n-1, a, c, b)
        print(a, "->", c)
        hanoi(n-1, b, a, c)
n = int(input("Enter the number of disks: "))
hanoi(n, "A", "B", "C")
    