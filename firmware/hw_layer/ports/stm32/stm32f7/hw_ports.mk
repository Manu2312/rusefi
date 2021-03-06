include $(PROJECT_DIR)/hw_layer/ports/stm32/stm32_common.mk

HW_LAYER_EMS += $(PROJECT_DIR)/hw_layer/ports/stm32/stm32f7/stm32f7xx_hal_flash.c \
				$(PROJECT_DIR)/hw_layer/ports/stm32/stm32f7/stm32f7xx_hal_flash_ex.c

HW_LAYER_EMS_CPP += $(PROJECT_DIR)/hw_layer/ports/stm32/stm32f7/mpu_util.cpp

DDEFS += -DSTM32F767xx
LDSCRIPT = $(PROJECT_DIR)/hw_layer/ports/stm32/stm32f7/STM32F76xxI.ld
ALLCSRC += $(CHIBIOS)/os/hal/boards/ST_NUCLEO144_F767ZI/board.c
