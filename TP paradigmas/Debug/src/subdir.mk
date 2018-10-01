################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/TP\ paradigmas.c 

OBJS += \
./src/TP\ paradigmas.o 

C_DEPS += \
./src/TP\ paradigmas.d 


# Each subdirectory must supply rules for building sources it contributes
src/TP\ paradigmas.o: ../src/TP\ paradigmas.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/TP paradigmas.d" -MT"src/TP\ paradigmas.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


