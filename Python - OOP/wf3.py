import sys
freq = {}

print("hello")
print(sys.stdin)
for line in sys.stdin:
    for word in line.split():
            freq[word] = 1 + freq.get(word,0)
            
            for w in sorted(freq.keys()):
                print(w), freq[w]
