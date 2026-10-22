/* NSMBU Deluxe (Switch) v1.0.0 -- libs subsystem prototypes
 *
 * GENERATED from decompiled evidence. Each prototype is the exact
 * signature Hex-Rays produced for that function, tagged with its RVA.
 * Types are inferred, not from a symbol table: treat `int a1` as
 * "first argument, type not yet established" rather than as a real int.
 *
 * Do not edit by hand. Regenerate with scripts/make_decompiled_corpus.py.
 */
#pragma once

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#include "nsmbudx_types.h"
#include "structs.h"







/* RVAs are image-relative: VA = 0x60000000 + RVA */

/* ---- libs.c ---- */
int __fastcall sub_608007BC(int a1);  /* 0x008007bc */
int __fastcall sub_60800884(struct sead_IDisposer *a1);  /* 0x00800884 */
int __fastcall sub_60800894(int a1, int a2, int a3);  /* 0x00800894 */
int __fastcall sub_60800960(struct sead_IDisposer *a1);  /* 0x00800960 */
int __fastcall sub_60800970(int result, int a2);  /* 0x00800970 */
int __fastcall sub_608009D4(int a1, int a2);  /* 0x008009d4 */
int __fastcall sub_608009EC(int result, float *a2);  /* 0x008009ec */
int __fastcall sub_60800A0C(int result);  /* 0x00800a0c */
int __fastcall sub_60800A14(int result);  /* 0x00800a14 */
int __fastcall sub_60800A24(int result, float *a2);  /* 0x00800a24 */
int __fastcall sub_60800A5C(int result, int a2);  /* 0x00800a5c */
int __fastcall sub_60800B08(float *a1, float *a2, int a3);  /* 0x00800b08 */
int __fastcall sub_60800BCC(int result, _DWORD *a2, float *a3);  /* 0x00800bcc */
int __fastcall sub_60800C84(int a1, float **a2, int a3);  /* 0x00800c84 */
int __fastcall sub_60800CB8(int a1);  /* 0x00800cb8 */
int __fastcall sub_60800CC0(int a1, int a2);  /* 0x00800cc0 */
int __fastcall sub_60800F00(int a1);  /* 0x00800f00 */
int __fastcall sub_60801110(struct sead_IDisposer *a1);  /* 0x00801110 */
int __fastcall sub_60801120(int a1, float **a2, int a3, int a4, int a5);  /* 0x00801120 */
void __fastcall sub_6080126C(_DWORD *a1, float **a2);  /* 0x0080126c */
bool __fastcall sub_608012F4(int a1);  /* 0x008012f4 */
int __fastcall sub_60801334(int a1, int a2);  /* 0x00801334 */
int __fastcall sub_608013A8(_DWORD *a1, _DWORD *a2, float *a3);  /* 0x008013a8 */
int __fastcall sub_608013D0(int *a1, float *a2, int a3, int a4);  /* 0x008013d0 */
int __fastcall sub_608014C4(int result, int a2);  /* 0x008014c4 */
int __fastcall sub_608014E8(struct sead_IDisposer *a1);  /* 0x008014e8 */
int __fastcall sub_608014F8(int a1, int a2, int a3, int a4);  /* 0x008014f8 */
int __fastcall sub_6080161C(int a1, int a2, int a3);  /* 0x0080161c */
bool __fastcall sub_608016C8(int a1);  /* 0x008016c8 */
int __fastcall sub_608016E8(int result, float *a2, int a3, int a4);  /* 0x008016e8 */
int __fastcall sub_60801774(float *a1, int a2);  /* 0x00801774 */
int __fastcall sub_60801818(int a1, int a2, int a3);  /* 0x00801818 */
int __fastcall sub_60801B88(struct sead_IDisposer *a1);  /* 0x00801b88 */
int __fastcall sub_60801B98(int a1, int *a2, _DWORD *a3);  /* 0x00801b98 */
int __fastcall sub_60801C9C(int a1, float *a2, int a3, int a4, int a5, int a6);  /* 0x00801c9c */
void __fastcall sub_60801DB0(float *a1, int a2, float *a3, float *a4, int a5);  /* 0x00801db0 */
int __fastcall sub_60801EA4(struct sead_IDisposer *a1);  /* 0x00801ea4 */
int __fastcall sub_60801EB4(struct sead_IDisposer *a1);  /* 0x00801eb4 */
int __fastcall sub_60801EC4(int a1, int a2);  /* 0x00801ec4 */
int __fastcall sub_60801F98(float *a1, int a2);  /* 0x00801f98 */
int __fastcall sub_60802020(int a1, float **a2, float *a3);  /* 0x00802020 */
int __fastcall sub_60802374(int a1);  /* 0x00802374 */
bool __fastcall sub_60802808(int a1, int a2);  /* 0x00802808 */
int __fastcall sub_60802830(unsigned int a1);  /* 0x00802830 */
int __fastcall sub_60802928(_DWORD *a1, int a2, int a3, int a4, int a5);  /* 0x00802928 */
void __fastcall sub_60802E70(_DWORD *a1, int a2, int a3, float *a4, int a5);  /* 0x00802e70 */
int __fastcall sub_608032F0(struct sead_IDisposer *a1);  /* 0x008032f0 */
int __fastcall sub_60803300(int a1, int a2, int a3, char a4, int a5, int a6);  /* 0x00803300 */
unsigned int __fastcall sub_608034D4(int a1, int a2, int a3, char a4, __int64 a5);  /* 0x008034d4 */
int __fastcall sub_608036C4(int a1, float *a2, float *a3);  /* 0x008036c4 */
int __fastcall sub_608039B8(int a1);  /* 0x008039b8 */
int __fastcall sub_60803A08(int result);  /* 0x00803a08 */
int __fastcall sub_60803A48(int a1, int a2);  /* 0x00803a48 */
bool __fastcall sub_60803A98(int a1);  /* 0x00803a98 */
int __fastcall sub_60803AF0(struct sead_IDisposer *a1);  /* 0x00803af0 */
int __fastcall sub_60803B24(int result, char a2, char a3, char a4, char a5);  /* 0x00803b24 */
int __fastcall sub_60803B6C(int a1, bool *a2);  /* 0x00803b6c */
bool __fastcall sub_60803E0C(int a1, int a2);  /* 0x00803e0c */
int __fastcall sub_60803F50(int a1, _DWORD *a2);  /* 0x00803f50 */
int __fastcall sub_60804324(int result, float *a2);  /* 0x00804324 */
int __fastcall sub_608043C0(struct sead_IDisposer *a1);  /* 0x008043c0 */
int __fastcall sub_60804418(int a1);  /* 0x00804418 */
int __fastcall sub_60804430(int a1);  /* 0x00804430 */
int __fastcall sub_60804464(struct sead_IDisposer *a1);  /* 0x00804464 */
void __fastcall sub_608044F0(int a1, int a2, float *a3, _BYTE *a4, int a5, int a6);  /* 0x008044f0 */
int __fastcall sub_60804D48(struct sead_IDisposer *a1);  /* 0x00804d48 */
int __fastcall sub_60804D58(int result, int a2, char a3);  /* 0x00804d58 */
unsigned int __fastcall sub_60804F14(unsigned int result, int a2);  /* 0x00804f14 */
unsigned int __fastcall sub_60804F90(unsigned int result, int a2);  /* 0x00804f90 */
unsigned int __fastcall sub_6080500C(unsigned int result, int a2);  /* 0x0080500c */
unsigned int __fastcall sub_60805088(unsigned int result, int a2);  /* 0x00805088 */
int __fastcall sub_60805268(_DWORD *a1, _BYTE *a2);  /* 0x00805268 */
int __fastcall sub_608052F0(struct sead_IDisposer *a1);  /* 0x008052f0 */
int __fastcall sub_60805300(int a1, int a2);  /* 0x00805300 */
int __fastcall sub_60805474(_DWORD *a1);  /* 0x00805474 */
int __fastcall sub_60805520(_DWORD *a1);  /* 0x00805520 */
int __fastcall sub_60805530(int *a1, int a2, int a3);  /* 0x00805530 */
bool __fastcall sub_6080554C(int a1, int a2);  /* 0x0080554c */
int __fastcall sub_6080577C(int a1, int a2);  /* 0x0080577c */
int __fastcall sub_60805814(int a1, int a2);  /* 0x00805814 */
int __fastcall SoundSystem_createInstance_helper_helper_805A04(int a1);  /* 0x00805a04 */
int __fastcall SoundSystem_createInstance_helper_helper_805A0C(int a1);  /* 0x00805a0c */
int __fastcall SoundSystem_createInstance_helper_helper_805A14(int a1);  /* 0x00805a14 */
int __fastcall SoundSystem_createInstance_helper_helper_805A1C(int a1);  /* 0x00805a1c */
int __fastcall sub_60805B4C(_DWORD *a1);  /* 0x00805b4c */
int __fastcall sub_60805BA8(int a1);  /* 0x00805ba8 */
int __fastcall sub_60805BB0(int a1);  /* 0x00805bb0 */
int __fastcall sub_60805BB8(int a1);  /* 0x00805bb8 */
int __fastcall sub_60805BFC(_DWORD *a1);  /* 0x00805bfc */
int __fastcall sub_60805C0C(int a1);  /* 0x00805c0c */
int __fastcall sub_60805C24(_DWORD *a1);  /* 0x00805c24 */
int __fastcall sub_60805C28(int a1);  /* 0x00805c28 */
bool __fastcall sub_60805C2C(int a1, int a2);  /* 0x00805c2c */
int __fastcall sub_60805DA0(int a1, int a2);  /* 0x00805da0 */
int __fastcall sub_60805DB0(int a1, int a2, int a3);  /* 0x00805db0 */
int __fastcall sub_60805DD8(int a1, int a2);  /* 0x00805dd8 */
int __fastcall sub_60805EB8(int a1, int a2);  /* 0x00805eb8 */
int __fastcall sub_60805EEC(int a1, int a2);  /* 0x00805eec */
bool __fastcall sub_60805F20(int a1, int a2);  /* 0x00805f20 */
int __fastcall sub_608060A4(int a1, int a2);  /* 0x008060a4 */
int __fastcall sub_60806174(int a1, char a2, int a3);  /* 0x00806174 */
int __fastcall sub_608061B8(int a1, int a2);  /* 0x008061b8 */
bool __fastcall sub_60806308(int a1, int a2);  /* 0x00806308 */
int __fastcall sub_6080650C(_DWORD *a1);  /* 0x0080650c */
int __fastcall sub_60806628(int a1);  /* 0x00806628 */
int __fastcall sub_60806724(int a1, int a2);  /* 0x00806724 */
unsigned int __fastcall sub_6080686C(int a1);  /* 0x0080686c */
int __fastcall sub_60806A04(int a1, int a2, _DWORD *a3, float32x4_t *a4, int a5, char a6);  /* 0x00806a04 */
int __fastcall sub_60806AE4(int result, _DWORD *a2, float32x4_t *a3, char a4, int a5, int a6, int a7);  /* 0x00806ae4 */
int __fastcall sub_60806D7C(int a1, int a2, int a3, int a4, int a5);  /* 0x00806d7c */
int __fastcall sub_60806DC8(int a1, int a2, int a3, int a4);  /* 0x00806dc8 */
int __fastcall sub_60806EC8(struct sead_IDisposer *a1);  /* 0x00806ec8 */
int __fastcall SoundSystem_createInstance(int a1);  /* 0x00806f40 */
int __fastcall sub_60807140(_DWORD *a1);  /* 0x00807140 */
int __fastcall sub_60807150(int result);  /* 0x00807150 */
int __fastcall sub_6080718C(int a1, int *a2);  /* 0x0080718c */
int __fastcall SoundSystem_getSoundArchive(int a1);  /* 0x00807560 */
int __fastcall sub_60807574(_DWORD *a1);  /* 0x00807574 */
int __fastcall sub_608075F8(int a1);  /* 0x008075f8 */
unsigned int __fastcall sub_608076D4(int a1);  /* 0x008076d4 */
int __fastcall sub_608078E0(int a1);  /* 0x008078e0 */
int __fastcall sub_60807BD0(int a1);  /* 0x00807bd0 */
int __fastcall sub_60807C28(int a1);  /* 0x00807c28 */
int __fastcall sub_60807C58(int a1);  /* 0x00807c58 */
int __fastcall sub_60807DF0(int a1);  /* 0x00807df0 */
int __fastcall sub_60807EF0(_DWORD *a1, int a2, int a3);  /* 0x00807ef0 */
int __fastcall sub_60807FC0(_DWORD *a1, int a2, int a3);  /* 0x00807fc0 */
int __fastcall sub_60808028(_DWORD *a1, int a2, int a3);  /* 0x00808028 */
int __fastcall sub_60808374(_DWORD *a1, int a2, int a3, int a4);  /* 0x00808374 */
int __fastcall sub_6080840C(_DWORD *a1, int a2, int a3, int a4, int a5);  /* 0x0080840c */
int __fastcall sub_6080852C(int a1, int a2);  /* 0x0080852c */
void __fastcall sub_60808570(int a1, _DWORD *a2, int *a3);  /* 0x00808570 */
int __fastcall sub_60808984(int a1, int a2, char a3);  /* 0x00808984 */
int __fastcall sub_60808994(int a1);  /* 0x00808994 */
int __fastcall sub_608089A4(int a1);  /* 0x008089a4 */
int __fastcall sub_60808A80(int a1);  /* 0x00808a80 */
int __fastcall sub_60808AA4(int a1);  /* 0x00808aa4 */
int __fastcall sub_60808C4C(int a1, int a2);  /* 0x00808c4c */
int __fastcall sub_60808D08(int a1);  /* 0x00808d08 */
int __fastcall sub_60808E60(int a1, int a2);  /* 0x00808e60 */
int __fastcall sub_60808F58(int a1, int a2);  /* 0x00808f58 */
int __fastcall sub_60808F78(int *a1, int a2);  /* 0x00808f78 */
int __fastcall sub_60808FA4(int a1, int a2);  /* 0x00808fa4 */
int __fastcall sub_60808FD4(int a1, int a2);  /* 0x00808fd4 */
int __fastcall sub_60809028(_DWORD *a1, int a2);  /* 0x00809028 */
int __fastcall sub_608090B8(int a1, int a2);  /* 0x008090b8 */
int __fastcall sub_6080913C(int a1, int a2, int a3, int a4);  /* 0x0080913c */
int __fastcall sub_608091A4(_DWORD *a1, int a2);  /* 0x008091a4 */
int __fastcall sub_608091F4(_DWORD *a1, int a2, int a3, int a4, int a5, int a6);  /* 0x008091f4 */
int __fastcall sub_608092D4(_DWORD *a1, int a2);  /* 0x008092d4 */
int __fastcall sub_60809384(int result, int *a2, int a3);  /* 0x00809384 */
int __fastcall sub_6080954C(int a1, int *a2);  /* 0x0080954c */
bool __fastcall sub_60809594(int a1, int a2, int a3);  /* 0x00809594 */
bool __fastcall sub_608095CC(int a1, int a2, int a3);  /* 0x008095cc */
int __fastcall sub_60809604(int a1, int a2, int a3, int a4);  /* 0x00809604 */
int __fastcall sub_608098AC(int a1, int a2, int a3, int a4);  /* 0x008098ac */
int __fastcall SoundSystem_getSoundArchivePlayer(int a1);  /* 0x00809b54 */
int __fastcall sub_60809B58(int a1, int a2);  /* 0x00809b58 */
int __fastcall sub_60809B9C(int a1, int a2, int a3);  /* 0x00809b9c */
int __fastcall sub_60809C9C(int a1, int a2);  /* 0x00809c9c */
int __fastcall sub_60809CBC(int a1);  /* 0x00809cbc */
bool __fastcall sub_60809CD8(int a1, _DWORD *a2, int a3);  /* 0x00809cd8 */
bool __fastcall SE_VOC_PCH_LAST_BATTLE_HELP_ref(int a1, _DWORD *a2, int a3);  /* 0x00809d10 */
bool __fastcall sub_60809FFC(int a1, int a2, int a3);  /* 0x00809ffc */
bool __fastcall sub_6080A034(int a1, _DWORD *a2, int a3);  /* 0x0080a034 */
int __fastcall sub_6080A06C(int a1, int a2);  /* 0x0080a06c */
int __fastcall sub_6080A08C(int a1, int a2);  /* 0x0080a08c */
int __fastcall sub_6080A0AC(int a1, int a2);  /* 0x0080a0ac */
int __fastcall sub_6080A0CC(_DWORD *a1);  /* 0x0080a0cc */
int __fastcall sub_6080A170(int a1, int a2);  /* 0x0080a170 */
int __fastcall sub_6080A1A0(int a1, int a2);  /* 0x0080a1a0 */
int __fastcall sub_6080A298(int a1, int a2);  /* 0x0080a298 */
int __fastcall sub_6080A310(int a1, int a2, int a3);  /* 0x0080a310 */
int __fastcall sub_6080A3CC(int a1, int a2, int a3);  /* 0x0080a3cc */
int __fastcall sub_6080A3DC(int a1, int a2, int a3);  /* 0x0080a3dc */
int __fastcall sub_6080A3EC(int a1, int a2, int a3);  /* 0x0080a3ec */
__int64 __fastcall sub_6080A430(int a1, int a2);  /* 0x0080a430 */
int __fastcall sub_6080A45C(int a1);  /* 0x0080a45c */
int __fastcall sub_6080A484(int a1, int a2, int a3);  /* 0x0080a484 */
int __fastcall sub_6080A4E4(int a1, int a2, int a3);  /* 0x0080a4e4 */
int __fastcall sub_6080A550(int a1, int a2, int a3);  /* 0x0080a550 */
int __fastcall sub_6080A560(int a1);  /* 0x0080a560 */
int __fastcall sub_6080A59C(int a1);  /* 0x0080a59c */
int __fastcall sub_6080A5DC(int a1, int a2);  /* 0x0080a5dc */
int __fastcall sub_6080A630(int a1);  /* 0x0080a630 */
int __fastcall sub_6080A644(int a1, int a2);  /* 0x0080a644 */
int __fastcall sub_6080A65C(int a1, int a2);  /* 0x0080a65c */
int __fastcall sub_6080A67C(int a1, int a2);  /* 0x0080a67c */
int __fastcall sub_6080A69C(_DWORD *a1);  /* 0x0080a69c */
int __fastcall sub_6080A720(int a1);  /* 0x0080a720 */
int __fastcall sub_6080A760(_DWORD *a1, int a2);  /* 0x0080a760 */
int __fastcall sub_6080A7CC(_DWORD *a1);  /* 0x0080a7cc */
int __fastcall sub_6080A830(struct sead_IDisposer *a1);  /* 0x0080a830 */
int __fastcall sub_6080A890(int a1);  /* 0x0080a890 */
int __fastcall sub_6080A9F4(int a1);  /* 0x0080a9f4 */
int __fastcall sub_6080AA9C(int a1);  /* 0x0080aa9c */
int __fastcall sub_6080AC6C(int a1);  /* 0x0080ac6c */
int __fastcall sub_6080AEEC(float *a1);  /* 0x0080aeec */
int __fastcall sub_6080B284(int a1, int a2);  /* 0x0080b284 */
int __fastcall sub_6080B514(int result);  /* 0x0080b514 */
int __fastcall sub_6080B558(_DWORD *a1, unsigned int a2, unsigned int a3);  /* 0x0080b558 */
int __fastcall sub_6080B91C(_DWORD *a1, int a2);  /* 0x0080b91c */
int __fastcall sub_6080BD4C(int a1);  /* 0x0080bd4c */
int __fastcall sub_6080BF20(int a1, int a2);  /* 0x0080bf20 */
int __fastcall sub_6080C0EC(int a1, int a2, int a3, int a4);  /* 0x0080c0ec */
int __fastcall sub_6080C13C(int result);  /* 0x0080c13c */
int __fastcall sub_6080C144(_DWORD *a1);  /* 0x0080c144 */
int __fastcall sub_6080C38C(int a1, int a2);  /* 0x0080c38c */
int __fastcall sub_6080C3F8(int a1);  /* 0x0080c3f8 */
int __fastcall sub_6080C744(float a1, int a2, unsigned __int16 a3);  /* 0x0080c744 */
int __fastcall sub_6080D47C(int a1);  /* 0x0080d47c */
int __fastcall sub_6080D540(_DWORD *a1, int a2);  /* 0x0080d540 */
int __fastcall sub_6080D658(int a1, unsigned __int16 a2);  /* 0x0080d658 */
int __fastcall sub_6080DE84(int a1, int a2, int a3);  /* 0x0080de84 */
unsigned int __fastcall sub_6080E034(int a1, int a2, float *a3, char a4, float *a5);  /* 0x0080e034 */
int __fastcall sub_6080E520(int a1);  /* 0x0080e520 */
int __fastcall sub_6080E53C(int a1, int a2, _DWORD *a3);  /* 0x0080e53c */
int __fastcall sub_6080E5F4(int a1);  /* 0x0080e5f4 */
int __fastcall sub_6080E680(int a1);  /* 0x0080e680 */
int __fastcall sub_6080E7D0(int a1, int a2);  /* 0x0080e7d0 */
int __fastcall sub_6080ED48(_DWORD *a1);  /* 0x0080ed48 */
int __fastcall sub_6080EF84(int a1);  /* 0x0080ef84 */
int __fastcall sub_6080EFBC(_DWORD *a1);  /* 0x0080efbc */
int __fastcall sub_6080F054(int a1);  /* 0x0080f054 */
int __fastcall MovingSoundActor_setPosition(int a1, _DWORD *a2);  /* 0x0080f194 */
int __fastcall sub_6080FAAC(int a1);  /* 0x0080faac */
void __fastcall sub_6080FB18(int a1, int a2, int *a3);  /* 0x0080fb18 */
int __fastcall sub_608109FC(int result, int *a2);  /* 0x008109fc */
int __fastcall sub_60810FDC(int a1, int a2, int a3);  /* 0x00810fdc */
int __fastcall sub_608111C0(int a1, int a2, float *a3, int a4, int *a5);  /* 0x008111c0 */
int __fastcall sub_60811618(int result, int a2, float *a3);  /* 0x00811618 */
int __fastcall BasicSoundActor_vf10(int a1, int a2, float *a3, int a4, int *a5);  /* 0x00812208 */
int __fastcall sub_608122C8(struct nn_atk_SoundActor *a1);  /* 0x008122c8 */
void __fastcall sub_60812728(int a1, int a2, int *a3);  /* 0x00812728 */
int __fastcall sub_608127E4(_DWORD *a1);  /* 0x008127e4 */
int __fastcall BasicSoundActor_vf1(_DWORD *a1);  /* 0x008127f4 */
void __fastcall sub_60812900(struct nn_atk_SoundActor *a1);  /* 0x00812900 */
int __fastcall SoundActor_vf1(_DWORD *a1);  /* 0x0081293c */
int __fastcall sub_60812980(_DWORD *a1, int *a2);  /* 0x00812980 */
int __fastcall SoundActor_vf8(_DWORD *a1, int a2, int a3);  /* 0x00812a30 */
int __fastcall sub_60812AA8(_DWORD *a1, _DWORD *a2, _DWORD *a3, int a4);  /* 0x00812aa8 */
int __fastcall sub_60812E98(int a1, int a2, int a3, int a4);  /* 0x00812e98 */
bool __fastcall sub_60812FD8(int a1, int a2, int *a3, char a4, int a5);  /* 0x00812fd8 */
int __fastcall sub_60813048(int a1);  /* 0x00813048 */
int __fastcall sub_60813404(int a1);  /* 0x00813404 */
int __fastcall sub_60813578(_DWORD *a1);  /* 0x00813578 */
int __fastcall sub_60813818(int a1, int a2, int a3, float *a4, int a5, int *a6);  /* 0x00813818 */
int __fastcall BasicSoundActor2_vf0(_DWORD *a1);  /* 0x00813bd4 */
int __fastcall sub_60813BDC(int a1, int a2, float *a3, int a4, int *a5);  /* 0x00813bdc */
int __fastcall sub_60813BE0(_DWORD *a1, int a2, int a3, float *a4, int *a5);  /* 0x00813be0 */
int __fastcall STRM_BGM_LAST_BOSS2_ref(int a1, int a2, int *a3);  /* 0x00813d7c */
int __fastcall sub_60814010(int a1, int a2, int *a3);  /* 0x00814010 */
int __fastcall sub_608140D8(int a1, int a2, int a3, int *a4);  /* 0x008140d8 */
void __fastcall sub_608141A0(int a1, int a2, int *a3, int *a4);  /* 0x008141a0 */
int __fastcall sub_60814590(int a1, int a2, int *a3);  /* 0x00814590 */
int __fastcall sub_60814658(int a1, int a2, int a3, int *a4);  /* 0x00814658 */
int __fastcall sub_60814720(int a1, int a2, int a3, int *a4);  /* 0x00814720 */
unsigned int __fastcall sub_60814A1C(unsigned int result, unsigned int a2, int a3);  /* 0x00814a1c */
int __fastcall PLAYER_SE_PLY_JUMP_ref(int *a1);  /* 0x00814e70 */
int __fastcall sub_60814F00(_DWORD *a1);  /* 0x00814f00 */
int __fastcall sub_60815020(struct sead_IDisposer *a1);  /* 0x00815020 */
int __fastcall sub_60815080(int a1);  /* 0x00815080 */
int __fastcall sub_608150FC(int a1);  /* 0x008150fc */
int __fastcall sub_60815900(int a1, unsigned int a2);  /* 0x00815900 */
int __fastcall sub_60815B40(_BYTE *a1, unsigned int a2, char a3);  /* 0x00815b40 */
int __fastcall sub_60815C90(int a1, int a2);  /* 0x00815c90 */
int __fastcall sub_60815EE0(int a1);  /* 0x00815ee0 */
int __fastcall sub_60815F14(int result, int a2);  /* 0x00815f14 */
int __fastcall sub_60815F1C(int a1);  /* 0x00815f1c */
int __fastcall sub_60815F50(int a1, int a2);  /* 0x00815f50 */
int __fastcall sub_608163C0(int a1);  /* 0x008163c0 */
int __fastcall sub_6081643C(int a1);  /* 0x0081643c */
int __fastcall sub_608164F8(int a1, int a2);  /* 0x008164f8 */
int __fastcall sub_608168E4(int a1);  /* 0x008168e4 */
int __fastcall sub_6081699C(int a1);  /* 0x0081699c */
int __fastcall sub_608169AC(int a1);  /* 0x008169ac */
int __fastcall sub_60816AE8(int a1);  /* 0x00816ae8 */
int __fastcall sub_60816B60(int a1);  /* 0x00816b60 */
int __fastcall sub_60816BB8(int a1);  /* 0x00816bb8 */
int __fastcall sub_60816C34(int a1);  /* 0x00816c34 */
void __fastcall sub_60816CB0(int a1);  /* 0x00816cb0 */
bool __fastcall sub_60816CBC(int a1);  /* 0x00816cbc */
unsigned int __fastcall sub_60816CD0(unsigned int result);  /* 0x00816cd0 */
int __fastcall sub_60816D48(int a1, unsigned int a2);  /* 0x00816d48 */
int __fastcall sub_60816F60(int a1, unsigned int a2);  /* 0x00816f60 */
int __fastcall sub_60817118(int a1, int a2);  /* 0x00817118 */
int __fastcall sub_60817178(int a1);  /* 0x00817178 */
int __fastcall sub_60817284(int a1);  /* 0x00817284 */
int __fastcall sub_608173DC(int a1, int a2);  /* 0x008173dc */
int __fastcall sub_60817538(int a1, int a2);  /* 0x00817538 */
int __fastcall sub_608175CC(int a1);  /* 0x008175cc */
int __fastcall sub_608175F8(int a1);  /* 0x008175f8 */
int __fastcall sub_60817690(int a1);  /* 0x00817690 */
int __fastcall sub_60817728(int a1, unsigned int a2);  /* 0x00817728 */
bool __fastcall sub_60817CA4(int a1);  /* 0x00817ca4 */
int __fastcall sub_60817D54(int a1);  /* 0x00817d54 */
int __fastcall sub_60817E08(int a1);  /* 0x00817e08 */
int __fastcall sub_60817EC8(int a1);  /* 0x00817ec8 */
int __fastcall sub_60817F90(int a1);  /* 0x00817f90 */
int __fastcall sub_60818070(int result);  /* 0x00818070 */
int __fastcall sub_608180B8(int a1);  /* 0x008180b8 */
int __fastcall sub_60818138(int result, int a2);  /* 0x00818138 */
int __fastcall StateMgr__getCurrentState(int a1);  /* 0x00818198 */
int __fastcall StateMgr__execute(_DWORD *a1);  /* 0x008181d4 */
int __fastcall StateMgr__changeState(_DWORD *a1, int a2);  /* 0x00818224 */
int __fastcall StateMgrExt_changeState(int *a1, int a2);  /* 0x00818290 */
int __fastcall StateBase__dtor(int a1);  /* 0x00818320 */
int __fastcall sub_60818350(struct sead_TaskBase *a1);  /* 0x00818350 */
int __fastcall sub_608183B8(int a1);  /* 0x008183b8 */
int __fastcall sub_60818430(int a1);  /* 0x00818430 */
int __fastcall sub_60818504(int a1, int a2);  /* 0x00818504 */
int __fastcall sub_60818914(int a1);  /* 0x00818914 */
int __fastcall sub_60818A60(int result, int a2);  /* 0x00818a60 */
float __fastcall sub_60818A70(int a1);  /* 0x00818a70 */
bool __fastcall sub_60818AB8(int a1, int a2);  /* 0x00818ab8 */
int __fastcall sub_60818C2C(int a1, int a2);  /* 0x00818c2c */
int __fastcall sub_60818EAC(int a1, int a2);  /* 0x00818eac */
int __fastcall sub_60818F44(int a1, int a2);  /* 0x00818f44 */
int __fastcall sub_60818FDC(int a1, int a2);  /* 0x00818fdc */
int __fastcall sub_60819074(int result);  /* 0x00819074 */
int __fastcall sub_608190A8(int a1, int a2);  /* 0x008190a8 */
int __fastcall sub_60819180(struct sead_TaskBase *a1);  /* 0x00819180 */
int __fastcall sub_60819184(int a1);  /* 0x00819184 */
int __fastcall sub_608191BC(_DWORD *a1);  /* 0x008191bc */
int __fastcall sub_60819264(int a1, int *a2);  /* 0x00819264 */
int __fastcall sub_608192B8(int a1, unsigned int *a2);  /* 0x008192b8 */
bool __fastcall sub_608194EC(_BYTE *a1, int a2);  /* 0x008194ec */
void __fastcall sub_608195A8(int a1);  /* 0x008195a8 */
int __fastcall sub_608195F8(int a1);  /* 0x008195f8 */
int __fastcall sub_60819990(struct sead_IDisposer *a1);  /* 0x00819990 */
int __fastcall sub_608199F0(int a1);  /* 0x008199f0 */
int __fastcall sub_60819A7C(int a1, int a2);  /* 0x00819a7c */
int __fastcall sub_60819B58(int a1);  /* 0x00819b58 */
int __fastcall sub_60819C38(int a1, int a2);  /* 0x00819c38 */
int __fastcall sub_60819C54(int a1);  /* 0x00819c54 */
int __fastcall sub_60819CBC(int a1);  /* 0x00819cbc */
int __fastcall sub_60819D20(int a1);  /* 0x00819d20 */
int __fastcall sub_60819DCC(int a1);  /* 0x00819dcc */
int __fastcall sub_60819E3C(int result);  /* 0x00819e3c */
int __fastcall sub_60819E88(int result);  /* 0x00819e88 */
int __fastcall sub_60819F68(struct sead_IDisposer *a1);  /* 0x00819f68 */
int __fastcall sub_60819FC8(int a1);  /* 0x00819fc8 */
int __fastcall sub_6081A048(int a1);  /* 0x0081a048 */
int __fastcall sub_6081A088(int a1);  /* 0x0081a088 */
int __fastcall sub_6081A158(int a1, int a2, _DWORD *a3);  /* 0x0081a158 */
void __fastcall sub_6081A4E0(struct sead_IDisposer *a1);  /* 0x0081a4e0 */
int __fastcall sub_6081A4E4(struct sead_IDisposer *a1);  /* 0x0081a4e4 */
bool __fastcall sub_6081A4F4(int a1, int a2);  /* 0x0081a4f4 */
int __fastcall sub_6081A788(int a1, int a2);  /* 0x0081a788 */
int __fastcall sub_6081A820(int a1, int a2);  /* 0x0081a820 */
int __fastcall sub_6081A8B8(int a1, int a2);  /* 0x0081a8b8 */
void __fastcall sub_6081A950(struct sead_IDisposer *a1);  /* 0x0081a950 */
int __fastcall sub_6081A95C(int result);  /* 0x0081a95c */
int __fastcall sub_6081A9D0(int a1, int a2);  /* 0x0081a9d0 */
int __fastcall sub_6081AA08(struct sead_TaskBase *a1);  /* 0x0081aa08 */
int __fastcall sub_6081AA0C(int a1);  /* 0x0081aa0c */
int __fastcall sub_6081AA74(int a1);  /* 0x0081aa74 */
int __fastcall sub_6081AA84(int a1);  /* 0x0081aa84 */
int __fastcall sub_6081AA8C(int result);  /* 0x0081aa8c */
int __fastcall sub_6081AA98(int result);  /* 0x0081aa98 */
int __fastcall sub_6081AAA4(int a1);  /* 0x0081aaa4 */
void __fastcall sub_6081AAAC(int a1);  /* 0x0081aaac */
int __fastcall sub_6081AAE4(int a1);  /* 0x0081aae4 */
int __fastcall sub_6081ADE8(struct sead_IDisposer *a1);  /* 0x0081ade8 */
int __fastcall sub_6081AEDC(int a1);  /* 0x0081aedc */
int __fastcall sub_6081AF10(int a1);  /* 0x0081af10 */
int __fastcall sub_6081AF3C(_DWORD *a1, int a2, int a3);  /* 0x0081af3c */
int __fastcall sub_6081B070(_DWORD *a1, int a2);  /* 0x0081b070 */
int __fastcall sub_6081B2D8(int result);  /* 0x0081b2d8 */
int __fastcall sub_6081B364(int result);  /* 0x0081b364 */
int __fastcall sub_6081B398(int a1, int a2);  /* 0x0081b398 */
void __fastcall sub_6081B4A4(int a1);  /* 0x0081b4a4 */
int __fastcall sub_6081B510(int a1);  /* 0x0081b510 */
int __fastcall sub_6081B580(struct sead_TaskBase *a1);  /* 0x0081b580 */
int __fastcall sub_6081B584(int a1);  /* 0x0081b584 */
int __fastcall sub_6081B588(_DWORD *a1);  /* 0x0081b588 */
int __fastcall sub_6081B634(int a1, int a2);  /* 0x0081b634 */
int __fastcall sub_6081B83C(int a1);  /* 0x0081b83c */
int __fastcall sub_6081B908(int a1, int a2, char a3);  /* 0x0081b908 */
int __fastcall sub_6081BA50(int a1);  /* 0x0081ba50 */
bool __fastcall sub_6081BB3C(int a1, int a2);  /* 0x0081bb3c */
int __fastcall sub_6081BE80(struct sead_IDisposer *a1);  /* 0x0081be80 */
int __fastcall sub_6081BEE0(int a1);  /* 0x0081bee0 */
int __fastcall sub_6081BFFC(int a1, int a2);  /* 0x0081bffc */
void __fastcall sub_6081CA7C(int a1);  /* 0x0081ca7c */
bool __fastcall sub_6081D3DC(int a1);  /* 0x0081d3dc */
int __fastcall sub_6081D400(unsigned int a1);  /* 0x0081d400 */
int __fastcall sub_6081D618(int a1, _DWORD *a2);  /* 0x0081d618 */
int __fastcall sub_6081D6E8(int a1, _DWORD *a2);  /* 0x0081d6e8 */
int __fastcall sub_6081D7B4(unsigned int a1);  /* 0x0081d7b4 */
int __fastcall sub_6081D9CC(int a1, _DWORD *a2);  /* 0x0081d9cc */
int __fastcall sub_6081DA9C(int a1, _DWORD *a2);  /* 0x0081da9c */
int __fastcall sub_6081DB68(unsigned int a1);  /* 0x0081db68 */
int __fastcall sub_6081DD80(int a1, _DWORD *a2);  /* 0x0081dd80 */
int __fastcall sub_6081DE50(int a1, _DWORD *a2);  /* 0x0081de50 */
int __fastcall sub_6081DF9C(struct sead_IDisposer *a1);  /* 0x0081df9c */
int __fastcall sub_6081E020(int a1);  /* 0x0081e020 */
int __fastcall sub_6081E09C(int a1);  /* 0x0081e09c */
int __fastcall sub_6081EE54(int a1);  /* 0x0081ee54 */
int __fastcall sub_6081EE78(int result);  /* 0x0081ee78 */
int __fastcall sub_6081EE98(int a1, _BYTE *a2);  /* 0x0081ee98 */
int __fastcall sub_6081F014(int result, int a2);  /* 0x0081f014 */
int __fastcall sub_6081F038(int result, char a2, int a3);  /* 0x0081f038 */
bool __fastcall sub_6081F058(int a1, char a2);  /* 0x0081f058 */
int __fastcall sub_6081F070(int a1, int *a2);  /* 0x0081f070 */
bool __fastcall sub_6081F0B8(int a1);  /* 0x0081f0b8 */
bool __fastcall sub_6081F0E0(int a1);  /* 0x0081f0e0 */
int __fastcall sub_6081F108(int result, char a2, int a3);  /* 0x0081f108 */
int __fastcall sub_6081F114(int result);  /* 0x0081f114 */
int __fastcall sub_6081F12C(int result);  /* 0x0081f12c */
int __fastcall sub_6081F140(int result, int a2);  /* 0x0081f140 */
int __fastcall sub_6081F164(int result);  /* 0x0081f164 */
int __fastcall sub_6081F170(int result);  /* 0x0081f170 */
int __fastcall sub_6081F17C(int result);  /* 0x0081f17c */
int __fastcall sub_6081F1A0(int a1, int a2);  /* 0x0081f1a0 */
bool __fastcall sub_6081F258(_DWORD *a1, int a2);  /* 0x0081f258 */
int __fastcall sub_6081F2B8(int a1, unsigned int a2, int a3);  /* 0x0081f2b8 */
int __fastcall sub_6081F2E0(int a1);  /* 0x0081f2e0 */
int __fastcall sub_6081F544(int a1, unsigned int a2, unsigned int a3, unsigned int a4, _DWORD *a5);  /* 0x0081f544 */
int __fastcall sub_6081F5DC(int a1, unsigned int a2, unsigned int a3, _DWORD *a4);  /* 0x0081f5dc */
int __fastcall sub_6081F6E0(int a1, unsigned int a2);  /* 0x0081f6e0 */
int __fastcall sub_6081FAB4(int a1);  /* 0x0081fab4 */
int __fastcall sub_6081FD80(int result);  /* 0x0081fd80 */
void __fastcall sub_6081FDB4(_DWORD *a1);  /* 0x0081fdb4 */
int __fastcall sub_608203FC(int a1);  /* 0x008203fc */
int __fastcall sub_60820888(int a1, int a2, int a3);  /* 0x00820888 */
int __fastcall sub_608208FC(int a1, int a2, int a3);  /* 0x008208fc */
int __fastcall sub_60820970(int a1, int a2, int a3);  /* 0x00820970 */
void __fastcall sub_60820A50(_DWORD *a1);  /* 0x00820a50 */
int __fastcall sub_60820AA0(struct sead_IDisposer *a1);  /* 0x00820aa0 */
int __fastcall sub_60820AF4(int a1, int a2);  /* 0x00820af4 */
int __fastcall sub_60820B0C(int a1, int a2);  /* 0x00820b0c */
int __fastcall sub_60820B24(int a1, int a2);  /* 0x00820b24 */
int __fastcall sub_60820BA4(struct sead_IDisposer *a1);  /* 0x00820ba4 */
int __fastcall sub_60820C04(int a1);  /* 0x00820c04 */
int __fastcall sub_60820C88(int a1, int a2);  /* 0x00820c88 */
int __fastcall sub_60820DFC(struct sead_IDisposer *a1);  /* 0x00820dfc */
int __fastcall sub_60820F34(int a1, int a2);  /* 0x00820f34 */
int __fastcall sub_60820F8C(int a1, int a2, int a3);  /* 0x00820f8c */
bool __fastcall sub_608217C4(int a1, _DWORD *a2);  /* 0x008217c4 */
int __fastcall ArchiveManagerMaybe_loadPack(int a1, _DWORD *a2, int a3);  /* 0x00821b28 */
int __fastcall sub_60822320(int a1, int a2, _DWORD *a3);  /* 0x00822320 */
int __fastcall sub_60822378(int a1, int a2);  /* 0x00822378 */
int __fastcall ArchiveManager_loadSzs(int a1, _DWORD *a2, _DWORD *a3, int a4, int a5);  /* 0x0082243c */
int __fastcall sub_608226EC(int a1, _DWORD *a2, int a3, _DWORD *a4);  /* 0x008226ec */
int __fastcall sub_60822808(int a1, _DWORD *a2);  /* 0x00822808 */
int __fastcall sub_608228E4(int a1, int a2, int a3, _DWORD *a4);  /* 0x008228e4 */
int __fastcall sub_6082293C(int a1, _DWORD *a2);  /* 0x0082293c */
void __fastcall sub_60822A48(_DWORD *a1);  /* 0x00822a48 */
int __fastcall sub_60822B58(_DWORD *a1);  /* 0x00822b58 */
int __fastcall sub_60822B98(struct sead_IDisposer *a1);  /* 0x00822b98 */
int __fastcall sub_60822BD8(_DWORD *a1);  /* 0x00822bd8 */
int __fastcall RootTask_vf10(struct sead_TaskBase *a1);  /* 0x00822c24 */
int __fastcall sub_60822C28(int a1);  /* 0x00822c28 */
int __fastcall sub_608248C4(int a1);  /* 0x008248c4 */
int __fastcall sub_608248F0(int a1, int a2);  /* 0x008248f0 */
int __fastcall RootTask_vf1(int a1);  /* 0x00825400 */
bool __fastcall RootTask_vf2(int a1, int a2);  /* 0x00825410 */
int __fastcall sub_60825838(int a1, _DWORD *a2);  /* 0x00825838 */
int __fastcall sub_60825908(int a1, _DWORD *a2);  /* 0x00825908 */
int __fastcall sub_60825A04(int a1);  /* 0x00825a04 */
int __fastcall sub_60825A14(int a1);  /* 0x00825a14 */
int __fastcall sub_60825A20(int a1);  /* 0x00825a20 */
int __fastcall sub_60826474(int a1);  /* 0x00826474 */
int __fastcall sub_608264A0(int a1);  /* 0x008264a0 */
int __fastcall sub_608264CC(int a1);  /* 0x008264cc */
int __fastcall RumbleMgr_create(int a1);  /* 0x008264f8 */
bool __fastcall sub_60826528(int a1, int a2);  /* 0x00826528 */
int __fastcall sub_60826800(struct sead_IDisposer *a1);  /* 0x00826800 */
int __fastcall sub_60826878(int a1);  /* 0x00826878 */
int __fastcall sub_6082693C(int a1, int a2);  /* 0x0082693c */
int __fastcall sub_60826BF4(_DWORD *a1, int a2, int a3);  /* 0x00826bf4 */
int __fastcall sub_60826C38(int a1, char a2);  /* 0x00826c38 */
int __fastcall sub_60826C44(int result, int a2);  /* 0x00826c44 */
unsigned int __fastcall sub_60826C60(int a1, int a2, _BYTE *a3);  /* 0x00826c60 */
int __fastcall sub_60826CBC(int a1);  /* 0x00826cbc */
int * __fastcall sub_6082756C(int a1);  /* 0x0082756c */
int __fastcall sub_60828180(int a1, int a2);  /* 0x00828180 */
int __fastcall sub_608284CC(int a1, unsigned __int8 *a2);  /* 0x008284cc */
int __fastcall sub_608289C4(int a1, int a2);  /* 0x008289c4 */
int __fastcall sub_60828CC0(int a1);  /* 0x00828cc0 */
int __fastcall sub_60828D2C(int a1);  /* 0x00828d2c */
int __fastcall sub_60828D98(int a1);  /* 0x00828d98 */
int __fastcall sub_60828E04(int a1, int a2);  /* 0x00828e04 */
bool __fastcall sub_60828E1C(int a1, int a2);  /* 0x00828e1c */
int __fastcall sub_60828E70(int a1, int a2);  /* 0x00828e70 */
int __fastcall sub_60828E90(int result, int a2);  /* 0x00828e90 */
int __fastcall sub_60828EC8(int result, int a2);  /* 0x00828ec8 */
int __fastcall sub_60828EF4(int a1, int a2, char a3, int a4, int a5, _DWORD *a6);  /* 0x00828ef4 */
int __fastcall sub_60828F94(int result);  /* 0x00828f94 */
int __fastcall sub_60828FB8(int result, int a2, int a3);  /* 0x00828fb8 */
int __fastcall sub_60828FE4(int result);  /* 0x00828fe4 */
int __fastcall sub_60829004(int result, int a2);  /* 0x00829004 */
int __fastcall sub_60829034(int result, int a2);  /* 0x00829034 */
int __fastcall sub_6082905C(int result);  /* 0x0082905c */
int __fastcall sub_60829080(int result, int a2, int a3);  /* 0x00829080 */
int __fastcall sub_6082909C(int a1);  /* 0x0082909c */
int __fastcall sub_608291A4(int a1, unsigned int a2, unsigned int a3);  /* 0x008291a4 */
bool __fastcall sub_6082920C(int a1, unsigned int a2, unsigned int a3);  /* 0x0082920c */
int __fastcall sub_60829274(int a1);  /* 0x00829274 */
int __fastcall sub_608292BC(int result);  /* 0x008292bc */
int __fastcall sub_60829330(int a1);  /* 0x00829330 */
int __fastcall sub_608293A4(int a1, int a2);  /* 0x008293a4 */
int __fastcall sub_60829444(int a1, int a2, int a3);  /* 0x00829444 */
int __fastcall sub_608294EC(int a1, int a2);  /* 0x008294ec */
int __fastcall sub_60829578(int a1, int a2);  /* 0x00829578 */
int __fastcall sub_60829624(int a1, int a2);  /* 0x00829624 */
int __fastcall sub_60829AA8(int a1);  /* 0x00829aa8 */
int __fastcall sub_60829D0C(int a1, int a2);  /* 0x00829d0c */
int __fastcall sub_60829DA4(int a1, int a2);  /* 0x00829da4 */
int __fastcall sub_60829F18(int a1);  /* 0x00829f18 */
int __fastcall sub_60829FC8(int a1, int a2);  /* 0x00829fc8 */
int __fastcall sub_6082A0AC(int a1);  /* 0x0082a0ac */
int __fastcall sub_6082A15C(int a1);  /* 0x0082a15c */
int __fastcall sub_6082A20C(int a1);  /* 0x0082a20c */
int __fastcall sub_6082A2A4(_DWORD *a1);  /* 0x0082a2a4 */
int __fastcall sub_6082AC1C(int a1);  /* 0x0082ac1c */
int __fastcall sub_6082B000(_DWORD *a1);  /* 0x0082b000 */
int __fastcall sub_6082B1CC(struct nn_oe *a1);  /* 0x0082b1cc */
int __fastcall sub_6082B394(int a1);  /* 0x0082b394 */
int __fastcall sub_6082B4D8(int result);  /* 0x0082b4d8 */
int __fastcall sub_6082B508(int result);  /* 0x0082b508 */
int __fastcall sub_6082B538(int result);  /* 0x0082b538 */
int __fastcall sub_6082B568(int result);  /* 0x0082b568 */
int __fastcall sub_6082B598(int result);  /* 0x0082b598 */
int __fastcall sub_6082B5F8(int result);  /* 0x0082b5f8 */
int __fastcall sub_6082B628(int result);  /* 0x0082b628 */
int __fastcall sub_6082B658(int result);  /* 0x0082b658 */
int __fastcall sub_6082B688(int result);  /* 0x0082b688 */
int __fastcall sub_6082B6B8(int result);  /* 0x0082b6b8 */
int __fastcall sub_6082B748(int result);  /* 0x0082b748 */
int __fastcall sub_6082B778(int result);  /* 0x0082b778 */
int __fastcall sub_6082B794(int result);  /* 0x0082b794 */
int __fastcall sub_6082B7B0(int result);  /* 0x0082b7b0 */
int __fastcall sub_6082B7CC(int result);  /* 0x0082b7cc */
void __fastcall sub_6082B7E8(int a1, int a2);  /* 0x0082b7e8 */
int __fastcall sub_6082BA24(int a1, _BYTE *a2);  /* 0x0082ba24 */
int __fastcall sub_6082BCA8(int a1, _BYTE *a2);  /* 0x0082bca8 */
int __fastcall sub_6082BE88(int a1, _BYTE *a2);  /* 0x0082be88 */
int __fastcall sub_6082C054(int result);  /* 0x0082c054 */
int __fastcall sub_6082C084(int a1, unsigned __int8 *a2);  /* 0x0082c084 */
int __fastcall sub_6082C68C(int a1);  /* 0x0082c68c */
int __fastcall sub_6082C7E8(int result);  /* 0x0082c7e8 */
int __fastcall sub_6082C948(struct sead_IDisposer *a1);  /* 0x0082c948 */
int __fastcall UserInfo_createInstance(int a1);  /* 0x0082c9f0 */
int __fastcall UserInfo_init(int a1);  /* 0x0082ca70 */
int __fastcall UserInfo_getUid(int a1, _DWORD *a2);  /* 0x0082cad4 */
int __fastcall Actor_otosukuroru_build(int a1);  /* 0x0082cb04 */
int __fastcall sub_6082CB20(int a1, int a2);  /* 0x0082cb20 */
bool __fastcall sub_6082CBEC(int a1, int a2);  /* 0x0082cbec */
int __fastcall sub_6082CD60(_DWORD *a1);  /* 0x0082cd60 */
bool __fastcall sub_6082CED4(int a1, int a2);  /* 0x0082ced4 */
int __fastcall sub_6082D0BC(Actor *a1);  /* 0x0082d0bc */
bool __fastcall BgCenter__checkDerivedRuntimeTypeInfo(int a1, int a2);  /* 0x0082d194 */
int __fastcall BgCenter__dtor(_DWORD *a1);  /* 0x0082d308 */
int __fastcall sub_6082D4B8(int result);  /* 0x0082d4b8 */
int __fastcall sub_6082D4C8(_DWORD *a1);  /* 0x0082d4c8 */
int __fastcall sub_6082D5A4(_BYTE *a1);  /* 0x0082d5a4 */
int __fastcall sub_6082D5C8(int result);  /* 0x0082d5c8 */
int __fastcall sub_6082D5D8(_DWORD *a1);  /* 0x0082d5d8 */
int __fastcall sub_6082D690(_DWORD *a1);  /* 0x0082d690 */
bool __fastcall sub_6082D78C(int a1, int a2);  /* 0x0082d78c */
int __fastcall sub_6082D890(Actor *a1);  /* 0x0082d890 */
int __fastcall sub_6082DAA0(int a1);  /* 0x0082daa0 */
bool __fastcall sub_6082DC68(int a1, int a2);  /* 0x0082dc68 */
int __fastcall sub_6082DDDC(_DWORD *a1);  /* 0x0082dddc */
int __fastcall Actor_kun_build(int a1);  /* 0x0082de6c */
bool __fastcall sub_6082DEC0(int a1, int a2);  /* 0x0082dec0 */
int __fastcall sub_6082E034(_DWORD *a1);  /* 0x0082e034 */
int __fastcall sub_6082E0F4(int a1);  /* 0x0082e0f4 */
int __fastcall sub_6082E11C(int a1);  /* 0x0082e11c */
bool __fastcall sub_6082E32C(int a1, int a2);  /* 0x0082e32c */
int __fastcall sub_6082E514(Actor *a1);  /* 0x0082e514 */
int __fastcall Actor_grass_flower_Tag_build(int a1);  /* 0x0082e5ac */
bool __fastcall sub_6082E614(int a1, int a2);  /* 0x0082e614 */
int __fastcall sub_6082E788(_DWORD *a1);  /* 0x0082e788 */
int __fastcall Actor_Bowser_exclusive_eriaOBJ_build(int a1);  /* 0x0082e818 */
bool __fastcall sub_6082E90C(int a1, int a2);  /* 0x0082e90c */
int __fastcall sub_6082EA80(_DWORD *a1);  /* 0x0082ea80 */
int __fastcall sub_6082EB10(int a1);  /* 0x0082eb10 */
bool __fastcall sub_6082EB6C(int a1, int a2);  /* 0x0082eb6c */
int __fastcall sub_6082ECE0(_DWORD *a1);  /* 0x0082ece0 */
int __fastcall sub_6082ED70(int a1, int a2);  /* 0x0082ed70 */
bool __fastcall sub_6082EFD8(int a1, int a2);  /* 0x0082efd8 */
int __fastcall sub_6082F14C(_DWORD *a1);  /* 0x0082f14c */
int __fastcall Actor_haipamakusu_build(int a1);  /* 0x0082f15c */
unsigned int __fastcall sub_6082F314(unsigned int a1);  /* 0x0082f314 */
int __fastcall sub_6082F31C(__int16 a1);  /* 0x0082f31c */
int __fastcall sub_6082F324(int result);  /* 0x0082f324 */
int __fastcall sub_6082F32C(unsigned int a1);  /* 0x0082f32c */
bool __fastcall sub_6082F334(int a1, int a2);  /* 0x0082f334 */
int __fastcall sub_6082F51C(Actor *a1);  /* 0x0082f51c */
bool __fastcall sub_6082F620(int a1, int a2);  /* 0x0082f620 */
int __fastcall sub_6082F808(Actor *a1);  /* 0x0082f808 */
int __fastcall sub_6082F900(int a1);  /* 0x0082f900 */
int __fastcall sub_6082FA04(int a1);  /* 0x0082fa04 */
bool __fastcall sub_6082FA2C(int a1, int a2);  /* 0x0082fa2c */
int __fastcall sub_6082FB30(Actor *a1);  /* 0x0082fb30 */
int __fastcall Actor_special_sukuroruTag_build(int a1);  /* 0x0082fd38 */
bool __fastcall sub_6082FDE4(int a1, int a2);  /* 0x0082fde4 */
int __fastcall sub_6082FF58(_DWORD *a1);  /* 0x0082ff58 */
int __fastcall Actor_shadou_read_Tag_2_build(int a1);  /* 0x0082ffe8 */
int __fastcall sub_6083002C(int a1);  /* 0x0083002c */
int __fastcall sub_6083006C(int a1);  /* 0x0083006c */
int __fastcall sub_6083007C(int a1);  /* 0x0083007c */
int __fastcall sub_6083038C(int a1, int a2);  /* 0x0083038c */
int __fastcall sub_60830400(int a1, int a2);  /* 0x00830400 */
bool __fastcall sub_608304B4(int a1, int a2);  /* 0x008304b4 */
int __fastcall sub_6083069C(Actor *a1);  /* 0x0083069c */
int __fastcall sub_60830794(int a1);  /* 0x00830794 */
int __fastcall sub_608307B0(int a1);  /* 0x008307b0 */
int __fastcall STRM_BGM_SHORT_RESULT_ref(int a1);  /* 0x0083080c */
int __fastcall sub_60830854(int a1);  /* 0x00830854 */
bool __fastcall sub_60830874(int a1, int a2);  /* 0x00830874 */
void __fastcall sub_60830978(int a1);  /* 0x00830978 */
int __fastcall sub_608309C8(int a1);  /* 0x008309c8 */
int __fastcall sub_60830C08(int a1);  /* 0x00830c08 */
int __fastcall sub_60830C8C(int a1);  /* 0x00830c8c */
int __fastcall sub_60830DCC(int result);  /* 0x00830dcc */
int __fastcall sub_60830DE0(_DWORD *a1);  /* 0x00830de0 */
int __fastcall sub_60831044(_DWORD *a1);  /* 0x00831044 */
int __fastcall sub_608311C8(int a1);  /* 0x008311c8 */
int __fastcall sub_60831288(int result);  /* 0x00831288 */
int __fastcall sub_608312A4(int a1);  /* 0x008312a4 */
int __fastcall sub_60831490(int a1);  /* 0x00831490 */
int __fastcall sub_608314C8(int a1);  /* 0x008314c8 */
int __fastcall sub_6083181C(int a1);  /* 0x0083181c */
int __fastcall sub_60831878(int a1);  /* 0x00831878 */
bool __fastcall sub_608318B0(int a1, int a2);  /* 0x008318b0 */
void __fastcall sub_608319B4(int a1);  /* 0x008319b4 */
int __fastcall sub_60831A04(int a1);  /* 0x00831a04 */
int __fastcall Actor_zumu_build(int a1);  /* 0x00831cc0 */
bool __fastcall sub_60831D7C(int a1, int a2);  /* 0x00831d7c */
int __fastcall sub_60831EF0(_DWORD *a1);  /* 0x00831ef0 */
int __fastcall Actor_zumu_RDash_build(int a1);  /* 0x00831f80 */
bool __fastcall sub_60832048(int a1, int a2);  /* 0x00832048 */
int __fastcall sub_608321BC(_DWORD *a1);  /* 0x008321bc */
int __fastcall moveValueTo(int *a1, int *a2, int *a3, int a4);  /* 0x00832424 */
int __fastcall sub_6083246C(_DWORD *a1, int *a2, int *a3);  /* 0x0083246c */
int __fastcall sub_60832684(int result, unsigned int *a2);  /* 0x00832684 */
int __fastcall sub_60832710(int result, unsigned int *a2);  /* 0x00832710 */
int __fastcall sub_6083279C(int result, unsigned int *a2);  /* 0x0083279c */
int __fastcall sub_608330EC(int result);  /* 0x008330ec */
unsigned int __fastcall sub_6083316C(unsigned int *a1);  /* 0x0083316c */
int __fastcall sub_6083359C(int a1);  /* 0x0083359c */
unsigned int __fastcall sub_608335C8(_BYTE *a1);  /* 0x008335c8 */
int __fastcall sub_608335E8(_DWORD *a1);  /* 0x008335e8 */
bool __fastcall sub_6083360C(int a1, int a2);  /* 0x0083360c */
int __fastcall sub_60833664(int a1, int a2);  /* 0x00833664 */
int __fastcall sub_608336A8(int a1);  /* 0x008336a8 */
int __fastcall sub_608337AC(int result);  /* 0x008337ac */
int __fastcall sub_608337BC(int result, int *a2);  /* 0x008337bc */
int __fastcall sub_608337E0(int a1);  /* 0x008337e0 */
int __fastcall sub_608338B8(int a1, unsigned __int16 a2, char a3);  /* 0x008338b8 */
int __fastcall sub_60833954(int a1);  /* 0x00833954 */
int __fastcall sub_60833B74(_DWORD *a1);  /* 0x00833b74 */
int __fastcall sub_60833BCC(int result);  /* 0x00833bcc */
int __fastcall sub_60834010(int result);  /* 0x00834010 */
int __fastcall sub_6083424C(int a1);  /* 0x0083424c */
unsigned int __fastcall sub_60834288(_DWORD *a1, unsigned int a2);  /* 0x00834288 */
unsigned int __fastcall sub_608342B0(_DWORD *a1);  /* 0x008342b0 */
int __fastcall sub_60834674(int a1);  /* 0x00834674 */
int __fastcall sub_608346A4(unsigned int a1);  /* 0x008346a4 */
int __fastcall sub_608346E0(int a1, int a2);  /* 0x008346e0 */
void __fastcall sub_60834718(int a1, int a2);  /* 0x00834718 */
int __fastcall sub_60834AE0(int a1, int a2, int a3, int a4);  /* 0x00834ae0 */
int __fastcall sub_60834E7C(const char **a1, int a2);  /* 0x00834e7c */
int __fastcall sub_60834F1C(_DWORD *a1);  /* 0x00834f1c */
unsigned int __fastcall sub_60834F34(unsigned int result, int a2, _DWORD *a3);  /* 0x00834f34 */
int __fastcall malloc(unsigned int a1);  /* 0x00835108 */
int __fastcall realloc(void *a1, unsigned int a2);  /* 0x008351f4 */
int __fastcall aligned_alloc(unsigned int a1, unsigned int a2);  /* 0x0083524c */
int __fastcall sub_608352A0(_DWORD *a1, int a2);  /* 0x008352a0 */
int __fastcall sub_608353C0(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, int a5);  /* 0x008353c0 */
int __fastcall sub_60835494(int a1);  /* 0x00835494 */
int __fastcall sub_608354C4(int a1);  /* 0x008354c4 */
int __fastcall sub_608354E0(int result);  /* 0x008354e0 */
int __fastcall sub_60835504(int result);  /* 0x00835504 */
__int64 __fastcall sub_60835528(int a1, int a2);  /* 0x00835528 */
int __fastcall sub_60835574(int a1, int a2, int a3, int a4);  /* 0x00835574 */
int __fastcall sub_6083558C(int a1, int a2, int a3, int a4);  /* 0x0083558c */
int __fastcall sub_608355CC(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x008355cc */
int __fastcall sub_60835624(int a1, int a2, int a3, _DWORD *a4, int a5, int a6);  /* 0x00835624 */
int __fastcall sub_6083568C(int a1, int a2, int a3, _DWORD *a4, int a5, int a6, int a7, int a8);  /* 0x0083568c */
int __fastcall sub_60835704(int a1, int a2);  /* 0x00835704 */
int __fastcall sub_60835934(int a1, int a2);  /* 0x00835934 */
int __fastcall sub_60835A38(int a1, int *a2);  /* 0x00835a38 */
int __fastcall sub_60835AD4(int a1, int a2);  /* 0x00835ad4 */
int __fastcall sub_60835BA8(int a1, _DWORD *a2);  /* 0x00835ba8 */
int __fastcall sub_60835BF8(int a1, int a2, int a3);  /* 0x00835bf8 */
int __fastcall sub_60835C50(int a1, int a2, int *a3, int a4);  /* 0x00835c50 */
int __fastcall sub_60835D28(int a1, int a2, _DWORD *a3, int a4, int a5);  /* 0x00835d28 */
int __fastcall sub_60835D6C(int a1, int *a2);  /* 0x00835d6c */
int __fastcall sub_60835E70(int a1, int a2, int a3, int a4, int a5, char a6);  /* 0x00835e70 */
int __fastcall sub_60836074(int a1, int a2, int *a3);  /* 0x00836074 */
int __fastcall sub_60836094(int a1, int a2, int a3, int *a4);  /* 0x00836094 */
int __fastcall sub_6083625C(int result, __int16 a2);  /* 0x0083625c */
int __fastcall sub_60836284(int result, unsigned int a2);  /* 0x00836284 */
int __fastcall sub_608362C8(int a1, int a2, int a3, _DWORD *a4, _DWORD *a5);  /* 0x008362c8 */
int __fastcall sub_60836348(int a1, int a2, int a3, _DWORD *a4, int a5);  /* 0x00836348 */
int __fastcall sub_608363A0(int a1, int a2, int a3, _DWORD *a4, int a5);  /* 0x008363a0 */
int __fastcall sub_608363F8(unsigned int a1, int a2);  /* 0x008363f8 */
int __fastcall sub_60836538(int a1, _DWORD *a2, _DWORD *a3);  /* 0x00836538 */
int __fastcall sub_60836614(int a1);  /* 0x00836614 */
int __fastcall sub_60836644(_DWORD *a1);  /* 0x00836644 */
int __fastcall sub_60836678(int a1, int (__fastcall *a2)(int, const char *));  /* 0x00836678 */
int __fastcall sub_6083A9A4(int a1);  /* 0x0083a9a4 */
int __fastcall sub_6083AA20(int a1);  /* 0x0083aa20 */
int __fastcall sub_6083AA9C(int a1);  /* 0x0083aa9c */
int __fastcall sub_6083AAB0(int a1);  /* 0x0083aab0 */
int __fastcall sub_6083AAC4(int a1);  /* 0x0083aac4 */
int __fastcall sub_6083AAD8(int a1);  /* 0x0083aad8 */
int __fastcall sub_6083AAEC(int a1);  /* 0x0083aaec */
int __fastcall sub_6083AB00(int a1);  /* 0x0083ab00 */
int __fastcall sub_6083AB14(int a1);  /* 0x0083ab14 */
int __fastcall sub_6083AB28(int a1);  /* 0x0083ab28 */
int __fastcall sub_6083AB3C(int a1);  /* 0x0083ab3c */
int __fastcall sub_6083AB50(int a1);  /* 0x0083ab50 */
int __fastcall sub_6083AC10(int a1);  /* 0x0083ac10 */
int __fastcall sub_6083AC24(int a1);  /* 0x0083ac24 */
int __fastcall sub_6083AC38(unsigned int a1);  /* 0x0083ac38 */
int __fastcall sub_6083AC78(int a1);  /* 0x0083ac78 */
int __fastcall sub_6083AC8C(int a1);  /* 0x0083ac8c */
int __fastcall sub_6083ACA0(int a1);  /* 0x0083aca0 */
unsigned int __fastcall sub_6083ACBC(int a1);  /* 0x0083acbc */
int __fastcall sub_6083B074(int a1);  /* 0x0083b074 */
int __fastcall sub_6083B088(int a1, _DWORD *a2, _DWORD *a3, int a4);  /* 0x0083b088 */
int __fastcall sub_6083B278(int a1);  /* 0x0083b278 */
int __fastcall sub_6083B2BC(int a1, int a2, unsigned __int8 *a3);  /* 0x0083b2bc */
int __fastcall sub_6083B4C8(int a1);  /* 0x0083b4c8 */
int __fastcall sub_6083B4F8(int a1, _DWORD *a2, int a3);  /* 0x0083b4f8 */
int __fastcall sub_6083BD18(int a1);  /* 0x0083bd18 */
int __fastcall sub_6083BDB8(int a1, int a2, int a3, int a4);  /* 0x0083bdb8 */
int __fastcall nn__os__Mutex__dtor(int a1);  /* 0x0083c2ec */
int __fastcall sub_6083C318(int a1, int a2, unsigned __int8 *a3);  /* 0x0083c318 */
int __fastcall sub_6083C4F8(int result);  /* 0x0083c4f8 */
int __fastcall sub_6083C504(unsigned __int8 *a1);  /* 0x0083c504 */
int __fastcall sub_6083C538(int a1);  /* 0x0083c538 */
int __fastcall sub_6083C540(int *a1, int a2, unsigned __int8 *a3);  /* 0x0083c540 */
int __fastcall sub_6083C790(int result);  /* 0x0083c790 */
int __fastcall sub_6083C7C0(int a1, int a2, unsigned __int8 *a3);  /* 0x0083c7c0 */
int __fastcall sub_6083C96C(int result);  /* 0x0083c96c */
int __fastcall sub_6083C978(unsigned __int16 *a1);  /* 0x0083c978 */
int __fastcall sub_6083C9F4(int result, int a2, int a3);  /* 0x0083c9f4 */
int __fastcall sub_6083CA00(int a1);  /* 0x0083ca00 */
int __fastcall sub_6083CA08(int a1, int a2, unsigned __int16 *a3, int a4);  /* 0x0083ca08 */
int __fastcall sub_6083CD78(int result, int a2, unsigned __int16 *a3);  /* 0x0083cd78 */
int __fastcall sub_6083CF58(int result);  /* 0x0083cf58 */
int __fastcall sub_6083CF64(_DWORD *a1, int a2);  /* 0x0083cf64 */
int __fastcall sub_6083CFA0(int a1, int a2, unsigned __int8 *a3);  /* 0x0083cfa0 */
int __fastcall sub_6083D1F4(int *a1, unsigned __int8 *a2);  /* 0x0083d1f4 */
int __fastcall sub_6083D24C(int a1, int *a2, unsigned __int8 *a3, _DWORD *a4, int a5, int a6);  /* 0x0083d24c */
int __fastcall sub_6083D2EC(int a1);  /* 0x0083d2ec */
int __fastcall sub_6083D338(int a1, int a2, unsigned __int8 *a3);  /* 0x0083d338 */
int __fastcall sub_6083D48C(int result);  /* 0x0083d48c */
int __fastcall sub_6083D4BC(int a1, int a2, unsigned __int8 *a3);  /* 0x0083d4bc */
int __fastcall sub_6083D59C(int result);  /* 0x0083d59c */
int __fastcall sub_6083D5FC(int a1, int a2);  /* 0x0083d5fc */
int __fastcall sub_6083D614(int result);  /* 0x0083d614 */
int __fastcall sub_6083D6A0(int result);  /* 0x0083d6a0 */
int __fastcall sub_6083D6FC(int result);  /* 0x0083d6fc */
int __fastcall sub_6083D760(int result);  /* 0x0083d760 */
int __fastcall sub_6083D774(int result);  /* 0x0083d774 */
int __fastcall sub_6083D7A8(int result);  /* 0x0083d7a8 */
int __fastcall sub_6083D7FC(int result);  /* 0x0083d7fc */
int __fastcall sub_6083D824(int a1, int a2);  /* 0x0083d824 */
bool __fastcall sub_6083D838(_DWORD *a1);  /* 0x0083d838 */
bool __fastcall sub_6083D8E4(_DWORD *a1);  /* 0x0083d8e4 */
int __fastcall sub_6083D9D0(int result, int a2, int a3);  /* 0x0083d9d0 */
int __fastcall sub_6083D9DC(int result, int a2, int a3);  /* 0x0083d9dc */
int __fastcall sub_6083D9E8(int result, int a2);  /* 0x0083d9e8 */
int __fastcall sub_6083D9F0(int result, int a2);  /* 0x0083d9f0 */
int __fastcall sub_6083D9F8(int result);  /* 0x0083d9f8 */
int __fastcall sub_6083DA00(int result, int a2);  /* 0x0083da00 */
int __fastcall sub_6083DA08(int result, int a2);  /* 0x0083da08 */
int __fastcall sub_6083DA10(int a1);  /* 0x0083da10 */
int __fastcall sub_6083DA18(int a1);  /* 0x0083da18 */
int __fastcall sub_6083DA20(int a1);  /* 0x0083da20 */
int __fastcall sub_6083DA28(int a1);  /* 0x0083da28 */
int __fastcall sub_6083DA30(int a1);  /* 0x0083da30 */
int __fastcall sub_6083DA38(int a1);  /* 0x0083da38 */
int __fastcall sub_6083DA40(int a1);  /* 0x0083da40 */
int __fastcall sub_6083DA48(int a1);  /* 0x0083da48 */
int __fastcall sub_6083DA58(int a1);  /* 0x0083da58 */
int __fastcall sub_6083DA60(int a1);  /* 0x0083da60 */
int __fastcall sub_6083DA78(int a1);  /* 0x0083da78 */
int __fastcall sub_6083DA90(int a1);  /* 0x0083da90 */
int __fastcall sub_6083DAA8(int a1);  /* 0x0083daa8 */
int __fastcall sub_6083DAB0(int *a1, int a2);  /* 0x0083dab0 */
int __fastcall sub_6083DAB4(_DWORD *a1, int a2);  /* 0x0083dab4 */
int __fastcall sub_6083DBB8(int *a1, int a2);  /* 0x0083dbb8 */
int __fastcall sub_6083DBE0(_DWORD *a1);  /* 0x0083dbe0 */
int __fastcall sub_6083DC04(_DWORD *a1);  /* 0x0083dc04 */
int __fastcall sub_6083DC20(_DWORD *a1);  /* 0x0083dc20 */
int __fastcall sub_6083DC28(int *a1, int a2);  /* 0x0083dc28 */
int __fastcall sub_6083DC30(int a1);  /* 0x0083dc30 */
int __fastcall sub_6083DC5C(int a1);  /* 0x0083dc5c */
bool __fastcall sub_6083DCDC(int a1, int a2);  /* 0x0083dcdc */
int __fastcall sub_6083DCF0(int a1, int a2);  /* 0x0083dcf0 */
bool __fastcall sub_6083DCFC(int a1);  /* 0x0083dcfc */
int __fastcall sub_6083DD0C(int a1);  /* 0x0083dd0c */
int __fastcall sub_6083DD14(int a1);  /* 0x0083dd14 */
int __fastcall sub_6083DD1C(int a1, int a2);  /* 0x0083dd1c */
int __fastcall sub_6083DD28(int a1);  /* 0x0083dd28 */
int __fastcall sub_6083DD30(int a1);  /* 0x0083dd30 */
int __fastcall sub_6083DD38(int a1, int a2);  /* 0x0083dd38 */
int __fastcall sub_6083DD44(int a1);  /* 0x0083dd44 */
int __fastcall sub_6083DDF0(int a1, int a2, int a3, int a4);  /* 0x0083ddf0 */
int __fastcall sub_6083DE00(int result, int a2, int a3);  /* 0x0083de00 */
int __fastcall sub_6083DE0C(int result, int a2);  /* 0x0083de0c */
int __fastcall sub_6083DE14(int a1, int a2, int a3);  /* 0x0083de14 */
int __fastcall sub_6083DE20(int result, int a2);  /* 0x0083de20 */
int __fastcall sub_6083DE48(int a1, int a2);  /* 0x0083de48 */
int __fastcall sub_6083DEF4(int *a1, int a2);  /* 0x0083def4 */
int __fastcall sub_6083DF1C(int *a1, int a2);  /* 0x0083df1c */
int __fastcall sub_6083DF24(int *a1, int a2, int a3);  /* 0x0083df24 */
int __fastcall sub_6083DF2C(int *a1, int a2);  /* 0x0083df2c */
int __fastcall sub_6083DF54(_DWORD *a1);  /* 0x0083df54 */
int __fastcall sub_6083DF58(_DWORD *a1);  /* 0x0083df58 */
int __fastcall sub_6083DF5C(_DWORD *a1, void *a2, unsigned int a3, int a4, int a5, int a6, int a7);  /* 0x0083df5c */
int __fastcall sub_6083DFFC(int *a1, int a2);  /* 0x0083dffc */
int __fastcall sub_6083E024(_DWORD **a1, int a2);  /* 0x0083e024 */
int __fastcall sub_6083E02C(_DWORD *a1, int a2, int a3, int a4);  /* 0x0083e02c */
int __fastcall sub_6083E068(int a1);  /* 0x0083e068 */
int __fastcall sub_6083E094(_DWORD *a1, int a2);  /* 0x0083e094 */
int __fastcall sub_6083E098(_DWORD *a1, void *a2, unsigned int a3, int a4, int a5, int a6, int a7, int a8, int a9);  /* 0x0083e098 */
int __fastcall sub_6083E150(int *a1, int a2);  /* 0x0083e150 */
int __fastcall sub_6083E178(_DWORD *a1, int a2);  /* 0x0083e178 */
int __fastcall sub_6083E1A8(_DWORD *a1, int a2);  /* 0x0083e1a8 */
int __fastcall sub_6083E1D0(int a1, int a2, struct nn_mii *a3);  /* 0x0083e1d0 */
int __fastcall sub_6083E1D4(int a1, int a2, struct nn_mii *a3);  /* 0x0083e1d4 */
int __fastcall sub_6083E2B4(int *a1, int a2);  /* 0x0083e2b4 */
int __fastcall sub_6083E2DC(_DWORD *a1);  /* 0x0083e2dc */
int __fastcall sub_6083E2EC(unsigned __int8 **a1, int a2, int a3);  /* 0x0083e2ec */
int __fastcall sub_6083E314(_DWORD *a1);  /* 0x0083e314 */
int __fastcall sub_6083E318(_DWORD *a1);  /* 0x0083e318 */
int __fastcall sub_6083E31C(_DWORD *a1, void *a2, unsigned int a3, int a4, int a5, int a6, int a7);  /* 0x0083e31c */
int __fastcall sub_6083E3A0(int *a1, int a2);  /* 0x0083e3a0 */
int __fastcall sub_6083E3C8(_QWORD **a1, unsigned int a2, unsigned int a3);  /* 0x0083e3c8 */
int __fastcall sub_6083E3D0(_DWORD *a1, int a2, int a3, int a4);  /* 0x0083e3d0 */
int __fastcall sub_6083E40C(int a1);  /* 0x0083e40c */
int __fastcall sub_6083E414(int result);  /* 0x0083e414 */
int __fastcall sub_6083E610(int result);  /* 0x0083e610 */
int __fastcall sub_6083E61C(int a1, int a2);  /* 0x0083e61c */
int __fastcall sub_6083E638(int a1);  /* 0x0083e638 */
int __fastcall sub_6083E664(int result, int a2);  /* 0x0083e664 */
int __fastcall sub_6083E66C(int result, int a2);  /* 0x0083e66c */
int __fastcall sub_6083E674(int result, int a2);  /* 0x0083e674 */
int __fastcall sub_6083E67C(int a1);  /* 0x0083e67c */
int __fastcall sub_6083E684(int a1);  /* 0x0083e684 */
int __fastcall sub_6083E68C(int a1);  /* 0x0083e68c */
int __fastcall sub_6083E6B4(_DWORD *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8);  /* 0x0083e6b4 */
int __fastcall sub_6083E70C(int a1);  /* 0x0083e70c */
int __fastcall sub_6083E714(int a1, int a2);  /* 0x0083e714 */
int __fastcall sub_6083E760(int a1);  /* 0x0083e760 */
int __fastcall sub_6083E82C(int a1, int a2, int a3);  /* 0x0083e82c */
int __fastcall sub_6083E894(int a1, int a2, int a3);  /* 0x0083e894 */
int __fastcall sub_6083E8FC(int result);  /* 0x0083e8fc */
int __fastcall sub_6083E91C(int result, int a2);  /* 0x0083e91c */
int __fastcall sub_6083E924(int result, char a2);  /* 0x0083e924 */
int __fastcall sub_6083E92C(int a1);  /* 0x0083e92c */
int __fastcall sub_6083E934(int a1);  /* 0x0083e934 */
int __fastcall sub_6083E93C(int a1);  /* 0x0083e93c */
int __fastcall sub_6083E954(int a1, int a2, int *a3);  /* 0x0083e954 */
int __fastcall sub_6083E9FC(_DWORD *a1, void *a2, unsigned int a3, int a4, int a5, int a6, int *a7);  /* 0x0083e9fc */
int __fastcall sub_6083EACC(_DWORD *a1);  /* 0x0083eacc */
int __fastcall sub_6083EAFC(int *a1, int a2, int a3, _DWORD *a4);  /* 0x0083eafc */
int __fastcall sub_6083EB04(_BYTE *a1, int a2);  /* 0x0083eb04 */
int __fastcall sub_6083EBA8(int a1);  /* 0x0083eba8 */
int __fastcall sub_6083EF6C(int a1);  /* 0x0083ef6c */
int __fastcall sub_6083F220(int a1);  /* 0x0083f220 */
int __fastcall sub_6083F238(int a1);  /* 0x0083f238 */
int __fastcall sub_6083F368(_DWORD *a1, int a2);  /* 0x0083f368 */
int __fastcall sub_6083F3F4(int *a1, int a2);  /* 0x0083f3f4 */
bool __fastcall sub_6083F540(int a1);  /* 0x0083f540 */
int __fastcall sub_608411E4(_BYTE *a1, int a2);  /* 0x008411e4 */
int __fastcall sub_60841320(int a1, int a2, int a3);  /* 0x00841320 */
int __fastcall sub_60841860(int a1, int a2);  /* 0x00841860 */
int __fastcall sub_608418AC(int result, float *a2);  /* 0x008418ac */
int __fastcall sub_60841D20(int a1, int a2);  /* 0x00841d20 */
int __fastcall sub_60841DD8(int result, unsigned int a2, unsigned int a3);  /* 0x00841dd8 */
int __fastcall sub_60841EC4(int result, float *a2);  /* 0x00841ec4 */
int __fastcall sub_6084203C(int result, float *a2);  /* 0x0084203c */
int __fastcall sub_60842130(int result, int *a2);  /* 0x00842130 */
int __fastcall sub_608422AC(int result, unsigned __int8 *a2);  /* 0x008422ac */
int __fastcall sub_608423B8(int a1);  /* 0x008423b8 */
int __fastcall sub_60842410(int a1);  /* 0x00842410 */
int __fastcall sub_60842470(int a1);  /* 0x00842470 */
int __fastcall sub_608424B4(_DWORD *a1);  /* 0x008424b4 */
int __fastcall sub_608424F8(_DWORD *a1);  /* 0x008424f8 */
int __fastcall sub_60842588(int a1, _DWORD *a2, int a3);  /* 0x00842588 */
int __fastcall sub_6084259C(int a1, _DWORD *a2, int a3);  /* 0x0084259c */
int __fastcall sub_60842774(int a1, int a2);  /* 0x00842774 */
int __fastcall sub_608427F0(_DWORD *a1, int a2);  /* 0x008427f0 */
int __fastcall sub_608429F8(int a1, int a2, int a3, int a4, int a5, int a6, int a7);  /* 0x008429f8 */
int __fastcall sub_60842B78(int a1);  /* 0x00842b78 */
int __fastcall sub_60842B80(int a1);  /* 0x00842b80 */
int __fastcall sub_60842B88(int a1, int a2);  /* 0x00842b88 */
int __fastcall sub_60842BA0(int a1);  /* 0x00842ba0 */
int __fastcall sub_60842BA8(int a1);  /* 0x00842ba8 */
int __fastcall sub_60842BB0(int a1);  /* 0x00842bb0 */
int __fastcall sub_60842BB8(int a1);  /* 0x00842bb8 */
int __fastcall sub_60842BC0(int a1);  /* 0x00842bc0 */
int __fastcall sub_60842C4C(int a1);  /* 0x00842c4c */
int __fastcall sub_60842CB8(int a1, int a2);  /* 0x00842cb8 */
int __fastcall sub_60842CD4(int a1, int a2);  /* 0x00842cd4 */
int __fastcall sub_60843554(int a1, int a2);  /* 0x00843554 */
int __fastcall sub_608435EC(int a1, int a2, int a3);  /* 0x008435ec */
int __fastcall sub_60843650(int a1, int a2, _DWORD *a3, _DWORD *a4);  /* 0x00843650 */
int __fastcall sub_608436C8(int a1, int a2, int *a3, unsigned __int8 *a4);  /* 0x008436c8 */
int __fastcall sub_6084374C(int a1);  /* 0x0084374c */
int __fastcall sub_60843754(int a1);  /* 0x00843754 */
int __fastcall sub_6084375C(int result);  /* 0x0084375c */
int __fastcall sub_60843764(int a1, int a2);  /* 0x00843764 */
int __fastcall sub_6084376C(int a1, int a2, int a3, int a4, int a5);  /* 0x0084376c */
int __fastcall sub_60843858(int a1);  /* 0x00843858 */
int __fastcall sub_6084385C(int a1);  /* 0x0084385c */
int __fastcall sub_60843880(int result, int a2, int a3);  /* 0x00843880 */
int __fastcall sub_6084396C(_DWORD *a1);  /* 0x0084396c */
unsigned int __fastcall sub_60843C5C(int a1);  /* 0x00843c5c */
int __fastcall sub_60843D58(int a1, float *a2, _DWORD *a3, int a4);  /* 0x00843d58 */
int __fastcall sub_60843F04(int a1);  /* 0x00843f04 */
int __fastcall sub_60843F58(int a1);  /* 0x00843f58 */
int __fastcall sub_60843FB4(_DWORD *a1, int a2);  /* 0x00843fb4 */
int __fastcall sub_6084409C(int a1, int a2, _DWORD *a3, int a4, int a5);  /* 0x0084409c */
int __fastcall sub_6084430C(int a1, int a2);  /* 0x0084430c */
int __fastcall sub_60844364(int a1, int a2);  /* 0x00844364 */
int __fastcall sub_60844374(int a1);  /* 0x00844374 */
int __fastcall sub_60844440(int a1);  /* 0x00844440 */
int __fastcall sub_608444F4(_DWORD *a1);  /* 0x008444f4 */
int __fastcall sub_60844538(_DWORD *a1);  /* 0x00844538 */
int __fastcall sub_608445C8(int a1, _DWORD *a2, int a3);  /* 0x008445c8 */
int __fastcall sub_6084462C(int a1, int a2);  /* 0x0084462c */
int __fastcall sub_608446A4(_QWORD *a1, unsigned int a2, unsigned int a3);  /* 0x008446a4 */
int __fastcall sub_60844794(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x00844794 */
int __fastcall sub_60844908(int a1);  /* 0x00844908 */
int __fastcall sub_60844910(int a1);  /* 0x00844910 */
int __fastcall sub_60844918(int a1, int a2);  /* 0x00844918 */
int __fastcall sub_60844930(int a1);  /* 0x00844930 */
int __fastcall sub_60844938(int a1);  /* 0x00844938 */
int __fastcall sub_60844944(int a1);  /* 0x00844944 */
int __fastcall sub_6084494C(int a1);  /* 0x0084494c */
int __fastcall sub_60844954(int a1);  /* 0x00844954 */
int __fastcall sub_6084495C(int a1);  /* 0x0084495c */
int __fastcall sub_60844C20(int a1);  /* 0x00844c20 */
int __fastcall sub_60844ED4(int a1, int a2, struct nn_mii *a3);  /* 0x00844ed4 */
int __fastcall sub_60844F38(int a1, int a2, struct nn_mii *a3);  /* 0x00844f38 */
int __fastcall sub_608470F0(int a1, int a2);  /* 0x008470f0 */
int __fastcall sub_60847764(__int16 a1);  /* 0x00847764 */
int __fastcall sub_6084777C(int a1);  /* 0x0084777c */
int __fastcall sub_60847794(int a1);  /* 0x00847794 */
int __fastcall sub_608477AC(int a1);  /* 0x008477ac */
int __fastcall sub_608477C4(int a1);  /* 0x008477c4 */
int __fastcall sub_608477DC(int a1);  /* 0x008477dc */
int __fastcall sub_608477F4(int a1);  /* 0x008477f4 */
int __fastcall sub_60847820(int result, int a2);  /* 0x00847820 */
int __fastcall sub_6084783C(int a1);  /* 0x0084783c */
int __fastcall sub_60847844(int a1);  /* 0x00847844 */
int __fastcall sub_6084784C(int result, int a2);  /* 0x0084784c */
int __fastcall sub_6084785C(_DWORD *a1);  /* 0x0084785c */
int __fastcall sub_60847870(int a1);  /* 0x00847870 */
int __fastcall sub_60847890(int a1);  /* 0x00847890 */
int __fastcall sub_60847898(int a1, int a2);  /* 0x00847898 */
bool __fastcall sub_608478AC(int a1);  /* 0x008478ac */
int __fastcall sub_608478BC(int a1);  /* 0x008478bc */
int __fastcall sub_608478C4(int a1);  /* 0x008478c4 */
int __fastcall sub_608478CC(_DWORD *a1, int a2);  /* 0x008478cc */
int __fastcall sub_60847920(int a1);  /* 0x00847920 */
int __fastcall sub_60847954(int a1);  /* 0x00847954 */
int __fastcall sub_60847974(int a1, int a2);  /* 0x00847974 */
int __fastcall sub_60847984(int a1, int a2);  /* 0x00847984 */
int __fastcall sub_608479DC(int a1, int a2);  /* 0x008479dc */
int __fastcall sub_608479E4(int a1, int a2);  /* 0x008479e4 */
int __fastcall sub_608479EC(int a1, int a2);  /* 0x008479ec */
int __fastcall sub_608479F4(int a1, int a2);  /* 0x008479f4 */
int __fastcall sub_608479FC(int a1);  /* 0x008479fc */
int __fastcall sub_60847A04(int a1, int a2, int a3);  /* 0x00847a04 */
int __fastcall sub_60847A40(int a1, int a2, int a3);  /* 0x00847a40 */
int __fastcall sub_60847A7C(int *a1, struct nn_util *a2, int a3, unsigned int a4, int a5);  /* 0x00847a7c */
int __fastcall sub_60847AEC(int a1, struct nn_util *a2, int a3, unsigned int a4, int a5, int a6);  /* 0x00847aec */
int __fastcall sub_60847B9C(int a1, int a2);  /* 0x00847b9c */
int __fastcall sub_60847BB4(int a1, int a2);  /* 0x00847bb4 */
int __fastcall sub_60847BCC(int a1, int a2, int a3, int a4);  /* 0x00847bcc */
int __fastcall sub_60847BD8(int a1, int a2);  /* 0x00847bd8 */
int __fastcall sub_60847BE4(int a1, int a2);  /* 0x00847be4 */
unsigned int __fastcall sub_60847BF0(int a1);  /* 0x00847bf0 */
int __fastcall sub_60847DAC(int a1, int a2);  /* 0x00847dac */
int __fastcall sub_60847DBC(int a1, int a2);  /* 0x00847dbc */
int __fastcall sub_60847FB8(int a1, int a2);  /* 0x00847fb8 */
int __fastcall sub_60847FF4(int a1);  /* 0x00847ff4 */
int __fastcall sub_60848014(int a1, int *a2, int a3, int a4, int a5, unsigned int a6, int *a7);  /* 0x00848014 */
int __fastcall sub_60848144(int a1, int *a2, int a3, int a4);  /* 0x00848144 */
int __fastcall sub_608481E4(int a1);  /* 0x008481e4 */
int __fastcall sub_60848214(int a1);  /* 0x00848214 */
int __fastcall sub_6084821C(int a1, int a2);  /* 0x0084821c */
unsigned int __fastcall sub_60848294(int a1, int a2, int a3);  /* 0x00848294 */
int __fastcall sub_60848494(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x00848494 */
int __fastcall sub_608485C4(_DWORD *a1, int a2, struct nn_mii_detail_BufferAllocator *a3, int a4, int a5, int a6, int a7);  /* 0x008485c4 */
int __fastcall sub_60848778(_DWORD *a1, int a2, struct nn_mii_detail_BufferAllocator *a3, int a4, int a5, int a6, int a7);  /* 0x00848778 */
int __fastcall sub_6084892C(_DWORD *a1);  /* 0x0084892c */
int __fastcall sub_60848E1C(int a1, int a2, int a3, _DWORD *a4);  /* 0x00848e1c */
int __fastcall sub_608492B0(int a1);  /* 0x008492b0 */
int __fastcall sub_608492D8(int a1);  /* 0x008492d8 */
int __fastcall sub_60849300(int a1, _DWORD *a2, int a3, int a4);  /* 0x00849300 */
int __fastcall sub_608493AC(int a1, _DWORD *a2, int a3, unsigned int *a4);  /* 0x008493ac */
int __fastcall sub_6084946C(int a1, _DWORD *a2, int a3, const void *a4);  /* 0x0084946c */
int __fastcall sub_608494F8(_BYTE *a1, int a2);  /* 0x008494f8 */
int __fastcall sub_60849558(int a1);  /* 0x00849558 */
int __fastcall sub_60849560(int a1);  /* 0x00849560 */
int __fastcall sub_60849588(_DWORD *a1);  /* 0x00849588 */
int __fastcall sub_608495DC(_DWORD *a1);  /* 0x008495dc */
int __fastcall sub_60849630(_DWORD *a1);  /* 0x00849630 */
int __fastcall sub_60849B4C(int result);  /* 0x00849b4c */
int __fastcall sub_60849BB8(int a1);  /* 0x00849bb8 */
int __fastcall sub_60849C18(int a1);  /* 0x00849c18 */
int __fastcall sub_60849C44(int a1);  /* 0x00849c44 */
int __fastcall sub_60849C70(int a1);  /* 0x00849c70 */
int __fastcall sub_60849C9C(int a1, int a2);  /* 0x00849c9c */
int __fastcall sub_60849D30(float *a1, int a2);  /* 0x00849d30 */
int __fastcall sub_60849FDC(int a1, int a2);  /* 0x00849fdc */
int __fastcall sub_6084A098(int a1);  /* 0x0084a098 */
int __fastcall sub_6084A0C8(int a1, int a2, int *a3);  /* 0x0084a0c8 */
int __fastcall sub_6084A144(int result);  /* 0x0084a144 */
int __fastcall sub_6084A158(int a1);  /* 0x0084a158 */
int __fastcall sub_6084A168(_DWORD *a1, int a2);  /* 0x0084a168 */
int __fastcall sub_6084A204(int result, int a2);  /* 0x0084a204 */
int __fastcall sub_6084A20C(int a1, int a2, int *a3);  /* 0x0084a20c */
int __fastcall sub_6084A430(int a1, float32x4_t *a2, int a3, int a4);  /* 0x0084a430 */
int __fastcall sub_6084A664(int a1, _DWORD *a2);  /* 0x0084a664 */
int __fastcall sub_6084A81C(int a1, int a2, int a3, int a4, float *a5);  /* 0x0084a81c */
int __fastcall sub_6084B178(int result);  /* 0x0084b178 */
unsigned int __fastcall sub_6084B190(int a1);  /* 0x0084b190 */
int __fastcall sub_6084B2A0(_DWORD *a1);  /* 0x0084b2a0 */
int __fastcall sub_6084B4EC(_DWORD *a1);  /* 0x0084b4ec */
int __fastcall sub_6084B4FC(int a1);  /* 0x0084b4fc */
int __fastcall sub_6084B720(int a1, int (__fastcall *a2)(int, int));  /* 0x0084b720 */
int __fastcall sub_6084B734(int a1, void (__fastcall *a2)(int, int));  /* 0x0084b734 */
int __fastcall sub_6084B75C(int a1, int a2, int *a3);  /* 0x0084b75c */
int __fastcall sub_6084B8F0(int a1, int a2, int a3, unsigned int a4, _DWORD *a5, unsigned int *a6);  /* 0x0084b8f0 */
int __fastcall sub_6084BBC4(int a1, _DWORD *a2, int a3, int a4, _DWORD *a5, int a6);  /* 0x0084bbc4 */
int __fastcall sub_6084C4B4(int a1, int a2, float *a3);  /* 0x0084c4b4 */
int __fastcall sub_6084C570(int a1, float *a2, float *a3, int a4);  /* 0x0084c570 */
int __fastcall sub_6084C7E0(int a1, int a2, float *a3);  /* 0x0084c7e0 */
int __fastcall sub_6084C89C(int a1, float *a2, float *a3, int a4);  /* 0x0084c89c */
int __fastcall sub_6084CA4C(int a1, _BYTE *a2, int a3);  /* 0x0084ca4c */
int __fastcall sub_6084CA5C(int a1);  /* 0x0084ca5c */
int __fastcall sub_6084CAA8(int a1);  /* 0x0084caa8 */
int __fastcall sub_6084CBBC(const void *a1, float *a2, int a3, int a4);  /* 0x0084cbbc */
int __fastcall sub_6084CCFC(int a1, float *a2, unsigned int *a3, int a4);  /* 0x0084ccfc */
int __fastcall sub_6084D410(_DWORD *a1, int a2, int a3);  /* 0x0084d410 */
int __fastcall sub_6084D488(_DWORD *a1, int a2, int a3, int a4, int a5, int a6);  /* 0x0084d488 */
int __fastcall sub_6084D508(int a1, unsigned int a2, signed int a3, int a4, int *a5, int a6);  /* 0x0084d508 */
int __fastcall sub_6084DD44(int a1, float *a2, float *a3, unsigned int a4, int a5);  /* 0x0084dd44 */
int __fastcall sub_6084E138(int a1);  /* 0x0084e138 */
int __fastcall sub_6084E184(int a1);  /* 0x0084e184 */
int __fastcall sub_6084E29C(const void *a1, float *a2, int a3, int a4);  /* 0x0084e29c */
int __fastcall sub_6084E3E0(const void *a1, int a2, int a3);  /* 0x0084e3e0 */
int __fastcall sub_6084E450(int a1, float *a2, unsigned int *a3, int a4);  /* 0x0084e450 */
int __fastcall sub_6084EB64(_DWORD *a1, int a2, int a3);  /* 0x0084eb64 */
int __fastcall sub_6084EBDC(_DWORD *a1, int a2, int a3, int a4, int a5, int a6);  /* 0x0084ebdc */
int __fastcall sub_6084EC5C(int a1, unsigned int a2, int a3, int a4, int *a5, int a6);  /* 0x0084ec5c */
int __fastcall sub_6084F4A0(int a1, float *a2, float *a3, unsigned int a4, int a5);  /* 0x0084f4a0 */
int __fastcall sub_6084F95C(int a1);  /* 0x0084f95c */
int __fastcall sub_6084F96C(int a1, int a2, int a3);  /* 0x0084f96c */
int __fastcall sub_6084FB2C(int a1, char *a2, int a3);  /* 0x0084fb2c */
int __fastcall sub_6084FBBC(int a1, int a2, int a3, int a4, int a5);  /* 0x0084fbbc */
int __fastcall sub_6084FDC8(int a1, int a2, int a3, float *a4);  /* 0x0084fdc8 */
int __fastcall sub_6084FEB8(int a1, int a2, int a3, int a4, int a5);  /* 0x0084feb8 */
int __fastcall sub_608500C8(int result, int a2, __int16 a3, __int16 a4, __int16 a5, char a6, char a7);  /* 0x008500c8 */
int __fastcall sub_608500F8(int result);  /* 0x008500f8 */
int __fastcall sub_60850120(_DWORD *a1, int a2);  /* 0x00850120 */
int __fastcall sub_60850190(_DWORD *a1, int a2);  /* 0x00850190 */
int __fastcall sub_60850240(char *a1, int a2, const char **a3);  /* 0x00850240 */
int __fastcall sub_60850278(_DWORD *a1);  /* 0x00850278 */
int __fastcall sub_6085028C(_DWORD *a1);  /* 0x0085028c */
unsigned int __fastcall sub_608502A0(unsigned __int8 **a1);  /* 0x008502a0 */
int __fastcall sub_608502E4(int a1);  /* 0x008502e4 */
int __fastcall sub_608502F4(int result, char a2);  /* 0x008502f4 */
bool __fastcall sub_608502FC(int a1);  /* 0x008502fc */
bool __fastcall sub_60850310(int a1);  /* 0x00850310 */
int __fastcall sub_60850328(int result);  /* 0x00850328 */
int __fastcall sub_608503B0(_DWORD *a1);  /* 0x008503b0 */
int __fastcall sub_608503F8(int a1);  /* 0x008503f8 */
void __fastcall sub_6085041C(int a1, int a2, int a3, int a4, int a5);  /* 0x0085041c */
unsigned int __fastcall sub_60850524(int a1, int a2, int a3);  /* 0x00850524 */
int __fastcall sub_60850658(int a1, int a2, int a3);  /* 0x00850658 */
unsigned int __fastcall sub_60850940(int a1, int a2);  /* 0x00850940 */
int __fastcall sub_60850B00(int a1, int a2);  /* 0x00850b00 */
unsigned int __fastcall sub_60850B94(int a1, int a2, int a3);  /* 0x00850b94 */
int __fastcall sub_60850D94(int a1, int a2);  /* 0x00850d94 */
int __fastcall sub_60850EF4(int result, int a2);  /* 0x00850ef4 */
int __fastcall sub_60850F30(int result, int a2);  /* 0x00850f30 */
int __fastcall sub_60850F94(int result);  /* 0x00850f94 */
int __fastcall sub_60850FA0(int a1);  /* 0x00850fa0 */
int __fastcall sub_6085102C(int a1, int a2);  /* 0x0085102c */
int __fastcall sub_608510EC(int result, int a2);  /* 0x008510ec */
int __fastcall sub_60851140(int a1, _BYTE *a2, int a3);  /* 0x00851140 */
int __fastcall sub_6085154C(int a1, _DWORD *a2, int a3);  /* 0x0085154c */
int __fastcall sub_60851AC4(int a1, int a2, int a3);  /* 0x00851ac4 */
int __fastcall sub_60851CF8(int a1);  /* 0x00851cf8 */
int __fastcall sub_60851D10(int a1);  /* 0x00851d10 */
int __fastcall sub_60851D24(int a1);  /* 0x00851d24 */
int __fastcall sub_60851D3C(int a1);  /* 0x00851d3c */
int __fastcall sub_60851D54(int a1);  /* 0x00851d54 */
int __fastcall sub_60851D68(int a1);  /* 0x00851d68 */
int __fastcall sub_60851D80(int a1, int a2);  /* 0x00851d80 */
void __fastcall sub_60851EA0(int a1, int a2, _DWORD *a3);  /* 0x00851ea0 */
int __fastcall sub_60852048(int a1, int a2, int a3, int a4, int a5);  /* 0x00852048 */
int __fastcall sub_608521F4(int result, int a2, unsigned int a3);  /* 0x008521f4 */
int __fastcall sub_608523E8(_DWORD *a1);  /* 0x008523e8 */
int __fastcall sub_608523F8(int a1, int a2);  /* 0x008523f8 */
int __fastcall sub_608524B4(int a1);  /* 0x008524b4 */
unsigned int __fastcall sub_608524F0(int a1, int a2);  /* 0x008524f0 */
int __fastcall sub_60852598(int result);  /* 0x00852598 */
unsigned int __fastcall sub_608525CC(int a1);  /* 0x008525cc */
unsigned int __fastcall sub_60852600(int a1);  /* 0x00852600 */
int __fastcall sub_6085277C(_DWORD *a1, int a2, int a3);  /* 0x0085277c */
int __fastcall sub_608527BC(_DWORD *a1);  /* 0x008527bc */
int __fastcall sub_608527CC(_DWORD *a1);  /* 0x008527cc */
int __fastcall sub_608527DC(_DWORD *a1, int a2, int a3, int a4, int a5);  /* 0x008527dc */
int __fastcall sub_60852850(_DWORD *a1, int a2, int a3, int a4, int a5);  /* 0x00852850 */
int __fastcall sub_608528E8(_DWORD *a1);  /* 0x008528e8 */
int __fastcall sub_60852998(_DWORD *a1);  /* 0x00852998 */
int __fastcall sub_60852A10(_DWORD *a1);  /* 0x00852a10 */
int __fastcall sub_60852A88(_DWORD *a1);  /* 0x00852a88 */
int __fastcall sub_60852BFC(_DWORD *a1, int a2, int a3, int a4);  /* 0x00852bfc */
int __fastcall sub_60852D0C(int result);  /* 0x00852d0c */
bool __fastcall sub_60852DB4(int a1, float *a2);  /* 0x00852db4 */
int __fastcall sub_60852E20(int a1);  /* 0x00852e20 */
int __fastcall sub_60852E70(_DWORD *a1);  /* 0x00852e70 */
int __fastcall sub_60852EEC(_DWORD *a1);  /* 0x00852eec */
int __fastcall sub_60852F74(_DWORD *a1);  /* 0x00852f74 */
int __fastcall sub_60852FFC(_DWORD *a1);  /* 0x00852ffc */
int __fastcall sub_6085309C(int result);  /* 0x0085309c */
int __fastcall sub_60853128(int result);  /* 0x00853128 */
int __fastcall sub_608531B4(int result);  /* 0x008531b4 */
int __fastcall sub_60853258(int result);  /* 0x00853258 */
int __fastcall sub_608532EC(int a1);  /* 0x008532ec */
int __fastcall sub_60853304(int a1);  /* 0x00853304 */
int __fastcall sub_6085331C(int a1);  /* 0x0085331c */
int __fastcall sub_60853334(int a1);  /* 0x00853334 */
int __fastcall sub_60853444(int result);  /* 0x00853444 */
int __fastcall sub_608534A0(int result);  /* 0x008534a0 */
int __fastcall sub_608534F8(int result);  /* 0x008534f8 */
int __fastcall sub_60853554(int result);  /* 0x00853554 */
int __fastcall sub_608535AC(_DWORD *a1);  /* 0x008535ac */
int __fastcall sub_608535C4(_DWORD *a1);  /* 0x008535c4 */
int __fastcall sub_608535DC(_DWORD *a1);  /* 0x008535dc */
int __fastcall sub_608535F4(_DWORD *a1);  /* 0x008535f4 */
int __fastcall sub_60853A94(int result, char a2);  /* 0x00853a94 */
int __fastcall sub_60853AA8(_DWORD *a1);  /* 0x00853aa8 */
int __fastcall sub_60853B28(_DWORD *a1);  /* 0x00853b28 */
int __fastcall sub_60853BA0(_DWORD *a1);  /* 0x00853ba0 */
int __fastcall sub_60853C40(_DWORD *a1);  /* 0x00853c40 */
int __fastcall sub_60853CC8(int a1);  /* 0x00853cc8 */
int __fastcall sub_60853CD8(int a1);  /* 0x00853cd8 */
int __fastcall sub_60853CE8(int a1);  /* 0x00853ce8 */
int __fastcall sub_60853CF8(int a1);  /* 0x00853cf8 */
int __fastcall sub_60853D08(int result, int a2);  /* 0x00853d08 */
int __fastcall sub_60853D10(int result, int a2);  /* 0x00853d10 */
int __fastcall sub_60853D18(int result, int a2, int a3);  /* 0x00853d18 */
int __fastcall sub_60853D80(int a1, int a2);  /* 0x00853d80 */
int __fastcall sub_60853DE0(int a1, int a2);  /* 0x00853de0 */
int __fastcall sub_60853E04(int a1, int a2);  /* 0x00853e04 */
int __fastcall sub_60853EC0(int result);  /* 0x00853ec0 */
int __fastcall sub_60853FDC(int result, int a2);  /* 0x00853fdc */
int __fastcall sub_60853FF8(int result);  /* 0x00853ff8 */
int __fastcall sub_60854010(int result);  /* 0x00854010 */
int __fastcall sub_6085401C(int result);  /* 0x0085401c */
int __fastcall sub_60854050(int result);  /* 0x00854050 */
int __fastcall sub_6085406C(int a1, int a2, int a3);  /* 0x0085406c */
int __fastcall sub_60854184(int a1, _DWORD *a2, int a3, int a4, int a5, int a6, int a7);  /* 0x00854184 */
int __fastcall sub_608548E4(int a1, _DWORD *a2, _DWORD *a3, int a4);  /* 0x008548e4 */
int __fastcall sub_60854D60(int a1, _BYTE *a2, _BYTE *a3, _BYTE *a4);  /* 0x00854d60 */
int __fastcall sub_60854EEC(int a1, int a2);  /* 0x00854eec */
int __fastcall sub_60854EFC(unsigned __int8 *a1, unsigned __int8 *a2);  /* 0x00854efc */
int __fastcall sub_60854FCC(int a1, int a2);  /* 0x00854fcc */
int __fastcall sub_60854FF8(int a1);  /* 0x00854ff8 */
int __fastcall sub_608550B0(int a1);  /* 0x008550b0 */
int __fastcall sub_60855108(int a1, int a2);  /* 0x00855108 */
int __fastcall sub_6085542C(_DWORD *a1, void (__fastcall *a2)(int, int, int), int a3);  /* 0x0085542c */
int __fastcall sub_608555E0(_DWORD *a1, void (__fastcall *a2)(int, int, int), int a3);  /* 0x008555e0 */
int __fastcall sub_60855804(int a1, int a2, int a3, int a4, int a5);  /* 0x00855804 */
int __fastcall sub_60855828(int result, int a2);  /* 0x00855828 */
int __fastcall sub_60855864(int a1, int a2, int a3);  /* 0x00855864 */
int __fastcall sub_608559D0(_DWORD *a1);  /* 0x008559d0 */
int __fastcall sub_60855AB8(int result, int a2);  /* 0x00855ab8 */
int __fastcall sub_60855AD8(int a1, int a2);  /* 0x00855ad8 */
int __fastcall sub_60855B3C(int a1, const void *a2);  /* 0x00855b3c */
int __fastcall sub_60855B70(int (__fastcall *a1)(_DWORD, _DWORD, _DWORD), int (__fastcall *a2)(_DWORD, _DWORD), int a3);  /* 0x00855b70 */
int __fastcall sub_60855BA4(int a1, int a2);  /* 0x00855ba4 */
int __fastcall sub_60855BC8(int a1);  /* 0x00855bc8 */
int __fastcall sub_60855BF0(int a1);  /* 0x00855bf0 */
int __fastcall sub_60855C88(_DWORD *a1, int a2);  /* 0x00855c88 */
int __fastcall sub_60855E14(_DWORD *a1, int a2, int a3, int a4, int a5, int a6, char *a7, int a8, char a9);  /* 0x00855e14 */
int __fastcall sub_60855EE4(_DWORD *a1, int a2, int a3, float *a4, int *a5, int a6, int a7, int a8);  /* 0x00855ee4 */
int __fastcall sub_608561CC(_DWORD *a1, int a2, int a3, int a4, int a5, int a6, _DWORD *a7);  /* 0x008561cc */
int __fastcall sub_60856AAC(int a1, int a2, int a3);  /* 0x00856aac */
int __fastcall sub_60856AF0(int a1);  /* 0x00856af0 */
int __fastcall sub_60856B5C(int result, _DWORD *a2);  /* 0x00856b5c */
int __fastcall sub_60856BD4(int a1, int a2);  /* 0x00856bd4 */
int __fastcall sub_60856E3C(int result, int a2);  /* 0x00856e3c */
int __fastcall sub_60856E60(int a1, int a2);  /* 0x00856e60 */
int __fastcall sub_60856E70(int result, int a2);  /* 0x00856e70 */
int __fastcall sub_60856EAC(int result);  /* 0x00856eac */
int __fastcall sub_60856EE0(int a1, int a2, int a3);  /* 0x00856ee0 */
int __fastcall sub_608572E0(int a1, int a2, int a3);  /* 0x008572e0 */
int __fastcall sub_60857344(int a1, int a2, int a3);  /* 0x00857344 */
int __fastcall sub_60857390(int result);  /* 0x00857390 */
int __fastcall sub_608573F4(int result);  /* 0x008573f4 */
int __fastcall sub_6085746C(int result);  /* 0x0085746c */
int __fastcall sub_6085768C(int a1, int a2);  /* 0x0085768c */
int __fastcall sub_608576F0(int a1);  /* 0x008576f0 */
int __fastcall sub_60857AC0(int a1, const char *a2);  /* 0x00857ac0 */
int __fastcall sub_60857B80(int a1, _BYTE *a2, int a3);  /* 0x00857b80 */
int __fastcall sub_608583BC(int a1, float *a2, int a3);  /* 0x008583bc */
int __fastcall sub_6085852C(int a1, int a2);  /* 0x0085852c */
int __fastcall sub_608587E8(int a1, int a2);  /* 0x008587e8 */
int __fastcall sub_608589FC(int a1, int a2);  /* 0x008589fc */
int __fastcall sub_60858A34(int a1, _DWORD *a2);  /* 0x00858a34 */
int __fastcall sub_60858B94(unsigned __int8 *a1, int a2);  /* 0x00858b94 */
int __fastcall sub_60858BD0(int result, int a2, int a3);  /* 0x00858bd0 */
int __fastcall sub_60858C5C(int a1);  /* 0x00858c5c */
int __fastcall sub_60858C68(_DWORD *a1, int a2, int a3);  /* 0x00858c68 */
int __fastcall sub_60858D44(int a1);  /* 0x00858d44 */
int __fastcall sub_60858D50(float32x4_t *a1, int a2, int a3, int a4);  /* 0x00858d50 */
int __fastcall sub_60859508(int a1, int a2, int a3);  /* 0x00859508 */
int __fastcall sub_608595A8(int a1, int a2, int a3, int a4);  /* 0x008595a8 */
int __fastcall sub_608595E0(_DWORD *a1, int a2, int a3);  /* 0x008595e0 */
int __fastcall sub_60859640(int a1, int a2);  /* 0x00859640 */
int __fastcall sub_608596C0(_DWORD *a1, int a2);  /* 0x008596c0 */
int __fastcall sub_60859760(int a1);  /* 0x00859760 */
int __fastcall sub_608597A8(int a1);  /* 0x008597a8 */
int __fastcall sub_608597C0(int a1);  /* 0x008597c0 */
int __fastcall sub_608597F0(int a1);  /* 0x008597f0 */
int __fastcall sub_608598B0(int result, int a2);  /* 0x008598b0 */
int __fastcall sub_60859934(int a1);  /* 0x00859934 */
int __fastcall sub_60859940(_DWORD *a1, int a2);  /* 0x00859940 */
int __fastcall sub_60859A10(int a1);  /* 0x00859a10 */
int __fastcall sub_60859A1C(int result, int a2, int a3);  /* 0x00859a1c */
int __fastcall sub_60859B54(int a1);  /* 0x00859b54 */
int __fastcall sub_60859B64(int result, int a2);  /* 0x00859b64 */
int __fastcall sub_60859BA0(int a1);  /* 0x00859ba0 */
int __fastcall sub_60859BAC(int a1, int a2);  /* 0x00859bac */
int __fastcall sub_60859C38(int a1);  /* 0x00859c38 */
int __fastcall sub_60859D08(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x00859d08 */
int __fastcall sub_6085A1FC(int a1, int a2, int a3);  /* 0x0085a1fc */
int __fastcall sub_6085A504(_DWORD *a1);  /* 0x0085a504 */
int __fastcall sub_6085A51C(_DWORD *a1);  /* 0x0085a51c */
int __fastcall sub_6085A540(int a1, int a2);  /* 0x0085a540 */
bool __fastcall sub_6085A630(int a1);  /* 0x0085a630 */
int __fastcall sub_6085A640(_DWORD *a1, int a2);  /* 0x0085a640 */
unsigned int __fastcall sub_6085A66C(int a1, int a2);  /* 0x0085a66c */
int __fastcall sub_6085A7B8(int a1, int a2);  /* 0x0085a7b8 */
int __fastcall sub_6085A814(int a1, int a2);  /* 0x0085a814 */
unsigned int __fastcall sub_6085A834(int a1, int a2, char a3);  /* 0x0085a834 */
int __fastcall sub_6085A860(float32x2_t *a1, float32x4_t *a2);  /* 0x0085a860 */
void __fastcall sub_6085B320(int a1, int a2);  /* 0x0085b320 */
int __fastcall sub_6085B474(int a1, int a2, int a3);  /* 0x0085b474 */
int __fastcall sub_6085B718(int a1, int a2, int a3);  /* 0x0085b718 */
int __fastcall sub_6085B834(int a1);  /* 0x0085b834 */
int __fastcall sub_6085B840(int a1, int a2, int a3);  /* 0x0085b840 */
int __fastcall sub_6085B858(int a1, int a2, int a3);  /* 0x0085b858 */
int __fastcall sub_6085B874(int result, int a2);  /* 0x0085b874 */
int __fastcall sub_6085B8E0(int a1, _BYTE *a2, char a3);  /* 0x0085b8e0 */
int __fastcall sub_6085BA50(int a1, _DWORD *a2, int a3);  /* 0x0085ba50 */
int __fastcall sub_6085BA78(int a1, _DWORD *a2, int a3, int a4, _DWORD *a5, int a6);  /* 0x0085ba78 */
int __fastcall sub_6085BE54(int a1, int a2);  /* 0x0085be54 */
int __fastcall sub_6085C0E0(int a1, int a2, int a3);  /* 0x0085c0e0 */
int __fastcall sub_6085C264(int a1, int a2, int a3);  /* 0x0085c264 */
int __fastcall sub_6085C2C0(int result);  /* 0x0085c2c0 */
int __fastcall sub_6085C2D4(int result, int a2);  /* 0x0085c2d4 */
int __fastcall sub_6085C2E8(int result, int a2);  /* 0x0085c2e8 */
int __fastcall sub_6085C340(int a1, int a2, int a3, _DWORD *a4, int a5, int a6, int a7);  /* 0x0085c340 */
int __fastcall sub_6085C99C(_DWORD *a1, int a2, _DWORD *a3, int a4, int a5);  /* 0x0085c99c */
int __fastcall sub_6085CBB0(_DWORD *a1, int a2, int a3, int a4);  /* 0x0085cbb0 */
int __fastcall sub_6085CC60(_DWORD *a1, int a2, const char **a3, int a4);  /* 0x0085cc60 */
int __fastcall sub_6085CD2C(int a1, int a2, int a3);  /* 0x0085cd2c */
int __fastcall sub_6085CFDC(int a1);  /* 0x0085cfdc */
int __fastcall sub_6085CFF8(_DWORD *a1);  /* 0x0085cff8 */
int __fastcall sub_6085D010(_DWORD *a1);  /* 0x0085d010 */
int __fastcall sub_6085D034(int a1, int a2);  /* 0x0085d034 */
bool __fastcall sub_6085D0F0(int a1);  /* 0x0085d0f0 */
int __fastcall sub_6085D100(_DWORD *a1, int a2);  /* 0x0085d100 */
int __fastcall sub_6085D12C(int a1, unsigned int a2);  /* 0x0085d12c */
int __fastcall sub_6085D15C(int a1, int a2, unsigned __int8 *a3);  /* 0x0085d15c */
int __fastcall sub_6085D1F4(int a1, int a2);  /* 0x0085d1f4 */
int __fastcall sub_6085D21C(int result, int a2, int a3);  /* 0x0085d21c */
int __fastcall sub_6085D270(float *a1, int a2);  /* 0x0085d270 */
int __fastcall sub_6085D560(int result, int a2);  /* 0x0085d560 */
int __fastcall sub_6085D7E0(int a1, int a2);  /* 0x0085d7e0 */
int __fastcall sub_6085DB04(float32x4_t *a1, int a2, int a3, int a4);  /* 0x0085db04 */
unsigned int __fastcall sub_6085DD1C(int a1, int a2);  /* 0x0085dd1c */
unsigned int __fastcall sub_6085DE84(int a1, int a2);  /* 0x0085de84 */
int __fastcall sub_6085DFF4(int a1, int a2, int a3);  /* 0x0085dff4 */
int __fastcall sub_6085E060(int a1, int a2, int a3);  /* 0x0085e060 */
int __fastcall sub_6085E070(int result, int a2, int a3, int a4);  /* 0x0085e070 */
int __fastcall sub_6085E2A4(_DWORD *a1);  /* 0x0085e2a4 */
int __fastcall sub_6085E5DC(int a1);  /* 0x0085e5dc */
float __fastcall sub_6085E5E4(float result, float *a2);  /* 0x0085e5e4 */
int __fastcall sub_6085E6A4(int a1, int a2);  /* 0x0085e6a4 */
int __fastcall sub_6085E7F8(int a1, int a2);  /* 0x0085e7f8 */
int __fastcall sub_6085E94C(int result, int a2);  /* 0x0085e94c */
int __fastcall sub_6085E980(int a1, int a2);  /* 0x0085e980 */
int __fastcall sub_6085EC24(int a1, int a2);  /* 0x0085ec24 */
int __fastcall sub_6085ED90(int a1, int a2);  /* 0x0085ed90 */
int __fastcall sub_6085EFD0(int result);  /* 0x0085efd0 */
int __fastcall sub_6085F034(int a1);  /* 0x0085f034 */
int __fastcall sub_6085F040(int a1);  /* 0x0085f040 */
int __fastcall sub_6085F080(int a1);  /* 0x0085f080 */
int __fastcall sub_6085F08C(int a1);  /* 0x0085f08c */
int __fastcall sub_6085F098(int a1, int *a2, int a3);  /* 0x0085f098 */
int __fastcall sub_6085F208(_BYTE *a1, int a2, int a3, int a4, _DWORD *a5);  /* 0x0085f208 */
int __fastcall sub_6085F3D0(int *a1, int *a2, unsigned __int8 *a3);  /* 0x0085f3d0 */
int __fastcall sub_6085F4D8(int result, int a2);  /* 0x0085f4d8 */
int __fastcall sub_6085F594(_WORD *a1, int a2, int a3);  /* 0x0085f594 */
int __fastcall sub_6085F5E4(int *a1, int a2);  /* 0x0085f5e4 */
int __fastcall sub_6085F66C(int a1, int a2, int a3);  /* 0x0085f66c */
int __fastcall sub_6085F830(_DWORD *a1, int a2, int a3);  /* 0x0085f830 */
int __fastcall sub_6085F88C(int a1, int a2, int a3, int a4);  /* 0x0085f88c */
int __fastcall sub_6085F970(_DWORD *a1, _DWORD *a2);  /* 0x0085f970 */
int __fastcall sub_6085FA68(_DWORD *a1);  /* 0x0085fa68 */
int __fastcall sub_60860584(int a1, int a2);  /* 0x00860584 */
int __fastcall sub_60860664(int a1, _DWORD *a2, _DWORD *a3, int a4, int a5, int a6);  /* 0x00860664 */
int __fastcall sub_60860C30(int result, _WORD *a2);  /* 0x00860c30 */
int __fastcall sub_60860D30(int a1, int a2, int a3);  /* 0x00860d30 */
int __fastcall sub_60861068(_DWORD *a1);  /* 0x00861068 */
int __fastcall sub_60861080(_DWORD *a1);  /* 0x00861080 */
int __fastcall sub_608610A4(int a1, int a2);  /* 0x008610a4 */
int __fastcall sub_608611C8(int a1, int a2);  /* 0x008611c8 */
int __fastcall sub_60861224(int a1, int a2);  /* 0x00861224 */
unsigned int __fastcall sub_60861244(int a1, int a2, char a3);  /* 0x00861244 */
int __fastcall sub_60861264(int a1);  /* 0x00861264 */
int __fastcall sub_60861274(int a1, int a2);  /* 0x00861274 */
int __fastcall sub_608612C8(int a1, int a2, int a3);  /* 0x008612c8 */
int __fastcall sub_608613C4(int a1);  /* 0x008613c4 */
int __fastcall sub_608613D0(float32x4_t *a1, _DWORD *a2, int a3, int a4);  /* 0x008613d0 */
int __fastcall sub_608615C8(int a1, int a2);  /* 0x008615c8 */
int __fastcall sub_60861BA0(int a1, int a2);  /* 0x00861ba0 */
int __fastcall sub_60862020(int a1, int a2);  /* 0x00862020 */
int __fastcall sub_608620F4(int a1, int a2, int a3);  /* 0x008620f4 */
int __fastcall sub_608624D4(int a1, int a2, float *a3, int a4, float *a5, int a6);  /* 0x008624d4 */
int __fastcall sub_60862B20(int a1, int a2, float *a3, int a4, float *a5, int a6);  /* 0x00862b20 */
int __fastcall sub_608630C8(int a1, int a2, float *a3, int a4, float *a5, int a6);  /* 0x008630c8 */
int __fastcall sub_6086365C(int a1, int a2, float *a3, int a4, float *a5, int a6);  /* 0x0086365c */
int __fastcall sub_60863AB0(int a1, int a2, float *a3, int a4, float *a5, int a6);  /* 0x00863ab0 */
int __fastcall sub_60863FA0(int a1, int a2, float *a3, int a4, float *a5, int a6);  /* 0x00863fa0 */
int __fastcall sub_608643FC(int a1, int a2, float *a3, int a4, float *a5, int a6);  /* 0x008643fc */
int __fastcall sub_608649EC(_DWORD *a1, int a2);  /* 0x008649ec */
int __fastcall sub_60864BD8(int a1);  /* 0x00864bd8 */
unsigned int __fastcall sub_60864BE8(_DWORD *a1, unsigned int *a2, int a3);  /* 0x00864be8 */
int __fastcall sub_60864C50(_DWORD *a1, unsigned __int8 *a2);  /* 0x00864c50 */
int __fastcall sub_60864EA8(int a1);  /* 0x00864ea8 */
int __fastcall sub_60864F80(int result);  /* 0x00864f80 */
int __fastcall sub_60864F9C(int result);  /* 0x00864f9c */
int __fastcall sub_60864FB0(int a1);  /* 0x00864fb0 */
int __fastcall sub_60864FD8(unsigned __int8 *a1, int a2);  /* 0x00864fd8 */
int __fastcall sub_60865108(int a1, int a2, _DWORD *a3);  /* 0x00865108 */
int __fastcall sub_6086516C(int result, int a2, int a3);  /* 0x0086516c */
int __fastcall sub_60865204(int a1, int a2);  /* 0x00865204 */
int __fastcall sub_60865218(int a1, int a2);  /* 0x00865218 */
int __fastcall sub_60865468(int a1, int a2, int a3);  /* 0x00865468 */
int __fastcall sub_608654EC(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x008654ec */
int __fastcall sub_60866798(int a1, int a2, _DWORD *a3, int a4);  /* 0x00866798 */
int __fastcall sub_60866FAC(int result, _DWORD *a2, _DWORD *a3);  /* 0x00866fac */
int __fastcall sub_60867078(int a1, int a2);  /* 0x00867078 */
int __fastcall sub_60867200(_DWORD *a1, int a2);  /* 0x00867200 */
int __fastcall sub_608672C4(_DWORD *a1, int a2);  /* 0x008672c4 */
int __fastcall sub_6086735C(int a1, int a2, int a3);  /* 0x0086735c */
int __fastcall sub_60867638(int a1, int a2);  /* 0x00867638 */
int __fastcall sub_60867BE8(int a1, int a2);  /* 0x00867be8 */
int __fastcall sub_60867C00(int a1, int a2);  /* 0x00867c00 */
int __fastcall sub_60867C18(int a1, int a2, unsigned int a3, int a4, int a5, int a6, int a7);  /* 0x00867c18 */
int __fastcall sub_60867E38(int a1, int a2);  /* 0x00867e38 */
unsigned int __fastcall sub_60867E54(_DWORD *a1, int a2, int a3, int a4);  /* 0x00867e54 */
int __fastcall sub_6086827C(int result, int a2);  /* 0x0086827c */
int __fastcall sub_60868CA4(int a1, int a2, int a3);  /* 0x00868ca4 */
int __fastcall sub_60868D58(int a1, int a2);  /* 0x00868d58 */
int __fastcall sub_60868D74(int result, int a2);  /* 0x00868d74 */
unsigned int __fastcall sub_608691AC(int a1, int a2, char **a3, int a4);  /* 0x008691ac */
int __fastcall sub_60869BB8(int a1, int a2, int a3);  /* 0x00869bb8 */
int __fastcall sub_60869F34(int a1, int a2, int a3);  /* 0x00869f34 */
int __fastcall sub_60869FE4(int result, int a2, int a3);  /* 0x00869fe4 */
int __fastcall sub_6086A094(int a1, int a2, int a3);  /* 0x0086a094 */
int __fastcall sub_6086A144(int a1, int a2);  /* 0x0086a144 */
int __fastcall sub_6086A1FC(int a1, int a2);  /* 0x0086a1fc */
int __fastcall sub_6086A288(int result, int a2, __int16 a3);  /* 0x0086a288 */
int __fastcall sub_6086A2A4(int result, unsigned __int16 a2);  /* 0x0086a2a4 */
int __fastcall sub_6086A340(int result, unsigned __int16 *a2);  /* 0x0086a340 */
int __fastcall sub_6086A3F0(int result, int a2, int a3);  /* 0x0086a3f0 */
int __fastcall sub_6086A548(int a1, int *a2, int a3, unsigned int a4);  /* 0x0086a548 */
int __fastcall sub_6086A634(int a1, int a2);  /* 0x0086a634 */
int __fastcall sub_6086A6E0(int a1, int a2);  /* 0x0086a6e0 */
void __fastcall sub_6086A944(int a1);  /* 0x0086a944 */
int __fastcall sub_6086A968(int a1, _DWORD *a2);  /* 0x0086a968 */
void __fastcall sub_6086A978(int a1, int a2);  /* 0x0086a978 */
int __fastcall sub_6086ABA0(int result, int a2);  /* 0x0086aba0 */
int __fastcall sub_6086ADCC(_DWORD *a1, int *a2, int a3, unsigned int a4);  /* 0x0086adcc */
int __fastcall sub_6086AF38(int a1, int a2);  /* 0x0086af38 */
int __fastcall sub_6086B060(int a1, int a2);  /* 0x0086b060 */
int __fastcall sub_6086B35C(int a1, int a2, int a3, int a4);  /* 0x0086b35c */
int __fastcall sub_6086B678(int a1, _DWORD *a2);  /* 0x0086b678 */
int __fastcall sub_6086B688(int a1, int a2);  /* 0x0086b688 */
int __fastcall sub_6086BAB0(int a1, _DWORD *a2);  /* 0x0086bab0 */
int __fastcall sub_6086BBD8(int result, int a2, int a3, int a4);  /* 0x0086bbd8 */
int __fastcall sub_6086C084(int *a1, _DWORD *a2, int a3, unsigned int a4);  /* 0x0086c084 */
int __fastcall sub_6086C280(int a1, _DWORD *a2);  /* 0x0086c280 */
int __fastcall sub_6086C2D8(unsigned __int8 *a1, _DWORD *a2);  /* 0x0086c2d8 */
int __fastcall sub_6086C350(int *a1, _DWORD *a2, _DWORD *a3, int a4);  /* 0x0086c350 */
int __fastcall sub_6086C584(int *a1, _DWORD *a2, _DWORD *a3, int a4, unsigned int a5);  /* 0x0086c584 */
int __fastcall sub_6086C63C(int a1, int a2);  /* 0x0086c63c */
unsigned int __fastcall sub_6086C75C(unsigned int *a1, int a2, int a3);  /* 0x0086c75c */
unsigned int __fastcall sub_6086C8F0(int *a1);  /* 0x0086c8f0 */
int __fastcall sub_6086CCFC(int a1, _DWORD *a2, int a3, unsigned int a4);  /* 0x0086ccfc */
unsigned int __fastcall sub_6086D358(int a1, _DWORD *a2);  /* 0x0086d358 */
int __fastcall sub_6086D43C(int a1, _DWORD *a2);  /* 0x0086d43c */
int __fastcall sub_6086D550(int a1, _DWORD *a2, _DWORD *a3, int a4, unsigned int a5);  /* 0x0086d550 */
int __fastcall sub_6086D74C(int a1);  /* 0x0086d74c */
unsigned int __fastcall sub_6086D754(int a1, int a2);  /* 0x0086d754 */
int __fastcall sub_6086D84C(int a1, int a2);  /* 0x0086d84c */
int __fastcall sub_6086D854(int a1, int a2);  /* 0x0086d854 */
int __fastcall sub_6086DA64(int result);  /* 0x0086da64 */
int __fastcall sub_6086DAF0(int a1, int a2);  /* 0x0086daf0 */
int __fastcall sub_6086DBF4(int *a1, int a2);  /* 0x0086dbf4 */
unsigned int __fastcall sub_6086DCDC(int *a1, int a2);  /* 0x0086dcdc */
int __fastcall sub_6086DD94(int a1, int a2);  /* 0x0086dd94 */
int __fastcall sub_6086DE98(int a1, int a2);  /* 0x0086de98 */
int __fastcall sub_6086DFBC(int a1, int a2);  /* 0x0086dfbc */
int __fastcall sub_6086E0E0(int a1, int a2);  /* 0x0086e0e0 */
int __fastcall sub_6086E1D0(int a1, int a2);  /* 0x0086e1d0 */
int __fastcall sub_6086E2D0(int a1, int a2);  /* 0x0086e2d0 */
int __fastcall sub_6086E3D0(int a1);  /* 0x0086e3d0 */
int __fastcall sub_6086E414(int a1);  /* 0x0086e414 */
int __fastcall sub_6086E468(int a1);  /* 0x0086e468 */
int __fastcall sub_6086E4B8(int a1, int a2);  /* 0x0086e4b8 */
int __fastcall sub_6086E568(int a1, int a2);  /* 0x0086e568 */
int __fastcall sub_6086E61C(int a1, int a2);  /* 0x0086e61c */
int __fastcall sub_6086E6D0(int a1);  /* 0x0086e6d0 */
int __fastcall sub_6086E6F4(int a1);  /* 0x0086e6f4 */
int __fastcall sub_6086E71C(int a1);  /* 0x0086e71c */
int __fastcall sub_6086E744(int a1, int a2);  /* 0x0086e744 */
int __fastcall sub_6086E804(int a1);  /* 0x0086e804 */
int __fastcall sub_6086E838(int a1);  /* 0x0086e838 */
int __fastcall sub_6086E97C(int a1);  /* 0x0086e97c */
int __fastcall sub_6086EAA4(int a1);  /* 0x0086eaa4 */
int __fastcall sub_6086EC0C(int a1);  /* 0x0086ec0c */
int __fastcall sub_6086EDE8(int a1, int a2, int a3);  /* 0x0086ede8 */
int __fastcall sub_6086EE74(int result);  /* 0x0086ee74 */
int __fastcall sub_6086EED0(int a1, _DWORD *a2);  /* 0x0086eed0 */
int __fastcall sub_6086EF58(int a1, int a2, int a3, int a4);  /* 0x0086ef58 */
int __fastcall sub_6086EFC4(int a1, int a2);  /* 0x0086efc4 */
int __fastcall sub_6086F034(int a1);  /* 0x0086f034 */
void __fastcall sub_6086F110(int a1, char *a2, char *a3);  /* 0x0086f110 */
int __fastcall sub_6086F194(int a1, int a2);  /* 0x0086f194 */
int __fastcall sub_6086F270(int32x4x2_t *a1, int a2);  /* 0x0086f270 */
int __fastcall sub_6086F54C(int a1, _DWORD *a2);  /* 0x0086f54c */
int __fastcall sub_6086F564(int a1, _DWORD *a2);  /* 0x0086f564 */
int __fastcall sub_6086F57C(int a1, void (__fastcall *a2)(int *, int, int), int a3);  /* 0x0086f57c */
int __fastcall sub_6086F65C(int result);  /* 0x0086f65c */
int __fastcall sub_6086F6F8(int a1, int a2);  /* 0x0086f6f8 */
int __fastcall sub_6086F7E0(int result, int a2);  /* 0x0086f7e0 */
void __fastcall sub_6086F834(int a1, char a2);  /* 0x0086f834 */
int __fastcall sub_6086F8A0(float *a1, float *a2);  /* 0x0086f8a0 */
int __fastcall sub_6086F9B0(float *a1, float *a2);  /* 0x0086f9b0 */
int __fastcall sub_6086FAC0(float *a1, float *a2);  /* 0x0086fac0 */
int __fastcall sub_6086FBC0(int a1, int a2);  /* 0x0086fbc0 */
int __fastcall sub_6086FDEC(int a1, int a2);  /* 0x0086fdec */
int __fastcall sub_60870014(int a1, int a2);  /* 0x00870014 */
int __fastcall sub_60870234(int result, int a2, int a3, int a4);  /* 0x00870234 */
int __fastcall sub_60870390(int result, int a2, int a3);  /* 0x00870390 */
int __fastcall sub_608704CC(int result, int a2, unsigned __int16 *a3);  /* 0x008704cc */
int __fastcall sub_6087055C(int result, int a2, unsigned __int16 *a3);  /* 0x0087055c */
int __fastcall sub_608705FC(int result, int *a2);  /* 0x008705fc */
int __fastcall sub_60870630(int result, int *a2);  /* 0x00870630 */
int __fastcall sub_60870678(int a1, void (__fastcall *a2)(int *, int, int), int a3);  /* 0x00870678 */
int __fastcall sub_60870758(int result);  /* 0x00870758 */
int __fastcall sub_608707F4(int a1);  /* 0x008707f4 */
int __fastcall sub_60870980(int a1, void (__fastcall *a2)(int *, int, int), int a3);  /* 0x00870980 */
int __fastcall sub_608709D8(int result);  /* 0x008709d8 */
int __fastcall sub_60870A0C(int result, int a2);  /* 0x00870a0c */
int __fastcall sub_60870AA0(int result, int a2, int a3, int a4);  /* 0x00870aa0 */
int __fastcall sub_60870B4C(int result, int a2);  /* 0x00870b4c */
int __fastcall sub_60870BE0(int a1);  /* 0x00870be0 */
int __fastcall sub_60870CB0(int result, int a2);  /* 0x00870cb0 */
int __fastcall sub_60870D20(int result, int a2, int a3);  /* 0x00870d20 */
int __fastcall sub_60870D80(int result);  /* 0x00870d80 */
int __fastcall sub_60870F24(int a1, _DWORD *a2);  /* 0x00870f24 */
int __fastcall sub_60871018(int a1, _DWORD *a2, int a3);  /* 0x00871018 */
int __fastcall sub_608710F0(int a1);  /* 0x008710f0 */
int __fastcall sub_608713BC(int a1, int a2);  /* 0x008713bc */
int __fastcall sub_60871474(int result, int a2);  /* 0x00871474 */
int __fastcall sub_608714C8(int a1, int a2, int a3);  /* 0x008714c8 */
unsigned int __fastcall sub_608714EC(int a1, int a2);  /* 0x008714ec */
int __fastcall sub_60871508(int a1, int a2, int a3);  /* 0x00871508 */
int __fastcall sub_60871534(int a1, int a2);  /* 0x00871534 */
void __fastcall sub_60871630(int a1, void *a2);  /* 0x00871630 */
void __fastcall sub_608716DC(int a1, void *a2);  /* 0x008716dc */
void __fastcall sub_60871790(int a1, void *a2);  /* 0x00871790 */
unsigned int __fastcall sub_608717BC(int a1, int *a2, int a3);  /* 0x008717bc */
bool __fastcall sub_608718C0(int a1, _DWORD *a2, int a3);  /* 0x008718c0 */
int __fastcall sub_60871AE0(int a1, _DWORD *a2, int a3);  /* 0x00871ae0 */
int __fastcall sub_60871D44(_DWORD *a1, _DWORD *a2, int a3);  /* 0x00871d44 */
int __fastcall sub_60871DA8(int a1, int a2);  /* 0x00871da8 */
unsigned int __fastcall sub_60871E8C(unsigned int result, _DWORD *a2);  /* 0x00871e8c */
unsigned int __fastcall sub_60871F4C(unsigned int result, _DWORD *a2, _DWORD *a3, int a4);  /* 0x00871f4c */
int __fastcall sub_60872014(int result, int a2);  /* 0x00872014 */
int __fastcall sub_60872068(int result, char a2);  /* 0x00872068 */
int __fastcall sub_608720EC(int result, _DWORD *a2);  /* 0x008720ec */
int __fastcall sub_60872178(int result, _DWORD *a2, _DWORD *a3, int a4);  /* 0x00872178 */
int __fastcall sub_60872218(int result, int a2);  /* 0x00872218 */
int __fastcall sub_6087226C(int result, char a2);  /* 0x0087226c */
int __fastcall sub_608722BC(_DWORD *a1, int a2, int a3, int a4, int a5);  /* 0x008722bc */
int __fastcall sub_60872358(_DWORD *a1, int a2, int a3, int a4, int a5, int a6);  /* 0x00872358 */
int __fastcall sub_608723FC(int result, _DWORD *a2, unsigned __int8 *a3);  /* 0x008723fc */
int __fastcall sub_6087248C(int result, _DWORD *a2, unsigned __int8 *a3);  /* 0x0087248c */
int __fastcall sub_60872574(int a1);  /* 0x00872574 */
int __fastcall sub_608726A8(int a1, int *a2, int *a3);  /* 0x008726a8 */
int __fastcall sub_6087278C(int result, int a2);  /* 0x0087278c */
int __fastcall sub_608727FC(int result, int a2, int a3);  /* 0x008727fc */
int __fastcall sub_6087285C(int a1);  /* 0x0087285c */
int __fastcall sub_60872920(int a1);  /* 0x00872920 */
int __fastcall sub_608729D4(int result, char a2);  /* 0x008729d4 */
int __fastcall sub_608729E4(int a1, int a2);  /* 0x008729e4 */
int __fastcall sub_60872AC4(_DWORD *a1, int *a2, int a3, unsigned int a4);  /* 0x00872ac4 */
int __fastcall sub_60872B54(_DWORD *a1, int a2);  /* 0x00872b54 */
int __fastcall sub_60872D78(int a1, int *a2, int a3, unsigned int a4);  /* 0x00872d78 */
int __fastcall sub_60872EDC(int a1, _DWORD *a2);  /* 0x00872edc */
int __fastcall sub_60872F48(int *a1, _DWORD *a2);  /* 0x00872f48 */
int __fastcall sub_60872FD8(int *a1, _DWORD *a2, _DWORD *a3, int a4);  /* 0x00872fd8 */
int __fastcall sub_608732C4(int a1, _DWORD *a2, _DWORD *a3, int a4, unsigned int a5);  /* 0x008732c4 */
int __fastcall sub_60873388(int a1, int a2);  /* 0x00873388 */
int __fastcall sub_608733E8(_DWORD *a1, int a2);  /* 0x008733e8 */
int __fastcall sub_608735F0(int a1);  /* 0x008735f0 */
int __fastcall sub_608736A0(int a1, int a2, int a3);  /* 0x008736a0 */
int __fastcall sub_608737E4(_DWORD *a1, int a2, int a3, unsigned int a4);  /* 0x008737e4 */
int __fastcall sub_608738F4(int a1, int a2);  /* 0x008738f4 */
int __fastcall sub_608739AC(int **a1);  /* 0x008739ac */
int __fastcall sub_60873A18(_DWORD *a1, int a2);  /* 0x00873a18 */
int __fastcall sub_60873A50(int result, int a2);  /* 0x00873a50 */
int __fastcall sub_60873D58(_DWORD *a1, int *a2, int a3, unsigned int a4);  /* 0x00873d58 */
int __fastcall sub_60873E60(int a1, int a2);  /* 0x00873e60 */
int __fastcall nn__g3d__ShapeAnimObj__Bind(int a1, int a2);  /* 0x00873f04 */
int __fastcall sub_608741C8(int a1, int a2, int a3);  /* 0x008741c8 */
int __fastcall nn__g3d__ShapeAnimObj__ApplyTo(int result, int a2);  /* 0x00874654 */
int __fastcall nn__g3d__ShapeAnimObj__dtor(int a1);  /* 0x0087479c */
int __fastcall sub_60874E50(int a1, float32x4_t *a2);  /* 0x00874e50 */
int __fastcall sub_60874EB8(int a1, float32x4_t *a2);  /* 0x00874eb8 */
int __fastcall sub_60874F3C(__int64 *a1, int a2);  /* 0x00874f3c */
int __fastcall sub_60875230(int *a1, int *a2, int a3, unsigned int a4);  /* 0x00875230 */
int __fastcall sub_608754DC(int a1, _DWORD *a2);  /* 0x008754dc */
int __fastcall sub_6087552C(int a1, _DWORD *a2);  /* 0x0087552c */
int __fastcall sub_608755A0(int a1, _DWORD *a2, _DWORD *a3, int a4);  /* 0x008755a0 */
int __fastcall sub_60875774(int a1, _DWORD *a2, _DWORD *a3, int a4, unsigned int a5);  /* 0x00875774 */
unsigned __int32 __fastcall sub_60875824(unsigned __int32 result, int a2, int a3);  /* 0x00875824 */
int __fastcall sub_60875E64(int a1, int a2, int32x4_t *a3, int a4);  /* 0x00875e64 */
bool __fastcall sub_60875F68(_DWORD *a1, int *a2, int a3, int a4);  /* 0x00875f68 */
int __fastcall sub_60876290(int a1);  /* 0x00876290 */
int __fastcall sub_60876698(int a1);  /* 0x00876698 */
int __fastcall sub_60876CEC(int a1);  /* 0x00876cec */
int __fastcall sub_608770E4(int a1);  /* 0x008770e4 */
int __fastcall sub_60877720(int result, int a2);  /* 0x00877720 */
int __fastcall sub_60877950(int result, int a2);  /* 0x00877950 */
int __fastcall sub_60877EB0(_DWORD *a1, int *a2, int a3, unsigned int a4);  /* 0x00877eb0 */
int __fastcall sub_60877FB4(int a1, int a2);  /* 0x00877fb4 */
int __fastcall sub_60878050(int a1, int a2);  /* 0x00878050 */
int __fastcall sub_60878088(int a1, int a2);  /* 0x00878088 */
int __fastcall sub_608782F4(int result, int a2);  /* 0x008782f4 */
int __fastcall nn__g3d__SkeletalAnimObj__Bind(int a1, int a2);  /* 0x00878460 */
int __fastcall nn__g3d__SkeletalAnimObj__BindFast(int a1, int a2);  /* 0x008784dc */
int __fastcall nn__g3d__SkeletalAnimObj__ClearResult(int result);  /* 0x00878588 */
int __fastcall sub_608785CC(int a1, int a2, int a3, int a4);  /* 0x008785cc */
int __fastcall nn__g3d__SkeletalAnimObj__ApplyTo(int a1, int a2);  /* 0x00878698 */
int __fastcall sub_608786C8(int a1);  /* 0x008786c8 */
int __fastcall sub_60879E44(int a1, __int16 *a2, int a3, unsigned int a4);  /* 0x00879e44 */
void __fastcall sub_60879EA0(int a1);  /* 0x00879ea0 */
int __fastcall sub_60879ECC(int result, _DWORD *a2);  /* 0x00879ecc */
int __fastcall sub_60879F6C(int a1);  /* 0x00879f6c */
int __fastcall nn__g3d__SkeletalAnimObj__dtor(int a1);  /* 0x00879fb0 */
int __fastcall sub_6087B0E0(int result, int a2);  /* 0x0087b0e0 */
int __fastcall sub_6087BEC0(int a1, int a2);  /* 0x0087bec0 */
int __fastcall sub_6087C164(int a1, int a2);  /* 0x0087c164 */
int __fastcall sub_6087C54C(int a1, int a2);  /* 0x0087c54c */
int __fastcall sub_6087CA60(int a1, int a2);  /* 0x0087ca60 */
int __fastcall sub_6087D014(int a1, int *a2, int a3, unsigned int a4);  /* 0x0087d014 */
int __fastcall sub_6087D748(int a1, _DWORD *a2);  /* 0x0087d748 */
int __fastcall sub_6087D7B0(unsigned __int8 *a1, _DWORD *a2);  /* 0x0087d7b0 */
int __fastcall sub_6087D844(_DWORD *a1, _DWORD *a2, _DWORD *a3, int a4);  /* 0x0087d844 */
int __fastcall sub_6087D994(_DWORD *a1, _DWORD *a2, _DWORD *a3, int a4, unsigned int a5);  /* 0x0087d994 */
int __fastcall sub_6087DEC4(_DWORD *a1, int a2);  /* 0x0087dec4 */
int __fastcall sub_6087EBD8(int result, int a2, int a3, int a4);  /* 0x0087ebd8 */
int __fastcall sub_6087ECF0(int *a1);  /* 0x0087ecf0 */
int __fastcall sub_6087EDD0(int *a1);  /* 0x0087edd0 */
int __fastcall sub_6087EFE0(_DWORD *a1, int (__fastcall *a2)(_DWORD *));  /* 0x0087efe0 */
int __fastcall sub_6087F06C(int a1);  /* 0x0087f06c */
int __fastcall sub_6087F210(_DWORD *a1, int (__fastcall *a2)(_DWORD *));  /* 0x0087f210 */
int __fastcall sub_6087F280(int a1, int a2, int a3, int a4, int a5, int a6, int a7);  /* 0x0087f280 */
int __fastcall sub_6087F534(unsigned __int8 *a1, int a2, int a3);  /* 0x0087f534 */
int __fastcall sub_6088003C(_DWORD *a1);  /* 0x0088003c */
int __fastcall sub_6088005C(int a1, int a2, int a3);  /* 0x0088005c */
int __fastcall sub_6088008C(int a1, int a2, int a3);  /* 0x0088008c */
int __fastcall sub_608800A0(int a1, int a2);  /* 0x008800a0 */
int __fastcall sub_6088077C(_DWORD *a1, int a2, int a3);  /* 0x0088077c */
int __fastcall sub_60880930(int a1, int a2);  /* 0x00880930 */
bool __fastcall sub_608809BC(int a1);  /* 0x008809bc */
bool __fastcall sub_60880A4C(int a1);  /* 0x00880a4c */
int __fastcall sub_60880ADC(int result, int a2);  /* 0x00880adc */
bool __fastcall sub_60880AE4(int a1);  /* 0x00880ae4 */
int __fastcall sub_60880BA0(int a1, int a2, int a3, int a4, int a5, int a6, int a7);  /* 0x00880ba0 */
int __fastcall sub_60880F00(int a1);  /* 0x00880f00 */
int __fastcall sub_60881158(int *a1, _DWORD *a2, int a3, int a4, int a5);  /* 0x00881158 */
int __fastcall sub_608813D8(int *a1, _DWORD *a2);  /* 0x008813d8 */
int __fastcall sub_608814B4(int a1);  /* 0x008814b4 */
int __fastcall sub_6088152C(int result, int a2);  /* 0x0088152c */
int __fastcall sub_60881594(int a1, int a2, int a3, int a4);  /* 0x00881594 */
int __fastcall sub_60881844(int a1, int a2, int a3, int a4, int (__fastcall *a5)(int *));  /* 0x00881844 */
int __fastcall sub_60881A7C(__int64 a1, int a2, int a3);  /* 0x00881a7c */
int __fastcall EffectData_init_helper(int result);  /* 0x00881ba4 */
int __fastcall sub_60881D68(int a1);  /* 0x00881d68 */
int __fastcall sub_60881D78(int a1, int a2);  /* 0x00881d78 */
int __fastcall sub_60881DA8(int result, int a2, char a3);  /* 0x00881da8 */
int __fastcall sub_60881DE8(int *a1);  /* 0x00881de8 */
int __fastcall sub_60881E10(int *a1);  /* 0x00881e10 */
int __fastcall sub_60881E38(_DWORD *a1, _DWORD *a2);  /* 0x00881e38 */
int __fastcall sub_60881FFC(int a1);  /* 0x00881ffc */
int __fastcall sub_60882010(int result);  /* 0x00882010 */
int __fastcall sub_6088203C(int a1, int a2);  /* 0x0088203c */
int __fastcall sub_6088208C(int a1);  /* 0x0088208c */
int __fastcall sub_608820C0(int result);  /* 0x008820c0 */
int __fastcall sub_608820E8(int a1, int a2, int a3);  /* 0x008820e8 */
void __fastcall debugPrintRelated3(const char *a1);  /* 0x00882120 */
int __fastcall sub_60882124(int a1, int a2);  /* 0x00882124 */
int __fastcall sub_608821A8(int a1);  /* 0x008821a8 */
char __fastcall sub_60882388(char result);  /* 0x00882388 */
void __fastcall debugPrintRelated(const char *a1);  /* 0x0088239c */
unsigned int __fastcall sub_60882748(int a1, _DWORD *a2, int a3, int a4, int a5);  /* 0x00882748 */
int __fastcall sub_608828C4(int a1, int a2, int *a3, int a4);  /* 0x008828c4 */
int __fastcall sub_608831F0(int a1, float32x2_t *a2, float32x2_t *a3, _DWORD *a4, int a5, _DWORD *a6, int a7, int a8);  /* 0x008831f0 */
int __fastcall sub_608840C8(int a1, int8x16_t *a2, int a3, int8x16_t *a4, float *a5);  /* 0x008840c8 */
int __fastcall sub_60885CB8(int result);  /* 0x00885cb8 */
int __fastcall sub_60885F60(int result, int a2);  /* 0x00885f60 */
int __fastcall sub_60885FB4(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, char a10, int a11);  /* 0x00885fb4 */
int __fastcall sub_60886270(int a1, unsigned __int8 *a2);  /* 0x00886270 */
int __fastcall sub_60886834(int a1, int a2);  /* 0x00886834 */
int __fastcall sub_60886B38(_DWORD *a1);  /* 0x00886b38 */
unsigned int __fastcall sub_60886B90(_DWORD *a1, int a2);  /* 0x00886b90 */
int __fastcall sub_60886D3C(int a1, unsigned __int8 *a2);  /* 0x00886d3c */
int __fastcall sub_608871E0(int a1, int a2, int a3);  /* 0x008871e0 */
int __fastcall sub_60887368(int a1, int a2);  /* 0x00887368 */
int __fastcall sub_608873A4(int a1, _DWORD *a2);  /* 0x008873a4 */
int __fastcall sub_608874BC(int a1);  /* 0x008874bc */
int __fastcall sub_608874D8(int result, void (__fastcall *a2)(__int64 *, int, int), int a3);  /* 0x008874d8 */
int __fastcall sub_60887620(_DWORD *a1, _DWORD *a2, __int64 a3);  /* 0x00887620 */
int __fastcall sub_60887828(int result, void (__fastcall *a2)(_DWORD *, int, int), int a3);  /* 0x00887828 */
int __fastcall sub_608878A4(int a1, int a2);  /* 0x008878a4 */
int __fastcall sub_60887A00(int a1, unsigned __int8 *a2, int *a3);  /* 0x00887a00 */
int __fastcall sub_60887EA4(_DWORD *a1, __int64 a2);  /* 0x00887ea4 */
int __fastcall sub_60887F30(int a1, __int64 a2);  /* 0x00887f30 */
int __fastcall sub_60888098(_DWORD *a1, __int64 a2);  /* 0x00888098 */
int __fastcall sub_608880FC(int a1);  /* 0x008880fc */
int __fastcall sub_60888104(int a1);  /* 0x00888104 */
int __fastcall sub_6088810C(int a1);  /* 0x0088810c */
int __fastcall sub_60888114(int a1);  /* 0x00888114 */
int __fastcall sub_6088811C(_DWORD *a1, _DWORD *a2);  /* 0x0088811c */
int __fastcall sub_60888134(int a1);  /* 0x00888134 */
int __fastcall sub_6088815C(int a1, int a2);  /* 0x0088815c */
int __fastcall sub_60888168(int a1, int a2, int a3);  /* 0x00888168 */
int __fastcall sub_608881DC(int a1, int a2, int a3, int a4);  /* 0x008881dc */
int __fastcall sub_60888250(int a1);  /* 0x00888250 */
int __fastcall sub_6088825C(int a1);  /* 0x0088825c */
int __fastcall sub_60888268(int a1, int a2);  /* 0x00888268 */
int __fastcall sub_60888278(int a1, int a2);  /* 0x00888278 */
__int64 __fastcall sub_60888288(int a1, int a2, int a3);  /* 0x00888288 */
int __fastcall sub_60888298(int a1);  /* 0x00888298 */
int __fastcall sub_608882A0(int a1);  /* 0x008882a0 */
int __fastcall sub_608882AC(int a1, int a2);  /* 0x008882ac */
int __fastcall sub_608882B8(int a1, int a2);  /* 0x008882b8 */
int __fastcall sub_608882C4(int a1);  /* 0x008882c4 */
int __fastcall sub_608882D0(int a1, int a2);  /* 0x008882d0 */
int __fastcall sub_608882DC(int a1, int a2, int a3, int a4);  /* 0x008882dc */
int __fastcall sub_60888320(int a1, int a2, int a3, int a4, int a5);  /* 0x00888320 */
int __fastcall sub_6088836C(int result);  /* 0x0088836c */
int __fastcall sub_60888390(int a1, _DWORD *a2, int a3, int a4, int a5);  /* 0x00888390 */
int __fastcall sub_6088860C(int a1, int a2);  /* 0x0088860c */
int __fastcall sub_60888704(int result);  /* 0x00888704 */
int __fastcall sub_6088871C(int a1, _DWORD *a2, int a3, int a4);  /* 0x0088871c */
int __fastcall sub_60888864(_DWORD *a1, int a2, int a3);  /* 0x00888864 */
int __fastcall sub_608888F0(int *a1);  /* 0x008888f0 */
int __fastcall sub_60888BC8(_DWORD *a1);  /* 0x00888bc8 */
int __fastcall sub_60888C64(_DWORD *a1);  /* 0x00888c64 */
void __fastcall sub_60888D64(_DWORD *a1);  /* 0x00888d64 */
int __fastcall sub_60888E38(int *a1);  /* 0x00888e38 */
int __fastcall sub_60888E60(int *a1);  /* 0x00888e60 */
int __fastcall sub_60888FAC(int a1);  /* 0x00888fac */
int __fastcall sub_60888FEC(int a1);  /* 0x00888fec */
int __fastcall sub_60889028(int a1, int a2, int a3, int a4);  /* 0x00889028 */
int __fastcall sub_60889224(int a1);  /* 0x00889224 */
int __fastcall sub_60889A18(int a1);  /* 0x00889a18 */
int __fastcall sub_60889A38(int a1);  /* 0x00889a38 */
int __fastcall sub_60889A70(int a1, _DWORD *a2, float32x4_t *a3);  /* 0x00889a70 */
int __fastcall sub_6088A3A8(int a1, int a2);  /* 0x0088a3a8 */
int __fastcall sub_6088A6BC(int a1, int a2, _DWORD *a3, int a4, int a5, int a6);  /* 0x0088a6bc */
int __fastcall sub_6088A820(int a1, int a2, int a3, int a4, int a5, int a6, _DWORD *a7, int a8);  /* 0x0088a820 */
int __fastcall sub_6088AB3C(int a1, int a2);  /* 0x0088ab3c */
int __fastcall sub_6088ACD0(int a1, _DWORD *a2, int a3, int a4, int a5, int a6);  /* 0x0088acd0 */
int __fastcall sub_6088AD8C(int *a1);  /* 0x0088ad8c */
int __fastcall sub_6088B038(_DWORD *a1);  /* 0x0088b038 */
int __fastcall sub_6088B0E4(_DWORD *a1);  /* 0x0088b0e4 */
void __fastcall sub_6088B1E8(_DWORD *a1);  /* 0x0088b1e8 */
int __fastcall sub_6088B2BC(float **a1);  /* 0x0088b2bc */
int __fastcall sub_6088B2E4(int *a1);  /* 0x0088b2e4 */
int __fastcall sub_6088B42C(int a1);  /* 0x0088b42c */
int __fastcall sub_6088B46C(int a1);  /* 0x0088b46c */
int __fastcall sub_6088B4A8(int a1, int a2, int a3, int a4);  /* 0x0088b4a8 */
int __fastcall sub_6088B694(int a1);  /* 0x0088b694 */
int __fastcall sub_6088B6D8(_DWORD *a1, int a2);  /* 0x0088b6d8 */
int __fastcall sub_6088B8F4(int a1, _DWORD *a2, int a3);  /* 0x0088b8f4 */
int __fastcall sub_6088BAA0(int a1, int a2, int a3, int a4, int a5);  /* 0x0088baa0 */
int __fastcall sub_6088E174(int result, float *a2);  /* 0x0088e174 */
int __fastcall sub_6088E688(int a1);  /* 0x0088e688 */
int __fastcall sub_6088E6B8(int a1);  /* 0x0088e6b8 */
int __fastcall sub_6088E6EC(int a1, int a2, _DWORD *a3, int a4, int a5, int a6);  /* 0x0088e6ec */
int __fastcall sub_6088E850(int a1, int a2, int a3, int a4, int a5, int a6, _DWORD *a7, int a8);  /* 0x0088e850 */
int __fastcall sub_6088EB54(int a1, int a2);  /* 0x0088eb54 */
int __fastcall sub_6088ECAC(int a1, int a2, int a3, int a4);  /* 0x0088ecac */
int __fastcall sub_6088F868(int a1);  /* 0x0088f868 */
int __fastcall sub_6088FA9C(int a1);  /* 0x0088fa9c */
int __fastcall sub_6088FAAC(int a1, int a2, int a3);  /* 0x0088faac */
int __fastcall sub_6088FB14(int a1, int a2, int a3, int a4, char a5, int a6);  /* 0x0088fb14 */
int __fastcall sub_6088FBF0(_DWORD *a1);  /* 0x0088fbf0 */
int __fastcall sub_6088FC7C(int a1, int a2);  /* 0x0088fc7c */
int __fastcall sub_6088FC88(int a1, _DWORD *a2);  /* 0x0088fc88 */
int __fastcall sub_6088FCA8(_DWORD *a1, _DWORD *a2, int a3, int a4, int a5, int a6, int a7, int a8);  /* 0x0088fca8 */
int __fastcall sub_6088FEF0(_DWORD *a1, _DWORD *a2, int a3, int a4, int a5, int a6, int a7);  /* 0x0088fef0 */
int __fastcall sub_6088FF24(int a1, int a2);  /* 0x0088ff24 */
int __fastcall sub_6088FFA4(int result, int a2);  /* 0x0088ffa4 */
int __fastcall sub_608900DC(int a1, int a2);  /* 0x008900dc */
void __fastcall sub_60890264(int a1);  /* 0x00890264 */
int __fastcall sub_6089040C(_DWORD *a1, int a2, int a3);  /* 0x0089040c */
int __fastcall sub_6089063C(int a1, int a2, int a3);  /* 0x0089063c */
int __fastcall sub_6089085C(unsigned __int8 *a1, int a2, _DWORD *a3, int a4, int a5, int a6);  /* 0x0089085c */
int __fastcall sub_608908F8(int a1);  /* 0x008908f8 */
int __fastcall sub_60890938(int result, int a2);  /* 0x00890938 */
int __fastcall sub_6089098C(int a1, _DWORD *a2, int *a3, float32x4_t *a4, int a5, int a6);  /* 0x0089098c */
int __fastcall sub_60890DC8(int a1, int a2, int a3, int a4, int a5, _DWORD *a6);  /* 0x00890dc8 */
int __fastcall sub_60890E9C(int a1, int (__fastcall *a2)(int, int, int), int a3);  /* 0x00890e9c */
int __fastcall sub_60890EA8(int a1, void (__fastcall *a2)(int, int, int), int a3);  /* 0x00890ea8 */
int __fastcall sub_60890ED0(int a1, int a2, int a3);  /* 0x00890ed0 */
int __fastcall sub_60890F18(int a1, int a2);  /* 0x00890f18 */
float __fastcall sub_60890F30(float a1, unsigned int a2, int a3);  /* 0x00890f30 */
int __fastcall sub_60891658(int a1, int a2, int a3, int a4);  /* 0x00891658 */
int __fastcall sub_60891894(float *a1, float *a2, float *a3, float *a4, float *a5);  /* 0x00891894 */
int __fastcall sub_608919C8(int result, float *a2);  /* 0x008919c8 */
int __fastcall sub_60891BB8(int a1, float *a2);  /* 0x00891bb8 */
float __fastcall sub_60891FE4(float a1, unsigned int a2, int a3);  /* 0x00891fe4 */
int __fastcall sub_6089270C(int a1, int a2, int a3, int a4);  /* 0x0089270c */
int __fastcall sub_60892948(float *a1, float *a2, float *a3, float *a4, float *a5);  /* 0x00892948 */
int __fastcall sub_60892A7C(int result, float *a2);  /* 0x00892a7c */
int __fastcall sub_60892C6C(int a1, float *a2);  /* 0x00892c6c */
unsigned int __fastcall sub_60893098(unsigned int a1, unsigned int a2, int a3);  /* 0x00893098 */
int __fastcall sub_6089397C(int a1, int a2, int a3, int a4);  /* 0x0089397c */
int __fastcall sub_60893C18(int a1, int a2, int a3, int a4, int a5);  /* 0x00893c18 */
int __fastcall sub_60893D8C(int result, int a2);  /* 0x00893d8c */
int __fastcall sub_60894060(int a1, int a2);  /* 0x00894060 */
unsigned int __fastcall sub_608945B8(unsigned int a1, unsigned int a2, int a3);  /* 0x008945b8 */
int __fastcall sub_60894E9C(int a1, int a2, int a3, int a4);  /* 0x00894e9c */
int __fastcall sub_60895138(int a1, int a2, int a3, int a4, int a5);  /* 0x00895138 */
int __fastcall sub_608952AC(int result, int a2);  /* 0x008952ac */
int __fastcall sub_60895580(int a1, int a2);  /* 0x00895580 */
int __fastcall sub_60895AD8(int a1, _DWORD *a2, int a3, int a4);  /* 0x00895ad8 */
int __fastcall sub_60895C04(int result);  /* 0x00895c04 */
int __fastcall sub_60895C24(int a1, int a2);  /* 0x00895c24 */
int __fastcall sub_60895C80(__int64 *a1);  /* 0x00895c80 */
int __fastcall sub_60895D14(int a1, _DWORD *a2, int a3);  /* 0x00895d14 */
int __fastcall sub_60895E48(int *a1, int a2, int a3);  /* 0x00895e48 */
int __fastcall sub_60895E90(int a1, int a2);  /* 0x00895e90 */
int __fastcall sub_608961A4(int a1, int a2);  /* 0x008961a4 */
int __fastcall sub_60896248(unsigned __int8 *a1);  /* 0x00896248 */
int __fastcall sub_60896278(void (__fastcall *a1)(int, int, int), int a2);  /* 0x00896278 */
int __fastcall sub_608962E8(int *a1, int a2, int a3);  /* 0x008962e8 */
int __fastcall sub_6089632C(int a1, _DWORD *a2, int a3, int a4, int a5);  /* 0x0089632c */
int __fastcall sub_60896484(int a1, int a2, int a3);  /* 0x00896484 */
int __fastcall sub_608964E8(int a1);  /* 0x008964e8 */
int __fastcall sub_60896504(int *a1, _DWORD *a2, int a3, int a4);  /* 0x00896504 */
int __fastcall sub_608966DC(int a1, int a2);  /* 0x008966dc */
int __fastcall sub_608966EC(int a1, int a2);  /* 0x008966ec */
int __fastcall sub_608966F8(_DWORD *a1);  /* 0x008966f8 */
int __fastcall sub_6089675C(int *a1);  /* 0x0089675c */
int __fastcall sub_60896790(int a1, int a2, int a3, int a4, int a5);  /* 0x00896790 */
int __fastcall sub_60897044(_DWORD *a1, _DWORD **a2);  /* 0x00897044 */
int __fastcall sub_60897204(int a1, int a2);  /* 0x00897204 */
int __fastcall sub_6089725C(_DWORD *a1, int a2, int a3);  /* 0x0089725c */
int __fastcall sub_60897638(_DWORD *a1);  /* 0x00897638 */
int __fastcall sub_60897674(int a1);  /* 0x00897674 */
int __fastcall sub_60897AF0(int *a1, float32x4_t *a2);  /* 0x00897af0 */
int __fastcall sub_60897E40(int *a1, int a2);  /* 0x00897e40 */
int __fastcall sub_60898168(int a1);  /* 0x00898168 */
int __fastcall sub_60898270(int a1, int a2);  /* 0x00898270 */
unsigned __int32 __fastcall sub_60898898(int a1, float *a2, float *a3, float *a4, int a5, float32x4_t *a6, int a7);  /* 0x00898898 */
void __fastcall sub_60898C50(int a1, int a2);  /* 0x00898c50 */
int __fastcall sub_60898D38(int a1, int a2);  /* 0x00898d38 */
bool __fastcall sub_608993D8(int a1, unsigned __int8 *a2, int a3, int a4, int a5, unsigned int a6);  /* 0x008993d8 */
void __fastcall sub_60899E38(int a1, float32x4_t *a2);  /* 0x00899e38 */
int __fastcall sub_6089AEBC(int a1, int a2, int a3, _DWORD *a4, int a5);  /* 0x0089aebc */
int __fastcall sub_6089B110(int a1, int a2, _DWORD *a3, _DWORD *a4, int a5);  /* 0x0089b110 */
int __fastcall sub_6089B2BC(int a1, int a2, int a3, int *a4, int a5, int a6, int a7, int a8);  /* 0x0089b2bc */
int __fastcall sub_6089B87C(int a1, int (__fastcall *a2)(_DWORD *), int a3, int a4, int a5);  /* 0x0089b87c */
int __fastcall sub_6089B9C0(int *a1, int a2, int a3, _DWORD *a4, int a5, _DWORD *a6);  /* 0x0089b9c0 */
int __fastcall sub_6089C0A4(int *a1, int a2, float32x4_t *a3, int a4, int a5, int *a6);  /* 0x0089c0a4 */
int __fastcall sub_6089C220(int a1, int a2, int a3);  /* 0x0089c220 */
int __fastcall sub_6089C648(int a1, _BYTE *a2, int a3, int a4, int a5, int a6);  /* 0x0089c648 */
int __fastcall sub_6089DB2C(int a1, _BYTE *a2, int a3, int a4, int a5, int a6);  /* 0x0089db2c */
int __fastcall sub_6089DB50(int a1);  /* 0x0089db50 */
int __fastcall sub_6089DCA0(int a1, int a2);  /* 0x0089dca0 */
int __fastcall sub_6089DCB4(int a1, int a2);  /* 0x0089dcb4 */
int __fastcall sub_6089DCBC(int a1, _DWORD *a2);  /* 0x0089dcbc */
int __fastcall sub_6089DDBC(int a1, int a2);  /* 0x0089ddbc */
int __fastcall sub_6089E2AC(unsigned __int8 *a1);  /* 0x0089e2ac */
int __fastcall sub_6089E2D4(int a1, int a2);  /* 0x0089e2d4 */
int __fastcall sub_6089E410(int a1, int a2);  /* 0x0089e410 */
int __fastcall sub_6089FC9C(int result, unsigned __int8 *a2);  /* 0x0089fc9c */
int __fastcall sub_608A01A4(_QWORD *a1, float32x4_t *a2, int a3, int a4, int a5, int a6);  /* 0x008a01a4 */
int __fastcall sub_608A01F0(_QWORD *a1, _QWORD *a2, int a3, int a4, int a5, float *a6);  /* 0x008a01f0 */
int __fastcall sub_608A03EC(_QWORD *a1, _QWORD *a2, _DWORD *a3, int a4, int a5, float *a6);  /* 0x008a03ec */
int __fastcall sub_608A0740(_QWORD *a1, float32x4_t *a2, int a3, int a4, int a5, int a6);  /* 0x008a0740 */
int __fastcall sub_608A0A50(float32x4_t *a1, float32x4_t *a2, int a3, int a4, int a5, int a6);  /* 0x008a0a50 */
int __fastcall sub_608A1060(float32x4_t *a1, float32x4_t *a2, _DWORD *a3, int a4, int a5, int a6);  /* 0x008a1060 */
int __fastcall sub_608A1600(float32x4_t *a1, float32x4_t *a2, _DWORD *a3, int a4, int a5, int a6);  /* 0x008a1600 */
int __fastcall sub_608A1B80(float32x4_t *a1, float32x4_t *a2, int a3, int a4, int a5, int a6);  /* 0x008a1b80 */
int __fastcall sub_608A21F0(__int64 *a1, _QWORD *a2, int a3, int a4, int a5, float *a6);  /* 0x008a21f0 */
int __fastcall sub_608A2270(__int64 *a1, float32x4_t *a2, int a3, int a4, int a5, int a6);  /* 0x008a2270 */
int __fastcall sub_608A22F0(float32x4_t *a1, float32x4_t *a2, int a3, int a4, int a5, int a6);  /* 0x008a22f0 */
int __fastcall sub_608A24D4(float32x4_t *a1, float32x4_t *a2, int a3, int a4, int a5, int a6);  /* 0x008a24d4 */
int __fastcall sub_608A2788(float32x2_t *a1, float32x2x2_t *a2, int a3, int a4, int a5, int a6);  /* 0x008a2788 */
int __fastcall sub_608A2820(float32x2_t *a1, float32x2x2_t *a2, _DWORD *a3, int a4, int a5, int a6);  /* 0x008a2820 */
int __fastcall sub_608A2988(_QWORD *a1, float32x4_t *a2, int a3, int a4, int a5, int a6);  /* 0x008a2988 */
int __fastcall sub_608A2B04(float32x4_t *a1, float32x4_t *a2, int a3, int a4, int a5, int a6);  /* 0x008a2b04 */
int __fastcall sub_608A2C90(int a1, int a2, float *a3, float *a4);  /* 0x008a2c90 */
int __fastcall sub_608A3490(float *a1);  /* 0x008a3490 */
int __fastcall sub_608A3FAC(int result, _BYTE *a2, int a3);  /* 0x008a3fac */
int __fastcall sub_608A40DC(int a1);  /* 0x008a40dc */
int __fastcall sub_608A4180(int a1, int a2, int a3);  /* 0x008a4180 */
int __fastcall sub_608A45B4(_DWORD *a1, int a2, int a3);  /* 0x008a45b4 */
int __fastcall sub_608A4798(int a1, int a2);  /* 0x008a4798 */
int __fastcall sub_608A48C8(int *a1, int a2, int a3);  /* 0x008a48c8 */
int __fastcall sub_608A4B20(int a1, int a2);  /* 0x008a4b20 */
int __fastcall sub_608A4B50(int *a1, int a2);  /* 0x008a4b50 */
void __fastcall sub_608A4CE4(int a1);  /* 0x008a4ce4 */
int __fastcall sub_608A4D08(int a1, int a2, int a3);  /* 0x008a4d08 */
int __fastcall sub_608A4D34(int *a1);  /* 0x008a4d34 */
int __fastcall sub_608A5070(int *a1);  /* 0x008a5070 */
int __fastcall sub_608A5304(int *a1);  /* 0x008a5304 */
int __fastcall sub_608A54D0(int *a1);  /* 0x008a54d0 */
int __fastcall sub_608A5534(int *a1);  /* 0x008a5534 */
int __fastcall sub_608A56A4(int a1);  /* 0x008a56a4 */
int __fastcall sub_608A56E8(int result, float32x4_t *a2);  /* 0x008a56e8 */
int __fastcall sub_608A7810(int a1, int a2, _DWORD *a3, int a4, int a5, int a6);  /* 0x008a7810 */
int __fastcall sub_608A7D74(_DWORD *a1);  /* 0x008a7d74 */
int __fastcall sub_608A7D8C(int a1);  /* 0x008a7d8c */
int __fastcall sub_608A7DA4(int a1);  /* 0x008a7da4 */
int __fastcall sub_608A7E04(int a1);  /* 0x008a7e04 */
int __fastcall sub_608A7E0C(int a1);  /* 0x008a7e0c */
int __fastcall sub_608A7E14(int a1);  /* 0x008a7e14 */
int __fastcall sub_608A7E38(int a1);  /* 0x008a7e38 */
int __fastcall sub_608A7E40(int a1);  /* 0x008a7e40 */
int __fastcall sub_608A7E48(int a1);  /* 0x008a7e48 */
int __fastcall sub_608A7E50(int a1);  /* 0x008a7e50 */
int __fastcall sub_608A7E58(int a1);  /* 0x008a7e58 */
int __fastcall sub_608A7E60(int a1);  /* 0x008a7e60 */
int __fastcall sub_608A7E68(int a1);  /* 0x008a7e68 */
int __fastcall sub_608A7E74(int result, int a2);  /* 0x008a7e74 */
int __fastcall sub_608A7E7C(int result, int a2);  /* 0x008a7e7c */
int __fastcall sub_608A7E84(int result, int a2);  /* 0x008a7e84 */
int __fastcall sub_608A7E8C(int result, int a2);  /* 0x008a7e8c */
int __fastcall sub_608A7E94(int result, int a2);  /* 0x008a7e94 */
int __fastcall sub_608A7E9C(int result, int a2);  /* 0x008a7e9c */
int __fastcall sub_608A7F74(_DWORD *a1);  /* 0x008a7f74 */
int __fastcall sub_608A8384(int a1);  /* 0x008a8384 */
int __fastcall sub_608A8394(int a1, int a2);  /* 0x008a8394 */
int __fastcall sub_608A8404(int a1);  /* 0x008a8404 */
int __fastcall sub_608A8428(int a1, int a2);  /* 0x008a8428 */
int __fastcall sub_608A85AC(int a1, int a2, unsigned int a3, int a4, int a5);  /* 0x008a85ac */
int __fastcall sub_608A8790(float *a1, int *a2, int a3, int a4, int a5);  /* 0x008a8790 */
int __fastcall sub_608A8848(int a1, int a2, int a3, float32x4_t *a4, float32x2_t *a5);  /* 0x008a8848 */
int __fastcall sub_608A8A9C(float32x4_t *a1, float *a2, float *a3);  /* 0x008a8a9c */
int __fastcall sub_608A8DF4(int result);  /* 0x008a8df4 */
int __fastcall sub_608A8E4C(int result, int a2, _DWORD *a3, float32x4_t *a4, int a5, char a6);  /* 0x008a8e4c */
int __fastcall sub_608A9154(int a1, int a2, int a3, int a4, int a5);  /* 0x008a9154 */
int __fastcall sub_608A91A0(int a1, int a2, int a3, int a4);  /* 0x008a91a0 */
int __fastcall sub_608A9234(int result);  /* 0x008a9234 */
int __fastcall sub_608A92A8(int a1, int a2);  /* 0x008a92a8 */
int __fastcall sub_608A92F0(int a1, int a2, int a3, int a4);  /* 0x008a92f0 */
int __fastcall sub_608A937C(int a1);  /* 0x008a937c */
int __fastcall sub_608A941C(int result, int a2);  /* 0x008a941c */
int __fastcall sub_608A9424(int a1, int a2, int a3, int a4);  /* 0x008a9424 */
int __fastcall sub_608A9464(int a1, int a2, int a3);  /* 0x008a9464 */
int __fastcall sub_608A95B4(int result, int a2);  /* 0x008a95b4 */
int __fastcall sub_608A95C4(int result, int a2);  /* 0x008a95c4 */
int __fastcall sub_608A95E0(int a1);  /* 0x008a95e0 */
int __fastcall nn__atk__SoundActor__SoundActor(int a1, int a2);  /* 0x008a95f8 */
int __fastcall nn__atk__SoundActor__dtor(int a1);  /* 0x008a96cc */
int __fastcall nn__atk__SoundActor__GetPlayingSoundCount(int a1, int a2);  /* 0x008a97a4 */
int __fastcall nn__atk__SoundActor__SetPlayableSoundCount(int a1, int a2, int a3);  /* 0x008a97d0 */
int __fastcall nn__atk__SoundActor__SetupSound(int a1, _DWORD *a2, int a3, int a4, unsigned __int8 *a5);  /* 0x008a97e0 */
int __fastcall nn__atk__SoundActor__detail_SetupSound(int a1, int a2, int a3, char a4, int a5, int a6);  /* 0x008a98bc */
int __fastcall nn__atk__SoundActor__detail_GetItemId(int a1);  /* 0x008a9914 */
int __fastcall nn_atk_SoundArchive_ctor(int result);  /* 0x008a9954 */
bool __fastcall sub_608A9984(int a1);  /* 0x008a9984 */
int __fastcall sub_608A9994(int a1, _WORD *a2);  /* 0x008a9994 */
int __fastcall sub_608A99B0(int a1);  /* 0x008a99b0 */
int __fastcall sub_608A99DC(int a1);  /* 0x008a99dc */
int __fastcall sub_608A99E4(int a1);  /* 0x008a99e4 */
int __fastcall sub_608A99EC(int a1);  /* 0x008a99ec */
int __fastcall sub_608A99F4(int a1);  /* 0x008a99f4 */
int __fastcall sub_608A99FC(int a1);  /* 0x008a99fc */
int __fastcall nn__atk__SoundArchive__GetItemLabel(int a1, int a2);  /* 0x008a9a04 */
int __fastcall nn__atk__SoundArchive__GetItemId(int a1, int a2);  /* 0x008a9a4c */
int __fastcall sub_608A9A94(int a1, unsigned int a2);  /* 0x008a9a94 */
int __fastcall sub_608A9A9C(int a1, int a2);  /* 0x008a9a9c */
int __fastcall sub_608A9AA4(int a1, int a2);  /* 0x008a9aa4 */
int __fastcall sub_608A9AEC(int a1, int a2, int a3, int a4);  /* 0x008a9aec */
int __fastcall sub_608A9B50(int a1, int a2);  /* 0x008a9b50 */
int __fastcall sub_608A9BC0(int a1, int a2, int a3);  /* 0x008a9bc0 */
int __fastcall sub_608A9C24(int a1, int a2, int a3);  /* 0x008a9c24 */
int __fastcall sub_608A9C88(int a1, int a2, int a3);  /* 0x008a9c88 */
int __fastcall sub_608A9CEC(int a1, int a2, int a3);  /* 0x008a9cec */
int __fastcall sub_608A9D48(int a1, int a2, int a3);  /* 0x008a9d48 */
int __fastcall sub_608A9DA4(int a1, int a2, _DWORD *a3);  /* 0x008a9da4 */
int __fastcall sub_608A9DAC(int a1, int a2, int a3);  /* 0x008a9dac */
int __fastcall sub_608A9E10(int a1, int a2);  /* 0x008a9e10 */
int __fastcall sub_608A9E64(int a1, int a2, int a3);  /* 0x008a9e64 */
int __fastcall sub_608A9EC8(int a1, int a2, int a3);  /* 0x008a9ec8 */
int __fastcall sub_608A9F2C(int a1, int a2, int a3);  /* 0x008a9f2c */
int __fastcall sub_608A9F88(int a1, int a2, int a3);  /* 0x008a9f88 */
int __fastcall sub_608A9FE4(int a1, int a2, int a3);  /* 0x008a9fe4 */
int __fastcall sub_608AA048(int a1, int a2, int a3);  /* 0x008aa048 */
int __fastcall sub_608AA0A8(int a1, unsigned int a2);  /* 0x008aa0a8 */
int __fastcall sub_608AA0B0(_DWORD *a1, int a2, int a3, int a4, int a5, int a6);  /* 0x008aa0b0 */
int __fastcall sub_608AA198(_BYTE *a1, int a2, int a3, _BYTE *a4, int a5, int a6);  /* 0x008aa198 */
int __fastcall sub_608AA400(int a1, _BYTE *a2);  /* 0x008aa400 */
int __fastcall sub_608AA4D0(int a1);  /* 0x008aa4d0 */
int __fastcall sub_608AA5A8(_DWORD *a1);  /* 0x008aa5a8 */
int __fastcall sub_608AA5FC(int a1);  /* 0x008aa5fc */
int __fastcall sub_608AA604(int a1, int *a2);  /* 0x008aa604 */
int __fastcall sub_608AA754(int a1);  /* 0x008aa754 */
unsigned int __fastcall sub_608AA854(int a1, int a2, int a3);  /* 0x008aa854 */
unsigned int __fastcall sub_608AA9FC(int a1, int a2);  /* 0x008aa9fc */
int __fastcall sub_608AAA04(int a1, int a2);  /* 0x008aaa04 */
int __fastcall sub_608AAA10(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8);  /* 0x008aaa10 */
int __fastcall sub_608AAC68(int a1, int a2, unsigned int *a3, int a4);  /* 0x008aac68 */
int __fastcall sub_608AB028(int a1);  /* 0x008ab028 */
int __fastcall sub_608AB144(int a1, int a2);  /* 0x008ab144 */
int __fastcall sub_608AB158(int result, int a2);  /* 0x008ab158 */
int __fastcall sub_608AB160(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x008ab160 */
int __fastcall sub_608AB194(int a1, _DWORD *a2, int a3, int a4, int a5, int a6, int a7, int a8);  /* 0x008ab194 */
int __fastcall sub_608ABD84(int a1);  /* 0x008abd84 */
int __fastcall sub_608ABD9C(int a1);  /* 0x008abd9c */
int __fastcall sub_608ABDA0(int a1);  /* 0x008abda0 */
int __fastcall sub_608ABDBC(int a1);  /* 0x008abdbc */
unsigned int __fastcall sub_608ABDD0(int a1, int a2);  /* 0x008abdd0 */
int __fastcall sub_608ABDF0(int a1, int a2, int a3, int a4);  /* 0x008abdf0 */
int __fastcall sub_608ABEB4(int a1);  /* 0x008abeb4 */
int __fastcall sub_608ABF10(int *a1, unsigned int a2, unsigned int a3);  /* 0x008abf10 */
int __fastcall sub_608AC060(int a1);  /* 0x008ac060 */
int __fastcall sub_608AC06C(_DWORD *a1, int a2);  /* 0x008ac06c */
int __fastcall sub_608AC0CC(int a1, int a2);  /* 0x008ac0cc */
int __fastcall sub_608AC130(int a1, int a2, int a3);  /* 0x008ac130 */
int __fastcall sub_608AC150(int a1, int a2, int a3);  /* 0x008ac150 */
unsigned int __fastcall sub_608AC170(int a1, unsigned int a2);  /* 0x008ac170 */
unsigned int __fastcall sub_608AC194(int a1, unsigned int a2);  /* 0x008ac194 */
int __fastcall sub_608AC20C(_DWORD *a1, int a2);  /* 0x008ac20c */
int __fastcall sub_608AC23C(_DWORD *a1, int a2);  /* 0x008ac23c */
int __fastcall sub_608AC26C(int a1);  /* 0x008ac26c */
int __fastcall sub_608AC2F0(int a1);  /* 0x008ac2f0 */
int __fastcall sub_608AC388(_DWORD *a1);  /* 0x008ac388 */
int __fastcall sub_608AC3CC(int a1, int a2, unsigned int a3);  /* 0x008ac3cc */
int __fastcall sub_608AC4B4(int a1, int a2);  /* 0x008ac4b4 */
int __fastcall sub_608AC564(int a1, int a2);  /* 0x008ac564 */
int __fastcall sub_608AC56C(int a1);  /* 0x008ac56c */
int __fastcall sub_608AC59C(int a1, int a2);  /* 0x008ac59c */
int __fastcall sub_608AC5F8(int a1, int a2);  /* 0x008ac5f8 */
int __fastcall sub_608AC690(int a1, int a2);  /* 0x008ac690 */
int __fastcall sub_608AC6C8(_DWORD *a1);  /* 0x008ac6c8 */
int __fastcall sub_608AC9B4(int a1, int a2, int a3);  /* 0x008ac9b4 */
int __fastcall sub_608AC9F4(int result);  /* 0x008ac9f4 */
int __fastcall sub_608ACA08(int result);  /* 0x008aca08 */
int __fastcall sub_608ACA10(int result, int a2);  /* 0x008aca10 */
int __fastcall sub_608ACA88(int result, int a2);  /* 0x008aca88 */
int __fastcall sub_608ACAFC(int result, int a2);  /* 0x008acafc */
int __fastcall sub_608ACB18(int a1, int a2);  /* 0x008acb18 */
int __fastcall sub_608ACC18(int a1, int a2);  /* 0x008acc18 */
int __fastcall sub_608ACDF0(_DWORD *a1, _DWORD *a2);  /* 0x008acdf0 */
int __fastcall sub_608ACE64(_DWORD *a1, int a2);  /* 0x008ace64 */
int __fastcall sub_608ACED0(int result, int a2);  /* 0x008aced0 */
int __fastcall sub_608ACED8(int a1, int a2);  /* 0x008aced8 */
int __fastcall sub_608ACFE0(int a1, int a2);  /* 0x008acfe0 */
int __fastcall sub_608AD014(int a1, _DWORD *a2, int a3, int a4);  /* 0x008ad014 */
int __fastcall sub_608AD060(int a1, _DWORD *a2, int a3, int a4);  /* 0x008ad060 */
int __fastcall sub_608AD0F0(int a1, _DWORD *a2, int a3, int a4, int a5);  /* 0x008ad0f0 */
int __fastcall sub_608AD1B0(int a1, _DWORD *a2, int a3, int a4);  /* 0x008ad1b0 */
int __fastcall sub_608AD1CC(int a1, _DWORD *a2, int a3, int a4);  /* 0x008ad1cc */
int __fastcall sub_608AD22C(int a1, int a2, int a3, int a4);  /* 0x008ad22c */
int __fastcall sub_608AD258(int a1, int a2, int a3, int a4);  /* 0x008ad258 */
int __fastcall sub_608AD2C8(int result);  /* 0x008ad2c8 */
int __fastcall sub_608AD370(int a1);  /* 0x008ad370 */
int __fastcall sub_608AD5AC(int a1);  /* 0x008ad5ac */
int __fastcall sub_608ADE38(int a1, int a2, int a3);  /* 0x008ade38 */
int __fastcall sub_608ADEC0(int *a1, int a2, int *a3);  /* 0x008adec0 */
int __fastcall sub_608AE1F0(int a1, int a2, int a3);  /* 0x008ae1f0 */
int __fastcall sub_608AE244(int a1);  /* 0x008ae244 */
int __fastcall sub_608AE4A4(int result);  /* 0x008ae4a4 */
bool __fastcall sub_608AE4C8(int a1, int a2);  /* 0x008ae4c8 */
bool __fastcall sub_608AE59C(int a1, int a2, _DWORD *a3, int a4);  /* 0x008ae59c */
int __fastcall sub_608AE660(_DWORD *a1, int a2, unsigned int a3, int *a4);  /* 0x008ae660 */
int __fastcall sub_608AE888(int a1, int a2);  /* 0x008ae888 */
int __fastcall sub_608AE904(int a1, int *a2, int a3);  /* 0x008ae904 */
int __fastcall sub_608AEA9C(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x008aea9c */
int __fastcall sub_608AEAFC(int a1, int a2, int a3, int a4, int a5, _DWORD *a6, int a7);  /* 0x008aeafc */
int __fastcall sub_608AEE30(int a1, int a2);  /* 0x008aee30 */
int __fastcall sub_608AF034(int result, char a2, int a3);  /* 0x008af034 */
int __fastcall sub_608AF1C4(int result, int a2);  /* 0x008af1c4 */
bool __fastcall sub_608AF1CC(int a1);  /* 0x008af1cc */
bool __fastcall sub_608AF1E4(int a1);  /* 0x008af1e4 */
int __fastcall sub_608AF1FC(int result);  /* 0x008af1fc */
int __fastcall sub_608AF208(int a1, int a2);  /* 0x008af208 */
int __fastcall sub_608AF2F4(int a1, char a2);  /* 0x008af2f4 */
int __fastcall sub_608AF328(int result, int a2, int a3);  /* 0x008af328 */
int __fastcall sub_608AF450(int result, int a2);  /* 0x008af450 */
bool __fastcall sub_608AF468(int a1);  /* 0x008af468 */
int __fastcall sub_608AF484(int a1);  /* 0x008af484 */
int __fastcall sub_608AF9A0(int a1);  /* 0x008af9a0 */
int __fastcall sub_608B0124(int a1);  /* 0x008b0124 */
int __fastcall sub_608B02DC(int result, int a2);  /* 0x008b02dc */
int __fastcall sub_608B02E4(int result);  /* 0x008b02e4 */
int __fastcall sub_608B02F0(int result, int a2);  /* 0x008b02f0 */
int __fastcall sub_608B02F8(int result);  /* 0x008b02f8 */
int __fastcall sub_608B0304(int result, int a2);  /* 0x008b0304 */
int __fastcall sub_608B030C(int result);  /* 0x008b030c */
int __fastcall sub_608B0318(int result);  /* 0x008b0318 */
int __fastcall sub_608B032C(int result, int a2);  /* 0x008b032c */
int __fastcall sub_608B0388(int result);  /* 0x008b0388 */
int __fastcall sub_608B0390(int result, int a2);  /* 0x008b0390 */
int __fastcall sub_608B0398(int result);  /* 0x008b0398 */
int __fastcall sub_608B03A8(int result);  /* 0x008b03a8 */
int __fastcall sub_608B0420(int a1, int a2, int a3, int a4);  /* 0x008b0420 */
int __fastcall sub_608B0444(int a1, int a2);  /* 0x008b0444 */
int __fastcall sub_608B0454(int a1, int a2, int a3, int a4, int a5);  /* 0x008b0454 */
int __fastcall sub_608B0510(int result, int a2, int a3, int a4);  /* 0x008b0510 */
int __fastcall sub_608B05BC(int a1, char a2);  /* 0x008b05bc */
int __fastcall sub_608B0610(int a1, char a2);  /* 0x008b0610 */
int __fastcall sub_608B06B4(int *a1, int a2);  /* 0x008b06b4 */
int __fastcall sub_608B06DC(int result, _QWORD *a2);  /* 0x008b06dc */
int __fastcall sub_608B06E8(int result, int a2);  /* 0x008b06e8 */
int __fastcall sub_608B0798(_DWORD *a1);  /* 0x008b0798 */
int __fastcall sub_608B07EC(int a1, int a2);  /* 0x008b07ec */
int __fastcall sub_608B0870(int a1, int a2);  /* 0x008b0870 */
int __fastcall sub_608B08B8(_DWORD *a1, int a2);  /* 0x008b08b8 */
int __fastcall nn__atk__detail__ExternalSoundPlayer__SetPlayableSoundCount(int a1, int a2);  /* 0x008b0a04 */
int __fastcall sub_608B0AA0(int a1, int a2);  /* 0x008b0aa0 */
int __fastcall sub_608B0C4C(int a1, _DWORD *a2, unsigned int a3);  /* 0x008b0c4c */
int __fastcall sub_608B0CA4(int a1);  /* 0x008b0ca4 */
int __fastcall sub_608B0CB8(int a1, _DWORD *a2, unsigned int a3);  /* 0x008b0cb8 */
int __fastcall sub_608B0CEC(int a1);  /* 0x008b0cec */
int __fastcall sub_608B0D44(_DWORD *a1, _DWORD *a2, int a3, int a4);  /* 0x008b0d44 */
int __fastcall sub_608B0E58(int a1);  /* 0x008b0e58 */
int __fastcall sub_608B0EC4(int *a1);  /* 0x008b0ec4 */
int __fastcall sub_608B0EE4(int a1);  /* 0x008b0ee4 */
int __fastcall sub_608B0EEC(int a1);  /* 0x008b0eec */
bool __fastcall sub_608B0F28(_DWORD *a1);  /* 0x008b0f28 */
int __fastcall sub_608B0F64(int a1);  /* 0x008b0f64 */
int __fastcall sub_608B0F6C(int a1);  /* 0x008b0f6c */
int __fastcall sub_608B0F74(int a1, int a2, int a3);  /* 0x008b0f74 */
int __fastcall sub_608B0F8C(int a1);  /* 0x008b0f8c */
void __fastcall sub_608B0FAC(int a1, const void *a2);  /* 0x008b0fac */
int __fastcall sub_608B0FC0(int a1);  /* 0x008b0fc0 */
int __fastcall sub_608B0FCC(int a1, char a2);  /* 0x008b0fcc */
int __fastcall sub_608B0FD8(int a1, int a2);  /* 0x008b0fd8 */
int __fastcall sub_608B0FE8(int a1, int a2, char a3);  /* 0x008b0fe8 */
bool __fastcall sub_608B0FF8(int a1);  /* 0x008b0ff8 */
int __fastcall sub_608B1008(int a1);  /* 0x008b1008 */
int __fastcall sub_608B1010(int a1);  /* 0x008b1010 */
int __fastcall sub_608B1018(int a1);  /* 0x008b1018 */
int __fastcall sub_608B1024(int a1);  /* 0x008b1024 */
int __fastcall sub_608B1034(int a1, int a2);  /* 0x008b1034 */
bool __fastcall sub_608B1060(int a1);  /* 0x008b1060 */
bool __fastcall sub_608B1070(int a1);  /* 0x008b1070 */
int __fastcall sub_608B1090(int a1, char a2);  /* 0x008b1090 */
int __fastcall sub_608B12C8(int result);  /* 0x008b12c8 */
int __fastcall sub_608B1310(int a1);  /* 0x008b1310 */
int __fastcall sub_608B1348(_DWORD *a1);  /* 0x008b1348 */
int __fastcall sub_608B1378(_DWORD *a1, int a2, int a3);  /* 0x008b1378 */
int __fastcall sub_608B1480(int a1, int a2);  /* 0x008b1480 */
int __fastcall sub_608B14B4(_DWORD *a1, int a2, int a3, int a4);  /* 0x008b14b4 */
int __fastcall sub_608B1510(int a1, int a2);  /* 0x008b1510 */
int __fastcall sub_608B1518(_WORD *a1);  /* 0x008b1518 */
int __fastcall sub_608B1550(_WORD *a1);  /* 0x008b1550 */
int __fastcall sub_608B1590(_WORD *a1);  /* 0x008b1590 */
int __fastcall sub_608B15C8(_WORD *a1);  /* 0x008b15c8 */
int __fastcall sub_608B1608(_WORD *a1);  /* 0x008b1608 */
int __fastcall nn__atk__detail__SoundArchiveFile__StringBlockBody__GetString(int a1, int a2);  /* 0x008b1648 */
int __fastcall sub_608B1674(int a1, int a2, int a3);  /* 0x008b1674 */
int __fastcall sub_608B175C(int a1, int a2);  /* 0x008b175c */
int __fastcall sub_608B1794(int a1);  /* 0x008b1794 */
int __fastcall sub_608B17A0(int a1, int a2);  /* 0x008b17a0 */
int __fastcall sub_608B17D8(int a1, int a2);  /* 0x008b17d8 */
int __fastcall sub_608B1810(int a1);  /* 0x008b1810 */
int __fastcall sub_608B181C(int a1, int a2);  /* 0x008b181c */
int __fastcall sub_608B1854(int a1);  /* 0x008b1854 */
int __fastcall sub_608B1860(int a1, int a2);  /* 0x008b1860 */
int __fastcall sub_608B1898(int a1);  /* 0x008b1898 */
int __fastcall sub_608B18A4(int a1, int a2);  /* 0x008b18a4 */
int __fastcall sub_608B18DC(int a1);  /* 0x008b18dc */
int __fastcall sub_608B18E8(int a1, int a2);  /* 0x008b18e8 */
int __fastcall sub_608B1914(int a1);  /* 0x008b1914 */
int __fastcall sub_608B1A60(int a1);  /* 0x008b1a60 */
int __fastcall sub_608B1A94(int a1);  /* 0x008b1a94 */
int __fastcall nn__atk__detail__SoundArchiveFile__InfoBlockBody__GetItemStringId(_DWORD *a1, unsigned int a2);  /* 0x008b1aa0 */
int __fastcall sub_608B1C30(int a1);  /* 0x008b1c30 */
int __fastcall sub_608B1C3C(int a1);  /* 0x008b1c3c */
int __fastcall sub_608B1C48(int a1);  /* 0x008b1c48 */
int __fastcall sub_608B1C54(int a1);  /* 0x008b1c54 */
int __fastcall sub_608B1C60(int a1);  /* 0x008b1c60 */
int __fastcall sub_608B1CC8(int a1);  /* 0x008b1cc8 */
int __fastcall sub_608B1CEC(int a1);  /* 0x008b1cec */
int __fastcall sub_608B1D14(int a1);  /* 0x008b1d14 */
int __fastcall sub_608B1D48(int a1);  /* 0x008b1d48 */
int __fastcall sub_608B1D7C(int a1);  /* 0x008b1d7c */
int __fastcall sub_608B1DA8(int a1);  /* 0x008b1da8 */
int __fastcall sub_608B1DD8(int a1);  /* 0x008b1dd8 */
int __fastcall sub_608B1E38(int a1, _DWORD *a2, int a3);  /* 0x008b1e38 */
int __fastcall sub_608B1EB0(int a1);  /* 0x008b1eb0 */
int __fastcall sub_608B1F14(int a1);  /* 0x008b1f14 */
int __fastcall sub_608B1F34(int a1);  /* 0x008b1f34 */
int __fastcall sub_608B1F5C(int a1);  /* 0x008b1f5c */
int __fastcall sub_608B1F68(int a1);  /* 0x008b1f68 */
int __fastcall sub_608B1F80(int a1);  /* 0x008b1f80 */
int __fastcall sub_608B1FF4(int a1);  /* 0x008b1ff4 */
int __fastcall sub_608B200C(int a1);  /* 0x008b200c */
int __fastcall sub_608B2030(int a1);  /* 0x008b2030 */
int __fastcall sub_608B205C(int a1);  /* 0x008b205c */
int __fastcall sub_608B2080(int a1);  /* 0x008b2080 */
int __fastcall sub_608B20A4(unsigned __int16 *a1);  /* 0x008b20a4 */
int __fastcall sub_608B20D8(int a1);  /* 0x008b20d8 */
int __fastcall sub_608B20F8(int a1);  /* 0x008b20f8 */
int __fastcall sub_608B2118(int result);  /* 0x008b2118 */
int __fastcall sub_608B2188(int result);  /* 0x008b2188 */
int __fastcall sub_608B2198(int result, int a2);  /* 0x008b2198 */
int __fastcall sub_608B21A4(int result, int a2);  /* 0x008b21a4 */
int __fastcall nn__atk__detail__SoundArchiveFileReader__GetItemId(int a1, int a2);  /* 0x008b21b0 */
int __fastcall nn__atk__detail__SoundArchiveFileReader__GetItemLabel(int a1, unsigned int a2);  /* 0x008b21cc */
int __fastcall sub_608B2218(int a1);  /* 0x008b2218 */
int __fastcall sub_608B222C(int a1);  /* 0x008b222c */
int __fastcall sub_608B2240(int a1);  /* 0x008b2240 */
int __fastcall sub_608B2254(int a1);  /* 0x008b2254 */
int __fastcall sub_608B2268(int a1);  /* 0x008b2268 */
int __fastcall sub_608B227C(int a1, int a2, int a3);  /* 0x008b227c */
int __fastcall sub_608B231C(int a1, int a2, _DWORD *a3);  /* 0x008b231c */
int __fastcall sub_608B234C(int a1, int a2, _DWORD *a3);  /* 0x008b234c */
int __fastcall sub_608B2384(int a1, int a2, _DWORD *a3);  /* 0x008b2384 */
int __fastcall sub_608B23C8(int a1, int a2, _DWORD *a3);  /* 0x008b23c8 */
int __fastcall sub_608B2448(int a1, int a2, _DWORD *a3);  /* 0x008b2448 */
int __fastcall sub_608B24BC(int a1, int a2, int a3);  /* 0x008b24bc */
int __fastcall sub_608B2504(int a1, int a2);  /* 0x008b2504 */
int __fastcall sub_608B2598(int a1, int a2, int a3);  /* 0x008b2598 */
int __fastcall sub_608B25EC(int a1, int a2, int a3);  /* 0x008b25ec */
int __fastcall sub_608B2668(int a1, int a2, int a3);  /* 0x008b2668 */
int __fastcall sub_608B2950(int a1, int a2, int a3);  /* 0x008b2950 */
int __fastcall sub_608B29C0(int a1, int a2, int a3);  /* 0x008b29c0 */
int __fastcall sub_608B2A38(int a1, int a2, _DWORD *a3);  /* 0x008b2a38 */
int __fastcall sub_608B2A84(int a1, unsigned int a2);  /* 0x008b2a84 */
int __fastcall sub_608B2B64(int a1, int a2);  /* 0x008b2b64 */
int __fastcall sub_608B2B88(int a1, int a2);  /* 0x008b2b88 */
int __fastcall sub_608B2BAC(int a1, _DWORD *a2, int a3, int a4);  /* 0x008b2bac */
int __fastcall sub_608B2C20(int result, int a2);  /* 0x008b2c20 */
bool __fastcall sub_608B2C28(int a1);  /* 0x008b2c28 */
bool __fastcall sub_608B2C3C(int a1, unsigned int a2, int a3, int a4, int a5);  /* 0x008b2c3c */
int __fastcall sub_608B2E88(int a1, int a2, int a3, int a4, int a5);  /* 0x008b2e88 */
bool __fastcall sub_608B2FD8(_DWORD *a1, int a2, int a3, char a4, int a5);  /* 0x008b2fd8 */
int __fastcall sub_608B30AC(int *a1, int a2, int a3, char a4, int a5, int a6);  /* 0x008b30ac */
int __fastcall sub_608B329C(int *a1, int a2, int a3, char a4, int a5);  /* 0x008b329c */
int __fastcall sub_608B3468(int *a1, int a2, int a3, int a4, int a5);  /* 0x008b3468 */
bool __fastcall sub_608B3568(int a1, int a2, int a3, int a4, int a5);  /* 0x008b3568 */
int __fastcall sub_608B3598(int *a1, int a2, int a3, int a4, int a5);  /* 0x008b3598 */
int __fastcall sub_608B3698(_DWORD *a1, int a2, int a3, int a4, int a5);  /* 0x008b3698 */
int __fastcall sub_608B3814(int *a1, int a2, int a3, int a4);  /* 0x008b3814 */
unsigned int __fastcall sub_608B3984(int a1, int a2, int a3, unsigned int a4, int a5, unsigned int a6);  /* 0x008b3984 */
int __fastcall sub_608B3AC8(int *a1, int a2, int a3, int a4);  /* 0x008b3ac8 */
int __fastcall sub_608B3E5C(int result, int a2, int a3);  /* 0x008b3e5c */
int __fastcall sub_608B3F18(int *a1, int a2, int a3);  /* 0x008b3f18 */
int __fastcall sub_608B4078(int a1);  /* 0x008b4078 */
int __fastcall sub_608B4094(_DWORD *a1, unsigned int a2);  /* 0x008b4094 */
int __fastcall sub_608B417C(int *a1, int a2, int a3);  /* 0x008b417c */
int __fastcall sub_608B427C(int *a1, int a2, int a3, int a4);  /* 0x008b427c */
int __fastcall sub_608B43EC(_DWORD *a1, int a2);  /* 0x008b43ec */
int __fastcall sub_608B44A8(_DWORD *a1);  /* 0x008b44a8 */
unsigned int __fastcall sub_608B467C(int a1);  /* 0x008b467c */
int __fastcall sub_608B4688(_DWORD *a1, _BYTE *a2, int a3, int a4);  /* 0x008b4688 */
int __fastcall sub_608B46CC(int result);  /* 0x008b46cc */
int __fastcall sub_608B470C(int result, int a2);  /* 0x008b470c */
int __fastcall sub_608B47CC(int a1);  /* 0x008b47cc */
int __fastcall sub_608B47F8(int a1);  /* 0x008b47f8 */
int __fastcall sub_608B4820(int a1);  /* 0x008b4820 */
int __fastcall sub_608B4850(int a1);  /* 0x008b4850 */
int __fastcall sub_608B487C(int result);  /* 0x008b487c */
int __fastcall sub_608B4950(int result, int a2, int a3);  /* 0x008b4950 */
bool __fastcall sub_608B49F4(int *a1);  /* 0x008b49f4 */
int __fastcall sub_608B4A30(int result);  /* 0x008b4a30 */
__int64 __fastcall sub_608B4A50(__int64 result);  /* 0x008b4a50 */
int __fastcall sub_608B4A8C(int a1, unsigned int a2);  /* 0x008b4a8c */
int __fastcall sub_608B4AEC(int a1, int a2);  /* 0x008b4aec */
int __fastcall sub_608B4B10(int a1, int a2);  /* 0x008b4b10 */
int __fastcall sub_608B4B54(int a1, unsigned int a2, int a3);  /* 0x008b4b54 */
unsigned int __fastcall sub_608B4B88(unsigned int result);  /* 0x008b4b88 */
int __fastcall sub_608B4B98(int a1, int a2, int a3);  /* 0x008b4b98 */
int __fastcall sub_608B4C78(_DWORD *a1, int a2);  /* 0x008b4c78 */
int __fastcall sub_608B4DE4(unsigned int a1);  /* 0x008b4de4 */
int __fastcall sub_608B4E24(unsigned int a1);  /* 0x008b4e24 */
int __fastcall sub_608B4E40(int *a1, int a2);  /* 0x008b4e40 */
int __fastcall sub_608B4EBC(int result, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9);  /* 0x008b4ebc */
int __fastcall sub_608B5170(int a1, int a2);  /* 0x008b5170 */
int __fastcall sub_608B5328(int a1, int a2);  /* 0x008b5328 */
unsigned int __fastcall sub_608B5330(int a1, int a2);  /* 0x008b5330 */
unsigned int __fastcall sub_608B5360(int a1, int a2);  /* 0x008b5360 */
int __fastcall sub_608B5378(int a1, int a2);  /* 0x008b5378 */
int __fastcall sub_608B5468(int a1);  /* 0x008b5468 */
int __fastcall sub_608B547C(int a1);  /* 0x008b547c */
unsigned int __fastcall sub_608B5A70(int a1, int a2);  /* 0x008b5a70 */
int __fastcall sub_608B62CC(int a1, int a2, int a3);  /* 0x008b62cc */
int __fastcall sub_608B661C(int a1);  /* 0x008b661c */
int __fastcall sub_608B6788(int a1);  /* 0x008b6788 */
int __fastcall sub_608B67EC(int a1);  /* 0x008b67ec */
int __fastcall sub_608B67F4(_DWORD *a1, _DWORD *a2);  /* 0x008b67f4 */
int __fastcall sub_608B683C(int a1, int *a2);  /* 0x008b683c */
int __fastcall sub_608B68B8(int a1, int a2);  /* 0x008b68b8 */
int __fastcall sub_608B6940(int a1, int a2);  /* 0x008b6940 */
int __fastcall sub_608B69C8(int a1);  /* 0x008b69c8 */
int __fastcall sub_608B6A64(int result, int a2);  /* 0x008b6a64 */
int __fastcall sub_608B6B10(int a1, int a2);  /* 0x008b6b10 */
int __fastcall sub_608B6B24(int a1, int a2, int a3, int a4);  /* 0x008b6b24 */
int __fastcall sub_608B6B94(int result);  /* 0x008b6b94 */
int __fastcall sub_608B6BA8(int a1, int a2);  /* 0x008b6ba8 */
int __fastcall sub_608B6C28(int result, int a2);  /* 0x008b6c28 */
int __fastcall sub_608B6C94(int result);  /* 0x008b6c94 */
int __fastcall sub_608B6CB0(int a1, int a2, int a3, int a4, int a5);  /* 0x008b6cb0 */
int __fastcall sub_608B6E78(int a1);  /* 0x008b6e78 */
int __fastcall sub_608B6E98(int a1, int a2);  /* 0x008b6e98 */
int __fastcall sub_608B6EE8(int a1, int a2);  /* 0x008b6ee8 */
int __fastcall sub_608B6F18(int a1);  /* 0x008b6f18 */
int __fastcall sub_608B6FA4(int a1, int a2, int a3, int a4, char a5, char a6, int a7, int a8);  /* 0x008b6fa4 */
int __fastcall sub_608B7018(int a1, int a2, int *a3);  /* 0x008b7018 */
int __fastcall sub_608B7134(int a1);  /* 0x008b7134 */
int __fastcall sub_608B7180(int a1);  /* 0x008b7180 */
int __fastcall sub_608B7240(int a1, int a2);  /* 0x008b7240 */
int __fastcall sub_608B7294(int a1, int a2);  /* 0x008b7294 */
int __fastcall sub_608B72E8(int a1, int a2, __int16 *a3);  /* 0x008b72e8 */
int __fastcall sub_608B7318(int a1, int a2, int a3);  /* 0x008b7318 */
int __fastcall sub_608B7364(int a1, int a2);  /* 0x008b7364 */
int __fastcall sub_608B73A4(int a1);  /* 0x008b73a4 */
bool __fastcall sub_608B73B8(int a1);  /* 0x008b73b8 */
int __fastcall sub_608B73D0(int a1, _DWORD *a2, _DWORD *a3);  /* 0x008b73d0 */
int __fastcall sub_608B754C(_DWORD *a1);  /* 0x008b754c */
bool __fastcall sub_608B757C(_BYTE *a1);  /* 0x008b757c */
int __fastcall sub_608B75B4(int a1);  /* 0x008b75b4 */
int __fastcall sub_608B7614(int a1);  /* 0x008b7614 */
int __fastcall sub_608B7830(_DWORD *a1);  /* 0x008b7830 */
int __fastcall sub_608B7888(_DWORD *a1);  /* 0x008b7888 */
int __fastcall sub_608B78E0(_DWORD *a1);  /* 0x008b78e0 */
int __fastcall sub_608B793C(_DWORD *a1);  /* 0x008b793c */
int __fastcall sub_608B799C(_DWORD *a1);  /* 0x008b799c */
int __fastcall sub_608B79FC(int a1, int a2);  /* 0x008b79fc */
int __fastcall sub_608B7B18(int a1);  /* 0x008b7b18 */
int __fastcall sub_608B7C8C(_DWORD *a1, int *a2);  /* 0x008b7c8c */
int __fastcall sub_608B7D68(int a1, int a2);  /* 0x008b7d68 */
int __fastcall sub_608B7D84(int result);  /* 0x008b7d84 */
int __fastcall sub_608B7D90(int a1);  /* 0x008b7d90 */
int __fastcall sub_608B7E0C(int a1, int a2);  /* 0x008b7e0c */
int __fastcall sub_608B7F60(int result, int a2, int a3);  /* 0x008b7f60 */
int __fastcall sub_608B7FA4(int result);  /* 0x008b7fa4 */
int __fastcall sub_608B7FAC(int result, char a2);  /* 0x008b7fac */
int __fastcall sub_608B7FB4(int result, char a2);  /* 0x008b7fb4 */
int __fastcall sub_608B7FBC(int result, int a2, int a3);  /* 0x008b7fbc */
int __fastcall sub_608B7FC8(int a1, int a2, int a3);  /* 0x008b7fc8 */
int __fastcall sub_608B8070(int a1, int a2);  /* 0x008b8070 */
int __fastcall sub_608B8080(int a1, int a2, __int16 a3);  /* 0x008b8080 */
int __fastcall sub_608B80A8(int result, unsigned int a2, int a3);  /* 0x008b80a8 */
int __fastcall sub_608B8100(int result, unsigned int a2, int a3, int a4);  /* 0x008b8100 */
int __fastcall sub_608B8160(int result, unsigned int a2);  /* 0x008b8160 */
int __fastcall sub_608B81A4(int result, unsigned int a2);  /* 0x008b81a4 */
int __fastcall sub_608B81E8(int result, unsigned int a2);  /* 0x008b81e8 */
int __fastcall sub_608B822C(int result, unsigned int a2, int a3);  /* 0x008b822c */
int __fastcall sub_608B8294(int a1, unsigned int a2, int a3);  /* 0x008b8294 */
int __fastcall sub_608B8314(int result, unsigned int a2, int a3);  /* 0x008b8314 */
int __fastcall sub_608B836C(int result, unsigned int a2, int a3);  /* 0x008b836c */
int __fastcall sub_608B83C4(int result, unsigned int a2, int a3);  /* 0x008b83c4 */
int __fastcall sub_608B841C(int result, unsigned int a2);  /* 0x008b841c */
int __fastcall sub_608B8470(int result, unsigned int a2);  /* 0x008b8470 */
int __fastcall sub_608B84B4(int result, unsigned int a2, int a3);  /* 0x008b84b4 */
int __fastcall sub_608B86A8(int result, unsigned int a2);  /* 0x008b86a8 */
int __fastcall sub_608B86EC(int result, unsigned int a2);  /* 0x008b86ec */
int __fastcall sub_608B8730(int result, unsigned int a2);  /* 0x008b8730 */
int __fastcall sub_608B8774(int result, unsigned int a2, int a3);  /* 0x008b8774 */
unsigned int __fastcall sub_608B87C4(int a1, unsigned int a2, unsigned int a3);  /* 0x008b87c4 */
unsigned int __fastcall sub_608B88A0(int a1, unsigned int a2, unsigned int a3);  /* 0x008b88a0 */
int __fastcall sub_608B88A8(_DWORD *a1);  /* 0x008b88a8 */
int __fastcall sub_608B89B4(int a1);  /* 0x008b89b4 */
int __fastcall sub_608B8CE0(int a1, int a2);  /* 0x008b8ce0 */
int __fastcall sub_608B8E7C(int a1);  /* 0x008b8e7c */
int __fastcall sub_608B90A8(int a1);  /* 0x008b90a8 */
int __fastcall sub_608B92C4(int a1, int a2, int a3);  /* 0x008b92c4 */
int __fastcall sub_608B92EC(int a1, int a2);  /* 0x008b92ec */
int __fastcall sub_608B9494(int a1, _DWORD *a2, int *a3);  /* 0x008b9494 */
int __fastcall sub_608B9518(int a1);  /* 0x008b9518 */
int __fastcall sub_608B954C(_DWORD *a1);  /* 0x008b954c */
int __fastcall sub_608B9570(int a1);  /* 0x008b9570 */
int __fastcall sub_608B95A0(int a1);  /* 0x008b95a0 */
int __fastcall sub_608B97D4(int *a1);  /* 0x008b97d4 */
int __fastcall sub_608B9808(int a1);  /* 0x008b9808 */
int __fastcall sub_608B980C(int result);  /* 0x008b980c */
int __fastcall sub_608B981C(int a1);  /* 0x008b981c */
int __fastcall sub_608B9828(int a1);  /* 0x008b9828 */
int __fastcall sub_608B9830(int result);  /* 0x008b9830 */
int __fastcall sub_608B9844(int a1);  /* 0x008b9844 */
int __fastcall sub_608B9850(int a1);  /* 0x008b9850 */
int __fastcall sub_608B9860(int a1);  /* 0x008b9860 */
int __fastcall sub_608B9940(int result);  /* 0x008b9940 */
int __fastcall sub_608B994C(int a1, int a2, _DWORD *a3, int a4);  /* 0x008b994c */
int __fastcall sub_608B9A70(_DWORD *a1, int a2, unsigned int a3, int *a4);  /* 0x008b9a70 */
signed int __fastcall sub_608B9BD8(int a1, int *a2, unsigned int a3);  /* 0x008b9bd8 */
int __fastcall sub_608B9D20(int *a1);  /* 0x008b9d20 */
int __fastcall sub_608B9E94(int a1, int a2, _DWORD *a3, int a4);  /* 0x008b9e94 */
int __fastcall sub_608B9EE8(int a1, int *a2, int a3);  /* 0x008b9ee8 */
int __fastcall sub_608B9F20(int *a1, int a2);  /* 0x008b9f20 */
int __fastcall sub_608B9FB4(int a1, int a2);  /* 0x008b9fb4 */
int __fastcall sub_608BA190(int *a1, int a2, int a3, int a4, int a5, int *a6);  /* 0x008ba190 */
int __fastcall sub_608BA460(int a1, int a2, int a3, int a4, int a5, _DWORD *a6, int *a7);  /* 0x008ba460 */
int __fastcall sub_608BA5BC(int a1, int a2, int a3, int a4, int *a5, int a6);  /* 0x008ba5bc */
int __fastcall sub_608BA910(int a1, int a2, int a3, int *a4);  /* 0x008ba910 */
int __fastcall sub_608BA988(int a1, int a2, int a3, int a4);  /* 0x008ba988 */
int __fastcall sub_608BAB04(int result);  /* 0x008bab04 */
int __fastcall sub_608BAD18(int result, char a2);  /* 0x008bad18 */
int __fastcall sub_608BAD20(int a1);  /* 0x008bad20 */
int __fastcall sub_608BADEC(int a1);  /* 0x008badec */
int __fastcall sub_608BAFBC(int a1);  /* 0x008bafbc */
int __fastcall sub_608BB040(int a1);  /* 0x008bb040 */
int __fastcall sub_608BB0A8(_DWORD *a1);  /* 0x008bb0a8 */
int __fastcall sub_608BB124(int result, int a2, int a3);  /* 0x008bb124 */
int __fastcall sub_608BB134(int result);  /* 0x008bb134 */
int __fastcall sub_608BB150(int a1, int a2);  /* 0x008bb150 */
int __fastcall sub_608BB1CC(int a1);  /* 0x008bb1cc */
int __fastcall sub_608BB200(int a1);  /* 0x008bb200 */
int __fastcall sub_608BB288(int a1, int a2);  /* 0x008bb288 */
int __fastcall sub_608BB3C8(int a1);  /* 0x008bb3c8 */
int __fastcall sub_608BB8B0(int result, int a2);  /* 0x008bb8b0 */
int __fastcall sub_608BB90C(int a1, int a2, int a3);  /* 0x008bb90c */
int __fastcall sub_608BB970(int a1, int a2);  /* 0x008bb970 */
int __fastcall sub_608BBA58(int a1, int a2, int a3);  /* 0x008bba58 */
int __fastcall sub_608BBAE0(int result, char a2);  /* 0x008bbae0 */
int __fastcall sub_608BBAEC(int result, char a2);  /* 0x008bbaec */
int __fastcall sub_608BBAF4(int result, char a2);  /* 0x008bbaf4 */
int __fastcall sub_608BBAFC(int result, char a2);  /* 0x008bbafc */
int __fastcall sub_608BBB04(int result, int a2);  /* 0x008bbb04 */
int __fastcall sub_608BBB0C(int a1, int a2, int a3);  /* 0x008bbb0c */
int __fastcall sub_608BBB20(int a1, int a2, __int16 a3);  /* 0x008bbb20 */
int __fastcall sub_608BBB30(int a1, int a2);  /* 0x008bbb30 */
int __fastcall sub_608BBB44(int a1, int a2, int a3, int a4, int a5);  /* 0x008bbb44 */
int __fastcall sub_608BBE6C(int a1, int a2);  /* 0x008bbe6c */
int __fastcall sub_608BBECC(int a1, int a2);  /* 0x008bbecc */
int __fastcall sub_608BBF88(int a1);  /* 0x008bbf88 */
int __fastcall sub_608BC010(int a1, int a2);  /* 0x008bc010 */
int __fastcall sub_608BC370(int a1, const void *a2);  /* 0x008bc370 */
int __fastcall sub_608BC3D4(int a1, int a2, const void *a3);  /* 0x008bc3d4 */
int __fastcall sub_608BC430(int a1);  /* 0x008bc430 */
int __fastcall sub_608BC5E8(int result, int a2, int a3);  /* 0x008bc5e8 */
int __fastcall sub_608BC67C(int a1);  /* 0x008bc67c */
bool __fastcall sub_608BC73C(int a1);  /* 0x008bc73c */
int __fastcall sub_608BC754(int a1, int a2);  /* 0x008bc754 */
int __fastcall sub_608BC76C(int a1);  /* 0x008bc76c */
int __fastcall sub_608BC794(int a1, int a2);  /* 0x008bc794 */
int __fastcall sub_608BC7AC(_BYTE *a1);  /* 0x008bc7ac */
bool __fastcall sub_608BC7E0(int a1);  /* 0x008bc7e0 */
int __fastcall sub_608BC8B0(_DWORD *a1);  /* 0x008bc8b0 */
int __fastcall sub_608BC8E0(int a1);  /* 0x008bc8e0 */
bool __fastcall sub_608BC8E8(int a1);  /* 0x008bc8e8 */
bool __fastcall sub_608BC92C(int a1);  /* 0x008bc92c */
int __fastcall sub_608BC970(int a1);  /* 0x008bc970 */
int __fastcall sub_608BC98C(int a1);  /* 0x008bc98c */
int __fastcall sub_608BC9A8(int a1);  /* 0x008bc9a8 */
int __fastcall sub_608BC9CC(int a1);  /* 0x008bc9cc */
int __fastcall sub_608BC9F0(int a1);  /* 0x008bc9f0 */
int __fastcall sub_608BCA14(int a1);  /* 0x008bca14 */
int __fastcall sub_608BCA30(int a1);  /* 0x008bca30 */
int __fastcall sub_608BCA50(int a1);  /* 0x008bca50 */
int __fastcall sub_608BCAD0(int a1);  /* 0x008bcad0 */
int __fastcall sub_608BCAEC(int a1, int *a2, int a3, unsigned int a4);  /* 0x008bcaec */
int __fastcall sub_608BCC5C(int a1, _WORD *a2, _WORD *a3, int a4, int a5);  /* 0x008bcc5c */
int __fastcall sub_608BCD0C(int a1, void *a2, int a3);  /* 0x008bcd0c */
unsigned int __fastcall sub_608BCDB8(_DWORD *a1, int a2);  /* 0x008bcdb8 */
bool __fastcall sub_608BCE28(int a1);  /* 0x008bce28 */
bool __fastcall sub_608BCE74(int a1);  /* 0x008bce74 */
bool __fastcall sub_608BCE8C(int a1);  /* 0x008bce8c */
bool __fastcall sub_608BCEA4(int a1);  /* 0x008bcea4 */
int __fastcall sub_608BCEC4(_DWORD *a1, int a2);  /* 0x008bcec4 */
int __fastcall sub_608BCFD0(int a1, char *a2, signed int a3);  /* 0x008bcfd0 */
int __fastcall sub_608BD07C(int a1, void *a2, _WORD *a3, unsigned int a4);  /* 0x008bd07c */
int __fastcall sub_608BD0E4(int a1);  /* 0x008bd0e4 */
int __fastcall sub_608BD6B0(int *a1);  /* 0x008bd6b0 */
int __fastcall sub_608BD700(_DWORD *a1);  /* 0x008bd700 */
int __fastcall sub_608BD754(int *a1);  /* 0x008bd754 */
int __fastcall sub_608BD7AC(int a1, int a2);  /* 0x008bd7ac */
int __fastcall sub_608BDC1C(int a1);  /* 0x008bdc1c */
void __fastcall sub_608BDDB4(int a1, _BYTE *a2);  /* 0x008bddb4 */
int __fastcall sub_608BE484(int a1, _DWORD *a2);  /* 0x008be484 */
int __fastcall sub_608BE634(int a1, _DWORD *a2);  /* 0x008be634 */
int __fastcall sub_608BE948(int a1, int a2);  /* 0x008be948 */
bool __fastcall sub_608BEA10(int a1, int a2);  /* 0x008bea10 */
int __fastcall sub_608BECF4(int result);  /* 0x008becf4 */
int __fastcall sub_608BEE5C(int a1);  /* 0x008bee5c */
int __fastcall sub_608BEEE4(int a1, int a2);  /* 0x008beee4 */
int __fastcall sub_608BEF68(int a1, int a2);  /* 0x008bef68 */
int __fastcall sub_608BF010(unsigned __int8 *a1, int a2);  /* 0x008bf010 */
int __fastcall sub_608BF074(int *a1, int a2, int a3, int a4);  /* 0x008bf074 */
int __fastcall sub_608BF584(int a1, int a2, int *a3, int a4);  /* 0x008bf584 */
int __fastcall sub_608BF5A8(int a1, int a2, int *a3, int a4, int a5, int a6, int a7);  /* 0x008bf5a8 */
int __fastcall sub_608BF9CC(int result, unsigned int a2, int a3);  /* 0x008bf9cc */
int __fastcall sub_608BF9F8(int a1);  /* 0x008bf9f8 */
int __fastcall sub_608BFC10(int a1);  /* 0x008bfc10 */
int __fastcall sub_608C00F8(int a1, unsigned __int8 *a2);  /* 0x008c00f8 */
int __fastcall sub_608C04B8(int a1, const void *a2, int a3, int a4, int a5, int a6);  /* 0x008c04b8 */
int __fastcall sub_608C0874(int result, int a2);  /* 0x008c0874 */
int __fastcall sub_608C0988(int a1, int a2, int a3, int a4, int a5);  /* 0x008c0988 */
int __fastcall sub_608C0ABC(int a1, int a2, int a3, int a4, int a5);  /* 0x008c0abc */
int __fastcall sub_608C0BF0(int result, unsigned int a2);  /* 0x008c0bf0 */
int __fastcall sub_608C0C48(int result, unsigned int a2, char a3);  /* 0x008c0c48 */
int __fastcall sub_608C0D9C(int result, unsigned int a2, int a3, _DWORD *a4);  /* 0x008c0d9c */
int __fastcall sub_608C0E2C(int result, unsigned int a2);  /* 0x008c0e2c */
int __fastcall sub_608C0F2C(int result, unsigned int a2, int a3);  /* 0x008c0f2c */
int __fastcall sub_608C0F88(int a1);  /* 0x008c0f88 */
int __fastcall sub_608C0F8C(int result);  /* 0x008c0f8c */
int __fastcall sub_608C0FA0(int a1);  /* 0x008c0fa0 */
int __fastcall sub_608C0FAC(int a1);  /* 0x008c0fac */
int __fastcall sub_608C0FB4(int result);  /* 0x008c0fb4 */
int __fastcall sub_608C0FCC(int a1);  /* 0x008c0fcc */
int __fastcall sub_608C0FD8(int result);  /* 0x008c0fd8 */
int __fastcall sub_608C1008(int result);  /* 0x008c1008 */
unsigned int __fastcall sub_608C103C(int a1, int a2);  /* 0x008c103c */
bool __fastcall sub_608C1124(int a1);  /* 0x008c1124 */
bool __fastcall sub_608C113C(int a1);  /* 0x008c113c */
bool __fastcall sub_608C1158(int a1);  /* 0x008c1158 */
int __fastcall sub_608C1178(int a1, void *a2);  /* 0x008c1178 */
int __fastcall sub_608C11A0(int a1, void *a2, _WORD *a3, unsigned int a4);  /* 0x008c11a0 */
int __fastcall sub_608C1208(int a1, _DWORD *a2, int a3);  /* 0x008c1208 */
int __fastcall sub_608C1240(int a1, void *a2, int a3);  /* 0x008c1240 */
int __fastcall sub_608C12FC(_DWORD *a1, int a2, _DWORD *a3, int a4, int a5);  /* 0x008c12fc */
unsigned int __fastcall sub_608C148C(int a1);  /* 0x008c148c */
int __fastcall sub_608C1500(_DWORD *a1, int a2, unsigned int a3, int *a4);  /* 0x008c1500 */
int __fastcall sub_608C1668(int a1, int a2, int a3, unsigned int a4);  /* 0x008c1668 */
int __fastcall sub_608C1700(int a1, int a2);  /* 0x008c1700 */
int __fastcall sub_608C1740(int a1, int a2, int a3, unsigned int a4);  /* 0x008c1740 */
int __fastcall sub_608C17AC(int *a1);  /* 0x008c17ac */
unsigned int __fastcall sub_608C1920(int a1, int a2);  /* 0x008c1920 */
int __fastcall sub_608C19B8(int a1, int a2);  /* 0x008c19b8 */
int __fastcall sub_608C19E4(int a1, int *a2, int a3);  /* 0x008c19e4 */
int __fastcall sub_608C1BDC(int a1, int a2, int a3, int a4, int a5, int *a6, _DWORD *a7);  /* 0x008c1bdc */
int __fastcall sub_608C2514(int a1);  /* 0x008c2514 */
int __fastcall sub_608C2530(int result);  /* 0x008c2530 */
int __fastcall sub_608C25B4(_BYTE *a1);  /* 0x008c25b4 */
void __fastcall sub_608C2600(int a1, int a2, unsigned int a3, int a4);  /* 0x008c2600 */
int __fastcall sub_608C2698(int a1, int a2);  /* 0x008c2698 */
int __fastcall sub_608C2A1C(int a1);  /* 0x008c2a1c */
int __fastcall sub_608C2A9C(_DWORD *a1, int a2);  /* 0x008c2a9c */
int __fastcall sub_608C2B80(int a1, int a2);  /* 0x008c2b80 */
int __fastcall sub_608C2C1C(_DWORD *a1, _DWORD *a2);  /* 0x008c2c1c */
int __fastcall sub_608C2C40(_DWORD *a1, int a2);  /* 0x008c2c40 */
int __fastcall sub_608C2D24(int a1);  /* 0x008c2d24 */
int __fastcall sub_608C3C20(int a1, int a2, unsigned int a3);  /* 0x008c3c20 */
int __fastcall sub_608C3E20(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x008c3e20 */
void __fastcall sub_608C3E94(int a1, int a2, int a3, char a4, int a5, char a6);  /* 0x008c3e94 */
__int64 __fastcall sub_608C3F08(_QWORD *a1);  /* 0x008c3f08 */
int __fastcall sub_608C3F30(int a1);  /* 0x008c3f30 */
int __fastcall sub_608C3F88(_DWORD *a1);  /* 0x008c3f88 */
int __fastcall sub_608C3FDC(int a1);  /* 0x008c3fdc */
int __fastcall sub_608C3FE8(int a1, int a2, int a3);  /* 0x008c3fe8 */
int __fastcall sub_608C402C(int a1);  /* 0x008c402c */
int __fastcall sub_608C406C(_DWORD *a1, _DWORD *a2);  /* 0x008c406c */
int __fastcall sub_608C40AC(int a1, int a2);  /* 0x008c40ac */
int __fastcall sub_608C40FC(int a1, int a2);  /* 0x008c40fc */
int __fastcall sub_608C411C(int a1, int a2);  /* 0x008c411c */
int __fastcall sub_608C4158(int a1);  /* 0x008c4158 */
int __fastcall sub_608C4160(int a1);  /* 0x008c4160 */
int __fastcall sub_608C4168(int a1, int a2);  /* 0x008c4168 */
int __fastcall sub_608C4410(int a1, struct nn_audio_PerformanceInfo *a2, __int64 a3, __int64 a4, int a5);  /* 0x008c4410 */
int __fastcall sub_608C4CE8(_DWORD *a1);  /* 0x008c4ce8 */
int __fastcall sub_608C4DC4(_DWORD *a1);  /* 0x008c4dc4 */
int __fastcall sub_608C4EC4(int a1);  /* 0x008c4ec4 */
int __fastcall sub_608C4EEC(int a1);  /* 0x008c4eec */
int __fastcall sub_608C4EF4(int a1);  /* 0x008c4ef4 */
int __fastcall sub_608C4F14(int a1, _DWORD *a2, int a3);  /* 0x008c4f14 */
int __fastcall sub_608C5128(_DWORD *a1, int a2);  /* 0x008c5128 */
int __fastcall sub_608C52D0(int a1);  /* 0x008c52d0 */
int __fastcall sub_608C52E4(int a1);  /* 0x008c52e4 */
int __fastcall sub_608C5358(int a1);  /* 0x008c5358 */
int __fastcall sub_608C539C(int a1);  /* 0x008c539c */
int __fastcall sub_608C5414(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x008c5414 */
int __fastcall sub_608C54D4(int a1);  /* 0x008c54d4 */
int __fastcall sub_608C55EC(int result);  /* 0x008c55ec */
int __fastcall sub_608C5620(int result);  /* 0x008c5620 */
int __fastcall sub_608C5658(int result, int a2);  /* 0x008c5658 */
int __fastcall sub_608C5670(int result, int a2);  /* 0x008c5670 */
int __fastcall sub_608C5684(int result, int a2);  /* 0x008c5684 */
int __fastcall sub_608C5700(int result, char a2);  /* 0x008c5700 */
int __fastcall sub_608C5708(int result, int a2);  /* 0x008c5708 */
int __fastcall sub_608C5784(int result);  /* 0x008c5784 */
int __fastcall sub_608C57D0(int result, int a2);  /* 0x008c57d0 */
int __fastcall sub_608C5A14(int a1);  /* 0x008c5a14 */
int __fastcall sub_608C5A34(int result);  /* 0x008c5a34 */
int __fastcall sub_608C5A58(int result);  /* 0x008c5a58 */
int __fastcall sub_608C5A74(int result, int a2);  /* 0x008c5a74 */
unsigned int __fastcall sub_608C5B2C(unsigned int result);  /* 0x008c5b2c */
int __fastcall sub_608C5C24(_DWORD *a1);  /* 0x008c5c24 */
int __fastcall sub_608C5C60(int *a1, int a2, int a3);  /* 0x008c5c60 */
int __fastcall sub_608C5D2C(int a1);  /* 0x008c5d2c */
int __fastcall sub_608C5EAC(_DWORD *a1);  /* 0x008c5eac */
int __fastcall sub_608C5FA0(_DWORD *a1);  /* 0x008c5fa0 */
int __fastcall sub_608C6070(int a1, int a2);  /* 0x008c6070 */
int __fastcall sub_608C61FC(_DWORD *a1, int a2);  /* 0x008c61fc */
int __fastcall sub_608C64B8(int a1);  /* 0x008c64b8 */
signed int __fastcall sub_608C64DC(_DWORD *a1, int a2, int a3, int a4);  /* 0x008c64dc */
signed int __fastcall sub_608C65AC(char **a1, char *a2, char *a3, int a4, int a5);  /* 0x008c65ac */
int __fastcall sub_608C66C0(_DWORD *a1);  /* 0x008c66c0 */
size_t __fastcall sub_608C673C(_DWORD *a1, void *a2, unsigned int a3);  /* 0x008c673c */
unsigned int __fastcall sub_608C6780(int a1, int a2, int a3);  /* 0x008c6780 */
bool __fastcall sub_608C67C8(int a1);  /* 0x008c67c8 */
int __fastcall sub_608C67E0(int a1);  /* 0x008c67e0 */
int __fastcall sub_608C67E8(int a1);  /* 0x008c67e8 */
int __fastcall sub_608C6A70(int a1);  /* 0x008c6a70 */
int __fastcall sub_608C6B24(_DWORD *a1);  /* 0x008c6b24 */
int __fastcall sub_608C6D44(_DWORD *a1, _BYTE *a2, int a3, int a4, _DWORD *a5);  /* 0x008c6d44 */
int __fastcall sub_608C6E60(int a1, int a2, int a3, _DWORD *a4);  /* 0x008c6e60 */
int __fastcall sub_608C6EFC(int a1, int a2, int a3);  /* 0x008c6efc */
unsigned int __fastcall sub_608C6F1C(unsigned int result, int a2);  /* 0x008c6f1c */
int __fastcall sub_608C6F98(int result, int a2, int a3, int a4);  /* 0x008c6f98 */
int __fastcall sub_608C6FEC(int result);  /* 0x008c6fec */
int __fastcall sub_608C7018(int result);  /* 0x008c7018 */
int __fastcall sub_608C7044(int a1);  /* 0x008c7044 */
int __fastcall sub_608C71F4(int a1);  /* 0x008c71f4 */
int __fastcall sub_608C7210(int a1, int a2, int a3);  /* 0x008c7210 */
int __fastcall sub_608C7364(int a1, int a2);  /* 0x008c7364 */
int __fastcall sub_608C77DC(int a1);  /* 0x008c77dc */
int __fastcall sub_608C780C(int result, int a2);  /* 0x008c780c */
int __fastcall sub_608C7828(int a1, _DWORD *a2, int a3, int a4, int a5);  /* 0x008c7828 */
int __fastcall sub_608C78C8(int a1, int a2, int a3, int a4);  /* 0x008c78c8 */
int __fastcall sub_608C7BA4(int a1);  /* 0x008c7ba4 */
int __fastcall sub_608C7BEC(int a1);  /* 0x008c7bec */
int __fastcall sub_608C7C40(int result, int a2, char a3);  /* 0x008c7c40 */
int __fastcall sub_608C7C58(int result, char a2);  /* 0x008c7c58 */
int __fastcall sub_608C7C80(int a1, int a2);  /* 0x008c7c80 */
int __fastcall sub_608C7CE0(int a1, int a2, int a3);  /* 0x008c7ce0 */
int __fastcall sub_608C7D68(int result, int a2);  /* 0x008c7d68 */
int __fastcall sub_608C7D98(int a1, int a2, int a3, int a4);  /* 0x008c7d98 */
int __fastcall sub_608C7E44(_DWORD *a1);  /* 0x008c7e44 */
int __fastcall sub_608C7E5C(int result);  /* 0x008c7e5c */
unsigned int __fastcall sub_608C7E6C(int a1, unsigned int a2, unsigned int a3);  /* 0x008c7e6c */
int __fastcall sub_608C8078(int a1, int a2, int a3);  /* 0x008c8078 */
int __fastcall sub_608C80A8(int a1, char *a2, int a3, int a4, int *a5);  /* 0x008c80a8 */
int __fastcall sub_608C81C0(int a1);  /* 0x008c81c0 */
int __fastcall sub_608C825C(_DWORD *a1, _DWORD *a2);  /* 0x008c825c */
int __fastcall sub_608C8308(_DWORD *a1);  /* 0x008c8308 */
int __fastcall sub_608C83E4(int result);  /* 0x008c83e4 */
int __fastcall sub_608C8444(int result);  /* 0x008c8444 */
int __fastcall sub_608C852C(int a1, int a2, int a3);  /* 0x008c852c */
int __fastcall sub_608C8670(int result, int a2, int a3);  /* 0x008c8670 */
int __fastcall sub_608C8750(int a1, int a2);  /* 0x008c8750 */
int __fastcall sub_608C8884(int result, int a2);  /* 0x008c8884 */
int __fastcall sub_608C88E0(int a1, int a2);  /* 0x008c88e0 */
int __fastcall sub_608C8BBC(int result);  /* 0x008c8bbc */
int __fastcall sub_608C8CAC(int result, int a2);  /* 0x008c8cac */
int __fastcall sub_608C8DE8(int a1);  /* 0x008c8de8 */
int __fastcall sub_608C8DF8(_DWORD *a1, int a2, int a3);  /* 0x008c8df8 */
int __fastcall sub_608C8EC8(int a1);  /* 0x008c8ec8 */
void __fastcall sub_608C8EEC(int a1, int a2);  /* 0x008c8eec */
int __fastcall sub_608C900C(_DWORD *a1);  /* 0x008c900c */
int __fastcall sub_608C9074(int *a1, int a2);  /* 0x008c9074 */
int __fastcall sub_608C9134(int a1, int a2);  /* 0x008c9134 */
int __fastcall sub_608C91B8(int a1);  /* 0x008c91b8 */
int __fastcall sub_608C9204(int a1, int a2, int a3, int a4, int a5);  /* 0x008c9204 */
int __fastcall sub_608C932C(int a1);  /* 0x008c932c */
int __fastcall sub_608C93B0(int a1);  /* 0x008c93b0 */
int __fastcall sub_608C9414(int a1);  /* 0x008c9414 */
int __fastcall sub_608C9520(int result, int a2);  /* 0x008c9520 */
int __fastcall sub_608C9544(int a1);  /* 0x008c9544 */
int __fastcall sub_608C97A8(int a1);  /* 0x008c97a8 */
int __fastcall sub_608C9840(int a1);  /* 0x008c9840 */
int __fastcall sub_608C9B6C(int result);  /* 0x008c9b6c */
int __fastcall sub_608C9BA0(int result);  /* 0x008c9ba0 */
int __fastcall sub_608C9BC8(int result, int a2);  /* 0x008c9bc8 */
int __fastcall sub_608C9BEC(int result, int a2);  /* 0x008c9bec */
int __fastcall sub_608C9C10(int result);  /* 0x008c9c10 */
int __fastcall sub_608C9C38(int result, int a2);  /* 0x008c9c38 */
int __fastcall sub_608C9C9C(int a1, int a2);  /* 0x008c9c9c */
int __fastcall sub_608C9CEC(int result, int a2);  /* 0x008c9cec */
int __fastcall sub_608CA030(int a1, _DWORD *a2, int a3, int a4, int a5);  /* 0x008ca030 */
int __fastcall sub_608CA260(int a1, int a2, float *a3, int a4);  /* 0x008ca260 */
int __fastcall sub_608CA3DC(int a1, int a2);  /* 0x008ca3dc */
int __fastcall sub_608CA46C(int a1, _DWORD *a2, int a3, int a4, int a5);  /* 0x008ca46c */
int __fastcall sub_608CA4A0(int a1, float *a2, int a3, int a4, int a5, int a6);  /* 0x008ca4a0 */
int __fastcall sub_608CA9B8(int a1, int a2, float *a3, float *a4, _DWORD *a5, int a6);  /* 0x008ca9b8 */
int __fastcall sub_608CAD8C(int a1);  /* 0x008cad8c */
int __fastcall sub_608CADA0(int a1);  /* 0x008cada0 */
int __fastcall sub_608CADA8(int result, char a2);  /* 0x008cada8 */
int __fastcall sub_608CAE20(int a1, int a2, int a3, int a4);  /* 0x008cae20 */
void __fastcall sub_608CAE4C(int a1, int a2, const void *a3);  /* 0x008cae4c */
int __fastcall sub_608CAE64(int result, int a2, int a3, int a4);  /* 0x008cae64 */
int __fastcall sub_608CAF54(int a1, int a2, int a3);  /* 0x008caf54 */
int __fastcall sub_608CAF78(int result, _DWORD *a2, unsigned int a3, int a4);  /* 0x008caf78 */
int __fastcall sub_608CB064(unsigned __int8 *a1);  /* 0x008cb064 */
int __fastcall sub_608CB260(int a1, int a2);  /* 0x008cb260 */
int __fastcall sub_608CB2B8(int a1);  /* 0x008cb2b8 */
int __fastcall sub_608CB2E8(int a1);  /* 0x008cb2e8 */
int __fastcall sub_608CB324(int a1);  /* 0x008cb324 */
int __fastcall sub_608CB37C(int a1);  /* 0x008cb37c */
int __fastcall sub_608CB474(int a1, __int16 a2);  /* 0x008cb474 */
int __fastcall sub_608CB4B0(int result);  /* 0x008cb4b0 */
int __fastcall sub_608CB4C0(int a1);  /* 0x008cb4c0 */
int __fastcall sub_608CB4D4(int a1, int a2);  /* 0x008cb4d4 */
int __fastcall sub_608CB57C(int a1);  /* 0x008cb57c */
int __fastcall sub_608CB5B4(int *a1, int a2);  /* 0x008cb5b4 */
int __fastcall sub_608CB63C(int a1, int a2);  /* 0x008cb63c */
void __fastcall sub_608CB64C(int a1);  /* 0x008cb64c */
int __fastcall sub_608CB688(int result, int a2, __int16 a3);  /* 0x008cb688 */
int __fastcall sub_608CB698(int result, int a2, _WORD *a3);  /* 0x008cb698 */
int __fastcall sub_608CB6D0(int a1, int a2);  /* 0x008cb6d0 */
int __fastcall sub_608CB724(int a1, int a2);  /* 0x008cb724 */
int __fastcall sub_608CB768(int a1);  /* 0x008cb768 */
int __fastcall sub_608CB7F8(int a1, int a2, int a3, int *a4, int a5);  /* 0x008cb7f8 */
int __fastcall sub_608CB8B0(int a1, _DWORD *a2, _DWORD *a3);  /* 0x008cb8b0 */
int __fastcall sub_608CB940(int a1, char a2, char a3);  /* 0x008cb940 */
int __fastcall sub_608CB98C(int a1);  /* 0x008cb98c */
bool __fastcall sub_608CBA4C(int a1);  /* 0x008cba4c */
int __fastcall sub_608CBA60(int a1, int a2);  /* 0x008cba60 */
int __fastcall sub_608CBB38(int a1, int a2);  /* 0x008cbb38 */
int __fastcall sub_608CBC30(_DWORD *a1);  /* 0x008cbc30 */
bool __fastcall sub_608CBC60(_BYTE *a1);  /* 0x008cbc60 */
int __fastcall sub_608CBC98(int a1);  /* 0x008cbc98 */
int __fastcall sub_608CBD20(_DWORD *a1, int a2, int a3);  /* 0x008cbd20 */
int __fastcall sub_608CBE0C(int a1, int a2, int a3, int a4);  /* 0x008cbe0c */
int __fastcall sub_608CBEEC(int a1);  /* 0x008cbeec */
int __fastcall sub_608CBFE4(_DWORD *a1);  /* 0x008cbfe4 */
int __fastcall sub_608CC03C(_DWORD *a1);  /* 0x008cc03c */
int __fastcall sub_608CC094(_DWORD *a1);  /* 0x008cc094 */
int __fastcall sub_608CC0F0(_DWORD *a1);  /* 0x008cc0f0 */
int __fastcall sub_608CC150(_DWORD *a1);  /* 0x008cc150 */
int __fastcall sub_608CC1B0(int a1, int a2);  /* 0x008cc1b0 */
int __fastcall sub_608CC238(int a1);  /* 0x008cc238 */
int __fastcall sub_608CC34C(int a1, int a2, int a3);  /* 0x008cc34c */
int __fastcall sub_608CC44C(int a1, int a2, _DWORD *a3);  /* 0x008cc44c */
int __fastcall sub_608CC4DC(int result);  /* 0x008cc4dc */
int __fastcall sub_608CC4E8(unsigned __int8 *a1);  /* 0x008cc4e8 */
int __fastcall sub_608CC52C(int a1, int a2);  /* 0x008cc52c */
int __fastcall sub_608CC568(int result, char a2);  /* 0x008cc568 */
int __fastcall sub_608CC570(int result, char a2);  /* 0x008cc570 */
unsigned int __fastcall sub_608CC578(int a1, unsigned int a2, unsigned int a3);  /* 0x008cc578 */
unsigned int __fastcall sub_608CC5DC(int a1, unsigned int a2, unsigned int a3);  /* 0x008cc5dc */
int __fastcall sub_608CC640(int a1, int a2);  /* 0x008cc640 */
int __fastcall sub_608CC654(int a1);  /* 0x008cc654 */
int __fastcall sub_608CC820(int a1);  /* 0x008cc820 */
void __fastcall sub_608CC99C(int a1);  /* 0x008cc99c */
int __fastcall sub_608CCBB4(int a1, int a2, int a3);  /* 0x008ccbb4 */
int __fastcall sub_608CCBC0(int a1);  /* 0x008ccbc0 */
int __fastcall sub_608CCBC4(int result);  /* 0x008ccbc4 */
int __fastcall sub_608CCBD4(int a1);  /* 0x008ccbd4 */
int __fastcall sub_608CCBE0(int a1);  /* 0x008ccbe0 */
int __fastcall sub_608CCBE8(int result);  /* 0x008ccbe8 */
int __fastcall sub_608CCBFC(int a1);  /* 0x008ccbfc */
int __fastcall sub_608CCC78(_DWORD *a1, int a2, _DWORD *a3, int a4);  /* 0x008ccc78 */
int __fastcall sub_608CCE8C(_DWORD *a1, int a2, unsigned int a3, int *a4);  /* 0x008cce8c */
int __fastcall sub_608CCFF0(int *a1);  /* 0x008ccff0 */
int __fastcall sub_608CD158(int a1, int a2);  /* 0x008cd158 */
int __fastcall sub_608CD1E8(int a1, int *a2, int a3);  /* 0x008cd1e8 */
int __fastcall sub_608CD3E0(int a1, int a2, int a3, int a4, int a5, _DWORD *a6, _DWORD *a7);  /* 0x008cd3e0 */
int __fastcall sub_608CD740(int result);  /* 0x008cd740 */
int __fastcall sub_608CD94C(int result);  /* 0x008cd94c */
int __fastcall sub_608CD9D8(int a1, int a2);  /* 0x008cd9d8 */
int __fastcall sub_608CDB20(int a1, int a2);  /* 0x008cdb20 */
int __fastcall sub_608CDC24(int a1, int a2);  /* 0x008cdc24 */
int __fastcall sub_608CDC68(int result, int a2);  /* 0x008cdc68 */
int __fastcall sub_608CDC98(int a1, int a2);  /* 0x008cdc98 */
int __fastcall sub_608CDCDC(int result, int a2, int a3);  /* 0x008cdcdc */
int __fastcall sub_608CDCE8(int a1);  /* 0x008cdce8 */
bool __fastcall sub_608CE1BC(int a1);  /* 0x008ce1bc */
int __fastcall sub_608CE258(int a1, unsigned int a2);  /* 0x008ce258 */
int __fastcall sub_608CE33C(int a1, int a2, int a3, int a4);  /* 0x008ce33c */
int __fastcall sub_608CE364(int a1, __int64 a2);  /* 0x008ce364 */
int __fastcall sub_608CE3F4(int a1);  /* 0x008ce3f4 */
int __fastcall sub_608CE450(int a1);  /* 0x008ce450 */
int __fastcall sub_608CE4AC(int a1);  /* 0x008ce4ac */
int __fastcall sub_608CE508(int a1);  /* 0x008ce508 */
int __fastcall sub_608CE564(int a1);  /* 0x008ce564 */
int __fastcall sub_608CE5C0(int a1, char a2);  /* 0x008ce5c0 */
bool __fastcall sub_608CEA98(int a1);  /* 0x008cea98 */
int __fastcall sub_608CEB34(int a1, unsigned int a2);  /* 0x008ceb34 */
int __fastcall sub_608CEC78(int a1);  /* 0x008cec78 */
int __fastcall sub_608CECD4(int a1, __int64 a2);  /* 0x008cecd4 */
int __fastcall sub_608CEDC8(int a1);  /* 0x008cedc8 */
int __fastcall sub_608CEE24(int a1, __int64 a2);  /* 0x008cee24 */
int __fastcall sub_608CEEC8(int a1);  /* 0x008ceec8 */
int __fastcall sub_608CEF24(int a1);  /* 0x008cef24 */
int __fastcall sub_608CEF80(int a1);  /* 0x008cef80 */
int __fastcall sub_608CEFDC(int a1);  /* 0x008cefdc */
int __fastcall sub_608CF038(int a1);  /* 0x008cf038 */
int __fastcall sub_608CF094(int a1, char a2);  /* 0x008cf094 */
unsigned int __fastcall sub_608CF170(int a1, int a2, int a3);  /* 0x008cf170 */
int __fastcall sub_608CF21C(_DWORD *a1, char a2);  /* 0x008cf21c */
int __fastcall sub_608CF2A8(_DWORD *a1, int a2);  /* 0x008cf2a8 */
int __fastcall sub_608CF338(_DWORD *a1, int a2);  /* 0x008cf338 */
int __fastcall sub_608CF3DC(int a1, unsigned int a2);  /* 0x008cf3dc */
int __fastcall sub_608CF434(int *a1, int a2, void *a3, int a4, unsigned __int8 a5);  /* 0x008cf434 */
int __fastcall sub_608CF4BC(int *a1);  /* 0x008cf4bc */
void __fastcall sub_608CF51C(int a1, void *a2, size_t a3);  /* 0x008cf51c */
void __fastcall sub_608CF550(int a1, void *a2, size_t a3);  /* 0x008cf550 */
int __fastcall sub_608CF59C(_DWORD *a1, int a2, int a3, int a4);  /* 0x008cf59c */
int __fastcall sub_608CF60C(int a1, const void *a2, size_t a3, int *a4);  /* 0x008cf60c */
int __fastcall sub_608CF668(int a1, int a2, int a3);  /* 0x008cf668 */
int __fastcall sub_608CF6B8(int a1);  /* 0x008cf6b8 */
int __fastcall sub_608CF6C4(int a1);  /* 0x008cf6c4 */
int __fastcall sub_608CF6D0(int a1);  /* 0x008cf6d0 */
int __fastcall sub_608CF6DC(_DWORD *a1, int a2, int a3);  /* 0x008cf6dc */
int __fastcall sub_608CF754(int a1);  /* 0x008cf754 */
int __fastcall sub_608CF75C(int a1);  /* 0x008cf75c */
int __fastcall sub_608CF768(int a1);  /* 0x008cf768 */
int __fastcall sub_608CF7BC(int a1, int a2, int a3);  /* 0x008cf7bc */
int __fastcall sub_608CF868(int a1);  /* 0x008cf868 */
int __fastcall sub_608CF8A0(_DWORD *a1);  /* 0x008cf8a0 */
int __fastcall sub_608CF8CC(int a1);  /* 0x008cf8cc */
int __fastcall sub_608CF91C(int a1, int a2, int a3, int *a4);  /* 0x008cf91c */
int __fastcall sub_608CF998(int a1, int a2, int a3, int *a4);  /* 0x008cf998 */
int __fastcall sub_608CFA04(_DWORD *a1, int a2, int a3);  /* 0x008cfa04 */
int __fastcall sub_608CFADC(int a1);  /* 0x008cfadc */
bool __fastcall sub_608CFB08(_DWORD *a1);  /* 0x008cfb08 */
int __fastcall sub_608CFB3C(int result, int a2);  /* 0x008cfb3c */
int __fastcall sub_608CFB44(_DWORD *a1);  /* 0x008cfb44 */
int __fastcall sub_608CFB70(_DWORD *a1);  /* 0x008cfb70 */
int __fastcall sub_608CFBA4(int a1);  /* 0x008cfba4 */
int __fastcall sub_608CFBB4(int a1, int a2, int a3, int *a4);  /* 0x008cfbb4 */
int __fastcall sub_608CFC34(int a1, int a2, int a3, int *a4);  /* 0x008cfc34 */
int __fastcall sub_608CFCA4(int a1, int a2, int a3);  /* 0x008cfca4 */
int __fastcall sub_608CFD74(int a1);  /* 0x008cfd74 */
int __fastcall sub_608CFD80(int a1);  /* 0x008cfd80 */
int __fastcall sub_608CFD90(int a1);  /* 0x008cfd90 */
int __fastcall sub_608CFDA0(int a1);  /* 0x008cfda0 */
int __fastcall sub_608CFDB0(int a1);  /* 0x008cfdb0 */
int __fastcall sub_608CFDC0(int result);  /* 0x008cfdc0 */
int __fastcall sub_608CFDF8(int result, int a2, int a3, int a4);  /* 0x008cfdf8 */
int __fastcall sub_608CFE1C(int result);  /* 0x008cfe1c */
unsigned int __fastcall sub_608CFE44(int a1, char *a2, size_t a3, int *a4, int a5, int a6);  /* 0x008cfe44 */
int __fastcall sub_608D0338(int a1, const void *a2, size_t a3, int *a4);  /* 0x008d0338 */
unsigned int __fastcall sub_608D06A4(int a1, int a2, int a3);  /* 0x008d06a4 */
int __fastcall sub_608D07BC(_DWORD *a1, _DWORD *a2);  /* 0x008d07bc */
int __fastcall sub_608D0864(int a1);  /* 0x008d0864 */
int __fastcall sub_608D0868(int *a1);  /* 0x008d0868 */
int __fastcall sub_608D08A8(int result);  /* 0x008d08a8 */
__int64 __fastcall sub_608D08D0(int a1, int a2, int a3, _DWORD *a4);  /* 0x008d08d0 */
int __fastcall sub_608D094C(int a1);  /* 0x008d094c */
int __fastcall sub_608D098C(int a1);  /* 0x008d098c */
int __fastcall sub_608D0994(int a1, void *a2);  /* 0x008d0994 */
int __fastcall sub_608D09AC(int a1, int a2, int a3);  /* 0x008d09ac */
int __fastcall sub_608D09BC(int a1);  /* 0x008d09bc */
int __fastcall sub_608D09D0(int *a1, int a2);  /* 0x008d09d0 */
int __fastcall sub_608D0A1C(int a1);  /* 0x008d0a1c */
void __fastcall sub_608D0A28(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x008d0a28 */
int __fastcall sub_608D0AA8(int a1, int a2);  /* 0x008d0aa8 */
int __fastcall sub_608D0AD4(int a1);  /* 0x008d0ad4 */
int __fastcall sub_608D0AE4(int a1, int a2);  /* 0x008d0ae4 */
int __fastcall sub_608D0B08(int a1);  /* 0x008d0b08 */
int __fastcall sub_608D0B4C(int a1, int a2);  /* 0x008d0b4c */
int __fastcall sub_608D0B5C(int result, int a2, int a3, _DWORD *a4);  /* 0x008d0b5c */
int __fastcall sub_608D0C88(int result);  /* 0x008d0c88 */
bool __fastcall sub_608D0C9C(int a1, int a2);  /* 0x008d0c9c */
int __fastcall sub_608D0DA4(int a1, int a2, int a3, int a4, int a5);  /* 0x008d0da4 */
int __fastcall sub_608D0E10(_DWORD *a1);  /* 0x008d0e10 */
int __fastcall sub_608D0E8C(_DWORD *a1);  /* 0x008d0e8c */
int __fastcall sub_608D0F10(_DWORD *a1, _DWORD *a2, int a3, int a4, int a5);  /* 0x008d0f10 */
int __fastcall sub_608D1068(_DWORD *a1, _DWORD *a2, int a3, int a4, int a5);  /* 0x008d1068 */
int __fastcall sub_608D118C(_DWORD *a1, int *a2, int a3);  /* 0x008d118c */
int __fastcall sub_608D1244(_DWORD *a1, int *a2, int a3);  /* 0x008d1244 */
int __fastcall sub_608D1304(_DWORD *a1, int a2);  /* 0x008d1304 */
int __fastcall sub_608D1458(int result);  /* 0x008d1458 */
int __fastcall sub_608D14A4(int result, int a2);  /* 0x008d14a4 */
int __fastcall sub_608D14AC(int result, int a2);  /* 0x008d14ac */
int __fastcall sub_608D14B4(int a1, int a2, char a3);  /* 0x008d14b4 */
int __fastcall sub_608D14C0(int a1);  /* 0x008d14c0 */
unsigned int __fastcall sub_608D1544(int a1, int a2, int a3, int a4);  /* 0x008d1544 */
unsigned int __fastcall sub_608D1590(int a1, int a2, int a3, int a4, int a5);  /* 0x008d1590 */
int __fastcall sub_608D15DC(int a1, int a2, int a3, int a4, int a5, char a6, int a7);  /* 0x008d15dc */
int __fastcall sub_608D163C(int a1, int *a2, _DWORD *a3);  /* 0x008d163c */
int __fastcall sub_608D1A08(int a1, int *a2, _DWORD *a3);  /* 0x008d1a08 */
int __fastcall sub_608D1A0C(int a1);  /* 0x008d1a0c */
int __fastcall sub_608D1A98(int a1);  /* 0x008d1a98 */
int __fastcall sub_608D1DA8(int a1, int a2);  /* 0x008d1da8 */
int __fastcall sub_608D2040(int a1, int a2);  /* 0x008d2040 */
int __fastcall sub_608D2228(int a1, int a2, int a3);  /* 0x008d2228 */
int __fastcall sub_608D23A4(int a1, int a2, int a3);  /* 0x008d23a4 */
int __fastcall sub_608D2444(int a1, int a2, char a3);  /* 0x008d2444 */
int __fastcall sub_608D2484(int a1, int a2);  /* 0x008d2484 */
int __fastcall sub_608D2490(int result, char a2);  /* 0x008d2490 */
int __fastcall sub_608D2498(int a1, _DWORD *a2, int a3, int a4);  /* 0x008d2498 */
int __fastcall sub_608D27C8(int a1, int a2, int a3, int a4, int a5);  /* 0x008d27c8 */
int __fastcall sub_608D27CC(int a1, _DWORD *a2, int a3, int a4, int a5);  /* 0x008d27cc */
int __fastcall sub_608D286C(int a1, _DWORD *a2, int a3, int a4, int a5);  /* 0x008d286c */
int __fastcall sub_608D28F0(int a1);  /* 0x008d28f0 */
int __fastcall sub_608D28F8(int a1);  /* 0x008d28f8 */
int __fastcall sub_608D2900(int a1, int a2);  /* 0x008d2900 */
int __fastcall sub_608D291C(_DWORD *a1, const void *a2, size_t a3, int a4, int a5, int a6);  /* 0x008d291c */
unsigned int __fastcall sub_608D297C(_DWORD *a1, int a2, unsigned int a3);  /* 0x008d297c */
int __fastcall sub_608D2AA4(int a1, int a2, unsigned int a3);  /* 0x008d2aa4 */
int __fastcall sub_608D2AE8(int a1, const void *a2);  /* 0x008d2ae8 */
int __fastcall sub_608D2B28(int result, _QWORD *a2, int *a3, _DWORD *a4);  /* 0x008d2b28 */
int __fastcall sub_608D2B68(int result, _QWORD *a2, int *a3, int *a4, _DWORD *a5);  /* 0x008d2b68 */
int __fastcall sub_608D2BD8(int a1);  /* 0x008d2bd8 */
int __fastcall sub_608D2C08(_DWORD *a1, const void *a2);  /* 0x008d2c08 */
int __fastcall sub_608D2CA4(int result, char a2);  /* 0x008d2ca4 */
int __fastcall sub_608D2CAC(int *a1);  /* 0x008d2cac */
int __fastcall sub_608D2CF8(int a1, int a2);  /* 0x008d2cf8 */
int __fastcall sub_608D2D8C(_DWORD *a1);  /* 0x008d2d8c */
int __fastcall sub_608D2DBC(int a1, int a2);  /* 0x008d2dbc */
int __fastcall sub_608D2DE8(int a1);  /* 0x008d2de8 */
int __fastcall sub_608D2E74(int a1, _DWORD *a2);  /* 0x008d2e74 */
int __fastcall sub_608D2EC0(int a1);  /* 0x008d2ec0 */
bool __fastcall sub_608D2F80(int a1);  /* 0x008d2f80 */
bool __fastcall sub_608D2F94(int a1);  /* 0x008d2f94 */
int __fastcall sub_608D2FB4(int a1);  /* 0x008d2fb4 */
int __fastcall sub_608D305C(int *a1);  /* 0x008d305c */
int __fastcall sub_608D30AC(_DWORD *a1);  /* 0x008d30ac */
int __fastcall sub_608D3100(int *a1);  /* 0x008d3100 */
int __fastcall sub_608D3158(int a1, int a2);  /* 0x008d3158 */
int __fastcall sub_608D3188(int a1);  /* 0x008d3188 */
int __fastcall sub_608D327C(int result);  /* 0x008d327c */
int __fastcall sub_608D3288(unsigned __int8 *a1);  /* 0x008d3288 */
int __fastcall sub_608D32CC(int result, char a2);  /* 0x008d32cc */
int __fastcall sub_608D32D4(int a1, _DWORD *a2);  /* 0x008d32d4 */
int __fastcall sub_608D348C(int a1);  /* 0x008d348c */
int __fastcall sub_608D36D0(int *a1, int a2, int a3);  /* 0x008d36d0 */
int __fastcall sub_608D37CC(unsigned __int8 *a1);  /* 0x008d37cc */
int __fastcall sub_608D3840(int a1);  /* 0x008d3840 */
int __fastcall sub_608D38C0(int a1);  /* 0x008d38c0 */
int __fastcall sub_608D38CC(int result);  /* 0x008d38cc */
int __fastcall sub_608D3940(int result);  /* 0x008d3940 */
int __fastcall sub_608D39C0(int a1);  /* 0x008d39c0 */
int __fastcall sub_608D39CC(int a1);  /* 0x008d39cc */
int __fastcall sub_608D3A9C(int result, int a2);  /* 0x008d3a9c */
int __fastcall sub_608D3B00(int a1);  /* 0x008d3b00 */
int __fastcall sub_608D3B38(int result, char a2);  /* 0x008d3b38 */
int __fastcall sub_608D3B70(_DWORD *a1);  /* 0x008d3b70 */
unsigned int __fastcall sub_608D3BA0(int a1);  /* 0x008d3ba0 */
int __fastcall sub_608D3BAC(int a1, _BYTE *a2, int a3, int a4);  /* 0x008d3bac */
int __fastcall sub_608D3C60(int result);  /* 0x008d3c60 */
int __fastcall sub_608D3DBC(int result, int a2);  /* 0x008d3dbc */
int __fastcall sub_608D3DDC(int result, int a2);  /* 0x008d3ddc */
int __fastcall sub_608D3E88(int a1);  /* 0x008d3e88 */
int __fastcall sub_608D3ED8(int a1);  /* 0x008d3ed8 */
int __fastcall sub_608D3F30(int a1);  /* 0x008d3f30 */
int __fastcall sub_608D3F88(int a1);  /* 0x008d3f88 */
int __fastcall sub_608D3FE4(int a1);  /* 0x008d3fe4 */
int __fastcall sub_608D4040(int result);  /* 0x008d4040 */
int __fastcall sub_608D40B8(int a1);  /* 0x008d40b8 */
int __fastcall sub_608D4118(int a1);  /* 0x008d4118 */
int __fastcall sub_608D4178(int result, int a2);  /* 0x008d4178 */
int __fastcall sub_608D423C(_DWORD *a1, int a2, int a3);  /* 0x008d423c */
int __fastcall sub_608D4408(_DWORD *a1, int a2, int a3);  /* 0x008d4408 */
int __fastcall sub_608D45F0(_DWORD *a1, int a2);  /* 0x008d45f0 */
int __fastcall sub_608D4694(_DWORD *a1, int a2);  /* 0x008d4694 */
int __fastcall sub_608D4740(int a1);  /* 0x008d4740 */
int __fastcall sub_608D474C(int a1);  /* 0x008d474c */
int __fastcall sub_608D4758(int result);  /* 0x008d4758 */
int __fastcall sub_608D477C(int a1, int a2, int a3);  /* 0x008d477c */
int __fastcall sub_608D4834(int a1, int a2, int a3, _DWORD *a4);  /* 0x008d4834 */
int __fastcall sub_608D4B40(int a1, int a2, int a3);  /* 0x008d4b40 */
int __fastcall sub_608D4BB8(int result, int a2);  /* 0x008d4bb8 */
int __fastcall sub_608D4BC0(int result, int a2);  /* 0x008d4bc0 */
bool __fastcall sub_608D4BD0(int a1);  /* 0x008d4bd0 */
int __fastcall sub_608D4BE4(int a1);  /* 0x008d4be4 */
int __fastcall sub_608D4C34(int a1);  /* 0x008d4c34 */
int __fastcall sub_608D4C8C(int a1, unsigned int a2);  /* 0x008d4c8c */
int __fastcall sub_608D4CB4(int a1, int a2);  /* 0x008d4cb4 */
int __fastcall sub_608D4CC0(int a1);  /* 0x008d4cc0 */
int __fastcall sub_608D4CCC(int a1, _WORD *a2);  /* 0x008d4ccc */
int __fastcall sub_608D4D34(int a1, _WORD *a2);  /* 0x008d4d34 */
int __fastcall sub_608D4D9C(int a1, _WORD *a2);  /* 0x008d4d9c */
int __fastcall sub_608D4E10(int a1, _WORD *a2);  /* 0x008d4e10 */
int __fastcall sub_608D4E84(int a1, _WORD *a2);  /* 0x008d4e84 */
int __fastcall sub_608D4EF8(int a1, _WORD *a2);  /* 0x008d4ef8 */
int __fastcall sub_608D4F60(int a1, _WORD *a2);  /* 0x008d4f60 */
int __fastcall sub_608D4FC8(int a1, _WORD *a2);  /* 0x008d4fc8 */
int __fastcall sub_608D503C(int a1, _WORD *a2);  /* 0x008d503c */
int __fastcall sub_608D50B0(int a1, _WORD *a2);  /* 0x008d50b0 */
int __fastcall sub_608D514C(int result, unsigned __int16 *a2, int a3, int a4, int a5, _WORD *a6);  /* 0x008d514c */
int __fastcall sub_608D524C(int a1, int a2, int a3, int *a4);  /* 0x008d524c */
int __fastcall sub_608D5408(int a1);  /* 0x008d5408 */
int __fastcall sub_608D5458(int a1);  /* 0x008d5458 */
int __fastcall sub_608D5464(int a1);  /* 0x008d5464 */
int __fastcall sub_608D5638(int a1);  /* 0x008d5638 */
int __fastcall sub_608D5650(int a1);  /* 0x008d5650 */
int __fastcall sub_608D5674(int a1);  /* 0x008d5674 */
int __fastcall sub_608D56A0(int a1);  /* 0x008d56a0 */
int __fastcall sub_608D56D0(int a1);  /* 0x008d56d0 */
int __fastcall sub_608D5714(int a1);  /* 0x008d5714 */
int __fastcall sub_608D5754(int a1);  /* 0x008d5754 */
int __fastcall sub_608D5820(int a1);  /* 0x008d5820 */
bool __fastcall sub_608D583C(int *a1, int a2, int a3);  /* 0x008d583c */
int __fastcall sub_608D5E0C(int a1, int *a2, int a3, int a4, int a5);  /* 0x008d5e0c */
void __fastcall sub_608D5F6C(int a1, int a2, unsigned int a3, int a4, int a5);  /* 0x008d5f6c */
int __fastcall sub_608D6CD4(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x008d6cd4 */
int __fastcall sub_608D6D04(int a1, int a2, int *a3);  /* 0x008d6d04 */
int __fastcall sub_608D6D44(int a1, int a2);  /* 0x008d6d44 */
signed int __fastcall sub_608D6DB8(int a1, int a2, int a3);  /* 0x008d6db8 */
int __fastcall sub_608D6DD4(int a1);  /* 0x008d6dd4 */
int __fastcall sub_608D6E7C(int a1);  /* 0x008d6e7c */
int __fastcall sub_608D6E84(int a1, int a2, _DWORD *a3);  /* 0x008d6e84 */
unsigned int __fastcall sub_608D6E8C(unsigned int result, int a2, unsigned int a3, unsigned int a4);  /* 0x008d6e8c */
int __fastcall sub_608D6EF4(_DWORD *a1);  /* 0x008d6ef4 */
int __fastcall sub_608D7058(int a1, unsigned __int8 *a2, char a3);  /* 0x008d7058 */
int __fastcall sub_608D70DC(int a1);  /* 0x008d70dc */
int __fastcall sub_608D72C4(int a1);  /* 0x008d72c4 */
int __fastcall sub_608D73A4(int a1);  /* 0x008d73a4 */
int __fastcall sub_608D73E0(int a1);  /* 0x008d73e0 */
int __fastcall sub_608D73F8(_DWORD *a1);  /* 0x008d73f8 */
int __fastcall sub_608D741C(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x008d741c */
unsigned int __fastcall sub_608D74FC(unsigned int result);  /* 0x008d74fc */
bool __fastcall sub_608D7588(int a1);  /* 0x008d7588 */
bool __fastcall sub_608D75B8(int a1);  /* 0x008d75b8 */
int __fastcall sub_608D765C(int a1);  /* 0x008d765c */
int __fastcall sub_608D7794(int a1);  /* 0x008d7794 */
int __fastcall sub_608D7830(int a1, int a2);  /* 0x008d7830 */
int __fastcall sub_608D7A80(int a1, int a2, int a3, const char *a4);  /* 0x008d7a80 */
int __fastcall sub_608D7D4C(int a1, int a2);  /* 0x008d7d4c */
int __fastcall sub_608D7EF8(int a1, int a2, int a3, int a4);  /* 0x008d7ef8 */
int __fastcall sub_608D801C(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x008d801c */
int __fastcall sub_608D8114(int a1, int a2, int a3, int a4, __int64 a5, int a6);  /* 0x008d8114 */
int __fastcall sub_608D891C(int a1, int a2, const void *a3, int a4, int a5, int a6, int a7);  /* 0x008d891c */
int __fastcall sub_608D8F8C(int a1, int a2, _DWORD *a3, int a4, int a5, int a6);  /* 0x008d8f8c */
int __fastcall sub_608D9158(int a1, int a2, int *a3, int a4, int a5, int a6);  /* 0x008d9158 */
int __fastcall sub_608D93A8(_DWORD *a1);  /* 0x008d93a8 */
int __fastcall sub_608D94E4(_DWORD *a1);  /* 0x008d94e4 */
int __fastcall sub_608D94F4(int a1);  /* 0x008d94f4 */
int __fastcall sub_608D9574(_DWORD *a1);  /* 0x008d9574 */
int __fastcall sub_608D9584(int *a1, int a2);  /* 0x008d9584 */
int __fastcall sub_608D95B4(int a1);  /* 0x008d95b4 */
int __fastcall sub_608D9604(int a1);  /* 0x008d9604 */
bool __fastcall sub_608D965C(int a1);  /* 0x008d965c */
int __fastcall sub_608D96C0(int a1);  /* 0x008d96c0 */
int __fastcall sub_608D9708(int a1);  /* 0x008d9708 */
int __fastcall sub_608D9718(int a1);  /* 0x008d9718 */
int __fastcall sub_608D9768(int a1, unsigned int a2);  /* 0x008d9768 */
int __fastcall sub_608D9798(int a1);  /* 0x008d9798 */
int __fastcall sub_608D97A4(int a1);  /* 0x008d97a4 */
int __fastcall sub_608D97B0(int a1, unsigned int a2);  /* 0x008d97b0 */
int __fastcall sub_608D97E4(int a1);  /* 0x008d97e4 */
int __fastcall sub_608D97FC(int a1);  /* 0x008d97fc */
void __fastcall sub_608D9838(_DWORD *a1, _BYTE *a2, _BYTE *a3, size_t a4);  /* 0x008d9838 */
int __fastcall sub_608D9980(_DWORD *a1);  /* 0x008d9980 */
int __fastcall sub_608D99AC(_DWORD *a1);  /* 0x008d99ac */
int __fastcall sub_608D99DC(_DWORD *a1);  /* 0x008d99dc */
int __fastcall sub_608D9A08(int a1);  /* 0x008d9a08 */
int __fastcall sub_608D9A20(int a1);  /* 0x008d9a20 */
int __fastcall sub_608D9A44(int a1);  /* 0x008d9a44 */
int __fastcall sub_608D9A70(int a1);  /* 0x008d9a70 */
int __fastcall sub_608D9AA0(int a1);  /* 0x008d9aa0 */
int __fastcall sub_608D9B60(int a1);  /* 0x008d9b60 */
int __fastcall sub_608D9B94(int a1, _DWORD *a2);  /* 0x008d9b94 */
int __fastcall sub_608D9BFC(_DWORD *a1);  /* 0x008d9bfc */
int __fastcall sub_608D9C20(_DWORD *a1);  /* 0x008d9c20 */
int __fastcall sub_608D9C7C(int a1);  /* 0x008d9c7c */
int __fastcall sub_608D9CAC(int a1);  /* 0x008d9cac */
int __fastcall sub_608D9DB4(int *a1);  /* 0x008d9db4 */
int __fastcall sub_608D9DE4(_DWORD *a1);  /* 0x008d9de4 */
int __fastcall sub_608D9DF4(_DWORD *a1);  /* 0x008d9df4 */
int __fastcall sub_608D9E04(int result);  /* 0x008d9e04 */
int __fastcall sub_608D9E44(int result, int a2, int a3);  /* 0x008d9e44 */
int __fastcall sub_608D9E88(int a1);  /* 0x008d9e88 */
int __fastcall sub_608D9F74(_DWORD *a1, int *a2);  /* 0x008d9f74 */
bool __fastcall sub_608DA070(int a1, int a2);  /* 0x008da070 */
int __fastcall sub_608DA080(int a1);  /* 0x008da080 */
int __fastcall sub_608DA090(int a1);  /* 0x008da090 */
int __fastcall sub_608DA0E0(int a1);  /* 0x008da0e0 */
int __fastcall sub_608DA138(int *a1, int a2, _DWORD *a3);  /* 0x008da138 */
int __fastcall sub_608DA1FC(int a1);  /* 0x008da1fc */
int __fastcall sub_608DA208(int a1, int a2);  /* 0x008da208 */
int __fastcall sub_608DA230(int a1);  /* 0x008da230 */
int __fastcall sub_608DA278(int a1);  /* 0x008da278 */
int __fastcall sub_608DA280(int a1);  /* 0x008da280 */
int __fastcall sub_608DA288(int a1);  /* 0x008da288 */
int __fastcall sub_608DA290(int a1);  /* 0x008da290 */
int __fastcall sub_608DA298(int a1);  /* 0x008da298 */
int __fastcall sub_608DA2A0(int result, int a2);  /* 0x008da2a0 */
int __fastcall sub_608DA314(_DWORD *a1, int a2);  /* 0x008da314 */
int __fastcall sub_608DA388(int a1, int a2);  /* 0x008da388 */
int __fastcall sub_608DA4D4(_DWORD *a1);  /* 0x008da4d4 */
int __fastcall sub_608DA55C(_DWORD *a1);  /* 0x008da55c */
int __fastcall sub_608DA5E8(int *a1, int a2, int a3);  /* 0x008da5e8 */
int __fastcall sub_608DA744(int a1);  /* 0x008da744 */
int __fastcall sub_608DA770(int a1, int a2);  /* 0x008da770 */
int __fastcall sub_608DA77C(int a1);  /* 0x008da77c */
int __fastcall sub_608DA788(int a1);  /* 0x008da788 */
int __fastcall sub_608DA794(int a1, int a2);  /* 0x008da794 */
int __fastcall sub_608DA7EC(int a1, int a2);  /* 0x008da7ec */
int __fastcall sub_608DA828(int a1);  /* 0x008da828 */
int __fastcall sub_608DAA48(int a1, int a2);  /* 0x008daa48 */
int __fastcall sub_608DAB38(_DWORD *a1);  /* 0x008dab38 */
int __fastcall sub_608DAB48(int a1);  /* 0x008dab48 */
int __fastcall sub_608DAB60(_DWORD *a1);  /* 0x008dab60 */
int __fastcall sub_608DADE4(int a1);  /* 0x008dade4 */
int __fastcall sub_608DAED0(int a1);  /* 0x008daed0 */
bool __fastcall sub_608DAFC8(int a1, _DWORD *a2, int a3);  /* 0x008dafc8 */
bool __fastcall sub_608DB0B4(int a1, _DWORD *a2, int a3);  /* 0x008db0b4 */
bool __fastcall sub_608DB1A0(int a1, _DWORD *a2, int a3);  /* 0x008db1a0 */
bool __fastcall sub_608DB28C(int a1, _DWORD *a2, int a3);  /* 0x008db28c */
int __fastcall sub_608DB378(int a1);  /* 0x008db378 */
int __fastcall sub_608DB448(int a1, int a2);  /* 0x008db448 */
int __fastcall sub_608DB520(int a1, int a2);  /* 0x008db520 */
int __fastcall sub_608DB5F8(int a1, int a2);  /* 0x008db5f8 */
int __fastcall sub_608DB6EC(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x008db6ec */
int __fastcall sub_608DB894(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x008db894 */
int __fastcall sub_608DB89C(int a1, int a2, int a3);  /* 0x008db89c */
int __fastcall sub_608DB98C(int a1, int a2, int a3, int a4, int a5);  /* 0x008db98c */
int __fastcall sub_608DBAA4(_DWORD *a1, int a2, int a3, int a4, int a5, int a6);  /* 0x008dbaa4 */
int __fastcall sub_608DBC64(_DWORD *a1, int a2);  /* 0x008dbc64 */
int __fastcall sub_608DBD90(int result);  /* 0x008dbd90 */
int __fastcall sub_608DBE20(int a1, int a2);  /* 0x008dbe20 */
int __fastcall sub_608DBFD4(_DWORD *a1);  /* 0x008dbfd4 */
int __fastcall sub_608DC198(int result, int a2);  /* 0x008dc198 */
int __fastcall sub_608DC1A0(int result, int a2);  /* 0x008dc1a0 */
int __fastcall sub_608DC1A8(int a1, int a2);  /* 0x008dc1a8 */
int __fastcall sub_608DC1C4(int a1);  /* 0x008dc1c4 */
int __fastcall sub_608DC244(int a1);  /* 0x008dc244 */
int __fastcall sub_608DC2C0(int a1);  /* 0x008dc2c0 */
int __fastcall sub_608DC344(int a1);  /* 0x008dc344 */
int __fastcall sub_608DC3C8(int a1, const char *a2);  /* 0x008dc3c8 */
int __fastcall sub_608DC45C(int a1);  /* 0x008dc45c */
int __fastcall sub_608DC4D0(int *a1);  /* 0x008dc4d0 */
int __fastcall sub_608DC518(_DWORD *a1);  /* 0x008dc518 */
int __fastcall sub_608DC56C(int *a1);  /* 0x008dc56c */
int __fastcall sub_608DC5C0(int a1, int a2);  /* 0x008dc5c0 */
int __fastcall sub_608DC5D4(int a1);  /* 0x008dc5d4 */
int __fastcall sub_608DC634(int a1);  /* 0x008dc634 */
int __fastcall sub_608DC6B8(int a1);  /* 0x008dc6b8 */
int __fastcall sub_608DC73C(int a1);  /* 0x008dc73c */
int __fastcall sub_608DC7C4(int a1);  /* 0x008dc7c4 */
int __fastcall sub_608DC84C(int a1, int a2);  /* 0x008dc84c */
int __fastcall sub_608DC930(int a1);  /* 0x008dc930 */
int __fastcall sub_608DCB08(int a1, _DWORD *a2, int a3, char a4, char a5);  /* 0x008dcb08 */
int __fastcall sub_608DCC6C(int a1, int a2);  /* 0x008dcc6c */
int __fastcall sub_608DCD78(int a1, int a2, int a3);  /* 0x008dcd78 */
int __fastcall sub_608DCEB0(int a1);  /* 0x008dceb0 */
bool __fastcall sub_608DCFB4(int a1, unsigned int a2, int a3, int a4, int a5);  /* 0x008dcfb4 */
bool __fastcall sub_608DD174(int a1, int a2, int a3, int a4, int a5);  /* 0x008dd174 */
bool __fastcall sub_608DD334(int a1, void *a2);  /* 0x008dd334 */
bool __fastcall sub_608DD4B0(int a1, void *a2);  /* 0x008dd4b0 */
bool __fastcall sub_608DD624(int a1, void *a2);  /* 0x008dd624 */
int __fastcall sub_608DD724(int a1, int a2);  /* 0x008dd724 */
int __fastcall sub_608DD8B8(_DWORD *a1);  /* 0x008dd8b8 */
int __fastcall sub_608DD90C(int result, int a2, int a3);  /* 0x008dd90c */
int __fastcall sub_608DD918(int a1);  /* 0x008dd918 */
int __fastcall sub_608DD9B0(int a1);  /* 0x008dd9b0 */
int __fastcall sub_608DDA94(int a1);  /* 0x008dda94 */
int __fastcall sub_608DDA9C(int a1);  /* 0x008dda9c */
int __fastcall sub_608DDB18(int a1, unsigned int a2);  /* 0x008ddb18 */
int __fastcall sub_608DDB64(int a1);  /* 0x008ddb64 */
int __fastcall sub_608DDBBC(int result, int a2);  /* 0x008ddbbc */
int __fastcall sub_608DDBC4(int result, int a2, int a3);  /* 0x008ddbc4 */
int __fastcall sub_608DDBD0(int result, int a2, int a3);  /* 0x008ddbd0 */
int __fastcall sub_608DDBDC(int result, int a2);  /* 0x008ddbdc */
int __fastcall sub_608DDBE4(int result);  /* 0x008ddbe4 */
int __fastcall sub_608DDC0C(int a1, int a2);  /* 0x008ddc0c */
int __fastcall sub_608DDC9C(_DWORD *a1);  /* 0x008ddc9c */
int __fastcall sub_608DDD00(int a1, int a2);  /* 0x008ddd00 */
int __fastcall sub_608DDD80(int a1);  /* 0x008ddd80 */
int __fastcall sub_608DDDF0(_DWORD *a1);  /* 0x008dddf0 */
int __fastcall sub_608DDED4(struct sead_IDisposer *a1);  /* 0x008dded4 */
int __fastcall sub_608DDF24(_DWORD *a1);  /* 0x008ddf24 */
int __fastcall sub_608DE00C(int a1);  /* 0x008de00c */
int __fastcall sub_608DE018(int a1);  /* 0x008de018 */
int __fastcall sub_608DE020(int a1);  /* 0x008de020 */
int __fastcall sub_608DE02C(int a1);  /* 0x008de02c */
int __fastcall sub_608DE034(int a1);  /* 0x008de034 */
int __fastcall __operator_new(unsigned int a1);  /* 0x008de044 */
int __fastcall sub_608DE1A4(unsigned int a1, int a2);  /* 0x008de1a4 */
int __fastcall sub_608DE200(unsigned int a1, int a2);  /* 0x008de200 */
int __fastcall __operator_new_al(unsigned int a1, int CurrentHeap, int a3);  /* 0x008de25c */
int __fastcall sub_608DE334(unsigned int a1, int CurrentHeap, int a3);  /* 0x008de334 */
int __fastcall __operator_delete(int a1);  /* 0x008de3a0 */
int __fastcall sub_608DE510(int result, _DWORD *a2);  /* 0x008de510 */
int __fastcall sub_608DE61C(int a1, int a2);  /* 0x008de61c */
int __fastcall sub_608DE684(int a1, int a2);  /* 0x008de684 */
void __fastcall sub_608DE6F4(int a1, _DWORD *a2, _DWORD *a3);  /* 0x008de6f4 */
int __fastcall sub_608DE7F0(int a1, int a2, int a3, int (__fastcall *a4)(int, int));  /* 0x008de7f0 */
unsigned int __fastcall sub_608DE844(unsigned int result, struct sead_Random *a2);  /* 0x008de844 */
int __fastcall sub_608DEA40(char *a1, int a2, int (__fastcall *a3)(char *, char *));  /* 0x008dea40 */
int __fastcall sead__PtrArrayImpl__allocBuffer(int result, int a2, int a3, int a4);  /* 0x008deb28 */
int __fastcall sub_608DEB70(_DWORD *a1);  /* 0x008deb70 */
int __fastcall sub_608DEB9C(int *a1, int a2, int a3, int a4);  /* 0x008deb9c */
int __fastcall sub_608DEBEC(int *a1, struct sead_Random *a2);  /* 0x008debec */
int __fastcall sub_608DECA0(int result, int (__fastcall *a2)(_DWORD, _DWORD));  /* 0x008deca0 */
signed int __fastcall sub_608DED80(signed int result, int (__fastcall *a2)(int, _DWORD));  /* 0x008ded80 */
int __fastcall sub_608DEEE0(int *a1, int a2, int (__fastcall *a3)(_DWORD, int));  /* 0x008deee0 */
int __fastcall sub_608DF11C(int *a1, int *a2);  /* 0x008df11c */
int __fastcall sub_608DF200(int result, _DWORD *a2);  /* 0x008df200 */
int __fastcall sead__TreeNode__detachAll(_DWORD *a1);  /* 0x008df2e0 */
int __fastcall sub_608DF38C(int result);  /* 0x008df38c */
int __fastcall sub_608DF3CC(int a1, int a2, int a3);  /* 0x008df3cc */
int __fastcall sub_608DF43C(int a1);  /* 0x008df43c */
void __fastcall sub_608DF448(int a1);  /* 0x008df448 */
bool __fastcall sub_608E0AC8(int a1, int a2);  /* 0x008e0ac8 */
int * __fastcall sead__NinJoyNpadDevice__dtor(int *a1);  /* 0x008e0f90 */
unsigned int __fastcall sead__NinJoyNpadDevice__calc(int a1, const unsigned int *a2);  /* 0x008e100c */
int __fastcall sub_608E1248(int result, unsigned int a2);  /* 0x008e1248 */
int __fastcall sub_608E1254(int a1, int a2);  /* 0x008e1254 */
int __fastcall sub_608E125C(int a1, int a2);  /* 0x008e125c */
int __fastcall sub_608E1268(_DWORD *a1);  /* 0x008e1268 */
int __fastcall sub_608E1300(_DWORD *a1);  /* 0x008e1300 */
bool __fastcall sead__NinJoyNpadDevice__checkDerivedRuntimeTypeInfo(int a1, int a2);  /* 0x008e133c */
int __fastcall sub_608E14B0(int a1, int a2, char a3);  /* 0x008e14b0 */
int __fastcall sub_608E1518(int a1);  /* 0x008e1518 */
bool __fastcall sub_608E1A48(int a1, int a2);  /* 0x008e1a48 */
int __fastcall sub_608E1C44(int a1);  /* 0x008e1c44 */
int __fastcall sub_608E1CE8(int a1);  /* 0x008e1ce8 */
int __fastcall sub_608E1D30(_DWORD *a1);  /* 0x008e1d30 */
int __fastcall sub_608E1E0C(int a1, int a2, float *a3);  /* 0x008e1e0c */
int __fastcall sub_608E1E74(int a1, int a2);  /* 0x008e1e74 */
int __fastcall sub_608E1E7C(int a1);  /* 0x008e1e7c */
int __fastcall sub_608E1EC0(int a1);  /* 0x008e1ec0 */
int __fastcall sub_608E1F04(int a1);  /* 0x008e1f04 */
int __fastcall sub_608E1F48(int a1, int a2, int a3, int a4);  /* 0x008e1f48 */
int __fastcall sub_608E2008(int a1, int a2, float *a3, int a4, int *a5, int *a6, int a7);  /* 0x008e2008 */
int __fastcall sub_608E20C0(int a1, int a2, int a3);  /* 0x008e20c0 */
int __fastcall sub_608E20E0(int a1, int a2);  /* 0x008e20e0 */
int __fastcall sub_608E20E8(int a1);  /* 0x008e20e8 */
int __fastcall sub_608E2114(int a1);  /* 0x008e2114 */
int __fastcall sub_608E2140(int a1, int a2, int a3);  /* 0x008e2140 */
int __fastcall sub_608E2178(int a1, int a2, int a3, int a4);  /* 0x008e2178 */
int __fastcall sub_608E2260(int a1, int *a2, int *a3, int *a4, int *a5);  /* 0x008e2260 */
bool __fastcall sub_608E22DC(int a1, void *a2);  /* 0x008e22dc */
int __fastcall sub_608E2450(int a1, int a2);  /* 0x008e2450 */
int __fastcall sub_608E2668(int a1, _DWORD *a2, int a3);  /* 0x008e2668 */
int __fastcall sub_608E2A10(int a1, int a2);  /* 0x008e2a10 */
int __fastcall sub_608E2A74(int a1, int a2);  /* 0x008e2a74 */
bool __fastcall sub_608E2AB0(_DWORD *a1, int a2);  /* 0x008e2ab0 */
int __fastcall sub_608E2B80(int a1, unsigned int *a2, int a3, int a4, int a5);  /* 0x008e2b80 */
int __fastcall sub_608E2C0C(int a1, unsigned int *a2, int a3, int a4, unsigned int a5);  /* 0x008e2c0c */
int __fastcall sub_608E2C98(int a1, int a2, int a3, int a4);  /* 0x008e2c98 */
int __fastcall sub_608E2D38(int a1, _DWORD *a2, int a3);  /* 0x008e2d38 */
int __fastcall sub_608E2D58(int a1, int a2, int a3);  /* 0x008e2d58 */
int __fastcall sub_608E2E24(int a1, _DWORD *a2, int a3);  /* 0x008e2e24 */
int __fastcall sub_608E2E78(_DWORD *a1, _BYTE *a2, int a3);  /* 0x008e2e78 */
int __fastcall sub_608E2F80(_DWORD *a1, _BYTE *a2, int a3);  /* 0x008e2f80 */
int __fastcall sub_608E316C(int a1, int a2);  /* 0x008e316c */
int __fastcall sub_608E3184(int a1, unsigned int *a2, int a3, int a4, unsigned int a5);  /* 0x008e3184 */
bool __fastcall sub_608E32F4(_DWORD *a1, int a2);  /* 0x008e32f4 */
int __fastcall sub_608E33C4(int a1);  /* 0x008e33c4 */
int __fastcall sub_608E33CC(int a1, _DWORD *a2, const char **a3);  /* 0x008e33cc */
int __fastcall sub_608E3430(int a1);  /* 0x008e3430 */
int __fastcall sub_608E343C(struct sead_IDisposer *a1);  /* 0x008e343c */
bool __fastcall sub_608E344C(int a1, int a2);  /* 0x008e344c */
int __fastcall sub_608E3628(struct sead_IDisposer *a1);  /* 0x008e3628 */
bool __fastcall sub_608E3638(int a1, int a2);  /* 0x008e3638 */
bool __fastcall sub_608E3874(int a1);  /* 0x008e3874 */
int __fastcall sub_608E38AC(struct sead_IDisposer *a1);  /* 0x008e38ac */
bool __fastcall sub_608E38BC(int a1, void *a2);  /* 0x008e38bc */
int __fastcall sub_608E3AA4(int a1, _DWORD *a2, int a3, _DWORD *a4);  /* 0x008e3aa4 */
void __fastcall sub_608E3D24(struct sead_IDisposer *a1);  /* 0x008e3d24 */
int __fastcall sub_608E3D3C(struct sead_IDisposer *a1);  /* 0x008e3d3c */
int __fastcall sub_608E3D60(int a1);  /* 0x008e3d60 */
int __fastcall sub_608E3D68(int a1, _DWORD *a2, const void **a3, int a4);  /* 0x008e3d68 */
int __fastcall sub_608E3FE8(int a1, int a2);  /* 0x008e3fe8 */
int __fastcall sub_608E3FF0(int a1, int a2);  /* 0x008e3ff0 */
int __fastcall sub_608E3FF8(int a1);  /* 0x008e3ff8 */
int __fastcall sub_608E4000(int a1, _DWORD *a2, int a3, int a4, int a5);  /* 0x008e4000 */
int __fastcall sub_608E4008(int a1, int a2, int a3, int a4);  /* 0x008e4008 */
int __fastcall sub_608E4010(int a1, int a2, int a3, int a4);  /* 0x008e4010 */
int __fastcall sub_608E4018(int a1, int a2, int a3);  /* 0x008e4018 */
int __fastcall sub_608E4020(_DWORD *a1, int a2, const void **a3);  /* 0x008e4020 */
int __fastcall sub_608E4280(int a1);  /* 0x008e4280 */
int __fastcall sub_608E4288(_DWORD *a1, int a2, const void **a3);  /* 0x008e4288 */
int __fastcall sub_608E44E8(_DWORD *a1, int a2, const void **a3);  /* 0x008e44e8 */
int __fastcall sub_608E4748(int a1, int a2, const void **a3);  /* 0x008e4748 */
int __fastcall sub_608E49A8(int a1, int a2);  /* 0x008e49a8 */
int __fastcall sub_608E49B0(int a1, unsigned int *a2, int a3, int a4, unsigned int a5);  /* 0x008e49b0 */
int __fastcall sub_608E49B8(_DWORD *a1, const void **a2, int a3);  /* 0x008e49b8 */
int __fastcall sub_608E4C18(int a1);  /* 0x008e4c18 */
int __fastcall sub_608E4C28(int a1);  /* 0x008e4c28 */
int __fastcall sub_608E4C30(int a1, const void **a2);  /* 0x008e4c30 */
int __fastcall sub_608E4E8C(int a1, const void **a2);  /* 0x008e4e8c */
int __fastcall sub_608E50E8(int a1, int a2, const void **a3);  /* 0x008e50e8 */
int __fastcall sub_608E5350(int a1, int a2, const void **a3);  /* 0x008e5350 */
bool __fastcall sub_608E55B8(int a1, void *a2);  /* 0x008e55b8 */
int __fastcall sub_608E572C(int a1, _DWORD *a2, _DWORD *a3);  /* 0x008e572c */
int __fastcall sub_608E57AC(int a1, _DWORD *a2, int a3);  /* 0x008e57ac */
int __fastcall sub_608E57E8(int a1, bool *a2, _DWORD *a3);  /* 0x008e57e8 */
int __fastcall sub_608E5854(int a1, _BYTE *a2, _DWORD *a3);  /* 0x008e5854 */
int __fastcall sub_608E589C(int a1, int a2, int a3);  /* 0x008e589c */
int __fastcall sub_608E5B0C(int a1, int a2);  /* 0x008e5b0c */
int __fastcall sub_608E5BC4(int a1, int a2, _DWORD *a3);  /* 0x008e5bc4 */
int __fastcall sub_608E5C48(int a1, int a2, int a3);  /* 0x008e5c48 */
int __fastcall sub_608E5CA8(int a1);  /* 0x008e5ca8 */
int __fastcall sub_608E5CDC(int a1, size_t *a2, int a3, void *a4, size_t a5);  /* 0x008e5cdc */
int __fastcall sub_608E5D3C(int a1, int a2, unsigned int a3, int a4);  /* 0x008e5d3c */
int __fastcall sub_608E5D94(int a1, _DWORD *a2, int a3);  /* 0x008e5d94 */
int __fastcall sub_608E5DD0(int a1, int a2, int a3);  /* 0x008e5dd0 */
int __fastcall sub_608E5E1C(int a1, int a2);  /* 0x008e5e1c */
int __fastcall sub_608E5E50(int a1, int *a2, int a3, int a4, int a5);  /* 0x008e5e50 */
int __fastcall sub_608E5EAC(int a1, _DWORD *a2);  /* 0x008e5eac */
int __fastcall sub_608E5F10(struct sead_IDisposer *a1);  /* 0x008e5f10 */
bool __fastcall sub_608E5F20(int a1, void *a2);  /* 0x008e5f20 */
void __fastcall sub_608E60A4(struct sead_IDisposer *a1);  /* 0x008e60a4 */
int __fastcall sub_608E60EC(struct sead_IDisposer *a1);  /* 0x008e60ec */
int __fastcall sub_608E6138(_BYTE *a1);  /* 0x008e6138 */
int __fastcall sub_608E6154(_BYTE *a1, ...);   /* body only reads a1[76] then calls vtable+40; the 2nd argument is never touched */  /* 0x008e6154 */
int __fastcall sub_608E6170(_BYTE *a1, int a2);  /* 0x008e6170 */
int __fastcall sub_608E6578(_BYTE *a1, _DWORD *a2, int a3, int a4, int a5);  /* 0x008e6578 */
int __fastcall sub_608E65CC(_BYTE *a1, int a2, int a3);  /* 0x008e65cc */
int __fastcall sub_608E65F8(_BYTE *a1, _DWORD *a2, int a3, int a4, int a5);  /* 0x008e65f8 */
int __fastcall sub_608E6738(_BYTE *a1, int a2);  /* 0x008e6738 */
int __fastcall sub_608E67A4(unsigned __int8 *a1, int a2);  /* 0x008e67a4 */
int __fastcall sub_608E6964(_BYTE *a1, int a2, int a3, int a4);  /* 0x008e6964 */
void __fastcall sub_608E69D4(int a1, int a2, int a3);  /* 0x008e69d4 */
void __fastcall sub_608E69DC(int a1, int a2, int a3);  /* 0x008e69dc */
int __fastcall sub_608E69E4(_BYTE *a1, int a2);  /* 0x008e69e4 */
int __fastcall sub_608E6A58(_BYTE *a1, int a2, int a3, int a4);  /* 0x008e6a58 */
int __fastcall sub_608E6AC0(_BYTE *a1, int a2, int a3);  /* 0x008e6ac0 */
int __fastcall sub_608E6B28(_BYTE *a1, int a2);  /* 0x008e6b28 */
int __fastcall sub_608E6B4C(_BYTE *a1, int a2);  /* 0x008e6b4c */
int __fastcall sub_608E6B98(_BYTE *a1, int a2);  /* 0x008e6b98 */
int __fastcall sub_608E6C04(_BYTE *a1, unsigned int *a2, int a3, int a4, unsigned int a5);  /* 0x008e6c04 */
int __fastcall sub_608E6C9C(_BYTE *a1, int a2);  /* 0x008e6c9c */
int __fastcall sub_608E6CC0(_BYTE *a1, int a2);  /* 0x008e6cc0 */
int __fastcall sub_608E6CE4(_BYTE *a1);  /* 0x008e6ce4 */
int __fastcall sub_608E6D00(_BYTE *a1, _DWORD *a2, int a3);  /* 0x008e6d00 */
signed int __fastcall sub_608E7618(_DWORD *a1, int a2);  /* 0x008e7618 */
bool __fastcall sub_608E78D4(int a1, int a2);  /* 0x008e78d4 */
int __fastcall sub_608E78F8(int a1, int a2);  /* 0x008e78f8 */
int __fastcall sub_608E7900(int a1, int a2);  /* 0x008e7900 */
void __fastcall sub_608E798C(int a1, int a2, _DWORD *a3);  /* 0x008e798c */
int __fastcall sub_608E7A54(int a1);  /* 0x008e7a54 */
int __fastcall sub_608E7AC0(int a1, int a2, int a3);  /* 0x008e7ac0 */
int __fastcall sub_608E7C10(int a1, _DWORD *a2, int a3, int a4);  /* 0x008e7c10 */
int __fastcall sub_608E7D54(int a1, int a2, int a3);  /* 0x008e7d54 */
int __fastcall sub_608E7DD8(int a1, int a2, int a3, int a4);  /* 0x008e7dd8 */
int __fastcall sub_608E7E5C(int a1, int a2, int a3);  /* 0x008e7e5c */
int __fastcall sub_608E7EC4(int a1);  /* 0x008e7ec4 */
int __fastcall sub_608E7F30(int a1);  /* 0x008e7f30 */
int __fastcall sub_608E7F80(int a1, int a2, int a3);  /* 0x008e7f80 */
bool __fastcall sub_608E8000(int a1, int a2);  /* 0x008e8000 */
int __fastcall sub_608E81AC(struct sead_IDisposer *a1, const char *a2);  /* 0x008e81ac */
int __fastcall sead__FileDeviceMgr__createInstance(int a1);  /* 0x008e8264 */
int __fastcall sead__FileDeviceMgr__FileDeviceMgr(int a1);  /* 0x008e82dc */
int __fastcall sub_608E83B4(int a1, _DWORD *a2, _DWORD *a3);  /* 0x008e83b4 */
int __fastcall sub_608E8584(int a1, _DWORD *a2);  /* 0x008e8584 */
int __fastcall sub_608E86B8(int a1, _DWORD *a2, int a3, int a4, int a5);  /* 0x008e86b8 */
int __fastcall sub_608E8770(int a1, int a2, int a3);  /* 0x008e8770 */
int __fastcall sub_608E8914(int a1, int a2);  /* 0x008e8914 */
int __fastcall sub_608E8A3C(int a1, int a2);  /* 0x008e8a3c */
int __fastcall sub_608E8A4C(int argc, const char **argv, const char **envp);  /* 0x008e8a4c */
void __fastcall sub_608E8BFC(struct sead_IDisposer *a1);  /* 0x008e8bfc */
int __fastcall sub_608E8C44(struct sead_IDisposer *a1);  /* 0x008e8c44 */
int __fastcall sub_608E8C90(int a1);  /* 0x008e8c90 */
int __fastcall sub_608E8CA0(int a1);  /* 0x008e8ca0 */
int __fastcall sub_608E8CB0(int a1);  /* 0x008e8cb0 */
int __fastcall sub_608E8CC0(int a1);  /* 0x008e8cc0 */
bool __fastcall sub_608E8CD0(int a1, void *a2);  /* 0x008e8cd0 */
int __fastcall sub_608E8E44(int a1);  /* 0x008e8e44 */
int __fastcall sub_608E8E54(int a1);  /* 0x008e8e54 */
int __fastcall sub_608E8E5C(int a1, _DWORD *a2, int a3, int a4);  /* 0x008e8e5c */
int __fastcall sub_608E8E7C(int a1, int a2);  /* 0x008e8e7c */
int __fastcall sub_608E8E84(int a1, int a2);  /* 0x008e8e84 */
int __fastcall sub_608E8E8C(int a1);  /* 0x008e8e8c */
int __fastcall sub_608E8E94(int a1, _DWORD *a2, int a3, int a4, int a5);  /* 0x008e8e94 */
int __fastcall sub_608E8E9C(int a1, int a2, int a3, int a4);  /* 0x008e8e9c */
int __fastcall sub_608E8EA4(int a1, int a2, int a3, int a4);  /* 0x008e8ea4 */
int __fastcall sub_608E8EAC(int a1, int a2, int a3);  /* 0x008e8eac */
int __fastcall sub_608E8EB4(int a1, int a2);  /* 0x008e8eb4 */
int __fastcall sub_608E8EBC(int a1, int a2, int a3);  /* 0x008e8ebc */
int __fastcall sub_608E8EC4(int a1, int a2);  /* 0x008e8ec4 */
int __fastcall sub_608E8ECC(int a1, int a2);  /* 0x008e8ecc */
int __fastcall sub_608E8ED4(int a1, int a2);  /* 0x008e8ed4 */
int __fastcall sub_608E8EDC(int a1, int a2);  /* 0x008e8edc */
int __fastcall sub_608E8EE4(int a1, unsigned int *a2, int a3, int a4, unsigned int a5);  /* 0x008e8ee4 */
int __fastcall sub_608E8EEC(int a1);  /* 0x008e8eec */
int __fastcall sub_608E8EF4(int a1);  /* 0x008e8ef4 */
int __fastcall sub_608E8EFC(int a1, _DWORD *a2);  /* 0x008e8efc */
void __fastcall sub_608E906C(int a1, int a2);  /* 0x008e906c */
int __fastcall sub_608E93BC(int a1, _DWORD *a2);  /* 0x008e93bc */
int __fastcall sub_608E978C(int a1, _DWORD *a2);  /* 0x008e978c */
int __fastcall sub_608E9B50(_DWORD *a1, _DWORD *a2);  /* 0x008e9b50 */
int __fastcall sub_608E9F1C(_DWORD *a1, char a2);  /* 0x008e9f1c */
int __fastcall sead__GameFrameworkNx__initialize(_DWORD *a1);  /* 0x008ea004 */
int __fastcall sub_608EA014(int a1, const void *a2);  /* 0x008ea014 */
int __fastcall sub_608EA118(_DWORD *a1);  /* 0x008ea118 */
int __fastcall sub_608EABF8(unsigned int a1, unsigned int a2);  /* 0x008eabf8 */
int __fastcall sub_608EAC10(unsigned int a1, unsigned int a2, struct nn_mem_StandardAllocator *a3);  /* 0x008eac10 */
int __fastcall sub_608EAC24(void *a1, struct nn_mem_StandardAllocator *a2);  /* 0x008eac24 */
int __fastcall sub_608EAC34(void *a1, unsigned int a2, struct nn_mem_StandardAllocator *a3);  /* 0x008eac34 */
int __fastcall sub_608EAC4C(int a1);  /* 0x008eac4c */
int __fastcall sub_608EAC5C(_QWORD *a1);  /* 0x008eac5c */
int __fastcall sub_608EACD4(int a1);  /* 0x008eacd4 */
int __fastcall sub_608EADE8(int a1);  /* 0x008eade8 */
int __fastcall sub_608EB168(int a1);  /* 0x008eb168 */
int __fastcall sub_608EB21C(int a1);  /* 0x008eb21c */
int __fastcall sub_608EB31C(int result);  /* 0x008eb31c */
int __fastcall sub_608EB330(int a1);  /* 0x008eb330 */
int __fastcall sub_608EB3B8(int a1);  /* 0x008eb3b8 */
int __fastcall sub_608EB6DC(int a1);  /* 0x008eb6dc */
int __fastcall sub_608EB71C(int a1, int a2);  /* 0x008eb71c */
int __fastcall sub_608EB734(int a1, int a2);  /* 0x008eb734 */
bool __fastcall sub_608EB74C(int a1, int a2);  /* 0x008eb74c */
bool __fastcall sub_608EB934(int a1, int a2);  /* 0x008eb934 */
int __fastcall sub_608EBA30(int result);  /* 0x008eba30 */
int __fastcall sub_608EBABC(int a1, int a2);  /* 0x008ebabc */
void __fastcall sead__CalculateTask__dtor(int a1);  /* 0x008ebcb0 */
int __fastcall sead__CalculateTask__attachCalcImpl(_DWORD *a1);  /* 0x008ebdcc */
int __fastcall sead__CalculateTask__detachCalcImpl(int a1);  /* 0x008ebe5c */
int __fastcall sead__CalculateTask__pauseCalc(_DWORD *a1, int a2);  /* 0x008ebe68 */
int __fastcall sead__CalculateTask__pauseCalcRec(_DWORD *a1, int a2);  /* 0x008ebee4 */
int __fastcall sead__CalculateTask__pauseCalcChild(_DWORD *a1, int a2);  /* 0x008ebf60 */
int __fastcall sead__CalculateTask__getMethodTreeNode(int a1, unsigned int a2);  /* 0x008ebfdc */
bool __fastcall sead__CalculateTask__checkDerivedRuntimeTypeInfo(int a1, int a2);  /* 0x008ebff0 */
int __fastcall sub_608EC164(int result);  /* 0x008ec164 */
int __fastcall sead__FaderTaskBase__FaderTaskBase(int a1, int a2, const char *a3);  /* 0x008ec224 */
int __fastcall sub_608EC4FC(int result, int a2);  /* 0x008ec4fc */
int __fastcall sub_608EC528(_DWORD *a1);  /* 0x008ec528 */
int __fastcall sub_608EC934(_DWORD *a1);  /* 0x008ec934 */
int __fastcall sub_608EC97C(int a1, const void *a2);  /* 0x008ec97c */
int __fastcall sub_608ECA58(int a1, int a2, const void *a3);  /* 0x008eca58 */
int __fastcall sub_608ECD00(int a1);  /* 0x008ecd00 */
int __fastcall sub_608ECE10(int a1);  /* 0x008ece10 */
int __fastcall sub_608ECE18(int a1, unsigned int a2);  /* 0x008ece18 */
void __fastcall sub_608ECEA0(int a1);  /* 0x008ecea0 */
int __fastcall sub_608ECF64(int a1);  /* 0x008ecf64 */
bool __fastcall sead__TaskBase__checkDerivedRuntimeTypeInfo(int a1, int a2);  /* 0x008ed02c */
int __fastcall sub_608ED128(int a1);  /* 0x008ed128 */
bool __fastcall sub_608ED210(int a1, void *a2);  /* 0x008ed210 */
int __fastcall sub_608ED394(int result);  /* 0x008ed394 */
int __fastcall sub_608ED438(int result);  /* 0x008ed438 */
int __fastcall sub_608ED654(_DWORD *a1);  /* 0x008ed654 */
int __fastcall sead__Framework__initialize(_DWORD *a1);  /* 0x008ed684 */
int __fastcall sub_608ED764(_DWORD *a1, _DWORD *a2, int a3, int a4);  /* 0x008ed764 */
int __fastcall sub_608ED878(int a1);  /* 0x008ed878 */
bool __fastcall sub_608ED8F0(int a1, int a2);  /* 0x008ed8f0 */
int __fastcall sub_608ED9E8(int a1);  /* 0x008ed9e8 */
int __fastcall sub_608ED9F4(_DWORD *a1);  /* 0x008ed9f4 */
int __fastcall sub_608EDAF0(int a1);  /* 0x008edaf0 */
int __fastcall sub_608EDB70(_DWORD *a1);  /* 0x008edb70 */
int __fastcall sub_608EDBD0(int result);  /* 0x008edbd0 */
int __fastcall sub_608EDBE4(int a1, int a2, _DWORD *a3);  /* 0x008edbe4 */
int __fastcall sub_608EDCA0(int a1, int a2);  /* 0x008edca0 */
int __fastcall sead__GameFramework__initialize(_DWORD *a1);  /* 0x008eddec */
int __fastcall sub_608EDFD0(int a1);  /* 0x008edfd0 */
bool __fastcall sub_608EE0BC(int a1, int a2);  /* 0x008ee0bc */
int __fastcall sead__MethodTreeNode__attachMutexRec_(_DWORD *a1, int a2);  /* 0x008ee2ac */
int __fastcall sead__MethodTreeNode__detachAll(_DWORD *a1);  /* 0x008ee36c */
int __fastcall sub_608EE3EC(int a1);  /* 0x008ee3ec */
int __fastcall sub_608EE498(struct sead_IDisposer *a1);  /* 0x008ee498 */
int __fastcall sub_608EEB20(_DWORD *a1);  /* 0x008eeb20 */
int __fastcall sub_608EEC00(_DWORD *a1);  /* 0x008eec00 */
int __fastcall sub_608EEC78(int a1, int a2);  /* 0x008eec78 */
bool __fastcall sub_608EEE34(int a1, void *a2);  /* 0x008eee34 */
int __fastcall sub_608EEFA8(int result);  /* 0x008eefa8 */
int __fastcall sub_608EF048(int result, int *a2);  /* 0x008ef048 */
int __fastcall sub_608EF0F0(int result, int *a2);  /* 0x008ef0f0 */
int __fastcall sub_608EF2B0(int result, int a2, int *a3, int a4);  /* 0x008ef2b0 */
void __fastcall sead__TaskBase__dtor(struct sead_IDisposer *a1, int a2);  /* 0x008ef434 */
int __fastcall sub_608EF560(int a1);  /* 0x008ef560 */
int __fastcall sead__TaskBase__enterCommon(int a1);  /* 0x008ef590 */
int __fastcall sub_608EF6A8(int a1);  /* 0x008ef6a8 */
int __fastcall sub_608EF744(int a1, _DWORD *a2);  /* 0x008ef744 */
int __fastcall sead__TaskBase__doneDestroy(int result);  /* 0x008ef74c */
int __fastcall sub_608EF75C(int a1);  /* 0x008ef75c */
int __fastcall sead__TaskBase__getMethodTreeMgr(int a1);  /* 0x008ef768 */
int __fastcall sead__TaskBase__attachMethodWithCheck(int a1);  /* 0x008ef778 */
int __fastcall sub_608EFCAC(_DWORD *a1);  /* 0x008efcac */
int __fastcall sead__TaskMgr__destroyTaskSync(int a1, int a2);  /* 0x008efd84 */
int __fastcall sub_608EFDC8(int a1);  /* 0x008efdc8 */
int __fastcall sub_608EFF80(int a1, _DWORD *a2);  /* 0x008eff80 */
int __fastcall sub_608EFFD4(int a1, int a2, int a3);  /* 0x008effd4 */
int __fastcall sub_608F0654(int a1, _DWORD *a2, int a3);  /* 0x008f0654 */
int __fastcall sub_608F0894(int a1, _DWORD *a2, int a3);  /* 0x008f0894 */
int __fastcall sub_608F0A9C(int a1, int a2, _DWORD *a3);  /* 0x008f0a9c */
int __fastcall sub_608F0B94(int a1, _DWORD *a2);  /* 0x008f0b94 */
int __fastcall sub_608F0BE8(int a1, _DWORD *a2);  /* 0x008f0be8 */
int __fastcall sub_608F0CF0(int a1, _DWORD *a2);  /* 0x008f0cf0 */
int __fastcall sub_608F0D5C(int a1);  /* 0x008f0d5c */
int __fastcall sub_608F1004(_DWORD *a1);  /* 0x008f1004 */
int __fastcall sub_608F1120(_DWORD *a1);  /* 0x008f1120 */
int __fastcall sub_608F133C(int a1);  /* 0x008f133c */
int __fastcall sub_608F1340(_DWORD *a1);  /* 0x008f1340 */
int __fastcall sub_608F1344(_DWORD *a1);  /* 0x008f1344 */
int __fastcall sub_608F13CC(int result);  /* 0x008f13cc */
int __fastcall sub_608F1478(int result);  /* 0x008f1478 */
int __fastcall sub_608F14B8(int result);  /* 0x008f14b8 */
int __fastcall sub_608F150C(int a1, int a2, unsigned int a3, int a4, int a5);  /* 0x008f150c */
int __fastcall sub_608F1590(int a1, int a2, int a3);  /* 0x008f1590 */
int __fastcall sub_608F1654(int a1, _DWORD *a2, unsigned int a3, unsigned int a4);  /* 0x008f1654 */
int __fastcall sub_608F1AA4(int result);  /* 0x008f1aa4 */
int __fastcall sub_608F1B08(int a1);  /* 0x008f1b08 */
int __fastcall sub_608F1B60(int a1, int a2, int a3, int a4, int a5);  /* 0x008f1b60 */
int __fastcall sub_608F1B80(int a1, char a2);  /* 0x008f1b80 */
int __fastcall sub_608F1BA4(int result, int a2);  /* 0x008f1ba4 */
int __fastcall sub_608F1BD4(_DWORD *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5);  /* 0x008f1bd4 */
int __fastcall sub_608F1BFC(int a1);  /* 0x008f1bfc */
int __fastcall sub_608F1C48(int a1, int a2);  /* 0x008f1c48 */
bool __fastcall sub_608F213C(int a1, void *a2);  /* 0x008f213c */
bool __fastcall sub_608F2324(int a1, void *a2);  /* 0x008f2324 */
int __fastcall sub_608F2498(int a1, int a2);  /* 0x008f2498 */
int __fastcall sub_608F2530(int a1, int a2);  /* 0x008f2530 */
int __fastcall sub_608F261C(int *a1, int a2);  /* 0x008f261c */
unsigned int __fastcall sub_608F28CC(int a1);  /* 0x008f28cc */
unsigned int __fastcall sub_608F28E8(int a1);  /* 0x008f28e8 */
int __fastcall sub_608F2904(int a1, int a2, int a3, int a4, int a5);  /* 0x008f2904 */
int __fastcall sub_608F290C(int result, int a2);  /* 0x008f290c */
int __fastcall sub_608F2914(int result, int a2);  /* 0x008f2914 */
int __fastcall sub_608F291C(int result, int a2);  /* 0x008f291c */
int __fastcall sub_608F2924(int result);  /* 0x008f2924 */
__int64 __fastcall sub_608F2998(_QWORD *a1);  /* 0x008f2998 */
int __fastcall sub_608F29EC(unsigned int a1);  /* 0x008f29ec */
int __fastcall sub_608F2A20(int a1, int a2);  /* 0x008f2a20 */
int __fastcall sub_608F2AB8(int a1);  /* 0x008f2ab8 */
int __fastcall sub_608F2C3C(struct sead_IDisposer *a1);  /* 0x008f2c3c */
int __fastcall sub_608F2CB4(int a1);  /* 0x008f2cb4 */
int __fastcall sub_608F2D70(int a1, int a2, _DWORD *a3, int a4);  /* 0x008f2d70 */
int __fastcall sub_608F3DC4(int (__fastcall ***a1)(_DWORD, int, int, int), int a2, int a3);  /* 0x008f3dc4 */
int __fastcall sub_608F3E88(int result);  /* 0x008f3e88 */
int __fastcall sub_608F3EC8(int a1, int a2, int a3, float32x2_t *a4);  /* 0x008f3ec8 */
int __fastcall sub_608F40D4(int a1, int a2, __int64 *a3, _DWORD *a4, _DWORD *a5);  /* 0x008f40d4 */
int __fastcall sub_608F4580(int a1, int a2, __int64 *a3, _DWORD *a4, _DWORD *a5);  /* 0x008f4580 */
int __fastcall sub_608F45DC(int a1, int a2, __int64 *a3, _DWORD *a4, _DWORD *a5);  /* 0x008f45dc */
int __fastcall sub_608F463C(int a1, int a2, __int64 *a3, _DWORD *a4, _DWORD *a5);  /* 0x008f463c */
int __fastcall sub_608F469C(int a1, int a2, __int64 *a3, _DWORD *a4, _DWORD *a5);  /* 0x008f469c */
int __fastcall sub_608F46F8(int a1, int a2, __int64 *a3, _DWORD *a4, _DWORD *a5);  /* 0x008f46f8 */
int __fastcall sub_608F4758(int a1, int a2, __int64 *a3, _DWORD *a4, _DWORD *a5);  /* 0x008f4758 */
int __fastcall sub_608F47B8(int a1, int a2, __int64 *a3, _DWORD *a4, _DWORD *a5);  /* 0x008f47b8 */
int __fastcall sub_608F4818(int a1, int a2, __int64 *a3, _DWORD *a4, _DWORD *a5);  /* 0x008f4818 */
int __fastcall sub_608F4878(int a1, int a2, __int64 *a3, _DWORD *a4);  /* 0x008f4878 */
int __fastcall sub_608F48D0(int a1, int a2, __int64 *a3, _DWORD *a4);  /* 0x008f48d0 */
int __fastcall sub_608F4928(int a1, int a2, __int64 *a3, _DWORD *a4, _DWORD *a5);  /* 0x008f4928 */
int __fastcall sub_608F4988(int a1, int a2, __int64 *a3, _DWORD *a4, _DWORD *a5);  /* 0x008f4988 */
int __fastcall sub_608F49E8(int a1, int a2);  /* 0x008f49e8 */
int __fastcall sub_608F4A80(int a1);  /* 0x008f4a80 */
int __fastcall sub_608F4AD4(int a1);  /* 0x008f4ad4 */
int __fastcall sub_608F4B08(int a1);  /* 0x008f4b08 */
bool __fastcall sub_608F4B40(int a1, void *a2);  /* 0x008f4b40 */
int __fastcall sub_608F4C80(int a1, int a2);  /* 0x008f4c80 */
int __fastcall sub_608F4CA8(int result, int a2);  /* 0x008f4ca8 */
int __fastcall sub_608F4CBC(int a1, int a2);  /* 0x008f4cbc */
int __fastcall sub_608F4CD4(int result, int a2);  /* 0x008f4cd4 */
int __fastcall sub_608F4CDC(int result, int a2);  /* 0x008f4cdc */
int __fastcall sub_608F4CE4(_DWORD *a1);  /* 0x008f4ce4 */
int __fastcall sub_608F4D1C(int a1);  /* 0x008f4d1c */
int __fastcall sub_608F4D40(int result, int a2, float *a3);  /* 0x008f4d40 */
int __fastcall sub_608F4D80(int result, int *a2, int *a3, int a4);  /* 0x008f4d80 */
int __fastcall sub_608F4DCC(int result, int *a2, int *a3);  /* 0x008f4dcc */
int __fastcall sub_608F4E18(int a1);  /* 0x008f4e18 */
void __fastcall sub_608F4FB4(int *a1, _BYTE *a2);  /* 0x008f4fb4 */
void __fastcall sub_608F5144(int *a1, void *a2);  /* 0x008f5144 */
void __fastcall sub_608F5318(int *a1, void *a2);  /* 0x008f5318 */
int __fastcall sub_608F534C(int result, int a2, int a3, int a4);  /* 0x008f534c */
float __fastcall sub_608F5718(float result, int a2, int a3);  /* 0x008f5718 */
void __fastcall sub_608F5830(int *a1, int a2);  /* 0x008f5830 */
int __fastcall sub_608F5918(int result, _WORD *a2, int a3);  /* 0x008f5918 */
struct sead_IDisposer * __fastcall sead__IDisposer__dtor(struct sead_IDisposer *a1);  /* 0x008f5c94 */
int __fastcall sub_608F5D08(_DWORD *a1);  /* 0x008f5d08 */
int __fastcall sead__ExpHeap__create(int a1, int a2, _DWORD *a3, int a4, int a5, int a6);  /* 0x008f5d44 */
int __fastcall sead__ExpHeap__tryCreate(int a1, int a2, _DWORD *a3, int a4, int a5, int a6);  /* 0x008f5d68 */
int __fastcall sub_608F6050(int a1, int a2, int a3, int a4);  /* 0x008f6050 */
int __fastcall sub_608F61B0(int a1);  /* 0x008f61b0 */
int __fastcall sub_608F61B8(int a1);  /* 0x008f61b8 */
int __fastcall sub_608F61C8(int a1, int a2);  /* 0x008f61c8 */
int __fastcall sub_608F62C0(int a1, int a2, int a3);  /* 0x008f62c0 */
int __fastcall sub_608F6484(_DWORD *a1, unsigned int a2);  /* 0x008f6484 */
int __fastcall sub_608F64CC(int a1);  /* 0x008f64cc */
int __fastcall sub_608F65C0(int a1);  /* 0x008f65c0 */
int __fastcall sub_608F6664(int a1);  /* 0x008f6664 */
int __fastcall sub_608F6730(int a1);  /* 0x008f6730 */
int __fastcall sub_608F682C(int a1, unsigned int a2, int a3);  /* 0x008f682c */
int __fastcall sub_608F69BC(int a1, unsigned int a2);  /* 0x008f69bc */
int __fastcall sub_608F6BCC(_DWORD *a1, int a2, int a3);  /* 0x008f6bcc */
int __fastcall sub_608F6E48(_DWORD *a1, int a2, int a3);  /* 0x008f6e48 */
int __fastcall sub_608F6F58(int a1, unsigned int a2, int a3, int a4);  /* 0x008f6f58 */
int __fastcall sub_608F70B4(_DWORD *a1, unsigned int a2, int a3);  /* 0x008f70b4 */
int __fastcall sub_608F7208(_DWORD *a1, unsigned int a2, int a3, int a4);  /* 0x008f7208 */
int __fastcall sub_608F738C(int a1, int a2);  /* 0x008f738c */
unsigned int __fastcall sub_608F7394(int a1, unsigned int a2);  /* 0x008f7394 */
int __fastcall sub_608F764C(int a1, int a2, int a3);  /* 0x008f764c */
int __fastcall sub_608F77B4(_BYTE *a1, int a2, int a3);  /* 0x008f77b4 */
int __fastcall sub_608F788C(_BYTE *a1, int a2, int a3, int a4);  /* 0x008f788c */
int __fastcall sub_608F7AC8(int a1);  /* 0x008f7ac8 */
int __fastcall sub_608F7AD0(int a1);  /* 0x008f7ad0 */
int __fastcall sub_608F7AE0(int a1);  /* 0x008f7ae0 */
int __fastcall sub_608F7AE8(int a1);  /* 0x008f7ae8 */
int __fastcall sub_608F7B64(int a1, int a2);  /* 0x008f7b64 */
int __fastcall sub_608F7CE0(int a1, int a2);  /* 0x008f7ce0 */
int __fastcall sub_608F7CF0(int a1, int a2, int a3);  /* 0x008f7cf0 */
int __fastcall sub_608F839C(int result, char a2);  /* 0x008f839c */
int __fastcall sub_608F83A4(int a1);  /* 0x008f83a4 */
bool __fastcall sub_608F848C(int a1);  /* 0x008f848c */
bool __fastcall sub_608F84B8(int a1, void *a2);  /* 0x008f84b8 */
int __fastcall sub_608F862C(int a1, int a2);  /* 0x008f862c */
int __fastcall sub_608F86C8(int a1, _DWORD *a2);  /* 0x008f86c8 */
int __fastcall sub_608F87CC(_DWORD *a1);  /* 0x008f87cc */
int __fastcall sub_608F8808(int a1, int a2, _DWORD *a3, int a4, int a5, int a6);  /* 0x008f8808 */
int __fastcall sub_608F882C(int a1, int a2, _DWORD *a3, int a4, int a5, int a6);  /* 0x008f882c */
int __fastcall sub_608F89E8(int a1);  /* 0x008f89e8 */
int __fastcall sub_608F89F0(int a1);  /* 0x008f89f0 */
int __fastcall sub_608F8A44(int a1);  /* 0x008f8a44 */
int __fastcall sub_608F8A4C(_DWORD *a1, unsigned int a2);  /* 0x008f8a4c */
int __fastcall sub_608F8A94(int a1);  /* 0x008f8a94 */
int __fastcall sub_608F8B04(int a1);  /* 0x008f8b04 */
unsigned int __fastcall sub_608F8C58(int a1, unsigned int a2, int a3);  /* 0x008f8c58 */
int __fastcall sub_608F8E10(int a1, int *a2);  /* 0x008f8e10 */
int __fastcall sub_608F8EE4(int a1);  /* 0x008f8ee4 */
int __fastcall sub_608F8EEC(int a1);  /* 0x008f8eec */
int __fastcall sub_608F8EFC(int a1);  /* 0x008f8efc */
int __fastcall sub_608F8F44(int a1, int a2);  /* 0x008f8f44 */
int __fastcall sub_608F8FB4(int a1, int a2, int a3);  /* 0x008f8fb4 */
int __fastcall sub_608F9384(int result);  /* 0x008f9384 */
bool __fastcall sub_608F93B0(_DWORD *a1);  /* 0x008f93b0 */
bool __fastcall sub_608F9418(int a1, void *a2);  /* 0x008f9418 */
int __fastcall sead__Heap__Heap(int a1, int a2, struct sead_Heap *a3, int a4, int a5, int a6, int a7);  /* 0x008f9594 */
int __fastcall sub_608F9724(_DWORD *a1);  /* 0x008f9724 */
int __fastcall sub_608F9760(int a1);  /* 0x008f9760 */
int __fastcall sub_608F98A4(int a1, unsigned int a2, unsigned int a3);  /* 0x008f98a4 */
int __fastcall sead__Heap__appendDisposer_(int a1, int a2);  /* 0x008f9998 */
int __fastcall sead__Heap__removeDisposer_(int a1, int a2);  /* 0x008f99f0 */
int __fastcall sub_608F9A44(int a1, int a2);  /* 0x008f9a44 */
int __fastcall sub_608F9AEC(int a1, int a2);  /* 0x008f9aec */
int __fastcall sub_608F9B64(int a1, int a2, signed int a3);  /* 0x008f9b64 */
int __fastcall sub_608FA528(int a1, int a2);  /* 0x008fa528 */
bool __fastcall sub_608FA5A8(int a1, void *a2);  /* 0x008fa5a8 */
int __fastcall sub_608FA7D4(int *a1);  /* 0x008fa7d4 */
int __fastcall sead__HeapMgr__getCurrentHeap(int a1);  /* 0x008fac18 */
int __fastcall sead__HeapMgr__setCurrentHeap_(int a1, int a2);  /* 0x008fac4c */
int __fastcall sub_608FAC7C(int result);  /* 0x008fac7c */
int __fastcall sub_608FAE28(_DWORD *a1);  /* 0x008fae28 */
int __fastcall sub_608FAE64(int a1, int a2, int a3, int a4);  /* 0x008fae64 */
int __fastcall sub_608FB0D4(int a1);  /* 0x008fb0d4 */
bool __fastcall sub_608FB128(int a1, unsigned int a2);  /* 0x008fb128 */
int __fastcall sub_608FB154(int a1);  /* 0x008fb154 */
int __fastcall sub_608FB244(int a1);  /* 0x008fb244 */
int __fastcall sub_608FB368(int result, _DWORD *a2);  /* 0x008fb368 */
int __fastcall sub_608FB3FC(int a1);  /* 0x008fb3fc */
int __fastcall sub_608FB404(int a1);  /* 0x008fb404 */
int __fastcall sub_608FB40C(int a1);  /* 0x008fb40c */
int __fastcall sub_608FB414(int a1);  /* 0x008fb414 */
int __fastcall sub_608FB424(int a1);  /* 0x008fb424 */
int __fastcall sub_608FB438(int a1, int a2, int a3);  /* 0x008fb438 */
int __fastcall sub_608FB96C(int result);  /* 0x008fb96c */
bool __fastcall sub_608FB998(_DWORD *a1);  /* 0x008fb998 */
bool __fastcall sub_608FB9D4(int a1, void *a2);  /* 0x008fb9d4 */
int __fastcall sub_608FBB8C(unsigned int a1);  /* 0x008fbb8c */
int __fastcall sub_608FBBD0(unsigned int a1, char a2);  /* 0x008fbbd0 */
unsigned int __fastcall sub_608FBC34(unsigned int a1);  /* 0x008fbc34 */
unsigned int __fastcall sub_608FBC40(unsigned int a1);  /* 0x008fbc40 */
unsigned int __fastcall sub_608FBC4C(int a1, unsigned int a2);  /* 0x008fbc4c */
int __fastcall sub_608FBCE4(int result, _BYTE *a2, int a3);  /* 0x008fbce4 */
int __fastcall sub_608FC01C(struct sead_IDisposer *a1);  /* 0x008fc01c */
int __fastcall sub_608FC14C(int a1, int *a2, int a3);  /* 0x008fc14c */
int __fastcall sub_608FC5E0(int a1, _DWORD *a2, _DWORD *a3);  /* 0x008fc5e0 */
int __fastcall sub_608FC978(int *a1, _DWORD *a2);  /* 0x008fc978 */
int __fastcall sub_608FCA38(int result, int a2, int a3, int a4);  /* 0x008fca38 */
int __fastcall sub_608FCB98(int a1, int *a2);  /* 0x008fcb98 */
int __fastcall sub_608FD324(int *a1, _DWORD *a2);  /* 0x008fd324 */
int __fastcall sub_608FD64C(char *a1, int *a2, int a3, char *a4, int a5, _DWORD *a6, _DWORD *a7, bool *a8);  /* 0x008fd64c */
int __fastcall sead__SafeStringBase_char__operator_assign(int result, int a2);  /* 0x008fdb48 */
int __fastcall sub_608FDB54(int result, int a2);  /* 0x008fdb54 */
int __fastcall sub_608FDB60(int a1, _DWORD *a2);  /* 0x008fdb60 */
int __fastcall sub_608FDC20(int a1, _DWORD *a2);  /* 0x008fdc20 */
int __fastcall sub_608FDCDC(int a1, _DWORD *a2);  /* 0x008fdcdc */
int __fastcall sead__BufferedSafeStringBase_char__assureTerminationImpl_(int a1);  /* 0x008fdd9c */
int __fastcall sub_608FDDB4(int a1);  /* 0x008fddb4 */
int __fastcall sead__BufferedSafeStringBase_char__formatV(int a1);  /* 0x008fddcc */
int __fastcall sub_608FDE40(_DWORD *a1, int a2);  /* 0x008fde40 */
signed int __fastcall sub_608FDFB8(int a1, _BYTE *a2, signed int a3);  /* 0x008fdfb8 */
signed int __fastcall sub_608FE058(int *a1, _BYTE *a2, signed int a3);  /* 0x008fe058 */
int __fastcall sub_608FE0E4(int a1, int a2, char a3);  /* 0x008fe0e4 */
int __fastcall sub_608FE178(unsigned __int64 *a1, _DWORD *a2, int a3);  /* 0x008fe178 */
int __fastcall sub_608FE7E0(int *a1, _DWORD *a2, int a3);  /* 0x008fe7e0 */
int __fastcall sub_608FEE84(unsigned int *a1, _DWORD *a2, int a3);  /* 0x008fee84 */
int __fastcall sub_608FEE88(unsigned int *a1, _DWORD *a2, int a3);  /* 0x008fee88 */
int __fastcall sub_608FF3E8(int *a1, _DWORD *a2, int a3);  /* 0x008ff3e8 */
int __fastcall sub_608FF974(unsigned __int16 *a1, _DWORD *a2, int a3);  /* 0x008ff974 */
int __fastcall sub_608FFF00(_WORD *a1, _DWORD *a2, int a3);  /* 0x008fff00 */
int __fastcall sub_609004A0(unsigned __int8 *a1, _DWORD *a2, int a3);  /* 0x009004a0 */
int __fastcall sub_60900A24(_BYTE *a1, _DWORD *a2, int a3);  /* 0x00900a24 */
int __fastcall sub_60900FB4(float *a1, _DWORD *a2);  /* 0x00900fb4 */
int __fastcall sub_60900FB8(float *a1, _DWORD *a2);  /* 0x00900fb8 */
unsigned int __fastcall sub_60901464(_DWORD *a1, int a2);  /* 0x00901464 */
int __fastcall sub_60901490(_DWORD *a1);  /* 0x00901490 */
int __fastcall sead__StringUtil__vsnprintf(int a1, unsigned int a2);  /* 0x009014b8 */
unsigned int __fastcall sub_60901524(_WORD *a1, int a2, _BYTE *a3, int a4);  /* 0x00901524 */
unsigned int __fastcall sub_609017B8(int a1, int a2, int a3, int a4);  /* 0x009017b8 */
int __fastcall sub_60901A08(_WORD *a1, unsigned int a2, int a3, int a4);  /* 0x00901a08 */
unsigned int __fastcall sub_60901AE8(int a1, unsigned int a2, _WORD *a3, int a4);  /* 0x00901ae8 */
int __fastcall sub_60901BF4(int a1);  /* 0x00901bf4 */
int __fastcall sub_60901C30(int a1);  /* 0x00901c30 */
int __fastcall sub_60901C70(struct sead_IDisposer *a1);  /* 0x00901c70 */
bool __fastcall sub_6090200C(int a1, int a2);  /* 0x0090200c */
bool __fastcall sub_60902168(int a1, int a2);  /* 0x00902168 */
int __fastcall sub_60902378(struct sead_IDisposer *a1);  /* 0x00902378 */
int __fastcall sead__ResourceMgr__createInstance(struct sead_Heap *a1);  /* 0x0090240c */
int __fastcall sub_6090261C(int a1, _DWORD *a2, _DWORD *a3);  /* 0x0090261c */
int __fastcall sub_60902734(int a1, _DWORD *a2);  /* 0x00902734 */
int __fastcall sub_60902770(_DWORD *a1, int a2);  /* 0x00902770 */
int __fastcall sead_ResourceMgr_OpenFileRelated(int a1, _DWORD *a2);  /* 0x00902828 */
int __fastcall sub_609029B4(int a1, int a2);  /* 0x009029b4 */
int __fastcall sub_609029CC(int a1, _DWORD *a2);  /* 0x009029cc */
int __fastcall sub_60902A08(_DWORD *a1, _DWORD *a2, int a3, int a4);  /* 0x00902a08 */
int __fastcall sub_60902D24(int a1, _DWORD *a2);  /* 0x00902d24 */
int __fastcall sub_60902EC0(int a1);  /* 0x00902ec0 */
int __fastcall sub_60902EC4(int a1);  /* 0x00902ec4 */
int __fastcall sub_60902ED4(_DWORD *a1, unsigned __int8 *a2);  /* 0x00902ed4 */
int __fastcall sub_6090324C(int a1);  /* 0x0090324c */
unsigned int __fastcall sub_60903294(_DWORD *a1, int a2, unsigned int *a3);  /* 0x00903294 */
int __fastcall sub_60903350(_DWORD *a1, _DWORD *a2);  /* 0x00903350 */
int __fastcall sub_60903620(int a1, _DWORD *a2, unsigned __int8 **a3);  /* 0x00903620 */
unsigned int __fastcall sub_609036D0(_DWORD *a1, int *a2, int a3, unsigned int a4);  /* 0x009036d0 */
int __fastcall sub_60903B44(int a1, unsigned __int8 *a2, unsigned int a3);  /* 0x00903b44 */
int __fastcall sub_60903F5C(int a1, unsigned int a2, int a3);  /* 0x00903f5c */
int __fastcall sub_60904654(struct sead_IDisposer *a1);  /* 0x00904654 */
unsigned int __fastcall sub_609046AC(_DWORD *a1, int a2, unsigned int a3);  /* 0x009046ac */
int __fastcall sub_60904734(_DWORD **a1);  /* 0x00904734 */
bool __fastcall sub_60904760(int a1);  /* 0x00904760 */
unsigned int __fastcall sub_609047B0(int a1, int a2, unsigned int a3);  /* 0x009047b0 */
int __fastcall sub_60904844(int a1, int a2);  /* 0x00904844 */
int __fastcall sub_60904898(int a1);  /* 0x00904898 */
bool __fastcall sub_609048C0(int a1);  /* 0x009048c0 */
int __fastcall sub_609049C8(_DWORD *a1);  /* 0x009049c8 */
int __fastcall sub_60904AA4(int a1);  /* 0x00904aa4 */
int __fastcall sub_60904AF4(_DWORD *a1);  /* 0x00904af4 */
int __fastcall sub_60904B30(int a1);  /* 0x00904b30 */
int __fastcall sub_60904B94(int a1);  /* 0x00904b94 */
int __fastcall sub_60904BFC(int a1, int a2, int a3);  /* 0x00904bfc */
int __fastcall sub_60904C04(int a1, int a2, int a3);  /* 0x00904c04 */
int __fastcall sub_60904C0C(int a1, int a2);  /* 0x00904c0c */
int __fastcall sub_60904C2C(int a1);  /* 0x00904c2c */
bool __fastcall sub_60904C40(int a1);  /* 0x00904c40 */
int __fastcall sub_60904C68(int a1, int a2, int a3);  /* 0x00904c68 */
int __fastcall sub_60904D08(int a1);  /* 0x00904d08 */
int __fastcall sub_60904DB8(int a1);  /* 0x00904db8 */
int __fastcall sub_60904E6C(int a1, int a2, int a3);  /* 0x00904e6c */
int __fastcall sub_60904F0C(int a1);  /* 0x00904f0c */
int __fastcall sub_60904F8C(int a1);  /* 0x00904f8c */
size_t __fastcall sub_60905018(_DWORD *a1, void *a2, size_t a3);  /* 0x00905018 */
size_t __fastcall sub_60905064(_DWORD *a1, const void *a2, size_t a3);  /* 0x00905064 */
int __fastcall sub_609050A8(int a1, int a2);  /* 0x009050a8 */
int __fastcall sub_609051B4(_DWORD *a1);  /* 0x009051b4 */
int __fastcall sub_60905274(int result);  /* 0x00905274 */
bool __fastcall sub_60905280(int a1);  /* 0x00905280 */
int __fastcall sub_609052D4(int result, int a2);  /* 0x009052d4 */
int __fastcall sub_609052EC(int result, int a2);  /* 0x009052ec */
int __fastcall sub_609052F4(int result, int a2);  /* 0x009052f4 */
int __fastcall sub_609052FC(int a1, int a2);  /* 0x009052fc */
int __fastcall sub_60905318(int a1);  /* 0x00905318 */
int __fastcall sub_60905330(int a1);  /* 0x00905330 */
int __fastcall sub_60905340(int a1);  /* 0x00905340 */
int __fastcall sub_6090535C(int a1);  /* 0x0090535c */
int __fastcall sub_60905378(int a1);  /* 0x00905378 */
int __fastcall sub_60905394(int a1);  /* 0x00905394 */
int __fastcall sub_609053B0(int a1);  /* 0x009053b0 */
int __fastcall sub_609053CC(int a1, _BYTE *a2);  /* 0x009053cc */
int __fastcall sub_609053F8(int a1, _WORD *a2);  /* 0x009053f8 */
int __fastcall sub_60905424(int a1, int *a2);  /* 0x00905424 */
int __fastcall sub_60905450(int a1, _BYTE *a2);  /* 0x00905450 */
int __fastcall sub_6090547C(int a1, _WORD *a2);  /* 0x0090547c */
int __fastcall sub_609054A8(int a1, int *a2);  /* 0x009054a8 */
int __fastcall sub_609054D4(int a1, _DWORD *a2);  /* 0x009054d4 */
int __fastcall sub_60905500(int a1, int a2, int a3);  /* 0x00905500 */
int __fastcall sub_6090552C(int a1, int a2, int a3);  /* 0x0090552c */
int __fastcall sub_60905558(int a1, int a2);  /* 0x00905558 */
int __fastcall sub_60905584(int a1, int a2);  /* 0x00905584 */
int __fastcall sub_609055B0(int a1, int a2);  /* 0x009055b0 */
int __fastcall sub_609055DC(int a1, int a2);  /* 0x009055dc */
int __fastcall sub_60905608(int a1, int a2);  /* 0x00905608 */
int __fastcall sub_60905634(int a1, int a2);  /* 0x00905634 */
int __fastcall sub_60905660(int a1);  /* 0x00905660 */
int __fastcall sub_6090567C(int a1, int a2, int a3);  /* 0x0090567c */
int __fastcall sub_609056A8(int a1, int a2, int a3);  /* 0x009056a8 */
int __fastcall sub_609056D4(int a1, int a2);  /* 0x009056d4 */
int __fastcall sub_609056F0(int a1);  /* 0x009056f0 */
int __fastcall sub_60905760(int a1);  /* 0x00905760 */
int __fastcall sub_60905880(_DWORD *a1, int (__fastcall ***a2)(_DWORD, unsigned __int8 *, int));  /* 0x00905880 */
int __fastcall sub_60905918(_DWORD *a1, int (__fastcall ***a2)(_DWORD, unsigned __int8 *, int));  /* 0x00905918 */
int __fastcall sub_60905F90(_DWORD *a1, int (__fastcall ***a2)(_DWORD, unsigned __int8 *, int));  /* 0x00905f90 */
unsigned int __fastcall sub_60906028(_DWORD *a1, int (__fastcall ***a2)(_DWORD, unsigned __int8 *, int));  /* 0x00906028 */
int __fastcall sub_609060C0(_DWORD *a1, int (__fastcall ***a2)(_DWORD, unsigned __int8 *, int));  /* 0x009060c0 */
int __fastcall sub_60906164(_DWORD *a1, int (__fastcall ***a2)(_DWORD, unsigned __int8 *, int));  /* 0x00906164 */
int __fastcall sub_609061FC(_DWORD *a1, int (__fastcall ***a2)(_DWORD, unsigned __int8 *, int));  /* 0x009061fc */
int __fastcall sub_60906294(_DWORD *a1, int (__fastcall ***a2)(_DWORD, unsigned __int8 *, int));  /* 0x00906294 */
int __fastcall sub_6090632C(_DWORD *a1, int (__fastcall ***a2)(_DWORD, unsigned __int8 *, int));  /* 0x0090632c */
int __fastcall sub_609063D0(_DWORD *a1, int (__fastcall ***a2)(_DWORD, unsigned __int8 *, int));  /* 0x009063d0 */
int __fastcall sub_609064F4(_DWORD *a1, int (__fastcall ***a2)(_DWORD, unsigned __int8 *, int), int a3);  /* 0x009064f4 */
int __fastcall sub_609069F8(int a1, int a2, int a3, int a4);  /* 0x009069f8 */
int __fastcall sub_60906B40(int a1, int a2, int a3, int a4);  /* 0x00906b40 */
int __fastcall sub_60906C88(int a1, int a2, int a3, int a4);  /* 0x00906c88 */
int __fastcall sub_60906DD0(int a1, int a2, int a3, int a4, __int64 a5);  /* 0x00906dd0 */
int __fastcall sub_60906F18(int a1, int a2, int a3, int a4);  /* 0x00906f18 */
int __fastcall sub_60907060(int a1, int a2, int a3, int a4);  /* 0x00907060 */
int __fastcall sub_609071A8(int a1, int a2, int a3, int a4);  /* 0x009071a8 */
int __fastcall sub_609072F0(int a1, int a2, int a3, int a4, __int64 a5);  /* 0x009072f0 */
int __fastcall sub_60907438(int a1, int a2);  /* 0x00907438 */
int __fastcall sub_6090758C(int a1, int a2, int a3, int a4);  /* 0x0090758c */
int __fastcall sub_6090788C(int a1, int a2, _DWORD *a3, unsigned int a4);  /* 0x0090788c */
int __fastcall sub_60907B14(int a1, int a2, unsigned __int8 *a3, unsigned int a4);  /* 0x00907b14 */
int __fastcall sub_60907CE0(int a1, int a2, _DWORD *a3);  /* 0x00907ce0 */
int __fastcall sub_60907D94(int a1, int a2);  /* 0x00907d94 */
int __fastcall sub_60907DC8(_DWORD *a1, int (__fastcall ***a2)(_DWORD, unsigned __int8 *, int));  /* 0x00907dc8 */
int __fastcall sub_60907E00(int a1, int a2);  /* 0x00907e00 */
struct sead_IDisposer * __fastcall sead__CriticalSection__dtor(struct sead_IDisposer *a1);  /* 0x00907f58 */
int __fastcall sead__CriticalSection__lock(int a1);  /* 0x00907f8c */
int __fastcall sub_60907F94(int a1);  /* 0x00907f94 */
int __fastcall sead__CriticalSection__unlock(int a1);  /* 0x00907f9c */
int __fastcall sub_60908010(struct sead_IDisposer *a1);  /* 0x00908010 */
int __fastcall sub_60908044(int a1);  /* 0x00908044 */
int __fastcall sub_6090804C(int a1);  /* 0x0090804c */
int __fastcall sub_60908054(int a1);  /* 0x00908054 */
int __fastcall sub_609080C4(struct sead_IDisposer *a1);  /* 0x009080c4 */
int __fastcall sub_609080F8(int a1);  /* 0x009080f8 */
int __fastcall sub_60908100(int a1);  /* 0x00908100 */
int __fastcall sub_609082D0(_DWORD *a1);  /* 0x009082d0 */
int __fastcall sub_60908478(int a1, struct nn_os **a2);  /* 0x00908478 */
int __fastcall sub_609085BC(struct sead_IDisposer *a1);  /* 0x009085bc */
int __fastcall sub_609085CC(int a1, int a2);  /* 0x009085cc */
int __fastcall sub_609085F8(_DWORD *a1);  /* 0x009085f8 */
int __fastcall sub_6090863C(int a1);  /* 0x0090863c */
int __fastcall sub_60908668(int a1);  /* 0x00908668 */
int __fastcall sub_6090868C(int a1);  /* 0x0090868c */
int __fastcall sub_60908708(struct sead_IDisposer *a1);  /* 0x00908708 */
int __fastcall sead__ThreadMgr__createInstance(struct sead_Heap *a1);  /* 0x00908780 */
int __fastcall sub_60908808(struct nn_os *a1, int a2);  /* 0x00908808 */
int __fastcall sub_609088D0(struct sead_IDisposer *a1);  /* 0x009088d0 */
int __fastcall sub_60908984(struct sead_IDisposer *a1);  /* 0x00908984 */
int __fastcall sub_60908994(int a1, int a2);  /* 0x00908994 */
int __fastcall sub_609089AC(_DWORD *a1);  /* 0x009089ac */
int __fastcall sub_609089F8(int a1, int a2);  /* 0x009089f8 */
int __fastcall sub_60908A2C(int a1, int a2);  /* 0x00908a2c */
int __fastcall sub_60908A44(int result, int a2);  /* 0x00908a44 */
int __fastcall sub_60908A98(int a1);  /* 0x00908a98 */
int __fastcall sead__ThreadMgr__initialize(struct nn_os *a1, int a2);  /* 0x00908b14 */
int __fastcall sub_60908C18(_DWORD *a1);  /* 0x00908c18 */
int __fastcall sub_60908CA8(_DWORD *a1);  /* 0x00908ca8 */
bool __fastcall sub_60908DA0(int a1);  /* 0x00908da0 */
int __fastcall sub_60908DA4(int a1);  /* 0x00908da4 */
bool __fastcall sub_60908DF0(int a1, int a2);  /* 0x00908df0 */
int __fastcall sub_6090905C(int result, int a2, int a3, float *a4);  /* 0x0090905c */
unsigned int __fastcall sub_60909158(int a1, int a2, int a3);  /* 0x00909158 */
int __fastcall sub_60909348(int a1, int a2, float *a3, char a4);  /* 0x00909348 */
int __fastcall sub_609094B8(int a1, int a2);  /* 0x009094b8 */
int __fastcall sub_609094C4(int result, int a2, char a3, char a4);  /* 0x009094c4 */
int __fastcall sub_60909504(int result);  /* 0x00909504 */
bool __fastcall sub_60909518(int a1);  /* 0x00909518 */
int __fastcall sub_60909634(int result);  /* 0x00909634 */
int __fastcall sub_609097DC(int a1, int a2);  /* 0x009097dc */
int __fastcall sead__ControllerMgr__calc(_DWORD *a1);  /* 0x00909820 */
void __fastcall sead__ControllerMgr__dtor(int a1);  /* 0x0090989c */
bool __fastcall sead__ControllerMgr__checkDerivedRuntimeTypeInfo(int a1, void *a2);  /* 0x00909918 */
int __fastcall sub_60909B48(int a1, int a2, int a3);  /* 0x00909b48 */
void __fastcall sub_60909CAC(_DWORD *a1, signed int a2, unsigned __int8 *a3, int a4);  /* 0x00909cac */
int __fastcall sub_60909DC8(_DWORD *a1);  /* 0x00909dc8 */
int __fastcall sub_60909DE0(int a1);  /* 0x00909de0 */
int __fastcall sub_60909DF4(int a1);  /* 0x00909df4 */
int __fastcall sub_60909EC8(int result);  /* 0x00909ec8 */
int __fastcall sub_60909F60(_DWORD *a1);  /* 0x00909f60 */
int __fastcall sub_60909FC8(int *a1);  /* 0x00909fc8 */
void __fastcall sub_6090A030(_DWORD *a1, _DWORD *a2, int a3);  /* 0x0090a030 */
int __fastcall sub_6090A0B8(int result, char a2);  /* 0x0090a0b8 */
bool __fastcall sub_6090A0C4(int a1);  /* 0x0090a0c4 */
bool __fastcall sub_6090A0C8(int a1, int a2);  /* 0x0090a0c8 */
int __fastcall sub_6090A23C(int result);  /* 0x0090a23c */
int __fastcall sub_6090A2C4(_DWORD *a1, _DWORD *a2);  /* 0x0090a2c4 */
int __fastcall sub_6090A2DC(_DWORD *a1, _DWORD *a2);  /* 0x0090a2dc */
int __fastcall sub_6090A2F0(_DWORD *a1, _DWORD *a2);  /* 0x0090a2f0 */
int __fastcall sub_6090A420(float *a1, int a2, float *a3, int a4, int a5);  /* 0x0090a420 */
int __fastcall sub_6090A6D0(int a1, float *a2);  /* 0x0090a6d0 */
int __fastcall sub_6090A7D4(int a1, float *a2);  /* 0x0090a7d4 */
bool __fastcall sub_6090A888(int a1, int a2);  /* 0x0090a888 */
bool __fastcall sub_6090A980(int a1, int a2);  /* 0x0090a980 */
bool __fastcall sub_6090AAF4(int a1, void *a2);  /* 0x0090aaf4 */
bool __fastcall sub_6090AC94(int a1, void *a2);  /* 0x0090ac94 */
int __fastcall sub_6090AE7C(int a1, int a2);  /* 0x0090ae7c */
int __fastcall sub_6090AFF4(unsigned __int8 *a1, unsigned __int8 *a2);  /* 0x0090aff4 */
bool __fastcall sub_6090B200(float *a1, float *a2);  /* 0x0090b200 */
int __fastcall sub_6090B260(int a1);  /* 0x0090b260 */
int __fastcall sub_6090B2A4(struct sead_IDisposer *a1);  /* 0x0090b2a4 */
int __fastcall sub_6090B2B4(_DWORD *a1, int a2);  /* 0x0090b2b4 */
int __fastcall sub_6090B310(int a1);  /* 0x0090b310 */
int __fastcall sub_6090B32C(int a1);  /* 0x0090b32c */
int __fastcall sub_6090B348(int a1);  /* 0x0090b348 */
int __fastcall sub_6090B350(int result);  /* 0x0090b350 */
int __fastcall sub_6090B4B0(unsigned __int8 *a1, int a2);  /* 0x0090b4b0 */
int __fastcall sub_6090B8B4(unsigned __int8 *a1, int a2);  /* 0x0090b8b4 */
int __fastcall sub_6090BA14(int a1, int a2);  /* 0x0090ba14 */
int __fastcall sub_6090BAA4(int a1, int a2);  /* 0x0090baa4 */
int __fastcall sub_6090BC28(int a1, int a2);  /* 0x0090bc28 */
int __fastcall sub_6090BC48(unsigned __int8 *a1, int a2);  /* 0x0090bc48 */
int __fastcall sub_6090BD34(_QWORD *a1, int a2);  /* 0x0090bd34 */
int __fastcall sub_6090BD8C(_QWORD *a1, __int64 *a2);  /* 0x0090bd8c */
int __fastcall sub_6090BDC0(int a1);  /* 0x0090bdc0 */
int __fastcall sub_6090BDC8(int a1);  /* 0x0090bdc8 */
int __fastcall sub_6090BDD0(int a1);  /* 0x0090bdd0 */
int __fastcall sub_6090BDE0(int a1);  /* 0x0090bde0 */
int __fastcall sub_6090BE54(int a1);  /* 0x0090be54 */
int __fastcall sub_6090BED8(int a1, float *a2, float *a3);  /* 0x0090bed8 */
int __fastcall sub_6090C000(int a1, int a2, float *a3, int a4);  /* 0x0090c000 */
int __fastcall sub_6090C034(int result, int *a2, _QWORD *a3, int a4);  /* 0x0090c034 */
int __fastcall sub_6090C214(int result);  /* 0x0090c214 */
int __fastcall sub_6090C2F8(int a1);  /* 0x0090c2f8 */
int __fastcall sub_6090C344(int a1);  /* 0x0090c344 */
int __fastcall sub_6090C42C(int a1);  /* 0x0090c42c */
int __fastcall sub_6090C4AC(int a1, _DWORD *a2);  /* 0x0090c4ac */
int __fastcall sub_6090C4C0(float *a1, int a2);  /* 0x0090c4c0 */
int __fastcall sub_6090C6DC(int result);  /* 0x0090c6dc */
int __fastcall sub_6090C77C(int result);  /* 0x0090c77c */
int __fastcall sub_6090C7F8(int result, int a2);  /* 0x0090c7f8 */
int __fastcall sub_6090C954(int result, float *a2);  /* 0x0090c954 */
int __fastcall sub_6090C9A0(int result);  /* 0x0090c9a0 */
int __fastcall sub_6090C9B4(float *a1, int a2);  /* 0x0090c9b4 */
int __fastcall sub_6090CAD8(int result);  /* 0x0090cad8 */
int __fastcall sub_6090CB68(float *a1, int a2);  /* 0x0090cb68 */
int __fastcall sub_6090CCA4(int a1);  /* 0x0090cca4 */
int __fastcall sub_6090CD44(int result);  /* 0x0090cd44 */
int __fastcall sub_6090CE08(int a1);  /* 0x0090ce08 */
int __fastcall sub_6090CEB0(int result, _QWORD *a2, int a3);  /* 0x0090ceb0 */
int __fastcall sub_6090D028(int a1, _DWORD *a2);  /* 0x0090d028 */
int __fastcall sub_6090D03C(int a1);  /* 0x0090d03c */
int __fastcall sub_6090D340(int a1, float *a2, float *a3);  /* 0x0090d340 */
bool __fastcall sub_6090D410(int a1, int a2);  /* 0x0090d410 */
bool __fastcall sub_6090D508(int a1, int a2);  /* 0x0090d508 */
bool __fastcall sub_6090D684(int a1, int a2);  /* 0x0090d684 */
bool __fastcall sub_6090D800(int a1, int a2);  /* 0x0090d800 */
bool __fastcall sub_6090D97C(int a1, void *a2);  /* 0x0090d97c */
int __fastcall sub_6090DB24(int result, int a2, int a3);  /* 0x0090db24 */
int __fastcall sub_6090DBC8(int a1);  /* 0x0090dbc8 */
int __fastcall sub_6090DBDC(int a1);  /* 0x0090dbdc */
int __fastcall sub_6090DC24(int a1, int a2);  /* 0x0090dc24 */
int __fastcall sub_6090DD14(int a1, int a2, int a3, int a4, int a5, int a6, int a7);  /* 0x0090dd14 */
int __fastcall sub_6090E1F4(int *a1, int a2, int a3, int a4, int a5);  /* 0x0090e1f4 */
int __fastcall sub_6090E2D8(int *a1, int a2, int a3, int a4, int a5);  /* 0x0090e2d8 */
int __fastcall sub_6090E3D4(int result);  /* 0x0090e3d4 */
int __fastcall sub_6090E560(int a1, int a2, float *a3);  /* 0x0090e560 */
int __fastcall sub_6090E680(int result, float *a2, float *a3);  /* 0x0090e680 */
unsigned int __fastcall sub_6090E7FC(int a1, float *a2, float *a3);  /* 0x0090e7fc */
int __fastcall sub_6090E888(int a1, int a2, float *a3);  /* 0x0090e888 */
int __fastcall sub_6090E95C(int a1, int a2, float *a3);  /* 0x0090e95c */
struct sead_IDisposer * __fastcall sead__GlobalRandom__SingletonDisposer___dtor(struct sead_IDisposer *a1);  /* 0x0090eacc */
int __fastcall sead__GlobalRandom__createInstance(struct sead_Heap *a1);  /* 0x0090eb2c */
unsigned int __fastcall sead__Random__init(unsigned int *a1);  /* 0x0090ebb4 */
unsigned int __fastcall sead__Random__getU32(int *a1);  /* 0x0090ec50 */
int __fastcall sead__Random__getContext(_DWORD *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5);  /* 0x0090ec84 */
int __fastcall sub_6090F22C(float *a1, float *a2, float *a3);  /* 0x0090f22c */
int __fastcall sub_6090F2F0(float *a1, float *a2, __int64 a3);  /* 0x0090f2f0 */
int __fastcall sub_6090F474(float *a1, float *a2, __int64 a3);  /* 0x0090f474 */
int __fastcall sead__Base64__decode(int a1, unsigned int a2, unsigned __int8 *a3, unsigned int a4, unsigned int *a5);  /* 0x0090f88c */
int __fastcall sub_6090FB50(unsigned __int8 *a1, int a2);  /* 0x0090fb50 */
int __fastcall sub_6090FB78(unsigned int *a1, unsigned __int8 *a2, int a3);  /* 0x0090fb78 */
int __fastcall sub_6090FC70(_BYTE *a1);  /* 0x0090fc70 */
int __fastcall sub_6090FC94(unsigned int *a1, _BYTE *a2);  /* 0x0090fc94 */
int __fastcall sub_6090FD94(unsigned __int8 *a1, int a2);  /* 0x0090fd94 */
int __fastcall sub_6090FDBC(unsigned int *a1, unsigned __int8 *a2, int a3);  /* 0x0090fdbc */
int __fastcall sub_6090FEB4(_BYTE *a1);  /* 0x0090feb4 */
int __fastcall sub_6090FED8(unsigned int *a1, _BYTE *a2);  /* 0x0090fed8 */
int __fastcall sub_6091000C(int result);  /* 0x0091000c */
int __fastcall sub_60910068(int result, unsigned int a2);  /* 0x00910068 */
int __fastcall sub_60910148(struct sead_IDisposer *a1);  /* 0x00910148 */
int __fastcall sub_60910288(int a1);  /* 0x00910288 */
int __fastcall sub_609103C4(int a1);  /* 0x009103c4 */
int __fastcall sub_609103D4(int a1, _DWORD *a2, int a3);  /* 0x009103d4 */
int __fastcall sub_609105F4(int a1);  /* 0x009105f4 */
bool __fastcall sub_609106A0(int a1, int a2);  /* 0x009106a0 */
int __fastcall SoundSystem_createInstance_helper_helper_910804(int result, int a2);  /* 0x00910804 */
int __fastcall SoundSystem_createInstance_helper_helper_91080C(int result, int a2);  /* 0x0091080c */
int __fastcall SoundSystem_createInstance_helper_helper_910814(int result, int a2);  /* 0x00910814 */
int __fastcall SoundSystem_createInstance_helper_helper_91081C(int *a1, int a2);  /* 0x0091081c */
bool __fastcall sub_60910844(int a1, void *a2);  /* 0x00910844 */
int __fastcall sub_609109C0(int a1, unsigned int a2, int a3);  /* 0x009109c0 */
unsigned int __fastcall sub_60910B0C(int a1, int a2);  /* 0x00910b0c */
int __fastcall sub_60910B54(int a1);  /* 0x00910b54 */
int __fastcall sub_60910CEC(_DWORD *a1, int *a2);  /* 0x00910cec */
int __fastcall sub_60910F70(_QWORD *a1, _DWORD *a2);  /* 0x00910f70 */
unsigned __int64 __fastcall sub_60911208(unsigned __int64 *a1);  /* 0x00911208 */
bool __fastcall sub_609112F0(unsigned int a1);  /* 0x009112f0 */
int __fastcall sub_60911344(int *a1, int *a2, int *a3);  /* 0x00911344 */
unsigned int __fastcall sub_60911400(_DWORD *a1);  /* 0x00911400 */
int __fastcall sub_609115F4(int a1);  /* 0x009115f4 */
int __fastcall sub_60911618(int a1);  /* 0x00911618 */
int __fastcall sub_60911638(int a1, int a2);  /* 0x00911638 */
int __fastcall sub_6091187C(int a1, int a2, int a3);  /* 0x0091187c */
bool __fastcall sub_609118FC(int a1, int a2, int a3);  /* 0x009118fc */
int __fastcall sub_60911994(unsigned int a1);  /* 0x00911994 */
int __fastcall sub_609119AC(int result);  /* 0x009119ac */
int __fastcall sub_609119B8(int a1);  /* 0x009119b8 */
int __fastcall sub_609119F8(int a1, unsigned int a2);  /* 0x009119f8 */
int __fastcall sub_60911A10(int a1, int *a2, unsigned int a3);  /* 0x00911a10 */
int __fastcall sub_60911ACC(_DWORD *a1);  /* 0x00911acc */
int __fastcall sub_60911BFC(int a1, int a2);  /* 0x00911bfc */
int __fastcall sub_60911C8C(int a1);  /* 0x00911c8c */
bool __fastcall sub_60911CA0(int a1);  /* 0x00911ca0 */
int __fastcall sub_60911CD0(_DWORD *a1);  /* 0x00911cd0 */
int __fastcall sub_60911DBC(int a1, int a2);  /* 0x00911dbc */
int __fastcall sub_60911E00(int a1);  /* 0x00911e00 */
bool __fastcall sub_60911E14(int a1);  /* 0x00911e14 */
int __fastcall sub_60911EA4(struct sead_IDisposer *a1);  /* 0x00911ea4 */
bool __fastcall sub_60911EB4(int a1, void *a2);  /* 0x00911eb4 */
int __fastcall sub_609120F4(_DWORD *a1);  /* 0x009120f4 */
bool __fastcall sub_60912124(int a1, int a2);  /* 0x00912124 */
int __fastcall sub_6091221C(int *a1, int a2);  /* 0x0091221c */
int __fastcall sub_609122C0(int a1);  /* 0x009122c0 */
int __fastcall sub_609122C8(int a1);  /* 0x009122c8 */
int __fastcall sub_609122D0(int result);  /* 0x009122d0 */
unsigned int __fastcall decompressYaz0(_BYTE *a1, int a2);  /* 0x00912314 */
int __fastcall sub_609123B0(_BYTE *a1);  /* 0x009123b0 */
int __fastcall sub_609123D0(int a1, void (__fastcall ***a2)(_DWORD, unsigned __int8 *, int), int a3);  /* 0x009123d0 */
int __fastcall sub_60912434(int a1, void (__fastcall ***a2)(_DWORD, unsigned __int16 *, int), int a3);  /* 0x00912434 */
int __fastcall sub_6091249C(int a1, void (__fastcall ***a2)(_DWORD, int *, int), int a3);  /* 0x0091249c */
int __fastcall sub_60912504(int a1, void (__fastcall ***a2)(_DWORD, int *, int), int a3);  /* 0x00912504 */
int __fastcall sub_60912570(int a1, void (__fastcall ***a2)(_DWORD, unsigned __int8 *, int), int a3);  /* 0x00912570 */
int __fastcall sub_609125D8(int a1, void (__fastcall ***a2)(_DWORD, unsigned __int16 *, int), int a3);  /* 0x009125d8 */
int __fastcall sub_60912644(int a1, void (__fastcall ***a2)(_DWORD, int *, int), int a3);  /* 0x00912644 */
int __fastcall sub_609126AC(int a1, void (__fastcall ***a2)(_DWORD, int *, int), int a3);  /* 0x009126ac */
int __fastcall sub_60912718(int a1, void (__fastcall ***a2)(_DWORD, int *, int), int a3);  /* 0x00912718 */
int __fastcall sub_609127FC(int a1, void (__fastcall ***a2)(_DWORD, _DWORD, int), _DWORD *a3, unsigned int a4);  /* 0x009127fc */
int __fastcall sub_6091290C(int a1, int (__fastcall ***a2)(_DWORD, int, int), int a3, int a4);  /* 0x0091290c */
int __fastcall sub_60912924(int a1, int a2, int a3, int a4);  /* 0x00912924 */
int __fastcall sub_60912980(int a1, int a2, int a3, int a4);  /* 0x00912980 */
int __fastcall sub_609129E0(int a1, int a2, int a3, int a4);  /* 0x009129e0 */
int __fastcall sub_60912A40(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x00912a40 */
int __fastcall sub_60912AA4(int a1, int a2, int a3, unsigned __int8 a4);  /* 0x00912aa4 */
int __fastcall sub_60912B00(int a1, int a2, int a3, unsigned __int16 a4);  /* 0x00912b00 */
int __fastcall sub_60912B60(int a1, int a2, int a3, int a4);  /* 0x00912b60 */
int __fastcall sub_60912BC0(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x00912bc0 */
int __fastcall sub_60912C24(int a1, int a2, int a3);  /* 0x00912c24 */
int __fastcall sub_60912C84(int a1, int a2, int a3, unsigned int a4);  /* 0x00912c84 */
int __fastcall sub_60912CD4(int a1, int a2, _DWORD *a3, unsigned int a4);  /* 0x00912cd4 */
int __fastcall sub_60912DD4(int a1, int a2, int a3, int a4);  /* 0x00912dd4 */
int __fastcall sub_60912DEC(int a1, int a2);  /* 0x00912dec */
int __fastcall sub_60912DFC(int a1, int a2, int a3);  /* 0x00912dfc */
int __fastcall sub_60912E1C(int result);  /* 0x00912e1c */
int __fastcall sub_60912E2C(int result, signed int a2, int a3);  /* 0x00912e2c */
int __fastcall sub_60912E7C(int a1);  /* 0x00912e7c */
int __fastcall sub_60912EA4(int a1, int a2, int a3);  /* 0x00912ea4 */
int __fastcall sub_60912EC0(int a1, int a2);  /* 0x00912ec0 */
int __fastcall sub_60912F10(int a1, int a2, int a3);  /* 0x00912f10 */
int __fastcall sub_60912F48(int result, int a2);  /* 0x00912f48 */
int __fastcall sub_60912FB4(int a1);  /* 0x00912fb4 */
int __fastcall sub_6091302C(int a1);  /* 0x0091302c */
int __fastcall sub_60913164(int a1);  /* 0x00913164 */
int __fastcall sub_609131DC(int a1);  /* 0x009131dc */
int __fastcall sub_60913258(int *a1, int a2);  /* 0x00913258 */
int __fastcall sub_60913268(int *a1);  /* 0x00913268 */
int __fastcall sub_60913368(int a1, int a2);  /* 0x00913368 */
int __fastcall sub_609133D0(unsigned __int8 *a1, unsigned int a2);  /* 0x009133d0 */
int __fastcall sub_60913434(int a1);  /* 0x00913434 */
int __fastcall sub_60913448(int a1, int a2, int a3);  /* 0x00913448 */
int __fastcall sub_60913488(int result, int a2, int a3);  /* 0x00913488 */
int __fastcall sub_60913508(int a1);  /* 0x00913508 */
int __fastcall sub_60913564(int result, int a2);  /* 0x00913564 */
int __fastcall sub_60913598(int a1);  /* 0x00913598 */
int __fastcall sub_6091361C(int a1);  /* 0x0091361c */
int __fastcall sub_60913678(int a1);  /* 0x00913678 */
int __fastcall sub_60913700(int result, int a2);  /* 0x00913700 */
int __fastcall sub_60913708(int result, int a2);  /* 0x00913708 */
bool __fastcall sub_6091377C(int a1, int a2, char a3);  /* 0x0091377c */
int __fastcall sub_609137C4(int result, char a2);  /* 0x009137c4 */
int __fastcall sub_6091380C(int result, char a2);  /* 0x0091380c */
int __fastcall sub_60913814(int a1);  /* 0x00913814 */
bool __fastcall sub_60913860(int a1, void *a2);  /* 0x00913860 */
int __fastcall sub_609139D4(int a1, int a2);  /* 0x009139d4 */
int __fastcall sub_60913ABC(int a1);  /* 0x00913abc */
int __fastcall sub_60913AE8(int result, int a2);  /* 0x00913ae8 */
int __fastcall sub_60913B04(int *a1, int a2);  /* 0x00913b04 */
int __fastcall sub_60913B5C(int *a1, int a2);  /* 0x00913b5c */
int __fastcall sub_60913BB4(int result);  /* 0x00913bb4 */
int __fastcall sub_60913BEC(int result);  /* 0x00913bec */
int __fastcall sub_60913C18(int a1);  /* 0x00913c18 */
int __fastcall sub_60913CF0(int a1);  /* 0x00913cf0 */
int __fastcall sub_60913D78(int a1);  /* 0x00913d78 */
int __fastcall sub_60913D88(int a1, int a2, int CurrentHeap, int a4, int a5);  /* 0x00913d88 */
int __fastcall sub_60913E24(int a1, int a2, int a3, int a4, int a5);  /* 0x00913e24 */
int __fastcall sub_60913EA4(int result, int a2, int a3, int a4, int a5, int a6);  /* 0x00913ea4 */
int __fastcall sub_60913F34(_DWORD *a1, int a2);  /* 0x00913f34 */
int __fastcall sub_60913F94(_DWORD *a1, int a2, int a3, int a4);  /* 0x00913f94 */
int __fastcall sub_60913FB4(int a1);  /* 0x00913fb4 */
int __fastcall sub_60913FE4(_DWORD *a1, int a2);  /* 0x00913fe4 */
int __fastcall sub_6091491C(_DWORD *a1);  /* 0x0091491c */
int __fastcall sub_60914960(char a1);  /* 0x00914960 */
int __fastcall sub_609149E4(int result);  /* 0x009149e4 */
unsigned int __fastcall sub_609149F0(int a1, int a2, int a3, int *a4, int a5, int a6);  /* 0x009149f0 */
int __fastcall sub_60914B2C(int a1);  /* 0x00914b2c */
int __fastcall sub_60914D38(int *a1, int a2);  /* 0x00914d38 */
int __fastcall sub_60914E10(_DWORD *a1, _DWORD *a2);  /* 0x00914e10 */
int __fastcall sub_60915150(_DWORD *a1);  /* 0x00915150 */
int __fastcall sub_60915160(int a1);  /* 0x00915160 */
int __fastcall sub_60915458(struct sead_IDisposer *a1);  /* 0x00915458 */
int __fastcall sub_609154D0(struct sead_Heap *a1);  /* 0x009154d0 */
int __fastcall sub_609155C4(_DWORD *a1);  /* 0x009155c4 */
int __fastcall sub_60915600(int a1, int a2);  /* 0x00915600 */
int __fastcall sub_60915628(int a1, int a2, struct sead_Heap *a3, unsigned int a4, int a5, char a6);  /* 0x00915628 */
unsigned int __fastcall sub_609159A8(int a1);  /* 0x009159a8 */
unsigned int __fastcall sub_609159B8(int a1);  /* 0x009159b8 */
int __fastcall sub_609159DC(int a1, int a2);  /* 0x009159dc */
int __fastcall sub_60915A78(struct sead_IDisposer *a1);  /* 0x00915a78 */
int __fastcall sub_60915B1C(int a1, int a2);  /* 0x00915b1c */
int __fastcall sub_60915B3C(int a1);  /* 0x00915b3c */
int __fastcall sub_60915B7C(int a1, int a2);  /* 0x00915b7c */
int __fastcall sub_60915B94(int a1, int a2, int a3);  /* 0x00915b94 */
int __fastcall sub_60915BB8(struct sead_Heap *a1);  /* 0x00915bb8 */
int __fastcall sub_60915C40(int a1);  /* 0x00915c40 */
int __fastcall sub_60915F04(_DWORD *a1);  /* 0x00915f04 */
int __fastcall sub_60915FBC(_DWORD *a1);  /* 0x00915fbc */
int __fastcall sub_60915FCC(int a1, int a2);  /* 0x00915fcc */
int __fastcall sub_60916308(int a1, int a2);  /* 0x00916308 */
int __fastcall sub_60916540(int a1, unsigned __int16 *a2);  /* 0x00916540 */
int __fastcall sub_60916550(int a1, unsigned int a2, const void *a3, __int16 a4);  /* 0x00916550 */
int __fastcall sub_60916658(int a1, int a2);  /* 0x00916658 */
int __fastcall sub_60916668(int a1, int a2);  /* 0x00916668 */
bool __fastcall sub_609166D8(int a1, int a2, int a3);  /* 0x009166d8 */
int __fastcall sub_60916740(int a1, int a2, int a3);  /* 0x00916740 */
bool __fastcall sub_60916A58(int a1, int a2);  /* 0x00916a58 */
int __fastcall sub_60916A94(int a1, int a2);  /* 0x00916a94 */
int __fastcall sub_60916AF8(int a1, int a2);  /* 0x00916af8 */
int __fastcall sub_60916BA8(int a1, int a2, int a3);  /* 0x00916ba8 */
int __fastcall sub_60916E38(int a1);  /* 0x00916e38 */
int __fastcall sub_60916E4C(int a1, int a2, int a3, int a4);  /* 0x00916e4c */
int __fastcall sub_60916E94(int a1, int a2);  /* 0x00916e94 */
int __fastcall sub_60916FEC(_DWORD *a1, int *a2, int a3);  /* 0x00916fec */
unsigned int __fastcall sub_60917168(int a1, unsigned int *a2);  /* 0x00917168 */
int __fastcall sub_6091718C(int a1, int a2, int a3);  /* 0x0091718c */
int __fastcall sub_609171A8(int result, int a2, int a3, int a4, char *a5, char a6);  /* 0x009171a8 */
int __fastcall sub_609172E0(int result, int a2, int a3, int a4, char *a5, char a6);  /* 0x009172e0 */
int __fastcall sub_609175B8(int a1);  /* 0x009175b8 */
int __fastcall sub_609175E4(int a1);  /* 0x009175e4 */
int __fastcall sub_60917654(int a1);  /* 0x00917654 */
int __fastcall sub_609176C0(int a1, int a2);  /* 0x009176c0 */
int __fastcall sub_60917754(int a1, int a2);  /* 0x00917754 */
int __fastcall sub_60917844(int a1, const void *a2, int a3, int a4, int a5);  /* 0x00917844 */
int __fastcall sub_60917974(int a1, const void *a2, int a3);  /* 0x00917974 */
int __fastcall sub_60917ACC(int result);  /* 0x00917acc */
int __fastcall sub_60917AE4(int a1);  /* 0x00917ae4 */
bool __fastcall sub_60917B1C(int a1, int a2);  /* 0x00917b1c */
__int64 __fastcall sub_60917BC8(int a1, int a2);  /* 0x00917bc8 */
__int64 __fastcall sub_60917C30(__int64 *a1);  /* 0x00917c30 */
int __fastcall sub_60917C68(int a1);  /* 0x00917c68 */
int __fastcall sub_60917F34(int a1);  /* 0x00917f34 */
int __fastcall sub_6091805C(int a1);  /* 0x0091805c */
int __fastcall sub_60918238(int a1, int a2);  /* 0x00918238 */
int __fastcall sub_60918268(int a1);  /* 0x00918268 */
int __fastcall sub_60918390(int a1);  /* 0x00918390 */
int __fastcall sub_609183B4(int a1, int a2);  /* 0x009183b4 */
int __fastcall sub_609184C4(int a1, int a2);  /* 0x009184c4 */
int __fastcall sub_609184EC(int a1, int a2);  /* 0x009184ec */
int __fastcall sub_6091853C(_DWORD *a1, int a2, int a3);  /* 0x0091853c */
int __fastcall sub_60918688(int a1, int a2);  /* 0x00918688 */
int __fastcall sub_60918698(int a1);  /* 0x00918698 */
int __fastcall sub_609186A0(int a1, int a2, _DWORD *a3);  /* 0x009186a0 */
int __fastcall sub_609186C8(int a1, int a2);  /* 0x009186c8 */
int __fastcall sub_609186E8(int a1, int a2);  /* 0x009186e8 */
int __fastcall sub_60918700(int a1, int a2);  /* 0x00918700 */
int __fastcall sub_60918718(int a1, int a2);  /* 0x00918718 */
int __fastcall sub_60918770(int a1, int a2);  /* 0x00918770 */
int __fastcall sub_60918798(int a1, int a2);  /* 0x00918798 */
int __fastcall sub_609187FC(int result, unsigned __int8 *a2, int a3, int a4);  /* 0x009187fc */
int __fastcall sub_60918934(int a1, char *a2, _DWORD *a3, _DWORD *a4);  /* 0x00918934 */
int __fastcall sub_609189A0(_DWORD *a1, int a2, int a3, _DWORD *a4);  /* 0x009189a0 */
int __fastcall sub_60918B10(int *a1, int a2, int a3, int a4);  /* 0x00918b10 */
int __fastcall sub_60918B70(_DWORD *a1, int a2, _DWORD *a3, _DWORD *a4);  /* 0x00918b70 */
int __fastcall sub_60918CE0(int result);  /* 0x00918ce0 */
int __fastcall sub_60918D40(int result, unsigned int a2, int a3);  /* 0x00918d40 */
int __fastcall sub_60918D80(int result);  /* 0x00918d80 */
int __fastcall sub_60918DB8(int result);  /* 0x00918db8 */
__int64 __fastcall sub_60918E08(__int64 result, int a2);  /* 0x00918e08 */
int __fastcall sub_60918E4C(int a1, int a2);  /* 0x00918e4c */
int __fastcall sub_60918EB8(int a1);  /* 0x00918eb8 */
int __fastcall sub_60918FC4(int a1);  /* 0x00918fc4 */
int __fastcall sub_60919084(int a1, int *a2, int a3, int a4);  /* 0x00919084 */
int __fastcall sub_609191BC(int a1, int a2);  /* 0x009191bc */
int __fastcall sub_609194C8(int a1);  /* 0x009194c8 */
unsigned int __fastcall sub_60919544(int a1);  /* 0x00919544 */
int __fastcall sub_609195BC(int a1);  /* 0x009195bc */
int __fastcall sub_60919748(int a1);  /* 0x00919748 */
int __fastcall sub_60919C10(int a1);  /* 0x00919c10 */
int __fastcall sub_60919CF0(_DWORD *a1);  /* 0x00919cf0 */
int __fastcall sub_60919D48(_DWORD *a1, _DWORD *a2, int a3, int a4);  /* 0x00919d48 */
int __fastcall sub_60919ED8(int a1, int *a2);  /* 0x00919ed8 */
signed int __fastcall sub_60919F98(int a1, int a2);  /* 0x00919f98 */
int __fastcall sub_6091A004(_DWORD *a1, int a2);  /* 0x0091a004 */
int __fastcall sub_6091A0C8(int a1, int a2, int a3);  /* 0x0091a0c8 */
int __fastcall sub_6091A330(int a1, int (__fastcall ***a2)(_DWORD, void *));  /* 0x0091a330 */
int __fastcall sub_6091A624(int a1, int (__fastcall ***a2)(_DWORD, void *), unsigned int a3, int a4, int a5);  /* 0x0091a624 */
int __fastcall sub_6091A764(int result, int a2, int a3, unsigned int a4, int a5, int a6);  /* 0x0091a764 */
int __fastcall sub_6091A804(int a1, int a2, int a3, unsigned int a4, int a5, int a6, int a7);  /* 0x0091a804 */
bool __fastcall sub_6091AA04(int a1, int a2);  /* 0x0091aa04 */
int __fastcall sub_6091AC94(int result);  /* 0x0091ac94 */
int __fastcall sub_6091ACB0(_DWORD *a1);  /* 0x0091acb0 */
int __fastcall sub_6091AD4C(int a1);  /* 0x0091ad4c */
int __fastcall sub_6091ADA0(int a1);  /* 0x0091ada0 */
int __fastcall sub_6091ADF4(int a1, int a2);  /* 0x0091adf4 */
int __fastcall sub_6091AE0C(int a1, int a2);  /* 0x0091ae0c */
int __fastcall sub_6091AE30(int result, int *a2, unsigned int a3);  /* 0x0091ae30 */
int __fastcall sub_6091AEA0(int **a1);  /* 0x0091aea0 */
int __fastcall sub_6091B360(int a1);  /* 0x0091b360 */
int __fastcall sub_6091B384(int a1, int a2);  /* 0x0091b384 */
int __fastcall sub_6091B3D0(int *a1);  /* 0x0091b3d0 */
int __fastcall sub_6091B420(int result, int a2, char a3);  /* 0x0091b420 */
int __fastcall sub_6091B890(_DWORD *a1, int a2, int a3, int a4);  /* 0x0091b890 */
int __fastcall sub_6091B8EC(int a1, int a2);  /* 0x0091b8ec */
int __fastcall sub_6091B9AC(int a1, int a2);  /* 0x0091b9ac */
int __fastcall sub_6091BA6C(int a1, int a2);  /* 0x0091ba6c */
int __fastcall sub_6091BB2C(int a1, int a2);  /* 0x0091bb2c */
int __fastcall sub_6091BC18(int a1, int a2);  /* 0x0091bc18 */
int __fastcall sub_6091BCD8(int a1);  /* 0x0091bcd8 */
int __fastcall sub_6091BD9C(int a1);  /* 0x0091bd9c */
int __fastcall sub_6091BE6C(_DWORD *a1);  /* 0x0091be6c */
int __fastcall sub_6091C0D4(int a1);  /* 0x0091c0d4 */
int __fastcall sub_6091C784(int a1, int a2, int a3);  /* 0x0091c784 */
int __fastcall sub_6091CB20(_DWORD *a1, unsigned int a2, int a3);  /* 0x0091cb20 */
int __fastcall sub_6091CB90(_DWORD *a1);  /* 0x0091cb90 */
int __fastcall sub_6091CD98(_DWORD *a1, unsigned int a2, int a3);  /* 0x0091cd98 */
int __fastcall sub_6091CFA0(_DWORD *a1, unsigned int a2, int a3);  /* 0x0091cfa0 */
int __fastcall sub_6091D010(_DWORD *a1);  /* 0x0091d010 */
int __fastcall sub_6091D218(_DWORD *a1, unsigned int a2, int a3);  /* 0x0091d218 */
int __fastcall sub_6091D420(_DWORD *a1, unsigned int a2, int a3);  /* 0x0091d420 */
int __fastcall sub_6091D490(_DWORD *a1);  /* 0x0091d490 */
int __fastcall sub_6091D698(_DWORD *a1, unsigned int a2, int a3);  /* 0x0091d698 */
int __fastcall sub_6091D708(int result);  /* 0x0091d708 */
int __fastcall sub_6091D910(int a1, int a2);  /* 0x0091d910 */
int __fastcall sub_6091D95C(int a1);  /* 0x0091d95c */
int __fastcall sub_6091D9B0(int a1);  /* 0x0091d9b0 */
int __fastcall sub_6091DD8C(int a1, int a2);  /* 0x0091dd8c */
int __fastcall sub_6091DF38(int a1, int a2);  /* 0x0091df38 */
int __fastcall sub_6091E038(int a1);  /* 0x0091e038 */
int __fastcall sub_6091E0BC(int a1, int a2);  /* 0x0091e0bc */
int __fastcall sub_6091E108(int a1, int a2, int a3, int a4, int a5);  /* 0x0091e108 */
int __fastcall sub_6091E13C(int a1, int a2, int a3, int a4, __int64 a5);  /* 0x0091e13c */
bool __fastcall sub_6091E1AC(int a1, int a2);  /* 0x0091e1ac */
int __fastcall sub_6091E2F0(_DWORD *a1);  /* 0x0091e2f0 */
int __fastcall sub_6091E300(int a1, int a2, int a3, int a4, int a5);  /* 0x0091e300 */
int __fastcall sub_6091E758(int a1);  /* 0x0091e758 */
int __fastcall sub_6091E7FC(struct sead_IDisposer *a1);  /* 0x0091e7fc */
int __fastcall sub_6091E838(int a1, int a2, int a3, char a4, int a5);  /* 0x0091e838 */
int __fastcall sub_6091EB84(int a1, int a2, int a3);  /* 0x0091eb84 */
int __fastcall sub_6091F0FC(_DWORD *a1);  /* 0x0091f0fc */
int __fastcall sub_6091F23C(int a1, int a2, unsigned __int16 a3, int a4, int a5);  /* 0x0091f23c */
int __fastcall sub_6091F558(int a1);  /* 0x0091f558 */
int __fastcall sub_6091F63C(int a1, int a2);  /* 0x0091f63c */
int __fastcall sub_6091F7B8(int a1);  /* 0x0091f7b8 */
int __fastcall sub_6091F8A0(int a1);  /* 0x0091f8a0 */
int __fastcall sub_6091F9A0(int a1, _DWORD *a2);  /* 0x0091f9a0 */
int __fastcall sub_6091FAF4(_DWORD *a1);  /* 0x0091faf4 */
int __fastcall sub_6091FBE4(struct sead_IDisposer *a1);  /* 0x0091fbe4 */
int __fastcall sub_6091FC74(signed int *a1, signed int a2, int a3, int a4);  /* 0x0091fc74 */
int __fastcall sub_6091FD58(int a1);  /* 0x0091fd58 */
int __fastcall sub_6091FDB0(int a1, int a2, __int16 a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10);  /* 0x0091fdb0 */
int __fastcall sub_6091FE5C(int a1);  /* 0x0091fe5c */
int __fastcall sub_60920064(int result, int a2, int a3);  /* 0x00920064 */
int __fastcall sub_609200A0(int a1);  /* 0x009200a0 */
int __fastcall sub_609200B8(int a1);  /* 0x009200b8 */
bool __fastcall sub_609200E0(int a1);  /* 0x009200e0 */
int __fastcall sub_609200FC(int *a1);  /* 0x009200fc */
int __fastcall sub_60920168(int *a1);  /* 0x00920168 */
int __fastcall sub_609201D4(unsigned __int16 *a1, int a2, unsigned __int16 *a3, int a4, int a5);  /* 0x009201d4 */
int __fastcall sub_60920328(unsigned __int16 *a1, int a2, unsigned __int16 *a3, int a4, int a5, int a6, int a7);  /* 0x00920328 */
int __fastcall sub_6092048C(int a1, int a2);  /* 0x0092048c */
int __fastcall sub_609204B0(int a1, int a2);  /* 0x009204b0 */
int __fastcall sub_60920600(int a1, _DWORD *a2);  /* 0x00920600 */
int __fastcall sub_60920648(int a1, int a2, int *a3, int a4);  /* 0x00920648 */
int __fastcall sub_609208DC(int *a1, int *a2, char a3);  /* 0x009208dc */
int __fastcall sub_60920AC4(int *a1, unsigned __int8 a2, unsigned __int8 a3, int a4, int a5);  /* 0x00920ac4 */
int __fastcall sub_60920BBC(int *a1);  /* 0x00920bbc */
int __fastcall sub_60920CA8(int a1, int a2);  /* 0x00920ca8 */
int __fastcall sub_60920CD4(int a1, int a2);  /* 0x00920cd4 */
int __fastcall sub_60920CDC(int a1, int a2);  /* 0x00920cdc */
int __fastcall sub_60920CE4(int a1, __int16 a2, int a3, int a4, int a5, int a6);  /* 0x00920ce4 */
int __fastcall sub_60920D90(int a1);  /* 0x00920d90 */
bool __fastcall sub_60920DAC(int a1);  /* 0x00920dac */
bool __fastcall sub_60920DC0(int a1);  /* 0x00920dc0 */
int __fastcall sub_60920DE8(int a1, int a2);  /* 0x00920de8 */
int __fastcall sub_60920E00(int a1);  /* 0x00920e00 */
int __fastcall sub_60920E04(int a1);  /* 0x00920e04 */
int __fastcall sub_60920F30(int a1, int a2);  /* 0x00920f30 */
int __fastcall sub_60920FDC(int *a1, int a2, char *a3);  /* 0x00920fdc */
int __fastcall sub_609210C4(int result, char a2);  /* 0x009210c4 */
int __fastcall sub_60921340(int result);  /* 0x00921340 */
int __fastcall sub_609213B8(int a1);  /* 0x009213b8 */
int __fastcall sub_6092147C(_DWORD *a1);  /* 0x0092147c */
int __fastcall sub_609214AC(int a1, unsigned int a2, int a3);  /* 0x009214ac */
int __fastcall sub_60921528(int a1, int a2);  /* 0x00921528 */
int __fastcall sub_60921540(int a1, int a2, int a3, unsigned int a4, unsigned int a5);  /* 0x00921540 */
int __fastcall sub_6092166C(int result, _DWORD *a2);  /* 0x0092166c */
int __fastcall sub_60921694(_DWORD *a1, int a2, int a3);  /* 0x00921694 */
int __fastcall sub_609216EC(int a1, int a2, int a3, int a4);  /* 0x009216ec */
int __fastcall sub_609217FC(int a1, int *a2, int a3, int a4);  /* 0x009217fc */
int __fastcall sub_60921988(_DWORD **a1, int a2, int a3, _DWORD *a4, int a5, int a6);  /* 0x00921988 */
void __fastcall sub_60921A90(_DWORD *a1, int a2);  /* 0x00921a90 */
int __fastcall sub_60921AC8(int a1, int a2, int a3, int a4, int a5, int a6, int a7);  /* 0x00921ac8 */
int __fastcall sub_60921AE8(int result);  /* 0x00921ae8 */
int __fastcall sub_60921BD4(int a1);  /* 0x00921bd4 */
int __fastcall sub_60921C8C(int a1);  /* 0x00921c8c */
int __fastcall sub_60921D30(int a1, signed int a2, int a3);  /* 0x00921d30 */
int __fastcall sub_60921DF0(int result, int a2, int a3, char a4);  /* 0x00921df0 */
int __fastcall sub_60921EB8(_DWORD *a1, int *a2);  /* 0x00921eb8 */
int __fastcall sub_60921F90(int a1);  /* 0x00921f90 */
int __fastcall sub_60922278(int a1, int a2);  /* 0x00922278 */
int __fastcall sub_60922344(int result);  /* 0x00922344 */
int __fastcall sub_60922478(int a1);  /* 0x00922478 */
int __fastcall sub_6092251C(int a1);  /* 0x0092251c */
int __fastcall sub_609225B8(int a1, _DWORD *a2, unsigned int a3, unsigned int a4);  /* 0x009225b8 */
int __fastcall sub_60922730(_DWORD *a1, int a2, int a3);  /* 0x00922730 */
int __fastcall sub_60922768(int a1, unsigned int a2, int a3, int a4, char a5);  /* 0x00922768 */
int __fastcall sub_60922794(_DWORD *a1, int *a2, int a3);  /* 0x00922794 */
int __fastcall sub_60922864(int a1);  /* 0x00922864 */
int __fastcall sub_60922EA8(int *a1);  /* 0x00922ea8 */
int __fastcall sub_60922F00(_DWORD *a1);  /* 0x00922f00 */
int __fastcall sub_60922F54(int *a1);  /* 0x00922f54 */
int __fastcall sub_60922FA4(int a1, __int16 a2, int a3, int a4, int a5);  /* 0x00922fa4 */
int __fastcall sub_60923050(int a1);  /* 0x00923050 */
int __fastcall sub_6092318C(int result, int a2);  /* 0x0092318c */
int __fastcall sub_609231B8(_DWORD *a1, _DWORD *a2);  /* 0x009231b8 */
int __fastcall sub_60923290(int result, int a2);  /* 0x00923290 */
int __fastcall sub_609232C4(_BYTE *a1);  /* 0x009232c4 */
int __fastcall sub_609232EC(int a1, int a2, int a3, int a4, int a5, int a6, int a7);  /* 0x009232ec */
int __fastcall sub_60923330(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x00923330 */
int __fastcall sub_60923360(int a1, int a2, unsigned int a3);  /* 0x00923360 */
int __fastcall sub_60923574(int a1, int a2);  /* 0x00923574 */
int __fastcall sub_60923594(int a1);  /* 0x00923594 */
int __fastcall sub_609235C4(_DWORD *a1);  /* 0x009235c4 */
int __fastcall sub_609235F0(int a1);  /* 0x009235f0 */
int __fastcall sub_60923610(int a1);  /* 0x00923610 */
int __fastcall sub_60923630(int a1);  /* 0x00923630 */
int __fastcall sub_60923638(int a1);  /* 0x00923638 */
int __fastcall sub_60923648(int a1);  /* 0x00923648 */
int __fastcall sub_60923898(int a1);  /* 0x00923898 */
bool __fastcall sub_609238B0(int a1, _DWORD *a2);  /* 0x009238b0 */
bool __fastcall sub_609238C8(int a1, int a2);  /* 0x009238c8 */
int __fastcall sub_609239D4(int a1);  /* 0x009239d4 */
int __fastcall sub_609239DC(int a1);  /* 0x009239dc */
int __fastcall sub_609239E4(int a1);  /* 0x009239e4 */
int __fastcall sub_609239F0(int a1);  /* 0x009239f0 */
int __fastcall sub_609239FC(int a1);  /* 0x009239fc */
int __fastcall sub_60923A08(int a1);  /* 0x00923a08 */
int __fastcall sub_60923A14(int a1);  /* 0x00923a14 */
int __fastcall sub_60923A1C(int a1);  /* 0x00923a1c */
int __fastcall sub_60923A28(int a1);  /* 0x00923a28 */
int __fastcall sub_60923A60(int a1);  /* 0x00923a60 */
int __fastcall sub_60923A68(int a1);  /* 0x00923a68 */
int __fastcall sub_60923A70(int a1);  /* 0x00923a70 */
int __fastcall sub_60923A78(int a1);  /* 0x00923a78 */
int __fastcall sub_60923A88(int a1);  /* 0x00923a88 */
int __fastcall sub_60923A94(int a1, int a2, int a3);  /* 0x00923a94 */
int __fastcall sub_60923B60(int result, unsigned int a2, int a3);  /* 0x00923b60 */
int __fastcall sub_60923C1C(_DWORD *a1);  /* 0x00923c1c */
void __fastcall sub_60923C70(int a1, int a2, int a3);  /* 0x00923c70 */
int __fastcall sub_60923D84(_DWORD *a1);  /* 0x00923d84 */
int __fastcall sub_60923DC8(_DWORD *a1, unsigned int a2, _DWORD *a3);  /* 0x00923dc8 */
int __fastcall sub_60923F24(int a1, int a2);  /* 0x00923f24 */
int __fastcall sub_60924160(int *a1, _DWORD *a2);  /* 0x00924160 */
int __fastcall sub_60924480(_DWORD *a1);  /* 0x00924480 */
int __fastcall sub_60924490(int a1);  /* 0x00924490 */
int __fastcall sub_609244A4(int a1);  /* 0x009244a4 */
int __fastcall sub_609244C0(int a1, int a2, int a3);  /* 0x009244c0 */
int __fastcall sub_609249E4(int a1, unsigned int a2);  /* 0x009249e4 */
int __fastcall sub_60924B2C(int result);  /* 0x00924b2c */
int __fastcall sub_60924B48(_DWORD *a1);  /* 0x00924b48 */
int __fastcall sub_60924BFC(_DWORD *a1);  /* 0x00924bfc */
int __fastcall sub_60924DC8(int a1);  /* 0x00924dc8 */
int __fastcall sub_60924DD0(_DWORD *a1, int a2, int a3, unsigned int a4);  /* 0x00924dd0 */
int __fastcall sub_60924F70(_DWORD *a1, int a2, unsigned int a3, int a4, int a5, int a6, int a7, int a8);  /* 0x00924f70 */
int __fastcall sub_609252C8(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x009252c8 */
int __fastcall sub_60925308(int a1, int a2, unsigned int a3);  /* 0x00925308 */
int __fastcall sub_609253B8(_DWORD *a1, int a2, int a3);  /* 0x009253b8 */
int __fastcall sub_60925434(_DWORD *a1, int a2, char a3, unsigned int a4);  /* 0x00925434 */
int __fastcall sub_609257D4(int a1, int a2, int a3);  /* 0x009257d4 */
int __fastcall sub_60925854(int a1, int a2, int a3, unsigned int a4, float a5);  /* 0x00925854 */
int __fastcall sub_6092616C(_DWORD *a1, int a2);  /* 0x0092616c */
int __fastcall sub_60926178(int a1, int a2);  /* 0x00926178 */
int __fastcall sub_60926188(int a1);  /* 0x00926188 */
int __fastcall sub_60926190(_DWORD *a1, int a2, unsigned int a3);  /* 0x00926190 */
int __fastcall sub_609261BC(int a1, unsigned int a2);  /* 0x009261bc */
int __fastcall sub_609261D4(int a1, int a2, unsigned int a3);  /* 0x009261d4 */
int __fastcall sub_60926200(int a1, unsigned int a2);  /* 0x00926200 */
int __fastcall sub_60926218(int a1);  /* 0x00926218 */
bool __fastcall sub_60926238(int a1, _DWORD *a2);  /* 0x00926238 */
int __fastcall sub_60926258(int a1, int a2);  /* 0x00926258 */
int __fastcall sub_60926268(int a1, int a2);  /* 0x00926268 */
int __fastcall sub_609265E0(_DWORD *a1);  /* 0x009265e0 */
int __fastcall sub_609265F0(int a1);  /* 0x009265f0 */
int __fastcall sub_60926604(_DWORD *a1, int a2, int a3);  /* 0x00926604 */
int __fastcall sub_60926F90(_DWORD *a1, int a2);  /* 0x00926f90 */
int __fastcall sub_6092715C(int a1);  /* 0x0092715c */
int __fastcall sub_60927280(int a1);  /* 0x00927280 */
int __fastcall sub_609273A4(int result);  /* 0x009273a4 */
int __fastcall sub_609276B4(_DWORD *a1, int a2);  /* 0x009276b4 */
int __fastcall sub_60927900(_DWORD *a1);  /* 0x00927900 */
int __fastcall sub_60927968(signed int *a1, signed int a2, int a3, int a4);  /* 0x00927968 */
int __fastcall sub_60927D8C(int a1, int a2, int a3, int a4, unsigned int a5);  /* 0x00927d8c */
int __fastcall sub_60927DFC(_DWORD *a1);  /* 0x00927dfc */
bool __fastcall sub_60927E4C(int a1, int a2);  /* 0x00927e4c */
int __fastcall sub_60928024(int *a1);  /* 0x00928024 */
int __fastcall sub_609280A0(int a1);  /* 0x009280a0 */
int __fastcall sub_609280A8(int a1);  /* 0x009280a8 */
int __fastcall sub_609280B0(int a1);  /* 0x009280b0 */
int __fastcall sub_609280B8(int a1);  /* 0x009280b8 */
int __fastcall sub_609280C8(int a1);  /* 0x009280c8 */
int __fastcall sub_609281D4(int a1);  /* 0x009281d4 */
int __fastcall sub_609281DC(int a1);  /* 0x009281dc */
int __fastcall sub_609281E4(int a1);  /* 0x009281e4 */
int __fastcall sub_609281EC(int a1);  /* 0x009281ec */
int __fastcall sub_609281FC(int a1);  /* 0x009281fc */
int __fastcall sub_609282E4(int a1);  /* 0x009282e4 */
int __fastcall sub_609282EC(int a1);  /* 0x009282ec */
int __fastcall sub_609282F4(int a1);  /* 0x009282f4 */
int __fastcall sub_609282FC(int a1);  /* 0x009282fc */
int __fastcall sub_6092830C(int a1);  /* 0x0092830c */
int __fastcall sub_609287BC(_DWORD *a1);  /* 0x009287bc */
int __fastcall sub_6092882C(int *a1);  /* 0x0092882c */
int __fastcall sub_6092889C(int result, signed int a2, int a3);  /* 0x0092889c */
int __fastcall sub_609288F0(int result, float *a2, unsigned int a3);  /* 0x009288f0 */
int __fastcall sub_609289E8(int a1);  /* 0x009289e8 */
int __fastcall sub_60928FC4(_DWORD *a1);  /* 0x00928fc4 */
int __fastcall sub_60929058(int *a1);  /* 0x00929058 */
int __fastcall sub_609290EC(int result, signed int a2, int a3);  /* 0x009290ec */
int __fastcall sub_60929170(int a1, int a2, float *a3, int a4, int a5);  /* 0x00929170 */
unsigned int __fastcall sub_6092928C(int a1, float *a2, unsigned int a3);  /* 0x0092928c */
int __fastcall sub_609299C0(_DWORD *a1);  /* 0x009299c0 */
int __fastcall sub_60929A38(int *a1);  /* 0x00929a38 */
int __fastcall sub_60929AB0(int result, signed int a2, int a3);  /* 0x00929ab0 */
unsigned int __fastcall sub_60929B04(int a1, float *a2, unsigned int a3);  /* 0x00929b04 */
int __fastcall sub_60929B94(int a1, int a2, int a3, int a4, int a5);  /* 0x00929b94 */
int __fastcall sub_60929BC4(int a1);  /* 0x00929bc4 */
int __fastcall sub_6092A1C8(_DWORD *a1);  /* 0x0092a1c8 */
int __fastcall sub_6092A268(int *a1);  /* 0x0092a268 */
int __fastcall sub_6092A308(int result, signed int a2, int a3);  /* 0x0092a308 */
int __fastcall sub_6092A38C(int result, float *a2, unsigned int a3);  /* 0x0092a38c */
int __fastcall sub_6092A544(_DWORD *a1);  /* 0x0092a544 */
bool __fastcall sub_6092A588(int a1, int a2);  /* 0x0092a588 */
int __fastcall sub_6092A754(int *a1);  /* 0x0092a754 */
bool __fastcall sub_6092A7A0(int a1, int a2);  /* 0x0092a7a0 */
bool __fastcall sub_6092A92C(int a1, int a2);  /* 0x0092a92c */
bool __fastcall sub_6092AAB8(int a1, void *a2);  /* 0x0092aab8 */
bool __fastcall sub_6092AC44(int a1, void *a2);  /* 0x0092ac44 */
int __fastcall sub_6092AF74(int a1);  /* 0x0092af74 */
int __fastcall sub_6092AFAC(int a1);  /* 0x0092afac */
int __fastcall sub_6092B1C0(int a1, int a2);  /* 0x0092b1c0 */
int __fastcall sub_6092B640(int a1);  /* 0x0092b640 */
int __fastcall sub_6092B744(int result);  /* 0x0092b744 */
int __fastcall sub_6092BA74(int a1);  /* 0x0092ba74 */
int __fastcall sub_6092BB98(int a1, int a2, int a3, int a4);  /* 0x0092bb98 */
int __fastcall sub_6092BD28(_DWORD *a1);  /* 0x0092bd28 */
bool __fastcall sub_6092BD88(int a1, int a2);  /* 0x0092bd88 */
int __fastcall sub_6092BF70(int *a1);  /* 0x0092bf70 */
int __fastcall sub_6092BFFC(int a1);  /* 0x0092bffc */
int __fastcall sub_6092C004(int a1);  /* 0x0092c004 */
int __fastcall sub_6092C00C(int a1);  /* 0x0092c00c */
int __fastcall sub_6092C014(int a1);  /* 0x0092c014 */
int __fastcall sub_6092C024(int a1);  /* 0x0092c024 */
int __fastcall sub_6092C0C8(int a1);  /* 0x0092c0c8 */
int __fastcall sub_6092C164(int a1);  /* 0x0092c164 */
int __fastcall sub_6092C454(int a1, int a2);  /* 0x0092c454 */
int __fastcall sub_6092CE60(_DWORD *a1, const char **a2, int a3);  /* 0x0092ce60 */
int __fastcall sub_6092D040(int a1);  /* 0x0092d040 */
int __fastcall sub_6092D260(_DWORD *a1);  /* 0x0092d260 */
int __fastcall sub_6092D404(_DWORD *a1);  /* 0x0092d404 */
int __fastcall sub_6092D6B4(int a1);  /* 0x0092d6b4 */
int __fastcall sub_6092D6BC(_DWORD *a1);  /* 0x0092d6bc */
int __fastcall sub_6092D6CC(int a1);  /* 0x0092d6cc */
int __fastcall sub_6092D6E0(int a1, int a2, int a3);  /* 0x0092d6e0 */
int __fastcall sub_6092D8A4(_DWORD *a1, int a2, int a3, int a4);  /* 0x0092d8a4 */
int __fastcall sub_6092DC18(int result);  /* 0x0092dc18 */
int __fastcall sub_6092E254(int a1, int a2);  /* 0x0092e254 */
int __fastcall sub_6092E6CC(int a1, int a2);  /* 0x0092e6cc */
int __fastcall sub_6092EC04(int a1, int a2, unsigned int a3, int a4);  /* 0x0092ec04 */
int __fastcall sub_6092EC24(int a1, int a2, unsigned int a3, int a4, int *a5, char a6);  /* 0x0092ec24 */
unsigned int __fastcall sub_6092F064(int a1, int a2, int a3);  /* 0x0092f064 */
unsigned int __fastcall sub_6092F4F4(int a1, int a2, int a3);  /* 0x0092f4f4 */
int __fastcall sub_6092FA78(int a1, int a2, int a3);  /* 0x0092fa78 */
int __fastcall sub_6092FF48(int a1, int a2, int a3);  /* 0x0092ff48 */
int __fastcall sub_60930034(int a1, int a2, int a3, int a4, int a5);  /* 0x00930034 */
int __fastcall sub_60930428(int a1, int a2, int a3, _DWORD *a4);  /* 0x00930428 */
int __fastcall sub_60930DEC(int a1, int a2, int a3, int a4);  /* 0x00930dec */
int __fastcall sub_60930EEC(int result, int a2);  /* 0x00930eec */
int __fastcall sub_60930F00(int a1, int *a2);  /* 0x00930f00 */
int __fastcall sub_60930F9C(int a1, _DWORD *a2);  /* 0x00930f9c */
int __fastcall sub_60931064(int a1, _DWORD *a2);  /* 0x00931064 */
int __fastcall sub_6093112C(int a1);  /* 0x0093112c */
int __fastcall sub_609311F8(int a1);  /* 0x009311f8 */
int __fastcall sub_609312C4(_DWORD *a1, int a2);  /* 0x009312c4 */
int __fastcall sub_609315B4(_DWORD *a1);  /* 0x009315b4 */
int __fastcall sub_60931680(_DWORD *a1);  /* 0x00931680 */
int __fastcall sub_60931698(_DWORD *a1);  /* 0x00931698 */
int __fastcall sub_609316BC(_DWORD *a1);  /* 0x009316bc */
int __fastcall sub_609316D4(_DWORD *a1);  /* 0x009316d4 */
int __fastcall sub_6093171C(int a1);  /* 0x0093171c */
int __fastcall sub_60931724(int a1);  /* 0x00931724 */
int __fastcall sub_6093172C(int a1);  /* 0x0093172c */
int __fastcall sub_60931734(int a1);  /* 0x00931734 */
int __fastcall sub_60931744(int a1);  /* 0x00931744 */
int __fastcall sub_60931814(int a1);  /* 0x00931814 */
int __fastcall sub_6093181C(int a1);  /* 0x0093181c */
int __fastcall sub_60931824(int a1);  /* 0x00931824 */
int __fastcall sub_6093182C(int a1);  /* 0x0093182c */
int __fastcall sub_6093183C(int a1);  /* 0x0093183c */
int __fastcall sub_609318FC(int a1, int a2, int a3, int a4);  /* 0x009318fc */
int __fastcall sub_609324DC(_DWORD *a1);  /* 0x009324dc */
int __fastcall sub_609324F0(_DWORD *a1, int *a2, int a3);  /* 0x009324f0 */
int __fastcall sub_60933D90(int a1, int a2);  /* 0x00933d90 */
int __fastcall sub_60933FC4(_DWORD *a1, int a2, unsigned int a3, int a4);  /* 0x00933fc4 */
int __fastcall sub_6093426C(int a1, unsigned int a2, unsigned int a3, __int16 a4, float *a5);  /* 0x0093426c */
int __fastcall sub_609343C4(int a1, int a2, unsigned int a3, int *a4);  /* 0x009343c4 */
int __fastcall sub_60934560(_DWORD *a1, int a2, unsigned int a3, int a4, int a5, int a6, int a7, char a8, int a9);  /* 0x00934560 */
int __fastcall sub_60935CC4(int a1, int a2, unsigned int a3, int a4);  /* 0x00935cc4 */
int __fastcall sub_60936138(int a1, int a2, unsigned int a3, int *a4);  /* 0x00936138 */
int __fastcall sub_60938B50(int a1);  /* 0x00938b50 */
int __fastcall sub_60938B64(int a1);  /* 0x00938b64 */
int __fastcall sub_60938B6C(int a1);  /* 0x00938b6c */
int __fastcall sub_60938B74(int a1);  /* 0x00938b74 */
int __fastcall sub_60938B84(int a1);  /* 0x00938b84 */
int __fastcall sub_60938DB4(int result);  /* 0x00938db4 */
unsigned int __fastcall sub_60938E68(int a1, signed int a2, int a3, int a4);  /* 0x00938e68 */
int __fastcall sub_60938F1C(int a1, unsigned int a2);  /* 0x00938f1c */
int __fastcall sub_60939070(struct sead_IDisposer *a1);  /* 0x00939070 */
int __fastcall sub_609390E8(struct sead_Heap *a1);  /* 0x009390e8 */
int __fastcall sub_60939170(int a1);  /* 0x00939170 */
int __fastcall sub_60939314(_DWORD *a1);  /* 0x00939314 */
int __fastcall sub_609393AC(_DWORD *a1, int a2);  /* 0x009393ac */
int __fastcall sub_609394E8(int a1);  /* 0x009394e8 */
int __fastcall sub_60939660(int a1);  /* 0x00939660 */
int __fastcall sub_60939758(int a1);  /* 0x00939758 */
int __fastcall sub_609397B4(int a1);  /* 0x009397b4 */
int __fastcall sub_6093981C(int a1, float *a2, int a3, int a4, int a5, int a6, int a7);  /* 0x0093981c */
int __fastcall sub_60939898(int a1, int32x2_t *a2, float *a3, int a4, int a5, int a6, int a7);  /* 0x00939898 */
int __fastcall sub_6093A72C(int a1, float *a2, float *a3, int a4, int a5, int a6, int a7);  /* 0x0093a72c */
int __fastcall sub_6093ABE8(int a1, float *a2, int a3, int a4, int a5, int a6, int a7);  /* 0x0093abe8 */
int __fastcall sub_6093AC5C(int a1, int a2, int a3);  /* 0x0093ac5c */
int __fastcall sub_6093B3C0(int a1, float *a2, int a3, int a4, int a5, float32x2_t *a6, float32x2_t *a7, int a8);  /* 0x0093b3c0 */
int __fastcall sub_6093BB54(int a1, int a2, int a3, float32x2_t *a4, float32x2_t *a5);  /* 0x0093bb54 */
int __fastcall sub_6093BCB8(int a1, int a2, int a3, float *a4, int a5);  /* 0x0093bcb8 */
int __fastcall sub_6093C014(int a1, int a2, int a3);  /* 0x0093c014 */
int __fastcall sub_6093C9EC(int a1, int a2, float a3, float *a4, int a5, float32x2_t *a6);  /* 0x0093c9ec */
int __fastcall sub_6093D8D8(struct sead_IDisposer *a1);  /* 0x0093d8d8 */
int __fastcall sub_6093D950(struct sead_Heap *a1);  /* 0x0093d950 */
int __fastcall sub_6093DC38(_DWORD *a1);  /* 0x0093dc38 */
int __fastcall sub_6093DC48(_DWORD *a1, signed int a2, int a3, int a4, int a5, int a6);  /* 0x0093dc48 */
int __fastcall sub_6093E338(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8);  /* 0x0093e338 */
int __fastcall sub_6093E884(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, char a11);  /* 0x0093e884 */
int __fastcall sub_6093E948(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, char a11);  /* 0x0093e948 */
int __fastcall sub_6093EA20(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, char a11);  /* 0x0093ea20 */
int __fastcall sub_6093EA98(int a1, int a2);  /* 0x0093ea98 */
int __fastcall sub_6093EB98(int a1, __int16 a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, char a10);  /* 0x0093eb98 */
int __fastcall sub_6093EE30(_DWORD *a1, int *a2);  /* 0x0093ee30 */
int __fastcall sub_6093EFC8(int a1, int a2, int a3, int a4, __int16 a5);  /* 0x0093efc8 */
int __fastcall sub_6093F0A4(int a1, int a2);  /* 0x0093f0a4 */
int __fastcall sub_6093F214(int a1, int a2, int a3, int a4, int a5);  /* 0x0093f214 */
int __fastcall sub_6093F284(int a1, int a2, int a3, float *a4, float *a5, float *a6);  /* 0x0093f284 */
int __fastcall sub_6093F664(int a1, int a2);  /* 0x0093f664 */
int __fastcall sub_6093F840(int a1, int a2, float *a3, float *a4, float *a5);  /* 0x0093f840 */
int __fastcall sub_6093F8F4(int a1, int a2, float *a3, int a4, int a5, float *a6, float *a7);  /* 0x0093f8f4 */
int __fastcall sub_6093FA14(int a1, int a2, float *a3, float *a4, float *a5);  /* 0x0093fa14 */
int __fastcall sub_6093FAA8(int a1, int a2, float *a3, int a4, int a5, float *a6, float *a7);  /* 0x0093faa8 */
int __fastcall sub_6093FB68(int a1, int a2, float *a3, int a4, int a5, char a6, float *a7);  /* 0x0093fb68 */
int __fastcall sub_6093FC18(int a1, int a2, float *a3, int a4, int a5, float *a6, float *a7);  /* 0x0093fc18 */
int __fastcall sub_6093FD38(int a1, int a2, float *a3, int a4, int a5, int a6, float *a7, float *a8);  /* 0x0093fd38 */
int __fastcall sub_6094083C(int result, int a2);  /* 0x0094083c */
int __fastcall sub_609408A0(_DWORD *a1);  /* 0x009408a0 */
int __fastcall sub_60940BC4(int result);  /* 0x00940bc4 */
int __fastcall sub_60940CB8(_DWORD *a1);  /* 0x00940cb8 */
void __fastcall sub_60940D4C(int a1, int a2, int a3, int a4);  /* 0x00940d4c */
int __fastcall sub_60940E3C(int a1);  /* 0x00940e3c */
signed int __fastcall sub_60940EA4(_DWORD *a1);  /* 0x00940ea4 */
int __fastcall sub_60941074(int a1, int a2);  /* 0x00941074 */
int __fastcall sub_60941198(int a1, _DWORD *a2);  /* 0x00941198 */
int __fastcall sub_60941370(int a1, int a2);  /* 0x00941370 */
int __fastcall sub_60941410(_DWORD *a1);  /* 0x00941410 */
int __fastcall sub_6094179C(int a1, int a2);  /* 0x0094179c */
int __fastcall sub_609417B0(int a1);  /* 0x009417b0 */
int __fastcall sub_609417CC(signed int *a1, signed int a2, int a3, int a4);  /* 0x009417cc */
int __fastcall sub_60941A08(int a1, _DWORD *a2, int a3, int a4, int a5);  /* 0x00941a08 */
int __fastcall sub_60941AB4(_BYTE **a1);  /* 0x00941ab4 */
int __fastcall sub_60941B5C(int a1, int a2, int a3);  /* 0x00941b5c */
int __fastcall sub_60942358(int a1, int a2);  /* 0x00942358 */
int __fastcall sub_609424C4(int a1, int a2);  /* 0x009424c4 */
int __fastcall sub_6094291C(int a1, int a2, int a3);  /* 0x0094291c */
bool __fastcall sub_60942C28(int a1, _DWORD *a2, int a3);  /* 0x00942c28 */
int __fastcall sub_60943228(_DWORD *a1, int a2, int a3);  /* 0x00943228 */
unsigned int __fastcall sub_6094352C(int a1);  /* 0x0094352c */
int __fastcall sub_60943560(int a1);  /* 0x00943560 */
int __fastcall sub_6094368C(_DWORD *a1, _DWORD *a2);  /* 0x0094368c */
int __fastcall sub_609436F8(int a1, int a2);  /* 0x009436f8 */
int __fastcall sub_60943810(_DWORD *a1, _DWORD *a2, _DWORD *a3);  /* 0x00943810 */
int __fastcall sub_60943C84(int a1);  /* 0x00943c84 */
int __fastcall sub_60943C90(float *a1, float *a2, float *a3);  /* 0x00943c90 */
int __fastcall sub_60943DE4(int a1, int a2);  /* 0x00943de4 */
int __fastcall sub_60943E40(_BYTE *a1, _BYTE *a2);  /* 0x00943e40 */
unsigned int __fastcall sub_60943ED4(float *a1, int a2, int a3);  /* 0x00943ed4 */
int __fastcall sub_6094428C(int result, int a2);  /* 0x0094428c */
int __fastcall sub_60944BD0(int a1);  /* 0x00944bd0 */
int __fastcall sub_60944BD8(int a1);  /* 0x00944bd8 */
int __fastcall sub_60944BE0(int a1);  /* 0x00944be0 */
int __fastcall sub_60944BE8(int a1);  /* 0x00944be8 */
int __fastcall sub_60944BF8(int a1, int a2, int a3);  /* 0x00944bf8 */
int __fastcall sub_60944C74(int a1, int a2, int a3);  /* 0x00944c74 */
int __fastcall sub_60944CBC(int a1);  /* 0x00944cbc */
int __fastcall sub_60944CD8(int a1);  /* 0x00944cd8 */
int __fastcall sub_60944CF4(int a1, _DWORD *a2, int a3, int a4);  /* 0x00944cf4 */
int __fastcall sub_60944E4C(int a1, int a2);  /* 0x00944e4c */
int __fastcall sub_60944EA8(_BYTE *a1, _BYTE *a2);  /* 0x00944ea8 */
unsigned int __fastcall sub_60944F6C(float *a1, int a2, int a3);  /* 0x00944f6c */
int __fastcall sub_60945324(int result, int a2);  /* 0x00945324 */
int __fastcall sub_60945CE0(int a1);  /* 0x00945ce0 */
int __fastcall sub_60945CE8(int a1);  /* 0x00945ce8 */
int __fastcall sub_60945CF0(int a1);  /* 0x00945cf0 */
int __fastcall sub_60945CF8(int a1);  /* 0x00945cf8 */
int __fastcall sub_60945D08(int a1, int a2, int a3);  /* 0x00945d08 */
int __fastcall sub_60945F00(int a1, int a2, int a3);  /* 0x00945f00 */
int __fastcall sub_60945FD4(int a1);  /* 0x00945fd4 */
int __fastcall sub_60946030(int a1);  /* 0x00946030 */
int __fastcall sub_60946078(int a1);  /* 0x00946078 */
int __fastcall sub_60946080(int a1);  /* 0x00946080 */
int __fastcall sub_60946088(int a1);  /* 0x00946088 */
int __fastcall sub_60946090(int a1);  /* 0x00946090 */
int __fastcall sub_60946098(int a1);  /* 0x00946098 */
int __fastcall sub_609460A4(int a1);  /* 0x009460a4 */
int __fastcall sub_60946184(_DWORD *a1, int a2, unsigned int a3);  /* 0x00946184 */
int __fastcall sub_609461C0(int a1);  /* 0x009461c0 */
int __fastcall sub_609461EC(int a1);  /* 0x009461ec */
int __fastcall sub_609461F4(int a1);  /* 0x009461f4 */
int __fastcall sub_60946204(int a1);  /* 0x00946204 */
int __fastcall sub_60946260(int a1);  /* 0x00946260 */
int __fastcall sub_609462A8(int a1);  /* 0x009462a8 */
int __fastcall sub_609462B0(int a1);  /* 0x009462b0 */
int __fastcall sub_609462B8(int a1);  /* 0x009462b8 */
int __fastcall sub_609462C0(int a1);  /* 0x009462c0 */
int __fastcall sub_609462C8(int a1);  /* 0x009462c8 */
int __fastcall sub_609462D4(int a1);  /* 0x009462d4 */
int __fastcall sub_609463B4(_DWORD *a1, int a2, unsigned int a3);  /* 0x009463b4 */
int __fastcall sub_609463F0(int a1);  /* 0x009463f0 */
int __fastcall sub_6094641C(int a1);  /* 0x0094641c */
int __fastcall sub_60946424(int a1);  /* 0x00946424 */
int __fastcall sub_60946434(int a1);  /* 0x00946434 */
int __fastcall sub_60946490(int a1);  /* 0x00946490 */
int __fastcall sub_609464D8(int a1);  /* 0x009464d8 */
int __fastcall sub_609464E0(int a1);  /* 0x009464e0 */
int __fastcall sub_609464E8(int a1);  /* 0x009464e8 */
int __fastcall sub_609464F0(int a1);  /* 0x009464f0 */
int __fastcall sub_609464F8(int a1);  /* 0x009464f8 */
int __fastcall sub_60946504(int a1);  /* 0x00946504 */
int __fastcall sub_609465E4(_DWORD *a1, int a2, unsigned int a3);  /* 0x009465e4 */
int __fastcall sub_60946620(int a1);  /* 0x00946620 */
int __fastcall sub_6094664C(int a1);  /* 0x0094664c */
int __fastcall sub_60946654(int a1);  /* 0x00946654 */
int __fastcall sub_60946664(int a1);  /* 0x00946664 */
int __fastcall sub_609466C0(int a1);  /* 0x009466c0 */
int __fastcall sub_60946708(int a1);  /* 0x00946708 */
int __fastcall sub_60946710(int a1);  /* 0x00946710 */
int __fastcall sub_60946718(int a1);  /* 0x00946718 */
int __fastcall sub_60946720(int a1);  /* 0x00946720 */
int __fastcall sub_60946728(int a1);  /* 0x00946728 */
int __fastcall sub_60946730(int a1);  /* 0x00946730 */
int __fastcall sub_60946810(_DWORD *a1, int a2, int a3);  /* 0x00946810 */
int __fastcall sub_60946848(int a1);  /* 0x00946848 */
int __fastcall sub_60946874(int a1);  /* 0x00946874 */
int __fastcall sub_6094687C(int a1);  /* 0x0094687c */
int __fastcall sub_60946B1C(_DWORD *a1, int a2, int a3);  /* 0x00946b1c */
int __fastcall sub_60946C34(int a1, int a2, int a3);  /* 0x00946c34 */
int __fastcall sub_60946EA0(int a1, int a2, int a3);  /* 0x00946ea0 */
int __fastcall sub_60946F84(_DWORD *a1, int a2, int a3);  /* 0x00946f84 */
int __fastcall sub_60947118(_DWORD *a1, _DWORD *a2);  /* 0x00947118 */
int __fastcall sub_60947168(_DWORD *a1, int a2, int a3);  /* 0x00947168 */
int __fastcall sub_609471F4(__int64 a1, int a2);  /* 0x009471f4 */
int __fastcall sub_60947310(int a1, _BYTE **a2);  /* 0x00947310 */
int __fastcall sub_60947328(int a1, int a2, int a3);  /* 0x00947328 */
int __fastcall sub_60947360(int a1, int a2, int a3);  /* 0x00947360 */
int __fastcall sub_60947394(_DWORD *a1, int a2);  /* 0x00947394 */
int __fastcall sub_609473AC(_DWORD *a1, _DWORD *a2, int a3, _DWORD *a4);  /* 0x009473ac */
int __fastcall sub_609478D8(_DWORD *a1, int a2, _DWORD *a3);  /* 0x009478d8 */
unsigned int __fastcall sub_6094793C(unsigned int result, _DWORD *a2, int a3);  /* 0x0094793c */
int __fastcall sub_609479F4(int a1, int a2, int a3);  /* 0x009479f4 */
int __fastcall sub_60947AA4(_DWORD *a1, int a2, int a3);  /* 0x00947aa4 */
int __fastcall sub_60947C28(_DWORD *a1, int a2, int a3);  /* 0x00947c28 */
int __fastcall sub_60947D30(int a1, int a2, int a3, int a4);  /* 0x00947d30 */
int __fastcall sub_60947DB0(_DWORD *a1, int a2, int a3, int a4, _DWORD *a5);  /* 0x00947db0 */
int __fastcall sub_60947FE0(int a1, _DWORD *a2, _DWORD *a3, int a4, int a5);  /* 0x00947fe0 */
int __fastcall sub_60948064(_DWORD *a1, int a2);  /* 0x00948064 */
int __fastcall sub_60948170(struct sead_IDisposer *a1);  /* 0x00948170 */
int __fastcall sub_609481E8(struct sead_Heap *a1);  /* 0x009481e8 */
int __fastcall sub_60949104(_DWORD *a1);  /* 0x00949104 */
int __fastcall sub_6094911C(_DWORD *a1);  /* 0x0094911c */
int __fastcall sub_6094912C(int a1, int a2);  /* 0x0094912c */
int __fastcall sub_60949218(_DWORD *a1, int a2);  /* 0x00949218 */
int __fastcall sub_60949640(_DWORD *a1, int a2);  /* 0x00949640 */
int __fastcall sub_609499CC(_DWORD *a1, int a2);  /* 0x009499cc */
int __fastcall sub_60949FA8(_DWORD *a1, int a2);  /* 0x00949fa8 */
bool __fastcall sub_6094A4A0(int a1, unsigned int a2, int a3);  /* 0x0094a4a0 */
int __fastcall sub_6094A69C(int a1, int a2, int a3, int a4);  /* 0x0094a69c */
int __fastcall sub_6094A8D4(int a1, int a2, unsigned int a3, int a4);  /* 0x0094a8d4 */
int __fastcall sub_6094AB28(int a1, unsigned int a2, int a3, int a4);  /* 0x0094ab28 */
int __fastcall sub_6094B510(int a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5);  /* 0x0094b510 */
int __fastcall sub_6094BC78(int a1, unsigned int a2, unsigned int a3, int a4);  /* 0x0094bc78 */
int __fastcall sub_6094C7E4(_DWORD *a1, unsigned int a2, unsigned int a3, int a4, int a5, int a6);  /* 0x0094c7e4 */
int __fastcall sub_6094CD80(int a1, _DWORD *a2, unsigned int a3);  /* 0x0094cd80 */
int __fastcall sub_6094CF0C(_DWORD *a1, _DWORD *a2, unsigned int a3, int a4, char a5);  /* 0x0094cf0c */
int __fastcall sub_6094D0B8(unsigned int a1, unsigned int a2, int a3, char a4);  /* 0x0094d0b8 */
int __fastcall sub_6094D248(int a1, _DWORD *a2, unsigned int a3, unsigned int a4);  /* 0x0094d248 */
int __fastcall sub_6094D4CC(_DWORD *a1, int *a2, unsigned int a3, unsigned int a4, int a5, char a6);  /* 0x0094d4cc */
int __fastcall sub_6094D9D8(unsigned int a1, unsigned int a2, int a3, char a4);  /* 0x0094d9d8 */
int __fastcall sub_6094DB70(int a1, _DWORD *a2, unsigned int a3, unsigned int a4);  /* 0x0094db70 */
int __fastcall sub_6094DDDC(_DWORD *a1, int *a2, unsigned int a3, unsigned int a4, int a5, char a6);  /* 0x0094dddc */
int __fastcall sub_6094E244(int a1, _DWORD *a2, unsigned int a3, unsigned int a4);  /* 0x0094e244 */
int __fastcall sub_6094E5B0(_DWORD *a1, int *a2, unsigned int a3, int a4, int a5, char a6);  /* 0x0094e5b0 */
int __fastcall sub_6094E8A8(int a1, _DWORD *a2, unsigned int a3, unsigned int a4, unsigned int a5);  /* 0x0094e8a8 */
int __fastcall sub_6094EDDC(_DWORD *a1, int *a2, unsigned int a3, unsigned int a4, unsigned int a5, int a6, char a7);  /* 0x0094eddc */
int __fastcall sub_6094F5D4(int a1, _DWORD *a2, unsigned int a3, unsigned int a4);  /* 0x0094f5d4 */
int __fastcall sub_6094F98C(_DWORD *a1, int *a2, unsigned int a3, unsigned int a4, int a5, char a6);  /* 0x0094f98c */
int __fastcall sub_6094FD38(int a1, _DWORD *a2, unsigned int a3, unsigned int a4, int a5, int a6);  /* 0x0094fd38 */
int __fastcall sub_609503B0(_DWORD *a1, _DWORD *a2, unsigned int a3, unsigned int a4, int a5, char a6);  /* 0x009503b0 */
int __fastcall sub_609505FC(_DWORD *a1);  /* 0x009505fc */
int __fastcall sub_60950620(_DWORD *a1);  /* 0x00950620 */
int __fastcall sub_60950638(_DWORD *a1);  /* 0x00950638 */
int __fastcall sub_609506D0(struct sead_IDisposer *a1);  /* 0x009506d0 */
int __fastcall sub_609508B0(_DWORD *a1);  /* 0x009508b0 */
int __fastcall sub_609508C0(int a1, int a2);  /* 0x009508c0 */
int __fastcall sub_60951110(struct sead_IDisposer *a1);  /* 0x00951110 */
int __fastcall sub_609512E0(_DWORD *a1);  /* 0x009512e0 */
int __fastcall sub_60951358(_DWORD *a1, int a2);  /* 0x00951358 */
int __fastcall sub_60951544(_DWORD *a1);  /* 0x00951544 */
int __fastcall sub_6095155C(_DWORD *a1);  /* 0x0095155c */
int __fastcall sub_60951580(_DWORD *a1);  /* 0x00951580 */
int __fastcall sub_60951598(_DWORD *a1);  /* 0x00951598 */
int __fastcall sub_609515BC(int *a1, int a2);  /* 0x009515bc */
int __fastcall sub_60951610(int *a1);  /* 0x00951610 */
int __fastcall sub_60952160(int result);  /* 0x00952160 */
int __fastcall sub_60952194(int a1, _DWORD *a2, _DWORD *a3);  /* 0x00952194 */
int __fastcall sub_60952648(int a1, int a2);  /* 0x00952648 */
int __fastcall sub_609526A4(int a1, int a2, int a3, int a4, _DWORD *a5, int a6, int a7);  /* 0x009526a4 */
int __fastcall sub_60952DA0(_DWORD *a1, int a2, unsigned __int16 *a3);  /* 0x00952da0 */
int __fastcall sub_60952F14(int a1, int a2, int a3, int a4, _DWORD *a5, int a6);  /* 0x00952f14 */
int __fastcall sub_60953264(int a1);  /* 0x00953264 */
int __fastcall sub_60953348(_DWORD *a1);  /* 0x00953348 */
int __fastcall sub_60953384(int result, _DWORD *a2, int a3, int a4, signed int a5, int a6);  /* 0x00953384 */
int __fastcall sub_60953648(int a1, _DWORD *a2, int *a3, _DWORD *a4, int a5);  /* 0x00953648 */
int __fastcall sub_60953920(_DWORD *a1, _DWORD *a2, int a3);  /* 0x00953920 */
bool __fastcall sub_60953C40(_DWORD *a1, char *a2);  /* 0x00953c40 */
int __fastcall sub_60953CB8(int *a1, _DWORD *a2, int a3, int a4);  /* 0x00953cb8 */
int __fastcall sub_60954054(struct sead_IDisposer *a1);  /* 0x00954054 */
int __fastcall sub_609540CC(struct sead_Heap *a1);  /* 0x009540cc */
int __fastcall sub_609542A4(_DWORD *a1);  /* 0x009542a4 */
int __fastcall sub_609542B4(int a1, int a2);  /* 0x009542b4 */
int __fastcall sub_60954658(struct sead_IDisposer *a1);  /* 0x00954658 */
int __fastcall sub_609546A4(int a1, int a2);  /* 0x009546a4 */
int __fastcall sub_609546B4(int a1);  /* 0x009546b4 */
int __fastcall sub_609548BC(struct sead_IDisposer *a1);  /* 0x009548bc */
void __fastcall sub_609548CC(_DWORD *a1, int a2);  /* 0x009548cc */
int __fastcall sub_60954B6C(int result, char a2);  /* 0x00954b6c */
int __fastcall sub_6095537C(int a1, unsigned int a2, int a3);  /* 0x0095537c */
int __fastcall sub_609553AC(int a1, int a2);  /* 0x009553ac */
int __fastcall sub_60955444(int a1, int a2);  /* 0x00955444 */
int __fastcall sub_60955490(int a1, unsigned int a2, int a3);  /* 0x00955490 */
int __fastcall sub_609554AC(int a1);  /* 0x009554ac */
int __fastcall sub_609554E4(int a1);  /* 0x009554e4 */
int __fastcall sub_60955518(int result, unsigned int a2);  /* 0x00955518 */
int __fastcall sub_60955528(int a1, int a2);  /* 0x00955528 */
int __fastcall sub_60955570(int a1, int a2);  /* 0x00955570 */
int __fastcall sub_609555AC(int a1, _DWORD *a2, int a3, int a4);  /* 0x009555ac */
bool __fastcall sub_60956514(_BYTE *a1);  /* 0x00956514 */
int __fastcall sub_60956560(unsigned __int8 *a1, _DWORD *a2);  /* 0x00956560 */
int __fastcall sub_609565DC(_DWORD *a1, unsigned int *a2);  /* 0x009565dc */
int __fastcall sub_609566B0(int a1);  /* 0x009566b0 */
bool __fastcall sub_60956A0C(int a1, int a2);  /* 0x00956a0c */
int __fastcall sub_60956C2C(struct sead_IDisposer *a1);  /* 0x00956c2c */
int __fastcall sub_60956CA4(struct sead_Heap *a1);  /* 0x00956ca4 */
int __fastcall sub_60956E94(int a1, _DWORD *a2, int a3, int a4);  /* 0x00956e94 */
int __fastcall sub_60957588(_DWORD *a1);  /* 0x00957588 */
int __fastcall sub_60957598(int a1, int a2);  /* 0x00957598 */
unsigned int __fastcall sub_60957B80(int a1, int a2, int a3);  /* 0x00957b80 */
int __fastcall sub_60957EEC(int result, int a2);  /* 0x00957eec */
int __fastcall sub_60957F40(int a1, int a2, unsigned int a3);  /* 0x00957f40 */
int __fastcall sub_609580C8(_DWORD *a1, int a2);  /* 0x009580c8 */
int __fastcall sub_6095811C(_DWORD *a1, _DWORD *a2);  /* 0x0095811c */
int __fastcall sub_60958220(_DWORD *a1, int a2, unsigned int a3, _DWORD *a4, unsigned int a5, int a6);  /* 0x00958220 */
int __fastcall sub_60958440(int a1);  /* 0x00958440 */
int __fastcall sub_60958448(int a1);  /* 0x00958448 */
int __fastcall sub_6095845C(int a1, int a2, _DWORD *a3);  /* 0x0095845c */
bool __fastcall sub_60958474(_DWORD *a1);  /* 0x00958474 */
int __fastcall sub_6095849C(int a1, int a2, char a3, int a4, int a5, char a6, int a7);  /* 0x0095849c */
int __fastcall sub_60958528(int result, int a2, char a3, int a4);  /* 0x00958528 */
int __fastcall sub_60958564(int a1);  /* 0x00958564 */
int __fastcall sub_6095856C(int a1, int a2);  /* 0x0095856c */
int __fastcall sub_60958618(int a1);  /* 0x00958618 */
int __fastcall sub_6095862C(_DWORD *a1, int a2);  /* 0x0095862c */
int __fastcall sub_60958690(int a1, int a2, int a3, int a4);  /* 0x00958690 */
int __fastcall sub_60958724(int a1);  /* 0x00958724 */
void __fastcall sub_609588B8(int a1);  /* 0x009588b8 */
int __fastcall sub_609588DC(int a1, int a2);  /* 0x009588dc */
int __fastcall sub_609589A4(int a1);  /* 0x009589a4 */
int __fastcall sub_609589F4(int a1, int a2, int a3);  /* 0x009589f4 */
int __fastcall sub_60958A10(int result, int a2, int a3, int a4, int a5);  /* 0x00958a10 */
int __fastcall sub_60958EB4(unsigned __int8 *a1, _DWORD *a2, int a3, int a4);  /* 0x00958eb4 */
int __fastcall sub_6095926C(int a1, int a2);  /* 0x0095926c */
int __fastcall sub_609592FC(int result, int a2);  /* 0x009592fc */
int __fastcall sub_60959318(unsigned __int8 *a1, int a2);  /* 0x00959318 */
int __fastcall sub_609593A0(int a1, int a2);  /* 0x009593a0 */
int __fastcall sub_609593B0(int a1, int a2);  /* 0x009593b0 */
int __fastcall sub_609593C0(int a1);  /* 0x009593c0 */
int __fastcall sub_609593CC(int a1);  /* 0x009593cc */
int __fastcall sub_609594C4(int a1, int a2, int a3, int a4);  /* 0x009594c4 */
int __fastcall sub_60959828(char *a1, int a2, int a3);  /* 0x00959828 */
int __fastcall sub_609598CC(_DWORD *a1, _DWORD *a2);  /* 0x009598cc */
int __fastcall sub_60959954(int *a1, int a2);  /* 0x00959954 */
int __fastcall sub_60959BE8(_DWORD *a1);  /* 0x00959be8 */
int __fastcall sub_60959C28(int a1, int a2);  /* 0x00959c28 */
int __fastcall sub_60959C50(int a1, int a2);  /* 0x00959c50 */
int __fastcall sub_6095A3F4(_DWORD *a1);  /* 0x0095a3f4 */
int __fastcall sub_6095A404(int a1, int a2, _DWORD *a3, int a4, int a5);  /* 0x0095a404 */
int __fastcall sub_6095BE24(int a1, int a2, int a3, int a4);  /* 0x0095be24 */
int __fastcall sub_6095C088(int a1, _DWORD *a2);  /* 0x0095c088 */
int __fastcall sub_6095C4A8(int a1);  /* 0x0095c4a8 */
int __fastcall sub_6095C8AC(int a1);  /* 0x0095c8ac */
unsigned int __fastcall sub_6095CA0C(unsigned int result);  /* 0x0095ca0c */
int __fastcall sub_6095CA38(int result, int a2, int a3, int a4);  /* 0x0095ca38 */
int __fastcall sub_6095CAA8(int result, int a2, int a3, int a4);  /* 0x0095caa8 */
int __fastcall sub_6095CB58(unsigned int *a1);  /* 0x0095cb58 */
int __fastcall sub_6095CD6C(int a1);  /* 0x0095cd6c */
int __fastcall sub_6095CDD0(int a1, int a2, int a3, int a4);  /* 0x0095cdd0 */
int __fastcall sub_6095D2B8(_DWORD *a1, float *a2, unsigned int a3, int a4);  /* 0x0095d2b8 */
int __fastcall sub_6095D50C(_DWORD *a1, float *a2, unsigned int a3, int a4);  /* 0x0095d50c */
int __fastcall sub_6095D730(int a1);  /* 0x0095d730 */
int __fastcall sub_6095D8B0(int a1);  /* 0x0095d8b0 */
int __fastcall sub_6095D8C0(int a1, unsigned int *a2, int a3);  /* 0x0095d8c0 */
int __fastcall sub_6095DC64(int a1, int a2);  /* 0x0095dc64 */
int __fastcall sub_6095DDA8(int a1, int a2, int a3);  /* 0x0095dda8 */
int __fastcall sub_6095DF8C(_DWORD *a1, float *a2, unsigned int a3, int a4);  /* 0x0095df8c */
int __fastcall sub_6095E1E0(_DWORD *a1, float *a2, unsigned int a3, int a4);  /* 0x0095e1e0 */
int __fastcall sub_6095E404(_DWORD *a1, float *a2, unsigned int a3, int a4);  /* 0x0095e404 */
int __fastcall sub_6095E59C(_DWORD *a1, float *a2, unsigned int a3, int a4);  /* 0x0095e59c */
int __fastcall sub_6095E7A8(_DWORD *a1, float *a2, int a3, int a4);  /* 0x0095e7a8 */
int __fastcall sub_6095E89C(_DWORD *a1, float *a2, int a3, int a4);  /* 0x0095e89c */
int __fastcall sub_6095E968(int result, int a2, int a3, int a4);  /* 0x0095e968 */
int __fastcall sub_6095E9C0(int result, int a2, int a3, int a4);  /* 0x0095e9c0 */
int __fastcall sub_6095EA18(_DWORD *a1, int a2);  /* 0x0095ea18 */
int __fastcall sub_6095EA6C(_DWORD *a1);  /* 0x0095ea6c */
int __fastcall sub_6095EAFC(_DWORD *a1, int a2, int a3, int a4);  /* 0x0095eafc */
int __fastcall sub_6095EC10(int a1);  /* 0x0095ec10 */
int __fastcall sub_6095F06C(int a1, float *a2, float *a3);  /* 0x0095f06c */
int __fastcall sub_6095F0C4(int result, float *a2, int *a3);  /* 0x0095f0c4 */
int __fastcall sub_6095F2F0(int *a1);  /* 0x0095f2f0 */
int __fastcall sub_6095F338(int a1, int a2);  /* 0x0095f338 */
int __fastcall sub_6095F340(int a1, int a2, __int64 *a3, _QWORD *a4);  /* 0x0095f340 */
int __fastcall sub_6095F6B0(int a1, int a2, int a3, int *a4);  /* 0x0095f6b0 */
int __fastcall sub_609600C8(int result);  /* 0x009600c8 */
int __fastcall sub_6096030C(int a1, float *a2, _DWORD *a3);  /* 0x0096030c */
int __fastcall sub_60960688(int a1, float *a2, float *a3);  /* 0x00960688 */
void __fastcall sub_609606E0(int a1, float *a2, float *a3);  /* 0x009606e0 */
int __fastcall sub_60960724(int a1, float *a2);  /* 0x00960724 */
int __fastcall sub_60960770(int a1, unsigned int a2, unsigned int a3);  /* 0x00960770 */
int __fastcall sub_60960DA8(int a1, float32x2_t *a2, float32x4_t *a3, float32x4_t *a4, _DWORD *a5);  /* 0x00960da8 */
int __fastcall sub_60961E98(int a1, float *a2, float *a3, int a4, float *a5);  /* 0x00961e98 */
int __fastcall sub_60962310(int a1, int a2, int a3, int a4, int a5);  /* 0x00962310 */
int __fastcall sub_609628D4(unsigned int *a1, int a2);  /* 0x009628d4 */
int __fastcall sub_60962B14(int a1, float *a2);  /* 0x00962b14 */
int __fastcall sub_60962B84(int a1, _DWORD *a2, float *a3, unsigned __int8 a4);  /* 0x00962b84 */
int __fastcall sub_60962CEC(int a1, float *a2, float *a3, unsigned __int8 a4);  /* 0x00962cec */
int __fastcall sub_60963460(int a1, unsigned int *a2, int a3, unsigned int *a4, float *a5);  /* 0x00963460 */
int __fastcall sub_60963754(unsigned int *a1, _DWORD *a2);  /* 0x00963754 */
int __fastcall sub_60963934(int a1, float *a2);  /* 0x00963934 */
int __fastcall sub_609645DC(int result, float *a2, float *a3, float *a4);  /* 0x009645dc */
int __fastcall sub_60964804(int *a1, int a2, int a3, int a4, int a5);  /* 0x00964804 */
int __fastcall sub_60964AD0(int a1);  /* 0x00964ad0 */
int __fastcall sub_6096541C(_DWORD *a1);  /* 0x0096541c */
int __fastcall sub_6096542C(int a1, int a2, int a3);  /* 0x0096542c */
int __fastcall sub_60965C94(int a1, int a2, int a3);  /* 0x00965c94 */
int __fastcall sub_60965F80(int a1, int a2, int a3);  /* 0x00965f80 */
int __fastcall sub_60966150(int a1, int a2);  /* 0x00966150 */
int __fastcall sub_60966DF4(int result, _DWORD *a2);  /* 0x00966df4 */
int __fastcall sub_60966E18(int a1, int a2, float a3, float *a4, int a5, float32x2_t *a6);  /* 0x00966e18 */
int __fastcall sub_60966E2C(int a1, float *a2);  /* 0x00966e2c */
int __fastcall sub_6096701C(int result, _QWORD *a2, _QWORD *a3, int a4);  /* 0x0096701c */
int __fastcall sub_60967204(int result, _QWORD *a2, _QWORD *a3, int a4);  /* 0x00967204 */
int __fastcall sub_609673A0(int a1);  /* 0x009673a0 */
int __fastcall sub_609674EC(_QWORD *a1, float *a2, float *a3, float *a4);  /* 0x009674ec */
int __fastcall sub_60967AA4(struct sead_IDisposer *a1);  /* 0x00967aa4 */
int __fastcall sub_60967B1C(struct sead_Heap *a1);  /* 0x00967b1c */
int __fastcall sub_60967CD0(int result);  /* 0x00967cd0 */
int __fastcall sub_60967D84(_DWORD *a1);  /* 0x00967d84 */
int __fastcall sub_60967DD0(_DWORD *a1, _BYTE *a2, int a3);  /* 0x00967dd0 */
int __fastcall sub_60967F54(int a1, int a2, int a3, unsigned int a4);  /* 0x00967f54 */
int __fastcall sub_609683D8(int a1, int a2, int a3, _DWORD *a4, int a5, int a6);  /* 0x009683d8 */
int __fastcall sub_60968528(_DWORD *a1, _DWORD *a2);  /* 0x00968528 */
int __fastcall sub_60968868(_DWORD *a1, unsigned int a2);  /* 0x00968868 */
int __fastcall sub_60968930(struct sead_IDisposer *a1);  /* 0x00968930 */
int __fastcall sub_60968B0C(_DWORD *a1);  /* 0x00968b0c */
int __fastcall sub_60968B88(_DWORD *a1, int a2, int a3, int a4);  /* 0x00968b88 */
int __fastcall sub_60968C90(int *a1, int a2);  /* 0x00968c90 */
int __fastcall sub_60968EA8(struct sead_IDisposer *a1);  /* 0x00968ea8 */
int __fastcall sub_60969110(_DWORD *a1);  /* 0x00969110 */
int __fastcall sub_609695A8(_DWORD *a1, _DWORD *a2, _DWORD *a3, float *a4, _DWORD *a5, _DWORD *a6);  /* 0x009695a8 */
int __fastcall sub_60969BAC(struct sead_IDisposer *a1);  /* 0x00969bac */
int __fastcall sub_60969C24(struct sead_Heap *a1);  /* 0x00969c24 */
int __fastcall sub_60969D80(_DWORD *a1);  /* 0x00969d80 */
int __fastcall sub_60969DE4(_DWORD *a1, int a2, _DWORD *a3);  /* 0x00969de4 */
int __fastcall sub_6097136C(int a1);  /* 0x0097136c */
int __fastcall sub_60971380(int a1);  /* 0x00971380 */
int __fastcall sub_60971870(int a1);  /* 0x00971870 */
int __fastcall sub_609718A0(_DWORD *a1);  /* 0x009718a0 */
int __fastcall sub_609718B0(int a1, int a2);  /* 0x009718b0 */
int __fastcall sub_609718FC(int a1);  /* 0x009718fc */
int __fastcall sub_60971910(int a1, int a2, int a3, int a4, int a5, int a6, int a7);  /* 0x00971910 */
int __fastcall sub_60971930(int a1, char a2, __int16 a3);  /* 0x00971930 */
int __fastcall sub_60971A3C(int a1, int a2, char *a3);  /* 0x00971a3c */
int __fastcall sub_60971BC4(int a1, int a2);  /* 0x00971bc4 */
int __fastcall sub_60971C50(struct sead_IDisposer *a1);  /* 0x00971c50 */
int __fastcall sub_60971DD0(_DWORD *a1);  /* 0x00971dd0 */
__int64 __fastcall sub_60971E2C(int a1, int a2, int a3);  /* 0x00971e2c */
int __fastcall sub_60971F84(int a1, _DWORD *a2, int a3);  /* 0x00971f84 */
int __fastcall sub_60972088(int a1, int a2, int a3);  /* 0x00972088 */
int __fastcall sub_60972238(int a1, _DWORD *a2, int a3);  /* 0x00972238 */
int __fastcall sub_60972344(_BYTE *a1, int a2);  /* 0x00972344 */
int __fastcall sub_609723AC(int a1, __int16 a2, int a3, char a4, char a5, int a6);  /* 0x009723ac */
int __fastcall sub_60972444(unsigned __int16 *a1);  /* 0x00972444 */
int __fastcall sub_60972534(unsigned __int16 *a1, int a2);  /* 0x00972534 */
int __fastcall sub_6097276C(int a1, int a2);  /* 0x0097276c */
int __fastcall sub_609728A4(int result, int a2, int a3);  /* 0x009728a4 */
int __fastcall sub_609729A8(int result);  /* 0x009729a8 */
int __fastcall sub_609729F4(int a1);  /* 0x009729f4 */
int __fastcall sub_60972B98(int a1, int a2);  /* 0x00972b98 */
unsigned int __fastcall sub_60972BA8(int a1, int a2);  /* 0x00972ba8 */
int __fastcall sub_60973AF4(int result, int a2);  /* 0x00973af4 */
int __fastcall sub_60973BB0(_DWORD *a1);  /* 0x00973bb0 */
int __fastcall sub_60973C10(int result, int a2, int a3, int a4);  /* 0x00973c10 */
int __fastcall sub_60973C8C(int result);  /* 0x00973c8c */
int __fastcall sub_60973CF8(int *a1, int *a2, int a3, __int16 a4, int a5, int a6);  /* 0x00973cf8 */
int __fastcall sub_60973D88(int a1, int a2, int a3, int a4, int a5, int a6, int a7);  /* 0x00973d88 */
int __fastcall sub_609740C0(int a1, int *a2, unsigned int a3, int a4, int a5, int a6, int a7);  /* 0x009740c0 */
int __fastcall sub_609740C4(int a1, int *a2, unsigned int a3, int a4, int a5, int a6, int a7);  /* 0x009740c4 */
int __fastcall sub_609745B0(int a1, int *a2, unsigned int a3, int a4, int a5, int a6);  /* 0x009745b0 */
int __fastcall sub_609745EC(int a1);  /* 0x009745ec */
int __fastcall sub_6097477C(int a1);  /* 0x0097477c */
int __fastcall sub_609749E8(_DWORD *a1);  /* 0x009749e8 */
int __fastcall sub_60974A90(int a1);  /* 0x00974a90 */
int __fastcall sub_60974E18(int a1, float *a2);  /* 0x00974e18 */
unsigned int __fastcall sub_60974F74(int a1);  /* 0x00974f74 */
int __fastcall sub_609750D0(int a1, int a2, _DWORD *a3, int a4, int a5, int a6, int a7, int a8, char a9);  /* 0x009750d0 */
signed int __fastcall sub_609757C8(int a1, int a2);  /* 0x009757c8 */
int __fastcall sub_609758B8(int a1, int a2, int a3, int a4);  /* 0x009758b8 */
int __fastcall sub_6097597C(int a1, int a2);  /* 0x0097597c */
int __fastcall sub_60975A84(int a1, int a2, unsigned __int8 *a3, int a4);  /* 0x00975a84 */
unsigned int __fastcall sub_60975BDC(int a1, int a2, int a3, char a4, int a5, int a6, int a7);  /* 0x00975bdc */
int __fastcall sub_60975F70(int a1, int a2, unsigned __int8 *a3, int a4);  /* 0x00975f70 */
unsigned int __fastcall sub_60976398(unsigned int result, int a2, int a3, int a4);  /* 0x00976398 */
int __fastcall sub_609763D0(int a1, int a2);  /* 0x009763d0 */
int __fastcall sub_6097642C(int a1, int a2, int a3, int a4);  /* 0x0097642c */
int __fastcall sub_609765CC(int a1, int a2);  /* 0x009765cc */
unsigned int __fastcall sub_60976854(int a1, int a2, int a3);  /* 0x00976854 */
int __fastcall sub_60976B50(int a1);  /* 0x00976b50 */
int __fastcall sub_60976C24(int a1);  /* 0x00976c24 */
int __fastcall sub_60976C8C(int result);  /* 0x00976c8c */
int __fastcall sub_60976C90(int a1);  /* 0x00976c90 */
int __fastcall sub_60976CA0(int a1, int a2);  /* 0x00976ca0 */
int __fastcall sub_60976E64(_DWORD *a1);  /* 0x00976e64 */
unsigned int __fastcall sub_60976E74(int a1, int a2, int a3, signed int a4, unsigned __int8 a5, int a6);  /* 0x00976e74 */
int __fastcall sub_60977198(int result, int a2);  /* 0x00977198 */
int __fastcall sub_60977248(int a1, int a2, _DWORD *a3, int a4);  /* 0x00977248 */
int __fastcall sub_6097744C(int a1);  /* 0x0097744c */
int __fastcall sub_60977A10(_DWORD *a1);  /* 0x00977a10 */
int __fastcall sub_60977A20(int a1);  /* 0x00977a20 */
int __fastcall sub_609795F8(_DWORD *a1, unsigned int a2);  /* 0x009795f8 */
int __fastcall sub_60979A00(int a1, int *a2);  /* 0x00979a00 */
int __fastcall sub_60979E58(int a1);  /* 0x00979e58 */
int __fastcall sub_6097A1CC(int a1, int a2, int a3, int a4);  /* 0x0097a1cc */
unsigned int __fastcall sub_6097A84C(int a1, unsigned __int8 a2);  /* 0x0097a84c */
unsigned int __fastcall sub_6097A98C(int a1);  /* 0x0097a98c */
int __fastcall sub_6097AEEC(int a1, unsigned int a2, float *a3);  /* 0x0097aeec */
unsigned int __fastcall sub_6097B2F8(unsigned int a1, int a2, unsigned int a3, int a4);  /* 0x0097b2f8 */
int __fastcall sub_6097BA14(_DWORD *a1);  /* 0x0097ba14 */
int __fastcall sub_6097BC10(int a1);  /* 0x0097bc10 */
int __fastcall sub_6097BC24(_DWORD *a1);  /* 0x0097bc24 */
int __fastcall sub_6097BCCC(int a1);  /* 0x0097bccc */
int __fastcall sub_6097BD7C(int result);  /* 0x0097bd7c */
int __fastcall sub_6097BDB0(int a1);  /* 0x0097bdb0 */
int __fastcall sub_6097BDD4(int a1);  /* 0x0097bdd4 */
void __fastcall sub_6097BDFC(_DWORD *a1, int a2, int a3, int a4);  /* 0x0097bdfc */
void __fastcall sub_6097C1C0(int a1, int a2, int a3, int a4);  /* 0x0097c1c0 */
int __fastcall sub_6097C1C8(int result, int a2, unsigned int a3, int a4);  /* 0x0097c1c8 */
int __fastcall sub_6097C4F0(int a1, int a2);  /* 0x0097c4f0 */
int __fastcall sub_6097C558(int result, int a2, int a3, int a4);  /* 0x0097c558 */
int __fastcall sub_6097C594(_DWORD *a1);  /* 0x0097c594 */
int __fastcall sub_6097C5C0(int result);  /* 0x0097c5c0 */
int __fastcall sub_6097C5F8(int result, int a2);  /* 0x0097c5f8 */
int __fastcall sub_6097C648(int a1);  /* 0x0097c648 */
int __fastcall sub_6097C67C(int a1, unsigned int a2);  /* 0x0097c67c */
int __fastcall sub_6097C770(int result, int a2);  /* 0x0097c770 */
int __fastcall sub_6097C778(_DWORD *a1, int a2);  /* 0x0097c778 */
int __fastcall sub_6097C7B8(int a1, int a2, int a3);  /* 0x0097c7b8 */
bool __fastcall sub_6097C7DC(int a1, void *a2);  /* 0x0097c7dc */
int __fastcall sub_6097C8D4(int a1, _BYTE *a2, int a3);  /* 0x0097c8d4 */
int __fastcall sub_6097CADC(int a1, int a2, int a3);  /* 0x0097cadc */
int __fastcall sub_6097CB3C(int a1);  /* 0x0097cb3c */
int __fastcall sub_6097CB4C(float32x4_t *a1, int a2, int a3, int a4);  /* 0x0097cb4c */
int __fastcall sub_6097CBA8(int a1);  /* 0x0097cba8 */
int __fastcall sub_6097D0D4(int a1, int a2, float *a3, _DWORD *a4, float *a5);  /* 0x0097d0d4 */
int __fastcall sub_6097D588(int a1);  /* 0x0097d588 */
int __fastcall sub_6097D6F4(int a1);  /* 0x0097d6f4 */
int __fastcall sub_6097D8A0(int a1);  /* 0x0097d8a0 */
int __fastcall sub_6097D9D0(int a1, _BYTE *a2, int a3);  /* 0x0097d9d0 */
int __fastcall sub_6097DA70(int a1, int a2);  /* 0x0097da70 */
int __fastcall sub_6097DBC4(int a1, int a2, int a3);  /* 0x0097dbc4 */
int __fastcall sub_6097DC6C(int a1, int a2, int a3, _BYTE *a4);  /* 0x0097dc6c */
int __fastcall sub_6097DDB0(int a1, int a2, char *a3);  /* 0x0097ddb0 */
int __fastcall sub_6097E74C(_DWORD *a1);  /* 0x0097e74c */
int __fastcall sub_6097E7EC(_DWORD *a1);  /* 0x0097e7ec */
int __fastcall sub_6097E7FC(float32x4_t *a1, _DWORD *a2, int a3, int a4);  /* 0x0097e7fc */
int __fastcall sub_6097E954(int a1, int a2, int a3);  /* 0x0097e954 */
int __fastcall sub_6097EE4C(int a1, _DWORD *a2, char *a3, int a4, int a5, int a6, int a7, int a8);  /* 0x0097ee4c */
int __fastcall sub_6097F554(int result);  /* 0x0097f554 */
int __fastcall sub_6097F5A8(float **a1);  /* 0x0097f5a8 */
int __fastcall sub_6097F600(int a1, _BYTE *a2, int a3);  /* 0x0097f600 */
int __fastcall sub_6097F690(int a1, int a2);  /* 0x0097f690 */
int __fastcall sub_6097F7CC(int a1, int a2, int a3);  /* 0x0097f7cc */
int __fastcall sub_6097F85C(_DWORD *a1);  /* 0x0097f85c */
int __fastcall sub_6097F8CC(_DWORD *a1);  /* 0x0097f8cc */
int __fastcall sub_6097F940(float32x4_t *a1, _DWORD *a2, int a3, int a4);  /* 0x0097f940 */
int __fastcall sub_6097FA5C(int a1, int a2, int a3);  /* 0x0097fa5c */
int __fastcall sub_6097FDF0(int a1);  /* 0x0097fdf0 */
int __fastcall sub_6097FE3C(int a1, int a2, float *a3, int a4);  /* 0x0097fe3c */
int __fastcall sub_6097FFC0(int a1, int a2);  /* 0x0097ffc0 */
int __fastcall sub_6097FFF4(int result, int a2, char a3);  /* 0x0097fff4 */
int __fastcall sub_6098004C(int a1, int a2, int a3);  /* 0x0098004c */
int __fastcall sub_60980098(_DWORD *a1);  /* 0x00980098 */
int __fastcall sub_60980254(int a1, int a2);  /* 0x00980254 */
int __fastcall sub_60980288(int result, int a2, char a3);  /* 0x00980288 */
int __fastcall sub_60980294(float32x4_t *a1, _DWORD *a2, int a3, int a4);  /* 0x00980294 */
int __fastcall sub_609802E0(int a1, int a2, int a3);  /* 0x009802e0 */
int __fastcall sub_6098032C(_DWORD *a1);  /* 0x0098032c */
int __fastcall sub_60980508(int a1, int a2, unsigned __int8 *a3, int a4);  /* 0x00980508 */
int __fastcall sub_60980770(_DWORD *a1, int a2, int a3, unsigned __int8 a4);  /* 0x00980770 */
int __fastcall sub_60980818(int a1, int a2);  /* 0x00980818 */
int __fastcall sub_60980A3C(int a1, int a2);  /* 0x00980a3c */
int __fastcall sub_60980A54(int a1, int a2);  /* 0x00980a54 */
int __fastcall sub_60980C30(int a1, int a2, int a3, int a4);  /* 0x00980c30 */
int __fastcall sub_60980E8C(int a1, int a2, int a3);  /* 0x00980e8c */
int __fastcall sub_609810F8(int result, int a2);  /* 0x009810f8 */
int __fastcall sub_60981158(int a1, int a2);  /* 0x00981158 */
int __fastcall sub_60981200(_DWORD *a1, int a2);  /* 0x00981200 */
unsigned int __fastcall sub_609812D4(int a1, int a2);  /* 0x009812d4 */
int __fastcall sub_609813A8(int a1, int a2, int a3);  /* 0x009813a8 */
int __fastcall sub_6098142C(_DWORD *a1, int a2, int a3, int a4, int a5, int a6, _DWORD *a7);  /* 0x0098142c */
int __fastcall sub_60981CF4(int a1, int a2, int a3, int a4);  /* 0x00981cf4 */
int __fastcall sub_60981FC0(int a1, int a2);  /* 0x00981fc0 */
int __fastcall sub_609823E8(_DWORD *a1);  /* 0x009823e8 */
int __fastcall sub_609823F8(int a1);  /* 0x009823f8 */
int __fastcall sub_60982448(int a1, int *a2);  /* 0x00982448 */
int __fastcall sub_60982658(_DWORD *a1, int a2, signed int a3);  /* 0x00982658 */
int __fastcall sub_60982864(float32x4_t *a1, int a2, int a3, int a4);  /* 0x00982864 */
int __fastcall sub_60982868(int result, int a2);  /* 0x00982868 */
int __fastcall sub_60982B4C(_DWORD *a1);  /* 0x00982b4c */
int __fastcall sub_60982B7C(_DWORD *a1);  /* 0x00982b7c */
int __fastcall sub_60982D7C(_DWORD *a1);  /* 0x00982d7c */
int __fastcall sub_60982E14(_DWORD *a1);  /* 0x00982e14 */
int __fastcall sub_60982EB0(int a1, int a2);  /* 0x00982eb0 */
int __fastcall sub_60982EE0(int a1, int a2, int a3);  /* 0x00982ee0 */
unsigned int __fastcall sub_60982F50(int a1, _BYTE *a2, _BYTE *a3, _DWORD *a4);  /* 0x00982f50 */
unsigned int __fastcall sub_60983140(int a1, _DWORD *a2, int a3, _BYTE *a4);  /* 0x00983140 */
int __fastcall sub_6098325C(int a1, int a2, int a3);  /* 0x0098325c */
int __fastcall sub_60983360(_DWORD *a1, int a2, unsigned __int8 *a3);  /* 0x00983360 */
int __fastcall sub_60983604(int result, int (__fastcall *a2)(_DWORD *, int, int), int a3);  /* 0x00983604 */
int __fastcall sub_60983668(int result, int (__fastcall *a2)(int, int, int), int a3);  /* 0x00983668 */
int __fastcall sub_609836C8(int a1, int a2);  /* 0x009836c8 */
int __fastcall sub_60983724(int a1, int a2, int *a3, int a4);  /* 0x00983724 */
int __fastcall sub_6098390C(_DWORD *a1, int a2, _DWORD *a3, char *a4);  /* 0x0098390c */
int __fastcall sub_60983E78(int a1);  /* 0x00983e78 */
int __fastcall sub_60983F04(int a1);  /* 0x00983f04 */
int __fastcall sub_60983F8C(_DWORD *a1);  /* 0x00983f8c */
int __fastcall sub_60983FD4(_DWORD *a1);  /* 0x00983fd4 */
int __fastcall sub_60984020(int a1, int a2, int a3);  /* 0x00984020 */
int __fastcall sub_60984234(int a1);  /* 0x00984234 */
int __fastcall sub_609842C8(int a1);  /* 0x009842c8 */
int __fastcall sub_6098435C(_DWORD *a1);  /* 0x0098435c */
int __fastcall sub_609843A4(_DWORD *a1);  /* 0x009843a4 */
int __fastcall sub_609843F0(int a1, int a2, int a3);  /* 0x009843f0 */
int __fastcall sub_60984644(int a1);  /* 0x00984644 */
int __fastcall sub_60984800(_DWORD *a1);  /* 0x00984800 */
int __fastcall sub_60984988(int a1);  /* 0x00984988 */
int __fastcall sub_60984AF0(float32x4_t *a1, int a2, int a3, int a4);  /* 0x00984af0 */
int __fastcall sub_60984B90(int a1, int a2);  /* 0x00984b90 */
int __fastcall sub_60984D0C(int result, int a2, int a3);  /* 0x00984d0c */
int __fastcall sub_60984D1C(int a1, _DWORD *a2, int a3, int a4, int a5, int a6, int a7, char a8, int a9);  /* 0x00984d1c */
int __fastcall sub_60984D68(_DWORD *a1);  /* 0x00984d68 */
int __fastcall sub_6098516C(int a1);  /* 0x0098516c */
int __fastcall sub_60985240(int a1, int a2, int a3, int a4, _DWORD *a5);  /* 0x00985240 */
int __fastcall sub_609853F8(_DWORD *a1, int a2, _DWORD *a3, int a4, int a5);  /* 0x009853f8 */
int __fastcall sub_60985434(int a1, int a2, int a3);  /* 0x00985434 */
int __fastcall sub_60985474(int a1, _WORD *a2, int a3);  /* 0x00985474 */
int __fastcall sub_609854B8(int a1, int a2, int a3, int a4);  /* 0x009854b8 */
int __fastcall sub_609859D8(int a1, _DWORD *a2, int a3, int a4, int a5, int a6, int a7, char a8, int a9);  /* 0x009859d8 */
float __fastcall sub_60985C80(int a1, int a2);  /* 0x00985c80 */
int __fastcall sub_60985DE8(int a1);  /* 0x00985de8 */
int __fastcall sub_60985E74(int a1, _DWORD *a2);  /* 0x00985e74 */
bool __fastcall sub_60985EBC(int a1);  /* 0x00985ebc */
bool __fastcall sub_60985EF4(int a1);  /* 0x00985ef4 */
int __fastcall sub_60985F1C(int a1, _DWORD *a2);  /* 0x00985f1c */
int __fastcall sub_60985F64(int a1, int *a2, int a3);  /* 0x00985f64 */
int __fastcall sub_60986000(int a1, int a2, int a3);  /* 0x00986000 */
int __fastcall sub_60986010(_DWORD *a1);  /* 0x00986010 */
int __fastcall sub_60986144(int a1, _DWORD *a2);  /* 0x00986144 */
int __fastcall sub_60986290(_DWORD *a1);  /* 0x00986290 */
int __fastcall sub_60986434(struct sead_IDisposer *a1);  /* 0x00986434 */
int __fastcall sub_60986590(_DWORD *a1);  /* 0x00986590 */
int __fastcall sub_609865C0(_DWORD *a1, int a2, int a3, int a4, signed int *a5, int a6);  /* 0x009865c0 */
int __fastcall sub_60986A5C(_DWORD *a1, int a2);  /* 0x00986a5c */
int __fastcall sub_60986AC8(_DWORD *a1, int a2);  /* 0x00986ac8 */
int __fastcall sub_60986B34(int a1, unsigned int a2);  /* 0x00986b34 */
int __fastcall sub_60986BC0(struct sead_IDisposer *a1);  /* 0x00986bc0 */
int __fastcall sub_60986C38(struct sead_Heap *a1);  /* 0x00986c38 */
int __fastcall sub_60986DE0(int a1, struct sead_Heap *a2, int a3, int a4);  /* 0x00986de0 */
int __fastcall sub_60986E84(_DWORD *a1, int a2);  /* 0x00986e84 */
int __fastcall sub_60986F04(int a1, const char **a2);  /* 0x00986f04 */
int __fastcall sub_60987010(int a1, const char **a2);  /* 0x00987010 */
int __fastcall sub_60987184(struct sead_IDisposer *a1);  /* 0x00987184 */
void __fastcall sub_609871EC(int *a1, int a2, int a3, int a4);  /* 0x009871ec */
bool __fastcall sub_60987474(int a1, void *a2);  /* 0x00987474 */
bool __fastcall sub_6098756C(int a1, void *a2);  /* 0x0098756c */
int __fastcall sub_60987688(int a1, int a2, int a3);  /* 0x00987688 */
int __fastcall sub_609876F8(int a1);  /* 0x009876f8 */
int __fastcall sub_60987738(int a1, _DWORD *a2);  /* 0x00987738 */
int __fastcall sub_60987834(int a1, unsigned int a2, unsigned int a3, _WORD *a4);  /* 0x00987834 */
int __fastcall sub_60987858(int a1, unsigned int a2, unsigned int a3, _WORD *a4, int a5, int a6);  /* 0x00987858 */
unsigned int __fastcall sub_60987E64(int a1, unsigned int a2);  /* 0x00987e64 */
int __fastcall sub_60987E7C(int a1, int a2, int a3);  /* 0x00987e7c */
int __fastcall sub_60987F08(int a1, unsigned __int16 a2, int a3);  /* 0x00987f08 */
int __fastcall sub_60987F1C(int a1, int a2, int a3, unsigned __int16 a4);  /* 0x00987f1c */
int __fastcall sub_60987F3C(int result, int a2);  /* 0x00987f3c */
int __fastcall sub_60987FD0(int result);  /* 0x00987fd0 */
int __fastcall sub_60988018(int result);  /* 0x00988018 */
int __fastcall sub_609885B8(int a1, char a2, char a3);  /* 0x009885b8 */
int __fastcall sub_609885EC(int result, int a2, int a3, int *a4, _DWORD *a5, unsigned int a6, const void *a7, int a8);  /* 0x009885ec */
int __fastcall sub_6098869C(int a1, int a2, int a3, int *a4, int a5, unsigned int a6, const void *a7, int a8);  /* 0x0098869c */
unsigned int __fastcall sub_609886FC(int a1, int a2, unsigned __int16 *a3, int *a4, unsigned int *a5, unsigned int a6);  /* 0x009886fc */
int __fastcall sub_60988878(int result, int a2, int a3, _DWORD *a4, int *a5, unsigned int a6);  /* 0x00988878 */
int __fastcall sub_60988938(int a1, int a2, int a3, int *a4, int a5, unsigned int a6, const void *a7, int a8);  /* 0x00988938 */
int __fastcall sub_60988978(_DWORD *a1, int a2, int a3, float *a4);  /* 0x00988978 */
int __fastcall sub_60988B14(int a1, int a2, int a3, int a4, int a5);  /* 0x00988b14 */
int __fastcall sub_60988B24(int a1, int a2, int a3, int a4, int a5);  /* 0x00988b24 */
int __fastcall sub_609890E8(int a1, int a2, int a3, int a4);  /* 0x009890e8 */
int __fastcall sub_60989140(_DWORD *a1, int a2, _DWORD *a3, int a4, int a5);  /* 0x00989140 */
int __fastcall sub_60989190(int a1, int a2, int *a3, int a4, int a5);  /* 0x00989190 */
int __fastcall sub_609891D4(int a1, int a2, int a3, int a4, int a5);  /* 0x009891d4 */
int __fastcall sub_609892BC(int a1, int a2, int a3, int a4, int a5);  /* 0x009892bc */
int __fastcall sub_609892CC(_BYTE *a1, int a2, _DWORD *a3, int a4, int a5);  /* 0x009892cc */
int __fastcall sub_6098937C(float *a1, int a2, int *a3, int a4, int a5);  /* 0x0098937c */
int __fastcall sub_609894D0(int a1, int a2, int a3, int a4, unsigned __int16 *a5);  /* 0x009894d0 */
int __fastcall sub_60989568(int a1, int a2, int a3, int a4, int a5);  /* 0x00989568 */
int __fastcall sub_609896C4(int a1, _WORD *a2, _WORD *a3);  /* 0x009896c4 */
int __fastcall sub_609896D4(int a1);  /* 0x009896d4 */
int __fastcall sub_609896E8(int a1, _DWORD *a2);  /* 0x009896e8 */
int __fastcall sub_609897CC(int a1, _DWORD *a2, unsigned __int8 *a3, int a4, int a5);  /* 0x009897cc */
int __fastcall sub_609898C0(int a1);  /* 0x009898c0 */
int __fastcall sub_60989910(_DWORD *a1);  /* 0x00989910 */
unsigned int __fastcall sub_60989920(_DWORD *a1, int a2, int a3, int a4, unsigned int a5, int a6);  /* 0x00989920 */
int __fastcall sub_609899A4(_DWORD *a1, int a2, int a3, int a4, int a5);  /* 0x009899a4 */
int __fastcall play_ref(int a1, int a2);  /* 0x00989a38 */
int __fastcall sub_60989B90(int a1);  /* 0x00989b90 */
int __fastcall sub_60989BCC(int a1, int a2);  /* 0x00989bcc */
int __fastcall sub_60989CC8(float *a1, int a2);  /* 0x00989cc8 */
int __fastcall sub_60989D2C(int a1);  /* 0x00989d2c */
int __fastcall sub_60989D54(int a1);  /* 0x00989d54 */
int __fastcall sub_60989D78(int a1);  /* 0x00989d78 */
int __fastcall sub_60989DA0(int a1);  /* 0x00989da0 */
int __fastcall sub_60989DE8(_DWORD *a1, int a2);  /* 0x00989de8 */
int __fastcall sub_60989E30(_DWORD *a1);  /* 0x00989e30 */
int __fastcall sub_60989E6C(int a1);  /* 0x00989e6c */
int __fastcall sub_6098A12C(int a1, signed int a2, int a3);  /* 0x0098a12c */
int __fastcall sub_6098A224(int result, int a2, int a3);  /* 0x0098a224 */
int __fastcall sub_6098A304(_DWORD *a1, unsigned int a2);  /* 0x0098a304 */
bool __fastcall sub_6098A404(int a1, void *a2);  /* 0x0098a404 */
int __fastcall sub_6098A534(int a1, int a2, int a3);  /* 0x0098a534 */
int __fastcall sub_6098A9E0(int a1, _DWORD *a2);  /* 0x0098a9e0 */
int __fastcall sub_6098AAD8(int a1, _DWORD *a2);  /* 0x0098aad8 */
int __fastcall sub_6098AC2C(int *a1, int a2);  /* 0x0098ac2c */
int __fastcall sub_6098AC54(int a1, int a2);  /* 0x0098ac54 */
int __fastcall sub_6098B060(int a1);  /* 0x0098b060 */
int __fastcall sub_6098B104(struct sead_IDisposer *a1);  /* 0x0098b104 */
bool __fastcall sub_6098B114(int a1, void *a2);  /* 0x0098b114 */
int __fastcall sub_6098B2FC(int result);  /* 0x0098b2fc */
int __fastcall sub_6098B314(int a1);  /* 0x0098b314 */
int __fastcall sub_6098B384(int a1, int a2, int *a3);  /* 0x0098b384 */
int __fastcall sub_6098B540(int a1);  /* 0x0098b540 */
int __fastcall sub_6098B5A8(int result, int a2);  /* 0x0098b5a8 */
int __fastcall sub_6098B5D8(int a1, int a2, int a3);  /* 0x0098b5d8 */
int __fastcall sub_6098B5F4(int a1, int a2);  /* 0x0098b5f4 */
int __fastcall sub_6098B9E0(int a1);  /* 0x0098b9e0 */
int __fastcall sub_6098B9F0(int *a1, int a2, int a3, int *a4, int a5, char a6, int a7);  /* 0x0098b9f0 */
int __fastcall sub_6098BD10(int a1, int a2, int a3, int a4);  /* 0x0098bd10 */
int __fastcall sub_6098BDA0(int result, int a2);  /* 0x0098bda0 */
bool __fastcall sub_6098BDC8(int a1);  /* 0x0098bdc8 */
bool __fastcall sub_6098BDF0(int a1);  /* 0x0098bdf0 */
int __fastcall sub_6098BE3C(int a1, int a2);  /* 0x0098be3c */
int __fastcall sub_6098BE5C(int a1, int a2);  /* 0x0098be5c */
int __fastcall sub_6098BE98(int result, int a2);  /* 0x0098be98 */
int __fastcall sub_6098BED8(int a1);  /* 0x0098bed8 */
int __fastcall sub_6098C20C(int a1, int a2, int a3);  /* 0x0098c20c */
int __fastcall sub_6098C258(int a1);  /* 0x0098c258 */
int __fastcall sub_6098C368(int a1, unsigned __int8 *a2, int a3, int a4);  /* 0x0098c368 */
int __fastcall sub_6098C810(_DWORD *a1);  /* 0x0098c810 */
int __fastcall sub_6098C868(_DWORD *a1);  /* 0x0098c868 */
void __fastcall sub_6098C9B8(_DWORD **a1);  /* 0x0098c9b8 */
int __fastcall sub_6098CA14(int *a1);  /* 0x0098ca14 */
int __fastcall sub_6098CA50(int *a1, int a2, _DWORD *a3, int a4);  /* 0x0098ca50 */
int __fastcall sub_6098CAD0(int a1, int a2, int a3);  /* 0x0098cad0 */
int __fastcall sub_6098CB2C(_DWORD *a1, int a2);  /* 0x0098cb2c */
int __fastcall sub_6098CC64(_DWORD *a1);  /* 0x0098cc64 */
int __fastcall sub_6098CC88(_BYTE *a1);  /* 0x0098cc88 */
int __fastcall sub_6098CCBC(int a1, int a2);  /* 0x0098ccbc */
int __fastcall sub_6098CE0C(_DWORD *a1);  /* 0x0098ce0c */
int __fastcall sub_6098CE30(int a1);  /* 0x0098ce30 */
int __fastcall sub_6098CE90(int a1);  /* 0x0098ce90 */
int __fastcall sub_6098CE9C(int a1, int a2);  /* 0x0098ce9c */
int __fastcall sub_6098CEB8(int a1);  /* 0x0098ceb8 */
int __fastcall sub_6098CEC4(int a1);  /* 0x0098cec4 */
int __fastcall sub_6098CF00(int a1, int a2);  /* 0x0098cf00 */
int __fastcall sub_6098CF60(int a1);  /* 0x0098cf60 */
int __fastcall sub_6098CF9C(int a1, int a2);  /* 0x0098cf9c */
int __fastcall sub_6098CFB4(_DWORD *a1, int a2);  /* 0x0098cfb4 */
int __fastcall sub_6098D054(int a1, int a2);  /* 0x0098d054 */
int __fastcall sub_6098D080(_DWORD *a1, int *a2, int a3);  /* 0x0098d080 */
int __fastcall sub_6098D17C(int a1);  /* 0x0098d17c */
int __fastcall sub_6098D188(int a1, int a2);  /* 0x0098d188 */
int __fastcall sub_6098D238(int a1, int a2);  /* 0x0098d238 */
int __fastcall sub_6098D3D8(struct sead_IDisposer *a1);  /* 0x0098d3d8 */
int __fastcall sub_6098D450(struct sead_Heap *a1);  /* 0x0098d450 */
int __fastcall sub_6098D5E8(_DWORD *a1);  /* 0x0098d5e8 */
int __fastcall sub_6098D5F8(int a1, int *a2);  /* 0x0098d5f8 */
int __fastcall sub_6098D8F8(int a1, int a2);  /* 0x0098d8f8 */
int __fastcall sub_6098D964(int result, int a2);  /* 0x0098d964 */
int __fastcall sub_6098DBCC(_DWORD *a1, int a2);  /* 0x0098dbcc */
void __fastcall sub_6098DC24(int a1);  /* 0x0098dc24 */
int __fastcall sub_6098DC7C(int a1);  /* 0x0098dc7c */
int __fastcall sub_6098DD78(_DWORD *a1);  /* 0x0098dd78 */
int __fastcall sub_6098DD90(int a1);  /* 0x0098dd90 */
int __fastcall sub_6098DF8C(int a1, int a2);  /* 0x0098df8c */
int __fastcall sub_6098E0F8(int a1, int a2);  /* 0x0098e0f8 */
int __fastcall sub_6098E23C(int *a1, _DWORD *a2);  /* 0x0098e23c */
unsigned int __fastcall sub_6098E2E8(unsigned int result);  /* 0x0098e2e8 */
int __fastcall sub_6098E314(int a1, int a2);  /* 0x0098e314 */
int __fastcall sub_6098E7C4(int a1, int a2);  /* 0x0098e7c4 */
int __fastcall sub_6098EA0C(_BYTE *a1, int a2, int *a3);  /* 0x0098ea0c */
int __fastcall sub_6098EDFC(int a1, int a2);  /* 0x0098edfc */
int __fastcall sub_6098F0E0(int a1, int a2, int a3);  /* 0x0098f0e0 */
int __fastcall sub_6098F1D4(int a1);  /* 0x0098f1d4 */
int __fastcall sub_6098F300(_QWORD *a1);  /* 0x0098f300 */
int __fastcall sub_6098F408(_DWORD *a1, int a2, int a3);  /* 0x0098f408 */
int __fastcall sub_609900F4(int a1);  /* 0x009900f4 */
int __fastcall sub_60990254(int a1, int a2);  /* 0x00990254 */
signed int __fastcall sub_609902D8(int *a1, _BYTE *a2, int a3);  /* 0x009902d8 */
int __fastcall sub_609903D4(int *a1, unsigned __int8 *a2, int a3);  /* 0x009903d4 */
int __fastcall sub_6099088C(int a1, int a2);  /* 0x0099088c */
int __fastcall sub_609909D8(_QWORD *a1, int a2);  /* 0x009909d8 */
int __fastcall sub_60990A1C(_QWORD *a1, int a2);  /* 0x00990a1c */
int __fastcall sub_60990A58(int *a1);  /* 0x00990a58 */
int __fastcall sub_60990A70(int *a1);  /* 0x00990a70 */
bool __fastcall sub_60990A88(int a1);  /* 0x00990a88 */
int __fastcall sub_60991174(int result, int a2);  /* 0x00991174 */
int __fastcall sub_60991198(int a1, int a2, _DWORD *a3);  /* 0x00991198 */
int __fastcall sub_6099125C(int a1);  /* 0x0099125c */
bool __fastcall sub_6099127C(int a1, float *a2);  /* 0x0099127c */
int __fastcall sub_609912A4(int a1);  /* 0x009912a4 */
bool __fastcall sub_609912F8(int a1);  /* 0x009912f8 */
int __fastcall sub_60991358(_WORD *a1);  /* 0x00991358 */
int __fastcall sub_60991378(int a1);  /* 0x00991378 */
int __fastcall sub_609913C0(int a1);  /* 0x009913c0 */
int __fastcall sub_60991414(int a1, unsigned int a2);  /* 0x00991414 */
int __fastcall sub_6099145C(int a1);  /* 0x0099145c */
int __fastcall sub_609914B0(int a1);  /* 0x009914b0 */
int __fastcall sub_60991504(int a1);  /* 0x00991504 */
int __fastcall sub_6099157C(int a1);  /* 0x0099157c */
int __fastcall sub_60991630(int a1);  /* 0x00991630 */
int __fastcall sub_60991688(int a1);  /* 0x00991688 */
int __fastcall sub_6099169C(int a1);  /* 0x0099169c */
int __fastcall sub_609916B0(int a1);  /* 0x009916b0 */
int __fastcall sub_609916C4(_BYTE *a1);  /* 0x009916c4 */
int __fastcall sub_60991758(unsigned __int8 *a1);  /* 0x00991758 */
int __fastcall sub_609917C0(int a1);  /* 0x009917c0 */
int __fastcall sub_60991858(int result, int a2);  /* 0x00991858 */
int __fastcall sub_609918B8(int result, int a2);  /* 0x009918b8 */
int __fastcall sub_60991A78(int result);  /* 0x00991a78 */
int __fastcall sub_60991B10(int result);  /* 0x00991b10 */
int __fastcall sub_60991BA4(int result);  /* 0x00991ba4 */
int __fastcall sub_60991C3C(int result);  /* 0x00991c3c */
int __fastcall sub_60991CD0(_DWORD *a1);  /* 0x00991cd0 */
int __fastcall sub_60991CE8(_DWORD *a1);  /* 0x00991ce8 */
int __fastcall sub_60991D00(_DWORD *a1);  /* 0x00991d00 */
int __fastcall sub_60991D18(int a1);  /* 0x00991d18 */
int __fastcall sub_609921B8(int result, int a2);  /* 0x009921b8 */
int __fastcall sub_609921D4(_BYTE *a1);  /* 0x009921d4 */
int __fastcall sub_60992254(_BYTE *a1);  /* 0x00992254 */
int __fastcall sub_609922CC(_BYTE *a1);  /* 0x009922cc */
int __fastcall sub_6099236C(unsigned __int8 *a1);  /* 0x0099236c */
int __fastcall sub_609923F4(int a1);  /* 0x009923f4 */
int __fastcall sub_60992404(int a1);  /* 0x00992404 */
int __fastcall sub_60992414(int a1);  /* 0x00992414 */
int __fastcall sub_60992424(int a1);  /* 0x00992424 */
int __fastcall sub_60992434(int result, char a2);  /* 0x00992434 */
int __fastcall sub_6099243C(int result, char a2);  /* 0x0099243c */
int __fastcall sub_60992444(int a1);  /* 0x00992444 */
int __fastcall sub_609925B8(_DWORD *a1, int a2, int a3, int a4, int a5);  /* 0x009925b8 */
int __fastcall sub_60992D00(int result, int a2);  /* 0x00992d00 */
int __fastcall sub_60992D4C(int a1);  /* 0x00992d4c */
int __fastcall sub_60992E74(int a1, int a2, int a3, int a4);  /* 0x00992e74 */
int __fastcall sub_60993230(int a1, int a2);  /* 0x00993230 */
int __fastcall sub_60993318(unsigned __int8 *a1);  /* 0x00993318 */
int __fastcall sub_60993378(unsigned __int8 *a1);  /* 0x00993378 */
int __fastcall sub_609933BC(int a1);  /* 0x009933bc */
int __fastcall sub_609935B8(int a1, int a2, int *a3);  /* 0x009935b8 */
int __fastcall sub_6099360C(int result, float *a2);  /* 0x0099360c */
int __fastcall sub_60993670(int *a1);  /* 0x00993670 */
int __fastcall sub_60993690(int a1, int a2, _DWORD *a3);  /* 0x00993690 */
int __fastcall sub_60993784(int a1);  /* 0x00993784 */
int __fastcall sub_609937A8(_WORD *a1);  /* 0x009937a8 */
int __fastcall sub_60993A0C(int a1, int a2, int a3, int a4, int a5);  /* 0x00993a0c */
int __fastcall sub_60993D34(int a1);  /* 0x00993d34 */
int __fastcall sub_60993EB0(int a1);  /* 0x00993eb0 */
unsigned int __fastcall sub_60993F54(int a1, int a2, int a3, int a4);  /* 0x00993f54 */
unsigned int __fastcall sub_60994058(int a1, int a2, int a3, int a4);  /* 0x00994058 */
int __fastcall sub_60994728(int result);  /* 0x00994728 */
int __fastcall sub_609949B8(int a1, int a2, _DWORD *a3);  /* 0x009949b8 */
bool __fastcall sub_60994A94(int a1, float *a2);  /* 0x00994a94 */
int __fastcall sub_60994AA8(_BYTE *a1);  /* 0x00994aa8 */
int __fastcall sub_60994B28(unsigned __int8 *a1);  /* 0x00994b28 */
int __fastcall sub_60994B6C(int a1);  /* 0x00994b6c */
int __fastcall sub_60994B94(int a1);  /* 0x00994b94 */
int __fastcall sub_60994BA8(unsigned __int8 *a1);  /* 0x00994ba8 */
int __fastcall sub_60994C00(int a1);  /* 0x00994c00 */
int __fastcall sub_60994C10(int a1);  /* 0x00994c10 */
int __fastcall sub_60994DA4(_BYTE *a1);  /* 0x00994da4 */
int __fastcall sub_60994E20(int a1);  /* 0x00994e20 */
int __fastcall sub_60994E54(_DWORD *a1);  /* 0x00994e54 */
bool __fastcall sub_60995758(int a1, float *a2);  /* 0x00995758 */
int __fastcall sub_6099576C(_WORD *a1);  /* 0x0099576c */
int __fastcall sub_6099578C(unsigned __int8 *a1);  /* 0x0099578c */
int __fastcall sub_609957D0(int a1, int a2, _DWORD *a3);  /* 0x009957d0 */
int __fastcall sub_609958EC(unsigned __int8 *a1);  /* 0x009958ec */
int __fastcall sub_60995964(int a1);  /* 0x00995964 */
int __fastcall sub_60995984(int a1);  /* 0x00995984 */
int __fastcall sub_609959A4(int a1);  /* 0x009959a4 */
int __fastcall sub_609959D0(int a1);  /* 0x009959d0 */
int __fastcall sub_609959F8(int a1);  /* 0x009959f8 */
int __fastcall sub_60995A0C(int a1);  /* 0x00995a0c */
int __fastcall sub_60995CFC(int a1, int a2, int *a3);  /* 0x00995cfc */
unsigned int __fastcall sub_60995F60(int a1);  /* 0x00995f60 */
int __fastcall sub_60995FBC(_DWORD *a1, _DWORD *a2);  /* 0x00995fbc */
int __fastcall sub_60996004(int result, float *a2);  /* 0x00996004 */
int __fastcall sub_6099606C(int *a1);  /* 0x0099606c */
bool __fastcall sub_609960BC(int a1, float *a2);  /* 0x009960bc */
int __fastcall sub_609960E0(int a1, int a2, _DWORD *a3);  /* 0x009960e0 */
int __fastcall sub_609961D4(int a1);  /* 0x009961d4 */
int __fastcall sub_609961D8(int a1);  /* 0x009961d8 */
int __fastcall sub_60996258(int a1);  /* 0x00996258 */
int __fastcall sub_609962E4(unsigned __int8 *a1);  /* 0x009962e4 */
int __fastcall sub_60996310(int result);  /* 0x00996310 */
int __fastcall sub_60996380(int a1);  /* 0x00996380 */
int __fastcall sub_609963E0(unsigned __int8 *a1);  /* 0x009963e0 */
int __fastcall sub_60996434(_BYTE *a1);  /* 0x00996434 */
int __fastcall sub_60996478(unsigned __int8 *a1);  /* 0x00996478 */
int __fastcall sub_609964AC(unsigned __int8 *a1);  /* 0x009964ac */
int __fastcall sub_60996528(unsigned int a1);  /* 0x00996528 */
int __fastcall sub_60996920(_DWORD *a1);  /* 0x00996920 */
int __fastcall sub_6099696C(_DWORD *a1);  /* 0x0099696c */
int __fastcall sub_609969BC(_DWORD *a1, int a2, int a3);  /* 0x009969bc */
int __fastcall sub_60996ACC(_DWORD *a1);  /* 0x00996acc */
int __fastcall sub_60996CEC(int a1);  /* 0x00996cec */
int __fastcall sub_60996D20(int result, int a2);  /* 0x00996d20 */
int __fastcall sub_60996D8C(int a1, unsigned int a2);  /* 0x00996d8c */
int __fastcall sub_60996E70(int result, int a2);  /* 0x00996e70 */
int __fastcall sub_60996EE8(int a1, int a2);  /* 0x00996ee8 */
int __fastcall sub_60996F34(int a1);  /* 0x00996f34 */
int __fastcall sub_60997330(int a1, int a2);  /* 0x00997330 */
int __fastcall sub_60997750(int result, int a2, int *a3);  /* 0x00997750 */
bool __fastcall sub_609977CC(int a1, int a2);  /* 0x009977cc */
int __fastcall sub_60997840(int a1, int a2, int a3);  /* 0x00997840 */
int __fastcall sub_609978D8(int a1, _DWORD *a2);  /* 0x009978d8 */
bool __fastcall sub_609978F4(int a1, void *a2);  /* 0x009978f4 */
int __fastcall sub_609979EC(int a1);  /* 0x009979ec */
int __fastcall sub_60997A9C(_DWORD *a1);  /* 0x00997a9c */
int __fastcall sub_60997AF4(int a1, int a2, int a3, int a4);  /* 0x00997af4 */
int __fastcall sub_6099816C(int a1, int a2, int a3, int a4);  /* 0x0099816c */
int __fastcall sub_60998240(int a1, int a2);  /* 0x00998240 */
int __fastcall sub_6099826C(bool *a1, int a2);  /* 0x0099826c */
int __fastcall sub_609982F0(unsigned __int16 *a1, int a2, int a3);  /* 0x009982f0 */
int __fastcall sub_60998498(int a1, int a2, int *a3);  /* 0x00998498 */
int __fastcall sub_609984F4(int a1);  /* 0x009984f4 */
int __fastcall sub_60998564(int a1);  /* 0x00998564 */
int __fastcall sub_60998608(int a1);  /* 0x00998608 */
int __fastcall sub_60998628(int a1);  /* 0x00998628 */
int __fastcall sub_60998680(int a1);  /* 0x00998680 */
int __fastcall sub_60998748(int a1);  /* 0x00998748 */
int __fastcall sub_60998758(int a1, int a2, void (*a3)(void), int a4, void (__fastcall *a5)(int *));  /* 0x00998758 */
int __fastcall sub_60998C88(int a1);  /* 0x00998c88 */
int __fastcall sub_60998CC4(int result, int a2, int a3);  /* 0x00998cc4 */
int __fastcall sub_60998CD0(int a1, int a2, int a3);  /* 0x00998cd0 */
int __fastcall sub_60998DB4(_BYTE *a1, int a2);  /* 0x00998db4 */
int __fastcall sub_60998EA8(int result);  /* 0x00998ea8 */
int __fastcall sub_60998EF4(int result);  /* 0x00998ef4 */
int __fastcall sub_60998F30(int result);  /* 0x00998f30 */
int __fastcall sub_60998F7C(int result);  /* 0x00998f7c */
int __fastcall sub_60998FA0(int result);  /* 0x00998fa0 */
int __fastcall sub_60998FD0(int *a1, unsigned int a2, int a3, int a4);  /* 0x00998fd0 */
int __fastcall sub_6099902C(int *a1, int a2, __int16 a3, __int16 a4);  /* 0x0099902c */
int __fastcall sub_609990CC(int a1, int a2, int a3);  /* 0x009990cc */
int __fastcall sub_60999294(int *a1);  /* 0x00999294 */
int __fastcall sub_609992C4(int a1, int a2, unsigned __int64 a3);  /* 0x009992c4 */
int __fastcall sub_60999730(int a1);  /* 0x00999730 */
int __fastcall sub_60999968(_DWORD *a1, _DWORD *a2, int *a3);  /* 0x00999968 */
int __fastcall sub_60999AFC(int a1, int a2);  /* 0x00999afc */
int __fastcall sub_60999B6C(int a1);  /* 0x00999b6c */
int __fastcall sub_60999BFC(_DWORD *a1);  /* 0x00999bfc */
int __fastcall sub_60999C14(_DWORD *a1);  /* 0x00999c14 */
int __fastcall sub_60999C38(int a1, int a2);  /* 0x00999c38 */
int __fastcall sub_60999C60(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x00999c60 */
bool __fastcall sub_60999F60(int a1);  /* 0x00999f60 */
int __fastcall sub_60999F78(int a1);  /* 0x00999f78 */
int __fastcall sub_6099A074(int a1);  /* 0x0099a074 */
int __fastcall sub_6099A0F0(int a1);  /* 0x0099a0f0 */
int __fastcall sub_6099A198(_DWORD *a1);  /* 0x0099a198 */
int __fastcall sub_6099A1C0(int a1, int (__fastcall *a2)(int, _DWORD));  /* 0x0099a1c0 */
int __fastcall sub_6099A1D4(int a1);  /* 0x0099a1d4 */
int __fastcall sub_6099A1E0(int a1);  /* 0x0099a1e0 */
int __fastcall sub_6099A1EC(int a1);  /* 0x0099a1ec */
int __fastcall sub_6099A1F8(int a1);  /* 0x0099a1f8 */
int __fastcall sub_6099A204(int a1);  /* 0x0099a204 */
int __fastcall sub_6099A218(int a1);  /* 0x0099a218 */
int __fastcall sub_6099A230(int a1);  /* 0x0099a230 */
int __fastcall sub_6099A248(int a1);  /* 0x0099a248 */
int __fastcall sub_6099A25C(int a1);  /* 0x0099a25c */
int __fastcall sub_6099A27C(int a1);  /* 0x0099a27c */
int __fastcall sub_6099A298(int a1);  /* 0x0099a298 */
int __fastcall sub_6099A2A4(int a1);  /* 0x0099a2a4 */
int __fastcall sub_6099A2E0(_DWORD *a1, unsigned int a2);  /* 0x0099a2e0 */
int __fastcall sub_6099A310(_DWORD *a1, unsigned int a2);  /* 0x0099a310 */
int __fastcall sub_6099A454(int a1, char a2);  /* 0x0099a454 */
int __fastcall sub_6099A464(int a1);  /* 0x0099a464 */
int __fastcall sub_6099A47C(_DWORD *a1, unsigned int a2);  /* 0x0099a47c */
int __fastcall sub_6099A500(_DWORD *a1, int a2, unsigned int a3);  /* 0x0099a500 */
int __fastcall sub_6099A53C(int a1, int a2, unsigned int a3);  /* 0x0099a53c */
bool __fastcall sub_6099A680(_DWORD *a1, unsigned int a2);  /* 0x0099a680 */
int __fastcall sub_6099A6A0(int a1, unsigned int a2, unsigned int a3);  /* 0x0099a6a0 */
int __fastcall sub_6099A814(int a1);  /* 0x0099a814 */
int __fastcall sub_6099A864(int result, int a2, int a3);  /* 0x0099a864 */
int __fastcall sub_6099A874(int a1);  /* 0x0099a874 */
int __fastcall sub_6099A880(int a1);  /* 0x0099a880 */
int __fastcall sub_6099A88C(int a1);  /* 0x0099a88c */
int __fastcall sub_6099A894(int a1);  /* 0x0099a894 */
int __fastcall sub_6099A89C(int result, char a2);  /* 0x0099a89c */
bool __fastcall sub_6099A8A4(int a1);  /* 0x0099a8a4 */
int __fastcall sub_6099A8BC(int a1);  /* 0x0099a8bc */
unsigned int __fastcall sub_6099A8D4(int a1, int a2);  /* 0x0099a8d4 */
int __fastcall sub_6099A9B4(int a1, int a2);  /* 0x0099a9b4 */
int __fastcall sub_6099AA58(int a1, int *a2, int a3, int a4);  /* 0x0099aa58 */
int __fastcall sub_6099AC6C(_DWORD *a1);  /* 0x0099ac6c */
int __fastcall sub_6099ACC4(int a1);  /* 0x0099acc4 */
int __fastcall sub_6099ACD0(int a1);  /* 0x0099acd0 */
int __fastcall sub_6099AD34(_DWORD *a1);  /* 0x0099ad34 */
int __fastcall sub_6099AD8C(_DWORD *a1, unsigned int a2, unsigned __int16 a3, __int16 a4, int a5);  /* 0x0099ad8c */
int __fastcall sub_6099B034(_DWORD *a1, int a2, int a3);  /* 0x0099b034 */
int __fastcall sub_6099B0F0(int a1, unsigned int a2, unsigned __int16 a3, int a4);  /* 0x0099b0f0 */
int __fastcall nn_atk_FsSoundArchive_ctor(int a1);  /* 0x0099bb78 */
int __fastcall sub_6099BBD4(int a1);  /* 0x0099bbd4 */
int __fastcall sub_6099BC78(_BYTE *a1);  /* 0x0099bc78 */
int __fastcall sub_6099BCB8(int a1);  /* 0x0099bcb8 */
int __fastcall sub_6099BCC8(int a1, const char *a2);  /* 0x0099bcc8 */
int __fastcall sub_6099BE7C(int a1, int a2, unsigned int a3, int a4, int a5);  /* 0x0099be7c */
int __fastcall sub_6099BEBC(int a1, int a2, unsigned int a3, int a4, int a5, int a6);  /* 0x0099bebc */
int __fastcall sub_6099BF58(int a1, int a2, unsigned int a3);  /* 0x0099bf58 */
int __fastcall sub_6099BFFC(int a1, int a2, unsigned int a3);  /* 0x0099bffc */
int __fastcall sub_6099C0B0(int a1);  /* 0x0099c0b0 */
int __fastcall sub_6099C108(int a1);  /* 0x0099c108 */
int __fastcall sub_6099C210(int result);  /* 0x0099c210 */
int __fastcall sub_6099C218(int result);  /* 0x0099c218 */
int __fastcall sub_6099C220(int result);  /* 0x0099c220 */
int __fastcall sub_6099C228(int result);  /* 0x0099c228 */
int __fastcall sub_6099C230(int result);  /* 0x0099c230 */
int __fastcall sub_6099C27C(int a1);  /* 0x0099c27c */
int __fastcall sub_6099C28C(int a1);  /* 0x0099c28c */
int __fastcall sub_6099C29C(int a1);  /* 0x0099c29c */
int __fastcall sub_6099C2AC(int a1);  /* 0x0099c2ac */
int __fastcall sub_6099C2BC(int a1);  /* 0x0099c2bc */
int __fastcall sub_6099C2CC(int a1);  /* 0x0099c2cc */
int __fastcall sub_6099C2DC(int a1);  /* 0x0099c2dc */
int __fastcall sub_6099C2EC(int a1);  /* 0x0099c2ec */
int __fastcall sub_6099C2FC(int a1);  /* 0x0099c2fc */
int __fastcall sub_6099C30C(int a1);  /* 0x0099c30c */
unsigned int __fastcall sub_6099C31C(int a1, int a2, int a3);  /* 0x0099c31c */
int __fastcall sub_6099C3C8(int a1);  /* 0x0099c3c8 */
int __fastcall sub_6099C3D8(int a1);  /* 0x0099c3d8 */
int __fastcall sub_6099C3E8(int a1);  /* 0x0099c3e8 */
int __fastcall sub_6099C3F8(int a1);  /* 0x0099c3f8 */
int __fastcall sub_6099C408(int a1);  /* 0x0099c408 */
int __fastcall sub_6099C418(int a1);  /* 0x0099c418 */
int __fastcall sub_6099C428(int a1);  /* 0x0099c428 */
int __fastcall sub_6099C438(int a1);  /* 0x0099c438 */
int __fastcall sub_6099C448(int a1);  /* 0x0099c448 */
int __fastcall sub_6099C490(_DWORD *a1);  /* 0x0099c490 */
int __fastcall sub_6099C4CC(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x0099c4cc */
int __fastcall sub_6099C5EC(int a1);  /* 0x0099c5ec */
int __fastcall sub_6099C5F8(int a1);  /* 0x0099c5f8 */
int __fastcall sub_6099C650(int a1, unsigned int a2, int a3);  /* 0x0099c650 */
int __fastcall sub_6099C8F0(int result, int a2);  /* 0x0099c8f0 */
unsigned int __fastcall sub_6099C998(int a1, unsigned int a2, unsigned int a3);  /* 0x0099c998 */
int __fastcall sub_6099CA94(int a1, int a2, unsigned int a3);  /* 0x0099ca94 */
int __fastcall sub_6099CB68(int a1);  /* 0x0099cb68 */
int __fastcall sub_6099CBF8(int a1);  /* 0x0099cbf8 */
unsigned int __fastcall sub_6099CC40(_DWORD *a1, int a2);  /* 0x0099cc40 */
bool __fastcall sub_6099CCE0(int a1, unsigned int a2);  /* 0x0099cce0 */
int __fastcall sub_6099CD0C(int a1, int a2, int a3);  /* 0x0099cd0c */
int __fastcall sub_6099CFD4(int a1);  /* 0x0099cfd4 */
bool __fastcall sub_6099D068(int a1, void *a2);  /* 0x0099d068 */
int __fastcall sub_6099D1DC(int a1);  /* 0x0099d1dc */
int __fastcall sub_6099D1E8(int a1);  /* 0x0099d1e8 */
int __fastcall sub_6099D1F0(_DWORD *a1);  /* 0x0099d1f0 */
int __fastcall sub_6099D20C(int a1);  /* 0x0099d20c */
bool __fastcall sub_6099D214(int a1);  /* 0x0099d214 */
int __fastcall sub_6099D28C(int a1, int a2, int a3);  /* 0x0099d28c */
bool __fastcall sub_6099D3F0(int a1, void *a2);  /* 0x0099d3f0 */
int __fastcall sub_6099D5D8(_DWORD *a1);  /* 0x0099d5d8 */
int __fastcall sub_6099D5F0(int a1);  /* 0x0099d5f0 */
int __fastcall sub_6099D604(int result, int a2);  /* 0x0099d604 */
int __fastcall sub_6099D668(int a1, int a2);  /* 0x0099d668 */
int __fastcall sub_6099D744(int a1, int a2);  /* 0x0099d744 */
int __fastcall sub_6099D794(int a1);  /* 0x0099d794 */
int __fastcall sub_6099D7C0(int a1, int a2, int a3);  /* 0x0099d7c0 */
int __fastcall sub_6099D7EC(int a1);  /* 0x0099d7ec */
int __fastcall sub_6099D81C(int a1, float *a2);  /* 0x0099d81c */
int __fastcall sub_6099D9D0(int a1, float *a2);  /* 0x0099d9d0 */
int __fastcall sub_6099DB7C(int result, int a2);  /* 0x0099db7c */
int __fastcall sub_6099DBE0(int a1, int a2);  /* 0x0099dbe0 */
int __fastcall sub_6099DCBC(int a1, int a2);  /* 0x0099dcbc */
int __fastcall sub_6099DD10(int a1);  /* 0x0099dd10 */
int __fastcall sub_6099DD4C(int a1, int a2, int a3);  /* 0x0099dd4c */
int __fastcall sub_6099DD88(int a1);  /* 0x0099dd88 */
int __fastcall sub_6099DDC8(int a1, float *a2);  /* 0x0099ddc8 */
int __fastcall sub_6099DF74(int a1, float *a2);  /* 0x0099df74 */
int __fastcall sub_6099E254(int a1);  /* 0x0099e254 */
int __fastcall sub_6099E84C(_DWORD *a1, signed int a2, int a3);  /* 0x0099e84c */
int __fastcall sub_6099E924(unsigned int *a1, const char *a2, int a3);  /* 0x0099e924 */
int __fastcall sub_6099EB58(int a1, int a2, int a3);  /* 0x0099eb58 */
int __fastcall sub_6099EB88(_DWORD *a1, int a2);  /* 0x0099eb88 */
bool __fastcall sub_6099EC24(_DWORD *a1, unsigned int a2, unsigned int *a3, int a4);  /* 0x0099ec24 */
unsigned int __fastcall sub_6099EE5C(int a1);  /* 0x0099ee5c */
int __fastcall sub_6099F094(int a1);  /* 0x0099f094 */
int __fastcall sub_6099F148(_DWORD *a1);  /* 0x0099f148 */
unsigned int __fastcall sub_6099F1E8(_DWORD *a1, int a2);  /* 0x0099f1e8 */
int __fastcall sub_6099F5D4(_DWORD *a1, _DWORD *a2, _DWORD *a3);  /* 0x0099f5d4 */

