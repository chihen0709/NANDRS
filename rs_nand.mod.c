#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

#ifdef CONFIG_UNWINDER_ORC
#include <asm/orc_header.h>
ORC_HEADER;
#endif

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif



static const char ____versions[]
__used __section("__versions") =
	"\x18\x00\x00\x00\x52\xc1\x8b\xb0"
	"put_mtd_device\0\0"
	"\x1c\x00\x00\x00\xca\x39\x82\x5b"
	"__x86_return_thunk\0\0"
	"\x14\x00\x00\x00\xbb\x6d\xfb\xbd"
	"__fentry__\0\0"
	"\x14\x00\x00\x00\x5c\x82\x2f\xeb"
	"init_rs_gfp\0"
	"\x18\x00\x00\x00\x71\x88\x0c\xc2"
	"get_mtd_device\0\0"
	"\x1c\x00\x00\x00\x63\xa5\x03\x4c"
	"random_kmalloc_seed\0"
	"\x18\x00\x00\x00\x5a\xac\xfc\xc7"
	"kmalloc_caches\0\0"
	"\x18\x00\x00\x00\x60\xfd\x65\x95"
	"kmalloc_trace\0\0\0"
	"\x14\x00\x00\x00\x92\xbf\xad\x63"
	"encode_rs8\0\0"
	"\x14\x00\x00\x00\x24\xb6\x3b\xdb"
	"mtd_write\0\0\0"
	"\x10\x00\x00\x00\xba\x0c\x7a\x03"
	"kfree\0\0\0"
	"\x14\x00\x00\x00\x55\x74\x3f\xdd"
	"mtd_read\0\0\0\0"
	"\x14\x00\x00\x00\xe1\xb9\x29\x1d"
	"decode_rs8\0\0"
	"\x28\x00\x00\x00\xb3\x1c\xa2\x87"
	"__ubsan_handle_out_of_bounds\0\0\0\0"
	"\x1c\x00\x00\x00\xcb\xf6\xfd\xf0"
	"__stack_chk_fail\0\0\0\0"
	"\x10\x00\x00\x00\x7e\x3a\x2c\x12"
	"_printk\0"
	"\x10\x00\x00\x00\xa1\x1d\x58\xfd"
	"free_rs\0"
	"\x18\x00\x00\x00\x72\x3f\x86\xba"
	"module_layout\0\0\0"
	"\x00\x00\x00\x00\x00\x00\x00\x00";

MODULE_INFO(depends, "mtd,reed_solomon");


MODULE_INFO(srcversion, "2D7CC749FA9445BCB84098F");
