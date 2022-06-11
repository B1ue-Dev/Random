import platform
import datetime
import psutil

cpu = psutil.cpu_percent()
architecture = platform.machine()
processor = platform.processor()
if processor == None:
    pro = "Cannot read the CPU information"
else:
    pro = processor
mode = platform.architecture()
core = psutil.cpu_count(logical=False)
logical = psutil.cpu_count(logical=True)
base = f"{psutil.cpu_freq().max/1000}"
memory = psutil.virtual_memory().percent
total_memory = psutil.virtual_memory().total/1073741824
if total_memory < 1:
    total = f"{total_memory * 1024} MB"
elif total_memory > 1:
    total = f"{total_memory} GB"
available_mem = psutil.virtual_memory().available/1073741824
if available_mem < 1:
    available = f"{available_mem * 1024} MB"
elif available_mem > 1:
    available = f"{available_mem} GB"
disk = psutil.disk_usage('/').percent
os = platform.system()
release = platform.release()
build = platform.version()
battery = psutil.sensors_battery() 
if battery == None:
    bat = "No battery is detected"
else:
    bat = f"{battery.percent}%"
    if battery.power_plugged == False:
        state = "Discharging"
    else:
        state = "Plugged in"
boot = datetime.datetime.fromtimestamp(psutil.boot_time()).strftime("%Y-%m-%d %H:%M:%S")

print()
print('                    System Properties                    ')
print()
print('---------------------CPU Information---------------------')
print(f"CPU: {pro}, {core} Cores, {logical} Logical Processors")
print(f"CPU Architecture: {architecture}")
print(f"CPU Usage: {cpu}%")
print(f"CPU Base Speed: {base} GHz")
print()
print('--------------------Memory Information-------------------')
print(f"Memory Usage: {memory}%")
print(f"Total Memory: {total}")
print(f"Available Memory: {available}")
print()
print('---------------------Disk Information--------------------')
print(f"Disk Usage: {disk}%")
print()
print('---------------------System Properties-------------------')
print(f"Operating System: {os} {release}")
print(f"Build: {build}")
print(f"Boot time: {boot}")
print(f"Battery: {bat}, {state}")
