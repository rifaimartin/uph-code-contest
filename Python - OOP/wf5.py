# import sys

# from operator import itemgetter

# punctuation = """'!"#$%&\'()*+,-./:;<=>?@[\\]^_`{|}~'"""
# freq = {}
# print("hello")
# stop_words = {}

# for line in sys.stdin:
#     for word in line.split():
#         word = word.strip(punctuation).lower()
#         if not word in stop_words:
#             freq[word] = freq.get(word,0) + 1
            
#             words = sorted(freq.iteritems(),key=itemgetter(1), reverse=True)
            
#             for w, f, in words: 
#                 print(w,f)
def calculate_sum(a: int, b: int):    
    # print(c)
    # print(d)
    return a + b



print(calculate_sum(calculate_sum("rifai","goldlane"), 1))

# print(calculate_sum("fai", "jakarta", "punya ktp", "punya kk"))