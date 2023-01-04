# #* Liste işlemlerinde çalışmalarım
#*Liste 1 de ve liste 2 bulunan elemanları bulduk
# list = []
# list2=[1,2,3,4,5,6,7,8,9,12]
# list3=[]
# for i in range(1,100):
#     if i%2==0 and i%3==0:
#         list.append(i)
#         if i in list2:
#             list3.append(i)
# print(list)
# print(list3)

#* üsteekki işlemin tek satırda yapılması
# list=[i for i in range(1,100000) if i%2==0 and i%3==0]
# print(list)
#*liste içindeki listenin elamanlarıyla işem yapılması
# list=[[1,2,3,4],[5,6,7,8],[9]]
# list2=[]
# for i in list:
#     for j in i:
#         list2.append(j*j)
# print(list2)
#* üsteekki işlemin tek satırda yapılması
# list2=[j*j for i in list for j in i]
# print(list2)
