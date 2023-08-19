################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/uint256/uint256.cpp 

CPP_DEPS += \
./src/uint256/uint256.d 

OBJS += \
./src/uint256/uint256.o 


# Each subdirectory must supply rules for building sources it contributes
src/uint256/%.o: ../src/uint256/%.cpp src/uint256/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -std=c++17 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src-2f-uint256

clean-src-2f-uint256:
	-$(RM) ./src/uint256/uint256.d ./src/uint256/uint256.o

.PHONY: clean-src-2f-uint256

