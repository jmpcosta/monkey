################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../code/target/target.cpp 

OBJS += \
./code/target/target.o 

CPP_DEPS += \
./code/target/target.d 


# Each subdirectory must supply rules for building sources it contributes
code/target/%.o: ../code/target/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -DMONKEY_TRACING -I"/home/joao/workspace/monkey/library/code" -I"/home/joao/workspace/arta/code" -O0 -g3 -Wall -c -fmessage-length=0 -v -fPIC -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


