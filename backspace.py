def backspaceCompare(s, t):
        i, j = len(s) - 1, len(t) - 1

        while i >= 0 or j >= 0:
            if i >= 0 and s[i] == '#' or j >= 0 and t[j] == '#':
                if i >= 0 and s[i] == '#':
                    back = 2
                    while back:
                        back -= 1
                        i -= 1
                        if i >= 0 and s[i] == '#':
                            back += 2

                if j >= 0 and t[j] == '#':
                    back = 2
                    while back:
                        back -= 1
                        j -= 1
                        if j >= 0 and t[j] == '#':
                            back += 2
            else:
                if s[i] != t[j]:
                    return False
                else:
                    i -= 1
                    j -= 1

        return True

print (backspaceCompare("aaa###a","aaaa###a"))
