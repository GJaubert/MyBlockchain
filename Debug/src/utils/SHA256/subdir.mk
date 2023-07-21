################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/utils/SHA256/SHA256.cpp 

CPP_DEPS += \
./src/utils/SHA256/SHA256.d 

OBJS += \
./src/utils/SHA256/SHA256.o 


# Each subdirectory must supply rules for building sources it contributes
src/utils/SHA256/%.o: ../src/utils/SHA256/%.cpp src/utils/SHA256/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/local/boost_1_82_0/ -O0 -g3 -Wall -c -fmessage-length=0 -std=c++14 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src-2f-utils-2f-SHA256

clean-src-2f-utils-2f-SHA256:
	-$(RM) ./src/utils/SHA256/SHA256.d ./src/utils/SHA256/SHA256.o

.PHONY: clean-src-2f-utils-2f-SHA256

