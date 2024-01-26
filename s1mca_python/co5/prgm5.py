import csv

data = {"p1":{'Name': 'John', 'Age': 30, 'City': 'New York'},
        "p2":{'Name': 'Deepu', 'Age': 20, 'City': ' York'},
        "p3":{'Name': 'ALida', 'Age':20, 'City': 'New '}
}


f=open("new.csv",'w')
content=csv.writer(f,lineterminator='\n')
content.writerow(['name','age','city']) 



for key,val in data.items():
    content.writerow([val['Name'],val['Age'],val['City']])


# # Open the CSV file in write mode
# with open('new.csv', 'w', newline='') as file:
#     writer = csv.writer(file)
    
#     # Write the header row
#     writer.writerow(['ID', 'Name', 'Age', 'City'])
    
#     # Write the data rows
#     for key, value in data.items():
#         writer.writerow([key, value['Name'], value['Age'], value['City']])


