import socket
import subprocess

# Sunucunun IP'si ve portu
HOST = '0.0.0.0'  # Herkesten dinle
PORT = 9999

# Socket başlat
server = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
server.bind((HOST, PORT))
server.listen(5)

print(f"Popup server başlatıldı. {HOST}:{PORT} dinleniyor...")

while True:
    conn, addr = server.accept()
    print(f"Bağlantı alındı: {addr}")

    data = conn.recv(1024).decode('utf-8').strip()
    if not data:
        continue

    print(f"Gelen mesaj: {data}")

    # Zenity ile popup çıkar
    subprocess.Popen(['zenity', '--info', '--text', data, '--title', 'Uyarı'])

    conn.close()

