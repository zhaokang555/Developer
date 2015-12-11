def move(n, a, b, c):
    if n == 1:
        print('%s --> %s' % (a, c))
        return
    elif n > 1:
        move(n-1, a, c, b)
        move(1, a, b, c)
        move(n-1, b, a, c)
    else:
        print('n must be > 0 !!!')
        return
    
s = input('input a number bigger than 0:\n')
n = int(s)
move(n, 'A', 'B', 'C')
