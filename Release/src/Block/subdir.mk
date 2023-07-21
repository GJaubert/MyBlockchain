################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Block/Block.cpp 

CPP_DEPS += \
./src/Block/Block.d 

OBJS += \
./src/Block/Block.o 


# Each subdirectory must supply rules for building sources it contributes
src/Block/%.o: ../src/Block/%.cpp src/Block/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/local/boost_1_82_0 -I/opt/homebrew/include -O3 -Wall -c -fmessage-length=0 -std=c++14 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src-2f-Block

clean-src-2f-Block:
	-$(RM) ./src/Block/Block.d ./src/Block/Block.o

.PHONY: clean-src-2f-Block

