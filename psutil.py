import psutil

# A very basic CPU, Memory and Disk managament.

print(f"CPU Usage: {psutil.cpu_percent()}%")
print(f"RAM Usage: {psutil.virtual_memory().percent}%")
print(f"Disk usage: {psutil.disk_usage('/').percent}%")
