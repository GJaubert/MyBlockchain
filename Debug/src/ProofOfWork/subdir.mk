################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/ProofOfWork/ProofOfWork.cpp 

CPP_DEPS += \
./src/ProofOfWork/ProofOfWork.d 

OBJS += \
./src/ProofOfWork/ProofOfWork.o 


# Each subdirectory must supply rules for building sources it contributes
src/ProofOfWork/%.o: ../src/ProofOfWork/%.cpp src/ProofOfWork/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/local/boost_1_82_0/ -O0 -g3 -Wall -c -fmessage-length=0 -std=c++14 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src-2f-ProofOfWork

clean-src-2f-ProofOfWork:
	-$(RM) ./src/ProofOfWork/ProofOfWork.d ./src/ProofOfWork/ProofOfWork.o

.PHONY: clean-src-2f-ProofOfWork

