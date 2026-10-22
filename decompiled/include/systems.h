/* NSMBU Deluxe (Switch) v1.0.0 -- systems subsystem prototypes
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

/* ---- systems.c ---- */
int __fastcall sub_60480008(int a1);  /* 0x00480008 */
int __fastcall sub_60480144(int result);  /* 0x00480144 */
int __fastcall SE_SYS_CS_READ_BALLOON_ON_ref(int a1);  /* 0x00480a38 */
int __fastcall sub_60480C58(int a1);  /* 0x00480c58 */
int __fastcall sub_60480DB8(int a1);  /* 0x00480db8 */
int __fastcall sub_60480EAC(int a1);  /* 0x00480eac */
int __fastcall sub_60480FC8(_DWORD *a1);  /* 0x00480fc8 */
int __fastcall sub_6048117C(int a1);  /* 0x0048117c */
int __fastcall sub_604811F4(int a1, int a2, int a3);  /* 0x004811f4 */
int __fastcall sub_604812F0(int a1, int *a2);  /* 0x004812f0 */
int __fastcall SE_SYS_CONTINUE_DONE_ref(_DWORD *a1);  /* 0x004815c0 */
int __fastcall sub_60481848(int a1);  /* 0x00481848 */
int __fastcall sub_604819DC(int a1);  /* 0x004819dc */
int __fastcall sub_60481E54(int a1);  /* 0x00481e54 */
int __fastcall sub_6048210C(int a1);  /* 0x0048210c */
int __fastcall sub_60482268(int a1);  /* 0x00482268 */
int __fastcall sub_604828F0(int a1);  /* 0x004828f0 */
int __fastcall sub_60482AB8(_DWORD *a1);  /* 0x00482ab8 */
int __fastcall sub_60482EC0(int a1);  /* 0x00482ec0 */
int __fastcall sub_60483024(int a1);  /* 0x00483024 */
int __fastcall sub_60483864(int a1);  /* 0x00483864 */
int __fastcall sub_604839D4(int a1, int a2);  /* 0x004839d4 */
int __fastcall sub_60483AF8(int a1);  /* 0x00483af8 */
int __fastcall sub_60483C58(int a1);  /* 0x00483c58 */
int __fastcall sub_60483DC0(int a1);  /* 0x00483dc0 */
int __fastcall sub_60483E28(int a1, int a2, int a3, int a4);  /* 0x00483e28 */
unsigned int __fastcall sub_60484570(int a1);  /* 0x00484570 */
unsigned int __fastcall sub_604846B8(int a1);  /* 0x004846b8 */
int __fastcall sub_60484804(_DWORD *a1);  /* 0x00484804 */
int __fastcall sub_60484C28(int a1);  /* 0x00484c28 */
int __fastcall sub_60484D80(int a1);  /* 0x00484d80 */
int __fastcall sub_60485038(int a1);  /* 0x00485038 */
int __fastcall sub_60485274(int a1);  /* 0x00485274 */
int __fastcall sub_60485A74(int a1);  /* 0x00485a74 */
int __fastcall sub_60485B7C(int a1);  /* 0x00485b7c */
int __fastcall sub_6048647C(int result);  /* 0x0048647c */
int __fastcall sub_604864CC(int a1);  /* 0x004864cc */
int __fastcall sub_60486518(int result, int a2, int a3, int a4);  /* 0x00486518 */
int __fastcall sub_604865C0(int result, int a2, int a3, int a4);  /* 0x004865c0 */
int __fastcall WSD_BGM_ODAI_MEDAL_CMP_ref(int *a1);  /* 0x00488db0 */
int __fastcall WSD_BGM_ODAI_MEDALCMP_GOLD_ref(int a1);  /* 0x00488f94 */
int __fastcall sub_60489270(int a1);  /* 0x00489270 */
int __fastcall sub_604898F0(int a1);  /* 0x004898f0 */
int __fastcall sub_60489D24(_DWORD *a1);  /* 0x00489d24 */
int __fastcall sub_6048A1A0(int a1);  /* 0x0048a1a0 */
int __fastcall sub_6048A324(int a1);  /* 0x0048a324 */
int __fastcall sub_6048A51C(int a1);  /* 0x0048a51c */
int __fastcall sub_6048A66C(int a1);  /* 0x0048a66c */
int __fastcall sub_6048AA24(_DWORD *a1);  /* 0x0048aa24 */
int __fastcall sub_6048AD48(int a1);  /* 0x0048ad48 */
int __fastcall sub_6048AEB4(int a1);  /* 0x0048aeb4 */
int __fastcall sub_6048B0B8(_DWORD *a1);  /* 0x0048b0b8 */
int __fastcall sub_6048B520(int a1);  /* 0x0048b520 */
int __fastcall sub_6048B6B0(_DWORD *a1);  /* 0x0048b6b0 */
int __fastcall sub_6048BA4C(_DWORD *a1);  /* 0x0048ba4c */
int __fastcall sub_6048BC4C(int a1);  /* 0x0048bc4c */
int __fastcall sub_6048BE88(int a1);  /* 0x0048be88 */
int __fastcall sub_6048CA60(int *a1);  /* 0x0048ca60 */
int __fastcall sub_6048CB4C(int result);  /* 0x0048cb4c */
int __fastcall sub_6048CC10(int a1);  /* 0x0048cc10 */
int __fastcall sub_6048CD38(int a1);  /* 0x0048cd38 */
int __fastcall sub_6048D088(_DWORD *a1, int a2, int a3, int a4);  /* 0x0048d088 */
unsigned int __fastcall sub_6048D158(int a1);  /* 0x0048d158 */
int __fastcall sub_6048D2E8(_DWORD *a1);  /* 0x0048d2e8 */
int __fastcall sub_6048D43C(int a1);  /* 0x0048d43c */
int __fastcall sub_6048D734(int a1);  /* 0x0048d734 */
int __fastcall sub_6048D8AC(int a1, _DWORD *a2);  /* 0x0048d8ac */
int __fastcall sub_6048D91C(int a1);  /* 0x0048d91c */
int __fastcall sub_6048DA90(int a1);  /* 0x0048da90 */
int __fastcall sub_6048DBC0(int a1);  /* 0x0048dbc0 */
int __fastcall sub_6048DD94(_DWORD *a1, unsigned int a2);  /* 0x0048dd94 */
int __fastcall sub_6048DEB8(_DWORD *a1);  /* 0x0048deb8 */
int __fastcall sub_6048E014(_DWORD *a1);  /* 0x0048e014 */
int __fastcall sub_6048E23C(int a1, int a2, int a3);  /* 0x0048e23c */
int __fastcall sub_6048E6BC(int a1);  /* 0x0048e6bc */
int __fastcall sub_6048EB10(int a1);  /* 0x0048eb10 */
int __fastcall sub_6048EBD4(int a1, int a2);  /* 0x0048ebd4 */
int __fastcall sub_6048EE54(_DWORD *a1, int a2);  /* 0x0048ee54 */
int __fastcall sub_6048F09C(int result, int a2, int a3);  /* 0x0048f09c */
int __fastcall sub_6048F3CC(int a1);  /* 0x0048f3cc */
int __fastcall sub_6048F910(int a1);  /* 0x0048f910 */
int __fastcall sub_6048FAA4(_DWORD *a1);  /* 0x0048faa4 */
int __fastcall sub_6048FB3C(_DWORD *a1);  /* 0x0048fb3c */
int __fastcall sub_6048FD0C(_DWORD *a1);  /* 0x0048fd0c */
int __fastcall sub_6048FEE8(int a1, _BYTE *a2);  /* 0x0048fee8 */
int __fastcall sub_604900BC(int a1);  /* 0x004900bc */
int __fastcall sub_6049033C(_DWORD *a1, int a2, unsigned int a3);  /* 0x0049033c */
int __fastcall sub_6049046C(_DWORD *a1);  /* 0x0049046c */
int __fastcall sub_60491028(_DWORD *a1);  /* 0x00491028 */
int __fastcall sub_60491118(int a1);  /* 0x00491118 */
int __fastcall sub_604912FC(int a1);  /* 0x004912fc */
int __fastcall sub_60491514(unsigned int a1);  /* 0x00491514 */
int __fastcall sub_604918C8(unsigned int a1);  /* 0x004918c8 */
int __fastcall sub_60491C7C(unsigned int a1);  /* 0x00491c7c */
int __fastcall sub_60492030(unsigned int a1);  /* 0x00492030 */
int __fastcall sub_604923E4(unsigned int a1);  /* 0x004923e4 */
int __fastcall sub_60492798(unsigned int a1);  /* 0x00492798 */
int __fastcall sub_60492B4C(unsigned int a1);  /* 0x00492b4c */
int __fastcall sub_60492F00(unsigned int a1);  /* 0x00492f00 */
int __fastcall sub_6049468C(int a1);  /* 0x0049468c */
int __fastcall sub_60494884(_DWORD *a1, int a2);  /* 0x00494884 */
int __fastcall sub_604949EC(int *a1);  /* 0x004949ec */
int __fastcall sub_60494B0C(int a1);  /* 0x00494b0c */
int __fastcall sub_60494D5C(_DWORD *a1);  /* 0x00494d5c */
int __fastcall sub_604952C8(int a1);  /* 0x004952c8 */
int __fastcall sub_604953F4(int a1);  /* 0x004953f4 */
int __fastcall sub_6049560C(int a1);  /* 0x0049560c */
int __fastcall sub_6049567C(int a1, unsigned int a2, unsigned int a3, int a4);  /* 0x0049567c */
int __fastcall sub_604962DC(unsigned int a1);  /* 0x004962dc */
int __fastcall sub_60496690(int a1);  /* 0x00496690 */
int __fastcall sub_60496978(unsigned int a1);  /* 0x00496978 */
int __fastcall sub_60496D2C(unsigned int a1);  /* 0x00496d2c */
int __fastcall sub_604973E4(int a1);  /* 0x004973e4 */
int __fastcall sub_60498980(int a1);  /* 0x00498980 */
int __fastcall sub_60498FAC(_DWORD *a1, int a2, int a3);  /* 0x00498fac */
int __fastcall sub_60499110(int *a1);  /* 0x00499110 */
int __fastcall sub_60499348(int a1);  /* 0x00499348 */
int __fastcall sub_60499498(int a1);  /* 0x00499498 */
int __fastcall sub_60499778(unsigned __int8 *a1, int a2, int a3);  /* 0x00499778 */
int __fastcall sub_604998E4(int a1, _DWORD *a2);  /* 0x004998e4 */
int __fastcall sub_60499988(int a1);  /* 0x00499988 */
int __fastcall sub_604999F0(int a1, int a2, char a3);  /* 0x004999f0 */
bool __fastcall sub_60499A20(_BYTE *a1);  /* 0x00499a20 */
int __fastcall sub_60499B54(_BYTE *a1);  /* 0x00499b54 */
int __fastcall sub_60499C20(int result, unsigned int a2, unsigned int a3);  /* 0x00499c20 */
int __fastcall sub_60499DBC(int a1);  /* 0x00499dbc */
int __fastcall sub_60499FB8(_BYTE *a1);  /* 0x00499fb8 */
int __fastcall sub_6049A100(int a1, int a2);  /* 0x0049a100 */
int __fastcall SE_SYS_CTRL_ref_2(int a1);  /* 0x0049ac98 */
int __fastcall sub_6049C294(int a1, int *a2);  /* 0x0049c294 */
int __fastcall sub_6049C484(int a1, int a2);  /* 0x0049c484 */
int __fastcall sub_6049FAC8(int a1);  /* 0x0049fac8 */
int __fastcall sub_6049FF28(int a1);  /* 0x0049ff28 */
int __fastcall sub_604A1404(int a1);  /* 0x004a1404 */
int __fastcall sub_604A1514(int a1);  /* 0x004a1514 */
int __fastcall sub_604A1614(int a1);  /* 0x004a1614 */
int __fastcall sub_604A17D0(_BYTE *a1);  /* 0x004a17d0 */
int __fastcall sub_604A18F0(int a1);  /* 0x004a18f0 */
int __fastcall sub_604A196C(_DWORD *a1);  /* 0x004a196c */
int __fastcall sub_604A1AC0(_DWORD *a1);  /* 0x004a1ac0 */
int __fastcall sub_604A1C24(int a1, unsigned int a2);  /* 0x004a1c24 */
int __fastcall sub_604A1D14(int a1, unsigned int a2);  /* 0x004a1d14 */
int __fastcall sub_604A1E08(_DWORD *a1);  /* 0x004a1e08 */
int __fastcall sub_604A2454(int a1);  /* 0x004a2454 */
int __fastcall SE_SYS_BTN_OVER_ref_2(int a1);  /* 0x004a2ef0 */
int __fastcall sub_604A3FE4(int a1);  /* 0x004a3fe4 */
int __fastcall sub_604A4320(int a1);  /* 0x004a4320 */
int __fastcall sub_604A435C(int a1, int a2, int a3, int a4);  /* 0x004a435c */
int __fastcall sub_604A46E8(int a1, unsigned int a2, int a3);  /* 0x004a46e8 */
int __fastcall sub_604A4AE4(int a1, unsigned int a2);  /* 0x004a4ae4 */
int __fastcall sub_604A4C68(int a1);  /* 0x004a4c68 */
bool __fastcall sub_604A4CB8(int a1);  /* 0x004a4cb8 */
bool __fastcall sub_604A4D48(int a1);  /* 0x004a4d48 */
int __fastcall sub_604A4E14(int a1, unsigned int a2);  /* 0x004a4e14 */
bool __fastcall sub_604A50D4(int a1);  /* 0x004a50d4 */
int __fastcall sub_604A5398(int a1);  /* 0x004a5398 */
bool __fastcall sub_604A54F8(int a1);  /* 0x004a54f8 */
int __fastcall sub_604A57BC(int a1);  /* 0x004a57bc */
int __fastcall sub_604A5C00(int a1, unsigned int a2, unsigned int a3, int a4);  /* 0x004a5c00 */
int __fastcall sub_604A5D68(int a1, unsigned int a2);  /* 0x004a5d68 */
int __fastcall sub_604A5E98(int a1, int a2, unsigned int a3);  /* 0x004a5e98 */
int __fastcall sub_604A6358(int a1, int a2);  /* 0x004a6358 */
int __fastcall sub_604A662C(int a1);  /* 0x004a662c */
int __fastcall sub_604A673C(int a1, int a2);  /* 0x004a673c */
unsigned int __fastcall sub_604A6A20(int a1, int a2);  /* 0x004a6a20 */
int __fastcall sub_604A6DEC(int a1, int a2);  /* 0x004a6dec */
int __fastcall sub_604A7048(int a1, int a2);  /* 0x004a7048 */
int __fastcall sub_604A71A0(int a1);  /* 0x004a71a0 */
bool __fastcall sub_604A72EC(int a1);  /* 0x004a72ec */
int __fastcall sub_604A7E50(int a1);  /* 0x004a7e50 */
int __fastcall sub_604AAEB4(int a1);  /* 0x004aaeb4 */
int __fastcall sub_604AB390(int a1);  /* 0x004ab390 */
int __fastcall sub_604AB584(_DWORD *a1);  /* 0x004ab584 */
int __fastcall sub_604AB640(_DWORD *a1);  /* 0x004ab640 */
int __fastcall sub_604AB860(int a1);  /* 0x004ab860 */
int __fastcall sub_604AB9BC(int a1);  /* 0x004ab9bc */
int __fastcall sub_604ABACC(int a1);  /* 0x004abacc */
int __fastcall sub_604ABBCC(int a1);  /* 0x004abbcc */
int __fastcall sub_604ABCA8(unsigned __int8 *a1, unsigned int a2, int a3);  /* 0x004abca8 */
int __fastcall sub_604ABE10(int a1, _DWORD *a2);  /* 0x004abe10 */
int __fastcall sub_604ABED4(int a1, int a2);  /* 0x004abed4 */
int __fastcall sub_604ABF6C(int a1, int a2);  /* 0x004abf6c */
int __fastcall sub_604AC1D0(int a1, int a2);  /* 0x004ac1d0 */
int __fastcall sub_604AC434(int a1, int a2);  /* 0x004ac434 */
int __fastcall sub_604AC8BC(int a1);  /* 0x004ac8bc */
int __fastcall sub_604AC9C8(int *a1, unsigned int a2, unsigned int a3, int a4, int a5);  /* 0x004ac9c8 */
int __fastcall sub_604AD320(int a1);  /* 0x004ad320 */
int __fastcall sub_604AD550(int a1, int a2, int a3);  /* 0x004ad550 */
int __fastcall sub_604AD96C(int a1, int a2, int a3);  /* 0x004ad96c */
int __fastcall sub_604AE748(int a1);  /* 0x004ae748 */
int __fastcall sub_604AE8A0(int a1);  /* 0x004ae8a0 */
int __fastcall sub_604AED20(int a1);  /* 0x004aed20 */
int __fastcall sub_604AEEC0(int result, int a2);  /* 0x004aeec0 */
int __fastcall sub_604AEEF8(int a1);  /* 0x004aeef8 */
int __fastcall sub_604AEFFC(int a1);  /* 0x004aeffc */
int __fastcall sub_604AF284(int a1);  /* 0x004af284 */
int __fastcall SE_SYS_CE_MENU_IN_ref(int a1);  /* 0x004afba8 */
int __fastcall SE_SYS_CE_MENU_OUT_ref(_DWORD *a1);  /* 0x004afdbc */
int __fastcall SE_SYS_CE_RESET_ref(int a1);  /* 0x004b07f0 */
int __fastcall SE_SYS_CE_MENU_OUT_ref_2(int a1);  /* 0x004b0d20 */
int __fastcall sub_604B0E68(int a1);  /* 0x004b0e68 */
int __fastcall sub_604B12B0(int a1);  /* 0x004b12b0 */
int __fastcall sub_604B1478(_DWORD *a1);  /* 0x004b1478 */
int __fastcall sub_604B1BE0(int a1);  /* 0x004b1be0 */
int __fastcall sub_604B1CBC(int a1);  /* 0x004b1cbc */
int __fastcall sub_604B1E54(int result);  /* 0x004b1e54 */
int __fastcall sub_604B1F58(int result, _DWORD *a2);  /* 0x004b1f58 */
int __fastcall sub_604B1F88(_DWORD *a1, float *a2, _DWORD *a3);  /* 0x004b1f88 */
int __fastcall sub_604B1FD4(int a1, int a2);  /* 0x004b1fd4 */
int __fastcall sub_604B2014(unsigned __int8 *a1);  /* 0x004b2014 */
int __fastcall sub_604B2054(unsigned __int8 *a1);  /* 0x004b2054 */
int __fastcall sub_604B2528(int a1);  /* 0x004b2528 */
int __fastcall sub_604B2DE4(int a1);  /* 0x004b2de4 */
int __fastcall sub_604B3288(int a1);  /* 0x004b3288 */
int __fastcall sub_604B3370(int a1);  /* 0x004b3370 */
int __fastcall sub_604B3678(int a1);  /* 0x004b3678 */
int __fastcall sub_604B37F8(int a1);  /* 0x004b37f8 */
int __fastcall sub_604B39BC(int *a1);  /* 0x004b39bc */
int __fastcall sub_604B3F4C(int a1);  /* 0x004b3f4c */
int __fastcall sub_604B411C(int a1);  /* 0x004b411c */
int __fastcall sub_604B4228(int a1);  /* 0x004b4228 */
int __fastcall sub_604B4528(int a1);  /* 0x004b4528 */
int __fastcall sub_604B4644(int a1);  /* 0x004b4644 */
int __fastcall sub_604B4A78(int a1);  /* 0x004b4a78 */
int __fastcall sub_604B4EE4(int a1);  /* 0x004b4ee4 */
int __fastcall sub_604B4FA4(int result);  /* 0x004b4fa4 */
int __fastcall sub_604B4FF8(int a1);  /* 0x004b4ff8 */
int __fastcall sub_604B5164(int a1);  /* 0x004b5164 */
int __fastcall sub_604B5230(int result);  /* 0x004b5230 */
bool __fastcall sub_604B5270(int a1);  /* 0x004b5270 */
int __fastcall sub_604B55FC(int a1, float *a2);  /* 0x004b55fc */
int __fastcall sub_604B5858(int a1);  /* 0x004b5858 */
int __fastcall SE_SYS_FS_FINISHED_ref(int a1);  /* 0x004b5bd0 */
int __fastcall sub_604B610C(int a1);  /* 0x004b610c */
int __fastcall sub_604B622C(int a1);  /* 0x004b622c */
int __fastcall sub_604B6354(int a1);  /* 0x004b6354 */
int __fastcall sub_604B6400(int a1);  /* 0x004b6400 */
unsigned int __fastcall sub_604B6534(int a1);  /* 0x004b6534 */
bool __fastcall sub_604B6E00(int a1, unsigned int a2);  /* 0x004b6e00 */
bool __fastcall sub_604B6F58(int a1, unsigned int a2);  /* 0x004b6f58 */
unsigned int __fastcall sub_604B70BC(int a1, unsigned int a2);  /* 0x004b70bc */
unsigned int __fastcall sub_604B71E0(int a1, unsigned int a2);  /* 0x004b71e0 */
int __fastcall sub_604B7320(_DWORD *a1);  /* 0x004b7320 */
int __fastcall sub_604B74B0(int a1, int a2);  /* 0x004b74b0 */
int __fastcall sub_604B74E8(int a1, unsigned int a2);  /* 0x004b74e8 */
unsigned int __fastcall sub_604B763C(int a1, unsigned int a2);  /* 0x004b763c */
int __fastcall sub_604B78EC(int a1);  /* 0x004b78ec */
int __fastcall sub_604B7A8C(int a1);  /* 0x004b7a8c */
int __fastcall sub_604B7B70(int a1);  /* 0x004b7b70 */
int __fastcall sub_604B7D04(int a1);  /* 0x004b7d04 */
int __fastcall sub_604B7FC8(int a1);  /* 0x004b7fc8 */
bool __fastcall sub_604B80D0(int a1);  /* 0x004b80d0 */
int __fastcall sub_604B81E4(int a1);  /* 0x004b81e4 */
bool __fastcall sub_604B82EC(int a1);  /* 0x004b82ec */
int __fastcall sub_604B8420(int a1);  /* 0x004b8420 */
unsigned int __fastcall sub_604B8550(int *a1);  /* 0x004b8550 */
int __fastcall sub_604B8814(int a1);  /* 0x004b8814 */
int __fastcall sub_604B8984(int a1);  /* 0x004b8984 */
int __fastcall sub_604B8A64(int a1);  /* 0x004b8a64 */
int __fastcall sub_604B8B34(int a1);  /* 0x004b8b34 */
int __fastcall sub_604B8BAC(int a1);  /* 0x004b8bac */
int __fastcall sub_604B8C70(int a1);  /* 0x004b8c70 */
int __fastcall sub_604B8D34(int a1);  /* 0x004b8d34 */
int __fastcall sub_604B8D98(int a1);  /* 0x004b8d98 */
int __fastcall SE_SYS_COUNT_ZANKI_ref(int a1);  /* 0x004ba344 */
int __fastcall SE_SYS_CONTINUE_DONE_ref_2(int a1);  /* 0x004ba4f0 */
int __fastcall sub_604BA62C(int a1);  /* 0x004ba62c */
int __fastcall sub_604BA7C0(int a1, int a2);  /* 0x004ba7c0 */
int __fastcall sub_604BAD30(int a1, _DWORD *a2);  /* 0x004bad30 */
int __fastcall sub_604BAE44(int a1);  /* 0x004bae44 */
int __fastcall sub_604BAE8C(_DWORD *a1);  /* 0x004bae8c */
int __fastcall sub_604BAF00(_DWORD *a1, int a2);  /* 0x004baf00 */
int __fastcall sub_604BB170(int a1);  /* 0x004bb170 */
int __fastcall sub_604BB6B8(int a1);  /* 0x004bb6b8 */
int __fastcall sub_604BBB5C(int a1);  /* 0x004bbb5c */
int __fastcall sub_604BBBCC(int a1);  /* 0x004bbbcc */
int __fastcall sub_604BBF20(int a1);  /* 0x004bbf20 */
int __fastcall sub_604BC0EC(_DWORD *a1);  /* 0x004bc0ec */
int __fastcall sub_604BC4F8(int a1);  /* 0x004bc4f8 */
int __fastcall sub_604BEE90(int a1);  /* 0x004bee90 */
int __fastcall sub_604BF24C(int a1);  /* 0x004bf24c */
int __fastcall sub_604BF6C4(_DWORD *a1);  /* 0x004bf6c4 */
int __fastcall sub_604BF87C(int a1);  /* 0x004bf87c */
int __fastcall sub_604BFB80(_DWORD *a1);  /* 0x004bfb80 */
int __fastcall sub_604BFE2C(int result);  /* 0x004bfe2c */
int __fastcall sub_604C0278(int a1);  /* 0x004c0278 */
int __fastcall sub_604C0308(_DWORD *a1);  /* 0x004c0308 */
int __fastcall sub_604C03FC(int a1);  /* 0x004c03fc */
int __fastcall sub_604C04C8(float *a1, int a2);  /* 0x004c04c8 */
unsigned int __fastcall sub_604C08B0(int a1);  /* 0x004c08b0 */
int __fastcall sub_604C0BAC(int a1, int a2);  /* 0x004c0bac */
int __fastcall sub_604C0EF0(int a1);  /* 0x004c0ef0 */
int __fastcall sub_604C154C(int a1);  /* 0x004c154c */
int __fastcall sub_604C1758(_DWORD *a1, int a2);  /* 0x004c1758 */
int __fastcall sub_604C1AA4(int a1, int a2, unsigned __int8 *a3, int a4);  /* 0x004c1aa4 */
int __fastcall sub_604C46FC(int a1);  /* 0x004c46fc */
int __fastcall sub_604C4E30(int a1);  /* 0x004c4e30 */
int __fastcall sub_604C4FBC(_DWORD *a1);  /* 0x004c4fbc */
int __fastcall sub_604C51F0(_DWORD *a1);  /* 0x004c51f0 */
int __fastcall sub_604C5398(int a1);  /* 0x004c5398 */
int __fastcall sub_604C5524(int a1);  /* 0x004c5524 */
int __fastcall sub_604C56B0(int a1);  /* 0x004c56b0 */
int __fastcall sub_604C5DA4(int a1);  /* 0x004c5da4 */
int __fastcall sub_604C6B78(int a1);  /* 0x004c6b78 */
int __fastcall sub_604C6D98(int a1);  /* 0x004c6d98 */
int __fastcall sub_604C7134(int a1);  /* 0x004c7134 */
int __fastcall sub_604C7288(int a1, int a2, int a3);  /* 0x004c7288 */
int __fastcall sub_604C7438(int a1, int a2);  /* 0x004c7438 */
int __fastcall sub_604C75B8(int a1);  /* 0x004c75b8 */
unsigned int __fastcall sub_604C77D4(int a1);  /* 0x004c77d4 */
int __fastcall sub_604C7964(_BYTE *a1);  /* 0x004c7964 */
int __fastcall sub_604C7A8C(int a1);  /* 0x004c7a8c */
int __fastcall sub_604C7C2C(int a1, int a2);  /* 0x004c7c2c */
int __fastcall sub_604C8318(int a1);  /* 0x004c8318 */
int __fastcall sub_604C84E8(_DWORD *a1);  /* 0x004c84e8 */
bool __fastcall sub_604C8564(int a1);  /* 0x004c8564 */
unsigned int __fastcall G_Score_00_ref(int a1);  /* 0x004c8a34 */
int __fastcall CouseSelectVSRandom_World_00_ref(_DWORD *a1);  /* 0x004c9cd0 */
int __fastcall sub_604CB794(int a1);  /* 0x004cb794 */
int __fastcall sub_604CC1DC(int a1);  /* 0x004cc1dc */
int __fastcall sub_604CC400(int a1);  /* 0x004cc400 */
int __fastcall sub_604CCA08(int a1);  /* 0x004cca08 */
int __fastcall sub_604CCEB4(int a1);  /* 0x004cceb4 */
int __fastcall sub_604CD1B8(int a1);  /* 0x004cd1b8 */
int __fastcall sub_604CD374(int a1);  /* 0x004cd374 */
int __fastcall sub_604CD654(int a1);  /* 0x004cd654 */
int __fastcall sub_604CDAD8(_DWORD *a1);  /* 0x004cdad8 */
int __fastcall sub_604CDDAC(_DWORD *a1);  /* 0x004cddac */
int __fastcall sub_604CDF1C(_DWORD *a1);  /* 0x004cdf1c */
int __fastcall sub_604D0DF4(int a1, int a2, int a3);  /* 0x004d0df4 */
int __fastcall sub_604D11AC(int a1);  /* 0x004d11ac */
int __fastcall sub_604D1444(_DWORD *a1);  /* 0x004d1444 */
int __fastcall sub_604D1664(_DWORD *a1);  /* 0x004d1664 */
int __fastcall sub_604D17A0(int a1);  /* 0x004d17a0 */
int __fastcall sub_604D19FC(int a1, _DWORD *a2);  /* 0x004d19fc */
int __fastcall sub_604D1A84(int a1);  /* 0x004d1a84 */
int __fastcall sub_604D1C04(int a1);  /* 0x004d1c04 */
int __fastcall sub_604D1DC4(int a1);  /* 0x004d1dc4 */
int __fastcall sub_604D22B8(_DWORD *a1, int a2);  /* 0x004d22b8 */
int __fastcall sub_604D23A8(int a1, int a2);  /* 0x004d23a8 */
int __fastcall sub_604D29F8(_DWORD *a1, int a2);  /* 0x004d29f8 */
int __fastcall sub_604D2C94(int result);  /* 0x004d2c94 */
int __fastcall sub_604D2F10(int a1);  /* 0x004d2f10 */
int __fastcall sub_604D2F44(int a1);  /* 0x004d2f44 */
int __fastcall sub_604D3074(_DWORD *a1);  /* 0x004d3074 */
int __fastcall sub_604D3270(int a1, int a2);  /* 0x004d3270 */
int __fastcall sub_604D3584(int a1, int a2);  /* 0x004d3584 */
int __fastcall sub_604D37E4(int result, _BYTE *a2);  /* 0x004d37e4 */
unsigned int __fastcall sub_604D3944(_DWORD *a1);  /* 0x004d3944 */
int __fastcall sub_604D3C50(int a1);  /* 0x004d3c50 */
int __fastcall sub_604D3EDC(int a1);  /* 0x004d3edc */
int __fastcall sub_604D4268(int a1, int a2, int a3);  /* 0x004d4268 */
int __fastcall sub_604D51D8(int a1);  /* 0x004d51d8 */
int __fastcall sub_604D5588(int a1);  /* 0x004d5588 */
int __fastcall sub_604D57C0(int a1);  /* 0x004d57c0 */
int __fastcall sub_604D5934(int a1);  /* 0x004d5934 */
int __fastcall sub_604D5E28(int result);  /* 0x004d5e28 */
int __fastcall sub_604D5FAC(int a1);  /* 0x004d5fac */
int __fastcall sub_604D6370(_DWORD *a1);  /* 0x004d6370 */
int __fastcall sub_604D6794(int a1);  /* 0x004d6794 */
int __fastcall sub_604D69A4(int a1);  /* 0x004d69a4 */
int __fastcall sub_604D6B3C(int result);  /* 0x004d6b3c */
int __fastcall sub_604D6F6C(int a1, int a2);  /* 0x004d6f6c */
int __fastcall sub_604D70FC(int a1);  /* 0x004d70fc */
int __fastcall sub_604D7640(int a1);  /* 0x004d7640 */
int __fastcall sub_604D78C4(int a1);  /* 0x004d78c4 */
int __fastcall sub_604D79F4(int a1);  /* 0x004d79f4 */
int __fastcall sub_604D7B04(int a1);  /* 0x004d7b04 */
int __fastcall sub_604D8BE4(int a1);  /* 0x004d8be4 */
int __fastcall sub_604D8E50(int a1);  /* 0x004d8e50 */
int __fastcall sub_604D8F88(int a1);  /* 0x004d8f88 */
int __fastcall sub_604D9358(_DWORD *a1);  /* 0x004d9358 */
int __fastcall sub_604D95CC(int a1);  /* 0x004d95cc */
int __fastcall sub_604D9864(int a1);  /* 0x004d9864 */
int __fastcall sub_604D99B0(int a1, _BYTE *a2);  /* 0x004d99b0 */
int __fastcall sub_604D9B70(int a1);  /* 0x004d9b70 */
void __fastcall sub_604D9DF8(int a1);  /* 0x004d9df8 */
int __fastcall sub_604D9EB0(unsigned int a1);  /* 0x004d9eb0 */
int __fastcall sub_604DA264(unsigned int a1);  /* 0x004da264 */
int __fastcall sub_604DA618(unsigned int a1);  /* 0x004da618 */
int __fastcall sub_604DA9CC(unsigned int a1);  /* 0x004da9cc */
int __fastcall sub_604DABE0(unsigned int a1);  /* 0x004dabe0 */
int __fastcall sub_604DAF94(unsigned int a1);  /* 0x004daf94 */
int __fastcall sub_604DB348(unsigned int a1);  /* 0x004db348 */
int __fastcall sub_604DB6FC(unsigned int a1);  /* 0x004db6fc */
int __fastcall sub_604DBAB0(unsigned int a1);  /* 0x004dbab0 */
int __fastcall sub_604DBE64(unsigned int a1);  /* 0x004dbe64 */
int __fastcall sub_604DC078(unsigned int a1);  /* 0x004dc078 */
int __fastcall sub_604DC42C(unsigned int a1);  /* 0x004dc42c */
int __fastcall sub_604DC7E0(int a1);  /* 0x004dc7e0 */
int __fastcall sub_604DC9F8(unsigned int a1);  /* 0x004dc9f8 */
int __fastcall sub_604DCDAC(unsigned int a1);  /* 0x004dcdac */
int __fastcall sub_604DCFC0(int a1);  /* 0x004dcfc0 */
int __fastcall sub_604DD378(unsigned int a1);  /* 0x004dd378 */
int __fastcall sub_604DD72C(unsigned int a1);  /* 0x004dd72c */
int __fastcall sub_604DD940(unsigned int a1);  /* 0x004dd940 */
int __fastcall sub_604DE240(int a1);  /* 0x004de240 */
int __fastcall sub_604DE39C(int a1);  /* 0x004de39c */
int __fastcall sub_604DE7AC(int a1);  /* 0x004de7ac */
int __fastcall sub_604DE8F8(int a1);  /* 0x004de8f8 */
int __fastcall sub_604DE958(int result, _DWORD *a2);  /* 0x004de958 */
int __fastcall sub_604DE9B0(int a1);  /* 0x004de9b0 */
int __fastcall sub_604DEA24(_DWORD *a1);  /* 0x004dea24 */
int __fastcall sub_604DEB08(int a1);  /* 0x004deb08 */
int __fastcall sub_604DEBF0(int a1);  /* 0x004debf0 */
int __fastcall sub_604DECB0(int result);  /* 0x004decb0 */
int __fastcall SE_SYS_COMPLETE_MESSAGE_ref(int a1);  /* 0x004dfbb8 */
int __fastcall SE_SYS_DIALOGUE_OUT_ref(int a1);  /* 0x004e0008 */
int __fastcall sub_604E00F0(int a1);  /* 0x004e00f0 */
int __fastcall sub_604E028C(int a1);  /* 0x004e028c */
int __fastcall sub_604E038C(int a1);  /* 0x004e038c */
int __fastcall sub_604E0514(int a1);  /* 0x004e0514 */
int __fastcall sub_604E0678(int a1);  /* 0x004e0678 */
int __fastcall sub_604E06F8(int a1);  /* 0x004e06f8 */
int __fastcall sub_604E159C(int a1);  /* 0x004e159c */
int __fastcall sub_604E1820(_DWORD *a1);  /* 0x004e1820 */
int __fastcall sub_604E1E10(int a1);  /* 0x004e1e10 */
int __fastcall sub_604E1E4C(int a1);  /* 0x004e1e4c */
int __fastcall sub_604E20DC(int a1);  /* 0x004e20dc */
int __fastcall sub_604E2228(_DWORD *a1);  /* 0x004e2228 */
unsigned int __fastcall sub_604E254C(_DWORD *a1);  /* 0x004e254c */
int __fastcall sub_604E278C(int result, unsigned int a2, _DWORD *a3);  /* 0x004e278c */
unsigned int __fastcall sub_604E286C(_DWORD *a1, int a2, int a3, int a4);  /* 0x004e286c */
int __fastcall sub_604E3564(int a1);  /* 0x004e3564 */
int __fastcall sub_604E3808(int a1);  /* 0x004e3808 */
int __fastcall sub_604E43B0(int a1);  /* 0x004e43b0 */
int __fastcall sub_604E4418(int result);  /* 0x004e4418 */
int __fastcall sub_604E46C4(int a1, _DWORD *a2);  /* 0x004e46c4 */
int __fastcall SE_SYS_STAR_COIN_PAY_ref(_DWORD *a1);  /* 0x004e4e04 */
int __fastcall sub_604E52B8(int a1);  /* 0x004e52b8 */
int __fastcall sub_604E5788(int a1);  /* 0x004e5788 */
int __fastcall sub_604E5CC0(_DWORD *a1);  /* 0x004e5cc0 */
int __fastcall sub_604E5DFC(int a1);  /* 0x004e5dfc */
int __fastcall sub_604E5FE0(int a1);  /* 0x004e5fe0 */
int __fastcall sub_604E6204(int a1);  /* 0x004e6204 */
int __fastcall sub_604E633C(int a1);  /* 0x004e633c */
int __fastcall sub_604E6470(int a1);  /* 0x004e6470 */
int __fastcall sub_604E6574(int a1);  /* 0x004e6574 */
int __fastcall sub_604E6680(int a1);  /* 0x004e6680 */
int __fastcall sub_604E67B8(int a1);  /* 0x004e67b8 */
int __fastcall sub_604E68F4(int a1, int a2);  /* 0x004e68f4 */
int __fastcall sub_604E6A14(int a1);  /* 0x004e6a14 */
int __fastcall sub_604E6BBC(int a1);  /* 0x004e6bbc */
int __fastcall sub_604E6D24(int a1);  /* 0x004e6d24 */
int __fastcall sub_604E6E64(int a1);  /* 0x004e6e64 */
int __fastcall sub_604E75CC(int a1);  /* 0x004e75cc */
int __fastcall sub_604E7960(int a1, int a2);  /* 0x004e7960 */
int __fastcall sub_604E7C78(int a1, int a2);  /* 0x004e7c78 */
int __fastcall sub_604E7E14(int a1);  /* 0x004e7e14 */
int __fastcall sub_604E8710(int a1, _DWORD *a2);  /* 0x004e8710 */
int __fastcall GameScene_Coin_00_ref(int a1);  /* 0x004e8748 */
unsigned int __fastcall sub_604E87E4(int a1);  /* 0x004e87e4 */
int __fastcall sub_604E8830(int a1);  /* 0x004e8830 */
int __fastcall sub_604E8C6C(int a1);  /* 0x004e8c6c */
int __fastcall sub_604E90B8(int a1, int a2);  /* 0x004e90b8 */
int __fastcall sub_604E9298(int a1, unsigned int a2);  /* 0x004e9298 */
int __fastcall sub_604E9478(int result);  /* 0x004e9478 */
int __fastcall G_CoinLost_ref(_DWORD *a1);  /* 0x004e98ac */
unsigned int __fastcall G_EnemyLost_ref(int *a1);  /* 0x004e9c3c */
int __fastcall sub_604E9E48(int a1);  /* 0x004e9e48 */
int __fastcall sub_604EA114(int a1);  /* 0x004ea114 */
int __fastcall sub_604EA3C8(int a1);  /* 0x004ea3c8 */
int __fastcall sub_604EA520(int a1);  /* 0x004ea520 */
int __fastcall sub_604EA67C(int a1);  /* 0x004ea67c */
int __fastcall sub_604EB0E4(_DWORD *a1, int a2);  /* 0x004eb0e4 */
int __fastcall sub_604EBC10(int a1);  /* 0x004ebc10 */
int __fastcall sub_604EBDE0(int a1);  /* 0x004ebde0 */
int __fastcall sub_604EBE38(int a1);  /* 0x004ebe38 */
int __fastcall sub_604EC910(int a1, signed int a2, int a3, int a4);  /* 0x004ec910 */
int __fastcall sub_604ECAA8(_DWORD *a1, signed int a2);  /* 0x004ecaa8 */
int __fastcall sub_604ECC44(_DWORD *a1);  /* 0x004ecc44 */
int __fastcall sub_604ECDE4(int a1);  /* 0x004ecde4 */
int __fastcall sub_604ECEA4(_DWORD *a1);  /* 0x004ecea4 */
int __fastcall sub_604ECFC4(int a1, unsigned int a2);  /* 0x004ecfc4 */
int __fastcall sub_604ED028(int a1);  /* 0x004ed028 */
int __fastcall sub_604ED420(_DWORD *a1, int a2, _DWORD *a3);  /* 0x004ed420 */
int __fastcall sub_604ED5EC(int a1);  /* 0x004ed5ec */
int __fastcall sub_604ED658(int a1, int a2, int a3);  /* 0x004ed658 */
int __fastcall sub_604ED694(int a1, unsigned int a2);  /* 0x004ed694 */
int __fastcall sub_604ED7A0(int a1, int a2);  /* 0x004ed7a0 */
int __fastcall sub_604ED800(int a1, int a2);  /* 0x004ed800 */
int __fastcall sub_604ED8D0(_DWORD *a1, int a2);  /* 0x004ed8d0 */
int __fastcall sub_604ED9CC(int a1, int a2);  /* 0x004ed9cc */
int __fastcall SE_SYS_NEW_OSHIRASE_ref(int a1);  /* 0x004eda9c */
int __fastcall sub_604EDCD8(int a1);  /* 0x004edcd8 */
int __fastcall sub_604EDEA0(int a1);  /* 0x004edea0 */
int __fastcall sub_604EDF98(_DWORD *a1);  /* 0x004edf98 */
int __fastcall sub_604EE140(int a1);  /* 0x004ee140 */
int __fastcall sub_604EE4B0(int a1);  /* 0x004ee4b0 */
int __fastcall SE_PLY_ref_2(int a1);  /* 0x004ef0a0 */
signed int __fastcall ItemList_InvalidItem_ref(int a1);  /* 0x004ef81c */
int __fastcall sub_604F03B0(int a1);  /* 0x004f03b0 */
int __fastcall sub_604F0BDC(int a1);  /* 0x004f0bdc */
int __fastcall sub_604F1004(_DWORD *a1);  /* 0x004f1004 */
int __fastcall sub_604F127C(_DWORD *a1);  /* 0x004f127c */
int __fastcall sub_604F145C(int a1);  /* 0x004f145c */
int __fastcall sub_604F1774(int a1);  /* 0x004f1774 */
int __fastcall sub_604F1918(int a1);  /* 0x004f1918 */
int __fastcall sub_604F1B18(int a1);  /* 0x004f1b18 */
unsigned int __fastcall sub_604F1C08(int a1);  /* 0x004f1c08 */
int __fastcall sub_604F1FBC(int a1);  /* 0x004f1fbc */
int __fastcall sub_604F293C(int a1);  /* 0x004f293c */
int __fastcall sub_604F2F08(int a1, unsigned int a2, int a3);  /* 0x004f2f08 */
bool __fastcall sub_604F31CC(int a1, int a2);  /* 0x004f31cc */
int __fastcall sub_604F377C(int a1, int a2, int a3);  /* 0x004f377c */
int __fastcall sub_604F39D8(int a1);  /* 0x004f39d8 */
int __fastcall sub_604F3B84(int a1);  /* 0x004f3b84 */
int __fastcall sub_604F3CC4(int a1);  /* 0x004f3cc4 */
int __fastcall SE_SYS_CS_NEW_ITEM_WINDOW_ADD_ITEM_ref(_DWORD *a1);  /* 0x004f43ac */
int __fastcall sub_604F5448(int a1);  /* 0x004f5448 */
int __fastcall sub_604F55F0(int a1);  /* 0x004f55f0 */
int __fastcall sub_604F5730(int a1);  /* 0x004f5730 */
int __fastcall sub_604F5A4C(int a1);  /* 0x004f5a4c */
unsigned int __fastcall sub_604F6738(int a1);  /* 0x004f6738 */
int __fastcall sub_604F68D8(int a1);  /* 0x004f68d8 */
int __fastcall sub_604F6AF0(int a1);  /* 0x004f6af0 */
int __fastcall sub_604F6B4C(int a1);  /* 0x004f6b4c */
unsigned int __fastcall sub_604F6FF8(int *a1, int a2, unsigned int a3);  /* 0x004f6ff8 */
int __fastcall sub_604F714C(_DWORD *a1, int a2, unsigned int a3);  /* 0x004f714c */
int __fastcall sub_604F7280(int a1, int a2);  /* 0x004f7280 */
int __fastcall sub_604F73C8(_DWORD *a1);  /* 0x004f73c8 */
void __fastcall sub_604F75A4(int a1);  /* 0x004f75a4 */
int __fastcall sub_604F78CC(_DWORD *a1);  /* 0x004f78cc */
int __fastcall sub_604F79C0(_DWORD *a1);  /* 0x004f79c0 */
int __fastcall sub_604F7AB4(_DWORD *a1, int a2, _DWORD *a3);  /* 0x004f7ab4 */
int __fastcall sub_604F7D9C(int a1, int a2);  /* 0x004f7d9c */
int __fastcall sub_604F7EA8(_DWORD *a1);  /* 0x004f7ea8 */
int __fastcall sub_604F7F5C(int a1, int a2, _DWORD *a3);  /* 0x004f7f5c */
int __fastcall sub_604F832C(int a1);  /* 0x004f832c */
int __fastcall sub_604F83CC(int a1, int a2);  /* 0x004f83cc */
int __fastcall sub_604F8C4C(_DWORD *a1);  /* 0x004f8c4c */
int __fastcall sub_604F8D20(int a1);  /* 0x004f8d20 */
int __fastcall sub_604F8E9C(int a1);  /* 0x004f8e9c */
int __fastcall sub_604F9090(int a1);  /* 0x004f9090 */
int __fastcall sub_604F92D4(int a1);  /* 0x004f92d4 */
int __fastcall sub_604F9430(_DWORD *a1);  /* 0x004f9430 */
int __fastcall SE_SYS_KO_DIALOGUE_IN_ref(int a1);  /* 0x004f967c */
int __fastcall SE_MG_CMN_WIN_ref(int a1);  /* 0x004f9a24 */
int __fastcall sub_604F9FF4(int a1);  /* 0x004f9ff4 */
int __fastcall sub_604FA1A8(int a1);  /* 0x004fa1a8 */
int __fastcall sub_604FA23C(int a1);  /* 0x004fa23c */
int __fastcall sub_604FA344(int a1);  /* 0x004fa344 */
int __fastcall sub_604FA500(_DWORD *a1);  /* 0x004fa500 */
int __fastcall sub_604FA62C(_DWORD *a1);  /* 0x004fa62c */
int __fastcall sub_604FAC1C(int a1);  /* 0x004fac1c */
int __fastcall sub_604FAC7C(int a1, int a2, int a3);  /* 0x004fac7c */
int __fastcall sub_604FC2B4(int a1);  /* 0x004fc2b4 */
int __fastcall sub_604FC590(int a1, unsigned int a2);  /* 0x004fc590 */
int __fastcall sub_604FD19C(int a1);  /* 0x004fd19c */
int __fastcall sub_604FD928(int a1, unsigned int a2, int a3, char a4);  /* 0x004fd928 */
int __fastcall sub_604FDA90(int a1);  /* 0x004fda90 */
int __fastcall sub_604FDD28(int result, unsigned int a2);  /* 0x004fdd28 */
int __fastcall sub_604FDEF8(int result, int a2);  /* 0x004fdef8 */
unsigned int __fastcall sub_604FE050(int a1, int a2);  /* 0x004fe050 */
int __fastcall sub_604FE5C0(int a1);  /* 0x004fe5c0 */
int __fastcall sub_604FE6A8(int a1);  /* 0x004fe6a8 */
int __fastcall sub_604FE74C(int result);  /* 0x004fe74c */
int __fastcall STRM_BGM_NX_STAFF_CREDIT_ref(int a1);  /* 0x004fe92c */
int __fastcall sub_604FED44(int a1);  /* 0x004fed44 */
int __fastcall sub_604FEEFC(int a1);  /* 0x004feefc */
int __fastcall sub_604FF028(_DWORD *a1);  /* 0x004ff028 */
int __fastcall sub_604FF248(_DWORD *a1);  /* 0x004ff248 */
int __fastcall sub_604FF638(int a1);  /* 0x004ff638 */
int __fastcall sub_604FF7EC(_DWORD *a1);  /* 0x004ff7ec */
int __fastcall sub_604FFB50(int a1);  /* 0x004ffb50 */
int __fastcall sub_604FFBF4(int result);  /* 0x004ffbf4 */
int __fastcall sub_604FFD54(int a1);  /* 0x004ffd54 */
int __fastcall sub_60500670(int a1);  /* 0x00500670 */
int __fastcall sub_6050090C(int a1);  /* 0x0050090c */
int __fastcall sub_605009F0(int a1);  /* 0x005009f0 */
int __fastcall sub_60500BDC(int a1);  /* 0x00500bdc */
int __fastcall sub_6050103C(int a1);  /* 0x0050103c */
int __fastcall sub_6050120C(int a1, int a2);  /* 0x0050120c */
int __fastcall sub_60501260(int a1);  /* 0x00501260 */
int __fastcall sub_605013AC(int a1);  /* 0x005013ac */
int __fastcall sub_6050229C(int a1);  /* 0x0050229c */
int __fastcall sub_605023E8(int a1);  /* 0x005023e8 */
int __fastcall sub_60502548(int a1);  /* 0x00502548 */
int __fastcall sub_605025FC(int a1);  /* 0x005025fc */
int __fastcall sub_60502694(int result);  /* 0x00502694 */
int __fastcall sub_6050270C(int a1, int a2, int a3);  /* 0x0050270c */
int __fastcall sub_60502790(int a1);  /* 0x00502790 */
int __fastcall sub_605028F0(int a1, _DWORD *a2, int a3);  /* 0x005028f0 */
int __fastcall sub_6050292C(int result, int a2);  /* 0x0050292c */
int __fastcall sub_60502960(int result, int a2);  /* 0x00502960 */
int __fastcall sub_60502994(int result, int a2);  /* 0x00502994 */
int __fastcall sub_605029C8(int result, int a2);  /* 0x005029c8 */
int __fastcall sub_60502A24(int result, _DWORD *a2, int a3, int a4);  /* 0x00502a24 */
unsigned int __fastcall sub_60502B04(int a1, unsigned int *a2, int a3);  /* 0x00502b04 */
int __fastcall sub_60502B90(int a1, unsigned int a2);  /* 0x00502b90 */
int __fastcall sub_60502C04(int result, int *a2, int a3);  /* 0x00502c04 */
int __fastcall sub_60502C84(int a1, unsigned int *a2, int a3);  /* 0x00502c84 */
int __fastcall sub_60502D0C(int a1, unsigned int a2);  /* 0x00502d0c */
int __fastcall sub_60502D80(int a1);  /* 0x00502d80 */
bool __fastcall sub_60502DC8(int a1, _DWORD *a2);  /* 0x00502dc8 */
int __fastcall sub_60502E18(int a1, int a2);  /* 0x00502e18 */
int __fastcall sub_60502E60(int a1, _DWORD *a2);  /* 0x00502e60 */
int __fastcall sub_60503FB0(int a1);  /* 0x00503fb0 */
int __fastcall sub_605040B4(int a1, int a2, _DWORD *a3);  /* 0x005040b4 */
int __fastcall sub_60504234(int a1, int a2);  /* 0x00504234 */
bool __fastcall sub_605043B4(int a1);  /* 0x005043b4 */
int __fastcall sub_605043EC(int a1, _DWORD *a2);  /* 0x005043ec */
int __fastcall sub_605047C0(int a1);  /* 0x005047c0 */
int __fastcall sub_60504864(_DWORD *a1, int a2, unsigned int a3, int a4);  /* 0x00504864 */
int __fastcall sub_60504B00(_DWORD *a1, int a2);  /* 0x00504b00 */
int __fastcall sub_60504D94(int a1);  /* 0x00504d94 */
int __fastcall sub_60504EF4(_DWORD *a1);  /* 0x00504ef4 */
int __fastcall sub_60505054(int a1, int a2, int a3);  /* 0x00505054 */
int __fastcall sub_605051BC(int a1);  /* 0x005051bc */
int __fastcall sub_6050520C(int a1);  /* 0x0050520c */
int __fastcall sub_60505270(int a1);  /* 0x00505270 */
int __fastcall sub_605052C0(int a1);  /* 0x005052c0 */
int __fastcall sub_60505350(int a1);  /* 0x00505350 */
int __fastcall sub_605053EC(int a1);  /* 0x005053ec */
int __fastcall sub_6050543C(int a1);  /* 0x0050543c */
int __fastcall sub_6050548C(int a1);  /* 0x0050548c */
int __fastcall sub_60505508(int a1, unsigned int a2, int a3);  /* 0x00505508 */
int __fastcall sub_60505730(int a1);  /* 0x00505730 */
int __fastcall sub_60505788(int a1);  /* 0x00505788 */
int __fastcall sub_605057D8(unsigned int a1);  /* 0x005057d8 */
int __fastcall sub_60505B8C(unsigned int a1);  /* 0x00505b8c */
int __fastcall sub_60505FE8(_DWORD *a1, int a2, int a3, int a4, int a5);  /* 0x00505fe8 */
int __fastcall sub_605061B8(_DWORD *a1, int a2, unsigned int a3, int a4);  /* 0x005061b8 */
int __fastcall sub_60506438(_DWORD *a1, int a2);  /* 0x00506438 */
int __fastcall sub_605067A0(unsigned int a1);  /* 0x005067a0 */
int __fastcall sub_60506B54(unsigned int a1);  /* 0x00506b54 */
int __fastcall sub_60506DB0(int a1);  /* 0x00506db0 */
int __fastcall sub_60506F20(_DWORD *a1, int a2, _DWORD *a3);  /* 0x00506f20 */
int __fastcall sub_60507044(_DWORD *a1, int a2);  /* 0x00507044 */
int __fastcall sub_60507BA8(int a1);  /* 0x00507ba8 */
int __fastcall sub_60507CA8(int a1, int a2, _DWORD *a3);  /* 0x00507ca8 */
int __fastcall sub_60507E28(int a1, int a2);  /* 0x00507e28 */
bool __fastcall sub_60507FA8(int a1);  /* 0x00507fa8 */
int __fastcall sub_60507FE0(int a1, _DWORD *a2);  /* 0x00507fe0 */
int __fastcall sub_605084E4(int a1);  /* 0x005084e4 */
int __fastcall sub_60508680(_DWORD *a1, int a2, _DWORD *a3, int a4, int a5, int a6);  /* 0x00508680 */
int __fastcall sub_605087C0(int *a1);  /* 0x005087c0 */
int __fastcall sub_60508C34(int a1);  /* 0x00508c34 */
int __fastcall sub_60508E90(int a1);  /* 0x00508e90 */
int __fastcall sub_605092CC(_DWORD *a1);  /* 0x005092cc */
int __fastcall sub_605093C8(int a1);  /* 0x005093c8 */
int __fastcall sub_605094EC(int a1);  /* 0x005094ec */
int __fastcall sub_6050961C(int a1);  /* 0x0050961c */
int __fastcall sub_60509668(int a1, int a2);  /* 0x00509668 */
int __fastcall sub_605097CC(_DWORD *a1);  /* 0x005097cc */
int __fastcall sub_60509920(_DWORD *a1);  /* 0x00509920 */
int __fastcall sub_60509B54(int a1);  /* 0x00509b54 */
int __fastcall sub_60509C50(int a1, int a2, _DWORD *a3, int a4);  /* 0x00509c50 */
int __fastcall sub_6050A308(int a1);  /* 0x0050a308 */
int __fastcall sub_6050A4EC(int a1, int a2, _DWORD *a3, char a4, char a5);  /* 0x0050a4ec */
int __fastcall sub_6050A660(int a1);  /* 0x0050a660 */
int __fastcall sub_6050A704(int a1, int a2, _DWORD *a3, _DWORD *a4, char a5, char a6);  /* 0x0050a704 */
int __fastcall sub_6050A8AC(int a1);  /* 0x0050a8ac */
int __fastcall sub_6050AC00(int a1);  /* 0x0050ac00 */
int __fastcall sub_6050ACE4(int a1, int a2, _DWORD *a3);  /* 0x0050ace4 */
int __fastcall sub_6050AD6C(int result, int a2);  /* 0x0050ad6c */
int __fastcall sub_6050B4E4(int a1);  /* 0x0050b4e4 */
int __fastcall sub_6050B5E4(int a1, int a2, _DWORD *a3);  /* 0x0050b5e4 */
unsigned int __fastcall T_Count_00_ref(int a1, int a2);  /* 0x0050b944 */
int __fastcall sub_6050BA40(int a1);  /* 0x0050ba40 */
int __fastcall sub_6050BBE4(int a1);  /* 0x0050bbe4 */
int __fastcall sub_6050BCD0(int a1, int a2, _DWORD *a3);  /* 0x0050bcd0 */
unsigned int __fastcall sub_6050BDF8(_DWORD *a1, int a2);  /* 0x0050bdf8 */
int __fastcall sub_6050BF9C(int a1);  /* 0x0050bf9c */
int __fastcall sub_6050C24C(unsigned int a1);  /* 0x0050c24c */
int __fastcall sub_6050C600(int a1);  /* 0x0050c600 */
int __fastcall sub_6050C9B8(unsigned int a1);  /* 0x0050c9b8 */
int __fastcall sub_6050CE38(int a1);  /* 0x0050ce38 */
int __fastcall sub_6050CF24(_DWORD *a1, int a2, _DWORD *a3);  /* 0x0050cf24 */
int __fastcall sub_6050D014(int a1);  /* 0x0050d014 */
int __fastcall sub_6050D0AC(_DWORD *a1);  /* 0x0050d0ac */
int __fastcall sub_6050D1DC(int result, _DWORD *a2, int a3);  /* 0x0050d1dc */
int __fastcall sub_6050D228(int a1);  /* 0x0050d228 */
int __fastcall sub_6050D440(int a1);  /* 0x0050d440 */
int __fastcall CourseSelectScene_Zanki1P_00_ref(_DWORD *a1, int a2);  /* 0x0050d65c */
int __fastcall sub_6050D7FC(int a1);  /* 0x0050d7fc */
int __fastcall sub_6050D95C(int a1);  /* 0x0050d95c */
int __fastcall sub_6050D99C(int a1, int a2, _DWORD *a3);  /* 0x0050d99c */
int __fastcall CourseSelectScene_Zanki1P_00_ref_2(_DWORD *a1, int a2, unsigned __int64 *a3);  /* 0x0050e048 */
int __fastcall sub_6050E1E8(int a1);  /* 0x0050e1e8 */
int __fastcall sub_6050E38C(_DWORD *a1, int a2, _DWORD *a3);  /* 0x0050e38c */
int __fastcall sub_6050E4E4(int result, int a2, unsigned __int64 *a3);  /* 0x0050e4e4 */
unsigned int __fastcall sub_6050E6F8(_DWORD *a1, int a2);  /* 0x0050e6f8 */
int __fastcall CourseSelectScene_Zanki1P_00_ref_3(_DWORD *a1);  /* 0x0050ed10 */
int __fastcall sub_6050EEAC(int a1);  /* 0x0050eeac */
int __fastcall sub_6050F0B0(_DWORD *a1, int a2, _DWORD *a3);  /* 0x0050f0b0 */
int __fastcall sub_6050F248(int result, unsigned int a2, unsigned int a3);  /* 0x0050f248 */
int __fastcall sub_6050F27C(int a1, unsigned __int64 *a2);  /* 0x0050f27c */
int __fastcall sub_6050F728(_DWORD *a1);  /* 0x0050f728 */
void __fastcall sub_60510B20(sead::IDisposer *a1);  /* 0x00510b20 */
int __fastcall sub_60510BF0(int a1);  /* 0x00510bf0 */
int __fastcall sub_60510C68(int a1);  /* 0x00510c68 */
int __fastcall sub_60510E6C(int a1);  /* 0x00510e6c */
int __fastcall sub_60510FE4(int a1);  /* 0x00510fe4 */
int __fastcall sub_6051113C(int a1);  /* 0x0051113c */
int __fastcall sub_60511208(int a1);  /* 0x00511208 */
int __fastcall sub_60511318(int a1);  /* 0x00511318 */
int __fastcall sub_6051141C(_DWORD *a1);  /* 0x0051141c */
bool __fastcall sub_605115B0(_DWORD *a1);  /* 0x005115b0 */
int __fastcall sub_605115FC(int a1);  /* 0x005115fc */
int __fastcall sub_60511640(int a1);  /* 0x00511640 */
int __fastcall sub_605117A0(int a1);  /* 0x005117a0 */
int __fastcall sub_605119FC(int a1);  /* 0x005119fc */
int __fastcall sub_60511ABC(int a1);  /* 0x00511abc */
bool __fastcall sub_60511D50(int a1);  /* 0x00511d50 */
int __fastcall sub_60511FFC(int a1);  /* 0x00511ffc */
bool __fastcall sub_60512200(int a1);  /* 0x00512200 */
int __fastcall sub_6051240C(int result, int a2, int a3);  /* 0x0051240c */
int __fastcall sub_6051256C(_DWORD *a1);  /* 0x0051256c */
int __fastcall sub_605128A4(char *a1);  /* 0x005128a4 */
int __fastcall sub_605129F4(char *a1);  /* 0x005129f4 */
int __fastcall sub_60512B24(_DWORD *a1);  /* 0x00512b24 */
int __fastcall sub_60512E5C(int a1);  /* 0x00512e5c */
int __fastcall sub_60512F4C(int a1);  /* 0x00512f4c */
unsigned int __fastcall sub_60513080(int a1);  /* 0x00513080 */
int __fastcall sub_60514AA4(int a1);  /* 0x00514aa4 */
int __fastcall sub_60514CD8(_DWORD *a1);  /* 0x00514cd8 */
int __fastcall sub_60514E64(int a1);  /* 0x00514e64 */
int __fastcall sub_60515024(int a1, int a2);  /* 0x00515024 */
int __fastcall sub_605151FC(int a1);  /* 0x005151fc */
bool __fastcall sub_60515390(int a1);  /* 0x00515390 */
bool __fastcall sub_6051551C(int a1);  /* 0x0051551c */
int __fastcall sub_60515690(int a1);  /* 0x00515690 */
int __fastcall sub_60515864(int a1);  /* 0x00515864 */
int __fastcall sub_605159B8(int a1);  /* 0x005159b8 */
int __fastcall sub_60515B24(_BYTE *a1);  /* 0x00515b24 */
int __fastcall sub_60515B80(int a1, unsigned int a2, unsigned int a3);  /* 0x00515b80 */
int __fastcall SE_SYS_CH_SCORE_PAGE_IN_ref(int a1);  /* 0x00516754 */
int __fastcall SE_SYS_CH_SCORE_PAGE_OUT_ref(int a1);  /* 0x005167cc */
int __fastcall sub_60516844(int a1);  /* 0x00516844 */
int __fastcall sub_60516994(int a1);  /* 0x00516994 */
int __fastcall sub_60516B18(int a1);  /* 0x00516b18 */
int __fastcall sub_60516CE0(int a1);  /* 0x00516ce0 */
int __fastcall sub_60516D28(int a1);  /* 0x00516d28 */
int __fastcall sub_60516E80(int *a1);  /* 0x00516e80 */
int __fastcall sub_60517018(unsigned int a1);  /* 0x00517018 */
int __fastcall sub_605173CC(unsigned int a1);  /* 0x005173cc */
int __fastcall sub_60517B18(int a1);  /* 0x00517b18 */
int __fastcall sub_60517C8C(int a1);  /* 0x00517c8c */
int __fastcall sub_60517CDC(int a1, int a2);  /* 0x00517cdc */
int __fastcall sub_60517DC0(int a1);  /* 0x00517dc0 */
int __fastcall sub_605180D0(int a1);  /* 0x005180d0 */
unsigned int __fastcall sub_60518138(int a1);  /* 0x00518138 */
unsigned int __fastcall sub_605184C0(int a1);  /* 0x005184c0 */
int __fastcall sub_605188C8(int a1);  /* 0x005188c8 */
int __fastcall sub_60518A28(int a1);  /* 0x00518a28 */
int __fastcall sub_60518E70(_DWORD *a1);  /* 0x00518e70 */
int __fastcall SE_SYS_BM_COURSE_PAGE_IN_ref(int a1);  /* 0x00519000 */
int __fastcall SE_SYS_BM_COURSE_PAGE_OUT_ref(int a1);  /* 0x005190dc */
int __fastcall sub_60519160(int a1);  /* 0x00519160 */
int __fastcall sub_605193FC(_DWORD *a1);  /* 0x005193fc */
int __fastcall sub_605196A8(int a1);  /* 0x005196a8 */
int __fastcall sub_605197DC(int a1);  /* 0x005197dc */
int __fastcall sub_60519910(int a1);  /* 0x00519910 */
int __fastcall sub_60519984(int a1);  /* 0x00519984 */
int __fastcall sub_605199CC(int *a1);  /* 0x005199cc */
int __fastcall sub_60519B68(int a1);  /* 0x00519b68 */
int __fastcall sub_60519D88(int result);  /* 0x00519d88 */
int __fastcall sub_6051A034(int a1);  /* 0x0051a034 */
int __fastcall sub_6051A314(unsigned int a1);  /* 0x0051a314 */
int __fastcall sub_6051A528(unsigned int a1);  /* 0x0051a528 */
int __fastcall sub_6051A8DC(unsigned int a1);  /* 0x0051a8dc */
int __fastcall sub_6051B10C(int a1);  /* 0x0051b10c */
void __fastcall sub_6051B3D4(int a1);  /* 0x0051b3d4 */
int __fastcall sub_6051B4EC(int a1);  /* 0x0051b4ec */
int __fastcall sub_6051B860(int a1);  /* 0x0051b860 */
int __fastcall sub_6051BBD0(_DWORD *a1);  /* 0x0051bbd0 */
int __fastcall sub_6051BCEC(int a1);  /* 0x0051bcec */
int __fastcall sub_6051BD84(int a1);  /* 0x0051bd84 */
bool __fastcall sub_6051BE4C(int a1);  /* 0x0051be4c */
int __fastcall SE_SYS_CH_SCORE_PAGE_IN_ref_2(int a1);  /* 0x0051c2f0 */
int __fastcall SE_SYS_CH_SCORE_PAGE_OUT_ref_2(int a1);  /* 0x0051c35c */
int __fastcall sub_6051C408(int a1);  /* 0x0051c408 */
int __fastcall sub_6051C668(int a1);  /* 0x0051c668 */
int __fastcall sub_6051C73C(int a1);  /* 0x0051c73c */
int __fastcall sub_6051C908(_DWORD *a1);  /* 0x0051c908 */
int __fastcall sub_6051CB4C(int a1);  /* 0x0051cb4c */
int __fastcall sub_6051CD8C(_DWORD *a1);  /* 0x0051cd8c */
int __fastcall sub_6051D004(int a1);  /* 0x0051d004 */
int __fastcall sub_6051D144(int a1);  /* 0x0051d144 */
int __fastcall sub_6051D5FC(int a1);  /* 0x0051d5fc */
int __fastcall sub_6051D7E8(int result);  /* 0x0051d7e8 */
int __fastcall sub_6051DB50(unsigned int a1);  /* 0x0051db50 */
int __fastcall sub_6051DD64(unsigned int a1);  /* 0x0051dd64 */
int __fastcall SE_SYS_RECORD_PAGE_IN_ref(int a1);  /* 0x0051e754 */
int __fastcall SE_SYS_RECORD_PAGE_IN_ref_2(int a1);  /* 0x0051eb50 */
int __fastcall SE_SYS_RECORD_PAGE_IN_ref_3(int a1);  /* 0x0051ec00 */
int __fastcall sub_6051ED58(int a1);  /* 0x0051ed58 */
int __fastcall sub_6051F028(int a1);  /* 0x0051f028 */
int __fastcall sub_6051F1A0(_DWORD *a1);  /* 0x0051f1a0 */
int __fastcall sub_6051F388(int *a1);  /* 0x0051f388 */
int __fastcall sub_6051F7B8(_DWORD *a1);  /* 0x0051f7b8 */
int __fastcall sub_6051FEE8(int a1);  /* 0x0051fee8 */
int __fastcall sub_6051FF3C(int a1);  /* 0x0051ff3c */
int __fastcall sub_60520078(int a1, int a2);  /* 0x00520078 */
int __fastcall SE_SYS_CH_RESULT_SCORE_ref(int a1);  /* 0x0052033c */
int __fastcall SE_SYS_CH_RESULT_SCORE_ref_2(int a1);  /* 0x005204d0 */
int __fastcall SE_SYS_CH_RESULT_SCORE_BEST_ref(int a1);  /* 0x00520598 */
int __fastcall SE_SYS_CH_RESULT_GET_ref(int a1);  /* 0x005208f8 */
int __fastcall SE_SYS_FS_PROCESSING_ref(int a1);  /* 0x00520b24 */
int __fastcall sub_60520BB0(int a1);  /* 0x00520bb0 */
int __fastcall sub_60520E18(int a1);  /* 0x00520e18 */
int __fastcall sub_60520F5C(_DWORD *a1);  /* 0x00520f5c */
int __fastcall sub_60521144(int a1);  /* 0x00521144 */
int __fastcall sub_60521364(int a1);  /* 0x00521364 */
int __fastcall sub_60521684(int a1, _DWORD *a2, int a3, int a4);  /* 0x00521684 */
int __fastcall sub_605218E4(int a1, int a2);  /* 0x005218e4 */
int __fastcall sub_60521A84(int a1);  /* 0x00521a84 */
int __fastcall sub_60522068(int a1);  /* 0x00522068 */
int __fastcall sub_605226E4(_BYTE *a1);  /* 0x005226e4 */
int __fastcall sub_6052283C(unsigned int a1);  /* 0x0052283c */
int __fastcall sub_60522BF0(unsigned int a1);  /* 0x00522bf0 */
int __fastcall sub_60522E04(unsigned int a1);  /* 0x00522e04 */
int __fastcall sub_605231B8(unsigned int a1);  /* 0x005231b8 */
int __fastcall sub_605236E8(_DWORD *a1);  /* 0x005236e8 */
int __fastcall sub_60523860(int a1);  /* 0x00523860 */
int __fastcall sub_60523944(unsigned int a1);  /* 0x00523944 */
int __fastcall SE_SYS_CB_RESULT_ref(int a1);  /* 0x00523cd8 */
int __fastcall SE_SYS_CB_TOTAL_COIN_NUM_ref(int a1);  /* 0x00524508 */
int __fastcall SE_SYS_CB_FINAL_RESULT_ref(int a1);  /* 0x00524858 */
int __fastcall SE_SYS_CB_FINAL_RESULT_ref_2(_DWORD *a1);  /* 0x00524cec */
int __fastcall SE_SYS_CB_TOTAL_COIN_NUM_ref_2(int a1);  /* 0x00524d94 */
int __fastcall sub_60525608(int a1);  /* 0x00525608 */
int __fastcall sub_605258EC(int a1);  /* 0x005258ec */
int __fastcall sub_60525DBC(int a1);  /* 0x00525dbc */
int __fastcall sub_60525FB0(_DWORD *a1);  /* 0x00525fb0 */
int __fastcall sub_605265D4(_DWORD *a1);  /* 0x005265d4 */
int __fastcall sub_60526910(_DWORD *a1, int *a2, int a3);  /* 0x00526910 */
int __fastcall sub_605280FC(int a1);  /* 0x005280fc */
int __fastcall sub_60528200(int a1);  /* 0x00528200 */
int __fastcall sub_60528260(int a1);  /* 0x00528260 */
int __fastcall sub_60528300(int a1);  /* 0x00528300 */
int __fastcall sub_605288D4(int result);  /* 0x005288d4 */
int __fastcall sub_60528BC4(_DWORD *a1);  /* 0x00528bc4 */
int __fastcall sub_60528DF4(int result);  /* 0x00528df4 */
int __fastcall sub_60528F88(_DWORD *a1);  /* 0x00528f88 */
int __fastcall sub_60529288(_DWORD *a1);  /* 0x00529288 */
int __fastcall sub_60529420(int a1, int a2, int a3);  /* 0x00529420 */
int __fastcall sub_60529658(int a1, int a2, int a3);  /* 0x00529658 */
int __fastcall sub_60529894(int a1, unsigned int a2, int a3, int a4, int a5, char a6);  /* 0x00529894 */
int __fastcall sub_605299D4(_DWORD *a1, int a2, _DWORD *a3, int a4);  /* 0x005299d4 */
int __fastcall sub_6052A1C4(int a1, int a2, _DWORD *a3);  /* 0x0052a1c4 */
int __fastcall sub_6052A250(int a1, int a2, int a3);  /* 0x0052a250 */
int __fastcall sub_6052AD14(int a1);  /* 0x0052ad14 */
int __fastcall sub_6052AD9C(int a1);  /* 0x0052ad9c */
int __fastcall sub_6052AE08(int a1);  /* 0x0052ae08 */
int __fastcall sub_6052B07C(int a1);  /* 0x0052b07c */
int __fastcall SE_SYS_CB_RESULT_COIN_FINISH_ref(int a1);  /* 0x0052b25c */
int __fastcall sub_6052B328(int a1);  /* 0x0052b328 */
int __fastcall sub_6052B52C(int a1);  /* 0x0052b52c */
int __fastcall sub_6052BA64(int a1);  /* 0x0052ba64 */
int __fastcall sub_6052BBBC(int a1, int a2, int a3, int a4, int a5);  /* 0x0052bbbc */
int __fastcall sub_6052BC7C(int a1, int a2, int a3, int *a4, _DWORD *a5);  /* 0x0052bc7c */
int __fastcall sub_6052BEBC(int a1, unsigned int a2);  /* 0x0052bebc */
int __fastcall sub_6052C150(int a1);  /* 0x0052c150 */
int __fastcall SE_SYS_BM_ref(int a1);  /* 0x0052c608 */
int __fastcall sub_6052CCBC(int a1);  /* 0x0052ccbc */
int __fastcall sub_6052CF48(int a1);  /* 0x0052cf48 */
int __fastcall sub_6052CF7C(int a1);  /* 0x0052cf7c */
int __fastcall sub_6052D12C(int a1);  /* 0x0052d12c */
int __fastcall sub_6052D264(int a1);  /* 0x0052d264 */
int __fastcall sub_6052D86C(int a1, unsigned int a2);  /* 0x0052d86c */
int __fastcall sub_6052D92C(int a1, int a2);  /* 0x0052d92c */
int __fastcall sub_6052DB30(int a1);  /* 0x0052db30 */
int __fastcall sub_6052DBEC(_DWORD *a1);  /* 0x0052dbec */
int __fastcall sub_6052DC68(int a1);  /* 0x0052dc68 */
int __fastcall sub_6052DD08(int a1, unsigned int a2);  /* 0x0052dd08 */
int __fastcall sub_6052DE5C(int a1, unsigned int a2);  /* 0x0052de5c */
int __fastcall sub_6052DFA0(_DWORD *a1);  /* 0x0052dfa0 */
int __fastcall sub_6052E2C8(unsigned int a1);  /* 0x0052e2c8 */
int __fastcall SE_MG_CMN_WIN_ref_2(int a1);  /* 0x0052e8f0 */
int __fastcall sub_6052EB9C(int a1);  /* 0x0052eb9c */
int __fastcall sub_6052ED0C(int a1);  /* 0x0052ed0c */
int __fastcall sub_6052EDB4(int a1);  /* 0x0052edb4 */
int __fastcall sub_6052EF18(int a1);  /* 0x0052ef18 */
int __fastcall sub_6052F098(int a1);  /* 0x0052f098 */
int __fastcall sub_6052F1C4(int a1);  /* 0x0052f1c4 */
int __fastcall sub_6052F434(_DWORD *a1);  /* 0x0052f434 */
int __fastcall sub_6052F8EC(int a1);  /* 0x0052f8ec */
int __fastcall sub_6052F98C(int a1);  /* 0x0052f98c */
int __fastcall sub_6052FC14(_DWORD *a1, unsigned int a2, unsigned int a3);  /* 0x0052fc14 */
int __fastcall sub_6053038C(int a1);  /* 0x0053038c */
int __fastcall sub_60530420(int a1);  /* 0x00530420 */
int __fastcall sub_60530850(int a1);  /* 0x00530850 */
int __fastcall sub_60530C64(int a1);  /* 0x00530c64 */
int __fastcall sub_60530CB4(int a1, int a2, int a3, int a4);  /* 0x00530cb4 */
signed int __fastcall sub_60530D3C(signed int result, int a2, int a3);  /* 0x00530d3c */
int __fastcall sub_60530DD8(_DWORD *a1, int *a2);  /* 0x00530dd8 */
int __fastcall sub_60530FC4(int a1, int a2, int a3);  /* 0x00530fc4 */
int __fastcall sub_60531178(int a1);  /* 0x00531178 */
int __fastcall sub_6053138C(_DWORD *a1, _DWORD *a2);  /* 0x0053138c */
int __fastcall sub_60531B9C(int a1);  /* 0x00531b9c */
int __fastcall sub_60531C68(int a1, int a2, _DWORD *a3);  /* 0x00531c68 */
int __fastcall sub_60531DEC(int a1);  /* 0x00531dec */
unsigned int __fastcall sub_605324A4(int a1, unsigned int a2);  /* 0x005324a4 */
unsigned int __fastcall sub_605325C0(int a1);  /* 0x005325c0 */
int __fastcall sub_60532710(int a1);  /* 0x00532710 */
int __fastcall sub_60532800(int a1);  /* 0x00532800 */
bool __fastcall sub_60532834(int a1);  /* 0x00532834 */
int __fastcall sub_60532E74(int a1);  /* 0x00532e74 */
int __fastcall SE_SYS_CHANGE_MODE_RDASH_ref(int a1);  /* 0x00533e84 */
int __fastcall SE_SYS_FS_DELETE_ref(int a1);  /* 0x00534584 */
int __fastcall SE_SYS_FS_COPY_ref(int a1);  /* 0x0053545c */
int __fastcall sub_605366EC(int a1);  /* 0x005366ec */
int __fastcall sub_605369BC(int a1);  /* 0x005369bc */
int __fastcall sub_60536A80(int a1);  /* 0x00536a80 */
int __fastcall sub_60537024(_DWORD *a1);  /* 0x00537024 */
int __fastcall sub_60538018(int a1);  /* 0x00538018 */
int __fastcall sub_60538BF8(int a1);  /* 0x00538bf8 */
int __fastcall sub_60538E28(int a1, _DWORD *a2);  /* 0x00538e28 */
int __fastcall sub_60538E88(int a1);  /* 0x00538e88 */
int __fastcall sub_605390B8(int a1, unsigned int a2);  /* 0x005390b8 */
int __fastcall sub_605391B0(_DWORD *a1, int a2);  /* 0x005391b0 */
int __fastcall sub_60539550(int a1);  /* 0x00539550 */
int __fastcall SE_SYS_CHANGE_MODE_RDASH_ref_2(int a1);  /* 0x0053a490 */
int __fastcall SE_SYS_FS_DELETE_ref_2(int a1);  /* 0x0053a9a0 */
int __fastcall SE_SYS_FS_COPY_ref_2(int a1);  /* 0x0053b8f0 */
int __fastcall sub_6053CC7C(int a1);  /* 0x0053cc7c */
int __fastcall sub_6053CF68(int a1);  /* 0x0053cf68 */
int __fastcall sub_6053D028(int a1);  /* 0x0053d028 */
int __fastcall sub_6053D538(_DWORD *a1);  /* 0x0053d538 */
int __fastcall sub_6053E53C(int a1);  /* 0x0053e53c */
int __fastcall sub_6053EE84(int a1);  /* 0x0053ee84 */
int __fastcall sub_6053F07C(int a1, _DWORD *a2);  /* 0x0053f07c */
int __fastcall sub_6053F0DC(int a1);  /* 0x0053f0dc */
int __fastcall sub_6053F30C(int a1, unsigned int a2);  /* 0x0053f30c */
int __fastcall SE_SYS_FS_ref(int a1);  /* 0x0053fd5c */
int __fastcall SE_SYS_FS_ref_2(int a1);  /* 0x0054097c */
int __fastcall sub_60540B18(int a1);  /* 0x00540b18 */
int __fastcall sub_60540E5C(int a1, char a2);  /* 0x00540e5c */
int __fastcall sub_60541978(int a1);  /* 0x00541978 */
int __fastcall sub_60541D74(_DWORD *a1);  /* 0x00541d74 */
int __fastcall sub_60541DF8(int a1, unsigned __int8 a2, unsigned int a3);  /* 0x00541df8 */
int __fastcall sub_60542110(int a1);  /* 0x00542110 */
int __fastcall sub_605422E4(int a1);  /* 0x005422e4 */
int __fastcall sub_60542604(int a1);  /* 0x00542604 */
int __fastcall sub_605426E8(int result);  /* 0x005426e8 */
int __fastcall sub_6054273C(int a1);  /* 0x0054273c */
int __fastcall sub_60542880(int a1);  /* 0x00542880 */
int __fastcall sub_60542970(int a1);  /* 0x00542970 */
int __fastcall sub_60542B54(int a1, int a2);  /* 0x00542b54 */
int __fastcall sub_60542C1C(int a1);  /* 0x00542c1c */
int __fastcall sub_60542D18(int a1);  /* 0x00542d18 */
int __fastcall sub_60542FA4(int a1);  /* 0x00542fa4 */
int __fastcall sub_605430EC(int a1);  /* 0x005430ec */
int __fastcall sub_60543190(int a1);  /* 0x00543190 */
int __fastcall sub_60543288(int a1);  /* 0x00543288 */
int __fastcall sub_60543508(int result);  /* 0x00543508 */
int __fastcall sub_60544C94(int a1);  /* 0x00544c94 */
int __fastcall sub_60544E84(int a1);  /* 0x00544e84 */
int __fastcall sub_60544F4C(int a1);  /* 0x00544f4c */
int __fastcall sub_605450E0(_DWORD *a1);  /* 0x005450e0 */
int __fastcall sub_60545310(int a1);  /* 0x00545310 */
int __fastcall sub_605454B8(int a1);  /* 0x005454b8 */
int __fastcall sub_6054550C(int a1, _DWORD *a2);  /* 0x0054550c */
int __fastcall sub_6054555C(int a1, int a2);  /* 0x0054555c */
int __fastcall sub_605462AC(int result);  /* 0x005462ac */
int __fastcall sub_605463C0(int result);  /* 0x005463c0 */
int __fastcall sub_60546B50(_DWORD *a1);  /* 0x00546b50 */
int __fastcall sub_605477B8(int a1);  /* 0x005477b8 */
int __fastcall sub_60547AA4(int a1);  /* 0x00547aa4 */
int __fastcall sub_60547BF4(int a1);  /* 0x00547bf4 */
int __fastcall sub_60547D74(int a1);  /* 0x00547d74 */
int __fastcall sub_60547FDC(int a1);  /* 0x00547fdc */
int __fastcall sub_60548168(_DWORD *a1);  /* 0x00548168 */
int __fastcall sub_605483E0(int a1);  /* 0x005483e0 */
int __fastcall sub_60548530(int a1);  /* 0x00548530 */
int __fastcall sub_60548D68(int a1);  /* 0x00548d68 */
int __fastcall sub_60548E4C(int a1);  /* 0x00548e4c */
int __fastcall sub_60548F2C(int a1, unsigned int a2);  /* 0x00548f2c */
int __fastcall sub_60548F78(_DWORD *a1, int a2);  /* 0x00548f78 */
int __fastcall sub_605492C4(int a1);  /* 0x005492c4 */
int __fastcall sub_60549400(_DWORD *a1);  /* 0x00549400 */
int __fastcall sub_60549510(int a1);  /* 0x00549510 */
int __fastcall sub_6054963C(int a1);  /* 0x0054963c */
int __fastcall sub_60549854(unsigned int a1);  /* 0x00549854 */
int __fastcall sub_60549CD0(int a1);  /* 0x00549cd0 */
int __fastcall sub_60549E38(int a1);  /* 0x00549e38 */
int __fastcall sub_6054A104(int a1);  /* 0x0054a104 */
int __fastcall sub_6054A4B4(int a1);  /* 0x0054a4b4 */
int __fastcall sub_6054A638(int a1);  /* 0x0054a638 */
int __fastcall sub_6054AA50(int a1, _DWORD *a2);  /* 0x0054aa50 */
int __fastcall sub_6054AC20(float *a1);  /* 0x0054ac20 */
int __fastcall sub_6054B278(int a1);  /* 0x0054b278 */
int __fastcall sub_6054B3D8(int a1);  /* 0x0054b3d8 */
int __fastcall sub_6054B6A4(int a1);  /* 0x0054b6a4 */
int __fastcall sub_6054B964(int a1);  /* 0x0054b964 */
int __fastcall sub_6054BAC0(int a1);  /* 0x0054bac0 */
int __fastcall sub_6054BD8C(int a1);  /* 0x0054bd8c */
int __fastcall SE_SYS_DIALOGUE_OUT_ref_2(int a1);  /* 0x0054c204 */
int __fastcall sub_6054C2A8(int a1);  /* 0x0054c2a8 */
int __fastcall sub_6054C40C(int a1);  /* 0x0054c40c */
int __fastcall sub_6054C4A4(int a1);  /* 0x0054c4a4 */
int __fastcall sub_6054C5C0(int a1);  /* 0x0054c5c0 */
int __fastcall sub_6054C77C(_DWORD *a1);  /* 0x0054c77c */
int __fastcall sub_6054C8A0(_DWORD *a1);  /* 0x0054c8a0 */
int __fastcall sub_6054CD7C(int a1);  /* 0x0054cd7c */
int __fastcall sub_6054CDDC(int a1, int a2, char a3, char a4);  /* 0x0054cddc */
int __fastcall sub_6054CFE8(int a1);  /* 0x0054cfe8 */
int __fastcall sub_6054D0C8(int a1);  /* 0x0054d0c8 */
int __fastcall sub_6054D7A8(int a1);  /* 0x0054d7a8 */
int __fastcall sub_6054E158(int a1);  /* 0x0054e158 */
int __fastcall sub_6054E35C(_DWORD *a1);  /* 0x0054e35c */
int __fastcall sub_6054E8A8(int a1);  /* 0x0054e8a8 */
int __fastcall sub_6054EACC(int a1);  /* 0x0054eacc */
int __fastcall sub_6054EDD8(int a1);  /* 0x0054edd8 */
int __fastcall sub_6054EF70(int a1);  /* 0x0054ef70 */
int __fastcall sub_6054F3FC(int a1);  /* 0x0054f3fc */
int __fastcall sub_6054F674(_DWORD *a1);  /* 0x0054f674 */
int __fastcall sub_6054F8EC(int a1, _DWORD *a2, int a3, _DWORD *a4, int a5, int a6);  /* 0x0054f8ec */
int __fastcall sub_6054F998(int a1);  /* 0x0054f998 */
int __fastcall sub_6054FC18(int a1);  /* 0x0054fc18 */
int __fastcall sub_6054FDB0(int a1);  /* 0x0054fdb0 */
unsigned int __fastcall sub_6054FF28(int a1);  /* 0x0054ff28 */
int __fastcall sub_6055023C(int a1);  /* 0x0055023c */
int __fastcall sub_60550284(int a1, int a2);  /* 0x00550284 */
int __fastcall sub_60550438(int a1);  /* 0x00550438 */
int __fastcall sub_605505C0(int a1);  /* 0x005505c0 */
int __fastcall sub_60550808(int a1);  /* 0x00550808 */
int __fastcall sub_60550938(int a1);  /* 0x00550938 */
int __fastcall sub_605509B4(int a1);  /* 0x005509b4 */
int __fastcall sub_60551AEC(int a1);  /* 0x00551aec */
int __fastcall sub_60551EB8(int a1);  /* 0x00551eb8 */
int __fastcall sub_60552550(int a1);  /* 0x00552550 */
int __fastcall sub_60552778(_DWORD *a1);  /* 0x00552778 */
int __fastcall sub_6055297C(int a1);  /* 0x0055297c */
int __fastcall sub_60552C1C(int a1);  /* 0x00552c1c */
int __fastcall sub_60552E98(int a1);  /* 0x00552e98 */
int __fastcall sub_60553098(int a1);  /* 0x00553098 */
int __fastcall sub_60553130(int a1);  /* 0x00553130 */
int __fastcall sub_60553218(int a1, _DWORD *a2);  /* 0x00553218 */
int __fastcall sub_605532D0(int a1);  /* 0x005532d0 */
int __fastcall sub_60553A34(int a1, int a2);  /* 0x00553a34 */
int __fastcall sub_60553BD4(int a1, int a2);  /* 0x00553bd4 */
int __fastcall sub_60553CCC(int a1, int a2, unsigned int a3, unsigned int a4);  /* 0x00553ccc */
int __fastcall sub_60553F20(int a1);  /* 0x00553f20 */
int __fastcall sub_605540F4(_DWORD *a1);  /* 0x005540f4 */
int __fastcall sub_6055423C(int a1);  /* 0x0055423c */
int __fastcall sub_60554608(int a1, int a2);  /* 0x00554608 */
int __fastcall sub_60554900(_DWORD *a1);  /* 0x00554900 */
int __fastcall sub_60554A60(int a1);  /* 0x00554a60 */
int __fastcall sub_60554C24(int a1);  /* 0x00554c24 */
int __fastcall sub_60554D9C(int a1, int a2, _DWORD *a3, int a4, int a5, int a6, int a7, int a8);  /* 0x00554d9c */
int __fastcall sub_60555088(int a1);  /* 0x00555088 */
int __fastcall sub_60555134(int a1, int a2);  /* 0x00555134 */
int __fastcall sub_605555F0(int a1, int a2);  /* 0x005555f0 */
int __fastcall sub_60555638(int a1);  /* 0x00555638 */
int __fastcall sub_60556930(int a1);  /* 0x00556930 */
int __fastcall sub_60556C3C(_DWORD *a1);  /* 0x00556c3c */
int __fastcall sub_60556FD4(int a1);  /* 0x00556fd4 */
int __fastcall sub_605571E4(int a1);  /* 0x005571e4 */
int __fastcall sub_60557814(int a1, _DWORD *a2);  /* 0x00557814 */
int __fastcall sub_6055793C(int a1, unsigned int a2);  /* 0x0055793c */
int __fastcall sub_60557A20(int a1, unsigned int a2);  /* 0x00557a20 */
int __fastcall sub_60557B04(int a1);  /* 0x00557b04 */
int __fastcall sub_60557FE4(int a1);  /* 0x00557fe4 */
int __fastcall sub_60558180(int a1, char a2);  /* 0x00558180 */
int __fastcall sub_605585A4(int a1);  /* 0x005585a4 */
int __fastcall sub_60558728(_BYTE *a1);  /* 0x00558728 */
int __fastcall sub_605588AC(int a1, _DWORD *a2);  /* 0x005588ac */
int __fastcall sub_605588E8(int a1, int a2);  /* 0x005588e8 */
int __fastcall sub_60558964(int a1, int a2);  /* 0x00558964 */
int __fastcall sub_605589E4(_DWORD *a1, int a2);  /* 0x005589e4 */
int __fastcall sub_60558A30(_DWORD *a1, int a2);  /* 0x00558a30 */
int __fastcall sub_60558FBC(int a1);  /* 0x00558fbc */
int __fastcall sub_60559110(int a1);  /* 0x00559110 */
int __fastcall sub_60559448(int a1);  /* 0x00559448 */
int __fastcall sub_60559684(int a1);  /* 0x00559684 */
int __fastcall sub_6055991C(int a1);  /* 0x0055991c */
int __fastcall sub_60559D58(int a1);  /* 0x00559d58 */
int __fastcall sub_6055A000(int a1);  /* 0x0055a000 */
int __fastcall sub_6055A1D4(int a1);  /* 0x0055a1d4 */
int __fastcall sub_6055A5C4(int a1);  /* 0x0055a5c4 */
int __fastcall sub_6055AA4C(int a1);  /* 0x0055aa4c */
int __fastcall sub_6055ABE4(_DWORD *a1);  /* 0x0055abe4 */
int __fastcall sub_6055B43C(int a1);  /* 0x0055b43c */
int __fastcall sub_6055B894(int a1);  /* 0x0055b894 */
int __fastcall sub_6055B9EC(int a1);  /* 0x0055b9ec */
int __fastcall sub_6055BA48(_DWORD *a1);  /* 0x0055ba48 */
int __fastcall sub_6055BBAC(int a1);  /* 0x0055bbac */
int __fastcall sub_6055BE28(int a1);  /* 0x0055be28 */
int __fastcall sub_6055BE90(int a1, int a2);  /* 0x0055be90 */
int __fastcall sub_6055BF48(int a1);  /* 0x0055bf48 */
int __fastcall sub_6055C048(int a1);  /* 0x0055c048 */
int __fastcall sub_6055C1E0(unsigned int a1);  /* 0x0055c1e0 */
int __fastcall sub_6055C594(unsigned int a1);  /* 0x0055c594 */
int __fastcall sub_6055DC04(int a1);  /* 0x0055dc04 */
int __fastcall sub_6055DF38(int a1);  /* 0x0055df38 */
int __fastcall sub_6055E15C(_DWORD *a1);  /* 0x0055e15c */
int __fastcall sub_6055E394(int a1);  /* 0x0055e394 */
int __fastcall sub_6055E4FC(int a1);  /* 0x0055e4fc */
int __fastcall sub_6055E6D8(int a1);  /* 0x0055e6d8 */
int __fastcall sub_6055E970(int a1);  /* 0x0055e970 */
int __fastcall sub_6055ECDC(int a1);  /* 0x0055ecdc */
int __fastcall sub_6055EEAC(int a1);  /* 0x0055eeac */
int __fastcall sub_6055EFA8(_BYTE *a1);  /* 0x0055efa8 */
int __fastcall sub_6055F14C(int a1);  /* 0x0055f14c */
int __fastcall sub_6055F880(int result, int a2);  /* 0x0055f880 */
int __fastcall sub_6055F98C(int a1);  /* 0x0055f98c */
int __fastcall sub_60560298(int a1);  /* 0x00560298 */
int __fastcall sub_605603C4(int a1);  /* 0x005603c4 */
int __fastcall sub_605603FC(int a1, int a2, int a3, int a4);  /* 0x005603fc */
int __fastcall sub_60560654(unsigned int a1);  /* 0x00560654 */
int __fastcall sub_60560B78(int a1);  /* 0x00560b78 */
int __fastcall sub_60560E08(int a1);  /* 0x00560e08 */
int __fastcall sub_60560E3C(int a1);  /* 0x00560e3c */
unsigned int __fastcall sub_60560E80(int a1);  /* 0x00560e80 */
int __fastcall sub_60560F68(int a1, _DWORD *a2);  /* 0x00560f68 */
int __fastcall sub_60560FD4(int a1, _DWORD *a2);  /* 0x00560fd4 */
int __fastcall sub_60561088(int result, int a2, int a3);  /* 0x00561088 */
int __fastcall sub_605610BC(int a1, int a2);  /* 0x005610bc */
int __fastcall sub_605612AC(int a1);  /* 0x005612ac */
int __fastcall sub_6056143C(int a1);  /* 0x0056143c */
int __fastcall sub_605617DC(_DWORD *a1);  /* 0x005617dc */
int __fastcall sub_60561FA8(int a1);  /* 0x00561fa8 */
bool __fastcall sub_60562274(int a1);  /* 0x00562274 */
int __fastcall nnMain(nn::os *a1);  /* 0x00562698 */
int __fastcall sub_60562ABC(int a1);  /* 0x00562abc */
bool __fastcall sub_605632C0(int a1);  /* 0x005632c0 */
int __fastcall sub_605635AC(int a1, int a2, int a3);  /* 0x005635ac */
int __fastcall sub_60563A0C(int a1);  /* 0x00563a0c */
int __fastcall sub_60563AB8(_DWORD *a1);  /* 0x00563ab8 */
int __fastcall sub_60563B3C(int a1);  /* 0x00563b3c */
int __fastcall sub_60563BB8(int a1, int a2);  /* 0x00563bb8 */
int __fastcall sub_60563C28(_DWORD *a1);  /* 0x00563c28 */
unsigned int __fastcall sub_605641B4(int a1);  /* 0x005641b4 */
int __fastcall sub_605643B8(int a1);  /* 0x005643b8 */
int __fastcall sub_60564734(int result);  /* 0x00564734 */
int __fastcall sub_60564834(int a1);  /* 0x00564834 */
int __fastcall sub_605649F8(int a1);  /* 0x005649f8 */
int __fastcall sub_60564BFC(int a1);  /* 0x00564bfc */
int __fastcall sub_60566104(int a1);  /* 0x00566104 */
int __fastcall sub_60566310(int a1);  /* 0x00566310 */
int __fastcall sub_60566490(int a1);  /* 0x00566490 */
int __fastcall sub_60566EDC(int a1);  /* 0x00566edc */
int __fastcall sub_605676DC(_DWORD *a1);  /* 0x005676dc */
int __fastcall sub_6056782C(int a1);  /* 0x0056782c */
int __fastcall obj_block_ref(_DWORD *a1);  /* 0x005682a8 */
int __fastcall sub_6056847C(int a1);  /* 0x0056847c */
bool __fastcall sub_6056A434(int a1);  /* 0x0056a434 */
bool __fastcall sub_6056A970(int a1);  /* 0x0056a970 */
int __fastcall sub_6056AF34(int a1);  /* 0x0056af34 */
int __fastcall sub_6056B158(int *a1);  /* 0x0056b158 */
int __fastcall SE_OBJ_BLOCK_HELP_APPEAL_ref(int a1);  /* 0x0056b308 */
int __fastcall sub_6056B4E4(int a1);  /* 0x0056b4e4 */
int __fastcall sub_6056B740(int a1);  /* 0x0056b740 */
int __fastcall sub_6056CA14(_DWORD *a1);  /* 0x0056ca14 */
int __fastcall sub_6056CEBC(int a1, int a2);  /* 0x0056cebc */
int __fastcall sub_6056CFFC(int a1);  /* 0x0056cffc */
int __fastcall sub_6056D17C(int a1, char *a2);  /* 0x0056d17c */
int __fastcall sub_6056D330(int a1, int a2);  /* 0x0056d330 */
int __fastcall sub_6056D564(int a1, int a2);  /* 0x0056d564 */
int __fastcall sub_6056D678(int a1);  /* 0x0056d678 */
int __fastcall sub_6056DA0C(int a1);  /* 0x0056da0c */
int __fastcall sub_6056DC3C(int a1, int a2);  /* 0x0056dc3c */
int __fastcall sub_6056DF3C(int a1);  /* 0x0056df3c */
int __fastcall SE_OBJ_BOUND_BLOCK_JUMP_ref_3(int a1, int a2);  /* 0x0056e45c */
int __fastcall sub_6056EAA4(int a1);  /* 0x0056eaa4 */
int __fastcall sub_6056F748(int a1, int a2);  /* 0x0056f748 */
int __fastcall sub_6056F9A4(int a1);  /* 0x0056f9a4 */
int __fastcall sub_60570C64(int a1, int a2);  /* 0x00570c64 */
int __fastcall sub_60570EA8(_DWORD *a1);  /* 0x00570ea8 */
int __fastcall sub_605715F0(__int64 *a1);  /* 0x005715f0 */
int __fastcall sub_605736E0(_DWORD *a1);  /* 0x005736e0 */
int __fastcall obj_block_ref_2(int a1);  /* 0x00574730 */
int __fastcall sub_60574F00(int a1);  /* 0x00574f00 */
int __fastcall sub_605750F8(int a1);  /* 0x005750f8 */
int __fastcall sub_6057574C(int a1);  /* 0x0057574c */
int __fastcall sub_6057589C(int a1, int a2);  /* 0x0057589c */
int __fastcall sub_60576A00(int a1);  /* 0x00576a00 */
int __fastcall sub_605791F0(int a1);  /* 0x005791f0 */
int __fastcall sub_60579AE4(int a1);  /* 0x00579ae4 */
int __fastcall sub_60579D4C(int a1);  /* 0x00579d4c */
int __fastcall sub_60579FC8(_DWORD *a1);  /* 0x00579fc8 */
int __fastcall sub_6057A064(int a1);  /* 0x0057a064 */
int __fastcall sub_6057A244(_DWORD *a1, int a2);  /* 0x0057a244 */
int __fastcall sub_6057A2D0(_DWORD *a1, int a2);  /* 0x0057a2d0 */
void __fastcall sub_6057A360(int a1, char a2);  /* 0x0057a360 */
bool __fastcall sub_6057A3E4(int a1);  /* 0x0057a3e4 */
int __fastcall sub_6057A460(int a1);  /* 0x0057a460 */
int __fastcall sub_6057A4C4(int a1);  /* 0x0057a4c4 */
int __fastcall sub_6057A67C(int a1, int a2, int a3, int a4);  /* 0x0057a67c */
int __fastcall sub_6057A6E4(int a1);  /* 0x0057a6e4 */
int __fastcall sub_6057A8A4(int a1);  /* 0x0057a8a4 */
int __fastcall sub_6057AA48(_DWORD *a1);  /* 0x0057aa48 */
int __fastcall sub_6057AAC0(int a1, float *a2);  /* 0x0057aac0 */
int __fastcall sub_6057AC54(int a1);  /* 0x0057ac54 */
int __fastcall sub_6057AC94(int a1, int a2, int a3);  /* 0x0057ac94 */
int __fastcall sub_6057AEC8(int result);  /* 0x0057aec8 */
int __fastcall balloon_coin_model_ref(int a1);  /* 0x0057c140 */
int __fastcall balloon_coin_model_ref_2(int a1);  /* 0x0057c53c */
int __fastcall sub_6057CA4C(_DWORD *a1);  /* 0x0057ca4c */
int __fastcall sub_6057CD28(int a1);  /* 0x0057cd28 */
int __fastcall sub_6057D09C(int a1);  /* 0x0057d09c */
int __fastcall sub_6057D26C(int a1);  /* 0x0057d26c */
int __fastcall sub_6057D990(_DWORD *a1);  /* 0x0057d990 */
int __fastcall sub_6057DB40(int a1);  /* 0x0057db40 */
int __fastcall sub_6057E414(int a1);  /* 0x0057e414 */
int __fastcall sub_6057E594(_DWORD *a1);  /* 0x0057e594 */
int __fastcall sub_605811C4(int a1);  /* 0x005811c4 */
int __fastcall sub_60582544(int a1);  /* 0x00582544 */
__int64 __fastcall sub_605825E0(__int64 result);  /* 0x005825e0 */
int __fastcall sub_6058262C(int a1, float *a2, int a3, int a4, int a5);  /* 0x0058262c */
int __fastcall sub_605827B8(int a1);  /* 0x005827b8 */
int __fastcall sub_60582938(int a1, int a2);  /* 0x00582938 */
int __fastcall sub_605829C8(int a1, int a2);  /* 0x005829c8 */
int __fastcall sub_60582A68(int a1, int a2);  /* 0x00582a68 */
int __fastcall sub_60583000(int a1, int a2, int a3, int a4, int a5);  /* 0x00583000 */
int __fastcall sub_60583208(int a1, int a2, int a3);  /* 0x00583208 */
int __fastcall sub_60583490(int a1, int a2, int a3);  /* 0x00583490 */
int __fastcall sub_6058368C(int a1, int a2);  /* 0x0058368c */
int __fastcall sub_60583754(int a1, float *a2);  /* 0x00583754 */
void __fastcall sub_605839E8(int a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, int a6);  /* 0x005839e8 */
int __fastcall sub_60583B70(int a1, int *a2, char a3, int a4, int a5, int a6);  /* 0x00583b70 */
int __fastcall sub_60583E78(int a1, int a2);  /* 0x00583e78 */
int __fastcall sub_60584408(int a1, unsigned int a2, int a3);  /* 0x00584408 */
int __fastcall sub_605844A4(int result, int a2, int *a3, unsigned int a4, int a5);  /* 0x005844a4 */
int __fastcall sub_60584678(int a1, float *a2, int a3);  /* 0x00584678 */
int __fastcall sub_60584834(int a1, _BYTE *a2, int a3);  /* 0x00584834 */
int __fastcall sub_60584938(int a1, int a2, int a3, unsigned int a4, int a5, int a6, int a7);  /* 0x00584938 */
int __fastcall sub_60584FEC(int a1, float *a2);  /* 0x00584fec */
int __fastcall sub_60585110(int result, int a2, int a3, int a4, int a5, char a6);  /* 0x00585110 */
int __fastcall sub_60585214(int a1, int a2, char a3);  /* 0x00585214 */
int __fastcall sub_605854EC(int a1, int a2, int a3);  /* 0x005854ec */
int __fastcall sub_6058568C(int a1, int a2, int a3);  /* 0x0058568c */
int __fastcall star_coinA_ref_2(int a1);  /* 0x00585c68 */
int __fastcall sub_60585D84(_DWORD **a1);  /* 0x00585d84 */
int __fastcall sub_605868C0(int a1);  /* 0x005868c0 */
int __fastcall para_receive_ref_2(int a1);  /* 0x005874a4 */
int __fastcall sub_60587884(_DWORD *a1);  /* 0x00587884 */
int __fastcall sub_605879E4(_DWORD *a1);  /* 0x005879e4 */
int __fastcall sub_60587F34(_BYTE *a1);  /* 0x00587f34 */
int __fastcall sub_60587FDC(int a1, int a2);  /* 0x00587fdc */
int __fastcall sub_60588188(int a1, float *a2, int a3);  /* 0x00588188 */
int __fastcall sub_60588290(_DWORD *a1);  /* 0x00588290 */
int __fastcall SE_OBJ_COIN_APP_ref_2(int a1);  /* 0x00588c3c */
int __fastcall sub_60589E88(int result, int a2, int a3);  /* 0x00589e88 */
int __fastcall sub_6058A268(float *a1);  /* 0x0058a268 */
int __fastcall sub_6058BC4C(int a1);  /* 0x0058bc4c */
int __fastcall SE_OBJ_GET_COIN_SHOWER_ref(int a1);  /* 0x0058bee4 */
int __fastcall SE_OBJ_COIN_POP_UP_ref(int a1);  /* 0x0058d928 */
int __fastcall sub_6058F13C(int a1, int a2);  /* 0x0058f13c */
int __fastcall sub_6058F1F0(int a1);  /* 0x0058f1f0 */
int __fastcall sub_6058FA30(int *a1);  /* 0x0058fa30 */
int __fastcall sub_60590014(int a1);  /* 0x00590014 */
int __fastcall ship_bottom_waku_ref(int a1);  /* 0x00590af4 */
int __fastcall sub_60591278(int *a1);  /* 0x00591278 */
int __fastcall sub_60591598(int a1);  /* 0x00591598 */
int __fastcall sub_6059170C(int a1);  /* 0x0059170c */
int __fastcall SE_EMY_SHELL_OPEN_ref(int a1);  /* 0x00592f00 */
int __fastcall SE_EMY_SHELL_OPEN_ref_2(int a1);  /* 0x00593414 */
int __fastcall sub_6059423C(_DWORD *a1);  /* 0x0059423c */
int __fastcall sub_605943EC(int a1, int a2);  /* 0x005943ec */
int __fastcall sub_6059499C(int result);  /* 0x0059499c */
int __fastcall sub_60595A64(int result, int a2);  /* 0x00595a64 */
int __fastcall sub_60595B90(int a1);  /* 0x00595b90 */
int __fastcall sub_60595CB8(_DWORD *a1);  /* 0x00595cb8 */
float __fastcall sub_6059614C(int a1);  /* 0x0059614c */
bool __fastcall sub_6059634C(int a1);  /* 0x0059634c */
int __fastcall sub_60596650(int result);  /* 0x00596650 */
void __fastcall sub_6059680C(int a1);  /* 0x0059680c */
void __fastcall sub_60596D08(int a1);  /* 0x00596d08 */
int __fastcall sub_60597068(int result);  /* 0x00597068 */
int __fastcall sub_6059719C(int result);  /* 0x0059719c */
int __fastcall sub_605972D0(int result);  /* 0x005972d0 */
int __fastcall sub_60597414(int result);  /* 0x00597414 */
int __fastcall sub_60597558(int a1);  /* 0x00597558 */
int __fastcall sub_605977BC(int a1);  /* 0x005977bc */
int __fastcall sub_60597A20(int a1);  /* 0x00597a20 */
int __fastcall Actor_chibiyoshi_ship_build(int a1);  /* 0x00598524 */
int __fastcall sub_605986B0(int a1, int a2);  /* 0x005986b0 */
int __fastcall sub_60598BD4(int a1);  /* 0x00598bd4 */
int __fastcall sub_605992C4(int a1);  /* 0x005992c4 */
int __fastcall SE_PLY_CH_YOSHI_BLLN_FLY_ref(int a1);  /* 0x00599424 */
bool __fastcall sub_605999E8(int a1);  /* 0x005999e8 */
int __fastcall sub_60599C58(int a1);  /* 0x00599c58 */
int __fastcall sub_6059A758(int a1);  /* 0x0059a758 */
bool __fastcall sub_6059B0CC(int a1);  /* 0x0059b0cc */
int __fastcall sub_6059B720(int a1, int *a2);  /* 0x0059b720 */
int __fastcall sub_6059B854(int a1);  /* 0x0059b854 */
int __fastcall sub_6059B974(int a1, int a2);  /* 0x0059b974 */
int __fastcall sub_6059BBE0(int a1);  /* 0x0059bbe0 */
int __fastcall sub_6059BDF8(int a1, _DWORD *a2, int a3);  /* 0x0059bdf8 */
int __fastcall sub_6059BFA4(int a1, int a2, int a3);  /* 0x0059bfa4 */
int __fastcall sub_6059C0D8(float *a1);  /* 0x0059c0d8 */
int __fastcall sub_6059C584(int a1);  /* 0x0059c584 */
int __fastcall sub_6059C8D8(int a1);  /* 0x0059c8d8 */
int __fastcall sub_6059CBF4(_BYTE *a1);  /* 0x0059cbf4 */
int __fastcall sub_6059CC54(int a1);  /* 0x0059cc54 */
int __fastcall sub_6059DD28(int a1);  /* 0x0059dd28 */
int __fastcall fire_rot_cannon_ref(int a1);  /* 0x0059dec4 */
int __fastcall sub_6059E220(int a1);  /* 0x0059e220 */
int __fastcall sub_6059E5AC(int result);  /* 0x0059e5ac */
void __fastcall sub_6059EBB0(int a1);  /* 0x0059ebb0 */
int __fastcall Actor_bana_2_build(int a1);  /* 0x0059ee3c */
int __fastcall sub_6059FA44(_DWORD *a1, unsigned int *a2, _DWORD *a3, int a4);  /* 0x0059fa44 */
int __fastcall sub_605A1410(_DWORD *a1);  /* 0x005a1410 */
int __fastcall sub_605A1818(int result);  /* 0x005a1818 */
int __fastcall sub_605A25B4(int a1);  /* 0x005a25b4 */
int __fastcall sub_605A2714(int a1);  /* 0x005a2714 */
void __fastcall sub_605A2A98(_DWORD *a1);  /* 0x005a2a98 */
int __fastcall TerrainActor_initLocation(int a1);  /* 0x005a4a68 */
int __fastcall sub_605A4D50(float *a1);  /* 0x005a4d50 */
int __fastcall TerrainActor_onExecute(int a1);  /* 0x005a4dec */
int __fastcall sub_605A4EAC(int a1);  /* 0x005a4eac */
int __fastcall TerrainActor_onDraw(int a1, int a2, int a3, int a4);  /* 0x005a5098 */
int __fastcall sub_605A512C(int a1);  /* 0x005a512c */
int __fastcall sub_605A51B0(int a1, int a2);  /* 0x005a51b0 */
int __fastcall sub_605A53E4(int a1);  /* 0x005a53e4 */
int __fastcall TerrainActor_vfD4(int result);  /* 0x005a548c */
int __fastcall TerrainActor_vfE0(int result);  /* 0x005a5594 */
float __fastcall TerrainActor_vfE4(int a1);  /* 0x005a55ac */
bool __fastcall TerrainActor_checkRTTi(int a1, int a2);  /* 0x005a5660 */
void __fastcall TerrainActor_dtor(_DWORD *a1);  /* 0x005a5764 */
int __fastcall TerrainActor_dtorFree(_DWORD *a1);  /* 0x005a5808 */
int __fastcall sub_605A6A98(int a1);  /* 0x005a6a98 */
int __fastcall sub_605A6BFC(int a1);  /* 0x005a6bfc */
void __fastcall sub_605A6FE0(int a1, int a2, int a3);  /* 0x005a6fe0 */
int __fastcall SE_PLY_HIT_BROS_FLR_BOUND_ref(int a1, int a2, int *a3);  /* 0x005a72a8 */
int __fastcall sub_605A788C(int **a1);  /* 0x005a788c */
int __fastcall Lava_onCreate(int a1);  /* 0x005a7d68 */
int __fastcall sub_605A8104(_DWORD *a1);  /* 0x005a8104 */
int __fastcall sub_605A8604(int result);  /* 0x005a8604 */
int __fastcall SE_AMB_MAGMA_RISE_ref_2(int a1);  /* 0x005a87d0 */
int __fastcall SE_AMB_MAGMA_RISE_ref_3(int a1);  /* 0x005a8bfc */
int __fastcall sub_605A955C(int **a1);  /* 0x005a955c */
int __fastcall Poison_onCreate(int a1);  /* 0x005a9a20 */
int __fastcall Poison_onExecute(int a1);  /* 0x005aa034 */
int __fastcall SE_AMB_POISON_RISE_ref(int a1);  /* 0x005aa038 */
bool __fastcall Poison_checkRTTI(int a1, int a2);  /* 0x005aa430 */
int __fastcall Poison_dtorFree(_DWORD *a1);  /* 0x005aa5a8 */
int __fastcall Quicksand_onCreate(int a1);  /* 0x005aa7a4 */
int __fastcall sub_605AAB4C(_DWORD **a1);  /* 0x005aab4c */
int __fastcall sub_605AB664(int a1);  /* 0x005ab664 */
int __fastcall sub_605AC130(int a1);  /* 0x005ac130 */
int __fastcall sub_605AC470(int a1);  /* 0x005ac470 */
int __fastcall Water_onExecute(int a1);  /* 0x005ac75c */
int __fastcall Water_onDraw(int a1);  /* 0x005ac930 */
bool __fastcall Water_checkRTTI(int a1, int a2);  /* 0x005aca40 */
int __fastcall Water_dtorFree(_DWORD *a1);  /* 0x005acbb8 */
int __fastcall sub_605ACD1C(int a1);  /* 0x005acd1c */
int __fastcall sub_605AD678(int result);  /* 0x005ad678 */
unsigned int __fastcall sub_605AD9C8(int a1);  /* 0x005ad9c8 */
int __fastcall SE_OBJ_DAIKONBOU_L_SIGN_ref(int a1);  /* 0x005adb00 */
int __fastcall sub_605ADFF0(_DWORD *a1);  /* 0x005adff0 */
int __fastcall sub_605AE18C(int *a1);  /* 0x005ae18c */
int __fastcall sub_605AE4E4(_DWORD *a1, int *a2, int a3);  /* 0x005ae4e4 */
int __fastcall sub_605AE948(int a1);  /* 0x005ae948 */
int __fastcall sub_605AE9BC(float *a1);  /* 0x005ae9bc */
int __fastcall sub_605AEAD4(_BYTE *a1);  /* 0x005aead4 */
int __fastcall sub_605AEB58(int a1);  /* 0x005aeb58 */
int __fastcall sub_605B07F8(int *a1);  /* 0x005b07f8 */
int __fastcall sub_605B0B80(int a1, int *a2, int *a3, int a4);  /* 0x005b0b80 */
int __fastcall sub_605B1404(int a1);  /* 0x005b1404 */
int __fastcall sub_605B1564(int a1);  /* 0x005b1564 */
int __fastcall sub_605B2460(float *a1);  /* 0x005b2460 */
int __fastcall sub_605B2C10(int result);  /* 0x005b2c10 */
int __fastcall sub_605B2D70(int result);  /* 0x005b2d70 */
bool __fastcall sub_605B2DE8(int a1);  /* 0x005b2de8 */
unsigned int __fastcall sub_605B30EC(int a1, int a2);  /* 0x005b30ec */
int __fastcall sub_605B3224(int a1, _BYTE *a2);  /* 0x005b3224 */
int __fastcall sub_605B348C(int a1, _BYTE *a2);  /* 0x005b348c */
int __fastcall sub_605B3E18(int a1, unsigned __int8 *a2);  /* 0x005b3e18 */
int __fastcall sub_605B4110(int a1, unsigned __int8 *a2, int a3);  /* 0x005b4110 */
int __fastcall sub_605B434C(int a1, int a2, int a3);  /* 0x005b434c */
int __fastcall sub_605B4548(int a1, int a2, int a3, int a4, int a5);  /* 0x005b4548 */
int __fastcall sub_605B4930(int a1, unsigned __int8 *a2, int a3);  /* 0x005b4930 */
int __fastcall sub_605B4CC4(int a1);  /* 0x005b4cc4 */
int __fastcall sub_605B5054(int a1);  /* 0x005b5054 */
int __fastcall sub_605B5274(_DWORD *a1);  /* 0x005b5274 */
int __fastcall sub_605B5A3C(int a1, int a2, int a3, int a4, int a5);  /* 0x005b5a3c */
int __fastcall sub_605B5BDC(_DWORD *a1, _DWORD *a2);  /* 0x005b5bdc */
int __fastcall sub_605B5FA8(int a1, _DWORD *a2, int a3, int a4, int a5);  /* 0x005b5fa8 */
int __fastcall sub_605B6364(int result, int *a2, int a3);  /* 0x005b6364 */
int __fastcall Actor_charenjimodoexclusive_buroku_build(int a1);  /* 0x005b700c */
void __fastcall sub_605B750C(_DWORD *a1);  /* 0x005b750c */
int __fastcall sub_605B774C(_DWORD *a1, int a2, unsigned __int8 a3, unsigned __int8 a4);  /* 0x005b774c */
int __fastcall sub_605B77BC(_DWORD *a1);  /* 0x005b77bc */
int __fastcall sub_605B7974(_DWORD *a1);  /* 0x005b7974 */
unsigned int __fastcall sub_605B7AA0(int a1, float *a2);  /* 0x005b7aa0 */
int __fastcall sub_605B7C10(int a1, int a2, int a3, int a4);  /* 0x005b7c10 */
int __fastcall sub_605B7D58(int a1);  /* 0x005b7d58 */
int __fastcall SE_OBJ_TOUCH_PIKA_ASHIBA_ref(int a1, int a2);  /* 0x005b86e4 */
int __fastcall sub_605B8E44(int a1, int a2, int a3);  /* 0x005b8e44 */
int __fastcall sub_605B9044(int a1, float *a2);  /* 0x005b9044 */
int __fastcall sub_605B9130(int a1, int a2, _BYTE *a3);  /* 0x005b9130 */
int __fastcall sub_605B9974(int a1, int a2);  /* 0x005b9974 */
int __fastcall sub_605B9AD4(int a1, int a2, int a3, int a4);  /* 0x005b9ad4 */
int __fastcall sub_605B9CAC(int a1, int a2);  /* 0x005b9cac */
int __fastcall sub_605B9F30(int a1, unsigned int a2);  /* 0x005b9f30 */
int __fastcall sub_605B9FEC(int a1, float *a2, int a3);  /* 0x005b9fec */
int __fastcall sub_605BA078(int result, int a2, int a3, int a4);  /* 0x005ba078 */
void __fastcall sub_605BB1D4(_DWORD *a1);  /* 0x005bb1d4 */
unsigned int __fastcall sub_605BB524(unsigned int result, int a2, int a3, unsigned int a4, unsigned int a5);  /* 0x005bb524 */
int __fastcall sub_605BB690(int a1, float *a2);  /* 0x005bb690 */
int __fastcall sub_605BB7F0(int a1);  /* 0x005bb7f0 */
int __fastcall sub_605BB858(int a1, int a2, int a3, int a4);  /* 0x005bb858 */
int __fastcall sub_605BB8D0(int a1);  /* 0x005bb8d0 */
int __fastcall sub_605BB950(int result, int a2);  /* 0x005bb950 */
int __fastcall SE_OBJ_TSUTA_APPEAR_ref(int a1);  /* 0x005bbb64 */
int __fastcall head_root_ref(int a1);  /* 0x005bbd3c */
int __fastcall sub_605BC1B4(_DWORD *a1);  /* 0x005bc1b4 */
int __fastcall sub_605BC7F4(int a1);  /* 0x005bc7f4 */
int __fastcall obj_coin_blue_ref_2(int a1);  /* 0x005bd1a0 */
int __fastcall sub_605BE52C(int a1, int a2);  /* 0x005be52c */
int __fastcall sub_605BE584(int a1, int a2, int a3, int a4);  /* 0x005be584 */
unsigned int __fastcall sub_605BE604(unsigned __int8 *a1, int a2);  /* 0x005be604 */
unsigned int __fastcall sub_605BE780(unsigned __int8 *a1, int a2);  /* 0x005be780 */
int __fastcall sub_605BE848(int a1, int a2, float *a3);  /* 0x005be848 */
int __fastcall sub_605BE9F4(int a1);  /* 0x005be9f4 */
int __fastcall sub_605BEAD0(int a1);  /* 0x005bead0 */
int __fastcall sub_605BEC5C(int a1);  /* 0x005bec5c */
int __fastcall sub_605BECA4(int a1);  /* 0x005beca4 */
int __fastcall sub_605BECEC(int a1, int a2, int a3);  /* 0x005becec */
int __fastcall sub_605BEF74(int a1, float *a2, int a3);  /* 0x005bef74 */
int __fastcall sub_605BF1F8(int a1, int a2, _BYTE *a3, float *a4);  /* 0x005bf1f8 */
int __fastcall sub_605BF51C(int a1);  /* 0x005bf51c */
int __fastcall sub_605BF550(int a1);  /* 0x005bf550 */
int __fastcall sub_605BF5E0(int a1);  /* 0x005bf5e0 */
int __fastcall sub_605BF660(int a1, int a2, int a3, int a4, int a5);  /* 0x005bf660 */
int __fastcall sub_605BF988(_DWORD **a1, unsigned int *a2, float *a3);  /* 0x005bf988 */
int __fastcall sub_605BFAE0(int a1, int *a2, _DWORD *a3, _DWORD *a4);  /* 0x005bfae0 */
int __fastcall SE_BOSS_KOOPA_FLOOR_BREAK_ref(int a1);  /* 0x005bfd54 */
int __fastcall sub_605C0258(int a1);  /* 0x005c0258 */
int __fastcall sub_605C10B4(int a1);  /* 0x005c10b4 */
int __fastcall sub_605C11C8(int a1, char a2, char a3, int a4);  /* 0x005c11c8 */
int __fastcall sub_605C134C(int a1, int a2);  /* 0x005c134c */
int __fastcall sub_605C1DA0(int a1);  /* 0x005c1da0 */
int __fastcall sub_605C1EE0(int a1);  /* 0x005c1ee0 */
int __fastcall sub_605C2534(float *a1);  /* 0x005c2534 */
int __fastcall sub_605C292C(int a1);  /* 0x005c292c */
int __fastcall sub_605C2CCC(int a1);  /* 0x005c2ccc */
int __fastcall sub_605C2DE8(int a1, int a2, _BOOL4 *a3);  /* 0x005c2de8 */
int __fastcall sub_605C2F58(int a1, int a2, _BOOL4 *a3);  /* 0x005c2f58 */
int __fastcall sub_605C32F8(int a1);  /* 0x005c32f8 */
int __fastcall sub_605C399C(int a1);  /* 0x005c399c */
int __fastcall sub_605C4308(int a1);  /* 0x005c4308 */
int __fastcall sub_605C5BA4(int a1);  /* 0x005c5ba4 */
int __fastcall sub_605C5E58(int a1, int a2);  /* 0x005c5e58 */
signed int __fastcall sub_605C5FA8(signed int result, int *a2, float *a3);  /* 0x005c5fa8 */
int __fastcall sub_605C6508(signed int a1, int a2, int a3);  /* 0x005c6508 */
int __fastcall sub_605C69F0(int a1);  /* 0x005c69f0 */
int __fastcall sub_605C6B58(_DWORD *a1);  /* 0x005c6b58 */
int __fastcall sub_605C6EB4(int a1, int a2, int a3);  /* 0x005c6eb4 */
int __fastcall sub_605C6F0C(int *a1, float *a2, float *a3);  /* 0x005c6f0c */
int __fastcall Actor_pipe_big_RDash_build(int a1);  /* 0x005c7114 */
unsigned int __fastcall SE_PLY_CANNON_READY_ref(int a1, int a2, int a3, int a4);  /* 0x005c7350 */
bool __fastcall sub_605C7768(int a1, int a2);  /* 0x005c7768 */
int __fastcall sub_605C7C70(int a1);  /* 0x005c7c70 */
unsigned int __fastcall sub_605C7E54(int a1);  /* 0x005c7e54 */
int __fastcall sub_605C8194(int a1);  /* 0x005c8194 */
int __fastcall sub_605C999C(_DWORD *a1);  /* 0x005c999c */
int __fastcall sub_605C9ACC(int a1, int a2);  /* 0x005c9acc */
int __fastcall sub_605C9C40(int a1, int a2);  /* 0x005c9c40 */
int __fastcall sub_605C9CA0(int a1);  /* 0x005c9ca0 */
int __fastcall sub_605C9CD0(int a1);  /* 0x005c9cd0 */
int __fastcall sub_605C9D04(int a1);  /* 0x005c9d04 */
int __fastcall sub_605C9DD8(_DWORD *a1);  /* 0x005c9dd8 */
int __fastcall sub_605C9E44(int a1);  /* 0x005c9e44 */
int __fastcall sub_605C9FEC(int a1);  /* 0x005c9fec */
int __fastcall sub_605CA4FC(int a1, int a2);  /* 0x005ca4fc */
int __fastcall block_taru_ref(int *a1);  /* 0x005ca760 */
int __fastcall sub_605CAD30(int a1, int a2, int a3);  /* 0x005cad30 */
int __fastcall sub_605CB2F4(int a1, int a2);  /* 0x005cb2f4 */
int __fastcall SE_OBJ_TARU_ref(int a1);  /* 0x005cb910 */
int __fastcall sub_605CC294(int a1);  /* 0x005cc294 */
int __fastcall sub_605CC390(int a1);  /* 0x005cc390 */
int __fastcall sub_605CC4E0(int a1, int a2);  /* 0x005cc4e0 */
__int64 __fastcall sub_605CC5A0(__int64 result);  /* 0x005cc5a0 */
int __fastcall sub_605CC6E4(_DWORD *a1, int a2, __int16 a3);  /* 0x005cc6e4 */
int __fastcall sub_605CC72C(int a1, int a2);  /* 0x005cc72c */
int __fastcall sub_605CC78C(int a1, float *a2);  /* 0x005cc78c */
int __fastcall sub_605CC878(int a1);  /* 0x005cc878 */
int __fastcall sub_605CC924(int result);  /* 0x005cc924 */
int __fastcall sub_605CC95C(int a1);  /* 0x005cc95c */
unsigned int __fastcall sub_605CCA10(int a1);  /* 0x005cca10 */
int __fastcall sub_605CCAD4(int a1);  /* 0x005ccad4 */
int __fastcall sub_605CCFC4(int a1, int a2);  /* 0x005ccfc4 */
int __fastcall sub_605CDAD4(int a1, _QWORD *a2);  /* 0x005cdad4 */
int __fastcall sub_605CDB34(int a1);  /* 0x005cdb34 */
int __fastcall sub_605CDB68(int a1);  /* 0x005cdb68 */
int __fastcall Actor_mid_pendulum_build(int a1);  /* 0x005ce40c */
int __fastcall sub_605CE780(int result, _DWORD *a2, int a3, int a4, char a5, int a6, int a7, char a8, int a9, int a10);  /* 0x005ce780 */
int __fastcall sub_605CE840(int result, _DWORD *a2, _QWORD *a3, int a4);  /* 0x005ce840 */
int __fastcall sub_605CE9B4(int a1, int a2);  /* 0x005ce9b4 */
int __fastcall sub_605CEA9C(int a1);  /* 0x005cea9c */
int __fastcall sub_605CEB6C(int a1);  /* 0x005ceb6c */
int __fastcall TileGod_onCreate(int a1);  /* 0x005cef60 */
int __fastcall TileGod_onExecute(int a1);  /* 0x005cf660 */
int __fastcall sub_605CF690(int a1);  /* 0x005cf690 */
bool __fastcall TileGod_checkRTTI(int a1, int a2);  /* 0x005cf804 */
int __fastcall TileGod_dtorFree(Actor *a1);  /* 0x005cf908 */
int __fastcall sub_605D0024(int a1);  /* 0x005d0024 */
int __fastcall sub_605D006C(int result);  /* 0x005d006c */
int __fastcall sub_605D00B8(int a1);  /* 0x005d00b8 */
int __fastcall sub_605D0140(_DWORD *a1);  /* 0x005d0140 */
int __fastcall sub_605D01D4(int a1);  /* 0x005d01d4 */
int __fastcall sub_605D0218(int a1);  /* 0x005d0218 */
int __fastcall sub_605D030C(int a1);  /* 0x005d030c */
int __fastcall sub_605D0414(int a1);  /* 0x005d0414 */
int __fastcall sub_605D0580(int a1);  /* 0x005d0580 */
int __fastcall sub_605D05CC(int a1);  /* 0x005d05cc */
int __fastcall sub_605D0678(int a1);  /* 0x005d0678 */
int __fastcall wait_sea_ref(int a1);  /* 0x005d0ef4 */
int __fastcall middle_flag_ref(int a1);  /* 0x005d1344 */
int __fastcall sub_605D1F54(int a1, unsigned int a2, int a3);  /* 0x005d1f54 */
int __fastcall Actor_chibiyoshi_2_build(int a1);  /* 0x005d27d8 */
int __fastcall SE_PLY_CH_YOSHI_BBL_CATCH_ref(int a1);  /* 0x005d2d80 */
int __fastcall sub_605D3BA0(_DWORD *a1);  /* 0x005d3ba0 */
int __fastcall sub_605D3D9C(int a1);  /* 0x005d3d9c */
float __fastcall sub_605D40F0(int a1);  /* 0x005d40f0 */
int __fastcall sub_605D477C(int a1, int a2);  /* 0x005d477c */
int __fastcall sub_605D47E0(int a1, int a2);  /* 0x005d47e0 */
int __fastcall sub_605D4920(int a1, float *a2);  /* 0x005d4920 */
void __fastcall sub_605D4BF4(int a1, _DWORD *a2);  /* 0x005d4bf4 */
int __fastcall sub_605D4F08(int result, float *a2, float *a3, float *a4);  /* 0x005d4f08 */
unsigned int __fastcall sub_605D5164(unsigned int result, int a2, _DWORD *a3);  /* 0x005d5164 */
int __fastcall sub_605D532C(int result, int a2, int a3);  /* 0x005d532c */
int __fastcall sub_605D547C(int a1, int a2, int a3);  /* 0x005d547c */
int __fastcall sub_605D55EC(_DWORD *a1, int a2);  /* 0x005d55ec */
int __fastcall sub_605D56D4(int a1, _DWORD *a2, int a3, int a4);  /* 0x005d56d4 */
int __fastcall SE_PLY_CH_YOSHI_HIT_ENEMY_ref_2(int a1);  /* 0x005d69e4 */
int __fastcall BabyYoshiBaseProbably_ctor(int a1, int a2, int a3);  /* 0x005d7040 */
int __fastcall sub_605D7738(int a1);  /* 0x005d7738 */
int __fastcall sub_605D796C(int result);  /* 0x005d796c */
int __fastcall sub_605D7F64(int result);  /* 0x005d7f64 */
int __fastcall sub_605D8110(int a1, unsigned int a2);  /* 0x005d8110 */
bool __fastcall sub_605D8184(Actor *a1);  /* 0x005d8184 */
int __fastcall sub_605D81B8(int a1);  /* 0x005d81b8 */
int __fastcall sub_605D828C(int a1);  /* 0x005d828c */
int __fastcall sub_605D83A4(int result, int a2);  /* 0x005d83a4 */
int __fastcall sub_605D840C(int a1, int a2);  /* 0x005d840c */
int __fastcall sub_605D84C8(int a1);  /* 0x005d84c8 */
int __fastcall sub_605D862C(int a1);  /* 0x005d862c */
int __fastcall sub_605D8844(int a1);  /* 0x005d8844 */
int __fastcall sub_605D8884(int a1, _DWORD *a2);  /* 0x005d8884 */
int __fastcall sub_605D8938(int a1, int a2, int a3);  /* 0x005d8938 */
int __fastcall sub_605D89BC(int *a1, int a2, unsigned int a3);  /* 0x005d89bc */
int __fastcall sub_605D8AA8(int a1, int a2);  /* 0x005d8aa8 */
int __fastcall sub_605D9454(int a1, int a2);  /* 0x005d9454 */
int __fastcall sub_605D9504(_DWORD *a1, int a2);  /* 0x005d9504 */
int __fastcall sub_605D9550(_DWORD *a1, int a2);  /* 0x005d9550 */
int __fastcall sub_605D9940(int a1, int a2, int a3);  /* 0x005d9940 */
int __fastcall SE_PLY_CH_YOSHI_ref(int a1);  /* 0x005d9a84 */
int __fastcall sub_605D9ED4(_DWORD *a1);  /* 0x005d9ed4 */
int __fastcall sub_605D9F14(int a1);  /* 0x005d9f14 */
int __fastcall sub_605D9FAC(int a1, int a2);  /* 0x005d9fac */
int __fastcall sub_605DA0A8(_DWORD *a1, int *a2, _DWORD *a3, int a4);  /* 0x005da0a8 */
int __fastcall sub_605DA750(int a1);  /* 0x005da750 */
int __fastcall sub_605DA874(int a1);  /* 0x005da874 */
int __fastcall sub_605DAA3C(int a1);  /* 0x005daa3c */
int __fastcall sub_605DAC38(int a1);  /* 0x005dac38 */
int __fastcall sub_605DAD24(int a1, int a2);  /* 0x005dad24 */
int __fastcall sub_605DB0B0(int a1);  /* 0x005db0b0 */
bool __fastcall sub_605DB274(int a1);  /* 0x005db274 */
int __fastcall sub_605DB3FC(int a1);  /* 0x005db3fc */
bool __fastcall sub_605DB5D8(int a1);  /* 0x005db5d8 */
int __fastcall sub_605DB7EC(int a1, float *a2, int a3, int a4);  /* 0x005db7ec */
int __fastcall sub_605DB8E4(int a1, float *a2, int a3, int a4);  /* 0x005db8e4 */
int __fastcall sub_605DB99C(int a1, float *a2, int a3, int a4);  /* 0x005db99c */
int __fastcall sub_605DBA44(int a1, float *a2, int a3, int a4);  /* 0x005dba44 */
int __fastcall sub_605DBB04(int a1, int a2, float *a3, float *a4, int a5, int a6);  /* 0x005dbb04 */
int __fastcall sub_605DBBA8(int a1, int a2, float *a3, float *a4, int a5);  /* 0x005dbba8 */
int __fastcall sub_605DBE0C(int a1, _BYTE *a2);  /* 0x005dbe0c */
bool __fastcall sub_605DBF54(int a1);  /* 0x005dbf54 */
unsigned int __fastcall sub_605DC0F8(int a1);  /* 0x005dc0f8 */
int __fastcall sub_605DC144(int a1);  /* 0x005dc144 */
int __fastcall sub_605DC344(int a1);  /* 0x005dc344 */
int __fastcall sub_605DC44C(int a1, int a2);  /* 0x005dc44c */
unsigned int __fastcall sub_605DC9A0(int a1);  /* 0x005dc9a0 */
int __fastcall sub_605DCB0C(int a1);  /* 0x005dcb0c */
int __fastcall sub_605DCBAC(int a1);  /* 0x005dcbac */
int __fastcall sub_605DCC78(int a1, int a2, int a3, int a4);  /* 0x005dcc78 */
int __fastcall sub_605DCF40(int result, float *a2);  /* 0x005dcf40 */
int __fastcall sub_605DD398(int a1);  /* 0x005dd398 */
int __fastcall sub_605DD400(int a1);  /* 0x005dd400 */
void __fastcall sub_605DD51C(int a1);  /* 0x005dd51c */
int __fastcall sub_605DD5FC(int a1);  /* 0x005dd5fc */
int __fastcall sub_605DD6FC(int a1);  /* 0x005dd6fc */
int __fastcall sub_605DDB40(int a1, int a2, int a3);  /* 0x005ddb40 */
int __fastcall sub_605DDC70(int a1, int a2, int a3);  /* 0x005ddc70 */
unsigned int __fastcall sub_605DE1C4(unsigned int result, int a2, int a3);  /* 0x005de1c4 */
int __fastcall sub_605DE734(int a1, unsigned int a2);  /* 0x005de734 */
int __fastcall sub_605DE7D4(int a1, float *a2);  /* 0x005de7d4 */
int __fastcall sub_605DE950(int result, int a2, char a3);  /* 0x005de950 */
int __fastcall sub_605DEA30(_DWORD *a1, int a2, int a3, int a4);  /* 0x005dea30 */
int __fastcall sub_605DEC04(int a1, int a2);  /* 0x005dec04 */
int __fastcall sub_605DECE4(_DWORD *a1);  /* 0x005dece4 */
int __fastcall sub_605DEEE0(int a1, int a2);  /* 0x005deee0 */
int __fastcall sub_605DEF3C(Actor *a1);  /* 0x005def3c */
int __fastcall SE_PLY_CH_YOSHI_FUMU_ref(int a1);  /* 0x005e0220 */
bool __fastcall sub_605E0B38(int a1);  /* 0x005e0b38 */
int __fastcall sub_605E0EC0(float *a1);  /* 0x005e0ec0 */
int __fastcall sub_605E118C(int a1);  /* 0x005e118c */
int __fastcall sub_605E12F8(_DWORD *a1, int a2);  /* 0x005e12f8 */
int __fastcall sub_605E1458(int a1);  /* 0x005e1458 */
int __fastcall sub_605E1560(int result);  /* 0x005e1560 */
int __fastcall sub_605E1594(int a1);  /* 0x005e1594 */
int __fastcall sub_605E160C(int a1);  /* 0x005e160c */
int __fastcall sub_605E16D4(int a1);  /* 0x005e16d4 */
int __fastcall sub_605E1C54(_DWORD *a1);  /* 0x005e1c54 */
int __fastcall sub_605E1D00(int a1);  /* 0x005e1d00 */
int __fastcall sub_605E1DAC(int a1);  /* 0x005e1dac */
int __fastcall sub_605E1E04(int a1);  /* 0x005e1e04 */
int __fastcall sub_605E1E84(int a1, _DWORD *a2, int a3);  /* 0x005e1e84 */
int __fastcall sub_605E1F9C(int result);  /* 0x005e1f9c */
int __fastcall sub_605E1FF4(int result, int a2);  /* 0x005e1ff4 */
int __fastcall sub_605E2144(_DWORD *a1, int a2);  /* 0x005e2144 */
int __fastcall sub_605E21D8(int a1);  /* 0x005e21d8 */
int __fastcall sub_605E22A0(int a1, _DWORD *a2);  /* 0x005e22a0 */
unsigned int __fastcall SE_VOC_CH_YS_EAT_ref(int a1);  /* 0x005e2c10 */
int __fastcall SE_VOC_CH_YS_GOKUN_ref(int a1);  /* 0x005e2cd8 */
int __fastcall sub_605E33D0(int a1, int a2, int a3);  /* 0x005e33d0 */
bool __fastcall sub_605E34C4(int a1);  /* 0x005e34c4 */
bool __fastcall sub_605E3528(int a1, int a2, int a3);  /* 0x005e3528 */
int __fastcall sub_605E35F8(int a1, int a2);  /* 0x005e35f8 */
int __fastcall sub_605E3998(int result);  /* 0x005e3998 */
int __fastcall sub_605E3BD4(_DWORD *a1);  /* 0x005e3bd4 */
int __fastcall sub_605E3D3C(int result, float *a2, float *a3, int a4);  /* 0x005e3d3c */
int __fastcall sub_605E3EFC(int result);  /* 0x005e3efc */
int __fastcall sub_605E40C0(int a1, int a2);  /* 0x005e40c0 */
int __fastcall sub_605E41E0(int result, int a2);  /* 0x005e41e0 */
int __fastcall sub_605E48AC(int a1);  /* 0x005e48ac */
int __fastcall sub_605E4A14(int a1);  /* 0x005e4a14 */
int __fastcall sub_605E4C38(int result, int a2);  /* 0x005e4c38 */
int __fastcall sub_605E4D0C(int result, int a2);  /* 0x005e4d0c */
int __fastcall sub_605E4DE0(int a1);  /* 0x005e4de0 */
int __fastcall sub_605E4E30(int a1, int a2);  /* 0x005e4e30 */
int __fastcall sub_605E4ED8(int a1);  /* 0x005e4ed8 */
bool __fastcall sub_605E5044(int a1);  /* 0x005e5044 */
int __fastcall sub_605E516C(float *a1);  /* 0x005e516c */
int __fastcall sub_605E52E4(int result, int a2, unsigned int a3);  /* 0x005e52e4 */
int __fastcall sub_605E540C(_DWORD *a1, unsigned int a2, int a3);  /* 0x005e540c */
int __fastcall sub_605E5644(int a1);  /* 0x005e5644 */
int __fastcall sub_605E5B18(int a1);  /* 0x005e5b18 */
int __fastcall sub_605E5D1C(int a1);  /* 0x005e5d1c */
int __fastcall sub_605E5F68(int a1);  /* 0x005e5f68 */
int __fastcall sub_605E6178(int a1);  /* 0x005e6178 */
int __fastcall sub_605E6350(int result, int a2, int a3);  /* 0x005e6350 */
int __fastcall sub_605E66FC(_DWORD *a1);  /* 0x005e66fc */
int __fastcall SE_PLY_CH_YOSHI_EGG_BREAK_ref(int a1);  /* 0x005e68a4 */
int __fastcall sub_605E7054(int a1);  /* 0x005e7054 */
unsigned int __fastcall sub_605E73FC(int a1);  /* 0x005e73fc */
int __fastcall sub_605E7988(int a1);  /* 0x005e7988 */
int __fastcall sub_605E7D24(int a1);  /* 0x005e7d24 */
int __fastcall sub_605E7E8C(int a1, int a2);  /* 0x005e7e8c */
int __fastcall sub_605E8058(int a1, int a2);  /* 0x005e8058 */
int __fastcall sub_605E815C(_DWORD *a1);  /* 0x005e815c */
int __fastcall sub_605E82DC(int a1, int a2, int a3, int a4);  /* 0x005e82dc */
int __fastcall sub_605E8914(_DWORD *a1, int a2);  /* 0x005e8914 */
int __fastcall sub_605E8A4C(_DWORD *a1);  /* 0x005e8a4c */
int __fastcall sub_605E8C84(_DWORD *a1, int a2);  /* 0x005e8c84 */
int __fastcall sub_605E9050(_DWORD *a1, int a2);  /* 0x005e9050 */
int __fastcall sub_605E90AC(_DWORD *a1, int a2);  /* 0x005e90ac */
int __fastcall sub_605E91CC(_DWORD *a1, int a2, int *a3);  /* 0x005e91cc */
int __fastcall sub_605E9294(_DWORD *a1, unsigned int a2);  /* 0x005e9294 */
int __fastcall sub_605E92D0(int a1);  /* 0x005e92d0 */
int __fastcall sub_605E9384(_DWORD *a1, int a2);  /* 0x005e9384 */
int __fastcall sub_605E93C8(_DWORD *a1, int a2);  /* 0x005e93c8 */
int __fastcall sub_605E9424(int a1);  /* 0x005e9424 */
bool __fastcall sub_605E9514(int a1);  /* 0x005e9514 */
int __fastcall sub_605E955C(int a1);  /* 0x005e955c */
int __fastcall sub_605E95E4(_DWORD *a1);  /* 0x005e95e4 */
bool __fastcall sub_605E9820(_DWORD *a1);  /* 0x005e9820 */
int __fastcall sub_605E9850(_DWORD *a1);  /* 0x005e9850 */
bool __fastcall sub_605E98D4(_DWORD *a1);  /* 0x005e98d4 */
int __fastcall sub_605E995C(_DWORD *a1);  /* 0x005e995c */
int __fastcall sub_605E99E4(_DWORD *a1);  /* 0x005e99e4 */
int __fastcall sub_605E9A4C(_DWORD *a1, unsigned int a2, _DWORD *a3, int a4);  /* 0x005e9a4c */
int __fastcall sub_605E9B64(_DWORD *a1, int a2);  /* 0x005e9b64 */
int __fastcall sub_605E9BF8(_DWORD *a1);  /* 0x005e9bf8 */
int __fastcall sub_605E9C7C(_DWORD *a1);  /* 0x005e9c7c */
int __fastcall sub_605E9D00(int a1);  /* 0x005e9d00 */
int __fastcall sub_605E9D54(int a1);  /* 0x005e9d54 */
int __fastcall sub_605EA200(int a1, int a2, int a3);  /* 0x005ea200 */
int __fastcall sub_605EA31C(int *a1);  /* 0x005ea31c */
int __fastcall sub_605EA46C(int result, int a2);  /* 0x005ea46c */
int __fastcall sub_605EA6F0(int a1);  /* 0x005ea6f0 */
int __fastcall sub_605EA7EC(int a1);  /* 0x005ea7ec */
int __fastcall sub_605EA968(int a1);  /* 0x005ea968 */
int __fastcall sub_605EAAC0(int a1, _DWORD *a2, int a3);  /* 0x005eaac0 */
int __fastcall sub_605EAB74(int a1, int a2);  /* 0x005eab74 */
int __fastcall sub_605EAC4C(int a1, int a2);  /* 0x005eac4c */
int __fastcall sub_605EAD00(int *a1, int a2);  /* 0x005ead00 */
int __fastcall sub_605EAE74(int *a1);  /* 0x005eae74 */
int __fastcall sub_605EAF44(int a1);  /* 0x005eaf44 */
int __fastcall sub_605EAFD8(int result);  /* 0x005eafd8 */
int __fastcall sub_605EB024(int a1);  /* 0x005eb024 */
int __fastcall sub_605EB074(int *a1);  /* 0x005eb074 */
unsigned int __fastcall sub_605EB12C(int a1);  /* 0x005eb12c */
int __fastcall sub_605EB15C(int a1, _DWORD *a2);  /* 0x005eb15c */
int __fastcall sub_605EB3B0(int a1, int a2);  /* 0x005eb3b0 */
int __fastcall sub_605EB5F8(int a1);  /* 0x005eb5f8 */
unsigned int __fastcall sub_605EB6D4(int a1);  /* 0x005eb6d4 */
int __fastcall sub_605EB7B0(int a1);  /* 0x005eb7b0 */
int __fastcall sub_605EB89C(_DWORD *a1);  /* 0x005eb89c */
int __fastcall sub_605EBFE8(int a1);  /* 0x005ebfe8 */
int __fastcall sub_605EC190(int a1);  /* 0x005ec190 */
int __fastcall sub_605EC240(int a1);  /* 0x005ec240 */
int __fastcall sub_605EC37C(int a1);  /* 0x005ec37c */
int __fastcall sub_605EC644(int a1);  /* 0x005ec644 */
int __fastcall sub_605ECF7C(_DWORD *a1, _DWORD *a2, int a3, char a4);  /* 0x005ecf7c */
int __fastcall sub_605ED2AC(int result);  /* 0x005ed2ac */
int __fastcall sub_605ED358(int result);  /* 0x005ed358 */
int __fastcall sub_605ED490(int result, int a2);  /* 0x005ed490 */
int __fastcall sub_605ED5C0(int result);  /* 0x005ed5c0 */
int __fastcall sub_605ED718(int a1);  /* 0x005ed718 */
int __fastcall sub_605EDA64(_DWORD *a1);  /* 0x005eda64 */
int __fastcall Actor_chibiyoshi_cloud_build(int a1);  /* 0x005ede34 */
unsigned int __fastcall sub_605F1AA8(int a1);  /* 0x005f1aa8 */
int __fastcall StarCoin_onCreate(float *a1);  /* 0x005f35cc */
int __fastcall StarCoin_onExecute(int a1);  /* 0x005f3714 */
int __fastcall StarCoin_dtorFree(Actor *a1);  /* 0x005f3a48 */
int __fastcall StarCoinBase_ctor(int a1);  /* 0x005f3b14 */
int __fastcall sub_605F43EC(int a1, int a2);  /* 0x005f43ec */
int __fastcall sub_605F46C0(int a1);  /* 0x005f46c0 */
int __fastcall StarCoinBase_onDraw(int a1, int a2, int a3, int a4);  /* 0x005f485c */
int __fastcall StarCoinBase_updateModel(_DWORD *a1);  /* 0x005f488c */
int __fastcall sub_605F4A94(unsigned __int8 *a1);  /* 0x005f4a94 */
int __fastcall sub_605F4B14(int a1);  /* 0x005f4b14 */
float __fastcall sub_605F53A8(int a1);  /* 0x005f53a8 */
bool __fastcall StarCoinBase_checkRTTI(int a1, int a2);  /* 0x005f5510 */
int __fastcall StarCoinBase_dtorFree(Actor *a1);  /* 0x005f5614 */
int __fastcall sub_605F7478(int a1);  /* 0x005f7478 */
int __fastcall sub_605F7AC0(int a1);  /* 0x005f7ac0 */
int __fastcall sub_605F7FA4(int a1);  /* 0x005f7fa4 */
int __fastcall sub_605F814C(_DWORD *a1);  /* 0x005f814c */
int __fastcall sub_605F82F4(int a1);  /* 0x005f82f4 */
int __fastcall sub_605F8328(_DWORD *a1);  /* 0x005f8328 */
int __fastcall SE_OBJ_DDOOR_OPEN_ref(int a1);  /* 0x005f888c */
int __fastcall obj_door_shiroboss_ref(int a1);  /* 0x005f8fd0 */
int __fastcall obj_door_shiroboss_ref_2(int a1);  /* 0x005f9190 */
int __fastcall obj_door_shiroboss_close_ref(int a1);  /* 0x005f9228 */
int __fastcall SE_OBJ_BDOOR_MOVE_ref(float *a1);  /* 0x005f9464 */
int __fastcall boss_koopa_door_ref(int a1);  /* 0x005f99c8 */
int __fastcall boss_koopa_door_open_ref(int a1);  /* 0x005f9e6c */
int __fastcall boss_koopa_door_close_ref(int a1);  /* 0x005f9f04 */
int __fastcall SE_OBJ_KDOOR_MOVE_ref(float *a1);  /* 0x005fa238 */
int __fastcall obj_doorA_ref(int a1);  /* 0x005fa538 */
int __fastcall obj_obake_door_ref(int a1);  /* 0x005faa3c */
int __fastcall obj_door_torideboss_ref(int a1);  /* 0x005fb16c */
int __fastcall obj_door_torideboss_ref_2(int a1);  /* 0x005fb32c */
int __fastcall obj_door_torideboss_close_ref(int a1);  /* 0x005fb3c4 */
int __fastcall SE_OBJ_BDOOR_MOVE_ref_2(float *a1);  /* 0x005fb600 */
unsigned int __fastcall sub_605FCF04(int a1);  /* 0x005fcf04 */
int __fastcall sub_605FD008(int result);  /* 0x005fd008 */
unsigned int __fastcall sub_605FD28C(int a1);  /* 0x005fd28c */
unsigned int __fastcall sub_605FD6C8(int a1);  /* 0x005fd6c8 */
unsigned int __fastcall sub_605FD7AC(int a1);  /* 0x005fd7ac */
int __fastcall sub_605FD890(int a1);  /* 0x005fd890 */
int __fastcall sub_605FE180(int a1);  /* 0x005fe180 */
unsigned int __fastcall sub_605FF138(int a1);  /* 0x005ff138 */
int __fastcall sub_605FF28C(int a1);  /* 0x005ff28c */
int __fastcall sub_605FF3DC(int result);  /* 0x005ff3dc */
unsigned int __fastcall sub_605FF658(int a1);  /* 0x005ff658 */
unsigned int __fastcall sub_605FFA34(int a1);  /* 0x005ffa34 */
unsigned int __fastcall sub_605FFB18(int a1);  /* 0x005ffb18 */
int __fastcall sub_605FFD60(int a1);  /* 0x005ffd60 */

/* ---- states.c ---- */
int __fastcall sub_60600A8C(int a1);  /* 0x00600a8c */
int __fastcall sub_60600E5C(int a1);  /* 0x00600e5c */
int __fastcall sub_60601BC8(int a1);  /* 0x00601bc8 */
int __fastcall sub_60601F6C(int a1);  /* 0x00601f6c */
int __fastcall sub_60602934(int a1, int a2);  /* 0x00602934 */
int __fastcall sub_60602AA8(int a1, _DWORD *a2, int a3);  /* 0x00602aa8 */
int __fastcall sub_60602DF0(int a1);  /* 0x00602df0 */
bool __fastcall sub_606031C8(float *a1);  /* 0x006031c8 */
int __fastcall sub_60603290(int a1);  /* 0x00603290 */
int __fastcall sub_60603C90(StageActor *a1);  /* 0x00603c90 */
int __fastcall sub_60604128(int a1);  /* 0x00604128 */
int __fastcall sub_6060426C(int a1, int a2, __int64 a3);  /* 0x0060426c */
int __fastcall sub_606067AC(_DWORD *a1);  /* 0x006067ac */
int __fastcall sub_606067E4(int a1);  /* 0x006067e4 */
int __fastcall sub_60606978(int *a1, int *a2, int a3);  /* 0x00606978 */
int __fastcall sub_606069FC(int a1, float *a2, int a3);  /* 0x006069fc */
int __fastcall sub_60606B2C(_DWORD *a1, int a2, int a3, int a4, int a5);  /* 0x00606b2c */
int __fastcall sub_606075FC(int a1);  /* 0x006075fc */
int __fastcall sub_60607D4C(int *a1);  /* 0x00607d4c */
int __fastcall sub_60608074(int a1);  /* 0x00608074 */
int __fastcall sub_606087C0(int a1, _DWORD *a2);  /* 0x006087c0 */
int __fastcall sub_60608FF8(int a1, unsigned int a2);  /* 0x00608ff8 */
int __fastcall sub_60609110(int result);  /* 0x00609110 */
int __fastcall RollingHill_ctor(int a1);  /* 0x006097c8 */
int __fastcall RollingHill_onCreate(int a1);  /* 0x00609b28 */
int __fastcall RollingHill_updateModel(int a1);  /* 0x00609dc8 */
int __fastcall RollingHill_onExecute(unsigned int a1);  /* 0x00609fa4 */
unsigned int __fastcall sub_6060A088(unsigned int result);  /* 0x0060a088 */
int __fastcall sub_6060A200(_DWORD *a1);  /* 0x0060a200 */
int __fastcall RollingHill_onDraw(int a1, int a2, int a3, int a4);  /* 0x0060a354 */
bool __fastcall RollingHill_checkRTTI(int a1, int a2);  /* 0x0060a474 */
void __fastcall RollingHill_dtor(int a1);  /* 0x0060a65c */
int __fastcall RollingHill_dtorFree(int a1);  /* 0x0060a68c */
int __fastcall sub_6060B2F8(int a1, __int64 *a2);  /* 0x0060b2f8 */
int __fastcall sub_6060B51C(int a1, int a2, int a3);  /* 0x0060b51c */
int __fastcall sub_6060B6A8(int a1);  /* 0x0060b6a8 */
int __fastcall sub_6060C4CC(_DWORD *a1);  /* 0x0060c4cc */
int __fastcall sub_6060C7C8(_DWORD *a1);  /* 0x0060c7c8 */
int __fastcall sub_6060CF08(int a1);  /* 0x0060cf08 */
int __fastcall sub_6060D720(int a1, unsigned int a2, float *a3);  /* 0x0060d720 */
int __fastcall SE_OBJ_ICE_S_THAW_ref(int a1);  /* 0x0060db00 */
int __fastcall sub_6060DEF8(int a1);  /* 0x0060def8 */
int __fastcall sub_6060E028(int a1);  /* 0x0060e028 */
int __fastcall sub_6060E120(int a1);  /* 0x0060e120 */
int __fastcall sub_6060E48C(int a1, unsigned __int8 *a2);  /* 0x0060e48c */
int __fastcall sub_6060EDB0(int a1);  /* 0x0060edb0 */
int __fastcall sub_6060F49C(int *a1);  /* 0x0060f49c */
int __fastcall sub_6060F858(int a1);  /* 0x0060f858 */
int __fastcall sub_6060FAA0(int a1);  /* 0x0060faa0 */
int __fastcall Actor_RDash_build(int a1);  /* 0x00610008 */
int __fastcall sub_606101D4(int a1, int a2);  /* 0x006101d4 */
int __fastcall sub_6061055C(int a1, int a2, __int64 a3, int a4);  /* 0x0061055c */
int __fastcall sub_606106B0(int a1);  /* 0x006106b0 */
int __fastcall sub_6061078C(int a1);  /* 0x0061078c */
unsigned int __fastcall sub_60610C18(unsigned int result);  /* 0x00610c18 */
int __fastcall sub_60610D90(_DWORD *a1);  /* 0x00610d90 */
int __fastcall SE_SYS_GOAL_FLAG_ref(int a1);  /* 0x006121f8 */
int __fastcall sub_606127A0(_DWORD *a1);  /* 0x006127a0 */
int __fastcall sub_60612DB4(_DWORD *a1);  /* 0x00612db4 */
float __fastcall sub_606134E8(int a1);  /* 0x006134e8 */
int __fastcall sub_60614478(int result);  /* 0x00614478 */
int __fastcall sub_60614A7C(int a1);  /* 0x00614a7c */
int __fastcall sub_60614BE8(int a1, int a2, unsigned int a3, int a4);  /* 0x00614be8 */
int __fastcall sub_60614F84(int *a1);  /* 0x00614f84 */
int __fastcall sub_6061515C(int a1, int a2, unsigned int a3);  /* 0x0061515c */
unsigned int __fastcall sub_60615A1C(int a1);  /* 0x00615a1c */
int __fastcall sub_60615B80(int a1);  /* 0x00615b80 */
int __fastcall SE_SYS_GOAL_RING_ref(int a1);  /* 0x00615f7c */
int __fastcall sub_60616380(_DWORD *a1);  /* 0x00616380 */
int __fastcall SE_SYS_STOCK_ITEM_USE_ref(int a1);  /* 0x00616a94 */
unsigned int __fastcall sub_60616DF8(int a1, float *a2, unsigned int *a3, int a4);  /* 0x00616df8 */
int __fastcall sub_60616F0C(_DWORD *a1);  /* 0x00616f0c */
int __fastcall obj_coin_green_ref(_DWORD *a1);  /* 0x00617a04 */
int __fastcall sub_60618BFC(int result);  /* 0x00618bfc */
int __fastcall sub_60619030(int result);  /* 0x00619030 */
int __fastcall sub_60619AC8(int a1);  /* 0x00619ac8 */
int __fastcall sub_60619C9C(int a1);  /* 0x00619c9c */
int __fastcall sub_6061AA68(_DWORD *a1);  /* 0x0061aa68 */
int __fastcall sub_6061AC10(int a1);  /* 0x0061ac10 */
int __fastcall sub_6061AD00(int a1);  /* 0x0061ad00 */
int __fastcall sub_6061BC30(int a1);  /* 0x0061bc30 */
int __fastcall sub_6061BDD8(int a1);  /* 0x0061bdd8 */
int __fastcall sub_6061C4A0(int result);  /* 0x0061c4a0 */
int __fastcall sub_6061D6B8(int a1);  /* 0x0061d6b8 */
int __fastcall sub_6061D8C0(int a1);  /* 0x0061d8c0 */
int __fastcall sub_6061DA90(int (__fastcall ***a1)(_DWORD, int), unsigned __int8 *a2);  /* 0x0061da90 */
int __fastcall Actor_ice_2_build(int a1);  /* 0x0061e0d0 */
int __fastcall sub_6061E338(int *a1);  /* 0x0061e338 */
int __fastcall sub_6061E5A8(int a1);  /* 0x0061e5a8 */
int __fastcall sub_6061E7F4(int a1);  /* 0x0061e7f4 */
int __fastcall sub_6061E968(int a1);  /* 0x0061e968 */
int __fastcall sub_6061EA58(_DWORD *a1);  /* 0x0061ea58 */
int __fastcall sub_6061EB7C(int a1);  /* 0x0061eb7c */
int __fastcall sub_6061FDF4(int a1, __int16 a2);  /* 0x0061fdf4 */
int __fastcall sub_60620F98(int a1);  /* 0x00620f98 */
int __fastcall sub_6062134C(_DWORD *a1);  /* 0x0062134c */
int __fastcall sub_60621520(int a1, _DWORD *a2, int a3);  /* 0x00621520 */
int __fastcall sub_60621580(int a1);  /* 0x00621580 */
int __fastcall sub_606215FC(int a1);  /* 0x006215fc */
int __fastcall gura_anim_ref(int a1);  /* 0x00621f50 */
int __fastcall SE_OBJ_ICICLE_L_SIGN_ref(int a1);  /* 0x00621fd4 */
int __fastcall rakka_anim_ref(int a1);  /* 0x0062209c */
int __fastcall sub_60623CB0(int a1, __int16 a2);  /* 0x00623cb0 */
int __fastcall sub_606252E8(int a1);  /* 0x006252e8 */
int __fastcall sub_6062545C(int a1);  /* 0x0062545c */
int __fastcall sandpillar_end_ref(int a1);  /* 0x00625b90 */
int __fastcall sub_60625E1C(int a1);  /* 0x00625e1c */
int __fastcall sub_606262F4(int a1, unsigned int a2);  /* 0x006262f4 */
float __fastcall sub_60626928(int a1);  /* 0x00626928 */
int __fastcall sub_60626B28(int *a1);  /* 0x00626b28 */
unsigned int __fastcall sub_60626F5C(int a1);  /* 0x00626f5c */
int __fastcall sub_606272BC(int a1);  /* 0x006272bc */
int __fastcall sub_60627538(int a1, int a2);  /* 0x00627538 */
int __fastcall sub_60627754(int a1, int a2);  /* 0x00627754 */
int __fastcall sub_6062795C(int a1, int a2);  /* 0x0062795c */
int __fastcall sub_60627B64(float *a1, int a2);  /* 0x00627b64 */
bool __fastcall sub_606282C4(int a1);  /* 0x006282c4 */
int __fastcall iron_ball_hole_ref(int a1);  /* 0x00628748 */
int __fastcall sub_60628928(int a1);  /* 0x00628928 */
int __fastcall Actor_JumpStand_build(int a1);  /* 0x00628e38 */
int __fastcall sub_6062943C(int a1);  /* 0x0062943c */
int __fastcall sub_60629730(int a1);  /* 0x00629730 */
int __fastcall sub_606299C8(int a1, int a2, int a3);  /* 0x006299c8 */
int __fastcall sub_60629B8C(int a1, int a2);  /* 0x00629b8c */
int __fastcall sub_60629F28(int a1);  /* 0x00629f28 */
int __fastcall SE_BOSS_CMN_MAGIC_DISAPP_ref_2(int a1);  /* 0x0062a840 */
int __fastcall block_kameck_ref(int a1);  /* 0x0062aa68 */
int __fastcall sub_6062ACF4(int a1);  /* 0x0062acf4 */
int __fastcall kanban_yajirushi_ref(int a1);  /* 0x0062b900 */
int __fastcall sub_6062C150(int a1);  /* 0x0062c150 */
int __fastcall sub_6062C244(int a1);  /* 0x0062c244 */
int __fastcall sub_6062C6D4(int result, int a2, int a3);  /* 0x0062c6d4 */
int __fastcall sub_6062C818(int a1, float *a2);  /* 0x0062c818 */
int __fastcall sub_6062C954(int result, int a2, int a3);  /* 0x0062c954 */
int __fastcall sub_6062CAE8(int a1, _BYTE *a2);  /* 0x0062cae8 */
int __fastcall sub_6062DEE0(int a1);  /* 0x0062dee0 */
int __fastcall sub_6062E200(int a1);  /* 0x0062e200 */
int __fastcall sub_6062E40C(int a1);  /* 0x0062e40c */
int __fastcall sub_6062E508(int a1);  /* 0x0062e508 */
int __fastcall sub_6062FA08(_DWORD *a1, int a2);  /* 0x0062fa08 */
bool __fastcall sub_6062FB30(int a1);  /* 0x0062fb30 */
bool __fastcall sub_6062FCAC(int a1);  /* 0x0062fcac */
int __fastcall sub_6063031C(_DWORD *a1, int a2, int a3, int a4);  /* 0x0063031c */
int __fastcall sub_606303F4(_DWORD *a1);  /* 0x006303f4 */
int __fastcall sub_60630468(int a1, int a2, int a3, int a4);  /* 0x00630468 */
int __fastcall sub_60630830(int a1, float *a2);  /* 0x00630830 */
int __fastcall sub_60630B04(int a1, int a2, int a3, int a4, int a5);  /* 0x00630b04 */
int __fastcall sub_60630B60(int a1);  /* 0x00630b60 */
int __fastcall sub_60630E00(int *a1);  /* 0x00630e00 */
int __fastcall sub_60630FE0(int a1, int a2);  /* 0x00630fe0 */
int __fastcall sub_606310C8(int a1, _DWORD *a2, _DWORD *a3, int a4);  /* 0x006310c8 */
int __fastcall sub_606311BC(int a1, int a2, int a3);  /* 0x006311bc */
int __fastcall sub_60631984(int a1);  /* 0x00631984 */
int __fastcall sub_60631D54(_DWORD *a1, int a2);  /* 0x00631d54 */
int __fastcall sub_60631EB0(int a1, float *a2, float a3);  /* 0x00631eb0 */
int __fastcall sub_606327B0(int a1);  /* 0x006327b0 */
int __fastcall sub_60632D90(int a1, int a2, char a3);  /* 0x00632d90 */
int __fastcall sub_60632F70(int a1, int *a2, int a3, unsigned int a4, unsigned int a5);  /* 0x00632f70 */
void __fastcall SE_BOSS_JR_BLOCK_APPEAR_ref(_DWORD *a1);  /* 0x006339a4 */
int __fastcall sub_606342DC(int *a1);  /* 0x006342dc */
int __fastcall sub_6063473C(int a1, int a2);  /* 0x0063473c */
int __fastcall sub_60634B08(_DWORD *a1);  /* 0x00634b08 */
int __fastcall sub_60634F48(int a1);  /* 0x00634f48 */
int __fastcall sub_606356DC(int a1);  /* 0x006356dc */
int __fastcall RopeLadder_onCreate(int a1);  /* 0x00635ca8 */
int __fastcall RopeLadder_onExecute(int a1);  /* 0x00635e70 */
int __fastcall RopeLadder_onDraw(int a1, int a2, int a3, int a4);  /* 0x006360ec */
void __fastcall RopeLadder_dtor(int a1);  /* 0x00636110 */
int __fastcall RopeLadder_dtorFree(int a1);  /* 0x00636140 */
int __fastcall sub_606361F8(int a1, float *a2, _DWORD *a3);  /* 0x006361f8 */
unsigned int __fastcall sub_6063633C(int a1, int a2, int a3, int a4, int a5);  /* 0x0063633c */
int __fastcall sub_60636C00(int result, int a2);  /* 0x00636c00 */
int __fastcall sub_60636C3C(int result);  /* 0x00636c3c */
int __fastcall sub_60638B24(int a1, int a2, int a3, unsigned int a4, int a5);  /* 0x00638b24 */
int __fastcall sub_60638D28(int result, int a2);  /* 0x00638d28 */
int __fastcall sub_60638D9C(int result);  /* 0x00638d9c */
int __fastcall sub_60638F44(int a1, int a2, _DWORD *a3);  /* 0x00638f44 */
int __fastcall sub_60638F7C(int **a1, int a2, float *a3, float *a4, int a5);  /* 0x00638f7c */
int __fastcall sub_60639064(int a1, float *a2);  /* 0x00639064 */
int __fastcall sub_6063916C(int a1, int a2, int a3, unsigned int a4, int a5);  /* 0x0063916c */
int __fastcall sub_6063926C(int result);  /* 0x0063926c */
int __fastcall sub_60639704(int a1);  /* 0x00639704 */
int __fastcall sub_60639BC0(int a1);  /* 0x00639bc0 */
int __fastcall sub_60639D64(_DWORD *a1);  /* 0x00639d64 */
unsigned int __fastcall sub_60639EF8(int a1);  /* 0x00639ef8 */
int __fastcall sub_6063A044(int a1);  /* 0x0063a044 */
unsigned int __fastcall sub_6063B114(unsigned int a1, unsigned int a2, int a3, int a4, int a5, int a6);  /* 0x0063b114 */
int __fastcall sub_6063B3C0(int a1, int a2, int a3);  /* 0x0063b3c0 */
int __fastcall sub_6063B50C(unsigned int a1, unsigned int a2);  /* 0x0063b50c */
bool __fastcall sub_6063B9B8(float *a1, float *a2, float *a3);  /* 0x0063b9b8 */
int __fastcall sub_6063BA64(int a1);  /* 0x0063ba64 */
int __fastcall sub_6063BEA4(int a1, _DWORD *a2, int a3);  /* 0x0063bea4 */
int __fastcall sub_6063C10C(int a1);  /* 0x0063c10c */
int __fastcall sub_6063C3D4(int a1, int a2);  /* 0x0063c3d4 */
int __fastcall sub_6063C8A0(_DWORD *a1, int a2, int a3, _DWORD *a4);  /* 0x0063c8a0 */
int __fastcall sub_6063C948(float *a1, float *a2);  /* 0x0063c948 */
int __fastcall sub_6063CAC0(int a1, float *a2, unsigned int a3);  /* 0x0063cac0 */
int __fastcall sub_6063CC30(_DWORD *a1, int a2, int a3, _DWORD *a4);  /* 0x0063cc30 */
int __fastcall sub_6063CC9C(unsigned int a1, float *a2, unsigned int a3);  /* 0x0063cc9c */
int __fastcall SE_EMY_KK_SHIKO_ref_2(int a1);  /* 0x0063d030 */
int __fastcall lift_huriko_yougan_ref_2(_DWORD *a1);  /* 0x0063d520 */
int __fastcall sub_6063D654(_DWORD *a1);  /* 0x0063d654 */
int __fastcall sub_6063DE54(int a1);  /* 0x0063de54 */
int __fastcall sub_6063EDE0(int a1);  /* 0x0063ede0 */
int __fastcall sub_6063F258(_DWORD *a1);  /* 0x0063f258 */
int __fastcall sub_6063F984(int a1);  /* 0x0063f984 */
int __fastcall sub_6063FC54(int a1);  /* 0x0063fc54 */
int __fastcall sub_6063FDE8(int a1);  /* 0x0063fde8 */
int __fastcall sub_6063FF74(int a1);  /* 0x0063ff74 */
int __fastcall sub_60640150(int a1);  /* 0x00640150 */
int __fastcall sub_606402E8(int a1);  /* 0x006402e8 */
int __fastcall sub_60640480(int a1);  /* 0x00640480 */
int __fastcall sub_606405DC(int a1);  /* 0x006405dc */
int __fastcall sub_60640C3C(int a1);  /* 0x00640c3c */
int __fastcall Actor_Lift_RDash_build(int a1);  /* 0x006410e4 */
int __fastcall sub_60641D6C(int a1, int a2, _BYTE *a3);  /* 0x00641d6c */
int __fastcall sub_60641F0C(int a1);  /* 0x00641f0c */
int __fastcall sub_60642004(int a1);  /* 0x00642004 */
int __fastcall sub_60642220(int a1);  /* 0x00642220 */
int __fastcall sub_606423C8(int a1);  /* 0x006423c8 */
int __fastcall sub_60643ECC(_DWORD *a1);  /* 0x00643ecc */
int __fastcall sub_606444A8(int *a1, int a2, int a3);  /* 0x006444a8 */
int __fastcall sub_60644758(_DWORD **a1, float *a2, int a3);  /* 0x00644758 */
int __fastcall sub_606447F4(_DWORD *a1);  /* 0x006447f4 */
unsigned int __fastcall sub_60644DD8(int a1);  /* 0x00644dd8 */
unsigned int __fastcall sub_60645374(int a1);  /* 0x00645374 */
unsigned int __fastcall sub_60645448(int a1, int a2);  /* 0x00645448 */
unsigned int __fastcall sub_606456E4(int a1, int a2, int a3, int a4, int a5);  /* 0x006456e4 */
int __fastcall Actor_tarihorizontal_move_Lift_build(int a1);  /* 0x006462e8 */
int __fastcall Actor_tarivertical_move_Lift_build(int a1);  /* 0x006473e8 */
int __fastcall sub_6064862C(int a1);  /* 0x0064862c */
int __fastcall SE_OBJ_RC_UPLIFT_ref(int a1);  /* 0x0064945c */
int __fastcall SE_OBJ_RC_UPLIFT_REVERT_ref(int a1);  /* 0x0064986c */
int __fastcall sub_60649C20(int a1);  /* 0x00649c20 */
int __fastcall sub_6064A59C(_DWORD *a1);  /* 0x0064a59c */
int __fastcall sub_6064A7C4(_DWORD *a1);  /* 0x0064a7c4 */
int __fastcall sub_6064AD08(int *a1);  /* 0x0064ad08 */
int __fastcall sub_6064AF30(int a1);  /* 0x0064af30 */
int __fastcall sub_6064B2FC(int *a1, int *a2);  /* 0x0064b2fc */
int __fastcall sub_6064B450(_DWORD *a1);  /* 0x0064b450 */
int __fastcall sub_6064B5E8(int a1, _DWORD *a2);  /* 0x0064b5e8 */
int __fastcall sub_6064B760(unsigned __int8 *a1, char a2);  /* 0x0064b760 */
int __fastcall sub_6064BC80(int a1, int a2);  /* 0x0064bc80 */
int __fastcall sub_6064BF74(int a1, int a2);  /* 0x0064bf74 */
int __fastcall sub_6064CA9C(int a1, unsigned int a2);  /* 0x0064ca9c */
int __fastcall sub_6064D1A4(int a1, char a2);  /* 0x0064d1a4 */
int __fastcall sub_6064D288(int a1, unsigned int a2);  /* 0x0064d288 */
int __fastcall sub_6064D634(unsigned __int8 *a1, int a2);  /* 0x0064d634 */
int __fastcall sub_6064D988(int a1, _BYTE *a2);  /* 0x0064d988 */
int __fastcall SE_OBJ_RC_CONTROL_ON_ref_2(int a1);  /* 0x0064df44 */
int __fastcall sub_6064E2B0(int *a1);  /* 0x0064e2b0 */
int __fastcall sub_6064E408(int a1);  /* 0x0064e408 */
int __fastcall sub_6064E95C(int a1, char a2, int a3, int a4);  /* 0x0064e95c */
int __fastcall sub_6064ED5C(int a1, int a2);  /* 0x0064ed5c */
int __fastcall SE_OBJ_RC_CONTROL_ON_ref_3(int a1);  /* 0x0064efe0 */
int __fastcall sub_6064F934(int a1);  /* 0x0064f934 */
int __fastcall sub_6064FEF8(int *a1);  /* 0x0064fef8 */
int __fastcall sub_60650090(int a1);  /* 0x00650090 */
int __fastcall SE_OBJ_RC_LIFTLINE_MOVE_ref(int a1);  /* 0x00650368 */
int __fastcall sub_60650908(int a1, int a2);  /* 0x00650908 */
int __fastcall Actor_tarihorizontal_move_Lift_2_build(int a1);  /* 0x00650d00 */
int __fastcall sub_60652870(int a1);  /* 0x00652870 */
int __fastcall sub_60652F0C(int a1, int a2);  /* 0x00652f0c */
int __fastcall sub_606530C4(int a1, int *a2, float *a3);  /* 0x006530c4 */
bool __fastcall sub_606531AC(int a1);  /* 0x006531ac */
int __fastcall sub_60653988(int a1);  /* 0x00653988 */
int __fastcall sub_60653FC4(_DWORD *a1);  /* 0x00653fc4 */
int __fastcall sub_6065448C(int result);  /* 0x0065448c */
int __fastcall sub_60654720(int a1);  /* 0x00654720 */
int __fastcall sub_60655130(int a1);  /* 0x00655130 */
int __fastcall sub_60655900(int a1);  /* 0x00655900 */
int __fastcall sub_60655F68(int result);  /* 0x00655f68 */
int __fastcall sub_60656244(int a1);  /* 0x00656244 */
int __fastcall sub_606565E8(int a1, int a2, int a3, char a4);  /* 0x006565e8 */
int __fastcall sub_60656814(int a1, _DWORD *a2, unsigned int a3);  /* 0x00656814 */
int __fastcall sub_60656868(int a1, unsigned int a2, _DWORD *a3);  /* 0x00656868 */
int __fastcall sub_60656A8C(int a1);  /* 0x00656a8c */
int __fastcall sub_60656AF4(int a1, int a2);  /* 0x00656af4 */
int __fastcall Actor_tarivertical_move_Lift_2_build(int a1);  /* 0x00657080 */
int __fastcall sub_60658908(int a1);  /* 0x00658908 */
int __fastcall sub_60658F20(int a1);  /* 0x00658f20 */
int __fastcall sub_606591E8(int a1);  /* 0x006591e8 */
int __fastcall sub_606595FC(int *a1, int a2);  /* 0x006595fc */
int __fastcall sub_6065BA98(int *a1);  /* 0x0065ba98 */
int __fastcall sub_6065C164(int a1);  /* 0x0065c164 */
int __fastcall sub_6065C6DC(_DWORD *a1);  /* 0x0065c6dc */
int __fastcall sub_6065C8D4(int result, int a2, int *a3, int a4);  /* 0x0065c8d4 */
int __fastcall sub_6065D324(int a1);  /* 0x0065d324 */
int __fastcall sub_6065DB20(int a1, int a2);  /* 0x0065db20 */
int __fastcall sub_6065E8D4(int a1);  /* 0x0065e8d4 */
int __fastcall sub_6065F29C(int *a1);  /* 0x0065f29c */
int __fastcall sub_6065F60C(int a1, int a2, _DWORD *a3, int a4);  /* 0x0065f60c */
int __fastcall sub_6065F9A0(int a1);  /* 0x0065f9a0 */
int __fastcall sub_6066092C(int a1);  /* 0x0066092c */
int __fastcall sub_60660AAC(_DWORD **a1);  /* 0x00660aac */
int __fastcall sub_60660F88(int result);  /* 0x00660f88 */
int __fastcall sub_606621A8(int a1);  /* 0x006621a8 */
float __fastcall sub_60662348(float *a1);  /* 0x00662348 */
int __fastcall sub_60662694(int result);  /* 0x00662694 */
int __fastcall sub_606627E8(int a1, int a2, int a3, int a4);  /* 0x006627e8 */
int __fastcall sub_60662900(int a1);  /* 0x00662900 */
float __fastcall sub_60663F70(int a1);  /* 0x00663f70 */
int __fastcall sub_60664220(int a1);  /* 0x00664220 */
int __fastcall sub_606643DC(int a1);  /* 0x006643dc */
int __fastcall sub_60664A54(_DWORD *a1);  /* 0x00664a54 */
int __fastcall sub_60664E84(_BYTE *a1);  /* 0x00664e84 */
int __fastcall Actor_kishiLift_build(int a1);  /* 0x00665fc8 */
int __fastcall Actor_kishiLift_sutepu_build(int a1);  /* 0x0066662c */
int __fastcall SE_OBJ_SUISHA_ref(int a1);  /* 0x00666f9c */
int __fastcall lift_suisha_4line_ref(int a1);  /* 0x006677b4 */
unsigned int __fastcall sub_60667DB0(int a1);  /* 0x00667db0 */
int __fastcall sub_60667E9C(int a1);  /* 0x00667e9c */
int __fastcall sub_60667FC4(int a1, _DWORD *a2);  /* 0x00667fc4 */
int __fastcall sub_6066848C(int a1);  /* 0x0066848c */
int __fastcall sub_60668C48(int a1);  /* 0x00668c48 */
int __fastcall sub_60669534(int a1);  /* 0x00669534 */
int __fastcall sub_6066971C(int a1);  /* 0x0066971c */
int __fastcall sub_60669A8C(int a1);  /* 0x00669a8c */
int __fastcall sub_60669B8C(int result);  /* 0x00669b8c */
int __fastcall lift_zen_hammer_ref(int a1, _DWORD *a2);  /* 0x0066a6b0 */
int __fastcall sub_6066A9C4(int a1);  /* 0x0066a9c4 */
int __fastcall sub_6066B39C(int a1);  /* 0x0066b39c */
int __fastcall sub_6066C3FC(_DWORD *a1, int *a2);  /* 0x0066c3fc */
int __fastcall sub_6066CA94(int a1);  /* 0x0066ca94 */
int __fastcall lift_zen_hashi_tomegu_ref(int a1);  /* 0x0066ccb0 */
int __fastcall sub_6066CED4(int a1);  /* 0x0066ced4 */
int __fastcall sub_6066D434(int a1);  /* 0x0066d434 */
int __fastcall sub_6066D564(int a1);  /* 0x0066d564 */
int __fastcall sub_6066D73C(int a1);  /* 0x0066d73c */
int __fastcall sub_6066F5A4(int a1, int a2);  /* 0x0066f5a4 */
int __fastcall sub_6066F7B4(_DWORD *a1, unsigned int a2, _DWORD *a3, int a4);  /* 0x0066f7b4 */
int __fastcall sub_6066FAC0(_DWORD *a1, int a2);  /* 0x0066fac0 */
int __fastcall sub_6066FCB4(int a1);  /* 0x0066fcb4 */
int __fastcall SE_OBJ_CMN_TOUCH_MOVE_LV_ref_3(int a1);  /* 0x0067008c */
int __fastcall sub_606702FC(int a1);  /* 0x006702fc */
int __fastcall sub_60670C2C(int a1);  /* 0x00670c2c */
int __fastcall SpinningStar_onCreate(int a1);  /* 0x00672aac */
int __fastcall sub_60672DC8(float *a1);  /* 0x00672dc8 */
int __fastcall SpinningStar_onExecute(int a1);  /* 0x00673140 */
int __fastcall SpinningStar_onDraw(int a1, int a2, int a3, int a4);  /* 0x0067348c */
int __fastcall sub_606734DC(_WORD *a1);  /* 0x006734dc */
bool __fastcall SpinningStar_checkRTTI(int a1, int a2);  /* 0x006736ac */
void __fastcall SpinningStar_dtor(int a1);  /* 0x006737b0 */
int __fastcall SpinningStar_dtorFree(int a1);  /* 0x00673800 */
int __fastcall sub_60673858(int a1);  /* 0x00673858 */
int __fastcall sub_60674470(int result, float *a2);  /* 0x00674470 */
int __fastcall SE_OBJ_TOUCH_STARLIFT_ref(int a1, int a2, int a3);  /* 0x00674544 */
int __fastcall sub_60674EA4(int a1, int a2);  /* 0x00674ea4 */
int __fastcall sub_6067506C(int a1);  /* 0x0067506c */
int __fastcall sub_606753A0(int a1);  /* 0x006753a0 */
int __fastcall sub_60675744(_DWORD *a1, int a2, int a3);  /* 0x00675744 */
int __fastcall sub_60675C18(int a1);  /* 0x00675c18 */
int __fastcall lift_zen_yoko_ref(int *a1, _DWORD *a2);  /* 0x00675d3c */
int __fastcall lift_zen_yoko_ref_2(int a1);  /* 0x00676258 */
int __fastcall sub_60676378(float *a1);  /* 0x00676378 */
int __fastcall sub_606767B4(int result, int a2, int a3);  /* 0x006767b4 */
int __fastcall sub_606768FC(unsigned __int8 *a1);  /* 0x006768fc */
int __fastcall sub_6067699C(int a1);  /* 0x0067699c */
int __fastcall sub_606769E4(int a1, float *a2);  /* 0x006769e4 */
int __fastcall sub_60676B28(int a1);  /* 0x00676b28 */
int __fastcall sub_60676F28(int a1, _BYTE *a2);  /* 0x00676f28 */
int __fastcall sub_60676FFC(int result, int a2, int a3);  /* 0x00676ffc */
int __fastcall sub_60677174(_BYTE *a1);  /* 0x00677174 */
int __fastcall Actor_light_ruburoku_build(int a1);  /* 0x00677380 */
int __fastcall sub_6067757C(int a1);  /* 0x0067757c */
int __fastcall sub_60677EC4(int a1);  /* 0x00677ec4 */
int __fastcall Actor_chibiyoshi_light_ru_build(int a1);  /* 0x0067834c */
int __fastcall sub_606789F4(int a1, int a2);  /* 0x006789f4 */
bool __fastcall sub_60678E1C(int a1);  /* 0x00678e1c */
int __fastcall SE_PLY_CH_YOSHI_LIGHT_ref(int a1);  /* 0x00678fd8 */
int __fastcall cube_kinoko_M_ref(int a1);  /* 0x00679e6c */
int __fastcall sub_6067A0EC(int a1);  /* 0x0067a0ec */
int __fastcall sub_6067AABC(int a1);  /* 0x0067aabc */
int __fastcall sub_6067BDD0(int a1);  /* 0x0067bdd0 */
int __fastcall sub_6067BE94(int a1);  /* 0x0067be94 */
int __fastcall sub_6067C324(int a1);  /* 0x0067c324 */
int __fastcall sub_6067C4DC(int a1);  /* 0x0067c4dc */
int __fastcall sub_6067C624(int a1);  /* 0x0067c624 */
int __fastcall sub_6067C718(int a1);  /* 0x0067c718 */
int __fastcall sub_6067C890(_DWORD *a1);  /* 0x0067c890 */
int __fastcall sub_6067C904(int a1);  /* 0x0067c904 */
int __fastcall sub_6067D3EC(int a1, int a2, float *a3, char a4, int a5, int a6);  /* 0x0067d3ec */
int __fastcall sub_6067D628(int result, float *a2, int a3);  /* 0x0067d628 */
int __fastcall sub_6067D68C(int a1);  /* 0x0067d68c */
int __fastcall sub_6067D6D8(int a1);  /* 0x0067d6d8 */
int __fastcall sub_6067D8B4(int a1);  /* 0x0067d8b4 */
int __fastcall sub_6067D9D0(int a1, int a2, int a3, int a4);  /* 0x0067d9d0 */
int __fastcall sub_6067DA10(int a1);  /* 0x0067da10 */
int __fastcall sub_6067DBD0(int result, float *a2);  /* 0x0067dbd0 */
int __fastcall sub_6067DC50(int a1, float *a2);  /* 0x0067dc50 */
int __fastcall sub_6067DD1C(int a1, float *a2);  /* 0x0067dd1c */
int __fastcall SE_EMY_LIFT_LINE_HPDP_BODY_ref(int a1);  /* 0x0067dde8 */
int __fastcall SE_EMY_LIFT_LINE_ref(int a1);  /* 0x0067e054 */
int __fastcall sub_6067EADC(int a1, int a2, float *a3, char a4, unsigned int a5, int a6, int a7);  /* 0x0067eadc */
int __fastcall sub_6067EC2C(_DWORD *a1, int a2);  /* 0x0067ec2c */
int __fastcall sub_6067EF7C(int result, int a2, int a3, int a4);  /* 0x0067ef7c */
int __fastcall sub_6067EFAC(int a1);  /* 0x0067efac */
int __fastcall sub_6067F09C(unsigned __int8 *a1);  /* 0x0067f09c */
int __fastcall sub_6067F108(int a1, float *a2);  /* 0x0067f108 */
bool __fastcall sub_6067F184(int *a1);  /* 0x0067f184 */
int __fastcall sub_6067F45C(int a1, float *a2, int a3);  /* 0x0067f45c */
int __fastcall sub_606801CC(int a1);  /* 0x006801cc */
int __fastcall sub_60680830(int a1);  /* 0x00680830 */
int __fastcall SE_OBJ_KP_ref(_DWORD *a1);  /* 0x00680c10 */
int __fastcall SE_OBJ_KP_ref_2(int a1);  /* 0x00681458 */
int __fastcall sub_60681908(int a1);  /* 0x00681908 */
int __fastcall sub_606819D4(int a1);  /* 0x006819d4 */
int __fastcall sub_60681BD8(int a1);  /* 0x00681bd8 */
int __fastcall sub_606822CC(int a1, int a2, int a3, int a4);  /* 0x006822cc */
int __fastcall sub_606824CC(int a1);  /* 0x006824cc */
int __fastcall sub_60682FDC(_DWORD *a1);  /* 0x00682fdc */
int __fastcall sub_606832F0(int a1);  /* 0x006832f0 */
int __fastcall sub_606836FC(int a1);  /* 0x006836fc */
int __fastcall gu_wait00_ref(int a1);  /* 0x00683960 */
int __fastcall gu_attack00_ref(int a1);  /* 0x00683a70 */
int __fastcall gu_attack01_ref(int a1);  /* 0x00683b88 */
int __fastcall gu_attack02_ref(int a1);  /* 0x00683c98 */
int __fastcall gu_raise00_ref(int a1);  /* 0x00683da8 */
int __fastcall gu_feint00_ref(int a1);  /* 0x00683eb8 */
int __fastcall sub_60684748(_DWORD *a1);  /* 0x00684748 */
int __fastcall sub_60684B20(int a1);  /* 0x00684b20 */
int __fastcall sub_60684E28(int a1);  /* 0x00684e28 */
int __fastcall sub_60686F98(int a1);  /* 0x00686f98 */
int __fastcall sub_6068769C(int a1);  /* 0x0068769c */
int __fastcall sub_60687C18(int result, int a2);  /* 0x00687c18 */
int __fastcall sub_60688140(int a1);  /* 0x00688140 */
int __fastcall sub_60688374(int a1);  /* 0x00688374 */
int __fastcall sub_60688668(int a1, float *a2, int a3, int a4, int a5);  /* 0x00688668 */
int __fastcall sub_60688878(int a1);  /* 0x00688878 */
int __fastcall sub_60688F88(_DWORD *a1, int a2);  /* 0x00688f88 */
int __fastcall sub_606897FC(int a1);  /* 0x006897fc */
int __fastcall lift_maruta_ref(int a1);  /* 0x00689a70 */
int __fastcall sub_60689D78(int a1);  /* 0x00689d78 */
int __fastcall sub_6068A038(int a1);  /* 0x0068a038 */
int __fastcall sub_6068ABEC(int a1, int a2, int a3, int a4);  /* 0x0068abec */
int __fastcall sub_6068AD50(int a1);  /* 0x0068ad50 */
int __fastcall sub_6068AD84(int a1, int a2);  /* 0x0068ad84 */
int __fastcall sub_6068B3C4(_DWORD *a1, int a2);  /* 0x0068b3c4 */
int __fastcall sub_6068B644(int a1);  /* 0x0068b644 */
int __fastcall sub_6068B678(int a1, int a2, int a3);  /* 0x0068b678 */
int __fastcall sub_6068B6D8(int a1);  /* 0x0068b6d8 */
int __fastcall sub_6068B778(_DWORD *a1, int a2, int a3);  /* 0x0068b778 */
int __fastcall sub_6068B7CC(_DWORD *a1);  /* 0x0068b7cc */
int __fastcall MaskManager_createInstance_(int a1);  /* 0x0068b8e8 */
int __fastcall MaskManager_ctor(int a1);  /* 0x0068bb2c */
int __fastcall sub_6068C060(int a1);  /* 0x0068c060 */
int __fastcall sub_6068C0CC(int a1);  /* 0x0068c0cc */
int __fastcall sub_6068C290(int a1);  /* 0x0068c290 */
int __fastcall sub_6068C2EC(int a1);  /* 0x0068c2ec */
int __fastcall sub_6068C464(_DWORD *a1);  /* 0x0068c464 */
bool __fastcall sub_6068C5D0(int a1);  /* 0x0068c5d0 */
int __fastcall sub_6068C8E0(int a1, int *a2, int *a3);  /* 0x0068c8e0 */
bool __fastcall sub_6068CA40(int a1, float *a2, float *a3);  /* 0x0068ca40 */
int __fastcall sub_6068CB4C(int a1);  /* 0x0068cb4c */
int __fastcall sub_6068CDB8(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4);  /* 0x0068cdb8 */
int __fastcall sub_6068D194(int a1);  /* 0x0068d194 */
int __fastcall sub_6068D904(int a1);  /* 0x0068d904 */
int __fastcall sub_6068DB28(int a1);  /* 0x0068db28 */
int __fastcall SE_OBJ_IWAHEM_SHOCK_ref(int a1);  /* 0x0068dc78 */
unsigned int __fastcall sub_6068E0F4(int a1);  /* 0x0068e0f4 */
int __fastcall sub_6068E378(int a1);  /* 0x0068e378 */
int __fastcall sub_6068E4E4(int a1);  /* 0x0068e4e4 */
int __fastcall sub_6068E614(int a1, float *a2, float *a3);  /* 0x0068e614 */
unsigned int __fastcall sub_6068E788(int a1);  /* 0x0068e788 */
int __fastcall sub_60690BAC(int *a1, int a2, int a3, int a4);  /* 0x00690bac */
int __fastcall sub_60690CB8(int a1, int a2);  /* 0x00690cb8 */
int __fastcall sub_60690D34(int a1);  /* 0x00690d34 */
bool __fastcall sub_60690D70(int a1);  /* 0x00690d70 */
int __fastcall SE_OBJ_IWAHEM_SHOCK_ref_2(int a1);  /* 0x00691588 */
int __fastcall sub_606917EC(int a1);  /* 0x006917ec */
int __fastcall sub_60691B4C(int a1);  /* 0x00691b4c */
unsigned int __fastcall sub_60691D3C(int a1);  /* 0x00691d3c */
int __fastcall sub_60693478(int **a1, int a2, int a3);  /* 0x00693478 */
int __fastcall Actor_monoreruburoku_reru_build(int a1);  /* 0x00693578 */
int __fastcall sub_60693594(int a1, int a2);  /* 0x00693594 */
int __fastcall sub_60693A00(int a1);  /* 0x00693a00 */
int __fastcall sub_60693F1C(int a1, int a2, int a3);  /* 0x00693f1c */
int __fastcall sub_60694258(int a1, float *a2);  /* 0x00694258 */
int __fastcall sub_6069455C(int a1);  /* 0x0069455c */
int __fastcall sub_60694680(int a1, int a2, int a3, int a4, int a5);  /* 0x00694680 */
int __fastcall sub_60694A20(int a1);  /* 0x00694a20 */
int __fastcall sub_60694D6C(int a1);  /* 0x00694d6c */
int __fastcall sub_60694FD4(int result);  /* 0x00694fd4 */
int __fastcall sub_60695168(_DWORD *a1);  /* 0x00695168 */
int __fastcall sub_60696A80(int a1);  /* 0x00696a80 */
int __fastcall sub_60696E28(int result, int a2, int a3);  /* 0x00696e28 */
int __fastcall sub_60696F6C(int a1, float *a2);  /* 0x00696f6c */
int __fastcall sub_606970A8(int result, int a2, int a3);  /* 0x006970a8 */
int __fastcall sub_6069723C(int a1, _BYTE *a2);  /* 0x0069723c */
int __fastcall sub_60698718(int a1);  /* 0x00698718 */
int __fastcall sub_60699180(int a1);  /* 0x00699180 */
int __fastcall sub_60699BB4(int result, int a2, int a3);  /* 0x00699bb4 */
int __fastcall SE_OBJ_NUT_REVERT_ref(int a1);  /* 0x00699f5c */
int __fastcall SE_OBJ_NUT_ROLL_ref(int a1);  /* 0x0069a0e8 */
int __fastcall obj_nut_ref(int a1);  /* 0x0069a238 */
int __fastcall sub_6069A5B0(_DWORD *a1);  /* 0x0069a5b0 */
unsigned int __fastcall sub_6069A76C(unsigned int *a1);  /* 0x0069a76c */
int __fastcall sub_6069AFA0(int a1, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5);  /* 0x0069afa0 */
int __fastcall sub_6069B070(float *a1, float *a2);  /* 0x0069b070 */
int __fastcall Actor_obujekinoko_build(int a1);  /* 0x0069b198 */
int __fastcall sub_6069B6F4(float *a1, int a2);  /* 0x0069b6f4 */
int __fastcall sub_6069B8C4(int a1, int a2, _DWORD *a3, unsigned int a4, int a5, int a6);  /* 0x0069b8c4 */
int __fastcall sub_6069BB38(_DWORD *a1, int a2, int a3);  /* 0x0069bb38 */
int __fastcall sub_6069BE24(int a1, _DWORD *a2, float *a3);  /* 0x0069be24 */
int __fastcall sub_6069BF80(int result, _DWORD *a2, float *a3);  /* 0x0069bf80 */
int __fastcall sub_6069C058(int a1, int a2);  /* 0x0069c058 */
int __fastcall sub_6069C0C0(int a1, int a2);  /* 0x0069c0c0 */
int __fastcall Actor_mamemariofor_OBJpipe_build(int a1);  /* 0x0069c220 */
int __fastcall Actor_mamemariofor_OBJpipe_2_build(int a1);  /* 0x0069c3c4 */
int __fastcall Actor_mamemariofor_OBJpipe_3_build(int a1);  /* 0x0069c568 */
int __fastcall Actor_mamemariofor_OBJpipe_4_build(int a1);  /* 0x0069c714 */
int __fastcall sub_6069D2D0(_DWORD *a1, int a2, int a3, int a4);  /* 0x0069d2d0 */
int __fastcall sub_6069D354(int a1);  /* 0x0069d354 */
int __fastcall sub_6069D760(int a1, int a2, _DWORD *a3);  /* 0x0069d760 */
int __fastcall sub_6069DBD8(int *a1, int a2);  /* 0x0069dbd8 */
int __fastcall sub_6069DFE8(int a1, float *a2, int a3, int a4, int a5, char a6, char a7);  /* 0x0069dfe8 */
int __fastcall sub_6069E178(int a1, _DWORD *a2);  /* 0x0069e178 */
int __fastcall sub_6069E56C(int a1, _DWORD *a2, int a3, int a4);  /* 0x0069e56c */
int __fastcall sub_6069E5A4(int a1, int a2, int a3, int a4, int a5);  /* 0x0069e5a4 */
int __fastcall sub_6069E608(int a1, int a2);  /* 0x0069e608 */
int __fastcall sub_6069E698(int a1, int a2, int a3, int a4, int a5, int a6, int a7);  /* 0x0069e698 */
int __fastcall sub_6069E88C(int a1);  /* 0x0069e88c */
int __fastcall sub_606A1F24(int a1);  /* 0x006a1f24 */
int __fastcall sub_606A22C0(int a1);  /* 0x006a22c0 */
int __fastcall env_snow_ref(int a1);  /* 0x006a37a8 */
int __fastcall sub_606A5188(int a1);  /* 0x006a5188 */
int __fastcall sub_606A6130(int a1);  /* 0x006a6130 */
int __fastcall sub_606A6418(_DWORD *a1);  /* 0x006a6418 */
int __fastcall sub_606A6464(int a1, int a2, int a3, int a4);  /* 0x006a6464 */
int __fastcall Actor_neshikutariOBJ_parent_build(int a1);  /* 0x006a73f0 */
int __fastcall sub_606A7794(int a1, int a2);  /* 0x006a7794 */
void __fastcall sub_606A7D28(int a1, unsigned int a2, int a3, int a4);  /* 0x006a7d28 */
int __fastcall sub_606A7E80(int a1, int a2);  /* 0x006a7e80 */
void __fastcall sub_606A7EB8(int a1, unsigned int a2, unsigned int a3);  /* 0x006a7eb8 */
int __fastcall sub_606A7F18(int a1);  /* 0x006a7f18 */
int __fastcall sub_606A8084(int a1);  /* 0x006a8084 */
int __fastcall sub_606A8FA4(int a1, int a2);  /* 0x006a8fa4 */
int __fastcall sub_606A97A0(int a1);  /* 0x006a97a0 */
int __fastcall sub_606AA628(int a1);  /* 0x006aa628 */
bool __fastcall sub_606ACDF0(int a1);  /* 0x006acdf0 */
int __fastcall Actor_parentchild_obuje_child_fort_rock_RDashfor_build(int a1);  /* 0x006acfdc */
int __fastcall sub_606AD38C(int a1);  /* 0x006ad38c */
int __fastcall sub_606AD6EC(int a1);  /* 0x006ad6ec */
int __fastcall sub_606ADA80(int result);  /* 0x006ada80 */
int __fastcall sub_606AE084(int a1);  /* 0x006ae084 */
int __fastcall sub_606AE248(int a1, _DWORD *a2, unsigned int a3);  /* 0x006ae248 */
int __fastcall Actor_child_tree_build(int a1);  /* 0x006ae7d8 */
int __fastcall sub_606AE7F4(int a1, int a2);  /* 0x006ae7f4 */
int __fastcall sub_606AEC9C(int a1);  /* 0x006aec9c */
int __fastcall SE_OBJ_PALM_SWING_ref(int a1);  /* 0x006aef8c */
int __fastcall sub_606AF2F8(int a1);  /* 0x006af2f8 */
void __fastcall sub_606AF450(int a1);  /* 0x006af450 */
int __fastcall MovementHandler_executeState_FindController(int a1);  /* 0x006af948 */
int __fastcall MovementHandler_beginState_Linked(int result);  /* 0x006af978 */
int __fastcall MovementHandler_executeState_Linked(int a1);  /* 0x006af984 */
int __fastcall MovementHandler_findMovementController(int a1);  /* 0x006afce8 */
int __fastcall MovementHandler_initFromStruct(int a1, int *a2);  /* 0x006b09f0 */
int __fastcall MovementHandler_init3(int a1, int *a2, int a3, char a4, _DWORD *a5, char a6, char a7, char a8, int a9);  /* 0x006b0af8 */
int __fastcall MovementHandler_init2(int a1, int *a2, int a3, char a4, int a5, int a6);  /* 0x006b0bf8 */
int __fastcall sub_606B0CCC(int a1, int *a2, int a3, char a4, _DWORD *a5, int a6);  /* 0x006b0ccc */
int __fastcall sub_606B0DAC(int a1, int *a2, int a3, char a4, int a5);  /* 0x006b0dac */
int __fastcall sub_606B1188(int result, int a2);  /* 0x006b1188 */
int __fastcall sub_606B12C4(int a1, int a2);  /* 0x006b12c4 */
int __fastcall sub_606B140C(int result);  /* 0x006b140c */
int __fastcall sub_606B1860(int result);  /* 0x006b1860 */
int __fastcall sub_606B19B0(int result);  /* 0x006b19b0 */
int __fastcall sub_606B1B94(int result);  /* 0x006b1b94 */
int __fastcall sub_606B1CC8(int result);  /* 0x006b1cc8 */
int __fastcall sub_606B1DF8(int result);  /* 0x006b1df8 */
int __fastcall sub_606B1F50(int result);  /* 0x006b1f50 */
int __fastcall sub_606B1F8C(int result);  /* 0x006b1f8c */
int __fastcall sub_606B2104(int result);  /* 0x006b2104 */
int __fastcall State_MovementHandler_dtorFree(int a1);  /* 0x006b235c */
int __fastcall SE_OBJ_COIN_POP_UP_S_ref(int a1);  /* 0x006b2578 */
int __fastcall sub_606B2940(int a1);  /* 0x006b2940 */
int __fastcall sub_606B2A18(int a1, unsigned int a2, unsigned int a3, char a4, char a5, char a6);  /* 0x006b2a18 */
int __fastcall sub_606B2C4C(int a1);  /* 0x006b2c4c */
int __fastcall sub_606B2DE8(int result);  /* 0x006b2de8 */
int __fastcall sub_606B2F00(int result);  /* 0x006b2f00 */
int __fastcall sub_606B35BC(_DWORD *a1);  /* 0x006b35bc */
int __fastcall sub_606B3690(_DWORD *a1, unsigned int a2, unsigned int a3, char a4, char a5, char a6);  /* 0x006b3690 */
int __fastcall sub_606B37CC(_DWORD *a1, int a2);  /* 0x006b37cc */
int __fastcall sub_606B3858(_DWORD *a1);  /* 0x006b3858 */
int __fastcall sub_606B3928(int result);  /* 0x006b3928 */
int __fastcall sub_606B395C(int result, int a2, char a3, char a4, int a5);  /* 0x006b395c */
int __fastcall sub_606B39DC(int result);  /* 0x006b39dc */
unsigned int __fastcall sub_606B4928(int a1, int a2, int a3);  /* 0x006b4928 */
int __fastcall sub_606B4C80(int a1);  /* 0x006b4c80 */
int __fastcall sub_606B4E90(int a1, int a2, int a3, __int64 *a4);  /* 0x006b4e90 */
int __fastcall sub_606B4F08(int a1, int32x2_t *a2);  /* 0x006b4f08 */
int __fastcall sub_606B51C0(int a1);  /* 0x006b51c0 */
int __fastcall sub_606B5548(int a1);  /* 0x006b5548 */
int __fastcall sub_606B5FF4(int a1);  /* 0x006b5ff4 */
int __fastcall sub_606B61B0(int a1);  /* 0x006b61b0 */
int __fastcall sub_606B62C8(int a1);  /* 0x006b62c8 */
int __fastcall sub_606B6400(int a1);  /* 0x006b6400 */
int __fastcall sub_606B65D8(int a1);  /* 0x006b65d8 */
int __fastcall sub_606B67E8(_DWORD *a1, int a2);  /* 0x006b67e8 */
int __fastcall sub_606B6C50(int result, int a2, int a3);  /* 0x006b6c50 */
int __fastcall sub_606B6CA4(int result, int a2, int a3);  /* 0x006b6ca4 */
bool __fastcall sub_606B6EAC(int a1, int a2);  /* 0x006b6eac */
int __fastcall sub_606B72B4(_DWORD *a1);  /* 0x006b72b4 */
int __fastcall sub_606B7DB0(int a1);  /* 0x006b7db0 */
int __fastcall sub_606B99AC(_DWORD *a1);  /* 0x006b99ac */
int __fastcall sub_606B9E9C(_DWORD *a1);  /* 0x006b9e9c */
int __fastcall sub_606BA1C0(int a1);  /* 0x006ba1c0 */
int __fastcall sub_606BA3D4(_DWORD *a1);  /* 0x006ba3d4 */
int __fastcall sub_606BA968(int *a1, int *a2, int a3);  /* 0x006ba968 */
int __fastcall sub_606BAB1C(int *a1, int *a2, int a3);  /* 0x006bab1c */
int __fastcall Actor_Player_level_miTag_build(int a1);  /* 0x006bab74 */
int __fastcall sub_606BAB90(int a1, int a2);  /* 0x006bab90 */
int __fastcall sub_606BB7B8(int a1);  /* 0x006bb7b8 */
int __fastcall sub_606BB874(int a1, unsigned int a2, int a3, int a4, int a5, int a6, int a7, int a8);  /* 0x006bb874 */
int __fastcall sub_606BBA3C(int a1);  /* 0x006bba3c */
int __fastcall PowBlock_ctor(_DWORD *a1);  /* 0x006bc194 */
int __fastcall PowBlock_onCreate(int a1);  /* 0x006bcb34 */
int __fastcall sub_606BCDA4(int a1);  /* 0x006bcda4 */
int __fastcall block_fly_ref(_DWORD *a1);  /* 0x006be84c */
bool __fastcall sub_606BFC24(int a1);  /* 0x006bfc24 */
int __fastcall sub_606C0AF8(int a1);  /* 0x006c0af8 */
int __fastcall sub_606C12E0(int a1);  /* 0x006c12e0 */
int __fastcall sub_606C18D0(int a1);  /* 0x006c18d0 */
int __fastcall sub_606C2B2C(int a1);  /* 0x006c2b2c */
int __fastcall sub_606C2C48(int a1);  /* 0x006c2c48 */
int __fastcall sub_606C3CD4(int a1);  /* 0x006c3cd4 */
int __fastcall sub_606C3E70(int a1);  /* 0x006c3e70 */
int __fastcall sub_606C4030(int a1, _DWORD *a2, unsigned int a3);  /* 0x006c4030 */
int __fastcall sub_606C4544(int a1);  /* 0x006c4544 */
int __fastcall sub_606C4608(int a1, unsigned int a2, int a3, int a4, int a5, int a6, int a7, int a8);  /* 0x006c4608 */
int __fastcall sub_606C480C(int a1);  /* 0x006c480c */
int __fastcall sub_606C4880(int a1);  /* 0x006c4880 */
int __fastcall RedCoin_onCreate(int a1);  /* 0x006c4ed8 */
int __fastcall sub_606C59CC(int a1);  /* 0x006c59cc */
int __fastcall sub_606C5AA0(int a1);  /* 0x006c5aa0 */
int __fastcall sub_606C5B88(int *a1, int a2, int a3, _DWORD *a4);  /* 0x006c5b88 */
int __fastcall sub_606C5F0C(unsigned int a1);  /* 0x006c5f0c */
int __fastcall sub_606C5F4C(unsigned int a1, int a2, int a3, int *a4, int a5);  /* 0x006c5f4c */
int __fastcall sub_606C6638(int a1);  /* 0x006c6638 */
int __fastcall sub_606C70B4(int a1);  /* 0x006c70b4 */
int __fastcall SE_SYS_STOCK_ITEM_USE_ref_2(int a1);  /* 0x006c728c */
int __fastcall sub_606C75EC(int a1);  /* 0x006c75ec */
int __fastcall sub_606C77EC(int result);  /* 0x006c77ec */
int __fastcall RedCoin_onExecute(int a1);  /* 0x006c79a0 */
int __fastcall sub_606C7B7C(int result);  /* 0x006c7b7c */
int __fastcall sub_606C7C4C(int a1);  /* 0x006c7c4c */
int __fastcall sub_606C7EB8(int a1);  /* 0x006c7eb8 */
int __fastcall sub_606C8408(int a1, int a2);  /* 0x006c8408 */
int __fastcall sub_606C87D8(int a1, int a2);  /* 0x006c87d8 */
int __fastcall sub_606C8974(int a1);  /* 0x006c8974 */
int __fastcall sub_606C8B1C(int a1);  /* 0x006c8b1c */
int __fastcall sub_606C8B5C(int a1);  /* 0x006c8b5c */
int __fastcall sub_606C8BA0(int a1);  /* 0x006c8ba0 */
int __fastcall sub_606C8C0C(int a1);  /* 0x006c8c0c */
int __fastcall sub_606C8E88(int a1);  /* 0x006c8e88 */
int __fastcall Actor_condition_Flag_with_rotate_control_build(int a1);  /* 0x006c9a5c */
int __fastcall Actor_condition_Flag_with_rotate_control_2_build(int a1);  /* 0x006c9ae8 */
int __fastcall sub_606C9B04(int a1, int a2);  /* 0x006c9b04 */
int __fastcall sub_606CA124(_DWORD *a1, int a2, int a3);  /* 0x006ca124 */
int __fastcall StoneEye_onCreate(_DWORD *a1);  /* 0x006ca1ec */
bool __fastcall sub_606CA390(Actor *a1);  /* 0x006ca390 */
int __fastcall sub_606CA41C(int a1, int a2);  /* 0x006ca41c */
int __fastcall sub_606CA9C4(int a1);  /* 0x006ca9c4 */
int __fastcall sub_606CABE0(int a1);  /* 0x006cabe0 */
int __fastcall sub_606CB408(int a1);  /* 0x006cb408 */
int __fastcall SE_OBJ_STONE_LAND_ref(int a1);  /* 0x006cb594 */
int __fastcall lift_zen_chika_pori_ref(int a1, _DWORD *a2);  /* 0x006cb77c */
bool __fastcall sub_606CC6D8(int a1);  /* 0x006cc6d8 */
int __fastcall sub_606CCAC0(int a1);  /* 0x006ccac0 */
int __fastcall SE_OBJ_METAL_BOX_LAND_ref(int a1);  /* 0x006cdd88 */
unsigned int __fastcall sub_606CF204(int *a1, int a2);  /* 0x006cf204 */
int __fastcall sub_606CFAA4(int a1, int a2);  /* 0x006cfaa4 */
int __fastcall sub_606CFD50(int a1, float *a2);  /* 0x006cfd50 */
int __fastcall Actor_mid_faiaba_build(int a1);  /* 0x006d0168 */
int __fastcall sub_606D0514(int a1);  /* 0x006d0514 */
int __fastcall sub_606D0708(int a1);  /* 0x006d0708 */
int __fastcall sub_606D114C(int a1);  /* 0x006d114c */
int __fastcall sub_606D2410(int a1, int a2, int a3);  /* 0x006d2410 */
int __fastcall sub_606D2458(int a1, int a2);  /* 0x006d2458 */
int __fastcall sub_606D26BC(int a1);  /* 0x006d26bc */
int __fastcall sub_606D27A4(int a1);  /* 0x006d27a4 */
int __fastcall SE_OBJ_CMN_QUAKE_ref(int a1, int a2);  /* 0x006d2ac4 */
int __fastcall sub_606D38D0(int a1);  /* 0x006d38d0 */
int __fastcall sub_606D4150(int a1);  /* 0x006d4150 */
int __fastcall sub_606D41DC(int a1);  /* 0x006d41dc */
int __fastcall sub_606D4268(int a1);  /* 0x006d4268 */
int __fastcall sub_606D42F4(int a1);  /* 0x006d42f4 */
int __fastcall sub_606D4384(int *a1, int a2);  /* 0x006d4384 */
int __fastcall sub_606D45B8(_DWORD *a1, _DWORD *a2, int *a3, int a4);  /* 0x006d45b8 */
int __fastcall sub_606D46F0(int a1, int a2);  /* 0x006d46f0 */
int __fastcall sub_606D4728(int a1, int a2);  /* 0x006d4728 */
bool __fastcall sub_606D4788(unsigned __int8 *a1, int a2);  /* 0x006d4788 */
int __fastcall sub_606D48C0(_DWORD *a1, int (__fastcall ***a2)(_DWORD, int), int a3);  /* 0x006d48c0 */
int __fastcall sub_606D4980(float *a1, unsigned int *a2, int a3, float *a4, int a5);  /* 0x006d4980 */
int __fastcall sub_606D4ABC(int a1);  /* 0x006d4abc */
int __fastcall sub_606D4B48(int a1);  /* 0x006d4b48 */
int __fastcall sub_606D4BD4(int a1);  /* 0x006d4bd4 */
int __fastcall Seaweed_onCreate(int a1);  /* 0x006d4ca8 */
int __fastcall Seaweed_onExecute(int a1);  /* 0x006d4f08 */
int __fastcall Seaweed_onDraw(int a1, int a2, int a3, int a4);  /* 0x006d4f58 */
signed int __fastcall Seaweed_setupModels(int a1);  /* 0x006d4fb8 */
int __fastcall Seaweed_dtorFree(Actor *a1);  /* 0x006d5540 */
bool __fastcall sub_606D5768(int a1);  /* 0x006d5768 */
int __fastcall Actor_ice_buroku_teru_build(int a1);  /* 0x006d5be8 */
int __fastcall ice_A1_ref(int a1);  /* 0x006d5e18 */
int __fastcall SE_OBJ_PNGN_ICE_SLIDE_ref_2(int a1);  /* 0x006d7408 */
int __fastcall sub_606D7EA4(int a1);  /* 0x006d7ea4 */
int __fastcall sub_606D8338(_DWORD *a1, _DWORD *a2, int a3);  /* 0x006d8338 */
int __fastcall ball_ice_ref(int a1);  /* 0x006d869c */
int __fastcall sub_606D9058(int result, int a2);  /* 0x006d9058 */
int __fastcall lift_turi_ashiba_wire_ref(_DWORD *a1);  /* 0x006d942c */
int __fastcall pol_shokudai_ref(int a1);  /* 0x006d96d8 */
int __fastcall sub_606D9818(int a1);  /* 0x006d9818 */
int __fastcall SE_OBJ_TREASURE_BOX_OPEN_ref(int a1);  /* 0x006da2f0 */
int __fastcall sub_606DB1A8(_DWORD *a1);  /* 0x006db1a8 */
int __fastcall sub_606DB31C(int result, unsigned int a2);  /* 0x006db31c */
int __fastcall sub_606DB5A8(int a1);  /* 0x006db5a8 */
int __fastcall sub_606DC080(int a1);  /* 0x006dc080 */
int __fastcall sub_606DC1F0(int a1);  /* 0x006dc1f0 */
int __fastcall sub_606DC8A4(_DWORD *a1);  /* 0x006dc8a4 */
int __fastcall SE_OBJ_DAIKONBOU_L_ref(int a1);  /* 0x006ddafc */
int __fastcall SE_OBJ_DAIKONBOU_L_REVERT_ref(int a1);  /* 0x006dddc8 */
int __fastcall SE_OBJ_DAIKONBOU_L_SIGN_ref_3(int a1);  /* 0x006de39c */
int __fastcall sub_606DF470(_DWORD *a1, int a2);  /* 0x006df470 */
int __fastcall sub_606DF4A4(int result, int a2);  /* 0x006df4a4 */
int __fastcall SE_BOSS_KOOPA_AUX_FALL_ref(int a1);  /* 0x006df9f8 */
int __fastcall sub_606E064C(int a1);  /* 0x006e064c */
int __fastcall SE_OBJ_STEP_ON_SWITCH_ref(int a1);  /* 0x006e0a98 */
int __fastcall SE_OBJ_SWITCH_APP_AGAIN_ref(int a1);  /* 0x006e1408 */
int __fastcall SE_OBJ_SWITCH_APP_AGAIN_ref_2(int a1);  /* 0x006e1518 */
int __fastcall sub_606E1CB4(int a1);  /* 0x006e1cb4 */
bool __fastcall sub_606E2CAC(_DWORD *a1);  /* 0x006e2cac */
int __fastcall sub_606E2E20(int a1);  /* 0x006e2e20 */
int __fastcall switch_hatena_ref(int a1);  /* 0x006e35b0 */
int __fastcall sub_606E369C(int a1);  /* 0x006e369c */
int __fastcall up_switch_hatena_ref(int a1);  /* 0x006e37d8 */
int __fastcall switch_hatena_all_root_ref(int a1);  /* 0x006e38ec */
int __fastcall switch_P_ref(int a1);  /* 0x006e3c9c */
int __fastcall sub_606E3D88(int a1);  /* 0x006e3d88 */
int __fastcall up_switch_P_ref(int a1);  /* 0x006e3f0c */
int __fastcall switch_P_all_root_ref(int a1);  /* 0x006e4054 */
int __fastcall Chain_ctor(int a1);  /* 0x006e4be8 */
int __fastcall SwingingVine_ctor(int a1);  /* 0x006e4db8 */
int __fastcall sub_606E5000(int a1, int a2);  /* 0x006e5000 */
int __fastcall sub_606E5160(int result);  /* 0x006e5160 */
unsigned int __fastcall sub_606E5468(int a1);  /* 0x006e5468 */
int __fastcall sub_606E5828(int a1);  /* 0x006e5828 */
int __fastcall sub_606E5E10(int a1);  /* 0x006e5e10 */
int __fastcall sub_606E69A0(int a1);  /* 0x006e69a0 */
__int64 __fastcall sub_606E6A1C(int a1);  /* 0x006e6a1c */
int __fastcall sub_606E6B44(int a1);  /* 0x006e6b44 */
int __fastcall sub_606E6DC8(_DWORD *a1);  /* 0x006e6dc8 */
int __fastcall SE_OBJ_TEKKYU_CRASH_ref_2(float *a1);  /* 0x006e73d8 */
int __fastcall sub_606E74C4(int a1);  /* 0x006e74c4 */
int __fastcall sub_606E750C(int a1);  /* 0x006e750c */
int __fastcall sub_606E75A8(int a1);  /* 0x006e75a8 */
int __fastcall sub_606E7BA8(int result);  /* 0x006e7ba8 */
int __fastcall sub_606E7BF8(int a1);  /* 0x006e7bf8 */
int __fastcall SE_OBJ_TEKKYU_L_ROLL_ref_2(int a1);  /* 0x006e7fc4 */
int __fastcall sub_606E8220(int result);  /* 0x006e8220 */
int __fastcall sub_606E832C(int a1);  /* 0x006e832c */
int __fastcall sub_606E84F8(int a1);  /* 0x006e84f8 */
int __fastcall sub_606E8BAC(int a1);  /* 0x006e8bac */
int __fastcall sub_606E8D80(int a1);  /* 0x006e8d80 */
int __fastcall sub_606E8DFC(int a1);  /* 0x006e8dfc */
void __fastcall sub_606E8F68(int a1);  /* 0x006e8f68 */
int __fastcall sub_606E8FE8(int a1);  /* 0x006e8fe8 */
int __fastcall sub_606E9054(int a1);  /* 0x006e9054 */
int __fastcall sub_606E9E8C(int a1, int a2, _DWORD *a3);  /* 0x006e9e8c */
int __fastcall sub_606E9EE8(int result, int a2);  /* 0x006e9ee8 */
int __fastcall sub_606EA09C(int a1, int *a2, int a3);  /* 0x006ea09c */
int __fastcall sub_606EA1E4(int a1, float *a2, int a3);  /* 0x006ea1e4 */
int __fastcall sub_606EA364(int a1, float *a2);  /* 0x006ea364 */
int __fastcall sub_606EA7A4(int a1, float *a2);  /* 0x006ea7a4 */
bool __fastcall sub_606EA8E8(int a1, float *a2, int a3, int a4, int a5);  /* 0x006ea8e8 */
int __fastcall sub_606EAE84(_DWORD *a1);  /* 0x006eae84 */
int __fastcall sub_606EB040(int a1);  /* 0x006eb040 */
int __fastcall sub_606EB468(int a1);  /* 0x006eb468 */
int __fastcall sub_606EB9D4(int a1);  /* 0x006eb9d4 */
int __fastcall sub_606EBCF0(int a1, _BYTE *a2);  /* 0x006ebcf0 */
int __fastcall sub_606ECF10(int *a1, int a2);  /* 0x006ecf10 */
int __fastcall sub_606ED1F8(int a1, unsigned int a2);  /* 0x006ed1f8 */
int __fastcall sub_606ED22C(int *a1);  /* 0x006ed22c */
int __fastcall sub_606ED2F0(int *a1);  /* 0x006ed2f0 */
int __fastcall sub_606ED404(int *a1);  /* 0x006ed404 */
int __fastcall sub_606ED668(int a1);  /* 0x006ed668 */
int __fastcall sub_606ED7CC(int a1);  /* 0x006ed7cc */
int __fastcall sub_606ED8EC(int a1);  /* 0x006ed8ec */
int __fastcall sub_606ED9B4(int a1);  /* 0x006ed9b4 */
int __fastcall sub_606ED9E4(int result, float *a2);  /* 0x006ed9e4 */
int __fastcall sub_606EDE74(int a1, _BYTE *a2);  /* 0x006ede74 */
int __fastcall sub_606EDFE4(int a1, _BYTE *a2);  /* 0x006edfe4 */
bool __fastcall sub_606EEC50(int a1);  /* 0x006eec50 */
int __fastcall sub_606EEEC4(int a1);  /* 0x006eeec4 */
int __fastcall Actor_pipe_kishi_build(int a1);  /* 0x006ef2fc */
int __fastcall sub_606EF7A8(int a1);  /* 0x006ef7a8 */
int __fastcall sub_606EFFF0(float *a1);  /* 0x006efff0 */
int __fastcall sub_606F0630(int *a1);  /* 0x006f0630 */
int __fastcall sub_606F07AC(_DWORD *a1);  /* 0x006f07ac */
int __fastcall sub_606F0C28(int a1);  /* 0x006f0c28 */
unsigned int __fastcall sub_606F0D70(int a1);  /* 0x006f0d70 */
int __fastcall sub_606F140C(int a1, int *a2);  /* 0x006f140c */
int __fastcall sub_606F1918(int a1);  /* 0x006f1918 */
int __fastcall sub_606F23C8(int a1);  /* 0x006f23c8 */
int __fastcall sub_606F25C8(int a1);  /* 0x006f25c8 */
int __fastcall sub_606F26D0(float *a1);  /* 0x006f26d0 */
void __fastcall sub_606F2C4C(_DWORD *a1);  /* 0x006f2c4c */
int __fastcall sub_606F4044(int a1);  /* 0x006f4044 */
int __fastcall sub_606F4650(int a1, unsigned int a2);  /* 0x006f4650 */
float __fastcall sub_606F4A88(int a1);  /* 0x006f4a88 */
int __fastcall sub_606F5378(int a1);  /* 0x006f5378 */
int __fastcall sub_606F53C4(int result);  /* 0x006f53c4 */
int __fastcall sub_606F544C(int a1);  /* 0x006f544c */
int __fastcall sub_606F5548(int *a1);  /* 0x006f5548 */
unsigned int __fastcall sub_606F5974(int a1);  /* 0x006f5974 */
bool __fastcall sub_606F5CB4(float *a1, float *a2);  /* 0x006f5cb4 */
int __fastcall sub_606F5E18(int a1);  /* 0x006f5e18 */
unsigned int __fastcall sub_606F5F3C(int a1);  /* 0x006f5f3c */
int __fastcall sub_606F60C0(int *a1);  /* 0x006f60c0 */
int __fastcall sub_606F6364(int a1, unsigned __int8 *a2);  /* 0x006f6364 */
int __fastcall sub_606F6590(int a1, int a2);  /* 0x006f6590 */
int __fastcall sub_606F6798(int a1, int a2);  /* 0x006f6798 */
bool __fastcall sub_606F6A14(float *a1, int a2);  /* 0x006f6a14 */
int __fastcall SE_AMB_WATERPILLAR_SPOUT_ref(int a1);  /* 0x006f780c */
int __fastcall SE_AMB_WATERPILLAR_SPOUT_ref_2(int a1);  /* 0x006fd76c */
int __fastcall sub_606FDDF8(int a1);  /* 0x006fddf8 */
int __fastcall sub_606FE3C0(int *a1);  /* 0x006fe3c0 */
float __fastcall sub_606FE65C(int a1);  /* 0x006fe65c */
int __fastcall sub_606FED80(int *a1);  /* 0x006fed80 */
int __fastcall sub_606FF04C(int a1);  /* 0x006ff04c */
int __fastcall sub_606FF4BC(int a1);  /* 0x006ff4bc */
int __fastcall sub_606FF620(int result);  /* 0x006ff620 */
int __fastcall sub_606FF890(int result);  /* 0x006ff890 */
bool __fastcall sub_606FFCBC(float *a1, int a2);  /* 0x006ffcbc */
int __fastcall sub_606FFE1C(int a1, unsigned __int8 *a2);  /* 0x006ffe1c */
int __fastcall sub_607000C8(int a1, int a2);  /* 0x007000c8 */
int __fastcall sub_607002CC(int a1, int a2);  /* 0x007002cc */
int __fastcall sub_6070098C(int a1);  /* 0x0070098c */
int __fastcall sub_60700A2C(int a1);  /* 0x00700a2c */
bool __fastcall sub_60700AA4(int a1);  /* 0x00700aa4 */
int __fastcall SE_AMB_WATERPILLAR_SPOUT_ref_3(int a1);  /* 0x00701c8c */
int __fastcall FloatingBubble_onCreate(int a1);  /* 0x00703160 */
int __fastcall sub_607035EC(int a1, int a2);  /* 0x007035ec */
int __fastcall sub_6070382C(_DWORD *a1);  /* 0x0070382c */
int __fastcall FloatingBubble_onExecute(int a1);  /* 0x007039a4 */
int __fastcall FloatingBubble_onDraw(int a1, int a2, int a3, int a4);  /* 0x00703c2c */
int __fastcall sub_60703E9C(int a1, float *a2);  /* 0x00703e9c */
int __fastcall sub_607045A4(int a1);  /* 0x007045a4 */
int __fastcall sub_60704A44(int a1);  /* 0x00704a44 */
int __fastcall sub_60704B6C(int a1);  /* 0x00704b6c */
int __fastcall sub_60704F9C(int result);  /* 0x00704f9c */
int __fastcall TerrainEffects_ctor(int a1);  /* 0x00705470 */
int __fastcall TerrainEffects_init(int a1, char a2, int a3, int a4, int a5);  /* 0x0070554c */
unsigned int __fastcall sub_607057F0(int a1, int a2, int a3);  /* 0x007057f0 */
int __fastcall TerrainEffects_setWaveValues(int result, int a2, int a3, int a4, int a5, int a6, int a7);  /* 0x00705e2c */
int __fastcall TerrainEffects_update(int a1);  /* 0x00705f6c */
int __fastcall sub_607067D8(int a1);  /* 0x007067d8 */
int __fastcall sub_60706A70(int a1);  /* 0x00706a70 */
int __fastcall sub_60706EA0(int result);  /* 0x00706ea0 */
int __fastcall sub_60707290(int a1, int a2, int a3);  /* 0x00707290 */
unsigned int __fastcall TerrainEffects_draw(int a1);  /* 0x00707390 */
int __fastcall sub_60707504(int a1);  /* 0x00707504 */
int __fastcall sub_60707734(int a1, _BYTE *a2, _BYTE *a3);  /* 0x00707734 */
int __fastcall sub_607095F4(int *a1);  /* 0x007095f4 */
int __fastcall sub_60709EBC(int a1);  /* 0x00709ebc */
int __fastcall sub_6070A2F8(int a1, _DWORD *a2);  /* 0x0070a2f8 */
int __fastcall sub_6070A6C4(int a1);  /* 0x0070a6c4 */
int __fastcall sub_6070AA8C(int a1);  /* 0x0070aa8c */
int __fastcall sub_6070BBE0(int a1);  /* 0x0070bbe0 */
float __fastcall ef_firepillar_ref(int a1);  /* 0x0070c688 */
int __fastcall SE_AMB_FIREPILLAR_SPOUT_ref(float *a1);  /* 0x0070c91c */
int __fastcall sub_6070CC54(_DWORD *a1);  /* 0x0070cc54 */
int __fastcall sub_6070D240(float *a1);  /* 0x0070d240 */
int __fastcall sub_6070D81C(int *a1, int a2);  /* 0x0070d81c */
int __fastcall sub_6070F8E0(_DWORD *a1);  /* 0x0070f8e0 */
int __fastcall sub_6070FAA0(int a1, unsigned int a2);  /* 0x0070faa0 */
int __fastcall sub_6070FC1C(_DWORD *a1);  /* 0x0070fc1c */
int __fastcall sub_6071046C(int a1);  /* 0x0071046c */
int __fastcall TileMgr_createInstance(int a1);  /* 0x00710cb8 */
int __fastcall TileMgr_ctor(int a1);  /* 0x00710d40 */
int __fastcall sub_60711A78(int a1);  /* 0x00711a78 */
int __fastcall sub_60711B4C(int a1);  /* 0x00711b4c */
int __fastcall sub_60711D18(int a1);  /* 0x00711d18 */
int __fastcall sub_60712434(int a1);  /* 0x00712434 */
int __fastcall sub_60712498(int a1, int a2);  /* 0x00712498 */
int __fastcall sub_60715DC8(int a1);  /* 0x00715dc8 */
int __fastcall sub_60715E18(int a1, int a2, int a3, int a4);  /* 0x00715e18 */
int __fastcall sub_60715E94(int a1, int a2, int a3, int a4);  /* 0x00715e94 */
unsigned int __fastcall sub_60715F24(int a1, int a2, int a3, int a4, int a5);  /* 0x00715f24 */
int __fastcall TileMgr_splashRelated(int result, _DWORD *a2, int a3, int a4);  /* 0x00715fb4 */
int __fastcall sub_60716054(int result, _DWORD *a2, int a3, int a4);  /* 0x00716054 */
unsigned int __fastcall sub_607160F4(int a1, __int16 a2, int a3, int a4, int a5);  /* 0x007160f4 */
int __fastcall sub_607161E4(int a1, __int16 a2, int a3, int a4);  /* 0x007161e4 */
int __fastcall sub_607162B8(int a1, __int16 a2, int a3, int a4);  /* 0x007162b8 */
int __fastcall sub_6071638C(int a1, __int16 a2, int a3, int a4);  /* 0x0071638c */
int __fastcall sub_60716460(int a1, int a2, int a3, int a4, int a5);  /* 0x00716460 */
int __fastcall sub_60716778(int a1, unsigned int a2, int a3, int a4);  /* 0x00716778 */
bool __fastcall sub_60716838(int a1, unsigned int a2, int a3, int a4);  /* 0x00716838 */
int __fastcall sub_6071689C(int result, char a2, char a3, int a4);  /* 0x0071689c */
int __fastcall sub_60716A00(int a1);  /* 0x00716a00 */
int __fastcall sub_60718420(int result, unsigned int a2, char a3);  /* 0x00718420 */
int __fastcall sub_607186E4(int a1);  /* 0x007186e4 */
int __fastcall sub_607189B4(_DWORD *a1);  /* 0x007189b4 */
int __fastcall sub_60718B04(int a1);  /* 0x00718b04 */
int __fastcall sub_60719364(int a1);  /* 0x00719364 */
int __fastcall sub_60719430(int a1, int a2);  /* 0x00719430 */
int __fastcall sub_607198F4(int result);  /* 0x007198f4 */
int __fastcall sub_60719AC0(int result, int a2, int a3, int a4);  /* 0x00719ac0 */
int __fastcall sub_60719B38(int a1, int a2, int a3, int a4, unsigned int a5);  /* 0x00719b38 */
int __fastcall sub_6071A7C8(int a1);  /* 0x0071a7c8 */
int __fastcall sub_6071A840(int a1);  /* 0x0071a840 */
int __fastcall sub_6071AA08(int a1, int a2);  /* 0x0071aa08 */
void __fastcall sub_6071AA3C(_DWORD *a1, int a2);  /* 0x0071aa3c */
void __fastcall sub_6071ABC8(int a1);  /* 0x0071abc8 */
int __fastcall sub_6071AE28(int a1);  /* 0x0071ae28 */
int __fastcall sub_6071B084(int a1, int a2);  /* 0x0071b084 */
int __fastcall TilesetManager_getTileLayer(int a1, unsigned int a2, unsigned int a3);  /* 0x0071b2d4 */
int __fastcall sub_6071B2FC(int a1, unsigned int a2, int a3, unsigned int a4);  /* 0x0071b2fc */
int __fastcall sub_6071B638(int a1, _WORD *a2);  /* 0x0071b638 */
int __fastcall sub_6071B680(int *a1, int a2);  /* 0x0071b680 */
int __fastcall sub_6071B734(int a1);  /* 0x0071b734 */
int __fastcall sub_6071B890(int a1);  /* 0x0071b890 */
int __fastcall sub_6071B908(int a1);  /* 0x0071b908 */
int __fastcall sub_6071BFB0(_DWORD *a1);  /* 0x0071bfb0 */
int __fastcall sub_6071C14C(int a1);  /* 0x0071c14c */
int __fastcall sub_6071C67C(_DWORD *a1, int a2);  /* 0x0071c67c */
int __fastcall sub_6071D7D4(int a1, int a2);  /* 0x0071d7d4 */
int __fastcall sub_6071DC78(int a1, int a2);  /* 0x0071dc78 */
int __fastcall sub_6071DF2C(int a1, int a2);  /* 0x0071df2c */
int __fastcall sub_6071DF7C(int a1, int a2);  /* 0x0071df7c */
int __fastcall sub_6071E5AC(int a1, int a2);  /* 0x0071e5ac */
int __fastcall sub_6071E5F0(int a1, int a2);  /* 0x0071e5f0 */
int __fastcall sub_6071E664(int a1, int a2);  /* 0x0071e664 */
int __fastcall sub_6071E788(int a1, int a2, int a3, float *a4, unsigned int a5);  /* 0x0071e788 */
int __fastcall sub_6071E9D0(int *a1, _DWORD *a2);  /* 0x0071e9d0 */
int __fastcall sub_6071EB78(int a1, int a2);  /* 0x0071eb78 */
int __fastcall sub_6071EC70(int a1, int a2);  /* 0x0071ec70 */
int __fastcall sub_6071ED70(int a1, int a2);  /* 0x0071ed70 */
int __fastcall sub_6071F0DC(int a1, _DWORD *a2);  /* 0x0071f0dc */
int __fastcall sub_6071F19C(int result, int a2);  /* 0x0071f19c */
int __fastcall sub_6071F340(int a1);  /* 0x0071f340 */
int __fastcall sub_6071F3A8(int a1, int a2);  /* 0x0071f3a8 */
int __fastcall sub_6071F644(int a1, _DWORD *a2);  /* 0x0071f644 */
int __fastcall sub_6071F6CC(_DWORD *a1, int a2);  /* 0x0071f6cc */
int __fastcall sub_6071FA10(int a1, int a2);  /* 0x0071fa10 */
int __fastcall sub_6071FCAC(int a1, _DWORD *a2);  /* 0x0071fcac */
int __fastcall sub_6071FD34(_DWORD *a1, int a2);  /* 0x0071fd34 */
int __fastcall sub_60720018(int a1, int a2, int a3, float *a4, _DWORD *a5, float *a6);  /* 0x00720018 */
int __fastcall sub_607201B0(int result, unsigned int a2, float *a3, unsigned int a4);  /* 0x007201b0 */
int __fastcall sub_607206D0(int a1, int a2, int a3);  /* 0x007206d0 */
int __fastcall sub_60720844(int a1, int a2, unsigned int a3, unsigned int a4, void (__fastcall ***a5)(_DWORD, int));  /* 0x00720844 */
int __fastcall sub_60720B98(int result, unsigned int a2, _DWORD *a3, unsigned int a4);  /* 0x00720b98 */
int __fastcall sub_60721380(int a1);  /* 0x00721380 */
int __fastcall sub_607214B0(int a1);  /* 0x007214b0 */
int __fastcall sub_6072166C(int a1);  /* 0x0072166c */
int __fastcall sub_60721780(int a1, int a2);  /* 0x00721780 */
int __fastcall sub_60722468(int a1);  /* 0x00722468 */
int __fastcall sub_607229E8(int a1, int a2, unsigned int a3, unsigned int a4, unsigned int a5, int a6);  /* 0x007229e8 */
int __fastcall sub_60722C30(int a1, int a2);  /* 0x00722c30 */
int __fastcall sub_60722EF0(int a1, int a2, int a3);  /* 0x00722ef0 */
int __fastcall sub_60722FB4(int a1, unsigned __int16 *a2, int a3);  /* 0x00722fb4 */
unsigned int __fastcall sub_607231A8(int a1, int a2);  /* 0x007231a8 */
int __fastcall TileLayer_getTilePtr(int a1, unsigned int a2, unsigned int a3, unsigned int *a4);  /* 0x007232d4 */
int __fastcall sub_6072334C(int a1, _WORD *a2, int a3);  /* 0x0072334c */
int __fastcall sub_6072342C(int a1, int a2, int a3);  /* 0x0072342c */
int __fastcall sub_60723490(int a1, _WORD *a2, int a3);  /* 0x00723490 */
int __fastcall sub_60723530(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x00723530 */
int __fastcall sub_607237E8(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x007237e8 */
int __fastcall sub_60723ABC(int a1, _WORD *a2, int a3, int a4, int a5, int a6, int a7, int a8);  /* 0x00723abc */
int __fastcall sub_60723CC0(int a1, int a2, int *a3, int a4, int a5);  /* 0x00723cc0 */
int __fastcall sub_60723DD8(int result, unsigned __int16 *a2, int a3, int a4, _DWORD *a5, int a6);  /* 0x00723dd8 */
int __fastcall sub_6072415C(int a1, unsigned __int16 *a2, int a3, int a4, _DWORD *a5, int a6);  /* 0x0072415c */
int __fastcall sub_60724514(int a1, unsigned __int16 *a2, int a3, int a4, _DWORD *a5, int a6);  /* 0x00724514 */
int __fastcall sub_60724888(int a1, unsigned __int16 *a2, int a3, int a4, _DWORD *a5, int a6);  /* 0x00724888 */
int __fastcall sub_60724C40(int a1, _WORD *a2, int a3, int a4, _DWORD *a5, int a6);  /* 0x00724c40 */
int __fastcall sub_60724F6C(int a1, _WORD *a2, int a3, int a4, _DWORD *a5, int a6);  /* 0x00724f6c */
int __fastcall sub_60725214(int a1, _WORD *a2, int a3, int a4, _DWORD *a5, int a6);  /* 0x00725214 */
int __fastcall sub_607255B8(int a1, _WORD *a2, int a3, int a4, _DWORD *a5, int a6);  /* 0x007255b8 */
int __fastcall sub_607257F4(int a1, int a2, int a3, int a4);  /* 0x007257f4 */
int __fastcall sub_60725B38(int a1, int a2, int a3, int a4);  /* 0x00725b38 */
int __fastcall sub_60725CF8(int a1, int a2, int a3);  /* 0x00725cf8 */
int __fastcall sub_60726188(int a1, int a2, int a3);  /* 0x00726188 */
int __fastcall sub_607262F8(int a1, unsigned __int16 *a2);  /* 0x007262f8 */
int __fastcall sub_607263C8(int a1, unsigned __int16 *a2);  /* 0x007263c8 */
int __fastcall sub_607264C8(int a1, unsigned __int16 *a2);  /* 0x007264c8 */
int __fastcall sub_607265C8(int a1, unsigned __int16 *a2);  /* 0x007265c8 */
int __fastcall sub_60726908(int a1, int a2);  /* 0x00726908 */
int __fastcall sub_60726A40(int a1);  /* 0x00726a40 */
int __fastcall sub_60726B20(int a1);  /* 0x00726b20 */
int __fastcall sub_60726DF4(int a1);  /* 0x00726df4 */
int __fastcall sub_60726E2C(int a1);  /* 0x00726e2c */
int __fastcall sub_60726F28(int a1, int a2);  /* 0x00726f28 */
int __fastcall sub_60727340(int *a1, int a2);  /* 0x00727340 */
int __fastcall sub_607276B8(int a1, _BYTE *a2, float *a3);  /* 0x007276b8 */
int __fastcall sub_60727798(int a1, _BYTE *a2, float *a3);  /* 0x00727798 */
int __fastcall sub_60727950(_DWORD *a1, int a2);  /* 0x00727950 */
int __fastcall sub_607279C0(int *a1);  /* 0x007279c0 */
int __fastcall Level_getArea(int a1, unsigned int a2);  /* 0x00727c60 */
int __fastcall sub_60727C80(int a1, int a2);  /* 0x00727c80 */
int __fastcall sub_60727D48(int a1, int a2);  /* 0x00727d48 */
int __fastcall sub_60727E50(int a1);  /* 0x00727e50 */
int __fastcall sub_60728038(int a1);  /* 0x00728038 */
int __fastcall sub_6072815C(int a1, int a2);  /* 0x0072815c */
int __fastcall sub_60728534(_DWORD *a1, _DWORD *a2, int a3, int a4);  /* 0x00728534 */
int __fastcall sub_607287D4(_DWORD *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, int a6, int a7);  /* 0x007287d4 */
int __fastcall sub_60728B94(int result, int a2, int a3, int a4);  /* 0x00728b94 */
int __fastcall sub_60729104(int a1);  /* 0x00729104 */
int __fastcall sub_607291A8(int a1, _DWORD *a2);  /* 0x007291a8 */
int __fastcall sub_607292EC(int a1, char a2, int a3);  /* 0x007292ec */
int __fastcall sub_60729354(unsigned __int8 *a1, unsigned __int8 a2, int a3);  /* 0x00729354 */
int __fastcall sub_607293F0(int a1);  /* 0x007293f0 */
int __fastcall sub_6072962C(int a1);  /* 0x0072962c */
int __fastcall sub_607297EC(int a1, char a2, int a3);  /* 0x007297ec */
int __fastcall sub_60729980(int result);  /* 0x00729980 */
int __fastcall sub_607299E8(int a1, int a2);  /* 0x007299e8 */
int __fastcall sub_60729D00(int a1);  /* 0x00729d00 */
int __fastcall sub_60729D40(_BYTE *a1);  /* 0x00729d40 */
int __fastcall sub_6072A0B8(int a1);  /* 0x0072a0b8 */
int __fastcall EventMgr_set(int result, unsigned int a2, int a3, int a4, int a5, int a6, int a7, int a8);  /* 0x0072a4b0 */
int __fastcall sub_6072A66C(int a1, __int64 a2);  /* 0x0072a66c */
int __fastcall sub_6072A6DC(int a1, int a2, int a3);  /* 0x0072a6dc */
int __fastcall sub_6072A794(int a1, unsigned int a2, int *a3);  /* 0x0072a794 */
int __fastcall mochimakiCannon_ready_ref(int a1);  /* 0x0072a860 */
int __fastcall SE_MG_CM_CANNON_MOVE_ref(int a1);  /* 0x0072a974 */
int __fastcall sub_6072AC28(int a1);  /* 0x0072ac28 */
int __fastcall sub_6072B2F8(int a1);  /* 0x0072b2f8 */
unsigned int __fastcall sub_6072B704(int a1);  /* 0x0072b704 */
int __fastcall sub_6072B9B0(_DWORD *a1);  /* 0x0072b9b0 */
int __fastcall sub_6072BBD8(_DWORD *a1);  /* 0x0072bbd8 */
unsigned int __fastcall sub_6072C40C(unsigned int *a1, int a2);  /* 0x0072c40c */
int __fastcall SE_MG_CM_PANEL_OK_CNT_ref(int a1);  /* 0x0072d0c4 */
int __fastcall mochimakiBall_wait_ref(int a1);  /* 0x0072d1f8 */
int __fastcall mochimakiBall_fail_ref(int a1);  /* 0x0072d360 */
int __fastcall sub_6072D610(int a1);  /* 0x0072d610 */
int __fastcall sub_6072D6FC(int a1);  /* 0x0072d6fc */
int __fastcall sub_6072DA68(int a1);  /* 0x0072da68 */
int __fastcall SE_MG_SH_ITEM_NG_ref(int a1);  /* 0x0072e5c0 */
int __fastcall sub_6072EC94(int a1);  /* 0x0072ec94 */
int __fastcall sub_6072EFA0(int a1, unsigned int a2);  /* 0x0072efa0 */
int __fastcall SE_VOC_KINOPIO_TRAMPLED_ref(int a1);  /* 0x0072f790 */
int __fastcall SE_PLY_LAND_ROCK_ref(int a1);  /* 0x0072f858 */
int __fastcall sub_6072FC70(int a1);  /* 0x0072fc70 */
int __fastcall sub_6072FFD0(unsigned __int8 *a1);  /* 0x0072ffd0 */
int __fastcall sub_607305D0(_DWORD *a1);  /* 0x007305d0 */
int __fastcall sub_60730680(int a1);  /* 0x00730680 */
int __fastcall SE_PLY_CRASH_S_ref(int a1, int a2, int a3);  /* 0x007307a8 */
int __fastcall sub_60731290(int a1);  /* 0x00731290 */
int __fastcall Actor_minigemuManager_build(int a1);  /* 0x00731344 */
int __fastcall sub_607313A8(int a1, int a2);  /* 0x007313a8 */
int __fastcall TalkWindow_KinopioTbox_00_ref(int a1);  /* 0x00731664 */
int __fastcall sub_607317FC(int a1);  /* 0x007317fc */
int __fastcall sub_60732038(int a1);  /* 0x00732038 */
int __fastcall sub_60732688(int a1);  /* 0x00732688 */
int __fastcall sub_60732F4C(int a1);  /* 0x00732f4c */
unsigned int __fastcall sub_60733344(int a1, unsigned int a2);  /* 0x00733344 */
int __fastcall sub_607335A4(int a1);  /* 0x007335a4 */
int __fastcall sub_607337BC(int a1);  /* 0x007337bc */
int __fastcall shufflePanel_in_ref(int a1);  /* 0x00734064 */
int __fastcall shufflePanel_out_ref(int a1);  /* 0x00734228 */
int __fastcall sub_60734E40(int a1);  /* 0x00734e40 */
int __fastcall sub_607352AC(int a1);  /* 0x007352ac */
int __fastcall sub_607354C4(int a1);  /* 0x007354c4 */
int __fastcall sub_60737DC8(int a1, char a2, unsigned int a3);  /* 0x00737dc8 */
int __fastcall sub_60737E34(int a1);  /* 0x00737e34 */
int __fastcall sub_6073AFA4(int a1, int a2);  /* 0x0073afa4 */
int __fastcall sub_6073B6B0(unsigned __int8 *a1);  /* 0x0073b6b0 */
signed int __fastcall sub_6073B8E8(int a1);  /* 0x0073b8e8 */
unsigned int __fastcall sub_6073BA88(int a1);  /* 0x0073ba88 */
int __fastcall SE_MG_YS_OSAMARU_ref(int a1);  /* 0x0073cb88 */
int __fastcall SE_MG_YS_PANEL_HAKU_ref(int a1);  /* 0x0073cd30 */
int __fastcall Actor_surotochibiyoshi_build(_DWORD *a1);  /* 0x0073d024 */
int __fastcall sub_6073D8A8(int a1);  /* 0x0073d8a8 */
int __fastcall sub_6073DA34(int a1);  /* 0x0073da34 */
int __fastcall sub_6073DBC0(int a1);  /* 0x0073dbc0 */
bool __fastcall sub_6073ECD8(int a1);  /* 0x0073ecd8 */
int __fastcall slotPanel_wait_ref(int a1);  /* 0x0073f784 */
int __fastcall slotPanel_win_ref(int a1);  /* 0x0073fa1c */
int __fastcall slotPanel_wait_checked_ref(int a1);  /* 0x0073fa80 */
int __fastcall sub_607400D8(int a1);  /* 0x007400d8 */
int __fastcall sub_60740438(int a1);  /* 0x00740438 */
int __fastcall sub_6074250C(int a1);  /* 0x0074250c */
int __fastcall sub_60742A70(int a1);  /* 0x00742a70 */
int __fastcall sub_607435D4(int a1);  /* 0x007435d4 */
int __fastcall sub_60743778(int a1);  /* 0x00743778 */
int __fastcall sub_60743894(unsigned __int8 *a1);  /* 0x00743894 */
int __fastcall sub_60743BCC(unsigned __int8 *a1);  /* 0x00743bcc */
int __fastcall sub_607440CC(_DWORD *a1);  /* 0x007440cc */
void __fastcall sub_607442CC(_DWORD *a1);  /* 0x007442cc */
int __fastcall Actor_koinshin_StaffRoll_build(_DWORD *a1);  /* 0x00744900 */
int __fastcall sub_60745174(int a1);  /* 0x00745174 */
int __fastcall sub_60745580(float *a1);  /* 0x00745580 */
int __fastcall sub_60745A24(_DWORD *a1);  /* 0x00745a24 */
int __fastcall sub_60745C88(int a1, int a2, int a3);  /* 0x00745c88 */
int __fastcall sub_60745DF4(int a1, int a2, int a3, int a4);  /* 0x00745df4 */
int __fastcall Actor_arufabetoshin_StaffRoll_build(int *a1);  /* 0x007462b0 */
int __fastcall sub_607467E0(int a1);  /* 0x007467e0 */
int __fastcall sub_60746ADC(int a1);  /* 0x00746adc */
int __fastcall sub_60746E38(int a1, int a2, int a3, int a4, int a5);  /* 0x00746e38 */
int __fastcall sub_60746F3C(int a1, int a2);  /* 0x00746f3c */
int __fastcall sub_60746FA0(int a1);  /* 0x00746fa0 */
int __fastcall sub_60747148(int a1, float *a2, int a3);  /* 0x00747148 */
int __fastcall sub_60747C8C(int a1);  /* 0x00747c8c */
int __fastcall sub_60748A1C(int a1, _DWORD *a2, int a3);  /* 0x00748a1c */
int __fastcall sub_60748BBC(int a1);  /* 0x00748bbc */
int __fastcall sub_60748CB8(int result);  /* 0x00748cb8 */
int __fastcall sub_60748D78(int a1);  /* 0x00748d78 */
int __fastcall sub_60748EF4(int a1);  /* 0x00748ef4 */
int __fastcall sub_6074908C(int a1, float *a2);  /* 0x0074908c */
int __fastcall Actor_chibiyoshi_StaffRoll_build(_DWORD *a1);  /* 0x007496a4 */
int __fastcall sub_607498A0(int a1, char a2);  /* 0x007498a0 */
int __fastcall sub_60749958(int a1);  /* 0x00749958 */
int __fastcall sub_607499B0(int a1, float *a2);  /* 0x007499b0 */
int __fastcall Actor_StaffRoll_Manager_build(int a1);  /* 0x0074a900 */
int __fastcall sub_6074B0D0(int a1, int a2);  /* 0x0074b0d0 */
int __fastcall sub_6074B2F0(int a1);  /* 0x0074b2f0 */
int __fastcall sub_6074B6DC(int a1, int a2, float *a3);  /* 0x0074b6dc */
int __fastcall sub_6074BCD4(int a1);  /* 0x0074bcd4 */
int __fastcall sub_6074BF00(int result);  /* 0x0074bf00 */
int __fastcall sub_6074C0B8(_DWORD *a1);  /* 0x0074c0b8 */
int __fastcall sub_6074C1C8(int a1, int a2, int a3, int a4);  /* 0x0074c1c8 */
int __fastcall sub_6074C3EC(unsigned int a1);  /* 0x0074c3ec */
int __fastcall sub_6074C538(int a1, int a2, int *a3, int a4);  /* 0x0074c538 */
int __fastcall sub_6074C694(_DWORD *a1, _DWORD *a2);  /* 0x0074c694 */
int __fastcall Actor_toten_StaffRoll_build(int a1);  /* 0x0074d4c0 */
int __fastcall sub_6074DF4C(int a1, float *a2);  /* 0x0074df4c */
int __fastcall sub_6074E7F8(int a1);  /* 0x0074e7f8 */
int __fastcall sub_6074E888(int a1, int a2, int a3);  /* 0x0074e888 */
bool __fastcall sub_6074E918(int a1, _DWORD *a2);  /* 0x0074e918 */
bool __fastcall sub_6074EC10(int a1, const char **a2, unsigned int a3);  /* 0x0074ec10 */
bool __fastcall sub_6074EC70(int a1);  /* 0x0074ec70 */
int __fastcall sub_6074EE98(int result);  /* 0x0074ee98 */
int __fastcall sub_6074EED0(int a1);  /* 0x0074eed0 */
int __fastcall sub_6074F074(int result, int a2, int a3);  /* 0x0074f074 */
int __fastcall sub_6074F718(int a1);  /* 0x0074f718 */
int __fastcall sub_6074F944(_DWORD *a1);  /* 0x0074f944 */
int __fastcall sub_6074F9F4(int a1);  /* 0x0074f9f4 */
int __fastcall sub_6074FA6C(int a1);  /* 0x0074fa6c */
int __fastcall sub_607501F0(int **a1);  /* 0x007501f0 */
int __fastcall sub_607503C0(int *a1);  /* 0x007503c0 */
int __fastcall sub_60750560(int **a1, int a2, int a3, int a4, int a5);  /* 0x00750560 */
int __fastcall sub_607505EC(int *a1, int *a2);  /* 0x007505ec */
int __fastcall sub_60751808(int a1, int a2, int a3, int a4, int a5);  /* 0x00751808 */
int __fastcall sub_60751C3C(int a1);  /* 0x00751c3c */
int __fastcall CH_Metamorphose_ref(int a1, int a2);  /* 0x00756308 */
int __fastcall PB_star_color_ref(int a1);  /* 0x00756b98 */
bool __fastcall sub_60757488(float *a1, float *a2);  /* 0x00757488 */
int __fastcall sub_607578C8(int a1, int a2, int a3, int a4, int a5);  /* 0x007578c8 */
int __fastcall KB_Rgoal_puton_cap_ref(_DWORD *a1, _DWORD *a2, int a3, int a4);  /* 0x00759708 */
int __fastcall sub_6075A088(int a1, int a2, int a3, int a4, int a5);  /* 0x0075a088 */
unsigned int __fastcall PC_switch_ref(int *a1, int a2, int a3);  /* 0x0075a6e4 */
int __fastcall sub_6075B8E4(int a1, int a2);  /* 0x0075b8e4 */
int __fastcall sub_6075C02C(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10);  /* 0x0075c02c */
int __fastcall sub_6075C23C(_DWORD *a1);  /* 0x0075c23c */
int __fastcall sub_6075C304(int a1, int a2);  /* 0x0075c304 */
int __fastcall sub_6075C4E0(int a1, int a2, int *a3, int a4);  /* 0x0075c4e0 */
int __fastcall sub_6075CD88(int a1);  /* 0x0075cd88 */
int __fastcall MiiB_Rgoal_puton_cap_ref(_DWORD *a1, _DWORD *a2, int a3, int a4);  /* 0x0075d884 */
int __fastcall PlayerBase_ctor(int a1, int a2);  /* 0x0075defc */
void __fastcall sub_6075E5C0(int a1);  /* 0x0075e5c0 */
int __fastcall sub_6075E76C(int a1);  /* 0x0075e76c */
int __fastcall sub_6075E8F8(int a1);  /* 0x0075e8f8 */
int __fastcall sub_6075EAFC(int a1, unsigned int a2);  /* 0x0075eafc */
int __fastcall sub_6075EC74(int a1);  /* 0x0075ec74 */
int __fastcall sub_6075ED80(Actor *a1);  /* 0x0075ed80 */
int __fastcall sub_6075EEA0(int a1);  /* 0x0075eea0 */
int __fastcall sub_6075F36C(int a1, float *a2);  /* 0x0075f36c */
int __fastcall sub_6075F54C(int result);  /* 0x0075f54c */
int __fastcall sub_6075F5EC(int a1, float *a2);  /* 0x0075f5ec */
bool __fastcall sub_6075F914(_DWORD *a1);  /* 0x0075f914 */
int __fastcall sub_6075F980(int result, float *a2);  /* 0x0075f980 */
bool __fastcall sub_6075FA34(int a1);  /* 0x0075fa34 */
bool __fastcall sub_6075FA7C(int a1);  /* 0x0075fa7c */
int __fastcall sub_6075FB84(int a1, char a2, int a3);  /* 0x0075fb84 */
bool __fastcall sub_6075FC38(int a1);  /* 0x0075fc38 */
int __fastcall sub_6075FD24(_DWORD *a1);  /* 0x0075fd24 */
int __fastcall sub_6075FEE4(int a1, int a2);  /* 0x0075fee4 */
bool __fastcall sub_60760004(int a1, int a2);  /* 0x00760004 */
int __fastcall sub_60760034(int a1, int a2);  /* 0x00760034 */
int __fastcall sub_6076006C(int a1);  /* 0x0076006c */
int __fastcall sub_60760110(int result);  /* 0x00760110 */
int __fastcall sub_607601D4(int result, int a2);  /* 0x007601d4 */
int __fastcall sub_607604BC(int a1);  /* 0x007604bc */
int __fastcall sub_60760908(int a1);  /* 0x00760908 */
int __fastcall sub_60760B5C(int a1, float *a2);  /* 0x00760b5c */
int __fastcall sub_60760D74(int a1, int a2, char a3, int a4);  /* 0x00760d74 */
int __fastcall sub_6076107C(int a1);  /* 0x0076107c */
int __fastcall sub_607611E0(int a1, int a2);  /* 0x007611e0 */
int __fastcall sub_6076125C(int a1);  /* 0x0076125c */
int __fastcall sub_607612CC(int a1, int a2);  /* 0x007612cc */
int __fastcall sub_60761474(int a1);  /* 0x00761474 */
int __fastcall sub_607620B4(int a1);  /* 0x007620b4 */
int __fastcall sub_60762374(int a1);  /* 0x00762374 */
int __fastcall sub_607624B4(int a1);  /* 0x007624b4 */
int __fastcall sub_60762598(int a1);  /* 0x00762598 */
int __fastcall sub_60762900(int a1);  /* 0x00762900 */
int __fastcall sub_60762B3C(int a1);  /* 0x00762b3c */
bool __fastcall sub_60762E40(int a1);  /* 0x00762e40 */
bool __fastcall sub_60762E88(int a1, int a2);  /* 0x00762e88 */
unsigned int __fastcall sub_60762EC0(int a1, _DWORD *a2);  /* 0x00762ec0 */
int __fastcall sub_60763400(int result);  /* 0x00763400 */
int __fastcall sub_6076357C(int a1);  /* 0x0076357c */
unsigned int __fastcall sub_6076370C(int a1);  /* 0x0076370c */
int __fastcall sub_607637D4(int a1);  /* 0x007637d4 */
int __fastcall sub_60763AD0(int a1);  /* 0x00763ad0 */
int __fastcall sub_60763CF8(int a1);  /* 0x00763cf8 */
int __fastcall sub_60763E28(float *a1);  /* 0x00763e28 */
bool __fastcall sub_60763F08(_DWORD *a1);  /* 0x00763f08 */
int __fastcall sub_6076402C(int a1);  /* 0x0076402c */
int __fastcall sub_60764200(_DWORD *a1, int a2, int a3, int a4);  /* 0x00764200 */
int __fastcall sub_60764270(char *a1, int a2);  /* 0x00764270 */
bool __fastcall sub_60764308(int a1);  /* 0x00764308 */
int __fastcall sub_60764338(int result);  /* 0x00764338 */
int __fastcall sub_6076438C(int result);  /* 0x0076438c */
int __fastcall sub_60764488(int a1);  /* 0x00764488 */
int __fastcall sub_6076454C(int a1, int a2);  /* 0x0076454c */
int __fastcall sub_607647C0(_DWORD *a1);  /* 0x007647c0 */
int __fastcall sub_60764B00(int a1, int *a2);  /* 0x00764b00 */
int __fastcall sub_60764D14(_DWORD *a1);  /* 0x00764d14 */
int __fastcall sub_60764D88(int a1);  /* 0x00764d88 */
int __fastcall sub_60764E20(int a1);  /* 0x00764e20 */
int __fastcall sub_60764F50(_DWORD *a1);  /* 0x00764f50 */
int __fastcall sub_6076504C(int a1);  /* 0x0076504c */
int __fastcall sub_60765458(int a1, int a2, int a3, int a4);  /* 0x00765458 */
int __fastcall sub_60765670(int result);  /* 0x00765670 */
int __fastcall sub_607656A8(int result);  /* 0x007656a8 */
int __fastcall sub_607656D8(int a1, float *a2);  /* 0x007656d8 */
int __fastcall sub_60765884(int a1);  /* 0x00765884 */
int __fastcall sub_6076598C(int a1, int a2, int a3);  /* 0x0076598c */
int __fastcall sub_60765BFC(int a1, int a2, int a3);  /* 0x00765bfc */
int __fastcall sub_60765DD0(float *a1, int a2);  /* 0x00765dd0 */
int __fastcall sub_60765E78(int a1, int a2);  /* 0x00765e78 */
int __fastcall sub_60766074(int a1);  /* 0x00766074 */
int __fastcall sub_6076611C(int result, int a2, int a3);  /* 0x0076611c */
int __fastcall sub_6076617C(int result);  /* 0x0076617c */
int __fastcall sub_60766314(int a1, int a2, int a3);  /* 0x00766314 */
int __fastcall sub_607663F4(int result);  /* 0x007663f4 */
int __fastcall sub_6076645C(_DWORD *a1);  /* 0x0076645c */
bool __fastcall sub_60766714(int a1);  /* 0x00766714 */
int __fastcall sub_60766764(int a1);  /* 0x00766764 */
int __fastcall sub_60766958(int a1);  /* 0x00766958 */
bool __fastcall sub_60766AA0(int a1);  /* 0x00766aa0 */
int __fastcall sub_60766B08(_DWORD *a1, int a2);  /* 0x00766b08 */
int __fastcall sub_60767080(_DWORD *a1);  /* 0x00767080 */
int __fastcall sub_60767194(int a1);  /* 0x00767194 */
int __fastcall sub_60767234(int a1, int a2, int a3, int a4, int a5);  /* 0x00767234 */
int __fastcall sub_60767E04(int *a1, int a2, int a3);  /* 0x00767e04 */
int __fastcall sub_60767E68(int a1);  /* 0x00767e68 */
int __fastcall sub_60767F80(StageActor *a1, _DWORD *a2, int a3);  /* 0x00767f80 */
int __fastcall sub_60768030(_DWORD *a1);  /* 0x00768030 */
int __fastcall sub_607681C8(int a1);  /* 0x007681c8 */
int __fastcall sub_6076830C(int a1);  /* 0x0076830c */
int __fastcall sub_60768348(int a1);  /* 0x00768348 */
int __fastcall sub_60768384(_DWORD *a1);  /* 0x00768384 */
int __fastcall sub_607689EC(int a1, int a2);  /* 0x007689ec */
int __fastcall sub_60768A5C(int a1);  /* 0x00768a5c */
int __fastcall sub_60768AE8(int a1);  /* 0x00768ae8 */
int __fastcall sub_60768C20(int a1, _DWORD *a2);  /* 0x00768c20 */
int __fastcall sub_60768D14(int a1, int a2);  /* 0x00768d14 */
int __fastcall sub_60768DA4(int a1);  /* 0x00768da4 */
int __fastcall sub_60768E4C(int a1);  /* 0x00768e4c */
int __fastcall sub_60768F28(int a1, int a2, int a3);  /* 0x00768f28 */
bool __fastcall sub_60768FC4(int a1, int a2);  /* 0x00768fc4 */
int __fastcall sub_607692C0(int a1);  /* 0x007692c0 */
int __fastcall sub_60769398(int *a1);  /* 0x00769398 */
int __fastcall sub_607694D0(int a1);  /* 0x007694d0 */
int __fastcall sub_607695CC(int *a1);  /* 0x007695cc */
int __fastcall sub_60769700(int *a1);  /* 0x00769700 */
int __fastcall sub_60769838(int a1);  /* 0x00769838 */
int __fastcall sub_607699D4(int *a1);  /* 0x007699d4 */
bool __fastcall sub_60769B10(_BYTE *a1);  /* 0x00769b10 */
bool __fastcall sub_60769B48(_BYTE *a1);  /* 0x00769b48 */
bool __fastcall sub_60769BBC(int a1);  /* 0x00769bbc */
int __fastcall sub_60769C48(int a1, int a2);  /* 0x00769c48 */
bool __fastcall sub_60769D94(int a1, int a2);  /* 0x00769d94 */
int __fastcall sub_60769E7C(int *a1, int a2, int a3, int a4);  /* 0x00769e7c */
int __fastcall sub_6076A024(int a1, float *a2, int a3);  /* 0x0076a024 */
int __fastcall sub_6076A170(_DWORD *a1, float *a2);  /* 0x0076a170 */
int __fastcall sub_6076A210(int result, int a2);  /* 0x0076a210 */
bool __fastcall sub_6076A35C(int a1, int a2);  /* 0x0076a35c */
int __fastcall sub_6076A5C0(int a1, int a2, int a3);  /* 0x0076a5c0 */
unsigned int __fastcall sub_6076A68C(int a1, int a2, _DWORD *a3, int a4, int a5);  /* 0x0076a68c */
int __fastcall sub_6076A75C(int a1);  /* 0x0076a75c */
int __fastcall sub_6076A804(int a1);  /* 0x0076a804 */
int __fastcall sub_6076A88C(_DWORD *a1, int a2);  /* 0x0076a88c */
int __fastcall sub_6076A94C(int a1);  /* 0x0076a94c */
int __fastcall sub_6076AF84(unsigned __int8 *a1);  /* 0x0076af84 */
int __fastcall sub_6076AFBC(int a1);  /* 0x0076afbc */
int __fastcall sub_6076B644(_DWORD *a1);  /* 0x0076b644 */
int __fastcall sub_6076B6FC(int a1);  /* 0x0076b6fc */
int __fastcall sub_6076BC8C(int a1, int a2);  /* 0x0076bc8c */
int __fastcall sub_6076BE1C(unsigned __int8 *a1);  /* 0x0076be1c */
int __fastcall sub_6076CCA4(int *a1);  /* 0x0076cca4 */
int __fastcall sub_6076CD74(unsigned __int8 *a1);  /* 0x0076cd74 */
int __fastcall sub_6076CE2C(int a1);  /* 0x0076ce2c */
int __fastcall sub_6076CE90(int a1, float *a2, char a3);  /* 0x0076ce90 */
int __fastcall sub_6076D194(_DWORD *a1);  /* 0x0076d194 */
int __fastcall sub_6076D288(int *a1);  /* 0x0076d288 */
int __fastcall sub_6076D3D0(int a1);  /* 0x0076d3d0 */
int __fastcall sub_6076D814(int a1);  /* 0x0076d814 */
int __fastcall sub_6076DADC(int a1);  /* 0x0076dadc */
int __fastcall sub_6076DC6C(int a1, int a2);  /* 0x0076dc6c */
int __fastcall sub_6076DD50(_BYTE *a1);  /* 0x0076dd50 */
int __fastcall sub_6076DDA8(int a1);  /* 0x0076dda8 */
bool __fastcall sub_6076DEAC(int a1);  /* 0x0076deac */
int __fastcall sub_6076DF24(int a1);  /* 0x0076df24 */
int __fastcall sub_6076E35C(int a1);  /* 0x0076e35c */
int __fastcall sub_6076E9D8(int a1);  /* 0x0076e9d8 */
int __fastcall sub_6076EA78(int32x4_t *a1);  /* 0x0076ea78 */
int __fastcall sub_6076EAB8(int a1);  /* 0x0076eab8 */
int __fastcall sub_6076EB30(char *a1);  /* 0x0076eb30 */
int __fastcall sub_6076EB7C(int a1);  /* 0x0076eb7c */
int __fastcall sub_6076EEFC(int a1);  /* 0x0076eefc */
int __fastcall sub_6076EF58(int a1);  /* 0x0076ef58 */
int __fastcall sub_6076F03C(int a1, int a2);  /* 0x0076f03c */
int __fastcall sub_6076F0E0(int a1);  /* 0x0076f0e0 */
int __fastcall sub_6076F140(int a1);  /* 0x0076f140 */
int __fastcall sub_6076F1B4(int a1, int a2);  /* 0x0076f1b4 */
int __fastcall sub_6076F20C(char *a1, int a2);  /* 0x0076f20c */
int __fastcall sub_6076F25C(int32x4_t *a1);  /* 0x0076f25c */
int __fastcall sub_6076F3CC(_DWORD *a1);  /* 0x0076f3cc */
unsigned int __fastcall sub_6076F438(int *a1);  /* 0x0076f438 */
unsigned int __fastcall sub_6076F470(int *a1);  /* 0x0076f470 */
int __fastcall sub_6076F7F0(int a1);  /* 0x0076f7f0 */
int __fastcall sub_6076FC00(int *a1);  /* 0x0076fc00 */
int __fastcall sub_6076FCC0(int a1);  /* 0x0076fcc0 */
int __fastcall sub_6076FDD8(int32x4_t *a1);  /* 0x0076fdd8 */
int __fastcall sub_6076FE38(int result);  /* 0x0076fe38 */
int __fastcall sub_6076FEC8(int a1);  /* 0x0076fec8 */
int __fastcall sub_6076FF58(int a1);  /* 0x0076ff58 */
int __fastcall sub_60770018(_DWORD *a1);  /* 0x00770018 */
int __fastcall sub_607700D0(int *a1);  /* 0x007700d0 */
int __fastcall sub_607701BC(int a1);  /* 0x007701bc */
int __fastcall sub_607702EC(int a1);  /* 0x007702ec */
int __fastcall sub_60770484(int a1, int a2);  /* 0x00770484 */
int __fastcall sub_6077059C(int a1);  /* 0x0077059c */
int __fastcall SE_VOC_YS_STOMPED_ref(int a1);  /* 0x007707a0 */
int __fastcall sub_60770F74(int a1);  /* 0x00770f74 */
int __fastcall sub_607711C8(int a1, int a2, int a3);  /* 0x007711c8 */
int __fastcall sub_60771250(int a1, int a2, int a3);  /* 0x00771250 */
int __fastcall sub_607712D4(int a1);  /* 0x007712d4 */
int __fastcall sub_60771320(int a1);  /* 0x00771320 */
int __fastcall sub_607716F8(int result);  /* 0x007716f8 */
int __fastcall sub_607717C0(int a1);  /* 0x007717c0 */
int __fastcall sub_60771858(int a1);  /* 0x00771858 */
int __fastcall sub_60771910(int a1);  /* 0x00771910 */
int __fastcall sub_60771D48(int a1, int a2);  /* 0x00771d48 */
int __fastcall sub_60771F18(int a1);  /* 0x00771f18 */
int __fastcall sub_60772108(int a1, int a2);  /* 0x00772108 */
int __fastcall sub_60772240(int a1);  /* 0x00772240 */
int __fastcall sub_60772748(int a1, _DWORD *a2);  /* 0x00772748 */
int __fastcall sub_6077288C(int result);  /* 0x0077288c */
int __fastcall sub_607728E8(int a1);  /* 0x007728e8 */
int __fastcall sub_60772990(int result);  /* 0x00772990 */
int __fastcall sub_60772A08(_DWORD *a1);  /* 0x00772a08 */
bool __fastcall sub_60772C30(int a1);  /* 0x00772c30 */
int __fastcall sub_60772D04(int a1, int a2);  /* 0x00772d04 */
int __fastcall sub_60772E38(int a1, int a2);  /* 0x00772e38 */
int __fastcall sub_60773298(int a1);  /* 0x00773298 */
int __fastcall sub_60773318(int a1);  /* 0x00773318 */
int __fastcall sub_60773398(int a1, int a2);  /* 0x00773398 */
bool __fastcall sub_60773420(int a1);  /* 0x00773420 */
int __fastcall sub_60773464(int *a1);  /* 0x00773464 */
int __fastcall sub_607734A0(int *a1);  /* 0x007734a0 */
int __fastcall sub_607734E8(unsigned __int8 *a1, int a2, int a3, int a4);  /* 0x007734e8 */
int __fastcall sub_60773558(int a1, int a2, int a3);  /* 0x00773558 */
int __fastcall sub_607735B8(unsigned __int8 *a1, int a2, int a3, int a4, int a5);  /* 0x007735b8 */
int __fastcall sub_60773630(int a1, int a2, int a3);  /* 0x00773630 */
int __fastcall sub_607736B0(int a1);  /* 0x007736b0 */
int __fastcall sub_607736F8(int a1);  /* 0x007736f8 */
int __fastcall sub_60773968(int a1);  /* 0x00773968 */
int __fastcall sub_607739DC(int a1, int a2);  /* 0x007739dc */
int __fastcall sub_60773ABC(int a1);  /* 0x00773abc */
int __fastcall sub_60773BC4(int a1);  /* 0x00773bc4 */
int __fastcall sub_60773C98(int result);  /* 0x00773c98 */
int __fastcall Player_changeState(int a1, int a2, int a3);  /* 0x00773dc0 */
int __fastcall sub_60773E6C(int a1, int a2, int a3);  /* 0x00773e6c */
int __fastcall sub_60773F4C(int a1, int a2, int a3, int a4);  /* 0x00773f4c */
int __fastcall sub_60773F88(int a1, _DWORD *a2);  /* 0x00773f88 */
int __fastcall sub_60773FCC(int a1, int a2);  /* 0x00773fcc */
int __fastcall sub_60774040(int a1, int a2, int a3, int a4);  /* 0x00774040 */
int __fastcall sub_607740F4(int a1);  /* 0x007740f4 */
int __fastcall sub_607742E8(int a1);  /* 0x007742e8 */
unsigned int __fastcall sub_60774360(int a1);  /* 0x00774360 */
int __fastcall sub_607743E8(int a1);  /* 0x007743e8 */
int __fastcall sub_607745DC(int a1);  /* 0x007745dc */
int __fastcall sub_607746B4(int a1);  /* 0x007746b4 */
int __fastcall sub_60774778(int a1);  /* 0x00774778 */
int __fastcall sub_607747EC(int result);  /* 0x007747ec */
int __fastcall sub_60774840(float *a1);  /* 0x00774840 */
int __fastcall sub_60774A4C(int a1);  /* 0x00774a4c */
int __fastcall sub_60774AEC(int a1, int a2);  /* 0x00774aec */
int __fastcall sub_60774C10(int a1);  /* 0x00774c10 */
int __fastcall sub_60774C88(_DWORD *a1);  /* 0x00774c88 */
int __fastcall sub_60774D2C(int a1);  /* 0x00774d2c */
int __fastcall sub_60774DD8(_DWORD *a1);  /* 0x00774dd8 */
int __fastcall sub_60775188(int a1);  /* 0x00775188 */
int __fastcall sub_6077524C(int a1, int a2);  /* 0x0077524c */
int __fastcall sub_60775394(int a1, int a2);  /* 0x00775394 */
int __fastcall sub_607753D8(int a1);  /* 0x007753d8 */
int __fastcall sub_607755EC(_DWORD *a1);  /* 0x007755ec */
int __fastcall sub_60775B48(int a1);  /* 0x00775b48 */
int __fastcall sub_60777540(int a1);  /* 0x00777540 */
int __fastcall sub_6077777C(int a1);  /* 0x0077777c */
int __fastcall sub_607778BC(_DWORD *a1, int a2, int a3, int a4);  /* 0x007778bc */
int __fastcall sub_60777B9C(int a1);  /* 0x00777b9c */
bool __fastcall sub_60777BE4(int a1);  /* 0x00777be4 */
int __fastcall sub_60777C18(int a1);  /* 0x00777c18 */
int __fastcall sub_60777C78(int result);  /* 0x00777c78 */
bool __fastcall sub_60777CD0(int a1);  /* 0x00777cd0 */
int __fastcall sub_60777D04(int a1, int a2);  /* 0x00777d04 */
int __fastcall sub_60777DB4(_DWORD *a1);  /* 0x00777db4 */
int __fastcall sub_60777E74(int a1);  /* 0x00777e74 */
int __fastcall sub_60777EEC(int a1);  /* 0x00777eec */
int __fastcall sub_60777F54(int a1, int a2);  /* 0x00777f54 */
int __fastcall sub_60777FB4(int result, _DWORD *a2, int a3);  /* 0x00777fb4 */
int __fastcall sub_60778050(int a1, int a2);  /* 0x00778050 */
int __fastcall sub_607780C4(int result, int a2);  /* 0x007780c4 */
bool __fastcall sub_60778128(int a1);  /* 0x00778128 */
bool __fastcall sub_607781EC(int a1);  /* 0x007781ec */
int __fastcall sub_607782F4(_DWORD *a1);  /* 0x007782f4 */
int __fastcall sub_60778454(_DWORD *a1, int a2);  /* 0x00778454 */
int __fastcall sub_607784B8(_DWORD *a1, int a2);  /* 0x007784b8 */
int __fastcall sub_60778530(_DWORD *a1, unsigned int a2);  /* 0x00778530 */
int __fastcall sub_60778734(int a1, int a2);  /* 0x00778734 */
int __fastcall sub_6077876C(int a1);  /* 0x0077876c */
int __fastcall sub_60778AAC(int a1);  /* 0x00778aac */
int __fastcall sub_60778BFC(int a1);  /* 0x00778bfc */
int __fastcall sub_60778F88(int a1);  /* 0x00778f88 */
int __fastcall sub_6077907C(int result);  /* 0x0077907c */
int __fastcall sub_6077931C(int a1);  /* 0x0077931c */
int __fastcall sub_60779568(int a1);  /* 0x00779568 */
bool __fastcall sub_6077965C(int a1);  /* 0x0077965c */
bool __fastcall sub_60779690(int a1);  /* 0x00779690 */
int __fastcall sub_607799F0(int a1);  /* 0x007799f0 */
int __fastcall sub_60779D4C(int a1);  /* 0x00779d4c */
int __fastcall sub_60779F28(_DWORD *a1, _DWORD *a2, int a3);  /* 0x00779f28 */
int __fastcall sub_60779F74(int a1, unsigned int a2);  /* 0x00779f74 */
int __fastcall sub_6077A004(int a1, unsigned int a2);  /* 0x0077a004 */
int __fastcall sub_6077A064(int a1, int a2);  /* 0x0077a064 */
int __fastcall sub_6077A740(int a1, int a2);  /* 0x0077a740 */
int __fastcall sub_6077A918(_DWORD *a1, int a2);  /* 0x0077a918 */
int __fastcall sub_6077AFCC(int a1);  /* 0x0077afcc */
int __fastcall sub_6077B090(unsigned int *a1);  /* 0x0077b090 */
int __fastcall sub_6077B520(int a1, float *a2);  /* 0x0077b520 */
bool __fastcall sub_6077B760(int a1, int a2);  /* 0x0077b760 */
bool __fastcall sub_6077B798(int a1, int a2);  /* 0x0077b798 */

/* ---- core.c ---- */
int __fastcall sub_600005D4(int a1, int *a2);  /* 0x000005d4 */
unsigned int __fastcall sub_60000A44(int a1, int a2, int a3);  /* 0x00000a44 */
int __fastcall StageAcor_handleYspeed(int result);  /* 0x00000ffc */
int __fastcall sub_60001018(int result);  /* 0x00001018 */
int __fastcall sub_60001050(int a1, int a2);  /* 0x00001050 */
int __fastcall sub_600010DC(int a1, int a2, float *a3);  /* 0x000010dc */
int __fastcall sub_60001688(int a1, int a2, int a3);  /* 0x00001688 */
int __fastcall sub_60001814(int a1, int a2);  /* 0x00001814 */
bool __fastcall sub_60001928(int a1, int a2, int a3);  /* 0x00001928 */
int __fastcall sub_60001B14(int a1, int a2);  /* 0x00001b14 */
bool __fastcall sub_60001C34(int a1, int a2);  /* 0x00001c34 */
bool __fastcall sub_60001DB8(int a1, int a2);  /* 0x00001db8 */
int __fastcall sub_60001F3C(int a1, int a2, int a3);  /* 0x00001f3c */
int __fastcall sub_60001F90(int a1, int a2);  /* 0x00001f90 */
int __fastcall sub_600020C4(int a1, int a2);  /* 0x000020c4 */
int __fastcall sub_60002110(int a1, int a2);  /* 0x00002110 */
int __fastcall sub_600024C4(int result);  /* 0x000024c4 */
bool __fastcall sub_600025B8(int a1);  /* 0x000025b8 */
int __fastcall sub_60002BC0(unsigned int a1, int *a2);  /* 0x00002bc0 */
int __fastcall sub_60003160(_BYTE *a1);  /* 0x00003160 */
int __fastcall sub_6000346C(int a1);  /* 0x0000346c */
int __fastcall sub_600035C0(int result);  /* 0x000035c0 */
int __fastcall sub_600037A0(int result);  /* 0x000037a0 */
int __fastcall sub_60003840(int result);  /* 0x00003840 */
int __fastcall sub_6000389C(int a1, int a2);  /* 0x0000389c */
int __fastcall sub_600038DC(int result);  /* 0x000038dc */
int __fastcall sub_60003928(int a1, _DWORD *a2, int a3);  /* 0x00003928 */
int __fastcall sub_60003AE0(int a1);  /* 0x00003ae0 */
int __fastcall sub_60003B2C(int result, int a2);  /* 0x00003b2c */
int __fastcall sub_60003B88(int a1, _DWORD *a2);  /* 0x00003b88 */
int __fastcall sub_60003C60(int result, int a2);  /* 0x00003c60 */
int __fastcall sub_60004170(int a1);  /* 0x00004170 */
int __fastcall sub_600042A8(int a1);  /* 0x000042a8 */
int __fastcall sub_60004BAC(int a1, int *a2, char a3);  /* 0x00004bac */
int __fastcall sub_60004D1C(int a1, int *a2, char a3);  /* 0x00004d1c */
int __fastcall sub_60005160(int a1);  /* 0x00005160 */
int __fastcall sub_600053F8(unsigned __int8 *a1, unsigned int a2);  /* 0x000053f8 */
int __fastcall sub_6000588C(unsigned int a1);  /* 0x0000588c */
int __fastcall sub_60005B98(int a1);  /* 0x00005b98 */
int __fastcall sub_60005E40(int *a1, _BYTE *a2, unsigned __int16 *a3, int *a4, int a5);  /* 0x00005e40 */
bool __fastcall sub_60006098(int *a1, int a2, int a3, int a4);  /* 0x00006098 */
int __fastcall sub_6000614C(int a1, int a2, int a3);  /* 0x0000614c */
int __fastcall sub_60006500(int a1, int a2);  /* 0x00006500 */
int __fastcall sub_6000683C(int *a1);  /* 0x0000683c */
int __fastcall sub_60006CD8(unsigned __int8 *a1, int a2);  /* 0x00006cd8 */
bool __fastcall sub_60007208(float *a1, float *a2);  /* 0x00007208 */
bool __fastcall sub_600072A0(float *a1);  /* 0x000072a0 */
bool __fastcall sub_60007318(float *a1);  /* 0x00007318 */
int __fastcall sub_600074EC(int a1);  /* 0x000074ec */
int __fastcall sub_60007858(int a1, int a2);  /* 0x00007858 */
int __fastcall sub_60007B5C(int a1, int a2);  /* 0x00007b5c */
int __fastcall sub_60007BF0(int result, int *a2);  /* 0x00007bf0 */
int __fastcall ActorMgr_unk(int a1, int *a2);  /* 0x00007c5c */
int __fastcall sub_60007C88(_DWORD *a1);  /* 0x00007c88 */
int __fastcall sub_600082CC(int a1, int a2, char a3);  /* 0x000082cc */
int __fastcall sub_60008458(_DWORD *a1, Actor *a2);  /* 0x00008458 */
int __fastcall sub_60008598(int a1, int a2);  /* 0x00008598 */
int __fastcall sub_600085D0(int a1, int a2);  /* 0x000085d0 */
int __fastcall sub_60008608(_DWORD *a1);  /* 0x00008608 */
int __fastcall sub_600087D8(_DWORD *a1);  /* 0x000087d8 */
int __fastcall sub_600089B0(int a1, int a2);  /* 0x000089b0 */
int __fastcall sub_60008A7C(int a1, int a2, int a3);  /* 0x00008a7c */
int __fastcall sub_60008BC8(int a1, int a2);  /* 0x00008bc8 */
unsigned int __fastcall sub_60008D1C(int a1, int (__fastcall ***a2)(_DWORD), unsigned int a3);  /* 0x00008d1c */
int __fastcall ActorMgrRelated_getById(int a1, unsigned int a2);  /* 0x00008dfc */
int __fastcall sub_60008E44(int a1, int (__fastcall ***a2)(_DWORD));  /* 0x00008e44 */
int __fastcall sub_60008EB4(int result, int (*a2)(void));  /* 0x00008eb4 */
unsigned int __fastcall LoadProfileArchives(int a1, int a2);  /* 0x00008f10 */
int __fastcall UnsetResourcesLoadedForAllProfiles(int result);  /* 0x00009250 */
bool __fastcall sub_60009904(int a1);  /* 0x00009904 */
int __fastcall sub_60009B2C(int a1);  /* 0x00009b2c */
int __fastcall sub_60009BA4(int a1);  /* 0x00009ba4 */
int __fastcall sub_60009D74(int a1);  /* 0x00009d74 */
int __fastcall sub_60009EC0(_DWORD *a1);  /* 0x00009ec0 */
int __fastcall sub_6000A2E8(int a1, unsigned int a2);  /* 0x0000a2e8 */
int __fastcall sub_6000A454(int a1);  /* 0x0000a454 */
int __fastcall sub_6000A488(_BYTE *a1);  /* 0x0000a488 */
int __fastcall sub_6000A53C(_BYTE *a1);  /* 0x0000a53c */
int __fastcall sub_6000A650(_BYTE *a1);  /* 0x0000a650 */
int __fastcall distanceToPLayer(float *a1, float *a2);  /* 0x0000aa44 */
bool __fastcall sub_6000ADDC(int a1, int a2);  /* 0x0000addc */
bool __fastcall sub_6000AED0(int a1, int a2);  /* 0x0000aed0 */
bool __fastcall sub_6000B0F8(_DWORD *a1);  /* 0x0000b0f8 */
void __fastcall sub_6000B29C(sead::IDisposer *a1);  /* 0x0000b29c */
int __fastcall PlayerLookTargetList_add(int a1, int a2);  /* 0x0000b4d4 */
int __fastcall sub_6000B538(int a1, int a2, float *a3);  /* 0x0000b538 */
int __fastcall sub_6000B690(unsigned int *a1, int a2);  /* 0x0000b690 */
int __fastcall sub_6000BB08(unsigned int *a1);  /* 0x0000bb08 */
int __fastcall sub_6000BBD4(int a1, int (__fastcall ***a2)(_DWORD, int));  /* 0x0000bbd4 */
int __fastcall sub_6000BE68(int a1, int a2);  /* 0x0000be68 */
int __fastcall sub_6000BF78(int a1, int (__fastcall ***a2)(_DWORD, int));  /* 0x0000bf78 */
int __fastcall sub_6000C0F4(unsigned int *a1);  /* 0x0000c0f4 */
int __fastcall LineFollower_init(int a1, float *a2, char a3, char a4, int a5);  /* 0x0000f198 */
int __fastcall LineFollower_start(int a1, int a2);  /* 0x0000f370 */
int __fastcall sub_6000F520(int result);  /* 0x0000f520 */
int __fastcall sub_6000F620(int a1, float *a2, float *a3, float *a4);  /* 0x0000f620 */
int __fastcall sub_6000F8AC(int a1, float *a2);  /* 0x0000f8ac */
int __fastcall sub_6000F9C0(int a1, float *a2);  /* 0x0000f9c0 */
int __fastcall sub_6000FAD4(int a1, float *a2);  /* 0x0000fad4 */
int __fastcall sub_6000FBEC(int a1, float *a2);  /* 0x0000fbec */
unsigned int __fastcall sub_6000FD08(int a1);  /* 0x0000fd08 */
int __fastcall sub_6001185C(int a1, unsigned int a2, float *a3, int a4);  /* 0x0001185c */
int __fastcall sub_60011DD4(int a1, unsigned int a2, float *a3, int a4);  /* 0x00011dd4 */
int __fastcall sub_60012280(int a1, unsigned int a2, float *a3, int a4);  /* 0x00012280 */
int __fastcall sub_60012810(int a1, unsigned int a2, float *a3, int a4);  /* 0x00012810 */
int __fastcall sub_60012D5C(int a1, float *a2, int a3);  /* 0x00012d5c */
int __fastcall sub_60012E98(int a1, float *a2);  /* 0x00012e98 */
int __fastcall sub_60012FA4(int a1, float *a2, int a3);  /* 0x00012fa4 */
int __fastcall sub_600130B4(int a1, float *a2, int a3);  /* 0x000130b4 */
int __fastcall sub_600131F4(int a1, float *a2);  /* 0x000131f4 */
int __fastcall sub_600132FC(int a1, float *a2, int a3);  /* 0x000132fc */
int __fastcall sub_60013408(int a1);  /* 0x00013408 */
int __fastcall sub_60013668(int a1);  /* 0x00013668 */
int __fastcall sub_600138E0(int a1);  /* 0x000138e0 */
int __fastcall sub_60013B40(int a1);  /* 0x00013b40 */
int __fastcall Profile_loadResources(int result, int a2);  /* 0x00017fcc */
int __fastcall Profile_unsetResourcesLoaded(int result);  /* 0x00018238 */
int __fastcall Profile_getPriority(unsigned int a1);  /* 0x0001839c */
int __fastcall Profile_getHasResources(unsigned int a1);  /* 0x000183c8 */
int __fastcall Profile_getResourceCountById(unsigned int a1);  /* 0x000183f0 */
int __fastcall Profile_getResourceListById(unsigned int a1);  /* 0x00020ff0 */
int __fastcall sub_60021018(int a1);  /* 0x00021018 */
int __fastcall sub_600210C8(int result, int a2);  /* 0x000210c8 */
int __fastcall sub_60021148(int a1, int a2, int a3, int a4);  /* 0x00021148 */
int __fastcall sub_600213C4(int a1, _DWORD *a2);  /* 0x000213c4 */
int __fastcall sub_60021460(int a1, int a2);  /* 0x00021460 */
int __fastcall EffectWrapper_dtorFree(sead::IDisposer *a1);  /* 0x00021864 */
bool __fastcall EffectWrapper_checkRTTI(int a1, int a2);  /* 0x00021898 */
void __fastcall sub_60021B50(int a1, int a2, int a3, int a4);  /* 0x00021b50 */
int __fastcall sub_60021C70(int a1, int a2);  /* 0x00021c70 */
int __fastcall sub_600220C0(int a1, int a2);  /* 0x000220c0 */
int __fastcall sub_600221A0(int a1, int a2, unsigned int a3);  /* 0x000221a0 */
int __fastcall sub_600222AC(int a1);  /* 0x000222ac */
void __fastcall sub_60022540(int a1, int a2, unsigned int a3, int a4, int a5);  /* 0x00022540 */
void __fastcall sub_60022760(int a1, int a2, unsigned int a3, int a4);  /* 0x00022760 */
int __fastcall sub_600227A0(int a1, int a2, unsigned int a3, int a4);  /* 0x000227a0 */
int __fastcall sub_600228BC(int a1, int a2, unsigned int a3, int a4);  /* 0x000228bc */
int __fastcall sub_600228F4(int a1, int a2, int a3);  /* 0x000228f4 */
int __fastcall sub_600229B0(int a1, int a2, int a3);  /* 0x000229b0 */
int __fastcall sub_60022A80(int a1, _DWORD *a2, unsigned int a3);  /* 0x00022a80 */
int __fastcall sub_60022BA0(int a1);  /* 0x00022ba0 */
int __fastcall BootScene_create(int a1);  /* 0x00022c68 */
int __fastcall sub_60022CC0(int a1, int *a2, int a3);  /* 0x00022cc0 */
int __fastcall AreaTask_create(int a1);  /* 0x00022dcc */
int __fastcall sub_60022DF8(int a1, int *a2);  /* 0x00022df8 */
int __fastcall sub_60022E9C(int a1);  /* 0x00022e9c */
int __fastcall sub_60023294(int a1);  /* 0x00023294 */
int __fastcall sub_60023390(int a1);  /* 0x00023390 */
int __fastcall sub_60023650(int a1);  /* 0x00023650 */
int __fastcall sub_600236D8(int a1, int a2);  /* 0x000236d8 */
unsigned int __fastcall sub_60023A34(unsigned int a1, float *a2);  /* 0x00023a34 */
int __fastcall sub_60023CB0(int *a1);  /* 0x00023cb0 */
int __fastcall sub_60023FA8(int a1);  /* 0x00023fa8 */
int __fastcall sub_600242D8(_WORD *a1, _BYTE *a2, _BYTE *a3, _BYTE *a4, __int16 a5);  /* 0x000242d8 */
int __fastcall sub_60024494(_DWORD *a1);  /* 0x00024494 */
int __fastcall TitleScene_create(int a1);  /* 0x00024728 */
int __fastcall GameSetupScene_create(int a1);  /* 0x00024808 */
int __fastcall CourseSelectTask_create(int a1);  /* 0x000248e8 */
void __fastcall sub_60025AF4(int a1, int a2, int a3, unsigned int a4);  /* 0x00025af4 */
void __fastcall sub_60025B84(int a1, int a2, int a3, unsigned int a4);  /* 0x00025b84 */
int __fastcall sub_60026BFC(_DWORD *a1);  /* 0x00026bfc */
int __fastcall MovingSoundActorHandle_dtorFree(int *a1);  /* 0x00026d94 */
bool __fastcall sub_60026DC8(int a1);  /* 0x00026dc8 */
int __fastcall sub_60027390(_DWORD *a1);  /* 0x00027390 */
int __fastcall sub_600276AC(int a1);  /* 0x000276ac */
int __fastcall sub_60027798(int a1);  /* 0x00027798 */
int __fastcall sub_60027938(int a1);  /* 0x00027938 */
int __fastcall sub_60027A7C(_DWORD *a1);  /* 0x00027a7c */
bool __fastcall sub_60027FB0(int a1);  /* 0x00027fb0 */
int __fastcall sub_6002BFD4(int a1);  /* 0x0002bfd4 */
int __fastcall sub_6002C728(int a1);  /* 0x0002c728 */
int __fastcall SE_VOC_BKK_JUMP_ref(int a1);  /* 0x0002e24c */
int __fastcall sub_6002F5B0(int a1);  /* 0x0002f5b0 */
int __fastcall sub_6002F720(int a1, float *a2, int a3);  /* 0x0002f720 */
int __fastcall sub_6002F978(int a1);  /* 0x0002f978 */
int __fastcall sub_6002FAA0(unsigned __int8 *a1);  /* 0x0002faa0 */
bool __fastcall sub_60032268(int a1);  /* 0x00032268 */
int __fastcall power_up(int a1);  /* 0x00032ecc */
int __fastcall demo_scale_up_ref(int a1);  /* 0x00033208 */
int __fastcall sub_60033374(int *a1);  /* 0x00033374 */
int __fastcall sub_60033498(int a1);  /* 0x00033498 */
int __fastcall SE_OBJ_BOSS_KK_THUNDER_L_ref(int a1);  /* 0x00033b54 */
int __fastcall SE_OBJ_BOSS_KK_THUNDER_SEPARATE_ref(_DWORD *a1);  /* 0x00033ce4 */
int __fastcall SE_OBJ_BOSS(_DWORD *a1);  /* 0x00033d4c */
int __fastcall SE_OBJ_BOSS_KK_THUNDER_ref_2(int a1);  /* 0x00033f90 */
int __fastcall SE_OBJ_CMN_TOUCH_THUNDER_ref(int a1, int a2, int a3);  /* 0x0003454c */
int __fastcall jcb_demo_battleA_ref(int a1);  /* 0x00034c20 */
int __fastcall sub_60034D14(int a1);  /* 0x00034d14 */
int __fastcall jcb_attack_ed_ref(int a1);  /* 0x00035260 */
int __fastcall SE_VOC_JR_PUNCH_GO_ref(int a1);  /* 0x00035390 */
int __fastcall SE_VOC_JR_READY_ref(int a1);  /* 0x0003656c */
int __fastcall sub_60036BF0(int a1);  /* 0x00036bf0 */
int __fastcall sub_60036DD0(int a1);  /* 0x00036dd0 */
int __fastcall sub_60037BB0(int a1, int a2, int a3);  /* 0x00037bb0 */
int __fastcall sub_60038B10(int a1);  /* 0x00038b10 */
int __fastcall jcb_damage_ref(int a1);  /* 0x00038d9c */
int __fastcall jcb_squat_ref(int a1);  /* 0x00038f0c */
int __fastcall jcb_damage_up_ref(int a1);  /* 0x00038ff8 */
bool __fastcall sub_60039D74(int a1);  /* 0x00039d74 */
int __fastcall SE_BOSS_JR_CLOWN_ref(_DWORD *a1);  /* 0x0003a894 */
int __fastcall SE_BOSS_JR_CLOWN_JAB_ref(int a1);  /* 0x0003ad74 */
int __fastcall SE_BOSS_JR_CLOWN_JAB_ref_2(int a1);  /* 0x0003ae78 */
int __fastcall jcb_jab_ref(int a1);  /* 0x0003b284 */
int __fastcall jcb_sphere_st_ref(int a1);  /* 0x0003c48c */
int __fastcall jcb_sphere_ed_ref(int a1);  /* 0x0003c868 */
int __fastcall SE_BOSS_JR_CLOWN_POSE_ref(int a1, int a2, int a3, int a4);  /* 0x0003c990 */
int __fastcall SE_BOSS_JR_CLOWN_PUNCH_REVERSE_ref(int a1);  /* 0x0003e668 */
int __fastcall jc_demo_W7_excite_ref(int a1);  /* 0x0003fd44 */
int __fastcall jc_demo_W7_shock_ref(int a1);  /* 0x0003fdc8 */
int __fastcall jc_demo_W7_panic_ref(int a1);  /* 0x00040058 */
int __fastcall sub_60040A94(int a1);  /* 0x00040a94 */
int __fastcall sub_60040F08(int a1);  /* 0x00040f08 */
int __fastcall sub_60041050(int a1, int a2, int a3, int a4);  /* 0x00041050 */
int __fastcall sub_60041198(int a1);  /* 0x00041198 */
int __fastcall sub_60041AF4(int a1);  /* 0x00041af4 */
int __fastcall sub_600424E0(int a1);  /* 0x000424e0 */
int __fastcall sub_6004398C(int a1);  /* 0x0004398c */
int __fastcall sub_60043D90(int a1, int a2);  /* 0x00043d90 */
int __fastcall sub_60044328(int a1);  /* 0x00044328 */
int __fastcall sub_60045948(int a1);  /* 0x00045948 */
int __fastcall sub_60045B70(int a1);  /* 0x00045b70 */
int __fastcall sub_60045DB4(int a1, int a2, int a3, int a4);  /* 0x00045db4 */
int __fastcall sub_60047464(int a1, unsigned int a2, int a3, int a4);  /* 0x00047464 */
int __fastcall sub_600476D0(int a1);  /* 0x000476d0 */
int __fastcall sub_6004798C(int a1, float *a2);  /* 0x0004798c */
bool __fastcall sub_60047BDC(int a1);  /* 0x00047bdc */
int __fastcall sub_60047D84(int a1, float *a2);  /* 0x00047d84 */
int __fastcall sub_6004816C(int a1);  /* 0x0004816c */
int __fastcall sub_60048388(int a1);  /* 0x00048388 */
int __fastcall sub_60048550(int a1);  /* 0x00048550 */
int __fastcall SE_BOSS_JR_CLOWN_DAMAGE_ref(int a1, int a2, int a3, int a4);  /* 0x00048e20 */
int __fastcall SE_BOSS_JR_CLOWN_COME_BOXER_ref(int a1);  /* 0x00049898 */
int __fastcall SE_BOSS_JR_CLOWN_PUNCH_ref(int a1);  /* 0x00049a28 */
bool __fastcall ColliderBase_vf10(int a1, int a2, char a3);  /* 0x0004b9b0 */
int __fastcall ColliderBase_vf14(int a1, int a2);  /* 0x0004b9e8 */
int __fastcall RectCollider_dtorFree(int a1);  /* 0x0004ba1c */
bool __fastcall RectCollider_checkRTTI(int a1, int a2);  /* 0x0004ba2c */
bool __fastcall sub_6004BAA8(int a1);  /* 0x0004baa8 */
int __fastcall sub_6004C420(int a1, float *a2, float *a3);  /* 0x0004c420 */
int __fastcall sub_6004C5C4(int a1);  /* 0x0004c5c4 */
int __fastcall sub_6004D884(int a1);  /* 0x0004d884 */
int __fastcall sub_6004E178(int a1);  /* 0x0004e178 */
bool __fastcall sub_6004F7C8(int a1);  /* 0x0004f7c8 */
int __fastcall sub_60051794(int a1, int a2, int a3);  /* 0x00051794 */
int __fastcall sub_600517F4(int a1, int a2, int a3);  /* 0x000517f4 */
int __fastcall sub_6005186C(int a1, int a2, int a3);  /* 0x0005186c */
int __fastcall sub_600518E4(int a1, _DWORD *a2);  /* 0x000518e4 */
int __fastcall sub_6005251C(int a1);  /* 0x0005251c */
int __fastcall sub_600525EC(_DWORD *a1, int a2, int a3, int a4);  /* 0x000525ec */
int __fastcall sub_60052630(_DWORD *a1, int a2, int a3, int a4);  /* 0x00052630 */
int __fastcall sub_600549F8(int a1);  /* 0x000549f8 */
int __fastcall SE_EMY_KAMECK_FLY_MAGIC_ref(int a1);  /* 0x00054b64 */
int __fastcall sub_60054DC0(int a1);  /* 0x00054dc0 */
int __fastcall sub_60055844(int a1);  /* 0x00055844 */
int __fastcall sub_60055A70(int result);  /* 0x00055a70 */
int __fastcall demo_spin_jump_ref(int a1);  /* 0x00055f40 */
int __fastcall sub_60056434(int a1);  /* 0x00056434 */
int __fastcall sub_60056578(int a1);  /* 0x00056578 */
int __fastcall sub_60056BEC(int a1);  /* 0x00056bec */
int __fastcall sub_60056D34(int a1);  /* 0x00056d34 */
void __fastcall sub_60057018(_DWORD *a1);  /* 0x00057018 */
int __fastcall sub_60057870(int a1);  /* 0x00057870 */
int __fastcall sub_60057AF8(float *a1);  /* 0x00057af8 */
int __fastcall sub_60057D54(int a1);  /* 0x00057d54 */
int __fastcall demo_jump_ref(int a1);  /* 0x0005802c */
int __fastcall sub_60058704(_DWORD *a1);  /* 0x00058704 */
int __fastcall sub_6005879C(int a1);  /* 0x0005879c */
int __fastcall larry_all_root_ref(int a1, int a2);  /* 0x0005a514 */
int __fastcall SE_EMY_BUNBUN_W5_BECOME_BIG_ref(_DWORD *a1);  /* 0x0005a968 */
bool __fastcall sub_6005B3E8(int a1);  /* 0x0005b3e8 */
int __fastcall bunbun_wing_ref(int *a1);  /* 0x0005e448 */
int __fastcall sub_6005E8EC(int a1);  /* 0x0005e8ec */
int __fastcall sub_6005EAFC(int a1, int a2, int a3, int a4);  /* 0x0005eafc */
int __fastcall sub_6005EBE4(_BYTE *a1);  /* 0x0005ebe4 */
int __fastcall SE_BOSS_ref(int *a1);  /* 0x00061e0c */
int __fastcall SE_EMY_KAMECK_FLY_MAGIC_ref_2(int a1);  /* 0x00062330 */
int __fastcall SE_AMB_KP_EARTHQUAKE_ref(int a1);  /* 0x000625c4 */
int __fastcall sub_60063AA0(int a1, _DWORD *a2);  /* 0x00063aa0 */
int __fastcall sub_60063B8C(int a1, int a2);  /* 0x00063b8c */
int __fastcall sub_60063C5C(int result, int a2);  /* 0x00063c5c */
int __fastcall sub_60063CC8(int a1, int a2);  /* 0x00063cc8 */
int __fastcall lkp_help_me_wait1_ref(int a1);  /* 0x0006477c */
int __fastcall SE_VOC_PCH_NOTICE_ref(_DWORD *a1);  /* 0x00064dec */
int __fastcall SE_VOC_PCH_SURPRISE_ref(int a1);  /* 0x00065390 */
int __fastcall sub_60065858(int a1);  /* 0x00065858 */
int __fastcall sub_60065A78(int a1);  /* 0x00065a78 */
int __fastcall SE_OBJ_WINDOW_FALL_ref(int a1);  /* 0x00066438 */
int __fastcall sub_6006677C(int a1);  /* 0x0006677c */
int __fastcall sub_600668C4(float *a1);  /* 0x000668c4 */
int __fastcall lkp_jump_ref(int a1);  /* 0x00067020 */
int __fastcall lkp_demo_battleA_ref(int a1);  /* 0x00067774 */
int __fastcall lkp_jump_st_ref(int a1);  /* 0x00068d4c */
int __fastcall lkp_fire1_ref(int *a1);  /* 0x000699f0 */
int __fastcall lkp_fire4_ref(_DWORD *a1);  /* 0x0006a144 */
int __fastcall lkp_walk_ref(int a1);  /* 0x0006a800 */
int __fastcall lkp_fire3_ref(int a1);  /* 0x0006aafc */
int __fastcall lkp_fire5_ref(int a1);  /* 0x0006b2a4 */
int __fastcall lkp_tired_ref(_WORD *a1);  /* 0x0006b734 */
int __fastcall SE_VOC_KP_L_ref(int a1);  /* 0x0006c634 */
int __fastcall lkp_damage_s_ref(_DWORD *a1);  /* 0x0006ca50 */
int __fastcall SE_BOSS_KOOPA_L_SHELL_ref(int a1);  /* 0x0006d2ec */
int __fastcall SE_BOSS_KOOPA_L_SHELL_ref_2(int a1);  /* 0x0006d50c */
int __fastcall SE_BOSS_KOOPA_L_SHELL_ROLL_ref(int a1);  /* 0x0006daf8 */
int __fastcall lkp_demo_die_fall_ref(int a1);  /* 0x0006e218 */
int __fastcall sub_6006EA78(int a1);  /* 0x0006ea78 */
int __fastcall sub_6006EF5C(int a1);  /* 0x0006ef5c */
int __fastcall sub_6006F4A4(int a1);  /* 0x0006f4a4 */
int __fastcall sub_6006F594(int a1);  /* 0x0006f594 */
int __fastcall sub_6006F6F8(int result);  /* 0x0006f6f8 */
int __fastcall sub_6006FF54(_DWORD *a1);  /* 0x0006ff54 */
unsigned int __fastcall sub_6007275C(int a1, int a2);  /* 0x0007275c */
int __fastcall sub_60072C54(int a1);  /* 0x00072c54 */
int __fastcall sub_60072F14(int a1);  /* 0x00072f14 */
int __fastcall sub_600731CC(int result, int a2);  /* 0x000731cc */
bool __fastcall sub_600734F4(int a1);  /* 0x000734f4 */
bool __fastcall sub_60073608(int a1);  /* 0x00073608 */
unsigned int __fastcall sub_6007446C(int a1);  /* 0x0007446c */
int __fastcall sub_60075210(int a1);  /* 0x00075210 */
int __fastcall sub_600758EC(int a1);  /* 0x000758ec */
int __fastcall sub_60075CE0(int a1);  /* 0x00075ce0 */
int __fastcall sub_60076118(int result);  /* 0x00076118 */
int __fastcall sub_600765AC(_DWORD *a1, int a2);  /* 0x000765ac */
int __fastcall sub_60077258(int a1);  /* 0x00077258 */
bool __fastcall sub_600776A0(int a1);  /* 0x000776a0 */
int __fastcall sub_60077C30(int a1);  /* 0x00077c30 */
int __fastcall sub_60077DC8(float *a1);  /* 0x00077dc8 */
int __fastcall sub_6007955C(int a1);  /* 0x0007955c */
int __fastcall SE_AMB_LAST_BATTLE_ref(int a1);  /* 0x0007a7bc */
int __fastcall sub_6007A978(float *a1);  /* 0x0007a978 */
int __fastcall sub_6007ABE0(_DWORD *a1);  /* 0x0007abe0 */
int __fastcall SE_BOSS_KOOPA_L_FIRE_CONTINUE_ref(int a1);  /* 0x0007df1c */
int __fastcall SE_BOSS_KOOPA_L_FIRE_START_ref(int a1);  /* 0x0007e090 */
int __fastcall SE_BOSS_KOOPA_L_FIRE_CONTINUE_ref_2(int a1);  /* 0x0007e154 */
int __fastcall SE_BOSS_KOOPA_L_FIRE_CONTINUE_ref_3(int a1);  /* 0x0007e88c */
int __fastcall koopa_fire_shadow_ref(int a1);  /* 0x0007ec48 */
int __fastcall sub_6007F0B0(int a1);  /* 0x0007f0b0 */
int __fastcall sub_6007F57C(int a1);  /* 0x0007f57c */
int __fastcall sub_60080094(int a1);  /* 0x00080094 */
unsigned int __fastcall sub_600802A0(_DWORD *a1);  /* 0x000802a0 */
int __fastcall lkpjc_delight_ref(int a1);  /* 0x00081db4 */
int __fastcall lkp_down_ref(int a1);  /* 0x0008280c */
int __fastcall SE_BOSS_JR_DOWN_ref(int a1);  /* 0x000828e4 */
int __fastcall lkp_return_ref(_DWORD *a1);  /* 0x00082a30 */
int __fastcall SE_BOSS_JR_LAND_ref(int a1);  /* 0x00082aa8 */
int __fastcall lkp_run_ref(int a1);  /* 0x00082c34 */
int __fastcall lkp_jump_st_ref_2(int a1);  /* 0x000830fc */
int __fastcall lkp_fire_ref(int a1);  /* 0x0008397c */
int __fastcall mouth_1_ref(int a1);  /* 0x000839e4 */
int __fastcall lkpjc_fire_ref(int a1);  /* 0x00083c38 */
int __fastcall mouth_1_ref_2(int a1);  /* 0x00083c8c */
int __fastcall lkpjc_throw_enemy2_ed_ref(_DWORD *a1);  /* 0x00084094 */
int __fastcall SE_VOC_JR_BOMB_THROW_ref(_DWORD *a1);  /* 0x000840f4 */
int __fastcall lkp_jump_st_ref_3(int a1);  /* 0x00084284 */
int __fastcall SE_BOSS_JR_SHELL_ROLL_ref(int a1);  /* 0x000846e4 */
int __fastcall SE_BOSS_JR_SHELL_ROLL_ref_2(int a1);  /* 0x00084f88 */
int __fastcall SE_BOSS_JR_SHELL_ROLL_ref_3(int a1);  /* 0x00085710 */
int __fastcall lkp_damage_ref(_DWORD *a1);  /* 0x000873cc */
int __fastcall lkp_down_ref_2(_DWORD *a1);  /* 0x000874d4 */
int __fastcall lkp_return_ref_2(int a1);  /* 0x000875b0 */
int __fastcall lkp_run_ref_2(int a1);  /* 0x00087924 */
int __fastcall lkp_demo_battle_end_wait_ref(_DWORD *a1);  /* 0x00088218 */
int __fastcall lkp_demo_battle_end_ref(int a1);  /* 0x00088298 */
int __fastcall sub_60088678(int a1, float *a2);  /* 0x00088678 */
int __fastcall sub_600888D4(float *a1);  /* 0x000888d4 */
int __fastcall sub_60088B8C(_BYTE *a1);  /* 0x00088b8c */
int __fastcall sub_60088BD4(int a1);  /* 0x00088bd4 */
int __fastcall sub_60088C18(float *a1, int a2);  /* 0x00088c18 */
int __fastcall sub_60088CF4(int a1, int a2, char a3);  /* 0x00088cf4 */
int __fastcall sub_60088D58(unsigned __int8 *a1);  /* 0x00088d58 */
int __fastcall sub_60089198(int a1);  /* 0x00089198 */
int __fastcall koopaJr_shell_ref(int *a1);  /* 0x000892f8 */
int __fastcall sub_6008950C(int a1);  /* 0x0008950c */
int __fastcall sub_6008A214(int a1, int a2, int a3);  /* 0x0008a214 */
int __fastcall sub_6008B88C(_DWORD *a1);  /* 0x0008b88c */
int __fastcall sub_6008B9E4(int a1);  /* 0x0008b9e4 */
int __fastcall sub_6008BC88(int a1);  /* 0x0008bc88 */
int __fastcall sub_6008BE60(int a1);  /* 0x0008be60 */
int __fastcall sub_6008C064(int a1);  /* 0x0008c064 */
void __fastcall sub_6008C7A4(_DWORD *a1);  /* 0x0008c7a4 */
bool __fastcall sub_6008CBD8(int a1);  /* 0x0008cbd8 */
int __fastcall SE_PLY_CROWN_RISE_ref(int a1);  /* 0x0008dbe0 */
int __fastcall jc_wait_mario_ref(int a1);  /* 0x0008dd1c */
int __fastcall SE_PLY_CROWN_LETDOWN_FAST_ref(int a1);  /* 0x0008e820 */
int __fastcall SE_PLY_GET_OFF_CLOWN_ref(int a1);  /* 0x0008ea64 */
int __fastcall SE_PLY_GET_OFF_CLOWN_ref_2(int a1);  /* 0x0008ee8c */
int __fastcall SE_PLY_GET_OFF_CLOWN_ref_3(float *a1);  /* 0x0008f198 */
int __fastcall jc_return_ref(_DWORD *a1);  /* 0x0008f8f8 */
int __fastcall SE_BOSS_JR_CROWN_HAKERU_ref(int a1);  /* 0x0009010c */
int __fastcall sub_60090694(int a1);  /* 0x00090694 */
int __fastcall sub_60090990(int a1);  /* 0x00090990 */
bool __fastcall sub_60090A40(int a1);  /* 0x00090a40 */
unsigned int __fastcall sub_60090FE8(int a1, int a2);  /* 0x00090fe8 */
bool __fastcall sub_6009219C(int a1);  /* 0x0009219c */
int __fastcall sub_60093838(int a1);  /* 0x00093838 */
int __fastcall sub_6009398C(int a1);  /* 0x0009398c */
int __fastcall sub_60094540(_DWORD *a1);  /* 0x00094540 */
int __fastcall sub_60095164(int a1);  /* 0x00095164 */
int __fastcall sub_600951A4(int a1);  /* 0x000951a4 */
int __fastcall sub_60095218(int a1);  /* 0x00095218 */
int __fastcall sub_60095344(int a1);  /* 0x00095344 */
int __fastcall sub_60095468(_DWORD *a1);  /* 0x00095468 */
bool __fastcall sub_60095658(int a1);  /* 0x00095658 */
int __fastcall jc_getin_ref(_DWORD *a1);  /* 0x000957f8 */
int __fastcall SE_BOSS_IGGY_DOKAN_OUT_ref(int32x4_t *a1);  /* 0x00098674 */
int __fastcall SE_BOSS_IGGY_DOKAN_IN_ref(int32x4_t *a1);  /* 0x00098a48 */
unsigned int __fastcall SE_BOSS_CMN_MAGIC_SHOT_ref(int a1);  /* 0x00099314 */
int __fastcall SE_BOSS_IGGY_DOKAN_OUT_ref_2(int32x4_t *a1);  /* 0x0009a59c */
int __fastcall SE_BOSS_IGGY_DOKAN_IN_ref_2(int32x4_t *a1);  /* 0x0009bbc4 */
int __fastcall SE_BOSS_IGGY_JUMP_ref(int a1);  /* 0x0009c06c */
int __fastcall sub_6009C7F8(int a1);  /* 0x0009c7f8 */
int __fastcall sub_6009D1C8(_DWORD *a1);  /* 0x0009d1c8 */
int __fastcall sub_6009DED4(_DWORD **a1, float *a2);  /* 0x0009ded4 */
int __fastcall sub_6009E050(_DWORD **a1, float *a2);  /* 0x0009e050 */
int __fastcall sub_6009E500(int a1);  /* 0x0009e500 */
int __fastcall sub_6009E878(int a1);  /* 0x0009e878 */
int __fastcall sub_6009EC78(int a1);  /* 0x0009ec78 */
int __fastcall sub_6009EF28(int a1);  /* 0x0009ef28 */
int __fastcall sub_6009F0BC(int result);  /* 0x0009f0bc */
bool __fastcall sub_600A1528(int a1);  /* 0x000a1528 */
int __fastcall SE_BOSS_IGGY_MAGIC_DISAPPEAR_ref(int a1);  /* 0x000a29a4 */
int __fastcall Actor_Iggy_room_build(int a1);  /* 0x000a38c8 */
int __fastcall sub_600A3C08(int a1);  /* 0x000a3c08 */
int __fastcall sub_600A3D1C(int a1);  /* 0x000a3d1c */
int __fastcall sub_600A3FD4(int a1);  /* 0x000a3fd4 */
int __fastcall sub_600A4024(int a1);  /* 0x000a4024 */
int __fastcall SolidOnTopColliderWrapper_dtorFree(sead::IDisposer *a1);  /* 0x000a462c */
bool __fastcall SolidOnTopColliderWrapper_checkRTTI(int a1, int a2);  /* 0x000a463c */
int __fastcall Actor_Kamek_2_build(int a1);  /* 0x000a48ec */
int __fastcall fly_magic_ref_2(int a1);  /* 0x000a4960 */
int __fastcall fly_appear_ref(int32x4_t *a1);  /* 0x000a50b0 */
int __fastcall fly_disappear_ref(int32x4_t *a1);  /* 0x000a53e8 */
int __fastcall SE_BOSS_KAMECK_MAGIC_ref(int a1);  /* 0x000a56e4 */
int __fastcall fly_st_ref(int a1);  /* 0x000a5930 */
int __fastcall SE_EMY_KAMECK_FLY_START_ref(int a1);  /* 0x000a5a98 */
int __fastcall fly_disappear_ref_2(int32x4_t *a1);  /* 0x000a5d94 */
int __fastcall fly_appear_ref_2(int32x4_t *a1);  /* 0x000a6238 */
int __fastcall fly_throw3_ref(_DWORD *a1);  /* 0x000a6528 */
int __fastcall sub_600A6A90(int a1);  /* 0x000a6a90 */
int __fastcall fly_throw2_wait_ref(int a1);  /* 0x000a7148 */
int __fastcall sub_600A724C(int a1);  /* 0x000a724c */
int __fastcall sub_600A7890(int a1);  /* 0x000a7890 */
int __fastcall Skl_root_ref(int a1);  /* 0x000a7d18 */
int __fastcall sub_600A83C0(int a1);  /* 0x000a83c0 */
int __fastcall sub_600A8F84(_DWORD **a1, float *a2);  /* 0x000a8f84 */
int __fastcall sub_600A96C0(float *a1);  /* 0x000a96c0 */
unsigned int __fastcall sub_600A9C90(_DWORD *a1);  /* 0x000a9c90 */
int __fastcall sub_600A9F20(int a1, _DWORD *a2, _DWORD *a3, int a4);  /* 0x000a9f20 */
int __fastcall sub_600AA114(int a1);  /* 0x000aa114 */
int __fastcall sub_600AA38C(int a1);  /* 0x000aa38c */
int __fastcall SE_BOSS_KAMECK_DOWN_BOUND_ref(int a1);  /* 0x000ab34c */
int __fastcall wand_model_root_ref(int a1);  /* 0x000ab744 */
int __fastcall sub_600ADB30(int a1);  /* 0x000adb30 */
int __fastcall sub_600AE514(int a1);  /* 0x000ae514 */
int __fastcall sub_600AE874(int result);  /* 0x000ae874 */
int __fastcall sub_600AE93C(int a1, int a2);  /* 0x000ae93c */
int __fastcall sub_600AEAC4(int a1);  /* 0x000aeac4 */
int __fastcall sub_600AF29C(int a1);  /* 0x000af29c */
bool __fastcall sub_600AF474(int a1);  /* 0x000af474 */
int __fastcall sub_600B183C(int a1);  /* 0x000b183c */
int __fastcall sub_600B189C(int a1);  /* 0x000b189c */
int __fastcall sub_600B2D20(_DWORD *a1);  /* 0x000b2d20 */
bool __fastcall sub_600B2DF0(int a1);  /* 0x000b2df0 */
int __fastcall sub_600B2FD4(int a1, int a2, __int16 a3);  /* 0x000b2fd4 */
int __fastcall sub_600B330C(_DWORD *a1);  /* 0x000b330c */
bool __fastcall sub_600B33DC(_DWORD *a1, int a2);  /* 0x000b33dc */
bool __fastcall sub_600B3E14(_DWORD *a1);  /* 0x000b3e14 */
int __fastcall sub_600B9294(float *a1);  /* 0x000b9294 */
int __fastcall sub_600B9930(int a1);  /* 0x000b9930 */
int __fastcall SE_BOSS_CMN_MAGIC_EXTINCT_ref(int a1, int a2);  /* 0x000b9d94 */
int __fastcall sub_600BA0E0(int a1);  /* 0x000ba0e0 */
unsigned int __fastcall sub_600BABB8(int a1);  /* 0x000babb8 */
int __fastcall sub_600BB738(int a1);  /* 0x000bb738 */
int __fastcall sub_600BB804(int result);  /* 0x000bb804 */
int __fastcall sub_600BBA44(float *a1);  /* 0x000bba44 */
int __fastcall sub_600BBB94(int a1);  /* 0x000bbb94 */
int __fastcall sub_600BBD0C(int a1, float *a2, int a3);  /* 0x000bbd0c */
int __fastcall sub_600BBE20(int a1, int a2);  /* 0x000bbe20 */
int __fastcall ef_boss_cannon_ref(int a1);  /* 0x000be9f0 */
int __fastcall sub_600BF77C(int a1);  /* 0x000bf77c */
int __fastcall sub_600BFBE4(int a1);  /* 0x000bfbe4 */
bool __fastcall sub_600BFF2C(_DWORD *a1);  /* 0x000bff2c */
int __fastcall sub_600C0214(int result, unsigned int a2);  /* 0x000c0214 */
int __fastcall SE_VOC_KP_SHOUT_ref(int a1);  /* 0x000c2f28 */
int __fastcall sub_600C4A80(_DWORD *a1);  /* 0x000c4a80 */
int __fastcall sub_600C569C(int result, unsigned int a2);  /* 0x000c569c */
int __fastcall sub_600C593C(_DWORD *a1);  /* 0x000c593c */
int __fastcall sub_600C5A70(int a1, int a2, unsigned int a3, int *a4);  /* 0x000c5a70 */
int __fastcall sub_600C5D7C(int a1, int a2);  /* 0x000c5d7c */
int __fastcall sub_600C661C(int a1);  /* 0x000c661c */
int __fastcall sub_600C6764(int a1);  /* 0x000c6764 */
int __fastcall sub_600C69CC(_DWORD *a1);  /* 0x000c69cc */
int __fastcall sub_600C6BF4(int a1);  /* 0x000c6bf4 */
int __fastcall sub_600CB6D4(int a1);  /* 0x000cb6d4 */
int __fastcall sub_600CBF0C(int a1, int a2, int a3, int a4);  /* 0x000cbf0c */
int __fastcall SE_BOSS_KOOPA_FIRE_SHOT_ref(int a1);  /* 0x000cc0a8 */
int __fastcall sub_600CC43C(int a1);  /* 0x000cc43c */
int __fastcall sub_600CC8AC(int a1, int a2, int a3, int a4);  /* 0x000cc8ac */
int __fastcall sub_600CD34C(int *a1);  /* 0x000cd34c */
int __fastcall sub_600CD484(_DWORD *a1);  /* 0x000cd484 */
int __fastcall sub_600CD8F0(int a1, int a2, int a3);  /* 0x000cd8f0 */
int __fastcall sub_600CE584(int a1, int a2, int a3, int a4);  /* 0x000ce584 */
int __fastcall sub_600CE6A4(int a1);  /* 0x000ce6a4 */
int __fastcall sub_600CE78C(int a1);  /* 0x000ce78c */
int __fastcall sub_600CEA24(int a1);  /* 0x000cea24 */
int __fastcall sub_600CEB84(int a1, int a2);  /* 0x000ceb84 */
void __fastcall sub_600CEEEC(int a1, int a2);  /* 0x000ceeec */
void __fastcall sub_600CEF58(int a1, int a2);  /* 0x000cef58 */
int __fastcall sub_600D0154(int a1);  /* 0x000d0154 */
int __fastcall sub_600D04B4(int a1);  /* 0x000d04b4 */
int __fastcall sub_600D0500(_DWORD *a1);  /* 0x000d0500 */
int __fastcall sub_600D061C(int *a1);  /* 0x000d061c */
int __fastcall sub_600D0E78(int a1, int a2);  /* 0x000d0e78 */
void __fastcall sub_600D1670(int a1, float *a2);  /* 0x000d1670 */
int __fastcall sub_600D17F4(int a1);  /* 0x000d17f4 */
int __fastcall sub_600D18C8(int a1, int a2);  /* 0x000d18c8 */
int __fastcall sub_600D1AC8(int a1);  /* 0x000d1ac8 */
int __fastcall sub_600D1D60(int a1);  /* 0x000d1d60 */
int __fastcall sub_600D1DE0(int a1);  /* 0x000d1de0 */
int __fastcall SE_AMB_ref(int a1);  /* 0x000d28d4 */
int __fastcall sub_600D2AD8(int a1);  /* 0x000d2ad8 */
int __fastcall sub_600D2CB0(int a1);  /* 0x000d2cb0 */
int __fastcall sub_600D33F8(int a1);  /* 0x000d33f8 */
int __fastcall sub_600D37A4(int a1, int a2);  /* 0x000d37a4 */
int __fastcall sub_600D552C(int *a1);  /* 0x000d552c */
int __fastcall sub_600D5664(_DWORD *a1);  /* 0x000d5664 */
int __fastcall sub_600D5A94(int a1);  /* 0x000d5a94 */
int __fastcall sub_600D5B84(int a1, int a2, int a3);  /* 0x000d5b84 */
int __fastcall sub_600D5CB4(int a1);  /* 0x000d5cb4 */
int __fastcall sub_600D5D78(int a1);  /* 0x000d5d78 */
int __fastcall SE_AMB_BROOM_W8_ref(int a1);  /* 0x000d6260 */
int __fastcall SE_OBJ_KROOM_SHUTTER_CLOSE_ref(int a1);  /* 0x000d62f8 */
int __fastcall sub_600D6760(int a1);  /* 0x000d6760 */
int __fastcall SE_VOC_LAR_INTO_WATERPILLAR_ref(int a1);  /* 0x000d728c */
int __fastcall larry_magic_wand_root_ref(int a1);  /* 0x000d8000 */
int __fastcall sub_600D8F9C(int a1);  /* 0x000d8f9c */
int __fastcall throw_st_wait_f_ref(int a1);  /* 0x000d9f38 */
int __fastcall sub_600DA384(_DWORD *a1);  /* 0x000da384 */
int __fastcall SE_BOSS_LARRY_DOWN_LAND1_ref(int a1);  /* 0x000da624 */
int __fastcall sub_600DBC58(_DWORD *a1);  /* 0x000dbc58 */
int __fastcall SE_BOSS_LEMMY_ref(float *a1);  /* 0x000dc040 */
int __fastcall SE_BOSS_LEMMY_ref_2(unsigned int *a1);  /* 0x000dc3dc */
int __fastcall wait_ball_ref(int a1);  /* 0x000dcb2c */
int __fastcall MtxTranslateGetItFromHere(int a1);  /* 0x000ddef0 */
int __fastcall sub_600DE710(int a1);  /* 0x000de710 */
int __fastcall wait_ball_ref_2(int a1);  /* 0x000dee50 */
int __fastcall demo_battleA_ball_st_ref(int a1);  /* 0x000def74 */
int __fastcall demo_battleA_ball_st_wait_ref(int a1);  /* 0x000df0fc */
int __fastcall demo_battleA_ball_ref(int a1);  /* 0x000df20c */
int __fastcall SE_BOSS_LEMMY_RAMP_LAND_ref(_DWORD *a1);  /* 0x000df314 */
int __fastcall demo_battleA_ball_wait_ref(int a1);  /* 0x000df3b8 */
int __fastcall throw_ball_st_wait_ref(int a1);  /* 0x000df72c */
int __fastcall SE_BOSS_LEMMY_MAGIC_MAKE_ref(int a1);  /* 0x000df834 */
int __fastcall throw_ball_ed_ref(_DWORD *a1);  /* 0x000df888 */
int __fastcall SE_BOSS_LEMMY_ref_4(int a1);  /* 0x000dfa48 */
int __fastcall throw_ball_ed_wait_ref(int a1);  /* 0x000dfc5c */
int __fastcall SE_BOSS_LEMMY_DOWN_LAND1_ref(int a1);  /* 0x000e0958 */
int __fastcall shell_ball_out_ref(int a1);  /* 0x000e1948 */
int __fastcall sub_600E2170(int a1);  /* 0x000e2170 */
int __fastcall sub_600E21F0(int a1, int a2);  /* 0x000e21f0 */
int __fastcall SE_BOSS_LEMMY_BALL_HIT_PLY_ref(int result);  /* 0x000e2708 */
int __fastcall sub_600E2950(int a1);  /* 0x000e2950 */
int __fastcall sub_600E29D0(int a1);  /* 0x000e29d0 */
int __fastcall sub_600E2D20(int a1, int a2);  /* 0x000e2d20 */
int __fastcall sub_600E2F44(int a1, int a2);  /* 0x000e2f44 */
int __fastcall sub_600E310C(int a1, int a2);  /* 0x000e310c */
int __fastcall sub_600E35E0(int a1);  /* 0x000e35e0 */
int __fastcall sub_600E36A4(int a1, int a2, int a3);  /* 0x000e36a4 */
int __fastcall sub_600E371C(int a1, char a2);  /* 0x000e371c */
int __fastcall SE_BOSS_LEMMY_MAGIC_SHOT_ref(int a1);  /* 0x000e3ed4 */
int __fastcall sub_600E40DC(int a1);  /* 0x000e40dc */
int __fastcall SE_BOSS_JR_BOMB_BURST_ref(int a1);  /* 0x000e46e8 */
int __fastcall sub_600E4E3C(int a1);  /* 0x000e4e3c */
int __fastcall sub_600E56C8(int a1);  /* 0x000e56c8 */
int __fastcall SE_BOSS_LEMMY_ref_6(int result);  /* 0x000e5b1c */
int __fastcall SE_BOSS_LUDWIG_MOVE_ref(int a1);  /* 0x000e60d4 */
int __fastcall sub_600E78A0(int a1);  /* 0x000e78a0 */
int __fastcall SE_AMB_BROOM_W7_ref(int a1);  /* 0x000e79b8 */
int __fastcall sub_600E9114(int a1);  /* 0x000e9114 */
int __fastcall sub_600EA13C(_DWORD *a1);  /* 0x000ea13c */
int __fastcall sub_600EA370(_BYTE *a1, unsigned int a2);  /* 0x000ea370 */
int __fastcall fly_throw_st2_ref(int a1);  /* 0x000ea6a8 */
int __fastcall sub_600EB30C(int a1);  /* 0x000eb30c */
int __fastcall sub_600EB770(int a1);  /* 0x000eb770 */
int __fastcall SE_BOSS_LARRY_DOWN_LAND1_ref_2(int a1);  /* 0x000ecac0 */
int __fastcall SE_BOSS_LUDWIG_DISAPPEAR_ref(int a1);  /* 0x000ed078 */
int __fastcall jump_quake2_ref(_DWORD *a1);  /* 0x000ef028 */

