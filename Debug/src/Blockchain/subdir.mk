################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Blockchain/Blockchain.cpp 

CPP_DEPS += \
./src/Blockchain/Blockchain.d 

OBJS += \
./src/Blockchain/Blockchain.o 


# Each subdirectory must supply rules for building sources it contributes
src/Blockchain/%.o: ../src/Blockchain/%.cpp src/Blockchain/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/local/boost_1_82_0/ -O0 -g3 -Wall -c -fmessage-length=0 -std=c++14 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src-2f-Blockchain

clean-src-2f-Blockchain:
	-$(RM) ./src/Blockchain/Blockchain.d ./src/Blockchain/Blockchain.o

.PHONY: clean-src-2f-Blockchain

