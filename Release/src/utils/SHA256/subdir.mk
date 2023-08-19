################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/utils/SHA256/SHA256.cpp 

OBJS += \
./src/utils/SHA256/SHA256.o 

CPP_DEPS += \
./src/utils/SHA256/SHA256.d 


# Each subdirectory must supply rules for building sources it contributes
src/utils/SHA256/%.o: ../src/utils/SHA256/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


