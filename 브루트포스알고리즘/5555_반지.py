text = input()
n = int(input())
text_ring = 0
for i in range(n):
    ring = input()
    ring += ring
    if ring.find(text) != -1:
        text_ring += 1

print(text_ring)
