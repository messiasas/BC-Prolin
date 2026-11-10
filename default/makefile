################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/subdir.mk
-include objects.mk

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := BCprolin-testes
BUILD_ARTIFACT_EXTENSION :=
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 
NOSTRIP += \
app.nostrip \


# All Target
all: main-build

# Main-build Target
main-build: BCprolin-testes

# Tool invocations
BCprolin-testes: $(NOSTRIP) makefile objects.mk $(OPTIONAL_TOOL_DEPS)
	@echo 'Building target: $@'
	@echo 'Invoking: GCC Strip'
	"C:/prolin_sdk_win-3.8/prolin_sdk_win-3.8/sdk/toolchains/arm-4.6.3/bin/arm-none-linux-gnueabi-strip" -g $(NOSTRIP) -o"BCprolin-testes"
	@echo 'Finished building target: $@'
	@echo ' '

app.nostrip: $(OBJS) $(USER_OBJS) makefile objects.mk $(OPTIONAL_TOOL_DEPS)
	@echo 'Invoking: GCC Linker'
	"C:/prolin_sdk_win-3.8/prolin_sdk_win-3.8/sdk/toolchains/arm-4.6.3/bin/arm-none-linux-gnueabi-gcc" -o"app.nostrip" $(OBJS) $(USER_OBJS) $(LIBS) -Wl,-rpath=./lib,-rpath=/opt/lib,-rpath=/system/lib -Wl,-rpath-link,"C:/prolin_sdk_win-3.8/prolin_sdk_win-3.8/sdk/platforms/prolin-dev-4.6.3/lib" -g -losal -lD_DEVICE_LIB_v615 -lF_AE_LIB_v254 -lF_DPAS_LIB_v155 -lF_EMV_LIB_v660 -lF_ENTRY_LIB_v560 -lF_MC_LIB_v558_01 -lF_PUBLIC_LIB_v115 -lF_WAVE_LIB_v359_02 -lPPCOMP_Prolin_v162 -lxui -lts -L"C:/workspaces2/BCprolin-testes/lib" -L"C:/prolin_sdk_win-3.8/prolin_sdk_win-3.8/sdk/platforms/prolin-dev-4.6.3/lib"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) BCprolin-testes app.nostrip
	-@echo ' '

.PHONY: all clean dependents main-build

-include ../makefile.targets
