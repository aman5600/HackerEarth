t = int(raw_input())
while t>0:
    s = raw_input()
    print ' '.join((s.split(' '))[::-1])
    t-=1
