#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x7377b0b2, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x5640408e, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0xe1963afc, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x3f074b99, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x4a813ea8, __VMLINUX_SYMBOL_STR(sysfs_remove_file_ns) },
	{ 0x7834e508, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x7a14bf2, __VMLINUX_SYMBOL_STR(sysfs_create_file_ns) },
	{ 0x84fbaaa1, __VMLINUX_SYMBOL_STR(kobject_create_and_add) },
	{ 0xc7afd6d9, __VMLINUX_SYMBOL_STR(kernel_kobj) },
	{ 0x13b297d3, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0xf5f1341c, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x5315bca4, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x3b29433f, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "71E1E1F48B6E13A6CB834E4");
