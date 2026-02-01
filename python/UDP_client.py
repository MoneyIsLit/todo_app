import socket

target_host = "127.0.0.1"
target_port = 9997


client = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

client.sendto(b"AAABBBCCC",(target_host,target_port))

data ,addr = client.recvfrom(4096)
print(data.decode())
client.close()
# import socket 


# target_host = "www.google.com"
# target_port = 80


# #create a scoket object

# client = socket.socket(socket.AF_INET,socket.SOCK_STREAM)

# #connect the client 

# client.connect((target_host,target_port))

# client.send(b"GET / HTTP/1.1\r\nHost: google.com\r\n\r\n")

# response = client.recv(4096)

# print(response.decode())
# client.close()