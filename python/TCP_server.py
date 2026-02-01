# import socket 
# import threading

# IP = "0.0.0.0"
# PORT = 9998

# def main():
#     server = socket.socket(socket.AF_INET,socket.SOCK_STREAM)
#     server.bind((IP,PORT))
#     server.listen(5)
#     print(f'[*] Listening on {IP} : {PORT}')
#     while True:
#         client,address = server.accept()
#         print(f'[*] Accept0.0.0.0"ed connection from {address[0]}:{address[1]}')
#         client_handler = threading.Thread(target=handle_client, args=(client,))
#         client_handler.start()
        

# def handle_client(client_socket):
#     with client_socket as sock:
#         request = sock.recv(1024)
#         print(f'[*] Received: {request.decode("utf-8")}')
#         sock.send(b'ACK')
        

# if __name__ == '__main__':
#     main()



# def real(name,callback_func):
#     #++print(f"Hello, {name}")
#     callback_func(name)
    

# def goodbye(person_name):
#     print(f"Bye {person_name}")
    

# def wish(person_name):
#     print(f"Wish {person_name}")
    
# real("bike",goodbye)
# real("car",wish)



# inp = int(input())    
# match inp:
#     case 1:
#         print("OK")
#     case 2:
#         print("Not OK")
#     case _:
#         print("Invalid")


# match attempts:
#     case 5:
#         print("   O   ")
#     case 4:
#         print("   O   ")
#         print("   |   ")
#     case 3:
#         print("   O   ")
#         print("  /|   ")
#     case 2:
#         print("   O   ")
#         print("  /|\\  ")
#     case 1:
#         print("   O   ")
#         print("  /|\\   ")
#         print("  /      ")        