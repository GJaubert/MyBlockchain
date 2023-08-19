################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/u256/blaseblob.cpp 

OBJS += \
./src/u256/blaseblob.o 

CPP_DEPS += \
./src/u256/blaseblob.d 


# Each subdirectory must supply rules for building sources it contributes
src/u256/%.o: ../src/u256/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


