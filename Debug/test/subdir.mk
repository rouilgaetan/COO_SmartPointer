################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../test/COOComplexMock.cpp \
../test/COOComplexTest.cpp \
../test/COOObjectTest.cpp \
../test/COOStringTest.cpp \
../test/coorefTest.cpp 

OBJS += \
./test/COOComplexMock.o \
./test/COOComplexTest.o \
./test/COOObjectTest.o \
./test/COOStringTest.o \
./test/coorefTest.o 

CPP_DEPS += \
./test/COOComplexMock.d \
./test/COOComplexTest.d \
./test/COOObjectTest.d \
./test/COOStringTest.d \
./test/coorefTest.d 


# Each subdirectory must supply rules for building sources it contributes
test/%.o: ../test/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/home/rouil/Documents/M1/cppunit/include -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


