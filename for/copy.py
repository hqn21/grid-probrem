path = "result.txt"
f = open(path, 'w')
data = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'aa', 'bb', 'cc', 'dd', 'ee', 'ff', 'gg', 'hh', 'ii', 'jj', 'kk', 'll', 'mm', 'nn', 'oo', 'pp', 'qq', 'rr', 'ss', 'tt', 'uu', 'vv', 'ww']
for num in range(0, 49):
    f.write("for(int a = 0; a < 49; a++) {\n")
    for i in range(1, num + 1):
        f.write("for(int " + data[i] + " = 0; " + data[i] + " < " + data[i-1] + "; " + data[i] + "++) {\n")
    f.write('system("clear");\n')
    f.write("init();\n")
    for i in range(0, num + 1):
        f.write("map[" + data[i] + "/7][" + data[i] + "%7] = -1;\n")
    f.write("check();\n")
    f.write("show();\n")
    for i in range(0, num + 1):
        f.write("}\n")
    f.write("\n")