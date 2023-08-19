################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/util/spanparsing.cpp \
../src/util/strencoding.cpp \
../src/util/string.cpp 

CPP_DEPS += \
./src/util/spanparsing.d \
./src/util/strencoding.d \
./src/util/string.d 

OBJS += \
./src/util/spanparsing.o \
./src/util/strencoding.o \
./src/util/string.o 


# Each subdirectory must supply rules for building sources it contributes
src/util/%.o: ../src/util/%.cpp src/util/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -std=c++17 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src-2f-util

clean-src-2f-util:
	-$(RM) ./src/util/spanparsing.d ./src/util/spanparsing.o ./src/util/strencoding.d ./src/util/strencoding.o ./src/util/string.d ./src/util/string.o

.PHONY: clean-src-2f-util

