query = input()
n = int(input())
doc = [""]
doc[0] = query
vocab = []

for i in range(n):
    t = input()
    doc.append(t)
    
for s in doc:
    vocab.extend(s.split())
vocab = list(set(vocab))


l = len(vocab)
vec = [{} for i in range(n + 1)]

for i in range(n + 1):
    for v in vocab:
        vec[i][v] = 0
    temp = doc[i].split()
    for e in temp:
        if e in vec[i]:
            vec[i][e] += 1
res = []
for i in range(1, n + 1):
    up = 0
    downa = 0
    downb = 0
    for el in vec[0]:
        up += vec[0][el] * vec[i][el]
        downa += vec[0][el] ** 2
        downb += vec[i][el] ** 2
    down = downa * 0.5 * downb * 0.5
    res.append([doc[i], up / down])
res.sort(reverse=True, key=lambda x: x[1])
for el in res:
    print(el[0] + "(" + str(round(el[1], 2)) + ")")