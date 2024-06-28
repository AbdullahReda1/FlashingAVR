import openpyxl
import os


# Read Excel file to get client configurations

wb    = openpyxl.load_workbook(r'config.xlsx')
sheet = wb.active

PORT = sheet['A2'].value
PIN  = sheet['B2'].value
DIR  = sheet['C2'].value
VAL  = sheet['D2'].value


# Write in file config.h 

p1 = '''#ifndef 	MCAL_DIO_DIO_config_H_
#define 	MCAL_DIO_DIO_config_H_


#define	LED_PORT	'''

p2 = '#define	LED_PIN	'

p3 = '#define	STATUS_DIRECTION	'

p4 = '#define	STATUS_VALUE	'

p5 = '''

#endif'''

with open('Code/DIO_config.h', 'w') as file:
    file.write(p1)
    file.write(PORT)
    file.write('\n')
    file.write('\n')
    file.write(p2)
    file.write(PIN)
    file.write('\n')
    file.write('\n')
    file.write(p3)
    file.write(DIR)
    file.write('\n')
    file.write('\n')
    file.write(p4)
    file.write(VAL)
    file.write('\n')
    file.write(p5)


# Call system to run file.c and generate file.hex

os.system("avr-gcc -mmcu=atmega32 -c Code/DIO_program.c -o Code/DIO_program.o")
os.system("avr-gcc -mmcu=atmega32 -c Code/APP.c -o Code/APP.o")
os.system("avr-gcc -mmcu=atmega32 Code/DIO_program.o Code/APP.o -o Code/APP.elf")
os.system("avr-objcopy -O ihex Code/APP.elf Code/APP.hex")