################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/COOComplex.cpp \
../src/COOObject.cpp \
../src/COOString.cpp 

OBJS += \
./src/COOComplex.o \
./src/COOObject.o \
./src/COOString.o 

CPP_DEPS += \
./src/COOComplex.d \
./src/COOObject.d \
./src/COOString.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/home/rouil/Documents/M1/cppunit/include -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


