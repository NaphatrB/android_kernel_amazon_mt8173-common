MTK_PLATFORM := $(subst ",,$(CONFIG_MTK_PLATFORM))
subdir-ccflags-y += -Werror -I$(srctree)/drivers/misc/mediatek/include
subdir-ccflags-y += -Werror -I$(srctree)/drivers/misc/mediatek/include/mt-plat/$(MTK_PLATFORM)/include
subdir-ccflags-y += -Werror -I$(srctree)/drivers/misc/mediatek/include/mt-plat

obj-$(CONFIG_AMAZON_KLOG_CONSOLE)	+= klog_console.o
obj-$(CONFIG_AMAZON_SIGN_OF_LIFE) += sign_of_life.o
obj-$(CONFIG_AMAZON_SIGN_OF_LIFE_MTK) += sign_of_life_mtk.o
