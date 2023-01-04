def BCDDönüştürme(z) :
    if (z == 0) :
        print("0000")
        return
    ters = 0
    while (z > 0) :
        ters = ters * 10 + (z % 10)
        z = z // 10
    while (ters > 0) :
        b = str(ters % 10)
        print("{0:04b}".format(int(b, 16)), end = " ")
        ters = ters // 10
x = int(input("toplamak isteğiniz sayıyı giriniz "))
y =  int(input("toplamak isteğiniz sayıyı giriniz "))
z = x+y
print("\n",x,"sayısının bcd hali: ")
BCDDönüştürme(x)
print("\n",y,"sayısının bcd hali :")
BCDDönüştürme(y)

print("\nTopladığımızda elde ettiğmiz",z,"sayısının bcd hali: ")

BCDDönüştürme(z)


