
matrix = []
for i in range(5):
    row = list(map(int, input().split()))
    matrix.append(row)

for i in range(5):
    for j in range(5):
        if matrix[i][j] == 1:
            row_pos = i
            col_pos = j
            break
moves = abs(row_pos - 2) + abs(col_pos - 2)
print(moves)
