def calculate_winners(ashok_row, anand_row):
    def count_possibilities(row):
        count = 0
        for i in range(len(row) - 2):
            if row[i] != row[i + 1] and row[i + 1] != row[i + 2] and row[i] != row[i + 2]:
                count += 1
        return count

    ashok_possibilities = count_possibilities(ashok_row)
    anand_possibilities = count_possibilities(anand_row)

    if ashok_possibilities > anand_possibilities:
        return "Ashok"
    elif ashok_possibilities < anand_possibilities:
        return "Anand"
    else:
        return "Draw"

# Example Usage
ashok_row = input().strip()
anand_row = input().strip()
print(calculate_winners(ashok_row, anand_row))

