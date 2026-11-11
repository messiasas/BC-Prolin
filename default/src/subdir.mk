################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/callbacks.c \
../src/checkEvents.c \
../src/inputValor.c \
../src/main.c \
../src/updateTables.c 

OBJS += \
./src/callbacks.o \
./src/checkEvents.o \
./src/inputValor.o \
./src/main.o \
./src/updateTables.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC Compiler'
	"C:/prolin_sdk_win-3.8/prolin_sdk_win-3.8/sdk/toolchains/arm-4.6.3/bin/arm-none-linux-gnueabi-gcc" -O0 -g2 -Wall -funwind-tables -I"C:/workspaces2/BCprolin-testes/inc" -I"C:/workspaces2/BCprolin-testes/src" -I"C:/prolin_sdk_win-3.8/prolin_sdk_win-3.8/sdk/platforms/prolin-dev-4.6.3/include" -I"C:/prolin_sdk_win-3.8/prolin_sdk_win-3.8/sdk/platforms/prolin-dev-4.6.3/include/freetype2" -I"C:/prolin_sdk_win-3.8/prolin_sdk_win-3.8/sdk/toolchains/arm-4.6.3/arm-none-linux-gnueabi/libc/usr/include" -I"C:/prolin_sdk_win-3.8/prolin_sdk_win-3.8/sdk/toolchains/arm-4.6.3/lib/gcc/arm-none-linux-gnueabi/4.6.3/include" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/callbacks.o ./src/checkEvents.o ./src/inputValor.o ./src/main.o ./src/updateTables.o

.PHONY: clean-src

