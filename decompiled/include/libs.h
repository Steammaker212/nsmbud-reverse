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

/* RVAs are image-relative: VA = 0x60000000 + RVA */

/* ---- libs.c ---- */
int __fastcall sub_608007BC(int a1);  /* 0x008007bc */
int __fastcall sub_60800894(int a1, int a2, int a3);  /* 0x00800894 */
int __fastcall sub_60800970(int result, int a2);  /* 0x00800970 */
int __fastcall sub_60800A24(int result, float *a2);  /* 0x00800a24 */
int __fastcall sub_60800A5C(int result, int a2);  /* 0x00800a5c */
int __fastcall sub_60800B08(float *a1, float *a2, int a3);  /* 0x00800b08 */
int __fastcall sub_60800BCC(int result, _DWORD *a2, float *a3);  /* 0x00800bcc */
int __fastcall sub_60800C84(int a1, float **a2, int a3);  /* 0x00800c84 */
int __fastcall sub_60800CC0(int a1, int a2);  /* 0x00800cc0 */
int __fastcall sub_60801120(int a1, float **a2, int a3, int a4, int a5);  /* 0x00801120 */
void __fastcall sub_6080126C(_DWORD *a1, float **a2);  /* 0x0080126c */
bool __fastcall sub_608012F4(int a1);  /* 0x008012f4 */
int __fastcall sub_60801334(int a1, int a2);  /* 0x00801334 */
int __fastcall sub_608013D0(int *a1, float *a2, int a3, int a4);  /* 0x008013d0 */
int __fastcall sub_608014F8(int a1, int a2, int a3, int a4);  /* 0x008014f8 */
int __fastcall sub_6080161C(int a1, int a2, int a3);  /* 0x0080161c */
int __fastcall sub_608016E8(int result, float *a2, int a3, int a4);  /* 0x008016e8 */
int __fastcall sub_60801774(float *a1, int a2);  /* 0x00801774 */
int __fastcall sub_60801818(int a1, int a2, int a3);  /* 0x00801818 */
int __fastcall sub_60801B98(int a1, int *a2, _DWORD *a3);  /* 0x00801b98 */
int __fastcall sub_60801C9C(int a1, float *a2, int a3, int a4, int a5, int a6);  /* 0x00801c9c */
void __fastcall sub_60801DB0(float *a1, int a2, float *a3, float *a4, int a5);  /* 0x00801db0 */
int __fastcall sub_60801EC4(int a1, int a2);  /* 0x00801ec4 */
int __fastcall sub_60801F98(float *a1, int a2);  /* 0x00801f98 */
int __fastcall sub_60802020(int a1, float **a2, float *a3);  /* 0x00802020 */
int __fastcall sub_60802830(unsigned int a1);  /* 0x00802830 */
int __fastcall sub_60802928(_DWORD *a1, int a2, int a3, int a4, int a5);  /* 0x00802928 */
void __fastcall sub_60802E70(_DWORD *a1, int a2, int a3, float *a4, int a5);  /* 0x00802e70 */
int __fastcall sub_60803300(int a1, int a2, int a3, char a4, int a5, int a6);  /* 0x00803300 */
unsigned int __fastcall sub_608034D4(int a1, int a2, int a3, char a4, __int64 a5);  /* 0x008034d4 */
int __fastcall sub_608036C4(int a1, float *a2, float *a3);  /* 0x008036c4 */
int __fastcall sub_608039B8(int a1);  /* 0x008039b8 */
int __fastcall sub_60803A08(int result);  /* 0x00803a08 */
int __fastcall sub_60803A48(int a1, int a2);  /* 0x00803a48 */
bool __fastcall sub_60803A98(int a1);  /* 0x00803a98 */
int __fastcall sub_60803B24(int result, char a2, char a3, char a4, char a5);  /* 0x00803b24 */
int __fastcall sub_60803B6C(int a1, bool *a2);  /* 0x00803b6c */
int __fastcall sub_60803F50(int a1, _DWORD *a2);  /* 0x00803f50 */
int __fastcall sub_608044F0(int a1, int a2, int a3, _BYTE *a4, int a5, int a6);  /* 0x008044f0 */
unsigned int __fastcall sub_60804F14(unsigned int result, int a2);  /* 0x00804f14 */
unsigned int __fastcall sub_60804F90(unsigned int result, int a2);  /* 0x00804f90 */
unsigned int __fastcall sub_6080500C(unsigned int result, int a2);  /* 0x0080500c */
unsigned int __fastcall sub_60805088(unsigned int result, int a2);  /* 0x00805088 */
int __fastcall sub_60805268(_DWORD *a1, _BYTE *a2);  /* 0x00805268 */
int __fastcall sub_60805300(int a1, int a2);  /* 0x00805300 */
int __fastcall sub_60805474(_DWORD *a1);  /* 0x00805474 */
int __fastcall sub_60805EB8(int a1, int a2);  /* 0x00805eb8 */
int __fastcall sub_60805EEC(int a1, int a2);  /* 0x00805eec */
int __fastcall sub_60806174(int a1, char a2, int a3);  /* 0x00806174 */
int __fastcall sub_608061B8(int a1, int a2);  /* 0x008061b8 */
int __fastcall sub_60806628(int a1);  /* 0x00806628 */
unsigned int __fastcall sub_6080686C(int a1);  /* 0x0080686c */
int __fastcall sub_60806AE4(int result, _DWORD *a2, float32x4_t *a3, char a4, int a5, int a6, int a7);  /* 0x00806ae4 */
int __fastcall SoundSystem_createInstance(int a1);  /* 0x00806f40 */
int __fastcall sub_60807150(int result);  /* 0x00807150 */
int __fastcall SoundSystem_getSoundArchive(int a1);  /* 0x00807560 */
int __fastcall sub_60807574(_DWORD *a1);  /* 0x00807574 */
int __fastcall sub_608075F8(int a1);  /* 0x008075f8 */
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
int __fastcall sub_608089A4(int a1);  /* 0x008089a4 */
int __fastcall sub_60808AA4(int a1);  /* 0x00808aa4 */
int __fastcall sub_60808C4C(int a1, int a2);  /* 0x00808c4c */
int __fastcall sub_60808D08(int a1);  /* 0x00808d08 */
int __fastcall sub_60808E60(int a1, int a2);  /* 0x00808e60 */
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
int __fastcall sub_60809604(int a1, int a2, int a3, int a4);  /* 0x00809604 */
int __fastcall sub_608098AC(int a1, int a2, int a3, int a4);  /* 0x008098ac */
int __fastcall SoundSystem_getSoundArchivePlayer(int a1);  /* 0x00809b54 */
int __fastcall sub_60809B58(int a1, int a2);  /* 0x00809b58 */
int __fastcall sub_60809B9C(int a1, int a2, int a3);  /* 0x00809b9c */
int __fastcall sub_6080A0CC(_DWORD *a1);  /* 0x0080a0cc */
int __fastcall sub_6080A170(int a1, int a2);  /* 0x0080a170 */
int __fastcall sub_6080A1A0(int a1, int a2);  /* 0x0080a1a0 */
int __fastcall sub_6080A298(int a1, int a2);  /* 0x0080a298 */
int __fastcall sub_6080A310(int a1, int a2, int a3);  /* 0x0080a310 */
int __fastcall sub_6080A3EC(int a1, int a2, int a3);  /* 0x0080a3ec */
int __fastcall sub_6080A484(int a1, int a2, int a3);  /* 0x0080a484 */
int __fastcall sub_6080A4E4(int a1, int a2, int a3);  /* 0x0080a4e4 */
int __fastcall sub_6080A59C(int a1);  /* 0x0080a59c */
int __fastcall sub_6080A69C(_DWORD *a1);  /* 0x0080a69c */
int __fastcall sub_6080A720(int a1);  /* 0x0080a720 */
int __fastcall sub_6080A760(_DWORD *a1, int a2);  /* 0x0080a760 */
int __fastcall sub_6080A890(int a1);  /* 0x0080a890 */
int __fastcall sub_6080A9F4(int a1);  /* 0x0080a9f4 */
int __fastcall sub_6080AA9C(int a1);  /* 0x0080aa9c */
int __fastcall sub_6080AC6C(int a1);  /* 0x0080ac6c */
int __fastcall sub_6080AEEC(float *a1);  /* 0x0080aeec */
int __fastcall sub_6080B284(int a1, int a2);  /* 0x0080b284 */
int __fastcall sub_6080B558(_DWORD *a1, unsigned int a2, unsigned int a3);  /* 0x0080b558 */
int __fastcall sub_6080B91C(_DWORD *a1, int a2);  /* 0x0080b91c */
int __fastcall sub_6080BD4C(int a1);  /* 0x0080bd4c */
int __fastcall sub_6080BF20(int a1, int a2);  /* 0x0080bf20 */
int __fastcall sub_6080C0EC(int a1, int a2, int a3, int a4);  /* 0x0080c0ec */
int __fastcall sub_6080C144(_DWORD *a1);  /* 0x0080c144 */
int __fastcall sub_6080C38C(int a1, int a2);  /* 0x0080c38c */
int __fastcall sub_6080C3F8(int a1);  /* 0x0080c3f8 */
int __fastcall sub_6080C744(int a1, unsigned __int16 a2);  /* 0x0080c744 */
int __fastcall sub_6080D47C(int a1);  /* 0x0080d47c */
int __fastcall sub_6080D540(_DWORD *a1, int a2);  /* 0x0080d540 */
int __fastcall sub_6080D658(int a1, unsigned __int16 a2);  /* 0x0080d658 */
int __fastcall sub_6080DE84(int a1, int a2, int a3);  /* 0x0080de84 */
unsigned int __fastcall sub_6080E034(int a1, int a2, float *a3, char a4, float *a5);  /* 0x0080e034 */
int __fastcall sub_6080E5F4(int a1);  /* 0x0080e5f4 */
int __fastcall sub_6080E680(int a1);  /* 0x0080e680 */
int __fastcall sub_6080E7D0(int a1, int a2);  /* 0x0080e7d0 */
int __fastcall sub_6080ED48(_DWORD *a1);  /* 0x0080ed48 */
int __fastcall sub_6080EF84(int a1);  /* 0x0080ef84 */
int __fastcall sub_6080EFBC(_DWORD *a1);  /* 0x0080efbc */
int __fastcall MovingSoundActor_setPosition(int a1, _DWORD *a2);  /* 0x0080f194 */
int __fastcall sub_6080FAAC(int a1);  /* 0x0080faac */
int __fastcall sub_608109FC(int result, int *a2);  /* 0x008109fc */
int __fastcall sub_60810FDC(int a1, int a2, int a3);  /* 0x00810fdc */
int __fastcall sub_608111C0(int a1, int a2, float *a3, int a4, int *a5);  /* 0x008111c0 */
int __fastcall sub_60811618(int result, int a2, float *a3);  /* 0x00811618 */
void __fastcall sub_60812900(nn::atk::SoundActor *a1);  /* 0x00812900 */
int __fastcall sub_60812980(_DWORD *a1, int *a2);  /* 0x00812980 */
int __fastcall sub_60812AA8(_DWORD *a1, _DWORD *a2, _DWORD *a3, int a4);  /* 0x00812aa8 */
int __fastcall sub_60812E98(int a1, int a2, int a3, int a4);  /* 0x00812e98 */
bool __fastcall sub_60812FD8(int a1, int a2, int *a3, char a4, int a5);  /* 0x00812fd8 */
int __fastcall sub_60813048(int a1);  /* 0x00813048 */
int __fastcall sub_60813578(_DWORD *a1);  /* 0x00813578 */
int __fastcall sub_60813818(int a1, int a2, int a3, float *a4, int a5, int *a6);  /* 0x00813818 */
int __fastcall sub_60813BE0(_DWORD *a1, int a2, int a3, float *a4, int *a5);  /* 0x00813be0 */
int __fastcall sub_60814010(int a1, int a2, int *a3);  /* 0x00814010 */
int __fastcall sub_608140D8(int a1, int a2, int a3, int *a4);  /* 0x008140d8 */
void __fastcall sub_608141A0(int a1, int a2, int *a3, int *a4);  /* 0x008141a0 */
int __fastcall sub_60814590(int a1, int a2, int *a3);  /* 0x00814590 */
int __fastcall sub_60814658(int a1, int a2, int a3, int *a4);  /* 0x00814658 */
int __fastcall sub_60814720(int a1, int a2, int a3, int *a4);  /* 0x00814720 */
unsigned int __fastcall sub_60814A1C(unsigned int result, unsigned int a2, int a3);  /* 0x00814a1c */
int __fastcall sub_60814F00(_DWORD *a1);  /* 0x00814f00 */
int __fastcall sub_60815080(int a1);  /* 0x00815080 */
int __fastcall sub_608150FC(int a1);  /* 0x008150fc */
int __fastcall sub_60815900(int a1, unsigned int a2);  /* 0x00815900 */
int __fastcall sub_60815B40(_BYTE *a1, unsigned int a2, char a3);  /* 0x00815b40 */
int __fastcall sub_60815C90(int a1, int a2);  /* 0x00815c90 */
int __fastcall sub_60815EE0(int a1);  /* 0x00815ee0 */
int __fastcall sub_60815F1C(int a1);  /* 0x00815f1c */
int __fastcall sub_60815F50(int a1, int a2);  /* 0x00815f50 */
int __fastcall sub_608163C0(int a1);  /* 0x008163c0 */
int __fastcall sub_6081643C(int a1);  /* 0x0081643c */
int __fastcall sub_608164F8(int a1, int a2);  /* 0x008164f8 */
int __fastcall sub_608168E4(int a1);  /* 0x008168e4 */
int __fastcall sub_608169AC(int a1);  /* 0x008169ac */
int __fastcall sub_60816AE8(int a1);  /* 0x00816ae8 */
int __fastcall sub_60816B60(int a1);  /* 0x00816b60 */
int __fastcall sub_60816BB8(int a1);  /* 0x00816bb8 */
int __fastcall sub_60816C34(int a1);  /* 0x00816c34 */
unsigned int __fastcall sub_60816CD0(unsigned int result);  /* 0x00816cd0 */
int __fastcall sub_60816D48(int a1, unsigned int a2);  /* 0x00816d48 */
int __fastcall sub_60816F60(int a1, unsigned int a2);  /* 0x00816f60 */
int __fastcall sub_60817118(int a1, int a2);  /* 0x00817118 */
int __fastcall sub_60817178(int a1);  /* 0x00817178 */
int __fastcall sub_60817284(int a1);  /* 0x00817284 */
int __fastcall sub_608173DC(int a1, int a2);  /* 0x008173dc */
int __fastcall sub_60817538(int a1, int a2);  /* 0x00817538 */
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
int __fastcall StateMgrExt_changeState(int *a1, int a2);  /* 0x00818290 */
int __fastcall sub_60818350(sead::TaskBase *a1);  /* 0x00818350 */
int __fastcall sub_608190A8(int a1, int a2);  /* 0x008190a8 */
bool __fastcall sub_608194EC(_BYTE *a1, int a2);  /* 0x008194ec */
int __fastcall sub_608199F0(int a1);  /* 0x008199f0 */
int __fastcall sub_60819A7C(int a1, int a2);  /* 0x00819a7c */
int __fastcall sub_60819C54(int a1);  /* 0x00819c54 */
int __fastcall sub_60819CBC(int a1);  /* 0x00819cbc */
int __fastcall sub_60819D20(int a1);  /* 0x00819d20 */
int __fastcall sub_60819DCC(int a1);  /* 0x00819dcc */
int __fastcall sub_60819E3C(int result);  /* 0x00819e3c */
int __fastcall sub_60819FC8(int a1);  /* 0x00819fc8 */
int __fastcall sub_6081A048(int a1);  /* 0x0081a048 */
int __fastcall sub_6081A088(int a1);  /* 0x0081a088 */
int __fastcall sub_6081A9D0(int a1, int a2);  /* 0x0081a9d0 */
int __fastcall sub_6081AEDC(int a1);  /* 0x0081aedc */
int __fastcall sub_6081AF3C(_DWORD *a1, int a2, int a3);  /* 0x0081af3c */
int __fastcall sub_6081B398(int a1, int a2);  /* 0x0081b398 */
int __fastcall sub_6081B908(int a1, int a2, char a3);  /* 0x0081b908 */
int __fastcall sub_6081BA50(int a1);  /* 0x0081ba50 */
int __fastcall sub_6081BEE0(int a1);  /* 0x0081bee0 */
int __fastcall sub_6081BFFC(int a1, int a2);  /* 0x0081bffc */
void __fastcall sub_6081CA7C(int a1);  /* 0x0081ca7c */
int __fastcall sub_6081D400(unsigned int a1);  /* 0x0081d400 */
int __fastcall sub_6081D7B4(unsigned int a1);  /* 0x0081d7b4 */
int __fastcall sub_6081DB68(unsigned int a1);  /* 0x0081db68 */
int __fastcall sub_6081E020(int a1);  /* 0x0081e020 */
int __fastcall sub_6081E09C(int a1);  /* 0x0081e09c */
int __fastcall sub_6081EE98(int a1, _BYTE *a2);  /* 0x0081ee98 */
int __fastcall sub_6081F070(int a1, int *a2);  /* 0x0081f070 */
int __fastcall sub_6081F1A0(int a1, int a2);  /* 0x0081f1a0 */
bool __fastcall sub_6081F258(_DWORD *a1, int a2);  /* 0x0081f258 */
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
int __fastcall sub_60820C04(int a1);  /* 0x00820c04 */
int __fastcall sub_60820C88(int a1, int a2);  /* 0x00820c88 */
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
int __fastcall sub_608248F0(int a1, int a2);  /* 0x008248f0 */
int __fastcall RumbleMgr_create(int a1);  /* 0x008264f8 */
int __fastcall sub_60826878(int a1);  /* 0x00826878 */
int __fastcall sub_6082693C(int a1, int a2);  /* 0x0082693c */
unsigned int __fastcall sub_60826C60(int a1, int a2, _BYTE *a3);  /* 0x00826c60 */
int __fastcall sub_60826CBC(int a1);  /* 0x00826cbc */
void __fastcall sub_6082756C(int a1);  /* 0x0082756c */
int __fastcall sub_60828180(int a1, int a2);  /* 0x00828180 */
int __fastcall sub_608284CC(int a1, unsigned __int8 *a2);  /* 0x008284cc */
int __fastcall sub_608289C4(int a1, int a2);  /* 0x008289c4 */
int __fastcall sub_60828CC0(int a1);  /* 0x00828cc0 */
int __fastcall sub_60828D2C(int a1);  /* 0x00828d2c */
int __fastcall sub_60828D98(int a1);  /* 0x00828d98 */
bool __fastcall sub_60828E1C(int a1, int a2);  /* 0x00828e1c */
int __fastcall sub_60828E90(int result, int a2);  /* 0x00828e90 */
int __fastcall sub_60828EF4(int a1, int a2, char a3, int a4, int a5, _DWORD *a6);  /* 0x00828ef4 */
int __fastcall sub_60829004(int result, int a2);  /* 0x00829004 */
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
int __fastcall sub_6082B1CC(nn::oe *a1);  /* 0x0082b1cc */
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
void __fastcall sub_6082B7E8(int a1, int a2);  /* 0x0082b7e8 */
int __fastcall sub_6082BA24(int a1, _BYTE *a2);  /* 0x0082ba24 */
int __fastcall sub_6082BCA8(int a1, _BYTE *a2);  /* 0x0082bca8 */
int __fastcall sub_6082BE88(int a1, _BYTE *a2);  /* 0x0082be88 */
int __fastcall sub_6082C054(int result);  /* 0x0082c054 */
int __fastcall sub_6082C084(int a1, unsigned __int8 *a2);  /* 0x0082c084 */
int __fastcall sub_6082C68C(int a1);  /* 0x0082c68c */
int __fastcall UserInfo_createInstance(int a1);  /* 0x0082c9f0 */
int __fastcall UserInfo_init(int a1);  /* 0x0082ca70 */
int __fastcall UserInfo_getUid(int a1, _DWORD *a2);  /* 0x0082cad4 */
int __fastcall Actor_otosukuroru_build(int a1);  /* 0x0082cb04 */
int __fastcall sub_6082CB20(int a1, int a2);  /* 0x0082cb20 */
int __fastcall Actor_kun_build(int a1);  /* 0x0082de6c */
int __fastcall Actor_grass_flower_Tag_build(int a1);  /* 0x0082e5ac */
int __fastcall Actor_Bowser_exclusive_eriaOBJ_build(int a1);  /* 0x0082e818 */
int __fastcall sub_6082ED70(int a1, int a2);  /* 0x0082ed70 */
int __fastcall Actor_haipamakusu_build(int a1);  /* 0x0082f15c */
int __fastcall Actor_special_sukuroruTag_build(int a1);  /* 0x0082fd38 */
int __fastcall Actor_shadou_read_Tag_2_build(int a1);  /* 0x0082ffe8 */
int __fastcall sub_6083007C(int a1);  /* 0x0083007c */
int __fastcall sub_6083038C(int a1, int a2);  /* 0x0083038c */
int __fastcall sub_60830400(int a1, int a2);  /* 0x00830400 */
int __fastcall Actor_zumu_build(int a1);  /* 0x00831cc0 */
int __fastcall Actor_zumu_RDash_build(int a1);  /* 0x00831f80 */
int __fastcall moveValueTo(int *a1, int *a2, int *a3, int a4);  /* 0x00832424 */
int __fastcall sub_6083246C(_DWORD *a1, int *a2, int *a3);  /* 0x0083246c */
int __fastcall sub_60832684(int result, unsigned int *a2);  /* 0x00832684 */
int __fastcall sub_60832710(int result, unsigned int *a2);  /* 0x00832710 */
int __fastcall sub_6083279C(int result, unsigned int *a2);  /* 0x0083279c */
int __fastcall sub_608330EC(int result);  /* 0x008330ec */
unsigned int __fastcall sub_6083316C(unsigned int *a1);  /* 0x0083316c */
bool __fastcall sub_6083360C(int a1, int a2);  /* 0x0083360c */
int __fastcall sub_60833664(int a1, int a2);  /* 0x00833664 */
int __fastcall sub_608337E0(int a1);  /* 0x008337e0 */
int __fastcall sub_608338B8(int a1, unsigned __int16 a2, char a3);  /* 0x008338b8 */
int __fastcall sub_60833954(int a1);  /* 0x00833954 */
int __fastcall sub_60833B74(_DWORD *a1);  /* 0x00833b74 */
int __fastcall sub_60833BCC(int result);  /* 0x00833bcc */
int __fastcall sub_60834010(int result);  /* 0x00834010 */
int __fastcall sub_6083424C(int a1);  /* 0x0083424c */
unsigned int __fastcall sub_608342B0(_DWORD *a1);  /* 0x008342b0 */
int __fastcall sub_608346A4(unsigned int a1);  /* 0x008346a4 */
int __fastcall sub_608346E0(int a1, int a2);  /* 0x008346e0 */
void __fastcall sub_60834718(int a1, int a2);  /* 0x00834718 */
int __fastcall sub_60834AE0(int a1, int a2, int a3, int a4);  /* 0x00834ae0 */
int __fastcall sub_60834E7C(const char **a1, int a2);  /* 0x00834e7c */
unsigned int __fastcall sub_60834F34(unsigned int result, int a2, _DWORD *a3);  /* 0x00834f34 */
int __fastcall malloc(unsigned int a1);  /* 0x00835108 */
int __fastcall realloc(void *a1, unsigned int a2);  /* 0x008351f4 */
int __fastcall aligned_alloc(unsigned int a1, unsigned int a2);  /* 0x0083524c */
int __fastcall sub_608352A0(_DWORD *a1, int a2);  /* 0x008352a0 */
int __fastcall sub_608353C0(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, int a5);  /* 0x008353c0 */
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
int __fastcall sub_60836094(int a1, int a2, int a3, int *a4);  /* 0x00836094 */
int __fastcall sub_60836284(int result, unsigned int a2);  /* 0x00836284 */
int __fastcall sub_608362C8(int a1, int a2, int a3, _DWORD *a4, _DWORD *a5);  /* 0x008362c8 */
int __fastcall sub_60836348(int a1, int a2, int a3, _DWORD *a4, int a5);  /* 0x00836348 */
int __fastcall sub_608363A0(int a1, int a2, int a3, _DWORD *a4, int a5);  /* 0x008363a0 */
int __fastcall sub_608363F8(unsigned int a1, int a2);  /* 0x008363f8 */
int __fastcall sub_60836538(int a1, _DWORD *a2, _DWORD *a3);  /* 0x00836538 */
int __fastcall sub_60836678(int a1, int (__fastcall *a2)(int, const char *));  /* 0x00836678 */
int __fastcall sub_6083A9A4(int a1);  /* 0x0083a9a4 */
int __fastcall sub_6083AA20(int a1);  /* 0x0083aa20 */
int __fastcall sub_6083AC38(unsigned int a1);  /* 0x0083ac38 */
unsigned int __fastcall sub_6083ACBC(int a1);  /* 0x0083acbc */
int __fastcall sub_6083B088(int a1, _DWORD *a2, _DWORD *a3, int a4);  /* 0x0083b088 */
int __fastcall sub_6083B2BC(int a1, int a2, unsigned __int8 *a3);  /* 0x0083b2bc */
int __fastcall sub_6083B4F8(int a1, _DWORD *a2, int a3);  /* 0x0083b4f8 */
int __fastcall sub_6083BD18(int a1);  /* 0x0083bd18 */
int __fastcall sub_6083BDB8(int a1, int a2, int a3, int a4);  /* 0x0083bdb8 */
int __fastcall sub_6083C318(int a1, int a2, unsigned __int8 *a3);  /* 0x0083c318 */
int __fastcall sub_6083C540(int *a1, int a2, unsigned __int8 *a3);  /* 0x0083c540 */
int __fastcall sub_6083C7C0(int a1, int a2, unsigned __int8 *a3);  /* 0x0083c7c0 */
int __fastcall sub_6083C978(unsigned __int16 *a1);  /* 0x0083c978 */
int __fastcall sub_6083CA08(int a1, int a2, unsigned __int16 *a3, int a4);  /* 0x0083ca08 */
int __fastcall sub_6083CF64(_DWORD *a1, int a2);  /* 0x0083cf64 */
int __fastcall sub_6083CFA0(int a1, int a2, unsigned __int8 *a3);  /* 0x0083cfa0 */
int __fastcall sub_6083D1F4(int *a1, unsigned __int8 *a2);  /* 0x0083d1f4 */
int __fastcall sub_6083D24C(int a1, int *a2, unsigned __int8 *a3, _DWORD *a4, int a5, int a6);  /* 0x0083d24c */
int __fastcall sub_6083D338(int a1, int a2, unsigned __int8 *a3);  /* 0x0083d338 */
int __fastcall sub_6083D4BC(int a1, int a2, unsigned __int8 *a3);  /* 0x0083d4bc */
int __fastcall sub_6083D614(int result);  /* 0x0083d614 */
int __fastcall sub_6083D6A0(int result);  /* 0x0083d6a0 */
int __fastcall sub_6083D6FC(int result);  /* 0x0083d6fc */
bool __fastcall sub_6083D838(_DWORD *a1);  /* 0x0083d838 */
int __fastcall sub_6083DC5C(int a1);  /* 0x0083dc5c */
int __fastcall sub_6083DF5C(_DWORD *a1, void *a2, unsigned int a3, int a4, int a5, int a6, int a7);  /* 0x0083df5c */
int __fastcall sub_6083E02C(_DWORD *a1, int a2, int a3, int a4);  /* 0x0083e02c */
int __fastcall sub_6083E098(_DWORD *a1, void *a2, unsigned int a3, int a4, int a5, int a6, int a7, int a8, int a9);  /* 0x0083e098 */
int __fastcall sub_6083E178(_DWORD *a1, int a2);  /* 0x0083e178 */
int __fastcall sub_6083E31C(_DWORD *a1, void *a2, unsigned int a3, int a4, int a5, int a6, int a7);  /* 0x0083e31c */
int __fastcall sub_6083E3D0(_DWORD *a1, int a2, int a3, int a4);  /* 0x0083e3d0 */
int __fastcall sub_6083E6B4(_DWORD *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8);  /* 0x0083e6b4 */
int __fastcall sub_6083E714(int a1, int a2);  /* 0x0083e714 */
int __fastcall sub_6083E82C(int a1, int a2, int a3);  /* 0x0083e82c */
int __fastcall sub_6083E894(int a1, int a2, int a3);  /* 0x0083e894 */
int __fastcall sub_6083E954(int a1, int a2, int *a3);  /* 0x0083e954 */
int __fastcall sub_6083E9FC(_DWORD *a1, void *a2, unsigned int a3, int a4, int a5, int a6, int *a7);  /* 0x0083e9fc */
int __fastcall sub_6083EB04(_BYTE *a1, int a2);  /* 0x0083eb04 */
int __fastcall sub_6083EBA8(int a1);  /* 0x0083eba8 */
int __fastcall sub_6083EF6C(int a1);  /* 0x0083ef6c */
int __fastcall sub_6083F238(int a1);  /* 0x0083f238 */
int __fastcall sub_6083F368(_DWORD *a1, int a2);  /* 0x0083f368 */
int __fastcall sub_6083F3F4(int *a1, int a2);  /* 0x0083f3f4 */
bool __fastcall sub_6083F540(int a1);  /* 0x0083f540 */
int __fastcall sub_608411E4(_BYTE *a1, int a2);  /* 0x008411e4 */
int __fastcall sub_60841860(int a1, int a2);  /* 0x00841860 */
int __fastcall sub_608418AC(int result, float *a2);  /* 0x008418ac */
int __fastcall sub_60841DD8(int result, unsigned int a2, unsigned int a3);  /* 0x00841dd8 */
int __fastcall sub_60841EC4(int result, float *a2);  /* 0x00841ec4 */
int __fastcall sub_6084203C(int result, float *a2);  /* 0x0084203c */
int __fastcall sub_60842130(int result, int *a2);  /* 0x00842130 */
int __fastcall sub_608422AC(int result, unsigned __int8 *a2);  /* 0x008422ac */
int __fastcall sub_60842410(int a1);  /* 0x00842410 */
int __fastcall sub_60842470(int a1);  /* 0x00842470 */
int __fastcall sub_608424B4(_DWORD *a1);  /* 0x008424b4 */
int __fastcall sub_608424F8(_DWORD *a1);  /* 0x008424f8 */
int __fastcall sub_6084259C(int a1, _DWORD *a2, int a3);  /* 0x0084259c */
int __fastcall sub_60842774(int a1, int a2);  /* 0x00842774 */
int __fastcall sub_608427F0(_DWORD *a1, int a2);  /* 0x008427f0 */
int __fastcall sub_608429F8(int a1, int a2, int a3, int a4, int a5, int a6, int a7);  /* 0x008429f8 */
int __fastcall sub_60842BC0(int a1);  /* 0x00842bc0 */
int __fastcall sub_60842C4C(int a1);  /* 0x00842c4c */
int __fastcall sub_60842CD4(int a1, int a2);  /* 0x00842cd4 */
int __fastcall sub_60843554(int a1, int a2);  /* 0x00843554 */
int __fastcall sub_608435EC(int a1, int a2, int a3);  /* 0x008435ec */
int __fastcall sub_60843650(int a1, int a2, _DWORD *a3, _DWORD *a4);  /* 0x00843650 */
int __fastcall sub_608436C8(int a1, int a2, int *a3, unsigned __int8 *a4);  /* 0x008436c8 */
int __fastcall sub_6084376C(int a1, int a2, int a3, int a4, int a5);  /* 0x0084376c */
int __fastcall sub_60843880(int result, int a2, int a3);  /* 0x00843880 */
unsigned int __fastcall sub_60843C5C(int a1);  /* 0x00843c5c */
int __fastcall sub_60843D58(int a1, float *a2, _DWORD *a3, int a4);  /* 0x00843d58 */
int __fastcall sub_60843F04(int a1);  /* 0x00843f04 */
int __fastcall sub_60843F58(int a1);  /* 0x00843f58 */
int __fastcall sub_60843FB4(_DWORD *a1, int a2);  /* 0x00843fb4 */
int __fastcall sub_6084409C(int a1, int a2, _DWORD *a3, int a4, int a5);  /* 0x0084409c */
int __fastcall sub_6084430C(int a1, int a2);  /* 0x0084430c */
int __fastcall sub_60844374(int a1);  /* 0x00844374 */
int __fastcall sub_60844440(int a1);  /* 0x00844440 */
int __fastcall sub_608444F4(_DWORD *a1);  /* 0x008444f4 */
int __fastcall sub_60844538(_DWORD *a1);  /* 0x00844538 */
int __fastcall sub_608445C8(int a1, _DWORD *a2, int a3);  /* 0x008445c8 */
int __fastcall sub_6084462C(int a1, int a2);  /* 0x0084462c */
int __fastcall sub_608446A4(_QWORD *a1, unsigned int a2, unsigned int a3);  /* 0x008446a4 */
int __fastcall sub_60844794(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x00844794 */
int __fastcall sub_6084495C(int a1);  /* 0x0084495c */
int __fastcall sub_60844C20(int a1);  /* 0x00844c20 */
int __fastcall sub_60844ED4(int a1, int a2, nn::mii *a3);  /* 0x00844ed4 */
int __fastcall sub_60844F38(int a1, int a2, nn::mii *a3);  /* 0x00844f38 */
int __fastcall sub_608470F0(int a1, int a2);  /* 0x008470f0 */
int __fastcall sub_60847920(int a1);  /* 0x00847920 */
int __fastcall sub_60847A04(int a1, int a2, int a3);  /* 0x00847a04 */
int __fastcall sub_60847A40(int a1, int a2, int a3);  /* 0x00847a40 */
int __fastcall sub_60847A7C(int *a1, nn::util *a2, int a3, unsigned int a4, int a5);  /* 0x00847a7c */
int __fastcall sub_60847AEC(int a1, nn::util *a2, int a3, unsigned int a4, int a5, int a6);  /* 0x00847aec */
int __fastcall sub_60847DBC(int a1, int a2);  /* 0x00847dbc */
int __fastcall sub_60848014(int a1, int *a2, int a3, int a4, int a5, unsigned int a6, int *a7);  /* 0x00848014 */
int __fastcall sub_60848144(int a1, int *a2, int a3, int a4);  /* 0x00848144 */
int __fastcall sub_6084821C(int a1, int a2);  /* 0x0084821c */
unsigned int __fastcall sub_60848294(int a1, int a2, int a3);  /* 0x00848294 */
int __fastcall sub_60848494(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x00848494 */
int __fastcall sub_608485C4(_DWORD *a1, int a2, nn::mii::detail::BufferAllocator *a3, int a4, int a5, int a6, int a7);  /* 0x008485c4 */
int __fastcall sub_60848778(_DWORD *a1, int a2, nn::mii::detail::BufferAllocator *a3, int a4, int a5, int a6, int a7);  /* 0x00848778 */
int __fastcall sub_6084892C(_DWORD *a1);  /* 0x0084892c */
int __fastcall sub_60848E1C(int a1, int a2, int a3, _DWORD *a4);  /* 0x00848e1c */
int __fastcall sub_60849300(int a1, _DWORD *a2, int a3, int a4);  /* 0x00849300 */
int __fastcall sub_608493AC(int a1, _DWORD *a2, int a3, unsigned int *a4);  /* 0x008493ac */
int __fastcall sub_6084946C(int a1, _DWORD *a2, int a3, const void *a4);  /* 0x0084946c */
int __fastcall sub_608494F8(_BYTE *a1, int a2);  /* 0x008494f8 */
int __fastcall sub_60849588(_DWORD *a1);  /* 0x00849588 */
int __fastcall sub_608495DC(_DWORD *a1);  /* 0x008495dc */
int __fastcall sub_60849630(_DWORD *a1);  /* 0x00849630 */
int __fastcall sub_60849B4C(int result);  /* 0x00849b4c */
int __fastcall sub_60849BB8(int a1);  /* 0x00849bb8 */
int __fastcall sub_60849C9C(int a1, int a2);  /* 0x00849c9c */
int __fastcall sub_60849D30(float *a1, int a2);  /* 0x00849d30 */
int __fastcall sub_60849FDC(int a1, int a2);  /* 0x00849fdc */
int __fastcall sub_6084A0C8(int a1, int a2, int *a3);  /* 0x0084a0c8 */
int __fastcall sub_6084A168(_DWORD *a1, int a2);  /* 0x0084a168 */
int __fastcall sub_6084A20C(int a1, int a2, int *a3);  /* 0x0084a20c */
int __fastcall sub_6084A430(int a1, float32x4_t *a2, int a3, int a4);  /* 0x0084a430 */
int __fastcall sub_6084A664(int a1, _DWORD *a2);  /* 0x0084a664 */
int __fastcall sub_6084A81C(int a1, int a2, int a3, int a4, float *a5);  /* 0x0084a81c */
unsigned int __fastcall sub_6084B190(int a1);  /* 0x0084b190 */
int __fastcall sub_6084B2A0(_DWORD *a1);  /* 0x0084b2a0 */
int __fastcall sub_6084B8F0(int a1, int a2, int a3, unsigned int a4, _DWORD *a5, unsigned int *a6);  /* 0x0084b8f0 */
int __fastcall sub_6084C4B4(int a1, int a2, float *a3);  /* 0x0084c4b4 */
int __fastcall sub_6084C570(int a1, float *a2, float *a3, int a4);  /* 0x0084c570 */
int __fastcall sub_6084C7E0(int a1, int a2, float *a3);  /* 0x0084c7e0 */
int __fastcall sub_6084C89C(int a1, float *a2, float *a3, int a4);  /* 0x0084c89c */
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
int __fastcall sub_6084FBBC(int a1, int a2, int a3, int a4, int a5);  /* 0x0084fbbc */
int __fastcall sub_6084FDC8(int a1, int a2, int a3, float *a4);  /* 0x0084fdc8 */
int __fastcall sub_6084FEB8(int a1, int a2, int a3, int a4, int a5);  /* 0x0084feb8 */
int __fastcall sub_608500C8(int result, int a2, __int16 a3, __int16 a4, __int16 a5, char a6, char a7);  /* 0x008500c8 */
int __fastcall sub_60850120(_DWORD *a1, int a2);  /* 0x00850120 */
int __fastcall sub_60850190(_DWORD *a1, int a2);  /* 0x00850190 */
int __fastcall sub_60850328(int result);  /* 0x00850328 */
int __fastcall sub_60850658(int a1, int a2, int a3);  /* 0x00850658 */
unsigned int __fastcall sub_60850940(int a1, int a2);  /* 0x00850940 */
int __fastcall sub_60850FA0(int a1);  /* 0x00850fa0 */
int __fastcall sub_60851D80(int a1, int a2);  /* 0x00851d80 */
void __fastcall sub_60851EA0(int a1, int a2, _DWORD *a3);  /* 0x00851ea0 */
int __fastcall sub_60852048(int a1, int a2, int a3, int a4, int a5);  /* 0x00852048 */
int __fastcall sub_608521F4(int result, int a2, unsigned int a3);  /* 0x008521f4 */
int __fastcall sub_6085277C(_DWORD *a1, int a2, int a3);  /* 0x0085277c */
int __fastcall sub_608527DC(_DWORD *a1, int a2, int a3, int a4, int a5);  /* 0x008527dc */
int __fastcall sub_60852850(_DWORD *a1, int a2, int a3, int a4, int a5);  /* 0x00852850 */
int __fastcall sub_60852BFC(_DWORD *a1, int a2, int a3, int a4);  /* 0x00852bfc */
int __fastcall sub_60852D0C(int result);  /* 0x00852d0c */
int __fastcall sub_60853D18(int result, int a2, int a3);  /* 0x00853d18 */
int __fastcall sub_60853D80(int a1, int a2);  /* 0x00853d80 */
int __fastcall sub_60853E04(int a1, int a2);  /* 0x00853e04 */
int __fastcall sub_60853EC0(int result);  /* 0x00853ec0 */
int __fastcall sub_6085406C(int a1, int a2, int a3);  /* 0x0085406c */
int __fastcall sub_60854184(int a1, _DWORD *a2, int a3, int a4, int a5, int a6, int a7);  /* 0x00854184 */
int __fastcall sub_608548E4(int a1, _DWORD *a2, _DWORD *a3, int a4);  /* 0x008548e4 */
int __fastcall sub_60854D60(int a1, _BYTE *a2, _BYTE *a3, _BYTE *a4);  /* 0x00854d60 */
int __fastcall sub_60854EFC(unsigned __int8 *a1, unsigned __int8 *a2);  /* 0x00854efc */
int __fastcall sub_60854FF8(int a1);  /* 0x00854ff8 */
int __fastcall sub_608550B0(int a1);  /* 0x008550b0 */
int __fastcall sub_60855108(int a1, int a2);  /* 0x00855108 */
int __fastcall sub_6085542C(_DWORD *a1, void (__fastcall *a2)(int, int, int), int a3);  /* 0x0085542c */
int __fastcall sub_608555E0(_DWORD *a1, void (__fastcall *a2)(int, int, int), int a3);  /* 0x008555e0 */
int __fastcall sub_60855828(int result, int a2);  /* 0x00855828 */
int __fastcall sub_60855864(int a1, int a2, int a3);  /* 0x00855864 */
int __fastcall sub_60855AD8(int a1, int a2);  /* 0x00855ad8 */
int __fastcall sub_60855B3C(int a1, const void *a2);  /* 0x00855b3c */
int __fastcall sub_60855C88(_DWORD *a1, int a2);  /* 0x00855c88 */
int __fastcall sub_60855E14(_DWORD *a1, int a2, int a3, int a4, int a5, int a6, char *a7, int a8, char a9);  /* 0x00855e14 */
int __fastcall sub_608561CC(_DWORD *a1, int a2, int a3, int a4, int a5, int a6, _DWORD *a7);  /* 0x008561cc */
int __fastcall sub_60856AAC(int a1, int a2, int a3);  /* 0x00856aac */
int __fastcall sub_60856AF0(int a1);  /* 0x00856af0 */
int __fastcall sub_60856BD4(int a1, int a2);  /* 0x00856bd4 */
int __fastcall sub_6085768C(int a1, int a2);  /* 0x0085768c */
int __fastcall sub_60857AC0(int a1, const char *a2);  /* 0x00857ac0 */
int __fastcall sub_60857B80(int a1, _BYTE *a2, int a3);  /* 0x00857b80 */
int __fastcall sub_608583BC(int a1, float *a2, int a3);  /* 0x008583bc */
int __fastcall sub_6085852C(int a1, int a2);  /* 0x0085852c */
int __fastcall sub_608587E8(int a1, int a2);  /* 0x008587e8 */
int __fastcall sub_608589FC(int a1, int a2);  /* 0x008589fc */
int __fastcall sub_60858A34(int a1, _DWORD *a2);  /* 0x00858a34 */
int __fastcall sub_60858D50(float32x4_t *a1, int a2, int a3, int a4);  /* 0x00858d50 */
int __fastcall sub_60859508(int a1, int a2, int a3);  /* 0x00859508 */
int __fastcall sub_60859760(int a1);  /* 0x00859760 */
int __fastcall sub_608597C0(int a1);  /* 0x008597c0 */
int __fastcall sub_608597F0(int a1);  /* 0x008597f0 */
int __fastcall sub_60859A1C(int result, int a2, int a3);  /* 0x00859a1c */
int __fastcall sub_60859D08(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x00859d08 */
int __fastcall sub_6085A1FC(int a1, int a2, int a3);  /* 0x0085a1fc */
void __fastcall sub_6085B320(int a1, int a2);  /* 0x0085b320 */
int __fastcall sub_6085B474(int a1, int a2, int a3);  /* 0x0085b474 */
int __fastcall sub_6085B874(int result, int a2);  /* 0x0085b874 */
int __fastcall sub_6085B8E0(int a1, _BYTE *a2, char a3);  /* 0x0085b8e0 */
int __fastcall sub_6085BA78(int a1, _DWORD *a2, int a3, int a4, _DWORD *a5, int a6);  /* 0x0085ba78 */
int __fastcall sub_6085BE54(int a1, int a2);  /* 0x0085be54 */
int __fastcall sub_6085C0E0(int a1, int a2, int a3);  /* 0x0085c0e0 */
int __fastcall sub_6085C264(int a1, int a2, int a3);  /* 0x0085c264 */
int __fastcall sub_6085C340(int a1, int a2, int a3, _DWORD *a4, int a5, int a6, int a7);  /* 0x0085c340 */
int __fastcall sub_6085C99C(_DWORD *a1, int a2, _DWORD *a3, int a4, int a5);  /* 0x0085c99c */
int __fastcall sub_6085CD2C(int a1, int a2, int a3);  /* 0x0085cd2c */
int __fastcall sub_6085D270(float *a1, int a2);  /* 0x0085d270 */
int __fastcall sub_6085D560(int result, int a2);  /* 0x0085d560 */
int __fastcall sub_6085D7E0(int a1, int a2);  /* 0x0085d7e0 */
int __fastcall sub_6085DB04(float32x4_t *a1, int a2, int a3, int a4);  /* 0x0085db04 */
unsigned int __fastcall sub_6085DD1C(int a1, int a2);  /* 0x0085dd1c */
unsigned int __fastcall sub_6085DE84(int a1, int a2);  /* 0x0085de84 */
int __fastcall sub_6085DFF4(int a1, int a2, int a3);  /* 0x0085dff4 */
float __fastcall sub_6085E5E4(float result, float *a2);  /* 0x0085e5e4 */
int __fastcall sub_6085E94C(int result, int a2);  /* 0x0085e94c */
int __fastcall sub_6085E980(int a1, int a2);  /* 0x0085e980 */
int __fastcall sub_6085EC24(int a1, int a2);  /* 0x0085ec24 */
int __fastcall sub_6085ED90(int a1, int a2);  /* 0x0085ed90 */
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
unsigned int __fastcall sub_60864BE8(_DWORD *a1, unsigned int *a2, int a3);  /* 0x00864be8 */
int __fastcall sub_60864C50(_DWORD *a1, unsigned __int8 *a2);  /* 0x00864c50 */
int __fastcall sub_60864FD8(unsigned __int8 *a1, int a2);  /* 0x00864fd8 */
int __fastcall sub_60865108(int a1, int a2, _DWORD *a3);  /* 0x00865108 */
int __fastcall sub_6086516C(int result, int a2, int a3);  /* 0x0086516c */
int __fastcall sub_60865468(int a1, int a2, int a3);  /* 0x00865468 */
int __fastcall sub_608654EC(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x008654ec */
int __fastcall sub_60866798(int a1, int a2, _DWORD *a3, int a4);  /* 0x00866798 */
int __fastcall sub_60866FAC(int result, _DWORD *a2, _DWORD *a3);  /* 0x00866fac */
int __fastcall sub_60867078(int a1, int a2);  /* 0x00867078 */
int __fastcall sub_60867200(_DWORD *a1, int a2);  /* 0x00867200 */
int __fastcall sub_608672C4(_DWORD *a1, int a2);  /* 0x008672c4 */
int __fastcall sub_6086735C(int a1, int a2, int a3);  /* 0x0086735c */
int __fastcall sub_60867638(int a1, int a2);  /* 0x00867638 */
unsigned int __fastcall sub_60867E54(_DWORD *a1, int a2, int a3, int a4);  /* 0x00867e54 */
int __fastcall sub_6086827C(int result, int a2);  /* 0x0086827c */
int __fastcall sub_60868CA4(int a1, int a2, int a3);  /* 0x00868ca4 */
int __fastcall sub_60868D74(int result, int a2);  /* 0x00868d74 */
unsigned int __fastcall sub_608691AC(int a1, int a2, char **a3, int a4);  /* 0x008691ac */
int __fastcall sub_60869BB8(int a1, int a2, int a3);  /* 0x00869bb8 */
int __fastcall sub_60869F34(int a1, int a2, int a3);  /* 0x00869f34 */
int __fastcall sub_60869FE4(int result, int a2, int a3);  /* 0x00869fe4 */
int __fastcall sub_6086A094(int a1, int a2, int a3);  /* 0x0086a094 */
int __fastcall sub_6086A144(int a1, int a2);  /* 0x0086a144 */
int __fastcall sub_6086A2A4(int result, unsigned __int16 a2);  /* 0x0086a2a4 */
int __fastcall sub_6086A340(int result, unsigned __int16 *a2);  /* 0x0086a340 */
int __fastcall sub_6086A3F0(int result, int a2, int a3);  /* 0x0086a3f0 */
int __fastcall sub_6086A548(int a1, int *a2, int a3, unsigned int a4);  /* 0x0086a548 */
int __fastcall sub_6086A634(int a1, int a2);  /* 0x0086a634 */
int __fastcall sub_6086A6E0(int a1, int a2);  /* 0x0086a6e0 */
int __fastcall sub_6086ADCC(_DWORD *a1, int *a2, int a3, unsigned int a4);  /* 0x0086adcc */
int __fastcall sub_6086AF38(int a1, int a2);  /* 0x0086af38 */
int __fastcall sub_6086B060(int a1, int a2);  /* 0x0086b060 */
int __fastcall sub_6086B35C(int a1, int a2, int a3, int a4);  /* 0x0086b35c */
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
unsigned int __fastcall sub_6086D754(int a1, int a2);  /* 0x0086d754 */
int __fastcall sub_6086D854(int a1, int a2);  /* 0x0086d854 */
int __fastcall sub_6086DA64(int result);  /* 0x0086da64 */
int __fastcall sub_6086DAF0(int a1, int a2);  /* 0x0086daf0 */
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
int __fastcall sub_6086F57C(int a1, void (__fastcall *a2)(int *, int, int), int a3);  /* 0x0086f57c */
int __fastcall sub_6086F65C(int result);  /* 0x0086f65c */
int __fastcall sub_6086F6F8(int a1, int a2);  /* 0x0086f6f8 */
int __fastcall sub_6086F7E0(int result, int a2);  /* 0x0086f7e0 */
void __fastcall sub_6086F834(int a1, char a2);  /* 0x0086f834 */
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
int __fastcall sub_60871534(int a1, int a2);  /* 0x00871534 */
void __fastcall sub_60871630(int a1, void *a2);  /* 0x00871630 */
void __fastcall sub_608716DC(int a1, void *a2);  /* 0x008716dc */
unsigned int __fastcall sub_608717BC(int a1, int *a2, int a3);  /* 0x008717bc */
bool __fastcall sub_608718C0(int a1, _DWORD *a2, int a3);  /* 0x008718c0 */
int __fastcall sub_60871AE0(int a1, _DWORD *a2, int a3);  /* 0x00871ae0 */
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
int __fastcall sub_608741C8(int a1, int a2, int a3);  /* 0x008741c8 */
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
int __fastcall sub_60877EB0(_DWORD *a1, int *a2, int a3, unsigned int a4);  /* 0x00877eb0 */
int __fastcall sub_60877FB4(int a1, int a2);  /* 0x00877fb4 */
int __fastcall sub_60878050(int a1, int a2);  /* 0x00878050 */
int __fastcall sub_60878088(int a1, int a2);  /* 0x00878088 */
int __fastcall sub_608782F4(int result, int a2);  /* 0x008782f4 */
int __fastcall sub_608785CC(int a1, int a2, int a3, int a4);  /* 0x008785cc */
int __fastcall sub_60879E44(int a1, __int16 *a2, int a3, unsigned int a4);  /* 0x00879e44 */
int __fastcall sub_60879ECC(int result, _DWORD *a2);  /* 0x00879ecc */
int __fastcall sub_60879F6C(int a1);  /* 0x00879f6c */
int __fastcall sub_6087D014(int a1, int *a2, int a3, unsigned int a4);  /* 0x0087d014 */
int __fastcall sub_6087D748(int a1, _DWORD *a2);  /* 0x0087d748 */
int __fastcall sub_6087D7B0(unsigned __int8 *a1, _DWORD *a2);  /* 0x0087d7b0 */
int __fastcall sub_6087D844(_DWORD *a1, _DWORD *a2, _DWORD *a3, int a4);  /* 0x0087d844 */
int __fastcall sub_6087D994(_DWORD *a1, _DWORD *a2, _DWORD *a3, int a4, unsigned int a5);  /* 0x0087d994 */
int __fastcall sub_6087DEC4(_DWORD *a1, int a2);  /* 0x0087dec4 */
int __fastcall sub_6087EBD8(int result, int a2, int a3, int a4);  /* 0x0087ebd8 */
int __fastcall sub_6087EDD0(int *a1);  /* 0x0087edd0 */
int __fastcall sub_6087EFE0(_DWORD *a1, int (__fastcall *a2)(_DWORD *));  /* 0x0087efe0 */
int __fastcall sub_6087F06C(int a1);  /* 0x0087f06c */
int __fastcall sub_6087F210(_DWORD *a1, int (__fastcall *a2)(_DWORD *));  /* 0x0087f210 */
int __fastcall sub_6087F280(int a1, int a2, int a3, int a4, int a5, int a6, int a7);  /* 0x0087f280 */
int __fastcall sub_6087F534(unsigned __int8 *a1, int a2, int a3);  /* 0x0087f534 */
int __fastcall sub_6088005C(int a1, int a2, int a3);  /* 0x0088005c */
int __fastcall sub_608800A0(int a1, int a2);  /* 0x008800a0 */
int __fastcall sub_6088077C(_DWORD *a1, int a2, int a3);  /* 0x0088077c */
int __fastcall sub_60880930(int a1, int a2);  /* 0x00880930 */
bool __fastcall sub_608809BC(int a1);  /* 0x008809bc */
bool __fastcall sub_60880A4C(int a1);  /* 0x00880a4c */
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
int __fastcall sub_60881D78(int a1, int a2);  /* 0x00881d78 */
int __fastcall sub_60881DA8(int result, int a2, char a3);  /* 0x00881da8 */
int __fastcall sub_60881E38(_DWORD *a1, _DWORD *a2);  /* 0x00881e38 */
int __fastcall sub_6088203C(int a1, int a2);  /* 0x0088203c */
int __fastcall sub_608820E8(int a1, int a2, int a3);  /* 0x008820e8 */
void __fastcall debugPrintRelated3(const char *a1);  /* 0x00882120 */
int __fastcall sub_60882124(int a1, int a2);  /* 0x00882124 */
int __fastcall sub_608821A8(int a1);  /* 0x008821a8 */
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
unsigned int __fastcall sub_60886B90(_DWORD *a1, int a2);  /* 0x00886b90 */
int __fastcall sub_60886D3C(int a1, unsigned __int8 *a2);  /* 0x00886d3c */
int __fastcall sub_608871E0(int a1, int a2, int a3);  /* 0x008871e0 */
int __fastcall sub_608873A4(int a1, _DWORD *a2);  /* 0x008873a4 */
int __fastcall sub_608874D8(int result, void (__fastcall *a2)(__int64 *, int, int), int a3);  /* 0x008874d8 */
int __fastcall sub_60887620(_DWORD *a1, _DWORD *a2, __int64 a3);  /* 0x00887620 */
int __fastcall sub_60887828(int result, void (__fastcall *a2)(_DWORD *, int, int), int a3);  /* 0x00887828 */
int __fastcall sub_608878A4(int a1, int a2);  /* 0x008878a4 */
int __fastcall sub_60887A00(int a1, unsigned __int8 *a2, int *a3);  /* 0x00887a00 */
int __fastcall sub_60887EA4(_DWORD *a1, __int64 a2);  /* 0x00887ea4 */
int __fastcall sub_60887F30(int a1, __int64 a2);  /* 0x00887f30 */
int __fastcall sub_60888098(_DWORD *a1, __int64 a2);  /* 0x00888098 */
int __fastcall sub_60888390(int a1, _DWORD *a2, int a3, int a4, int a5);  /* 0x00888390 */
int __fastcall sub_6088860C(int a1, int a2);  /* 0x0088860c */
int __fastcall sub_6088871C(int a1, _DWORD *a2, int a3, int a4);  /* 0x0088871c */
int __fastcall sub_60888864(_DWORD *a1, int a2, int a3);  /* 0x00888864 */
int __fastcall sub_60889028(int a1, int a2, int a3, int a4);  /* 0x00889028 */
int __fastcall sub_60889224(int a1);  /* 0x00889224 */
int __fastcall sub_60889A38(int a1);  /* 0x00889a38 */
int __fastcall sub_60889A70(int a1, _DWORD *a2, float32x4_t *a3);  /* 0x00889a70 */
int __fastcall sub_6088A3A8(int a1, int a2);  /* 0x0088a3a8 */
int __fastcall sub_6088A6BC(int a1, int a2, _DWORD *a3, int a4, int a5, int a6);  /* 0x0088a6bc */
int __fastcall sub_6088A820(int a1, int a2, int a3, int a4, int a5, int a6, _DWORD *a7, int a8);  /* 0x0088a820 */
int __fastcall sub_6088AB3C(int a1, int a2);  /* 0x0088ab3c */
int __fastcall sub_6088ACD0(int a1, _DWORD *a2, int a3, int a4, int a5, int a6);  /* 0x0088acd0 */
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
int __fastcall sub_6088F868(int a1);  /* 0x0088f868 */
int __fastcall sub_6088FAAC(int a1, int a2, int a3);  /* 0x0088faac */
int __fastcall sub_6088FB14(int a1, int a2, int a3, int a4, char a5, int a6);  /* 0x0088fb14 */
int __fastcall sub_6088FBF0(_DWORD *a1);  /* 0x0088fbf0 */
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
int __fastcall sub_60895C24(int a1, int a2);  /* 0x00895c24 */
int __fastcall sub_60895C80(__int64 *a1);  /* 0x00895c80 */
int __fastcall sub_60895D14(int a1, _DWORD *a2, int a3);  /* 0x00895d14 */
int __fastcall sub_60895E48(int *a1, int a2, int a3);  /* 0x00895e48 */
int __fastcall sub_60895E90(int a1, int a2);  /* 0x00895e90 */
int __fastcall sub_608961A4(int a1, int a2);  /* 0x008961a4 */
int __fastcall sub_60896278(void (__fastcall *a1)(int, int, int), int a2);  /* 0x00896278 */
int __fastcall sub_608962E8(int *a1, int a2, int a3);  /* 0x008962e8 */
int __fastcall sub_6089632C(int a1, _DWORD *a2, int a3, int a4, int a5);  /* 0x0089632c */
int __fastcall sub_60896484(int a1, int a2, int a3);  /* 0x00896484 */
int __fastcall sub_60896504(int *a1, _DWORD *a2, int a3, int a4);  /* 0x00896504 */
int __fastcall sub_608966F8(_DWORD *a1);  /* 0x008966f8 */
int __fastcall sub_60896790(int a1, int a2, int a3, int a4, int a5);  /* 0x00896790 */
int __fastcall sub_60897044(_DWORD *a1, _DWORD **a2);  /* 0x00897044 */
int __fastcall sub_60897204(int a1, int a2);  /* 0x00897204 */
int __fastcall sub_6089725C(_DWORD *a1, int a2, int a3);  /* 0x0089725c */
int __fastcall sub_60897AF0(int *a1, float32x4_t *a2);  /* 0x00897af0 */
int __fastcall sub_60897E40(int *a1, int a2);  /* 0x00897e40 */
int __fastcall sub_60898168(int a1);  /* 0x00898168 */
int __fastcall sub_60898270(int a1, int a2);  /* 0x00898270 */
unsigned __int32 __fastcall sub_60898898(int a1, float *a2, float *a3, float *a4, int a5, float32x4_t *a6, int a7);  /* 0x00898898 */
void __fastcall sub_60898C50(int a1, int a2);  /* 0x00898c50 */
int __fastcall sub_60898D38(int a1, int a2);  /* 0x00898d38 */
bool __fastcall sub_608993D8(int a1, unsigned __int8 *a2, int a3, int a4, int a5, unsigned int a6);  /* 0x008993d8 */
void __fastcall sub_60899E38(int a1, _DWORD *a2);  /* 0x00899e38 */
int __fastcall sub_6089AEBC(int a1, int a2, int a3, _DWORD *a4, int a5);  /* 0x0089aebc */
int __fastcall sub_6089B110(int a1, int a2, _DWORD *a3, _DWORD *a4, int a5);  /* 0x0089b110 */
int __fastcall sub_6089B2BC(int a1, int a2, int a3, int *a4, int a5, int a6, int a7, int a8);  /* 0x0089b2bc */
int __fastcall sub_6089B87C(int a1, int (__fastcall *a2)(_DWORD *), int a3, int a4, int a5);  /* 0x0089b87c */
int __fastcall sub_6089B9C0(int *a1, int a2, int a3, _DWORD *a4, int a5, _DWORD *a6);  /* 0x0089b9c0 */
int __fastcall sub_6089C0A4(int *a1, int a2, float32x4_t *a3, int a4, int a5, int *a6);  /* 0x0089c0a4 */
int __fastcall sub_6089C220(int a1, int a2, int a3);  /* 0x0089c220 */
int __fastcall sub_6089C648(int a1, _BYTE *a2, int a3, int a4, int a5, int a6);  /* 0x0089c648 */
int __fastcall sub_6089DB50(int a1);  /* 0x0089db50 */
int __fastcall sub_6089DCBC(int a1, _DWORD *a2);  /* 0x0089dcbc */
int __fastcall sub_6089DDBC(int a1, int a2);  /* 0x0089ddbc */
int __fastcall sub_6089E2D4(int a1, int a2);  /* 0x0089e2d4 */
int __fastcall sub_6089E410(int a1, int a2);  /* 0x0089e410 */
int __fastcall sub_6089FC9C(int result, unsigned __int8 *a2);  /* 0x0089fc9c */
int __fastcall sub_608A01F0(_QWORD *a1, _QWORD *a2, int a3, int a4, int a5, float *a6);  /* 0x008a01f0 */
int __fastcall sub_608A0740(_QWORD *a1, float32x4_t *a2, int a3, int a4, int a5, int a6);  /* 0x008a0740 */
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
int __fastcall sub_608A4D34(int *a1);  /* 0x008a4d34 */
int __fastcall sub_608A5070(int *a1);  /* 0x008a5070 */
int __fastcall sub_608A56A4(int a1);  /* 0x008a56a4 */
int __fastcall sub_608A56E8(int result, float32x4_t *a2);  /* 0x008a56e8 */
int __fastcall sub_608A7810(int a1, int a2, _DWORD *a3, int a4, int a5, int a6);  /* 0x008a7810 */
int __fastcall sub_608A7F74(_DWORD *a1);  /* 0x008a7f74 */
int __fastcall sub_608A8394(int a1, int a2);  /* 0x008a8394 */
int __fastcall sub_608A8790(float *a1, int *a2, int a3, int a4, int a5);  /* 0x008a8790 */
int __fastcall sub_608A8848(int a1, int a2, int a3, float32x4_t *a4, float32x2_t *a5);  /* 0x008a8848 */
int __fastcall sub_608A8A9C(float32x4_t *a1, float *a2, float *a3);  /* 0x008a8a9c */
int __fastcall sub_608A8DF4(int result);  /* 0x008a8df4 */
int __fastcall sub_608A9234(int result);  /* 0x008a9234 */
int __fastcall sub_608A92A8(int a1, int a2);  /* 0x008a92a8 */
int __fastcall sub_608A92F0(int a1, int a2, int a3, int a4);  /* 0x008a92f0 */
int __fastcall sub_608A937C(int a1);  /* 0x008a937c */
int __fastcall nn_atk_SoundArchive_ctor(int result);  /* 0x008a9954 */
int __fastcall sub_608A9AA4(int a1, int a2);  /* 0x008a9aa4 */
int __fastcall sub_608A9AEC(int a1, int a2, int a3, int a4);  /* 0x008a9aec */
int __fastcall sub_608A9B50(int a1, int a2);  /* 0x008a9b50 */
int __fastcall sub_608A9BC0(int a1, int a2, int a3);  /* 0x008a9bc0 */
int __fastcall sub_608A9C24(int a1, int a2, int a3);  /* 0x008a9c24 */
int __fastcall sub_608A9C88(int a1, int a2, int a3);  /* 0x008a9c88 */
int __fastcall sub_608A9CEC(int a1, int a2, int a3);  /* 0x008a9cec */
int __fastcall sub_608A9D48(int a1, int a2, int a3);  /* 0x008a9d48 */
int __fastcall sub_608A9DAC(int a1, int a2, int a3);  /* 0x008a9dac */
int __fastcall sub_608A9E10(int a1, int a2);  /* 0x008a9e10 */
int __fastcall sub_608A9E64(int a1, int a2, int a3);  /* 0x008a9e64 */
int __fastcall sub_608A9EC8(int a1, int a2, int a3);  /* 0x008a9ec8 */
int __fastcall sub_608A9F2C(int a1, int a2, int a3);  /* 0x008a9f2c */
int __fastcall sub_608A9F88(int a1, int a2, int a3);  /* 0x008a9f88 */
int __fastcall sub_608A9FE4(int a1, int a2, int a3);  /* 0x008a9fe4 */
int __fastcall sub_608AA048(int a1, int a2, int a3);  /* 0x008aa048 */
int __fastcall sub_608AA0B0(_DWORD *a1, int a2, int a3, int a4, int a5, int a6);  /* 0x008aa0b0 */
int __fastcall sub_608AA198(_BYTE *a1, int a2, int a3, _BYTE *a4, int a5, int a6);  /* 0x008aa198 */
int __fastcall sub_608AA400(int a1, _BYTE *a2);  /* 0x008aa400 */
int __fastcall sub_608AA4D0(int a1);  /* 0x008aa4d0 */
int __fastcall sub_608AA604(int a1, int *a2);  /* 0x008aa604 */
int __fastcall sub_608AA754(int a1);  /* 0x008aa754 */
unsigned int __fastcall sub_608AA854(int a1, int a2, int a3);  /* 0x008aa854 */
int __fastcall sub_608AAA10(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8);  /* 0x008aaa10 */
int __fastcall sub_608AAC68(int a1, int a2, unsigned int *a3, int a4);  /* 0x008aac68 */
int __fastcall sub_608AB028(int a1);  /* 0x008ab028 */
int __fastcall sub_608AB160(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x008ab160 */
int __fastcall sub_608AB194(int a1, _DWORD *a2, int a3, int a4, int a5, int a6, int a7, int a8);  /* 0x008ab194 */
int __fastcall sub_608ABDF0(int a1, int a2, int a3, int a4);  /* 0x008abdf0 */
int __fastcall sub_608ABEB4(int a1);  /* 0x008abeb4 */
int __fastcall sub_608AC20C(_DWORD *a1, int a2);  /* 0x008ac20c */
int __fastcall sub_608AC23C(_DWORD *a1, int a2);  /* 0x008ac23c */
int __fastcall sub_608AC26C(int a1);  /* 0x008ac26c */
int __fastcall sub_608AC2F0(int a1);  /* 0x008ac2f0 */
int __fastcall sub_608AC3CC(int a1, int a2, unsigned int a3);  /* 0x008ac3cc */
int __fastcall sub_608AC56C(int a1);  /* 0x008ac56c */
int __fastcall sub_608AC59C(int a1, int a2);  /* 0x008ac59c */
int __fastcall sub_608AC5F8(int a1, int a2);  /* 0x008ac5f8 */
int __fastcall sub_608AC690(int a1, int a2);  /* 0x008ac690 */
int __fastcall sub_608AC6C8(_DWORD *a1);  /* 0x008ac6c8 */
int __fastcall sub_608AC9B4(int a1, int a2, int a3);  /* 0x008ac9b4 */
int __fastcall sub_608ACA10(int result, int a2);  /* 0x008aca10 */
int __fastcall sub_608ACA88(int result, int a2);  /* 0x008aca88 */
int __fastcall sub_608ACB18(int a1, int a2);  /* 0x008acb18 */
int __fastcall sub_608ACC18(int a1, int a2);  /* 0x008acc18 */
int __fastcall sub_608ACDF0(_DWORD *a1, _DWORD *a2);  /* 0x008acdf0 */
int __fastcall sub_608ACE64(_DWORD *a1, int a2);  /* 0x008ace64 */
int __fastcall sub_608ACED8(int a1, int a2);  /* 0x008aced8 */
int __fastcall sub_608ACFE0(int a1, int a2);  /* 0x008acfe0 */
int __fastcall sub_608AD014(int a1, _DWORD *a2, int a3, int a4);  /* 0x008ad014 */
int __fastcall sub_608AD060(int a1, _DWORD *a2, int a3, int a4);  /* 0x008ad060 */
int __fastcall sub_608AD0F0(int a1, _DWORD *a2, int a3, int a4, int a5);  /* 0x008ad0f0 */
int __fastcall sub_608AD1CC(int a1, _DWORD *a2, int a3, int a4);  /* 0x008ad1cc */
int __fastcall sub_608AD258(int a1, int a2, int a3, int a4);  /* 0x008ad258 */
int __fastcall sub_608AD2C8(int result);  /* 0x008ad2c8 */
int __fastcall sub_608AD370(int a1);  /* 0x008ad370 */
int __fastcall sub_608AD5AC(int a1);  /* 0x008ad5ac */
int __fastcall sub_608ADE38(int a1, int a2, int a3);  /* 0x008ade38 */
int __fastcall sub_608ADEC0(int *a1, int a2, int *a3);  /* 0x008adec0 */
int __fastcall sub_608AE1F0(int a1, int a2, int a3);  /* 0x008ae1f0 */
bool __fastcall sub_608AE4C8(int a1, int a2);  /* 0x008ae4c8 */
bool __fastcall sub_608AE59C(int a1, int a2, _DWORD *a3, int a4);  /* 0x008ae59c */
int __fastcall sub_608AE660(_DWORD *a1, int a2, unsigned int a3, int *a4);  /* 0x008ae660 */
int __fastcall sub_608AE888(int a1, int a2);  /* 0x008ae888 */
int __fastcall sub_608AE904(int a1, int *a2, int a3);  /* 0x008ae904 */
int __fastcall sub_608AEA9C(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x008aea9c */
int __fastcall sub_608AEAFC(int a1, int a2, int a3, int a4, int a5, _DWORD *a6, int a7);  /* 0x008aeafc */
int __fastcall sub_608AEE30(int a1, int a2);  /* 0x008aee30 */
int __fastcall sub_608AF208(int a1, int a2);  /* 0x008af208 */
int __fastcall sub_608AF2F4(int a1, char a2);  /* 0x008af2f4 */
int __fastcall sub_608AF328(int result, int a2, int a3);  /* 0x008af328 */
int __fastcall sub_608AF484(int a1);  /* 0x008af484 */
int __fastcall sub_608AF9A0(int a1);  /* 0x008af9a0 */
int __fastcall sub_608B0124(int a1);  /* 0x008b0124 */
int __fastcall sub_608B032C(int result, int a2);  /* 0x008b032c */
int __fastcall sub_608B0454(int a1, int a2, int a3, int a4, int a5);  /* 0x008b0454 */
int __fastcall sub_608B0510(int result, int a2, int a3, int a4);  /* 0x008b0510 */
int __fastcall sub_608B05BC(int a1, char a2);  /* 0x008b05bc */
int __fastcall sub_608B0610(int a1, char a2);  /* 0x008b0610 */
int __fastcall sub_608B07EC(int a1, int a2);  /* 0x008b07ec */
int __fastcall sub_608B0870(int a1, int a2);  /* 0x008b0870 */
int __fastcall sub_608B08B8(_DWORD *a1, int a2);  /* 0x008b08b8 */
int __fastcall sub_608B0C4C(int a1, _DWORD *a2, unsigned int a3);  /* 0x008b0c4c */
int __fastcall sub_608B0CB8(int a1, _DWORD *a2, unsigned int a3);  /* 0x008b0cb8 */
int __fastcall sub_608B0CEC(int a1);  /* 0x008b0cec */
int __fastcall sub_608B0D44(_DWORD *a1, _DWORD *a2, int a3, int a4);  /* 0x008b0d44 */
int __fastcall sub_608B0E58(int a1);  /* 0x008b0e58 */
int __fastcall sub_608B12C8(int result);  /* 0x008b12c8 */
int __fastcall sub_608B1378(_DWORD *a1, int a2, int a3);  /* 0x008b1378 */
int __fastcall sub_608B1518(_WORD *a1);  /* 0x008b1518 */
int __fastcall sub_608B1550(_WORD *a1);  /* 0x008b1550 */
int __fastcall sub_608B1590(_WORD *a1);  /* 0x008b1590 */
int __fastcall sub_608B15C8(_WORD *a1);  /* 0x008b15c8 */
int __fastcall sub_608B1608(_WORD *a1);  /* 0x008b1608 */
int __fastcall sub_608B1674(int a1, int a2, int a3);  /* 0x008b1674 */
int __fastcall sub_608B175C(int a1, int a2);  /* 0x008b175c */
int __fastcall sub_608B17A0(int a1, int a2);  /* 0x008b17a0 */
int __fastcall sub_608B17D8(int a1, int a2);  /* 0x008b17d8 */
int __fastcall sub_608B181C(int a1, int a2);  /* 0x008b181c */
int __fastcall sub_608B1860(int a1, int a2);  /* 0x008b1860 */
int __fastcall sub_608B18A4(int a1, int a2);  /* 0x008b18a4 */
int __fastcall sub_608B1A60(int a1);  /* 0x008b1a60 */
int __fastcall sub_608B1C60(int a1);  /* 0x008b1c60 */
int __fastcall sub_608B1D14(int a1);  /* 0x008b1d14 */
int __fastcall sub_608B1D48(int a1);  /* 0x008b1d48 */
int __fastcall sub_608B1DA8(int a1);  /* 0x008b1da8 */
int __fastcall sub_608B1DD8(int a1);  /* 0x008b1dd8 */
int __fastcall sub_608B1E38(int a1, _DWORD *a2, int a3);  /* 0x008b1e38 */
int __fastcall sub_608B1EB0(int a1);  /* 0x008b1eb0 */
int __fastcall sub_608B20A4(unsigned __int16 *a1);  /* 0x008b20a4 */
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
int __fastcall sub_608B2BAC(int a1, _DWORD *a2, int a3, int a4);  /* 0x008b2bac */
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
int __fastcall sub_608B4094(_DWORD *a1, unsigned int a2);  /* 0x008b4094 */
int __fastcall sub_608B417C(int *a1, int a2, int a3);  /* 0x008b417c */
int __fastcall sub_608B427C(int *a1, int a2, int a3, int a4);  /* 0x008b427c */
int __fastcall sub_608B43EC(_DWORD *a1, int a2);  /* 0x008b43ec */
int __fastcall sub_608B44A8(_DWORD *a1);  /* 0x008b44a8 */
int __fastcall sub_608B4688(_DWORD *a1, _BYTE *a2, int a3, int a4);  /* 0x008b4688 */
int __fastcall sub_608B46CC(int result);  /* 0x008b46cc */
int __fastcall sub_608B470C(int result, int a2);  /* 0x008b470c */
int __fastcall sub_608B4820(int a1);  /* 0x008b4820 */
int __fastcall sub_608B4950(int result, int a2, int a3);  /* 0x008b4950 */
bool __fastcall sub_608B49F4(int *a1);  /* 0x008b49f4 */
__int64 __fastcall sub_608B4A50(__int64 result);  /* 0x008b4a50 */
int __fastcall sub_608B4A8C(int a1, unsigned int a2);  /* 0x008b4a8c */
int __fastcall sub_608B4B10(int a1, int a2);  /* 0x008b4b10 */
int __fastcall sub_608B4B54(int a1, unsigned int a2, int a3);  /* 0x008b4b54 */
int __fastcall sub_608B4B98(int a1, int a2, int a3);  /* 0x008b4b98 */
int __fastcall sub_608B4C78(_DWORD *a1, int a2);  /* 0x008b4c78 */
int __fastcall sub_608B4DE4(unsigned int a1);  /* 0x008b4de4 */
int __fastcall sub_608B4E40(int *a1, int a2);  /* 0x008b4e40 */
int __fastcall sub_608B4EBC(int result, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9);  /* 0x008b4ebc */
int __fastcall sub_608B5170(int a1, int a2);  /* 0x008b5170 */
unsigned int __fastcall sub_608B5330(int a1, int a2);  /* 0x008b5330 */
int __fastcall sub_608B5378(int a1, int a2);  /* 0x008b5378 */
int __fastcall sub_608B547C(int a1);  /* 0x008b547c */
unsigned int __fastcall sub_608B5A70(int a1, int a2);  /* 0x008b5a70 */
int __fastcall sub_608B62CC(int a1, int a2, int a3);  /* 0x008b62cc */
int __fastcall sub_608B661C(int a1);  /* 0x008b661c */
int __fastcall sub_608B6788(int a1);  /* 0x008b6788 */
int __fastcall sub_608B67F4(_DWORD *a1, _DWORD *a2);  /* 0x008b67f4 */
int __fastcall sub_608B683C(int a1, int *a2);  /* 0x008b683c */
int __fastcall sub_608B68B8(int a1, int a2);  /* 0x008b68b8 */
int __fastcall sub_608B6940(int a1, int a2);  /* 0x008b6940 */
int __fastcall sub_608B6A64(int result, int a2);  /* 0x008b6a64 */
int __fastcall sub_608B6B24(int a1, int a2, int a3, int a4);  /* 0x008b6b24 */
int __fastcall sub_608B6BA8(int a1, int a2);  /* 0x008b6ba8 */
int __fastcall sub_608B6C28(int result, int a2);  /* 0x008b6c28 */
int __fastcall sub_608B6CB0(int a1, int a2, int a3, int a4, int a5);  /* 0x008b6cb0 */
int __fastcall sub_608B6E98(int a1, int a2);  /* 0x008b6e98 */
int __fastcall sub_608B6FA4(int a1, int a2, int a3, int a4, char a5, char a6, int a7, int a8);  /* 0x008b6fa4 */
int __fastcall sub_608B7018(int a1, int a2, int *a3);  /* 0x008b7018 */
int __fastcall sub_608B7134(int a1);  /* 0x008b7134 */
int __fastcall sub_608B7240(int a1, int a2);  /* 0x008b7240 */
int __fastcall sub_608B7294(int a1, int a2);  /* 0x008b7294 */
int __fastcall sub_608B72E8(int a1, int a2, __int16 *a3);  /* 0x008b72e8 */
int __fastcall sub_608B7318(int a1, int a2, int a3);  /* 0x008b7318 */
int __fastcall sub_608B7364(int a1, int a2);  /* 0x008b7364 */
int __fastcall sub_608B73D0(int a1, _DWORD *a2, _DWORD *a3);  /* 0x008b73d0 */
int __fastcall sub_608B7614(int a1);  /* 0x008b7614 */
int __fastcall sub_608B7B18(int a1);  /* 0x008b7b18 */
int __fastcall sub_608B7C8C(_DWORD *a1, int *a2);  /* 0x008b7c8c */
int __fastcall sub_608B7F60(int result, int a2, int a3);  /* 0x008b7f60 */
int __fastcall sub_608B7FC8(int a1, int a2, int a3);  /* 0x008b7fc8 */
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
int __fastcall sub_608B88A8(_DWORD *a1);  /* 0x008b88a8 */
int __fastcall sub_608B89B4(int a1);  /* 0x008b89b4 */
int __fastcall sub_608B8CE0(int a1, int a2);  /* 0x008b8ce0 */
int __fastcall sub_608B8E7C(int a1);  /* 0x008b8e7c */
int __fastcall sub_608B90A8(int a1);  /* 0x008b90a8 */
int __fastcall sub_608B92EC(int a1, int a2);  /* 0x008b92ec */
int __fastcall sub_608B9494(int a1, _DWORD *a2, int *a3);  /* 0x008b9494 */
int __fastcall sub_608B9518(int a1);  /* 0x008b9518 */
int __fastcall sub_608B9570(int a1);  /* 0x008b9570 */
int __fastcall sub_608B994C(int a1, int a2, _DWORD *a3, int a4);  /* 0x008b994c */
int __fastcall sub_608B9A70(_DWORD *a1, int a2, unsigned int a3, int *a4);  /* 0x008b9a70 */
signed int __fastcall sub_608B9BD8(int a1, int *a2, unsigned int a3);  /* 0x008b9bd8 */
int __fastcall sub_608B9D20(int *a1);  /* 0x008b9d20 */
int __fastcall sub_608B9E94(int a1, int a2, _DWORD *a3, int a4);  /* 0x008b9e94 */
int __fastcall sub_608B9EE8(int a1, int *a2, int a3);  /* 0x008b9ee8 */
int __fastcall sub_608B9F20(int *a1, int a2);  /* 0x008b9f20 */
int __fastcall sub_608BA190(int *a1, int a2, int a3, int a4, int a5, int *a6);  /* 0x008ba190 */
int __fastcall sub_608BA460(int a1, int a2, int a3, int a4, int a5, _DWORD *a6, int *a7);  /* 0x008ba460 */
int __fastcall sub_608BA5BC(int a1, int a2, int a3, int a4, int *a5, int a6);  /* 0x008ba5bc */
int __fastcall sub_608BA988(int a1, int a2, int a3, int a4);  /* 0x008ba988 */
int __fastcall sub_608BAD20(int a1);  /* 0x008bad20 */
int __fastcall sub_608BADEC(int a1);  /* 0x008badec */
int __fastcall sub_608BAFBC(int a1);  /* 0x008bafbc */
int __fastcall sub_608BB040(int a1);  /* 0x008bb040 */
int __fastcall sub_608BB150(int a1, int a2);  /* 0x008bb150 */
int __fastcall sub_608BB1CC(int a1);  /* 0x008bb1cc */
int __fastcall sub_608BB200(int a1);  /* 0x008bb200 */
int __fastcall sub_608BB288(int a1, int a2);  /* 0x008bb288 */
int __fastcall sub_608BB3C8(int a1);  /* 0x008bb3c8 */
int __fastcall sub_608BB8B0(int result, int a2);  /* 0x008bb8b0 */
int __fastcall sub_608BB970(int a1, int a2);  /* 0x008bb970 */
int __fastcall sub_608BBA58(int a1, int a2, int a3);  /* 0x008bba58 */
int __fastcall sub_608BBB44(int a1, int a2, int a3, int a4, int a5);  /* 0x008bbb44 */
int __fastcall sub_608BBE6C(int a1, int a2);  /* 0x008bbe6c */
int __fastcall sub_608BC010(int a1, int a2);  /* 0x008bc010 */
int __fastcall sub_608BC370(int a1, const void *a2);  /* 0x008bc370 */
int __fastcall sub_608BC3D4(int a1, int a2, const void *a3);  /* 0x008bc3d4 */
int __fastcall sub_608BC5E8(int result, int a2, int a3);  /* 0x008bc5e8 */
bool __fastcall sub_608BC8E8(int a1);  /* 0x008bc8e8 */
bool __fastcall sub_608BC92C(int a1);  /* 0x008bc92c */
int __fastcall sub_608BCAEC(int a1, int *a2, int a3, unsigned int a4);  /* 0x008bcaec */
int __fastcall sub_608BCC5C(int a1, _WORD *a2, _WORD *a3, int a4, int a5);  /* 0x008bcc5c */
unsigned int __fastcall sub_608BCDB8(_DWORD *a1, int a2);  /* 0x008bcdb8 */
bool __fastcall sub_608BCE28(int a1);  /* 0x008bce28 */
int __fastcall sub_608BCEC4(_DWORD *a1, int a2);  /* 0x008bcec4 */
int __fastcall sub_608BCFD0(int a1, char *a2, signed int a3);  /* 0x008bcfd0 */
int __fastcall sub_608BD07C(int a1, void *a2, _WORD *a3, unsigned int a4);  /* 0x008bd07c */
int __fastcall sub_608BD0E4(int a1);  /* 0x008bd0e4 */
int __fastcall sub_608BDC1C(int a1);  /* 0x008bdc1c */
void __fastcall sub_608BDDB4(int a1, _BYTE *a2);  /* 0x008bddb4 */
int __fastcall sub_608BE484(int a1, _DWORD *a2);  /* 0x008be484 */
int __fastcall sub_608BE634(int a1, _DWORD *a2);  /* 0x008be634 */
int __fastcall sub_608BE948(int a1, int a2);  /* 0x008be948 */
bool __fastcall sub_608BEA10(int a1, int a2);  /* 0x008bea10 */
int __fastcall sub_608BEF68(int a1, int a2);  /* 0x008bef68 */
int __fastcall sub_608BF010(unsigned __int8 *a1, int a2);  /* 0x008bf010 */
int __fastcall sub_608BF074(int *a1, int a2, int a3, int a4);  /* 0x008bf074 */
int __fastcall sub_608BF5A8(int a1, int a2, int *a3, int a4, int a5, int a6, int a7);  /* 0x008bf5a8 */
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
unsigned int __fastcall sub_608C103C(int a1, int a2);  /* 0x008c103c */
int __fastcall sub_608C11A0(int a1, void *a2, _WORD *a3, unsigned int a4);  /* 0x008c11a0 */
int __fastcall sub_608C1208(int a1, _DWORD *a2, int a3);  /* 0x008c1208 */
int __fastcall sub_608C12FC(_DWORD *a1, int a2, _DWORD *a3, int a4, int a5);  /* 0x008c12fc */
unsigned int __fastcall sub_608C148C(int a1);  /* 0x008c148c */
int __fastcall sub_608C1500(_DWORD *a1, int a2, unsigned int a3, int *a4);  /* 0x008c1500 */
int __fastcall sub_608C1668(int a1, int a2, int a3, unsigned int a4);  /* 0x008c1668 */
int __fastcall sub_608C1700(int a1, int a2);  /* 0x008c1700 */
int __fastcall sub_608C1740(int a1, int a2, int a3, unsigned int a4);  /* 0x008c1740 */
int __fastcall sub_608C17AC(int *a1);  /* 0x008c17ac */
unsigned int __fastcall sub_608C1920(int a1, int a2);  /* 0x008c1920 */
int __fastcall sub_608C19E4(int a1, int *a2, int a3);  /* 0x008c19e4 */
int __fastcall sub_608C1BDC(int a1, int a2, int a3, int a4, int a5, int *a6, _DWORD *a7);  /* 0x008c1bdc */
int __fastcall sub_608C2530(int result);  /* 0x008c2530 */
int __fastcall sub_608C25B4(_BYTE *a1);  /* 0x008c25b4 */
void __fastcall sub_608C2600(int a1, int a2, unsigned int a3, int a4);  /* 0x008c2600 */
int __fastcall sub_608C2698(int a1, int a2);  /* 0x008c2698 */
int __fastcall sub_608C2A1C(int a1);  /* 0x008c2a1c */
int __fastcall sub_608C2A9C(_DWORD *a1, int a2);  /* 0x008c2a9c */
int __fastcall sub_608C2B80(int a1, int a2);  /* 0x008c2b80 */
int __fastcall sub_608C2C40(_DWORD *a1, int a2);  /* 0x008c2c40 */
int __fastcall sub_608C2D24(int a1);  /* 0x008c2d24 */
int __fastcall sub_608C3E20(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x008c3e20 */
void __fastcall sub_608C3E94(int a1, int a2, int a3, char a4, int a5, char a6);  /* 0x008c3e94 */
int __fastcall sub_608C3F30(int a1);  /* 0x008c3f30 */
int __fastcall sub_608C3F88(_DWORD *a1);  /* 0x008c3f88 */
int __fastcall sub_608C3FE8(int a1, int a2, int a3);  /* 0x008c3fe8 */
int __fastcall sub_608C402C(int a1);  /* 0x008c402c */
int __fastcall sub_608C406C(_DWORD *a1, _DWORD *a2);  /* 0x008c406c */
int __fastcall sub_608C40AC(int a1, int a2);  /* 0x008c40ac */
int __fastcall sub_608C411C(int a1, int a2);  /* 0x008c411c */
int __fastcall sub_608C4168(int a1, int a2);  /* 0x008c4168 */
int __fastcall sub_608C4410(int a1, nn::audio::PerformanceInfo *a2, __int64 a3, __int64 a4, int a5);  /* 0x008c4410 */
int __fastcall sub_608C4F14(int a1, _DWORD *a2, int a3);  /* 0x008c4f14 */
int __fastcall sub_608C5128(_DWORD *a1, int a2);  /* 0x008c5128 */
int __fastcall sub_608C5358(int a1);  /* 0x008c5358 */
int __fastcall sub_608C5414(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x008c5414 */
int __fastcall sub_608C55EC(int result);  /* 0x008c55ec */
int __fastcall sub_608C5620(int result);  /* 0x008c5620 */
int __fastcall sub_608C5684(int result, int a2);  /* 0x008c5684 */
int __fastcall sub_608C5708(int result, int a2);  /* 0x008c5708 */
int __fastcall sub_608C57D0(int result, int a2);  /* 0x008c57d0 */
int __fastcall sub_608C5A74(int result, int a2);  /* 0x008c5a74 */
unsigned int __fastcall sub_608C5B2C(unsigned int result);  /* 0x008c5b2c */
int __fastcall sub_608C5C24(_DWORD *a1);  /* 0x008c5c24 */
int __fastcall sub_608C5C60(int *a1, int a2, int a3);  /* 0x008c5c60 */
int __fastcall sub_608C5D2C(int a1);  /* 0x008c5d2c */
int __fastcall sub_608C5EAC(_DWORD *a1);  /* 0x008c5eac */
int __fastcall sub_608C5FA0(_DWORD *a1);  /* 0x008c5fa0 */
int __fastcall sub_608C6070(int a1, int a2);  /* 0x008c6070 */
int __fastcall sub_608C61FC(_DWORD *a1, int a2);  /* 0x008c61fc */
signed int __fastcall sub_608C64DC(_DWORD *a1, int a2, int a3, int a4);  /* 0x008c64dc */
signed int __fastcall sub_608C65AC(char **a1, char *a2, char *a3, int a4, int a5);  /* 0x008c65ac */
int __fastcall sub_608C6A70(int a1);  /* 0x008c6a70 */
int __fastcall sub_608C6B24(_DWORD *a1);  /* 0x008c6b24 */
int __fastcall sub_608C6D44(_DWORD *a1, _BYTE *a2, int a3, int a4, _DWORD *a5);  /* 0x008c6d44 */
int __fastcall sub_608C6E60(int a1, int a2, int a3, _DWORD *a4);  /* 0x008c6e60 */
unsigned int __fastcall sub_608C6F1C(unsigned int result, int a2);  /* 0x008c6f1c */
int __fastcall sub_608C6F98(int result, int a2, int a3, int a4);  /* 0x008c6f98 */
int __fastcall sub_608C7044(int a1);  /* 0x008c7044 */
int __fastcall sub_608C7210(int a1, int a2, int a3);  /* 0x008c7210 */
int __fastcall sub_608C7364(int a1, int a2);  /* 0x008c7364 */
int __fastcall sub_608C77DC(int a1);  /* 0x008c77dc */
int __fastcall sub_608C7828(int a1, _DWORD *a2, int a3, int a4, int a5);  /* 0x008c7828 */
int __fastcall sub_608C78C8(int a1, int a2, int a3, int a4);  /* 0x008c78c8 */
int __fastcall sub_608C7BA4(int a1);  /* 0x008c7ba4 */
int __fastcall sub_608C7BEC(int a1);  /* 0x008c7bec */
int __fastcall sub_608C7C80(int a1, int a2);  /* 0x008c7c80 */
int __fastcall sub_608C7D68(int result, int a2);  /* 0x008c7d68 */
int __fastcall sub_608C7D98(int a1, int a2, int a3, int a4);  /* 0x008c7d98 */
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
int __fastcall sub_608C8DF8(_DWORD *a1, int a2, int a3);  /* 0x008c8df8 */
void __fastcall sub_608C8EEC(int a1, int a2);  /* 0x008c8eec */
int __fastcall sub_608C900C(_DWORD *a1);  /* 0x008c900c */
int __fastcall sub_608C9074(int *a1, int a2);  /* 0x008c9074 */
int __fastcall sub_608C9134(int a1, int a2);  /* 0x008c9134 */
int __fastcall sub_608C91B8(int a1);  /* 0x008c91b8 */
int __fastcall sub_608C9204(int a1, int a2, int a3, int a4, int a5);  /* 0x008c9204 */
int __fastcall sub_608C932C(int a1);  /* 0x008c932c */
int __fastcall sub_608C93B0(int a1);  /* 0x008c93b0 */
int __fastcall sub_608C9414(int a1);  /* 0x008c9414 */
int __fastcall sub_608C9544(int a1);  /* 0x008c9544 */
int __fastcall sub_608C97A8(int a1);  /* 0x008c97a8 */
int __fastcall sub_608C9840(int a1);  /* 0x008c9840 */
int __fastcall sub_608C9B6C(int result);  /* 0x008c9b6c */
int __fastcall sub_608C9C38(int result, int a2);  /* 0x008c9c38 */
int __fastcall sub_608C9C9C(int a1, int a2);  /* 0x008c9c9c */
int __fastcall sub_608CA030(int a1, _DWORD *a2, int a3, int a4, int a5);  /* 0x008ca030 */
int __fastcall sub_608CA260(int a1, int a2, float *a3, int a4);  /* 0x008ca260 */
int __fastcall sub_608CA3DC(int a1, int a2);  /* 0x008ca3dc */
int __fastcall sub_608CA4A0(int a1, float *a2, int a3, int a4, int a5, int a6);  /* 0x008ca4a0 */
int __fastcall sub_608CA9B8(int a1, int a2, float *a3, float *a4, _DWORD *a5, int a6);  /* 0x008ca9b8 */
int __fastcall sub_608CADA8(int result, char a2);  /* 0x008cada8 */
int __fastcall sub_608CAE64(int result, int a2, int a3, int a4);  /* 0x008cae64 */
int __fastcall sub_608CAF78(int result, _DWORD *a2, unsigned int a3, int a4);  /* 0x008caf78 */
int __fastcall sub_608CB064(unsigned __int8 *a1);  /* 0x008cb064 */
int __fastcall sub_608CB260(int a1, int a2);  /* 0x008cb260 */
int __fastcall sub_608CB2B8(int a1);  /* 0x008cb2b8 */
int __fastcall sub_608CB2E8(int a1);  /* 0x008cb2e8 */
int __fastcall sub_608CB324(int a1);  /* 0x008cb324 */
int __fastcall sub_608CB37C(int a1);  /* 0x008cb37c */
int __fastcall sub_608CB474(int a1, __int16 a2);  /* 0x008cb474 */
int __fastcall sub_608CB4D4(int a1, int a2);  /* 0x008cb4d4 */
int __fastcall sub_608CB57C(int a1);  /* 0x008cb57c */
int __fastcall sub_608CB698(int result, int a2, _WORD *a3);  /* 0x008cb698 */
int __fastcall sub_608CB6D0(int a1, int a2);  /* 0x008cb6d0 */
int __fastcall sub_608CB7F8(int a1, int a2, int a3, int *a4, int a5);  /* 0x008cb7f8 */
int __fastcall sub_608CB8B0(int a1, _DWORD *a2, _DWORD *a3);  /* 0x008cb8b0 */
int __fastcall sub_608CB940(int a1, char a2, char a3);  /* 0x008cb940 */
int __fastcall sub_608CBA60(int a1, int a2);  /* 0x008cba60 */
int __fastcall sub_608CBB38(int a1, int a2);  /* 0x008cbb38 */
int __fastcall sub_608CBD20(_DWORD *a1, int a2, int a3);  /* 0x008cbd20 */
int __fastcall sub_608CBE0C(int a1, int a2, int a3, int a4);  /* 0x008cbe0c */
int __fastcall sub_608CBEEC(int a1);  /* 0x008cbeec */
int __fastcall sub_608CC238(int a1);  /* 0x008cc238 */
int __fastcall sub_608CC34C(int a1, int a2, int a3);  /* 0x008cc34c */
int __fastcall sub_608CC44C(int a1, int a2, _DWORD *a3);  /* 0x008cc44c */
int __fastcall sub_608CC654(int a1);  /* 0x008cc654 */
int __fastcall sub_608CC820(int a1);  /* 0x008cc820 */
void __fastcall sub_608CC99C(int a1);  /* 0x008cc99c */
int __fastcall sub_608CCC78(_DWORD *a1, int a2, _DWORD *a3, int a4);  /* 0x008ccc78 */
int __fastcall sub_608CCE8C(_DWORD *a1, int a2, unsigned int a3, int *a4);  /* 0x008cce8c */
int __fastcall sub_608CCFF0(int *a1);  /* 0x008ccff0 */
int __fastcall sub_608CD158(int a1, int a2);  /* 0x008cd158 */
int __fastcall sub_608CD1E8(int a1, int *a2, int a3);  /* 0x008cd1e8 */
int __fastcall sub_608CD3E0(int a1, int a2, int a3, int a4, int a5, _DWORD *a6, _DWORD *a7);  /* 0x008cd3e0 */
int __fastcall sub_608CD94C(int result);  /* 0x008cd94c */
int __fastcall sub_608CDB20(int a1, int a2);  /* 0x008cdb20 */
int __fastcall sub_608CDC24(int a1, int a2);  /* 0x008cdc24 */
int __fastcall sub_608CDC68(int result, int a2);  /* 0x008cdc68 */
int __fastcall sub_608CDC98(int a1, int a2);  /* 0x008cdc98 */
int __fastcall sub_608CDCE8(int a1);  /* 0x008cdce8 */
int __fastcall sub_608CE258(int a1, unsigned int a2);  /* 0x008ce258 */
int __fastcall sub_608CE364(int a1, __int64 a2);  /* 0x008ce364 */
int __fastcall sub_608CE3F4(int a1);  /* 0x008ce3f4 */
int __fastcall sub_608CE450(int a1);  /* 0x008ce450 */
int __fastcall sub_608CE4AC(int a1);  /* 0x008ce4ac */
int __fastcall sub_608CE508(int a1);  /* 0x008ce508 */
int __fastcall sub_608CE564(int a1);  /* 0x008ce564 */
int __fastcall sub_608CE5C0(int a1, char a2);  /* 0x008ce5c0 */
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
int __fastcall sub_608CF668(int a1, int a2, int a3);  /* 0x008cf668 */
int __fastcall sub_608CF768(int a1);  /* 0x008cf768 */
int __fastcall sub_608CF7BC(int a1, int a2, int a3);  /* 0x008cf7bc */
int __fastcall sub_608CF868(int a1);  /* 0x008cf868 */
int __fastcall sub_608CF91C(int a1, int a2, int a3, int *a4);  /* 0x008cf91c */
int __fastcall sub_608CF998(int a1, int a2, int a3, int *a4);  /* 0x008cf998 */
int __fastcall sub_608CFA04(_DWORD *a1, int a2, int a3);  /* 0x008cfa04 */
int __fastcall sub_608CFDC0(int result);  /* 0x008cfdc0 */
unsigned int __fastcall sub_608CFE44(int a1, char *a2, size_t a3, int *a4, int a5, int a6);  /* 0x008cfe44 */
int __fastcall sub_608D0338(int a1, const void *a2, size_t a3, int *a4);  /* 0x008d0338 */
unsigned int __fastcall sub_608D06A4(int a1, int a2, int a3);  /* 0x008d06a4 */
int __fastcall sub_608D07BC(_DWORD *a1, _DWORD *a2);  /* 0x008d07bc */
__int64 __fastcall sub_608D08D0(int a1, int a2, int a3, _DWORD *a4);  /* 0x008d08d0 */
void __fastcall sub_608D0A28(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x008d0a28 */
int __fastcall sub_608D0B08(int a1);  /* 0x008d0b08 */
int __fastcall sub_608D0B5C(int result, int a2, int a3, _DWORD *a4);  /* 0x008d0b5c */
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
int __fastcall sub_608D14C0(int a1);  /* 0x008d14c0 */
unsigned int __fastcall sub_608D1544(int a1, int a2, int a3, int a4);  /* 0x008d1544 */
unsigned int __fastcall sub_608D1590(int a1, int a2, int a3, int a4, int a5);  /* 0x008d1590 */
int __fastcall sub_608D15DC(int a1, int a2, int a3, int a4, int a5, char a6, int a7);  /* 0x008d15dc */
int __fastcall sub_608D163C(int a1, int *a2, _DWORD *a3);  /* 0x008d163c */
int __fastcall sub_608D1A0C(int a1);  /* 0x008d1a0c */
int __fastcall sub_608D1A98(int a1);  /* 0x008d1a98 */
int __fastcall sub_608D1DA8(int a1, int a2);  /* 0x008d1da8 */
int __fastcall sub_608D2040(int a1, int a2);  /* 0x008d2040 */
int __fastcall sub_608D2228(int a1, int a2, int a3);  /* 0x008d2228 */
int __fastcall sub_608D23A4(int a1, int a2, int a3);  /* 0x008d23a4 */
int __fastcall sub_608D2444(int a1, int a2, char a3);  /* 0x008d2444 */
int __fastcall sub_608D2498(int a1, _DWORD *a2, int a3, int a4);  /* 0x008d2498 */
int __fastcall sub_608D291C(_DWORD *a1, const void *a2, size_t a3, int a4, int a5, int a6);  /* 0x008d291c */
unsigned int __fastcall sub_608D297C(_DWORD *a1, int a2, unsigned int a3);  /* 0x008d297c */
int __fastcall sub_608D2AA4(int a1, int a2, unsigned int a3);  /* 0x008d2aa4 */
int __fastcall sub_608D2AE8(int a1, const void *a2);  /* 0x008d2ae8 */
int __fastcall sub_608D2B28(int result, _QWORD *a2, int *a3, _DWORD *a4);  /* 0x008d2b28 */
int __fastcall sub_608D2B68(int result, _QWORD *a2, int *a3, int *a4, _DWORD *a5);  /* 0x008d2b68 */
int __fastcall sub_608D2BD8(int a1);  /* 0x008d2bd8 */
int __fastcall sub_608D2C08(_DWORD *a1, const void *a2);  /* 0x008d2c08 */
int __fastcall sub_608D2CAC(int *a1);  /* 0x008d2cac */
int __fastcall sub_608D2CF8(int a1, int a2);  /* 0x008d2cf8 */
int __fastcall sub_608D2E74(int a1, _DWORD *a2);  /* 0x008d2e74 */
int __fastcall sub_608D3188(int a1);  /* 0x008d3188 */
int __fastcall sub_608D32D4(int a1, _DWORD *a2);  /* 0x008d32d4 */
int __fastcall sub_608D348C(int a1);  /* 0x008d348c */
int __fastcall sub_608D36D0(int *a1, int a2, int a3);  /* 0x008d36d0 */
int __fastcall sub_608D39CC(int a1);  /* 0x008d39cc */
int __fastcall sub_608D3A9C(int result, int a2);  /* 0x008d3a9c */
int __fastcall sub_608D3B00(int a1);  /* 0x008d3b00 */
int __fastcall sub_608D3BAC(int a1, _BYTE *a2, int a3, int a4);  /* 0x008d3bac */
int __fastcall sub_608D3C60(int result);  /* 0x008d3c60 */
int __fastcall sub_608D3DDC(int result, int a2);  /* 0x008d3ddc */
int __fastcall sub_608D3E88(int a1);  /* 0x008d3e88 */
int __fastcall sub_608D3ED8(int a1);  /* 0x008d3ed8 */
int __fastcall sub_608D3F30(int a1);  /* 0x008d3f30 */
int __fastcall sub_608D3F88(int a1);  /* 0x008d3f88 */
int __fastcall sub_608D3FE4(int a1);  /* 0x008d3fe4 */
int __fastcall sub_608D4178(int result, int a2);  /* 0x008d4178 */
int __fastcall sub_608D477C(int a1, int a2, int a3);  /* 0x008d477c */
int __fastcall sub_608D4834(int a1, int a2, int a3, _DWORD *a4);  /* 0x008d4834 */
int __fastcall sub_608D4B40(int a1, int a2, int a3);  /* 0x008d4b40 */
int __fastcall sub_608D4BE4(int a1);  /* 0x008d4be4 */
int __fastcall sub_608D4C34(int a1);  /* 0x008d4c34 */
int __fastcall sub_608D514C(int result, unsigned __int16 *a2, int a3, int a4, int a5, _WORD *a6);  /* 0x008d514c */
int __fastcall sub_608D524C(int a1, int a2, int a3, int *a4);  /* 0x008d524c */
int __fastcall sub_608D5408(int a1);  /* 0x008d5408 */
int __fastcall sub_608D56A0(int a1);  /* 0x008d56a0 */
int __fastcall sub_608D56D0(int a1);  /* 0x008d56d0 */
int __fastcall sub_608D5714(int a1);  /* 0x008d5714 */
int __fastcall sub_608D5754(int a1);  /* 0x008d5754 */
bool __fastcall sub_608D583C(int *a1, int a2, int a3);  /* 0x008d583c */
int __fastcall sub_608D5E0C(int a1, int *a2, int a3, int a4, int a5);  /* 0x008d5e0c */
int __fastcall sub_608D6D04(int a1, int a2, int *a3);  /* 0x008d6d04 */
unsigned int __fastcall sub_608D6E8C(unsigned int result, int a2, unsigned int a3, unsigned int a4);  /* 0x008d6e8c */
int __fastcall sub_608D6EF4(_DWORD *a1);  /* 0x008d6ef4 */
int __fastcall sub_608D7058(int a1, unsigned __int8 *a2, char a3);  /* 0x008d7058 */
int __fastcall sub_608D70DC(int a1);  /* 0x008d70dc */
int __fastcall sub_608D72C4(int a1);  /* 0x008d72c4 */
int __fastcall sub_608D73A4(int a1);  /* 0x008d73a4 */
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
int __fastcall sub_608D95B4(int a1);  /* 0x008d95b4 */
int __fastcall sub_608D9604(int a1);  /* 0x008d9604 */
bool __fastcall sub_608D965C(int a1);  /* 0x008d965c */
int __fastcall sub_608D96C0(int a1);  /* 0x008d96c0 */
int __fastcall sub_608D9718(int a1);  /* 0x008d9718 */
int __fastcall sub_608D9768(int a1, unsigned int a2);  /* 0x008d9768 */
int __fastcall sub_608D97B0(int a1, unsigned int a2);  /* 0x008d97b0 */
void __fastcall sub_608D9838(_DWORD *a1, _BYTE *a2, _BYTE *a3, size_t a4);  /* 0x008d9838 */
int __fastcall sub_608D99AC(_DWORD *a1);  /* 0x008d99ac */
int __fastcall sub_608D9A70(int a1);  /* 0x008d9a70 */
int __fastcall sub_608D9AA0(int a1);  /* 0x008d9aa0 */
int __fastcall sub_608D9B60(int a1);  /* 0x008d9b60 */
int __fastcall sub_608D9B94(int a1, _DWORD *a2);  /* 0x008d9b94 */
int __fastcall sub_608D9C20(_DWORD *a1);  /* 0x008d9c20 */
int __fastcall sub_608D9C7C(int a1);  /* 0x008d9c7c */
int __fastcall sub_608D9E04(int result);  /* 0x008d9e04 */
int __fastcall sub_608D9F74(_DWORD *a1, int *a2);  /* 0x008d9f74 */
int __fastcall sub_608DA090(int a1);  /* 0x008da090 */
int __fastcall sub_608DA0E0(int a1);  /* 0x008da0e0 */
int __fastcall sub_608DA138(int *a1, int a2, _DWORD *a3);  /* 0x008da138 */
int __fastcall sub_608DA230(int a1);  /* 0x008da230 */
int __fastcall sub_608DA314(_DWORD *a1, int a2);  /* 0x008da314 */
int __fastcall sub_608DA388(int a1, int a2);  /* 0x008da388 */
int __fastcall sub_608DA4D4(_DWORD *a1);  /* 0x008da4d4 */
int __fastcall sub_608DA5E8(int *a1, int a2, int a3);  /* 0x008da5e8 */
int __fastcall sub_608DA794(int a1, int a2);  /* 0x008da794 */
int __fastcall sub_608DA7EC(int a1, int a2);  /* 0x008da7ec */
int __fastcall sub_608DA828(int a1);  /* 0x008da828 */
int __fastcall sub_608DAA48(int a1, int a2);  /* 0x008daa48 */
int __fastcall sub_608DAB60(_DWORD *a1);  /* 0x008dab60 */
int __fastcall sub_608DADE4(int a1);  /* 0x008dade4 */
int __fastcall sub_608DAED0(int a1);  /* 0x008daed0 */
int __fastcall sub_608DB5F8(int a1, int a2);  /* 0x008db5f8 */
int __fastcall sub_608DB6EC(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x008db6ec */
int __fastcall sub_608DB89C(int a1, int a2, int a3);  /* 0x008db89c */
int __fastcall sub_608DB98C(int a1, int a2, int a3, int a4, int a5);  /* 0x008db98c */
int __fastcall sub_608DBAA4(_DWORD *a1, int a2, int a3, int a4, int a5, int a6);  /* 0x008dbaa4 */
int __fastcall sub_608DBC64(_DWORD *a1, int a2);  /* 0x008dbc64 */
int __fastcall sub_608DBD90(int result);  /* 0x008dbd90 */
int __fastcall sub_608DC84C(int a1, int a2);  /* 0x008dc84c */
int __fastcall sub_608DC930(int a1);  /* 0x008dc930 */
int __fastcall sub_608DCB08(int a1, _DWORD *a2, int a3, char a4, char a5);  /* 0x008dcb08 */
int __fastcall sub_608DCC6C(int a1, int a2);  /* 0x008dcc6c */
int __fastcall sub_608DCD78(int a1, int a2, int a3);  /* 0x008dcd78 */
int __fastcall sub_608DCEB0(int a1);  /* 0x008dceb0 */
bool __fastcall sub_608DCFB4(int a1, unsigned int a2, int a3, int a4, int a5);  /* 0x008dcfb4 */
bool __fastcall sub_608DD174(int a1, int a2, int a3, int a4, int a5);  /* 0x008dd174 */
int __fastcall sub_608DD918(int a1);  /* 0x008dd918 */
int __fastcall sub_608DE1A4(unsigned int a1, int a2);  /* 0x008de1a4 */
int __fastcall sub_608DE200(unsigned int a1, int a2);  /* 0x008de200 */
int __fastcall sub_608DE334(unsigned int a1, int CurrentHeap, int a3);  /* 0x008de334 */
int __fastcall sub_608DE61C(int a1, int a2);  /* 0x008de61c */
int __fastcall sub_608DE684(int a1, int a2);  /* 0x008de684 */
void __fastcall sub_608DE6F4(int a1, _DWORD *a2, _DWORD *a3);  /* 0x008de6f4 */
int __fastcall sub_608DE7F0(int a1, int a2, int a3, int (__fastcall *a4)(int, int));  /* 0x008de7f0 */
unsigned int __fastcall sub_608DE844(unsigned int result, sead::Random *a2);  /* 0x008de844 */
int __fastcall sub_608DEA40(char *a1, int a2, int (__fastcall *a3)(char *, char *));  /* 0x008dea40 */
int __fastcall sub_608DEB9C(int *a1, int a2, int a3, int a4);  /* 0x008deb9c */
int __fastcall sub_608DEBEC(int *a1, sead::Random *a2);  /* 0x008debec */
int __fastcall sub_608DECA0(int result, int (__fastcall *a2)(_DWORD, _DWORD));  /* 0x008deca0 */
signed int __fastcall sub_608DED80(signed int result, int (__fastcall *a2)(int, _DWORD));  /* 0x008ded80 */
int __fastcall sub_608DEEE0(int *a1, int a2, int (__fastcall *a3)(_DWORD, int));  /* 0x008deee0 */
int __fastcall sub_608DF11C(int *a1, int *a2);  /* 0x008df11c */
int __fastcall sub_608DF200(int result, _DWORD *a2);  /* 0x008df200 */
int __fastcall sub_608DF38C(int result);  /* 0x008df38c */
int __fastcall sub_608DF3CC(int a1, int a2, int a3);  /* 0x008df3cc */
int __fastcall sub_608E14B0(int a1, int a2, char a3);  /* 0x008e14b0 */
int __fastcall sub_608E1C44(int a1);  /* 0x008e1c44 */
int __fastcall sub_608E1CE8(int a1);  /* 0x008e1ce8 */
int __fastcall sub_608E2668(int a1, _DWORD *a2, int a3);  /* 0x008e2668 */
bool __fastcall sub_608E3874(int a1);  /* 0x008e3874 */
int __fastcall sub_608E3AA4(int a1, _DWORD *a2, int a3, _DWORD *a4);  /* 0x008e3aa4 */
void __fastcall sub_608E60A4(sead::IDisposer *a1);  /* 0x008e60a4 */
int __fastcall sub_608E6170(_BYTE *a1, int a2);  /* 0x008e6170 */
int __fastcall sub_608E6578(_BYTE *a1, _DWORD *a2, int a3, int a4, int a5);  /* 0x008e6578 */
int __fastcall sub_608E65F8(_BYTE *a1, _DWORD *a2, int a3, int a4, int a5);  /* 0x008e65f8 */
int __fastcall sub_608E6738(_BYTE *a1, int a2);  /* 0x008e6738 */
int __fastcall sub_608E6964(_BYTE *a1, int a2, int a3, int a4);  /* 0x008e6964 */
int __fastcall sub_608E69E4(_BYTE *a1, int a2);  /* 0x008e69e4 */
int __fastcall sub_608E6A58(_BYTE *a1, int a2, int a3, int a4);  /* 0x008e6a58 */
int __fastcall sub_608E6AC0(_BYTE *a1, int a2, int a3);  /* 0x008e6ac0 */
int __fastcall sub_608E6B4C(_BYTE *a1, int a2);  /* 0x008e6b4c */
int __fastcall sub_608E6B98(_BYTE *a1, int a2);  /* 0x008e6b98 */
int __fastcall sub_608E6C04(_BYTE *a1, unsigned int *a2, int a3, int a4, unsigned int a5);  /* 0x008e6c04 */
int __fastcall sub_608E6D00(_BYTE *a1, _DWORD *a2, int a3);  /* 0x008e6d00 */
signed int __fastcall sub_608E7618(_DWORD *a1, int a2);  /* 0x008e7618 */
int __fastcall sub_608E7A54(int a1);  /* 0x008e7a54 */
int __fastcall sub_608E7AC0(int a1, int a2, int a3);  /* 0x008e7ac0 */
int __fastcall sub_608E7C10(int a1, _DWORD *a2, int a3, int a4);  /* 0x008e7c10 */
int __fastcall sub_608E7D54(int a1, int a2, int a3);  /* 0x008e7d54 */
int __fastcall sub_608E7DD8(int a1, int a2, int a3, int a4);  /* 0x008e7dd8 */
int __fastcall sub_608E7E5C(int a1, int a2, int a3);  /* 0x008e7e5c */
int __fastcall sub_608E7EC4(int a1);  /* 0x008e7ec4 */
int __fastcall sub_608E7F30(int a1);  /* 0x008e7f30 */
int __fastcall sub_608E7F80(int a1, int a2, int a3);  /* 0x008e7f80 */
int __fastcall sub_608E83B4(int a1, _DWORD *a2, _DWORD *a3);  /* 0x008e83b4 */
int __fastcall sub_608E8584(int a1, _DWORD *a2);  /* 0x008e8584 */
int __fastcall sub_608E86B8(int a1, _DWORD *a2, int a3, int a4, int a5);  /* 0x008e86b8 */
int __fastcall sub_608E8770(int a1, int a2, int a3);  /* 0x008e8770 */
int __fastcall sub_608E8914(int a1, int a2);  /* 0x008e8914 */
int __fastcall sub_608E8A4C(int a1, int a2);  /* 0x008e8a4c */
int __fastcall sub_608E8EFC(int a1, _DWORD *a2);  /* 0x008e8efc */
void __fastcall sub_608E906C(int a1, int a2);  /* 0x008e906c */
int __fastcall sub_608E93BC(int a1, _DWORD *a2);  /* 0x008e93bc */
int __fastcall sub_608E978C(int a1, _DWORD *a2);  /* 0x008e978c */
int __fastcall sub_608E9B50(_DWORD *a1, _DWORD *a2);  /* 0x008e9b50 */
int __fastcall sub_608E9F1C(_DWORD *a1, char a2);  /* 0x008e9f1c */
int __fastcall sub_608EA014(int a1, const void *a2);  /* 0x008ea014 */
int __fastcall sub_608EB168(int a1);  /* 0x008eb168 */
int __fastcall sub_608EC97C(int a1, const void *a2);  /* 0x008ec97c */
int __fastcall sub_608ECA58(int a1, int a2, const void *a3);  /* 0x008eca58 */
int __fastcall sub_608ED438(int result);  /* 0x008ed438 */
int __fastcall sub_608EDCA0(int a1, int a2);  /* 0x008edca0 */
int __fastcall sub_608EE3EC(int a1);  /* 0x008ee3ec */
int __fastcall sub_608EEB20(_DWORD *a1);  /* 0x008eeb20 */
int __fastcall sub_608EEFA8(int result);  /* 0x008eefa8 */
int __fastcall sub_608EF048(int result, int *a2);  /* 0x008ef048 */
int __fastcall sub_608EF0F0(int result, int *a2);  /* 0x008ef0f0 */
int __fastcall sub_608EF2B0(int result, int a2, int *a3, int a4);  /* 0x008ef2b0 */
int __fastcall sub_608EF6A8(int a1);  /* 0x008ef6a8 */
int __fastcall sub_608EFCAC(_DWORD *a1);  /* 0x008efcac */
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
int __fastcall sub_608F1478(int result);  /* 0x008f1478 */
int __fastcall sub_608F14B8(int result);  /* 0x008f14b8 */
int __fastcall sub_608F1654(int a1, _DWORD *a2, unsigned int a3, unsigned int a4);  /* 0x008f1654 */
int __fastcall sub_608F1AA4(int result);  /* 0x008f1aa4 */
int __fastcall sub_608F1B08(int a1);  /* 0x008f1b08 */
int __fastcall sub_608F1BFC(int a1);  /* 0x008f1bfc */
int __fastcall sub_608F2530(int a1, int a2);  /* 0x008f2530 */
__int64 __fastcall sub_608F2998(_QWORD *a1);  /* 0x008f2998 */
int __fastcall sub_608F2CB4(int a1);  /* 0x008f2cb4 */
int __fastcall sub_608F3E88(int result);  /* 0x008f3e88 */
int __fastcall sub_608F4A80(int a1);  /* 0x008f4a80 */
int __fastcall sub_608F4AD4(int a1);  /* 0x008f4ad4 */
int __fastcall sub_608F4CE4(_DWORD *a1);  /* 0x008f4ce4 */
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
int __fastcall sub_608F6050(int a1, int a2, int a3, int a4);  /* 0x008f6050 */
int __fastcall sub_608F62C0(int a1, int a2, int a3);  /* 0x008f62c0 */
int __fastcall sub_608F6664(int a1);  /* 0x008f6664 */
int __fastcall sub_608F6730(int a1);  /* 0x008f6730 */
int __fastcall sub_608F69BC(int a1, unsigned int a2);  /* 0x008f69bc */
int __fastcall sub_608F6BCC(_DWORD *a1, int a2, int a3);  /* 0x008f6bcc */
int __fastcall sub_608F6E48(_DWORD *a1, int a2, int a3);  /* 0x008f6e48 */
int __fastcall sub_608F6F58(int a1, unsigned int a2, int a3, int a4);  /* 0x008f6f58 */
int __fastcall sub_608F70B4(_DWORD *a1, unsigned int a2, int a3);  /* 0x008f70b4 */
int __fastcall sub_608F7208(_DWORD *a1, unsigned int a2, int a3, int a4);  /* 0x008f7208 */
unsigned int __fastcall sub_608F7394(int a1, unsigned int a2);  /* 0x008f7394 */
int __fastcall sub_608F882C(int a1, int a2, _DWORD *a3, int a4, int a5, int a6);  /* 0x008f882c */
int __fastcall sub_608F8E10(int a1, int *a2);  /* 0x008f8e10 */
int __fastcall sub_608F9760(int a1);  /* 0x008f9760 */
int __fastcall sub_608F98A4(int a1, unsigned int a2, unsigned int a3);  /* 0x008f98a4 */
int __fastcall sub_608F9A44(int a1, int a2);  /* 0x008f9a44 */
int __fastcall sub_608F9B64(int a1, int a2, signed int a3);  /* 0x008f9b64 */
int __fastcall sub_608FA7D4(int *a1);  /* 0x008fa7d4 */
int __fastcall sub_608FAC7C(int result);  /* 0x008fac7c */
int __fastcall sub_608FAE64(int a1, int a2, int a3, int a4);  /* 0x008fae64 */
int __fastcall sub_608FBB8C(unsigned int a1);  /* 0x008fbb8c */
int __fastcall sub_608FBBD0(unsigned int a1, char a2);  /* 0x008fbbd0 */
int __fastcall sub_608FBCE4(int result, _BYTE *a2, int a3);  /* 0x008fbce4 */
int __fastcall sub_608FC14C(int a1, int *a2, int a3);  /* 0x008fc14c */
int __fastcall sub_608FC5E0(int a1, _DWORD *a2, _DWORD *a3);  /* 0x008fc5e0 */
int __fastcall sub_608FC978(int *a1, _DWORD *a2);  /* 0x008fc978 */
int __fastcall sub_608FCA38(int result, int a2, int a3, int a4);  /* 0x008fca38 */
int __fastcall sub_608FCB98(int a1, int *a2);  /* 0x008fcb98 */
int __fastcall sub_608FD324(int *a1, _DWORD *a2);  /* 0x008fd324 */
int __fastcall sub_608FD64C(char *a1, int *a2, int a3, char *a4, int a5, _DWORD *a6, _DWORD *a7, bool *a8);  /* 0x008fd64c */
int __fastcall sub_608FDE40(_DWORD *a1, int a2);  /* 0x008fde40 */
signed int __fastcall sub_608FDFB8(int a1, _BYTE *a2, signed int a3);  /* 0x008fdfb8 */
signed int __fastcall sub_608FE058(int *a1, _BYTE *a2, signed int a3);  /* 0x008fe058 */
int __fastcall sub_608FE0E4(int a1, int a2, char a3);  /* 0x008fe0e4 */
int __fastcall sub_608FE178(unsigned __int64 *a1, _DWORD *a2, int a3);  /* 0x008fe178 */
int __fastcall sub_608FE7E0(int *a1, _DWORD *a2, int a3);  /* 0x008fe7e0 */
int __fastcall sub_608FEE88(unsigned int *a1, _DWORD *a2, int a3);  /* 0x008fee88 */
int __fastcall sub_608FF3E8(int *a1, _DWORD *a2, int a3);  /* 0x008ff3e8 */
int __fastcall sub_608FF974(unsigned __int16 *a1, _DWORD *a2, int a3);  /* 0x008ff974 */
int __fastcall sub_608FFF00(_WORD *a1, _DWORD *a2, int a3);  /* 0x008fff00 */
int __fastcall sub_609004A0(unsigned __int8 *a1, _DWORD *a2, int a3);  /* 0x009004a0 */
int __fastcall sub_60900A24(_BYTE *a1, _DWORD *a2, int a3);  /* 0x00900a24 */
int __fastcall sub_60900FB8(float *a1, _DWORD *a2);  /* 0x00900fb8 */
unsigned int __fastcall sub_60901524(_WORD *a1, int a2, _BYTE *a3, int a4);  /* 0x00901524 */
unsigned int __fastcall sub_609017B8(int a1, int a2, int a3, int a4);  /* 0x009017b8 */
int __fastcall sub_60901A08(_WORD *a1, unsigned int a2, int a3, int a4);  /* 0x00901a08 */
unsigned int __fastcall sub_60901AE8(int a1, unsigned int a2, _WORD *a3, int a4);  /* 0x00901ae8 */
int __fastcall sub_60901BF4(int a1);  /* 0x00901bf4 */
int __fastcall sub_6090261C(int a1, _DWORD *a2, _DWORD *a3);  /* 0x0090261c */
int __fastcall sub_60902734(int a1, _DWORD *a2);  /* 0x00902734 */
int __fastcall sub_60902770(_DWORD *a1, int a2);  /* 0x00902770 */
int __fastcall sead_ResourceMgr_OpenFileRelated(int a1, _DWORD *a2);  /* 0x00902828 */
int __fastcall sub_609029CC(int a1, _DWORD *a2);  /* 0x009029cc */
int __fastcall sub_60902A08(_DWORD *a1, _DWORD *a2, int a3, int a4);  /* 0x00902a08 */
int __fastcall sub_60902D24(int a1, _DWORD *a2);  /* 0x00902d24 */
int __fastcall sub_60903B44(int a1, unsigned __int8 *a2, unsigned int a3);  /* 0x00903b44 */
int __fastcall sub_60903F5C(int a1, unsigned int a2, int a3);  /* 0x00903f5c */
int __fastcall sub_60904C68(int a1, int a2, int a3);  /* 0x00904c68 */
int __fastcall sub_60904D08(int a1);  /* 0x00904d08 */
int __fastcall sub_60904E6C(int a1, int a2, int a3);  /* 0x00904e6c */
int __fastcall sub_60904F0C(int a1);  /* 0x00904f0c */
int __fastcall sub_60905760(int a1);  /* 0x00905760 */
int __fastcall sub_60905918(_DWORD *a1, int (__fastcall ***a2)(_DWORD, unsigned __int8 *, int));  /* 0x00905918 */
int __fastcall sub_60908478(int a1, nn::os **a2);  /* 0x00908478 */
int __fastcall sub_609085F8(_DWORD *a1);  /* 0x009085f8 */
int __fastcall sub_60908808(nn::os *a1, int a2);  /* 0x00908808 */
int __fastcall sub_60908DA4(int a1);  /* 0x00908da4 */
int __fastcall sub_6090905C(int result, int a2, int a3, float *a4);  /* 0x0090905c */
unsigned int __fastcall sub_60909158(int a1, int a2, int a3);  /* 0x00909158 */
int __fastcall sub_60909348(int a1, int a2, float *a3, char a4);  /* 0x00909348 */
int __fastcall sub_609094C4(int result, int a2, char a3, char a4);  /* 0x009094c4 */
bool __fastcall sub_60909518(int a1);  /* 0x00909518 */
int __fastcall sub_609097DC(int a1, int a2);  /* 0x009097dc */
int __fastcall sub_60909B48(int a1, int a2, int a3);  /* 0x00909b48 */
void __fastcall sub_60909CAC(_DWORD *a1, signed int a2, unsigned __int8 *a3, int a4);  /* 0x00909cac */
int __fastcall sub_60909DF4(int a1);  /* 0x00909df4 */
int __fastcall sub_60909EC8(int result);  /* 0x00909ec8 */
void __fastcall sub_6090A030(_DWORD *a1, _DWORD *a2, int a3);  /* 0x0090a030 */
int __fastcall sub_6090A420(float *a1, int a2, float *a3, int a4, int a5);  /* 0x0090a420 */
int __fastcall sub_6090A6D0(int a1, float *a2);  /* 0x0090a6d0 */
int __fastcall sub_6090A7D4(int a1, float *a2);  /* 0x0090a7d4 */
int __fastcall sub_6090AFF4(unsigned __int8 *a1, unsigned __int8 *a2);  /* 0x0090aff4 */
bool __fastcall sub_6090B200(float *a1, float *a2);  /* 0x0090b200 */
int __fastcall sub_6090B2B4(_DWORD *a1, int a2);  /* 0x0090b2b4 */
int __fastcall sub_6090B350(int result);  /* 0x0090b350 */
int __fastcall sub_6090B4B0(unsigned __int8 *a1, int a2);  /* 0x0090b4b0 */
int __fastcall sub_6090B8B4(unsigned __int8 *a1, int a2);  /* 0x0090b8b4 */
int __fastcall sub_6090BA14(int a1, int a2);  /* 0x0090ba14 */
int __fastcall sub_6090BAA4(int a1, int a2);  /* 0x0090baa4 */
int __fastcall sub_6090BC48(unsigned __int8 *a1, int a2);  /* 0x0090bc48 */
int __fastcall sub_6090BD34(_QWORD *a1, int a2);  /* 0x0090bd34 */
int __fastcall sub_6090BD8C(_QWORD *a1, __int64 *a2);  /* 0x0090bd8c */
int __fastcall sub_6090BDE0(int a1);  /* 0x0090bde0 */
int __fastcall sub_6090BE54(int a1);  /* 0x0090be54 */
int __fastcall sub_6090BED8(int a1, float *a2, float *a3);  /* 0x0090bed8 */
int __fastcall sub_6090C000(int a1, int a2, float *a3, int a4);  /* 0x0090c000 */
int __fastcall sub_6090C214(int result);  /* 0x0090c214 */
int __fastcall sub_6090C2F8(int a1);  /* 0x0090c2f8 */
int __fastcall sub_6090C344(int a1);  /* 0x0090c344 */
int __fastcall sub_6090C42C(int a1);  /* 0x0090c42c */
int __fastcall sub_6090C6DC(int result);  /* 0x0090c6dc */
int __fastcall sub_6090C77C(int result);  /* 0x0090c77c */
int __fastcall sub_6090C7F8(int result, int a2);  /* 0x0090c7f8 */
int __fastcall sub_6090C954(int result, float *a2);  /* 0x0090c954 */
int __fastcall sub_6090CAD8(int result);  /* 0x0090cad8 */
int __fastcall sub_6090CD44(int result);  /* 0x0090cd44 */
int __fastcall sub_6090CE08(int a1);  /* 0x0090ce08 */
int __fastcall sub_6090CEB0(int result, _QWORD *a2, int a3);  /* 0x0090ceb0 */
int __fastcall sub_6090DB24(int result, int a2, int a3);  /* 0x0090db24 */
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
int __fastcall sub_6090F22C(float *a1, float *a2, float *a3);  /* 0x0090f22c */
int __fastcall sub_6090F2F0(float *a1, float *a2, __int64 a3);  /* 0x0090f2f0 */
int __fastcall sub_6090F474(float *a1, float *a2, __int64 a3);  /* 0x0090f474 */
int __fastcall sub_6090FB78(unsigned int *a1, unsigned __int8 *a2, int a3);  /* 0x0090fb78 */
int __fastcall sub_6090FC94(unsigned int *a1, _BYTE *a2);  /* 0x0090fc94 */
int __fastcall sub_6090FDBC(unsigned int *a1, unsigned __int8 *a2, int a3);  /* 0x0090fdbc */
int __fastcall sub_6090FED8(unsigned int *a1, _BYTE *a2);  /* 0x0090fed8 */
int __fastcall sub_6091000C(int result);  /* 0x0091000c */
int __fastcall sub_60910068(int result, unsigned int a2);  /* 0x00910068 */
int __fastcall sub_60910288(int a1);  /* 0x00910288 */
int __fastcall sub_609103D4(int a1, _DWORD *a2, int a3);  /* 0x009103d4 */
int __fastcall sub_609105F4(int a1);  /* 0x009105f4 */
int __fastcall sub_609109C0(int a1, unsigned int a2, int a3);  /* 0x009109c0 */
unsigned int __fastcall sub_60910B0C(int a1, int a2);  /* 0x00910b0c */
int __fastcall sub_60910CEC(_DWORD *a1, int *a2);  /* 0x00910cec */
int __fastcall sub_60910F70(_QWORD *a1, _DWORD *a2);  /* 0x00910f70 */
unsigned __int64 __fastcall sub_60911208(unsigned __int64 *a1);  /* 0x00911208 */
bool __fastcall sub_609112F0(unsigned int a1);  /* 0x009112f0 */
int __fastcall sub_60911344(int *a1, int *a2, int *a3);  /* 0x00911344 */
unsigned int __fastcall sub_60911400(_DWORD *a1);  /* 0x00911400 */
int __fastcall sub_60911638(int a1, int a2);  /* 0x00911638 */
int __fastcall sub_6091187C(int a1, int a2, int a3);  /* 0x0091187c */
bool __fastcall sub_609118FC(int a1, int a2, int a3);  /* 0x009118fc */
int __fastcall sub_609119B8(int a1);  /* 0x009119b8 */
int __fastcall sub_60911A10(int a1, int *a2, unsigned int a3);  /* 0x00911a10 */
int __fastcall sub_6091221C(int *a1, int a2);  /* 0x0091221c */
unsigned int __fastcall decompressYaz0(_BYTE *a1, int a2);  /* 0x00912314 */
int __fastcall sub_60912E2C(int result, signed int a2, int a3);  /* 0x00912e2c */
int __fastcall sub_60912EC0(int a1, int a2);  /* 0x00912ec0 */
int __fastcall sub_60912FB4(int a1);  /* 0x00912fb4 */
int __fastcall sub_6091302C(int a1);  /* 0x0091302c */
int __fastcall sub_60913164(int a1);  /* 0x00913164 */
int __fastcall sub_609131DC(int a1);  /* 0x009131dc */
int __fastcall sub_60913268(int *a1);  /* 0x00913268 */
int __fastcall sub_60913368(int a1, int a2);  /* 0x00913368 */
int __fastcall sub_609133D0(unsigned __int8 *a1, unsigned int a2);  /* 0x009133d0 */
int __fastcall sub_60913448(int a1, int a2, int a3);  /* 0x00913448 */
int __fastcall sub_60913488(int result, int a2, int a3);  /* 0x00913488 */
int __fastcall sub_60913508(int a1);  /* 0x00913508 */
int __fastcall sub_60913564(int result, int a2);  /* 0x00913564 */
int __fastcall sub_60913598(int a1);  /* 0x00913598 */
int __fastcall sub_6091361C(int a1);  /* 0x0091361c */
int __fastcall sub_60913708(int result, int a2);  /* 0x00913708 */
bool __fastcall sub_6091377C(int a1, int a2, char a3);  /* 0x0091377c */
int __fastcall sub_609137C4(int result, char a2);  /* 0x009137c4 */
int __fastcall sub_60913814(int a1);  /* 0x00913814 */
int __fastcall sub_60913B04(int *a1, int a2);  /* 0x00913b04 */
int __fastcall sub_60913B5C(int *a1, int a2);  /* 0x00913b5c */
int __fastcall sub_60913BB4(int result);  /* 0x00913bb4 */
int __fastcall sub_60913C18(int a1);  /* 0x00913c18 */
int __fastcall sub_60913CF0(int a1);  /* 0x00913cf0 */
int __fastcall sub_60913D88(int a1, int a2, int CurrentHeap, int a4, int a5);  /* 0x00913d88 */
int __fastcall sub_60913E24(int a1, int a2, int a3, int a4, int a5);  /* 0x00913e24 */
int __fastcall sub_60913EA4(int result, int a2, int a3, int a4, int a5, int a6);  /* 0x00913ea4 */
int __fastcall sub_60913F34(_DWORD *a1, int a2);  /* 0x00913f34 */
int __fastcall sub_60913FE4(_DWORD *a1, int a2);  /* 0x00913fe4 */
int __fastcall sub_6091491C(_DWORD *a1);  /* 0x0091491c */
int __fastcall sub_60914960(char a1);  /* 0x00914960 */
unsigned int __fastcall sub_609149F0(int a1, int a2, int a3, int *a4, int a5, int a6);  /* 0x009149f0 */
int __fastcall sub_60914B2C(int a1);  /* 0x00914b2c */
int __fastcall sub_60914D38(int *a1, int a2);  /* 0x00914d38 */
int __fastcall sub_60914E10(_DWORD *a1, _DWORD *a2);  /* 0x00914e10 */
int __fastcall sub_609154D0(sead::Heap *a1);  /* 0x009154d0 */
int __fastcall sub_60915628(int a1, int a2, sead::Heap *a3, unsigned int a4, int a5, char a6);  /* 0x00915628 */
int __fastcall sub_60915B3C(int a1);  /* 0x00915b3c */
int __fastcall sub_60915BB8(sead::Heap *a1);  /* 0x00915bb8 */
int __fastcall sub_60915C40(int a1);  /* 0x00915c40 */
int __fastcall sub_60915F04(_DWORD *a1);  /* 0x00915f04 */
int __fastcall sub_60915FCC(int a1, int a2);  /* 0x00915fcc */
int __fastcall sub_60916308(int a1, int a2);  /* 0x00916308 */
int __fastcall sub_60916550(int a1, unsigned int a2, const void *a3, __int16 a4);  /* 0x00916550 */
int __fastcall sub_60916668(int a1, int a2);  /* 0x00916668 */
bool __fastcall sub_609166D8(int a1, int a2, int a3);  /* 0x009166d8 */
int __fastcall sub_60916740(int a1, int a2, int a3);  /* 0x00916740 */
bool __fastcall sub_60916A58(int a1, int a2);  /* 0x00916a58 */
int __fastcall sub_60916A94(int a1, int a2);  /* 0x00916a94 */
int __fastcall sub_60916BA8(int a1, int a2, int a3);  /* 0x00916ba8 */
int __fastcall sub_60916E4C(int a1, int a2, int a3, int a4);  /* 0x00916e4c */
int __fastcall sub_60916E94(int a1, int a2);  /* 0x00916e94 */
int __fastcall sub_60916FEC(_DWORD *a1, int *a2, int a3);  /* 0x00916fec */
int __fastcall sub_609171A8(int result, int a2, int a3, int a4, char *a5, char a6);  /* 0x009171a8 */
int __fastcall sub_609172E0(int result, int a2, int a3, int a4, char *a5, char a6);  /* 0x009172e0 */
int __fastcall sub_609175E4(int a1);  /* 0x009175e4 */
int __fastcall sub_60917654(int a1);  /* 0x00917654 */
int __fastcall sub_609176C0(int a1, int a2);  /* 0x009176c0 */
int __fastcall sub_60917754(int a1, int a2);  /* 0x00917754 */
int __fastcall sub_60917844(int a1, const void *a2, int a3, int a4, int a5);  /* 0x00917844 */
int __fastcall sub_60917974(int a1, const void *a2, int a3);  /* 0x00917974 */
int __fastcall sub_60917AE4(int a1);  /* 0x00917ae4 */
bool __fastcall sub_60917B1C(int a1, int a2);  /* 0x00917b1c */
__int64 __fastcall sub_60917BC8(int a1, int a2);  /* 0x00917bc8 */
__int64 __fastcall sub_60917C30(__int64 *a1);  /* 0x00917c30 */
int __fastcall sub_60917C68(int a1);  /* 0x00917c68 */
int __fastcall sub_60917F34(int a1);  /* 0x00917f34 */
int __fastcall sub_6091805C(int a1);  /* 0x0091805c */
int __fastcall sub_60918238(int a1, int a2);  /* 0x00918238 */
int __fastcall sub_60918268(int a1);  /* 0x00918268 */
int __fastcall sub_609183B4(int a1, int a2);  /* 0x009183b4 */
int __fastcall sub_609184EC(int a1, int a2);  /* 0x009184ec */
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
int __fastcall sub_60919D48(_DWORD *a1, _DWORD *a2, int a3, int a4);  /* 0x00919d48 */
int __fastcall sub_60919ED8(int a1, int *a2);  /* 0x00919ed8 */
signed int __fastcall sub_60919F98(int a1, int a2);  /* 0x00919f98 */
int __fastcall sub_6091A004(_DWORD *a1, int a2);  /* 0x0091a004 */
int __fastcall sub_6091A0C8(int a1, int a2, int a3);  /* 0x0091a0c8 */
int __fastcall sub_6091A624(int a1, int (__fastcall ***a2)(_DWORD, void *), unsigned int a3, int a4, int a5);  /* 0x0091a624 */
int __fastcall sub_6091A764(int result, int a2, int a3, unsigned int a4, int a5, int a6);  /* 0x0091a764 */
int __fastcall sub_6091A804(int a1, int a2, int a3, unsigned int a4, int a5, int a6, int a7);  /* 0x0091a804 */
int __fastcall sub_6091ACB0(_DWORD *a1);  /* 0x0091acb0 */
int __fastcall sub_6091AD4C(int a1);  /* 0x0091ad4c */
int __fastcall sub_6091ADA0(int a1);  /* 0x0091ada0 */
int __fastcall sub_6091AE30(int result, int *a2, unsigned int a3);  /* 0x0091ae30 */
int __fastcall sub_6091AEA0(int **a1);  /* 0x0091aea0 */
int __fastcall sub_6091B384(int a1, int a2);  /* 0x0091b384 */
int __fastcall sub_6091B3D0(int *a1);  /* 0x0091b3d0 */
int __fastcall sub_6091B890(_DWORD *a1, int a2, int a3, int a4);  /* 0x0091b890 */
int __fastcall sub_6091B8EC(int a1, int a2);  /* 0x0091b8ec */
int __fastcall sub_6091B9AC(int a1, int a2);  /* 0x0091b9ac */
int __fastcall sub_6091BA6C(int a1, int a2);  /* 0x0091ba6c */
int __fastcall sub_6091BB2C(int a1, int a2);  /* 0x0091bb2c */
int __fastcall sub_6091BC18(int a1, int a2);  /* 0x0091bc18 */
int __fastcall sub_6091BCD8(int a1);  /* 0x0091bcd8 */
int __fastcall sub_6091BD9C(int a1);  /* 0x0091bd9c */
int __fastcall sub_6091BE6C(_DWORD *a1);  /* 0x0091be6c */
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
int __fastcall sub_6091D95C(int a1);  /* 0x0091d95c */
int __fastcall sub_6091D9B0(int a1);  /* 0x0091d9b0 */
int __fastcall sub_6091DD8C(int a1, int a2);  /* 0x0091dd8c */
int __fastcall sub_6091DF38(int a1, int a2);  /* 0x0091df38 */
int __fastcall sub_6091E038(int a1);  /* 0x0091e038 */
int __fastcall sub_6091E108(int a1, int a2, int a3, int a4, int a5);  /* 0x0091e108 */
int __fastcall sub_6091E13C(int a1, int a2, int a3, int a4, __int64 a5);  /* 0x0091e13c */
bool __fastcall sub_6091E1AC(int a1, int a2);  /* 0x0091e1ac */
int __fastcall sub_6091E300(int a1, int a2, int a3, int a4, int a5);  /* 0x0091e300 */
int __fastcall sub_6091E758(int a1);  /* 0x0091e758 */
int __fastcall sub_6091E838(int a1, int a2, int a3, char a4, int a5);  /* 0x0091e838 */
int __fastcall sub_6091EB84(int a1, int a2, int a3);  /* 0x0091eb84 */
int __fastcall sub_6091F0FC(_DWORD *a1);  /* 0x0091f0fc */
int __fastcall sub_6091F23C(int a1, int a2, unsigned __int16 a3, int a4, int a5);  /* 0x0091f23c */
int __fastcall sub_6091F558(int a1);  /* 0x0091f558 */
int __fastcall sub_6091F63C(int a1, int a2);  /* 0x0091f63c */
int __fastcall sub_6091F7B8(int a1);  /* 0x0091f7b8 */
int __fastcall sub_6091F8A0(int a1);  /* 0x0091f8a0 */
int __fastcall sub_6091F9A0(int a1, _DWORD *a2);  /* 0x0091f9a0 */
int __fastcall sub_6091FC74(signed int *a1, signed int a2, int a3, int a4);  /* 0x0091fc74 */
int __fastcall sub_6091FD58(int a1);  /* 0x0091fd58 */
int __fastcall sub_6091FDB0(int a1, int a2, __int16 a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10);  /* 0x0091fdb0 */
int __fastcall sub_6091FE5C(int a1);  /* 0x0091fe5c */
int __fastcall sub_60920064(int result, int a2, int a3);  /* 0x00920064 */
int __fastcall sub_609200FC(int *a1);  /* 0x009200fc */
int __fastcall sub_60920168(int *a1);  /* 0x00920168 */
int __fastcall sub_609201D4(unsigned __int16 *a1, int a2, unsigned __int16 *a3, int a4, int a5);  /* 0x009201d4 */
int __fastcall sub_60920328(unsigned __int16 *a1, int a2, unsigned __int16 *a3, int a4, int a5, int a6, int a7);  /* 0x00920328 */
int __fastcall sub_609204B0(int a1, int a2);  /* 0x009204b0 */
int __fastcall sub_60920648(int a1, int a2, int *a3, int a4);  /* 0x00920648 */
int __fastcall sub_609208DC(int *a1, int *a2, char a3);  /* 0x009208dc */
int __fastcall sub_60920AC4(int *a1, unsigned __int8 a2, unsigned __int8 a3, int a4, int a5);  /* 0x00920ac4 */
int __fastcall sub_60920BBC(int *a1);  /* 0x00920bbc */
int __fastcall sub_60920CE4(int a1, __int16 a2, int a3, int a4, int a5, int a6);  /* 0x00920ce4 */
int __fastcall sub_60920E04(int a1);  /* 0x00920e04 */
int __fastcall sub_60920F30(int a1, int a2);  /* 0x00920f30 */
int __fastcall sub_60920FDC(int *a1, int a2, char *a3);  /* 0x00920fdc */
int __fastcall sub_609210C4(int result, char a2);  /* 0x009210c4 */
int __fastcall sub_60921340(int result);  /* 0x00921340 */
int __fastcall sub_609213B8(int a1);  /* 0x009213b8 */
int __fastcall sub_609214AC(int a1, unsigned int a2, int a3);  /* 0x009214ac */
int __fastcall sub_60921540(int a1, int a2, int a3, unsigned int a4, unsigned int a5);  /* 0x00921540 */
int __fastcall sub_60921694(_DWORD *a1, int a2, int a3);  /* 0x00921694 */
int __fastcall sub_609216EC(int a1, int a2, int a3, int a4);  /* 0x009216ec */
int __fastcall sub_609217FC(int a1, int *a2, int a3, int a4);  /* 0x009217fc */
int __fastcall sub_60921988(_DWORD **a1, int a2, int a3, _DWORD *a4, int a5, int a6);  /* 0x00921988 */
int __fastcall sub_60921AE8(int result);  /* 0x00921ae8 */
int __fastcall sub_60921BD4(int a1);  /* 0x00921bd4 */
int __fastcall sub_60921D30(int a1, signed int a2, int a3);  /* 0x00921d30 */
int __fastcall sub_60921DF0(int result, int a2, int a3, char a4);  /* 0x00921df0 */
int __fastcall sub_60921EB8(_DWORD *a1, int *a2);  /* 0x00921eb8 */
int __fastcall sub_60921F90(int a1);  /* 0x00921f90 */
int __fastcall sub_60922278(int a1, int a2);  /* 0x00922278 */
int __fastcall sub_60922344(int result);  /* 0x00922344 */
int __fastcall sub_60922478(int a1);  /* 0x00922478 */
int __fastcall sub_609225B8(int a1, _DWORD *a2, unsigned int a3, unsigned int a4);  /* 0x009225b8 */
int __fastcall sub_60922730(_DWORD *a1, int a2, int a3);  /* 0x00922730 */
int __fastcall sub_60922794(_DWORD *a1, int *a2, int a3);  /* 0x00922794 */
int __fastcall sub_60922864(int a1);  /* 0x00922864 */
int __fastcall sub_60922FA4(int a1, __int16 a2, int a3, int a4, int a5);  /* 0x00922fa4 */
int __fastcall sub_60923050(int a1);  /* 0x00923050 */
int __fastcall sub_609231B8(_DWORD *a1, _DWORD *a2);  /* 0x009231b8 */
int __fastcall sub_609232EC(int a1, int a2, int a3, int a4, int a5, int a6, int a7);  /* 0x009232ec */
int __fastcall sub_60923330(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x00923330 */
int __fastcall sub_60923B60(int result, unsigned int a2, int a3);  /* 0x00923b60 */
void __fastcall sub_60923C70(int a1, int a2, int a3);  /* 0x00923c70 */
int __fastcall sub_60923D84(_DWORD *a1);  /* 0x00923d84 */
int __fastcall sub_60923DC8(_DWORD *a1, unsigned int a2, _DWORD *a3);  /* 0x00923dc8 */
int __fastcall sub_60923F24(int a1, int a2);  /* 0x00923f24 */
int __fastcall sub_60924160(int *a1, _DWORD *a2);  /* 0x00924160 */
int __fastcall sub_609244C0(int a1, int a2, int a3);  /* 0x009244c0 */
int __fastcall sub_609249E4(int a1, unsigned int a2);  /* 0x009249e4 */
int __fastcall sub_60924B48(_DWORD *a1);  /* 0x00924b48 */
int __fastcall sub_60924BFC(_DWORD *a1);  /* 0x00924bfc */
int __fastcall sub_60924DD0(_DWORD *a1, int a2, int a3, unsigned int a4);  /* 0x00924dd0 */
int __fastcall sub_60924F70(_DWORD *a1, int a2, unsigned int a3, int a4, int a5, int a6, int a7, int a8);  /* 0x00924f70 */
int __fastcall sub_609252C8(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x009252c8 */
int __fastcall sub_60925308(int a1, int a2, unsigned int a3);  /* 0x00925308 */
int __fastcall sub_60925434(_DWORD *a1, int a2, char a3, unsigned int a4);  /* 0x00925434 */
int __fastcall sub_60925854(int a1, int a2, int a3, unsigned int a4);  /* 0x00925854 */
int __fastcall sub_60926604(_DWORD *a1, int a2, int a3);  /* 0x00926604 */
int __fastcall sub_60926F90(_DWORD *a1, int a2);  /* 0x00926f90 */
int __fastcall sub_6092715C(int a1);  /* 0x0092715c */
int __fastcall sub_609273A4(int result);  /* 0x009273a4 */
int __fastcall sub_60927968(signed int *a1, signed int a2, int a3, int a4);  /* 0x00927968 */
int __fastcall sub_609289E8(int a1);  /* 0x009289e8 */
int __fastcall sub_60929BC4(int a1);  /* 0x00929bc4 */
int __fastcall sub_6092B1C0(int a1, int a2);  /* 0x0092b1c0 */
int __fastcall sub_6092B744(int result);  /* 0x0092b744 */
int __fastcall sub_6092BA74(int a1);  /* 0x0092ba74 */
int __fastcall sub_6092C164(int a1);  /* 0x0092c164 */
int __fastcall sub_6092C454(int a1, int a2);  /* 0x0092c454 */
int __fastcall sub_6092CE60(_DWORD *a1, const char **a2, int a3);  /* 0x0092ce60 */
int __fastcall sub_6092D040(int a1);  /* 0x0092d040 */
int __fastcall sub_6092D260(_DWORD *a1);  /* 0x0092d260 */
int __fastcall sub_6092D404(_DWORD *a1);  /* 0x0092d404 */
int __fastcall sub_6092D6E0(int a1, int a2, int a3);  /* 0x0092d6e0 */
int __fastcall sub_6092D8A4(_DWORD *a1, int a2, int a3, int a4);  /* 0x0092d8a4 */
int __fastcall sub_6092DC18(int result);  /* 0x0092dc18 */
int __fastcall sub_6092E254(int a1, int a2);  /* 0x0092e254 */
int __fastcall sub_6092E6CC(int a1, int a2);  /* 0x0092e6cc */
int __fastcall sub_6092EC24(int a1, int a2, unsigned int a3, int a4, int *a5, char a6);  /* 0x0092ec24 */
unsigned int __fastcall sub_6092F064(int a1, int a2, int a3);  /* 0x0092f064 */
unsigned int __fastcall sub_6092F4F4(int a1, int a2, int a3);  /* 0x0092f4f4 */
int __fastcall sub_6092FA78(int a1, int a2, int a3);  /* 0x0092fa78 */
int __fastcall sub_6092FF48(int a1, int a2, int a3);  /* 0x0092ff48 */
int __fastcall sub_60930034(int a1, int a2, int a3, int a4, int a5);  /* 0x00930034 */
int __fastcall sub_60930428(int a1, int a2, int a3, _DWORD *a4);  /* 0x00930428 */
int __fastcall sub_60930DEC(int a1, int a2, int a3, int a4);  /* 0x00930dec */
int __fastcall sub_60930F00(int a1, int *a2);  /* 0x00930f00 */
int __fastcall sub_60930F9C(int a1, _DWORD *a2);  /* 0x00930f9c */
int __fastcall sub_60931064(int a1, _DWORD *a2);  /* 0x00931064 */
int __fastcall sub_609318FC(int a1, int a2, int a3, int a4);  /* 0x009318fc */
int __fastcall sub_609324F0(_DWORD *a1, int *a2, int a3);  /* 0x009324f0 */
int __fastcall sub_60933D90(int a1, int a2);  /* 0x00933d90 */
int __fastcall sub_60933FC4(_DWORD *a1, int a2, unsigned int a3, int a4);  /* 0x00933fc4 */
int __fastcall sub_6093426C(int a1, unsigned int a2, unsigned int a3, __int16 a4, float *a5);  /* 0x0093426c */
int __fastcall sub_609343C4(int a1, int a2, unsigned int a3, int *a4);  /* 0x009343c4 */
int __fastcall sub_60934560(_DWORD *a1, int a2, unsigned int a3, int a4, int a5, int a6, int a7, char a8, int a9);  /* 0x00934560 */
int __fastcall sub_60935CC4(int a1, int a2, unsigned int a3, int a4);  /* 0x00935cc4 */
int __fastcall sub_60936138(int a1, int a2, unsigned int a3, int *a4);  /* 0x00936138 */
int __fastcall sub_60938DB4(int result);  /* 0x00938db4 */
unsigned int __fastcall sub_60938E68(int a1, signed int a2, int a3, int a4);  /* 0x00938e68 */
int __fastcall sub_60938F1C(int a1, unsigned int a2);  /* 0x00938f1c */
int __fastcall sub_609390E8(sead::Heap *a1);  /* 0x009390e8 */
int __fastcall sub_60939170(int a1);  /* 0x00939170 */
int __fastcall sub_609393AC(_DWORD *a1, int a2);  /* 0x009393ac */
int __fastcall sub_609394E8(int a1);  /* 0x009394e8 */
int __fastcall sub_60939660(int a1);  /* 0x00939660 */
int __fastcall sub_60939758(int a1);  /* 0x00939758 */
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
int __fastcall sub_6093D950(sead::Heap *a1);  /* 0x0093d950 */
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
int __fastcall sub_60940BC4(int result);  /* 0x00940bc4 */
void __fastcall sub_60940D4C(int a1, int a2, int a3, int a4);  /* 0x00940d4c */
int __fastcall sub_60940E3C(int a1);  /* 0x00940e3c */
signed int __fastcall sub_60940EA4(_DWORD *a1);  /* 0x00940ea4 */
int __fastcall sub_60941198(int a1, _DWORD *a2);  /* 0x00941198 */
int __fastcall sub_60941410(_DWORD *a1);  /* 0x00941410 */
int __fastcall sub_609417CC(signed int *a1, signed int a2, int a3, int a4);  /* 0x009417cc */
int __fastcall sub_60941A08(int a1, _DWORD *a2, int a3, int a4, int a5);  /* 0x00941a08 */
int __fastcall sub_60942358(int a1, int a2);  /* 0x00942358 */
int __fastcall sub_609424C4(int a1, int a2);  /* 0x009424c4 */
bool __fastcall sub_60942C28(int a1, _DWORD *a2, int a3);  /* 0x00942c28 */
int __fastcall sub_60943228(_DWORD *a1, int a2, int a3);  /* 0x00943228 */
unsigned int __fastcall sub_6094352C(int a1);  /* 0x0094352c */
int __fastcall sub_60943560(int a1);  /* 0x00943560 */
int __fastcall sub_60943C90(float *a1, float *a2, float *a3);  /* 0x00943c90 */
int __fastcall sub_60944CF4(int a1, _DWORD *a2, int a3, int a4);  /* 0x00944cf4 */
int __fastcall sub_60946C34(int a1, int a2, int a3);  /* 0x00946c34 */
int __fastcall sub_60946EA0(int a1, int a2, int a3);  /* 0x00946ea0 */
int __fastcall sub_60946F84(_DWORD *a1, int a2, int a3);  /* 0x00946f84 */
int __fastcall sub_60947118(_DWORD *a1, _DWORD *a2);  /* 0x00947118 */
int __fastcall sub_609471F4(__int64 a1, int a2);  /* 0x009471f4 */
int __fastcall sub_60947328(int a1, int a2, int a3);  /* 0x00947328 */
int __fastcall sub_60947360(int a1, int a2, int a3);  /* 0x00947360 */
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
int __fastcall sub_609481E8(sead::Heap *a1);  /* 0x009481e8 */
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
int __fastcall sub_609508C0(int a1, int a2);  /* 0x009508c0 */
int __fastcall sub_60951358(_DWORD *a1, int a2);  /* 0x00951358 */
int __fastcall sub_609515BC(int *a1, int a2);  /* 0x009515bc */
int __fastcall sub_60951610(int *a1);  /* 0x00951610 */
int __fastcall sub_60952160(int result);  /* 0x00952160 */
int __fastcall sub_60952194(int a1, _DWORD *a2, _DWORD *a3);  /* 0x00952194 */
int __fastcall sub_60952648(int a1, int a2);  /* 0x00952648 */
int __fastcall sub_609526A4(int a1, int a2, int a3, int a4, _DWORD *a5, int a6, int a7);  /* 0x009526a4 */
int __fastcall sub_60952DA0(_DWORD *a1, int a2, unsigned __int16 *a3);  /* 0x00952da0 */
int __fastcall sub_60952F14(int a1, int a2, int a3, int a4, _DWORD *a5, int a6);  /* 0x00952f14 */
int __fastcall sub_60953264(int a1);  /* 0x00953264 */
int __fastcall sub_60953384(int result, _DWORD *a2, int a3, int a4, signed int a5, int a6);  /* 0x00953384 */
int __fastcall sub_60953648(int a1, _DWORD *a2, int *a3, _DWORD *a4, int a5);  /* 0x00953648 */
int __fastcall sub_60953920(_DWORD *a1, _DWORD *a2, int a3);  /* 0x00953920 */
bool __fastcall sub_60953C40(_DWORD *a1, char *a2);  /* 0x00953c40 */
int __fastcall sub_60953CB8(int *a1, _DWORD *a2, int a3, int a4);  /* 0x00953cb8 */
int __fastcall sub_609540CC(sead::Heap *a1);  /* 0x009540cc */
int __fastcall sub_609542B4(int a1, int a2);  /* 0x009542b4 */
int __fastcall sub_609546B4(int a1);  /* 0x009546b4 */
void __fastcall sub_609548CC(_DWORD *a1, int a2);  /* 0x009548cc */
int __fastcall sub_60954B6C(int result, char a2);  /* 0x00954b6c */
int __fastcall sub_6095537C(int a1, unsigned int a2, int a3);  /* 0x0095537c */
int __fastcall sub_609553AC(int a1, int a2);  /* 0x009553ac */
int __fastcall sub_60955444(int a1, int a2);  /* 0x00955444 */
int __fastcall sub_609554AC(int a1);  /* 0x009554ac */
int __fastcall sub_609554E4(int a1);  /* 0x009554e4 */
int __fastcall sub_60955528(int a1, int a2);  /* 0x00955528 */
int __fastcall sub_60955570(int a1, int a2);  /* 0x00955570 */
int __fastcall sub_609555AC(int a1, _DWORD *a2, int a3, int a4);  /* 0x009555ac */
bool __fastcall sub_60956514(_BYTE *a1);  /* 0x00956514 */
int __fastcall sub_60956560(unsigned __int8 *a1, _DWORD *a2);  /* 0x00956560 */
int __fastcall sub_609565DC(_DWORD *a1, unsigned int *a2);  /* 0x009565dc */
int __fastcall sub_609566B0(int a1);  /* 0x009566b0 */
int __fastcall sub_60956CA4(sead::Heap *a1);  /* 0x00956ca4 */
int __fastcall sub_60956E94(int a1, _DWORD *a2, int a3, int a4);  /* 0x00956e94 */
int __fastcall sub_60957598(int a1, int a2);  /* 0x00957598 */
unsigned int __fastcall sub_60957B80(int a1, int a2, int a3);  /* 0x00957b80 */
int __fastcall sub_60957EEC(int result, int a2);  /* 0x00957eec */
int __fastcall sub_60957F40(int a1, int a2, unsigned int a3);  /* 0x00957f40 */
int __fastcall sub_609580C8(_DWORD *a1, int a2);  /* 0x009580c8 */
int __fastcall sub_6095811C(_DWORD *a1, _DWORD *a2);  /* 0x0095811c */
int __fastcall sub_60958220(_DWORD *a1, int a2, unsigned int a3, _DWORD *a4, unsigned int a5, int a6);  /* 0x00958220 */
int __fastcall sub_6095849C(int a1, int a2, char a3, int a4, int a5, char a6, int a7);  /* 0x0095849c */
int __fastcall sub_60958528(int result, int a2, char a3, int a4);  /* 0x00958528 */
int __fastcall sub_6095862C(_DWORD *a1, int a2);  /* 0x0095862c */
int __fastcall sub_60958690(int a1, int a2, int a3, int a4);  /* 0x00958690 */
int __fastcall sub_60958724(int a1);  /* 0x00958724 */
int __fastcall sub_609588DC(int a1, int a2);  /* 0x009588dc */
int __fastcall sub_609589A4(int a1);  /* 0x009589a4 */
int __fastcall sub_60958A10(int result, int a2, int a3, int a4, int a5);  /* 0x00958a10 */
int __fastcall sub_60958EB4(unsigned __int8 *a1, _DWORD *a2, int a3, int a4);  /* 0x00958eb4 */
int __fastcall sub_6095926C(int a1, int a2);  /* 0x0095926c */
int __fastcall sub_60959318(unsigned __int8 *a1, int a2);  /* 0x00959318 */
int __fastcall sub_609594C4(int a1, int a2, int a3, int a4);  /* 0x009594c4 */
int __fastcall sub_60959828(char *a1, int a2, int a3);  /* 0x00959828 */
int __fastcall sub_609598CC(_DWORD *a1, _DWORD *a2);  /* 0x009598cc */
int __fastcall sub_60959954(int *a1, int a2);  /* 0x00959954 */
int __fastcall sub_6095A404(int a1, int a2, _DWORD *a3, int a4, int a5);  /* 0x0095a404 */
int __fastcall sub_6095BE24(int a1, int a2, int a3, int a4);  /* 0x0095be24 */
int __fastcall sub_6095C088(int a1, _DWORD *a2);  /* 0x0095c088 */
int __fastcall sub_6095C4A8(int a1);  /* 0x0095c4a8 */
int __fastcall sub_6095C8AC(int a1);  /* 0x0095c8ac */
int __fastcall sub_6095CA38(int result, int a2, int a3, int a4);  /* 0x0095ca38 */
int __fastcall sub_6095CAA8(int result, int a2, int a3, int a4);  /* 0x0095caa8 */
int __fastcall sub_6095CB58(unsigned int *a1);  /* 0x0095cb58 */
int __fastcall sub_6095CDD0(int a1, int a2, int a3, int a4);  /* 0x0095cdd0 */
int __fastcall sub_6095D730(int a1);  /* 0x0095d730 */
int __fastcall sub_6095D8C0(int a1, unsigned int *a2, int a3);  /* 0x0095d8c0 */
int __fastcall sub_6095DC64(int a1, int a2);  /* 0x0095dc64 */
int __fastcall sub_6095DDA8(int a1, int a2, int a3);  /* 0x0095dda8 */
int __fastcall sub_6095EA18(_DWORD *a1, int a2);  /* 0x0095ea18 */
int __fastcall sub_6095EA6C(_DWORD *a1);  /* 0x0095ea6c */
int __fastcall sub_6095EAFC(_DWORD *a1, int a2, int a3, int a4);  /* 0x0095eafc */
int __fastcall sub_6095EC10(int a1);  /* 0x0095ec10 */
int __fastcall sub_6095F0C4(int result, float *a2, int *a3);  /* 0x0095f0c4 */
int __fastcall sub_6095F340(int a1, int a2, __int64 *a3, _QWORD *a4);  /* 0x0095f340 */
int __fastcall sub_6095F6B0(int a1, int a2, int a3, int *a4);  /* 0x0095f6b0 */
int __fastcall sub_609600C8(int result);  /* 0x009600c8 */
int __fastcall sub_6096030C(int a1, float *a2, _DWORD *a3);  /* 0x0096030c */
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
int __fastcall sub_6096542C(int a1, int a2, int a3);  /* 0x0096542c */
int __fastcall sub_60965C94(int a1, int a2, int a3);  /* 0x00965c94 */
int __fastcall sub_60965F80(int a1, int a2, int a3);  /* 0x00965f80 */
int __fastcall sub_60966150(int a1, int a2);  /* 0x00966150 */
int __fastcall sub_60966E2C(int a1, float *a2);  /* 0x00966e2c */
int __fastcall sub_6096701C(int result, _QWORD *a2, _QWORD *a3, int a4);  /* 0x0096701c */
int __fastcall sub_60967204(int result, _QWORD *a2, _QWORD *a3, int a4);  /* 0x00967204 */
int __fastcall sub_609673A0(int a1);  /* 0x009673a0 */
int __fastcall sub_609674EC(_QWORD *a1, float *a2, float *a3, float *a4);  /* 0x009674ec */
int __fastcall sub_60967B1C(sead::Heap *a1);  /* 0x00967b1c */
int __fastcall sub_60967CD0(int result);  /* 0x00967cd0 */
int __fastcall sub_60967DD0(_DWORD *a1, _BYTE *a2, int a3);  /* 0x00967dd0 */
int __fastcall sub_60967F54(int a1, int a2, int a3, unsigned int a4);  /* 0x00967f54 */
int __fastcall sub_609683D8(int a1, int a2, int a3, _DWORD *a4, int a5, int a6);  /* 0x009683d8 */
int __fastcall sub_60968528(_DWORD *a1, _DWORD *a2);  /* 0x00968528 */
int __fastcall sub_60968868(_DWORD *a1, unsigned int a2);  /* 0x00968868 */
int __fastcall sub_60968B88(_DWORD *a1, int a2, int a3, int a4);  /* 0x00968b88 */
int __fastcall sub_60968C90(int *a1, int a2);  /* 0x00968c90 */
int __fastcall sub_609695A8(_DWORD *a1, _DWORD *a2, _DWORD *a3, float *a4, _DWORD *a5, _DWORD *a6);  /* 0x009695a8 */
int __fastcall sub_60969C24(sead::Heap *a1);  /* 0x00969c24 */
int __fastcall sub_60969DE4(int a1, int a2, int a3);  /* 0x00969de4 */
int __fastcall sub_60971380(int a1);  /* 0x00971380 */
int __fastcall sub_60971930(int a1, char a2, __int16 a3);  /* 0x00971930 */
int __fastcall sub_60971A3C(int a1, int a2, char *a3);  /* 0x00971a3c */
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
unsigned int __fastcall sub_60972BA8(int a1, int a2);  /* 0x00972ba8 */
int __fastcall sub_60973C10(int result, int a2, int a3, int a4);  /* 0x00973c10 */
int __fastcall sub_60973CF8(int *a1, int *a2, int a3, __int16 a4, int a5, int a6);  /* 0x00973cf8 */
int __fastcall sub_60973D88(int a1, int a2, int a3, int a4, int a5, int a6, int a7);  /* 0x00973d88 */
int __fastcall sub_609740C4(int a1, int *a2, unsigned int a3, int a4, int a5, int a6, int a7);  /* 0x009740c4 */
int __fastcall sub_609745B0(int a1, int *a2, unsigned int a3, int a4, int a5, int a6);  /* 0x009745b0 */
int __fastcall sub_609745EC(int a1);  /* 0x009745ec */
int __fastcall sub_6097477C(int a1);  /* 0x0097477c */
int __fastcall sub_609749E8(_DWORD *a1);  /* 0x009749e8 */
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
int __fastcall sub_60976CA0(int a1, int a2);  /* 0x00976ca0 */
unsigned int __fastcall sub_60976E74(int a1, int a2, int a3, signed int a4, unsigned __int8 a5, int a6);  /* 0x00976e74 */
int __fastcall sub_60977198(int result, int a2);  /* 0x00977198 */
int __fastcall sub_60977248(int a1, int a2, _DWORD *a3, int a4);  /* 0x00977248 */
int __fastcall sub_6097744C(int a1);  /* 0x0097744c */
int __fastcall sub_609795F8(_DWORD *a1, unsigned int a2);  /* 0x009795f8 */
int __fastcall sub_60979A00(int a1, int *a2);  /* 0x00979a00 */
int __fastcall sub_60979E58(int a1);  /* 0x00979e58 */
int __fastcall sub_6097A1CC(int a1, int a2, int a3, int a4);  /* 0x0097a1cc */
unsigned int __fastcall sub_6097A84C(int a1, unsigned __int8 a2);  /* 0x0097a84c */
unsigned int __fastcall sub_6097A98C(int a1);  /* 0x0097a98c */
int __fastcall sub_6097AEEC(int a1, unsigned int a2, float *a3);  /* 0x0097aeec */
unsigned int __fastcall sub_6097B2F8(unsigned int a1, int a2, unsigned int a3, int a4);  /* 0x0097b2f8 */
int __fastcall sub_6097BA14(_DWORD *a1);  /* 0x0097ba14 */
int __fastcall sub_6097BD7C(int result);  /* 0x0097bd7c */
void __fastcall sub_6097BDFC(_DWORD *a1, int a2, int a3, int a4);  /* 0x0097bdfc */
int __fastcall sub_6097C558(int result, int a2, int a3, int a4);  /* 0x0097c558 */
int __fastcall sub_6097C778(_DWORD *a1, int a2);  /* 0x0097c778 */
int __fastcall sub_6097C8D4(int a1, _BYTE *a2, int a3);  /* 0x0097c8d4 */
int __fastcall sub_6097CADC(int a1, int a2, int a3);  /* 0x0097cadc */
int __fastcall sub_6097CBA8(int a1);  /* 0x0097cba8 */
int __fastcall sub_6097D0D4(int a1, int a2, float *a3, _DWORD *a4, float *a5);  /* 0x0097d0d4 */
int __fastcall sub_6097D588(int a1);  /* 0x0097d588 */
int __fastcall sub_6097D6F4(int a1);  /* 0x0097d6f4 */
int __fastcall sub_6097D9D0(int a1, _BYTE *a2, int a3);  /* 0x0097d9d0 */
int __fastcall sub_6097DA70(int a1, int a2);  /* 0x0097da70 */
int __fastcall sub_6097DBC4(int a1, int a2, int a3);  /* 0x0097dbc4 */
int __fastcall sub_6097DC6C(int a1, int a2, int a3, _BYTE *a4);  /* 0x0097dc6c */
int __fastcall sub_6097DDB0(int a1, int a2, char *a3);  /* 0x0097ddb0 */
int __fastcall sub_6097E74C(_DWORD *a1);  /* 0x0097e74c */
int __fastcall sub_6097EE4C(int a1, _DWORD *a2, char *a3, int a4, int a5, int a6, int a7, int a8);  /* 0x0097ee4c */
int __fastcall sub_6097F554(int result);  /* 0x0097f554 */
int __fastcall sub_6097F5A8(float **a1);  /* 0x0097f5a8 */
int __fastcall sub_6097F600(int a1, _BYTE *a2, int a3);  /* 0x0097f600 */
int __fastcall sub_6097F690(int a1, int a2);  /* 0x0097f690 */
int __fastcall sub_6097F7CC(int a1, int a2, int a3);  /* 0x0097f7cc */
int __fastcall sub_6097FDF0(int a1);  /* 0x0097fdf0 */
int __fastcall sub_6097FE3C(int a1, int a2, float *a3, int a4);  /* 0x0097fe3c */
int __fastcall sub_6097FFC0(int a1, int a2);  /* 0x0097ffc0 */
int __fastcall sub_60980254(int a1, int a2);  /* 0x00980254 */
int __fastcall sub_60980508(int a1, int a2, unsigned __int8 *a3, int a4);  /* 0x00980508 */
int __fastcall sub_60980770(_DWORD *a1, int a2, int a3, unsigned __int8 a4);  /* 0x00980770 */
int __fastcall sub_60980818(int a1, int a2);  /* 0x00980818 */
int __fastcall sub_60980A54(int a1, int a2);  /* 0x00980a54 */
int __fastcall sub_60980C30(int a1, int a2, int a3, int a4);  /* 0x00980c30 */
int __fastcall sub_60980E8C(int a1, int a2, int a3);  /* 0x00980e8c */
int __fastcall sub_609810F8(int result, int a2);  /* 0x009810f8 */
int __fastcall sub_60981158(int a1, int a2);  /* 0x00981158 */
int __fastcall sub_60981200(_DWORD *a1, int a2);  /* 0x00981200 */
int __fastcall sub_60981CF4(int a1, int a2, int a3, int a4);  /* 0x00981cf4 */
int __fastcall sub_609823F8(int a1);  /* 0x009823f8 */
int __fastcall sub_60982448(int a1, int *a2);  /* 0x00982448 */
int __fastcall sub_60982658(_DWORD *a1, int a2, signed int a3);  /* 0x00982658 */
int __fastcall sub_60982EB0(int a1, int a2);  /* 0x00982eb0 */
int __fastcall sub_60982EE0(int a1, int a2, int a3);  /* 0x00982ee0 */
unsigned int __fastcall sub_60982F50(int a1, _BYTE *a2, _BYTE *a3, _DWORD *a4);  /* 0x00982f50 */
int __fastcall sub_60983E78(int a1);  /* 0x00983e78 */
int __fastcall sub_60983F04(int a1);  /* 0x00983f04 */
int __fastcall sub_60984234(int a1);  /* 0x00984234 */
int __fastcall sub_609842C8(int a1);  /* 0x009842c8 */
int __fastcall sub_60984B90(int a1, int a2);  /* 0x00984b90 */
int __fastcall sub_60985240(int a1, int a2, int a3, int a4, _DWORD *a5);  /* 0x00985240 */
int __fastcall sub_60985434(int a1, int a2, int a3);  /* 0x00985434 */
int __fastcall sub_609859D8(int a1, _DWORD *a2, int a3, int a4, int a5, int a6, int a7, char a8, int a9);  /* 0x009859d8 */
int __fastcall sub_60985DE8(int a1);  /* 0x00985de8 */
int __fastcall sub_609865C0(_DWORD *a1, int a2, int a3, int a4, signed int *a5, int a6);  /* 0x009865c0 */
int __fastcall sub_60986A5C(_DWORD *a1, int a2);  /* 0x00986a5c */
int __fastcall sub_60986AC8(_DWORD *a1, int a2);  /* 0x00986ac8 */
int __fastcall sub_60986C38(sead::Heap *a1);  /* 0x00986c38 */
int __fastcall sub_60986F04(int a1, const char **a2);  /* 0x00986f04 */
int __fastcall sub_60987010(int a1, const char **a2);  /* 0x00987010 */
int __fastcall sub_60987688(int a1, int a2, int a3);  /* 0x00987688 */
int __fastcall sub_60987738(int a1, _DWORD *a2);  /* 0x00987738 */
int __fastcall sub_60987858(int a1, unsigned int a2, unsigned int a3, _WORD *a4, int a5, int a6);  /* 0x00987858 */
int __fastcall sub_60987E7C(int a1, int a2, int a3);  /* 0x00987e7c */
int __fastcall sub_609885B8(int a1, char a2, char a3);  /* 0x009885b8 */
int __fastcall sub_609898C0(int a1);  /* 0x009898c0 */
unsigned int __fastcall sub_60989920(_DWORD *a1, int a2, int a3, int a4, unsigned int a5, int a6);  /* 0x00989920 */
int __fastcall sub_609899A4(_DWORD *a1, int a2, int a3, int a4, int a5);  /* 0x009899a4 */
int __fastcall sub_60989CC8(float *a1, int a2);  /* 0x00989cc8 */
int __fastcall sub_60989E30(_DWORD *a1);  /* 0x00989e30 */
int __fastcall sub_6098A12C(int a1, signed int a2, int a3);  /* 0x0098a12c */
int __fastcall sub_6098A224(int result, int a2, int a3);  /* 0x0098a224 */
int __fastcall sub_6098A304(_DWORD *a1, unsigned int a2);  /* 0x0098a304 */
int __fastcall sub_6098B314(int a1);  /* 0x0098b314 */
int __fastcall sub_6098B384(int a1, int a2, int *a3);  /* 0x0098b384 */
int __fastcall sub_6098B540(int a1);  /* 0x0098b540 */
int __fastcall sub_6098BD10(int a1, int a2, int a3, int a4);  /* 0x0098bd10 */
int __fastcall sub_6098BE5C(int a1, int a2);  /* 0x0098be5c */
int __fastcall sub_6098BE98(int result, int a2);  /* 0x0098be98 */
int __fastcall sub_6098C20C(int a1, int a2, int a3);  /* 0x0098c20c */
int __fastcall sub_6098C368(int a1, unsigned __int8 *a2, int a3, int a4);  /* 0x0098c368 */
int __fastcall sub_6098CAD0(int a1, int a2, int a3);  /* 0x0098cad0 */
int __fastcall sub_6098D450(sead::Heap *a1);  /* 0x0098d450 */
int __fastcall sub_6098D5F8(int a1, int *a2);  /* 0x0098d5f8 */
int __fastcall sub_6098D964(int result, int a2);  /* 0x0098d964 */
int __fastcall sub_6098DBCC(_DWORD *a1, int a2);  /* 0x0098dbcc */
void __fastcall sub_6098DC24(int a1);  /* 0x0098dc24 */
int __fastcall sub_6098DC7C(int a1);  /* 0x0098dc7c */
int __fastcall sub_6098E0F8(int a1, int a2);  /* 0x0098e0f8 */
int __fastcall sub_6098E23C(int *a1, _DWORD *a2);  /* 0x0098e23c */
int __fastcall sub_6098E314(int a1, int a2);  /* 0x0098e314 */
int __fastcall sub_6098E7C4(int a1, int a2);  /* 0x0098e7c4 */
int __fastcall sub_6098EA0C(_BYTE *a1, int a2, int *a3);  /* 0x0098ea0c */
int __fastcall sub_6098EDFC(int a1, int a2);  /* 0x0098edfc */
int __fastcall sub_6098F0E0(int a1, int a2, int a3);  /* 0x0098f0e0 */
int __fastcall sub_6098F1D4(int a1);  /* 0x0098f1d4 */
int __fastcall sub_6098F300(_QWORD *a1);  /* 0x0098f300 */
int __fastcall sub_6098F408(int a1, int a2, int a3);  /* 0x0098f408 */
int __fastcall sub_609900F4(int a1);  /* 0x009900f4 */
int __fastcall sub_60990254(int a1, int a2);  /* 0x00990254 */
signed int __fastcall sub_609902D8(int *a1, _BYTE *a2, int a3);  /* 0x009902d8 */
int __fastcall sub_609903D4(int *a1, unsigned __int8 *a2, int a3);  /* 0x009903d4 */
int __fastcall sub_6099088C(int a1, int a2);  /* 0x0099088c */
int __fastcall sub_60991198(int a1, int a2, _DWORD *a3);  /* 0x00991198 */
bool __fastcall sub_609912F8(int a1);  /* 0x009912f8 */
int __fastcall sub_60991378(int a1);  /* 0x00991378 */
int __fastcall sub_60991414(int a1, unsigned int a2);  /* 0x00991414 */
int __fastcall sub_60991504(int a1);  /* 0x00991504 */
int __fastcall sub_60991630(int a1);  /* 0x00991630 */
int __fastcall sub_609916C4(_BYTE *a1);  /* 0x009916c4 */
int __fastcall sub_60991758(unsigned __int8 *a1);  /* 0x00991758 */
int __fastcall sub_609917C0(int a1);  /* 0x009917c0 */
int __fastcall sub_60991BA4(int result);  /* 0x00991ba4 */
int __fastcall sub_60992444(int a1);  /* 0x00992444 */
int __fastcall sub_60992D00(int result, int a2);  /* 0x00992d00 */
int __fastcall sub_60992D4C(int a1);  /* 0x00992d4c */
int __fastcall sub_60993A0C(int a1, int a2, int a3, int a4, int a5);  /* 0x00993a0c */
int __fastcall sub_60993D34(int a1);  /* 0x00993d34 */
int __fastcall sub_60993EB0(int a1);  /* 0x00993eb0 */
unsigned int __fastcall sub_60993F54(int a1, int a2, int a3, int a4);  /* 0x00993f54 */
int __fastcall sub_60996528(unsigned int a1);  /* 0x00996528 */
int __fastcall sub_609969BC(_DWORD *a1, int a2, int a3);  /* 0x009969bc */
int __fastcall sub_60996CEC(int a1);  /* 0x00996cec */
int __fastcall sub_60996D20(int result, int a2);  /* 0x00996d20 */
int __fastcall sub_60996D8C(int a1, unsigned int a2);  /* 0x00996d8c */
int __fastcall sub_60996E70(int result, int a2);  /* 0x00996e70 */
int __fastcall sub_60996EE8(int a1, int a2);  /* 0x00996ee8 */
int __fastcall sub_60996F34(int a1);  /* 0x00996f34 */
int __fastcall sub_60997330(int a1, int a2);  /* 0x00997330 */
int __fastcall sub_609979EC(int a1);  /* 0x009979ec */
int __fastcall sub_60997AF4(int a1, int a2, int a3, int a4);  /* 0x00997af4 */
int __fastcall sub_6099816C(int a1, int a2, int a3, int a4);  /* 0x0099816c */
int __fastcall sub_6099826C(bool *a1, int a2);  /* 0x0099826c */
int __fastcall sub_609982F0(unsigned __int16 *a1, int a2, int a3);  /* 0x009982f0 */
int __fastcall sub_60998564(int a1);  /* 0x00998564 */
int __fastcall sub_60998680(int a1);  /* 0x00998680 */
int __fastcall sub_60998758(int a1, int a2, void (*a3)(void), int a4, void (__fastcall *a5)(int *));  /* 0x00998758 */
int __fastcall sub_60998CD0(int a1, int a2, int a3);  /* 0x00998cd0 */
int __fastcall sub_60998DB4(_BYTE *a1, int a2);  /* 0x00998db4 */
int __fastcall sub_60998EA8(int result);  /* 0x00998ea8 */
int __fastcall sub_60998EF4(int result);  /* 0x00998ef4 */
int __fastcall sub_60998F30(int result);  /* 0x00998f30 */
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
int __fastcall sub_60999C60(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x00999c60 */
int __fastcall sub_60999F78(int a1);  /* 0x00999f78 */
int __fastcall sub_6099A074(int a1);  /* 0x0099a074 */
int __fastcall sub_6099A310(_DWORD *a1, unsigned int a2);  /* 0x0099a310 */
int __fastcall sub_6099A53C(int a1, int a2, unsigned int a3);  /* 0x0099a53c */
unsigned int __fastcall sub_6099A8D4(int a1, int a2);  /* 0x0099a8d4 */
int __fastcall sub_6099A9B4(int a1, int a2);  /* 0x0099a9b4 */
int __fastcall sub_6099AA58(int a1, int *a2, int a3, int a4);  /* 0x0099aa58 */
int __fastcall sub_6099AD8C(_DWORD *a1, unsigned int a2, unsigned __int16 a3, __int16 a4, int a5);  /* 0x0099ad8c */
int __fastcall sub_6099B034(_DWORD *a1, int a2, int a3);  /* 0x0099b034 */
int __fastcall sub_6099B0F0(int a1, unsigned int a2, unsigned __int16 a3, int a4);  /* 0x0099b0f0 */
int __fastcall nn_atk_FsSoundArchive_ctor(int a1);  /* 0x0099bb78 */
int __fastcall sub_6099BBD4(int a1);  /* 0x0099bbd4 */
int __fastcall sub_6099BC78(_BYTE *a1);  /* 0x0099bc78 */
int __fastcall sub_6099BCC8(int a1, const char *a2);  /* 0x0099bcc8 */
int __fastcall sub_6099BF58(int a1, int a2, unsigned int a3);  /* 0x0099bf58 */
int __fastcall sub_6099BFFC(int a1, int a2, unsigned int a3);  /* 0x0099bffc */
int __fastcall sub_6099C4CC(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x0099c4cc */
int __fastcall sub_6099E254(int a1);  /* 0x0099e254 */
int __fastcall sub_6099E84C(_DWORD *a1, signed int a2, int a3);  /* 0x0099e84c */
int __fastcall sub_6099E924(unsigned int *a1, const char *a2, int a3);  /* 0x0099e924 */
int __fastcall sub_6099EB88(_DWORD *a1, int a2);  /* 0x0099eb88 */
unsigned int __fastcall sub_6099EE5C(int a1);  /* 0x0099ee5c */
unsigned int __fastcall sub_6099F1E8(_DWORD *a1, int a2);  /* 0x0099f1e8 */
int __fastcall sub_6099F5D4(_DWORD *a1, _DWORD *a2, _DWORD *a3);  /* 0x0099f5d4 */

