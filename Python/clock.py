import time
from datetime import datetime # Import modules.

while True: # Loop forever.
	try:
		now = datetime.now() # Get the current date and time.
		times = now.strftime("%m/%d/%Y %H:%M:%S") # Format the date and time.
		print(times, end="\r", flush=True) # Print the date and time, with a carriage return.
		time.sleep(1) # Wait 1 second before running the loop again.
	except KeyboardInterrupt: # If the user presses Ctrl+C.
		print("\n") # Print a newline.
		break # Exit the loop and stop the program.
