x=int(input("bir x sayısı giriniz: "))
y=int(input("bir y sayısı giriniz: "))
def tekçift():
    if x %2==0 and y %2 == 0:
        print("X ve Y çifttir")
    elif x %2==0 or y %2==0:
        print("X Yada Y çifttir")
    else:
        print("X ve Y Tektir")
tekçift()

