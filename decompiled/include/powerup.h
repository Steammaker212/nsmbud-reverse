/* NSMBU Deluxe (Switch) v1.0.0 -- powerup subsystem prototypes
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

/* ---- powerup.c ---- */
int __fastcall sub_60450174(int a1, int a2, int a3, int a4, int a5);  /* 0x00450174 */
int __fastcall sub_60450184();  /* 0x00450184 */
int __fastcall sub_60450434(_DWORD *a1, int a2, int a3, int a4);  /* 0x00450434 */
int __fastcall sub_604504CC();  /* 0x004504cc */
int __fastcall sub_60450674(int a1);  /* 0x00450674 */
int __fastcall sub_6045077C(int a1);  /* 0x0045077c */
int __fastcall sub_60450860(int a1);  /* 0x00450860 */
int __fastcall sub_60450A48(int a1, _DWORD *a2, int a3, int a4, unsigned int a5);  /* 0x00450a48 */
int __fastcall sub_60450A7C(_DWORD **a1, int a2, int a3);  /* 0x00450a7c */
int __fastcall sub_60450BAC(_DWORD **a1);  /* 0x00450bac */
int __fastcall sub_60450C78(int a1, int a2, int a3, unsigned int a4);  /* 0x00450c78 */
void __fastcall sub_60450C98(int a1, const void *a2, unsigned int a3);  /* 0x00450c98 */
int __fastcall sub_60450D54(_DWORD *a1);  /* 0x00450d54 */
int __fastcall sub_60450D78(_DWORD *a1);  /* 0x00450d78 */
int __fastcall sub_60450D90(_DWORD *a1);  /* 0x00450d90 */
int __fastcall sub_60450E5C(int result, int a2, int a3, int *a4, int a5);  /* 0x00450e5c */
int __fastcall TexAnim_play();  /* 0x004510e4 */
int __fastcall sub_604511EC();  /* 0x004511ec */
int __fastcall sub_60451438(int a1);  /* 0x00451438 */
int __fastcall sub_6045154C(int a1, int a2, int a3, int *a4, int a5);  /* 0x0045154c */
int __fastcall sub_60451E68(int a1, int a2);  /* 0x00451e68 */
int __fastcall sub_60451F74(struct sead_IDisposer *a1);  /* 0x00451f74 */
int __fastcall sub_60451FEC(int a1);  /* 0x00451fec */
int __fastcall sub_6045217C(int a1, int a2, _DWORD *a3, int a4);  /* 0x0045217c */
int __fastcall sub_60452470(int a1);  /* 0x00452470 */
int __fastcall sub_604528CC(int a1);  /* 0x004528cc */
int __fastcall sub_60452CE8(int a1);  /* 0x00452ce8 */
int __fastcall sub_60452D84(int a1, int a2);  /* 0x00452d84 */
int __fastcall sub_60452EDC(int a1);  /* 0x00452edc */
int __fastcall sub_604531F8(int a1);  /* 0x004531f8 */
int __fastcall sub_60453694(int a1);  /* 0x00453694 */
int __fastcall sub_60453764(int a1);  /* 0x00453764 */
unsigned int __fastcall sub_60453AA8();  /* 0x00453aa8 */
int __fastcall sub_60453D7C(int a1);  /* 0x00453d7c */
int __fastcall sub_60453F44(int result);  /* 0x00453f44 */
int __fastcall sub_60454344(int a1);  /* 0x00454344 */
int __fastcall sub_60454858(int a1, int a2);  /* 0x00454858 */
int __fastcall sub_60454B60();  /* 0x00454b60 */
int __fastcall sub_60454C64(int result);  /* 0x00454c64 */
bool __fastcall sub_60454C78(int a1);  /* 0x00454c78 */
int __fastcall sub_60454C94(int result);  /* 0x00454c94 */
int __fastcall sub_60454CDC(int a1, float *a2);  /* 0x00454cdc */
int __fastcall sub_60454D54();  /* 0x00454d54 */
int __fastcall sub_60454E80(int a1, int a2);  /* 0x00454e80 */
int __fastcall sub_60454FDC(int a1);  /* 0x00454fdc */
int __fastcall sub_60455008();  /* 0x00455008 */
int __fastcall SE_SYS_CE_ref_3_helper_45516C(int a1, int a2);  /* 0x0045516c */
int __fastcall sub_60455178();  /* 0x00455178 */
int __fastcall sub_60455184();  /* 0x00455184 */
int __fastcall sub_60455190(int a1);  /* 0x00455190 */
bool __fastcall sub_6045519C(int a1);  /* 0x0045519c */
int __fastcall sub_604551A8(int a1);  /* 0x004551a8 */
int __fastcall sub_604551F0();  /* 0x004551f0 */
unsigned int __fastcall sub_6045525C(int a1, __int16 a2, __int16 a3, __int16 a4);  /* 0x0045525c */
bool __fastcall sub_60455280(int a1, int a2);  /* 0x00455280 */
bool __fastcall sub_60455378(int *a1, int a2);  /* 0x00455378 */
bool __fastcall sub_604553BC(int *a1, int a2);  /* 0x004553bc */
int __fastcall sub_604554A8(int a1, int a2);  /* 0x004554a8 */
int __fastcall sub_60455558(int a1, unsigned __int8 *a2);  /* 0x00455558 */
int __fastcall sub_6045560C(int a1, int a2);  /* 0x0045560c */
int __fastcall sub_604556B0(int a1, unsigned __int8 *a2);  /* 0x004556b0 */
int __fastcall sub_60455758(int a1, int a2);  /* 0x00455758 */
int __fastcall sub_6045588C(int a1, int a2);  /* 0x0045588c */
int __fastcall sub_604559C0(int a1, int a2);  /* 0x004559c0 */
int __fastcall sub_60455A58(int a1, int a2);  /* 0x00455a58 */
int __fastcall sub_60455AF4();  /* 0x00455af4 */
int __fastcall sub_60455B20();  /* 0x00455b20 */
int __fastcall sub_60455B50();  /* 0x00455b50 */
int __fastcall sub_60455B88();  /* 0x00455b88 */
int __fastcall sub_60455BC4();  /* 0x00455bc4 */
int __fastcall sub_60455C08();  /* 0x00455c08 */
int __fastcall sub_60455C50();  /* 0x00455c50 */
int __fastcall sub_60455C70();  /* 0x00455c70 */
int __fastcall sub_60455C98();  /* 0x00455c98 */
int __fastcall sub_60455CA4();  /* 0x00455ca4 */
int __fastcall sub_60455CB8(int a1);  /* 0x00455cb8 */
int __fastcall sub_60455D54();  /* 0x00455d54 */
int __fastcall sub_60455E7C();  /* 0x00455e7c */
int __fastcall sub_60455EF4(_DWORD *a1);  /* 0x00455ef4 */
int __fastcall sub_60456064(_DWORD *a1);  /* 0x00456064 */
int __fastcall sub_60456128(int a1);  /* 0x00456128 */
int __fastcall sub_60456388(int result);  /* 0x00456388 */
int __fastcall sub_60456428();  /* 0x00456428 */
int __fastcall sub_60456458();  /* 0x00456458 */
int __fastcall sub_60456464();  /* 0x00456464 */
int __fastcall sub_60456480();  /* 0x00456480 */
int __fastcall sub_604564B8();  /* 0x004564b8 */
int __fastcall sub_604564C4();  /* 0x004564c4 */
int __fastcall sub_604564CC();  /* 0x004564cc */
int __fastcall sub_604564E0(int a1, unsigned __int8 *a2);  /* 0x004564e0 */
int __fastcall sub_60456918(int a1);  /* 0x00456918 */
int __fastcall sub_604569DC(int result);  /* 0x004569dc */
int __fastcall sub_60456A10(int result);  /* 0x00456a10 */
int __fastcall RumbleMgr_ctor(int a1, int a2);  /* 0x00456b44 */
void __fastcall sub_60456E7C(int a1);  /* 0x00456e7c */
int __fastcall sub_60456EB4(int a1);  /* 0x00456eb4 */
int __fastcall sub_60456EF8(_DWORD *a1);  /* 0x00456ef8 */
int __fastcall sub_6045701C(_DWORD *a1);  /* 0x0045701c */
int __fastcall sub_604571EC(int a1, unsigned int a2, int a3, int a4);  /* 0x004571ec */
int __fastcall sub_60457304(int a1, unsigned int a2, _DWORD *a3, int a4, int a5);  /* 0x00457304 */
int __fastcall sub_6045744C(int a1, _DWORD *a2, int a3, int a4);  /* 0x0045744c */
int __fastcall sub_604574C8(int result, int a2, int a3);  /* 0x004574c8 */
bool __fastcall sub_604574F0(int a1, int a2);  /* 0x004574f0 */
int __fastcall sub_6045775C(int result);  /* 0x0045775c */
int __fastcall sub_60457770(int a1);  /* 0x00457770 */
int __fastcall sub_604578E4(int a1);  /* 0x004578e4 */
int __fastcall sub_60457A2C(int result);  /* 0x00457a2c */
int __fastcall sub_60457A58(int result);  /* 0x00457a58 */
int __fastcall sub_60457A64(int a1);  /* 0x00457a64 */
int __fastcall sub_60457B84(int result);  /* 0x00457b84 */
int __fastcall sub_60457B90(int result);  /* 0x00457b90 */
int __fastcall sub_60457BB8(int a1);  /* 0x00457bb8 */
int __fastcall sub_60457D5C(int a1, int a2, int a3);  /* 0x00457d5c */
int __fastcall sub_60457E54(int result, int a2);  /* 0x00457e54 */
int __fastcall sub_60457E64(int a1);  /* 0x00457e64 */
unsigned int __fastcall sub_604580E0(int a1, int a2);  /* 0x004580e0 */
int __fastcall sub_604587EC(int result);  /* 0x004587ec */
int __fastcall sub_60458988(int a1);  /* 0x00458988 */
int __fastcall sub_60458A04(int a1);  /* 0x00458a04 */
bool __fastcall sub_60458E68(int a1, int a2);  /* 0x00458e68 */
int __fastcall sub_60459050(int a1);  /* 0x00459050 */
int __fastcall sub_60459058(int a1, int a2);  /* 0x00459058 */
int __fastcall sub_60459144(struct sead_IDisposer *a1);  /* 0x00459144 */
int __fastcall sub_604591A4(int a1);  /* 0x004591a4 */
bool __fastcall sub_604592A0(int a1, int a2);  /* 0x004592a0 */
bool __fastcall sub_604593D0(int a1, int a2);  /* 0x004593d0 */
bool __fastcall sub_60459718(int a1, int a2);  /* 0x00459718 */
int __fastcall sub_60459990(int a1);  /* 0x00459990 */
int __fastcall sub_6045A444(int a1, int a2);  /* 0x0045a444 */
int __fastcall sub_6045A4F4(int result);  /* 0x0045a4f4 */
int __fastcall sub_6045A500(int a1);  /* 0x0045a500 */
bool __fastcall sub_6045A664(int a1, int a2);  /* 0x0045a664 */
int __fastcall sub_6045A7C0(int a1, int a2);  /* 0x0045a7c0 */
bool __fastcall sub_6045ADE4(int a1, int a2, int a3, int a4);  /* 0x0045ade4 */
bool __fastcall sub_6045AF54(int a1, int a2, int a3, int a4);  /* 0x0045af54 */
bool __fastcall sub_6045B0B0(int a1, int a2, int a3);  /* 0x0045b0b0 */
int __fastcall sub_6045B330(int a1, int a2);  /* 0x0045b330 */
bool __fastcall sub_6045BD08(int a1, int a2, int a3);  /* 0x0045bd08 */
int __fastcall sub_6045BE8C(int a1, int a2);  /* 0x0045be8c */
int __fastcall sub_6045BF58(int a1, int a2);  /* 0x0045bf58 */
int __fastcall sub_6045C0AC(_DWORD *a1);  /* 0x0045c0ac */
int __fastcall sub_6045C0BC(int a1);  /* 0x0045c0bc */
int __fastcall sub_6045C0D0(int a1, int a2, int a3);  /* 0x0045c0d0 */
bool __fastcall sub_6045C130(int a1);  /* 0x0045c130 */
bool __fastcall sub_6045C140(int a1, int a2);  /* 0x0045c140 */
int __fastcall sub_6045C328(int a1, int a2);  /* 0x0045c328 */
int __fastcall sub_6045C47C(int result);  /* 0x0045c47c */
int __fastcall sub_6045C544(int a1);  /* 0x0045c544 */
int __fastcall sub_6045C5A8(int a1);  /* 0x0045c5a8 */
int __fastcall sub_6045C674(int a1);  /* 0x0045c674 */
unsigned int __fastcall sub_6045C720(int a1);  /* 0x0045c720 */
int __fastcall sub_6045C9A0(int a1);  /* 0x0045c9a0 */
int __fastcall sub_6045CB40(int a1);  /* 0x0045cb40 */
int __fastcall sub_6045CB8C(int a1, int a2, int a3, int a4);  /* 0x0045cb8c */
bool __fastcall sub_6045CF50(int a1, int a2);  /* 0x0045cf50 */
void __fastcall sub_6045D054(int a1);  /* 0x0045d054 */
int __fastcall sub_6045D0EC(int a1);  /* 0x0045d0ec */
int __fastcall sub_6045D18C(int result);  /* 0x0045d18c */
int __fastcall sub_6045D1C0();  /* 0x0045d1c0 */
int __fastcall sub_6045D390(int a1, int a2);  /* 0x0045d390 */
int __fastcall sub_6045D3E0(int result, int a2, int a3, int a4, int a5);  /* 0x0045d3e0 */
int __fastcall sub_6045D408(int *a1, int a2, int a3);  /* 0x0045d408 */
bool __fastcall sub_6045D56C(int a1, int a2);  /* 0x0045d56c */
int __fastcall sub_6045D6E0(_DWORD *a1);  /* 0x0045d6e0 */
int __fastcall sub_6045D79C(int a1);  /* 0x0045d79c */
int __fastcall sub_6045D89C(int a1);  /* 0x0045d89c */
int __fastcall sub_6045D8E8(int result);  /* 0x0045d8e8 */
int __fastcall sub_6045D900(int result);  /* 0x0045d900 */
int __fastcall sub_6045D914(int result);  /* 0x0045d914 */
int __fastcall sub_6045D980(int a1);  /* 0x0045d980 */
int __fastcall sub_6045DA4C(int a1);  /* 0x0045da4c */
int __fastcall sub_6045DB18(int a1);  /* 0x0045db18 */
int __fastcall sub_6045DBF8(int a1);  /* 0x0045dbf8 */
int __fastcall sub_6045DCC4(int a1);  /* 0x0045dcc4 */
int __fastcall sub_6045DD90(int a1);  /* 0x0045dd90 */
int __fastcall sub_6045DDA8(int a1);  /* 0x0045dda8 */
int __fastcall sub_6045DDC0(Actor *a1);  /* 0x0045ddc0 */
bool __fastcall sub_6045DE08(int a1, int a2);  /* 0x0045de08 */
void __fastcall sub_6045DFF4(_DWORD *a1);  /* 0x0045dff4 */
int __fastcall sub_6045E074(_DWORD *a1);  /* 0x0045e074 */
int __fastcall sub_6045E0F8(int a1);  /* 0x0045e0f8 */
int __fastcall sub_6045E10C(int result);  /* 0x0045e10c */
int __fastcall sub_6045E12C(int a1, int a2);  /* 0x0045e12c */
int __fastcall sub_6045E1C4(int a1, int a2);  /* 0x0045e1c4 */
int __fastcall sub_6045E310(int a1);  /* 0x0045e310 */
int __fastcall sub_6045E414(int a1);  /* 0x0045e414 */
int __fastcall sub_6045E460(int result);  /* 0x0045e460 */
int __fastcall sub_6045E4CC(int result);  /* 0x0045e4cc */
int __fastcall sub_6045E4E4(int result);  /* 0x0045e4e4 */
int __fastcall sub_6045E4F8(int a1);  /* 0x0045e4f8 */
int __fastcall sub_6045E5C4(int a1);  /* 0x0045e5c4 */
int __fastcall sub_6045E690(int a1);  /* 0x0045e690 */
int __fastcall sub_6045E770(int a1);  /* 0x0045e770 */
int __fastcall sub_6045E83C(int a1);  /* 0x0045e83c */
int __fastcall sub_6045E908(int a1);  /* 0x0045e908 */
int __fastcall sub_6045E920(int a1);  /* 0x0045e920 */
int __fastcall sub_6045E938(Actor *a1);  /* 0x0045e938 */
int __fastcall sub_6045E980(int a1, int a2);  /* 0x0045e980 */
int __fastcall sub_6045EB6C(_DWORD *a1);  /* 0x0045eb6c */
int __fastcall sub_6045EBF0(int result);  /* 0x0045ebf0 */
int __fastcall sub_6045EC8C();  /* 0x0045ec8c */
int __fastcall sub_6045EF40(int a1);  /* 0x0045ef40 */
int __fastcall sub_6045F474(int a1);  /* 0x0045f474 */
int __fastcall sub_6045F950(int a1);  /* 0x0045f950 */
int __fastcall sub_6045FAA8(int a1);  /* 0x0045faa8 */
int __fastcall sub_6045FC64(int a1);  /* 0x0045fc64 */
int __fastcall sub_6045FDA0(int a1);  /* 0x0045fda0 */
int __fastcall sub_6045FE04(int a1);  /* 0x0045fe04 */
int __fastcall sub_6046024C(int result);  /* 0x0046024c */
unsigned int __fastcall sub_60460280(_DWORD *a1);  /* 0x00460280 */
int __fastcall sub_604603A4(int a1);  /* 0x004603a4 */
int __fastcall sub_60460408(int a1, int a2, int a3, int a4);  /* 0x00460408 */
int __fastcall sub_6046098C(int result);  /* 0x0046098c */
int __fastcall sub_60460DA8(int a1);  /* 0x00460da8 */
int __fastcall sub_60460DD0(int a1, int a2);  /* 0x00460dd0 */
int __fastcall sub_604615A4(int result);  /* 0x004615a4 */
int __fastcall sub_604615BC(int a1);  /* 0x004615bc */
int __fastcall sub_604616A4(int a1);  /* 0x004616a4 */
int __fastcall sub_60461788(int a1);  /* 0x00461788 */
int __fastcall sub_604617F0(int a1);  /* 0x004617f0 */
int __fastcall sub_60461820(int a1);  /* 0x00461820 */
int __fastcall sub_60461850(int a1);  /* 0x00461850 */
int __fastcall sub_60461904(int a1);  /* 0x00461904 */
int __fastcall sub_60461A1C(int a1);  /* 0x00461a1c */
int __fastcall sub_60461AA0(int result);  /* 0x00461aa0 */
int __fastcall sub_60461BE4(int a1);  /* 0x00461be4 */
bool __fastcall sub_60461C38(int a1);  /* 0x00461c38 */
int __fastcall sub_60461C50(int a1);  /* 0x00461c50 */
int __fastcall sub_60462018(int a1);  /* 0x00462018 */
int __fastcall sub_6046233C(int a1, float *a2, float *a3);  /* 0x0046233c */
int __fastcall sub_60462370(int a1);  /* 0x00462370 */
int __fastcall sub_60462530(int a1);  /* 0x00462530 */
int __fastcall sub_60462798(int a1, int a2, int a3);  /* 0x00462798 */
int __fastcall sub_6046287C(int a1);  /* 0x0046287c */
int __fastcall sub_60462888(int a1, int a2);  /* 0x00462888 */
int __fastcall sub_60462A58(int a1);  /* 0x00462a58 */
int __fastcall sub_60462B7C(int result);  /* 0x00462b7c */
int __fastcall sub_60462BB8(int a1);  /* 0x00462bb8 */
int __fastcall sub_60462BEC(int a1, int a2);  /* 0x00462bec */
bool __fastcall sub_60462DC4(int a1, unsigned __int16 *a2);  /* 0x00462dc4 */
bool __fastcall sub_60462DE0(int a1, int a2);  /* 0x00462de0 */
int __fastcall sub_60462F64(int a1);  /* 0x00462f64 */
int __fastcall sub_604630C8(int a1);  /* 0x004630c8 */
int __fastcall sub_6046313C(int result);  /* 0x0046313c */
void __fastcall sub_60463178(int a1);  /* 0x00463178 */
int __fastcall sub_60463228(int a1, unsigned int a2);  /* 0x00463228 */
int __fastcall sub_60463258(int a1, _DWORD *a2);  /* 0x00463258 */
int __fastcall sub_604632A0(int a1, int a2);  /* 0x004632a0 */
int __fastcall sub_604633AC(int a1, int a2);  /* 0x004633ac */
int __fastcall sub_604634B8(int a1, int *a2);  /* 0x004634b8 */
int __fastcall sub_60463584(int result);  /* 0x00463584 */
int __fastcall sub_604635F4(int a1);  /* 0x004635f4 */
int __fastcall sub_604637C0(float *a1);  /* 0x004637c0 */
int __fastcall sub_60463878(int result);  /* 0x00463878 */
int __fastcall sub_60463884(int a1);  /* 0x00463884 */
int __fastcall sub_6046395C(int a1, char a2);  /* 0x0046395c */
int __fastcall sub_60463998(Actor *a1, _DWORD *a2, int a3, int a4);  /* 0x00463998 */
bool __fastcall sub_60463C30(int a1);  /* 0x00463c30 */
int __fastcall sub_60463C60(int a1);  /* 0x00463c60 */
int __fastcall sub_60463CD0(int a1, int a2, unsigned int a3);  /* 0x00463cd0 */
int __fastcall sub_60463E24(_DWORD *a1);  /* 0x00463e24 */
int __fastcall sub_60463EA4(int a1);  /* 0x00463ea4 */
int __fastcall sub_60464028(int a1);  /* 0x00464028 */
int __fastcall sub_604641B8(int a1);  /* 0x004641b8 */
int __fastcall sub_60464534(int a1);  /* 0x00464534 */
int __fastcall sub_60464770(int a1);  /* 0x00464770 */
int __fastcall sub_6046477C(int a1);  /* 0x0046477c */
int __fastcall sub_60464978(int a1);  /* 0x00464978 */
int __fastcall sub_60464984(int a1);  /* 0x00464984 */
int __fastcall sub_60464AE8(int a1);  /* 0x00464ae8 */
int __fastcall sub_60464D3C(int a1);  /* 0x00464d3c */
int __fastcall sub_60464E00(int a1);  /* 0x00464e00 */
int __fastcall sub_60464FE4(int a1);  /* 0x00464fe4 */
int __fastcall sub_60465210(unsigned int *a1);  /* 0x00465210 */
int __fastcall sub_604652F0(_DWORD *a1, int a2);  /* 0x004652f0 */
int __fastcall sub_60465388(int a1, int a2);  /* 0x00465388 */
bool __fastcall sub_60465440(int a1, int a2);  /* 0x00465440 */
int __fastcall sub_60465544(_DWORD *a1);  /* 0x00465544 */
int __fastcall sub_60465600(int a1);  /* 0x00465600 */
int __fastcall sub_60465628(int a1, int a2);  /* 0x00465628 */
int __fastcall sub_60465C74(struct sead_IDisposer *a1);  /* 0x00465c74 */
unsigned int __fastcall sub_60465D70(int a1, unsigned int a2);  /* 0x00465d70 */
int __fastcall sub_60465E4C(int a1, unsigned int a2, unsigned int a3, int a4);  /* 0x00465e4c */
int __fastcall sub_60466074(int a1, int a2);  /* 0x00466074 */
unsigned int __fastcall sub_60466088(int a1, int a2);  /* 0x00466088 */
int __fastcall sub_604660AC();  /* 0x004660ac */
int __fastcall sub_60466328();  /* 0x00466328 */
unsigned int __fastcall sub_604663F4();  /* 0x004663f4 */
int __fastcall sub_60466620(int a1, _DWORD **a2, int a3);  /* 0x00466620 */
unsigned int __fastcall sub_60466800();  /* 0x00466800 */
unsigned int __fastcall sub_604668FC();  /* 0x004668fc */
unsigned int __fastcall sub_60466938(int a1, _DWORD *a2, int a3, char a4);  /* 0x00466938 */
unsigned int __fastcall sub_60466B30(int a1, _DWORD *a2, int a3, unsigned __int8 a4);  /* 0x00466b30 */
unsigned int __fastcall sub_60466B64();  /* 0x00466b64 */
unsigned int __fastcall sub_60466B9C(int a1, _DWORD *a2, unsigned __int8 a3);  /* 0x00466b9c */
int __fastcall sub_60466BF4(int a1);  /* 0x00466bf4 */
int __fastcall sub_60466C54(int a1);  /* 0x00466c54 */
int __fastcall sub_60466EC8(int a1);  /* 0x00466ec8 */
int __fastcall sub_60466EE8(int a1);  /* 0x00466ee8 */
int __fastcall sub_604670C4(int result);  /* 0x004670c4 */
void __fastcall sub_60467320(int a1);  /* 0x00467320 */
int __fastcall sub_60467388(int a1);  /* 0x00467388 */
int __fastcall sub_60467464(int result);  /* 0x00467464 */
bool __fastcall sub_60467480(int a1, int a2);  /* 0x00467480 */
int __fastcall sub_604675F8(_DWORD *a1);  /* 0x004675f8 */
int __fastcall sub_60467838(int a1);  /* 0x00467838 */
int __fastcall sub_60467880(int a1);  /* 0x00467880 */
int __fastcall sub_604679C4(StageActor *a1);  /* 0x004679c4 */
int __fastcall sub_60467A10(int result);  /* 0x00467a10 */
int __fastcall sub_60467A64(int a1);  /* 0x00467a64 */
int __fastcall sub_60467AE8(int result);  /* 0x00467ae8 */
int __fastcall sub_60467B08(int a1);  /* 0x00467b08 */
int __fastcall sub_60467BD4(int a1);  /* 0x00467bd4 */
int __fastcall sub_60467CA0(int a1);  /* 0x00467ca0 */
int __fastcall sub_60467D80(int a1);  /* 0x00467d80 */
int __fastcall sub_60467E4C(int a1);  /* 0x00467e4c */
int __fastcall sub_60467F18(int a1);  /* 0x00467f18 */
int __fastcall sub_60467F30(int a1);  /* 0x00467f30 */
int __fastcall sub_60467F48(Actor *a1);  /* 0x00467f48 */
int __fastcall sub_60467F90(int a1, int a2);  /* 0x00467f90 */
int __fastcall sub_6046817C(_DWORD *a1);  /* 0x0046817c */
int __fastcall sub_604682B4(int a1);  /* 0x004682b4 */
int __fastcall sub_60468324(int a1);  /* 0x00468324 */
int __fastcall sub_6046846C(int a1);  /* 0x0046846c */
int __fastcall sub_604684B8(int result);  /* 0x004684b8 */
int __fastcall sub_6046850C(int a1);  /* 0x0046850c */
int __fastcall sub_60468590(int result);  /* 0x00468590 */
int __fastcall sub_604685B0(int a1);  /* 0x004685b0 */
int __fastcall sub_60468698(int a1);  /* 0x00468698 */
int __fastcall sub_60468764(int a1);  /* 0x00468764 */
int __fastcall sub_60468830(int a1);  /* 0x00468830 */
int __fastcall sub_60468910(int a1);  /* 0x00468910 */
int __fastcall sub_604689DC(int a1);  /* 0x004689dc */
int __fastcall sub_60468AA8(int a1);  /* 0x00468aa8 */
int __fastcall sub_60468AC0(int a1);  /* 0x00468ac0 */
int __fastcall sub_60468AD8(Actor *a1);  /* 0x00468ad8 */
int __fastcall sub_60468B20(int a1);  /* 0x00468b20 */
int __fastcall sub_60468B50(int a1);  /* 0x00468b50 */
bool __fastcall sub_60468BC8(int a1, int a2);  /* 0x00468bc8 */
int __fastcall sub_60468DB4(_DWORD *a1);  /* 0x00468db4 */
int __fastcall sub_60468EEC(int a1);  /* 0x00468eec */
int __fastcall sub_60468FF0(int a1);  /* 0x00468ff0 */
int __fastcall sub_6046903C(int result);  /* 0x0046903c */
int __fastcall sub_604690B4(int a1);  /* 0x004690b4 */
int __fastcall sub_60469138(int result);  /* 0x00469138 */
int __fastcall sub_60469158(int a1);  /* 0x00469158 */
int __fastcall sub_60469224(int a1);  /* 0x00469224 */
int __fastcall sub_604693E8(int a1);  /* 0x004693e8 */
int __fastcall sub_604694B4(int a1);  /* 0x004694b4 */
int __fastcall sub_60469580(int a1);  /* 0x00469580 */
int __fastcall sub_60469598(int a1);  /* 0x00469598 */
int __fastcall sub_604695B0(Actor *a1);  /* 0x004695b0 */
bool __fastcall sub_604695F8(int a1, int a2);  /* 0x004695f8 */
int __fastcall sub_604697E4(_DWORD *a1);  /* 0x004697e4 */
int __fastcall sub_6046991C(int a1);  /* 0x0046991c */
int __fastcall sub_6046999C(int a1);  /* 0x0046999c */
int __fastcall sub_60469AE4(int a1);  /* 0x00469ae4 */
int __fastcall sub_60469B40(int result);  /* 0x00469b40 */
int __fastcall sub_60469B94(int a1);  /* 0x00469b94 */
int __fastcall sub_60469C18(int result);  /* 0x00469c18 */
int __fastcall sub_60469C38(int a1);  /* 0x00469c38 */
int __fastcall sub_60469D04(int a1);  /* 0x00469d04 */
int __fastcall sub_60469DD0(int a1);  /* 0x00469dd0 */
int __fastcall sub_60469EB0(int a1);  /* 0x00469eb0 */
int __fastcall sub_60469F7C(int a1);  /* 0x00469f7c */
int __fastcall sub_6046A048(int a1);  /* 0x0046a048 */
int __fastcall sub_6046A060(int a1);  /* 0x0046a060 */
int __fastcall sub_6046A078(int a1);  /* 0x0046a078 */
bool __fastcall sub_6046A22C(int a1, int a2);  /* 0x0046a22c */
int __fastcall sub_6046A418(_DWORD *a1);  /* 0x0046a418 */
int __fastcall sub_6046A568(int a1);  /* 0x0046a568 */
int __fastcall sub_6046A66C(int a1);  /* 0x0046a66c */
int __fastcall sub_6046A6B8(int result);  /* 0x0046a6b8 */
int __fastcall sub_6046A724(int result);  /* 0x0046a724 */
int __fastcall sub_6046A73C(int result);  /* 0x0046a73c */
int __fastcall sub_6046A750(int a1);  /* 0x0046a750 */
int __fastcall sub_6046A81C(int a1);  /* 0x0046a81c */
int __fastcall sub_6046A8E8(int a1);  /* 0x0046a8e8 */
int __fastcall sub_6046A9C8(int a1);  /* 0x0046a9c8 */
int __fastcall sub_6046AA94(int a1);  /* 0x0046aa94 */
int __fastcall sub_6046AB60(int a1);  /* 0x0046ab60 */
int __fastcall sub_6046AB78(int a1);  /* 0x0046ab78 */
int __fastcall sub_6046AB90(Actor *a1);  /* 0x0046ab90 */
bool __fastcall sub_6046ABE4(int a1, int a2);  /* 0x0046abe4 */
int __fastcall sub_6046ADD0(_DWORD *a1);  /* 0x0046add0 */
int __fastcall sub_6046AE54(int result);  /* 0x0046ae54 */
int __fastcall sub_6046AF20(int a1);  /* 0x0046af20 */
int __fastcall sub_6046B024(int a1);  /* 0x0046b024 */
float __fastcall sub_6046B070(int a1);  /* 0x0046b070 */
int __fastcall sub_6046B0C8(int a1);  /* 0x0046b0c8 */
int __fastcall sub_6046B14C(int result);  /* 0x0046b14c */
int __fastcall sub_6046B16C(int a1);  /* 0x0046b16c */
int __fastcall sub_6046B19C(int a1);  /* 0x0046b19c */
int __fastcall sub_6046B218(int result);  /* 0x0046b218 */
int __fastcall sub_6046B260(int a1);  /* 0x0046b260 */
int __fastcall sub_6046B32C(int a1);  /* 0x0046b32c */
int __fastcall sub_6046B3F8(int a1);  /* 0x0046b3f8 */
int __fastcall sub_6046B4D8(int a1);  /* 0x0046b4d8 */
int __fastcall sub_6046B5A4(int a1);  /* 0x0046b5a4 */
int __fastcall sub_6046B670(int result);  /* 0x0046b670 */
int __fastcall sub_6046B68C(int a1);  /* 0x0046b68c */
int __fastcall sub_6046B6A4(int a1);  /* 0x0046b6a4 */
int __fastcall sub_6046B6BC(Actor *a1);  /* 0x0046b6bc */
bool __fastcall sub_6046B704(int a1, int a2);  /* 0x0046b704 */
int __fastcall sub_6046B8F0(_DWORD *a1);  /* 0x0046b8f0 */
int __fastcall sub_6046B974(int result);  /* 0x0046b974 */
int __fastcall sub_6046BB70(Actor *a1);  /* 0x0046bb70 */
int __fastcall sub_6046BC58(_DWORD *a1);  /* 0x0046bc58 */
int __fastcall sub_6046BD70(int result);  /* 0x0046bd70 */
int __fastcall sub_6046C164(int a1);  /* 0x0046c164 */
int __fastcall sub_6046C1AC(int a1);  /* 0x0046c1ac */
int __fastcall sub_6046C28C(int a1);  /* 0x0046c28c */
int __fastcall sub_6046C364(Actor *a1);  /* 0x0046c364 */
int __fastcall sub_6046C3AC(int a1);  /* 0x0046c3ac */
int __fastcall sub_6046C850(Actor *a1);  /* 0x0046c850 */
int __fastcall sub_6046CAF4(Actor *a1);  /* 0x0046caf4 */
int __fastcall sub_6046CC84(Actor *a1);  /* 0x0046cc84 */
int __fastcall sub_6046CC88(int a1);  /* 0x0046cc88 */
int __fastcall sub_6046CD7C(Actor *a1);  /* 0x0046cd7c */
int __fastcall sub_6046CDCC(int a1);  /* 0x0046cdcc */
int __fastcall sub_6046CE38(int a1);  /* 0x0046ce38 */
int __fastcall sub_6046CF08(int a1);  /* 0x0046cf08 */
bool __fastcall sub_6046D14C(int a1, int a2);  /* 0x0046d14c */
int __fastcall sub_6046D338(_DWORD *a1);  /* 0x0046d338 */
int __fastcall sub_6046D3C4(int a1);  /* 0x0046d3c4 */
int __fastcall sub_6046DABC(int result);  /* 0x0046dabc */
int __fastcall sub_6046DAD8(float *a1);  /* 0x0046dad8 */
int __fastcall sub_6046DB98(int result);  /* 0x0046db98 */
int __fastcall sub_6046DCAC(_DWORD *a1);  /* 0x0046dcac */
int __fastcall sub_6046DD80(int a1);  /* 0x0046dd80 */
int __fastcall sub_6046DF74(int a1);  /* 0x0046df74 */
int __fastcall sub_6046E1CC(int32x4_t *a1);  /* 0x0046e1cc */
int __fastcall sub_6046E25C(int a1, int a2, int a3, int a4);  /* 0x0046e25c */
bool __fastcall sub_6046E28C(int a1, int a2);  /* 0x0046e28c */
void __fastcall sub_6046E390(int a1);  /* 0x0046e390 */
int __fastcall sub_6046E40C(int a1);  /* 0x0046e40c */
int __fastcall Actor_resuta_build(int a1);  /* 0x0046e490 */
int __fastcall sub_6046E514(int a1);  /* 0x0046e514 */
int __fastcall sub_6046E57C(int a1);  /* 0x0046e57c */
int __fastcall sub_6046E5D4(int (__fastcall **a1)(_DWORD));  /* 0x0046e5d4 */
int __fastcall sub_6046E828(int a1);  /* 0x0046e828 */
bool __fastcall sub_6046E898(int a1);  /* 0x0046e898 */
bool __fastcall sub_6046EB0C(int a1, int a2);  /* 0x0046eb0c */
int __fastcall sub_6046EC80(_DWORD *a1);  /* 0x0046ec80 */
bool __fastcall sub_6046EC90(int a1, int a2);  /* 0x0046ec90 */
int __fastcall sub_6046EE34(int result);  /* 0x0046ee34 */
int __fastcall sub_6046EE44(int result);  /* 0x0046ee44 */
int __fastcall sub_6046EE68(int a1);  /* 0x0046ee68 */
int __fastcall sub_6046EFC4(int a1);  /* 0x0046efc4 */
int __fastcall sub_6046F204(int a1);  /* 0x0046f204 */
int __fastcall sub_6046F390(int a1);  /* 0x0046f390 */
int __fastcall sub_6046F3C4(int result);  /* 0x0046f3c4 */
int __fastcall sub_6046F418(int a1);  /* 0x0046f418 */
int __fastcall sub_6046F49C(int result);  /* 0x0046f49c */
int __fastcall sub_6046F4BC(int a1);  /* 0x0046f4bc */
int __fastcall sub_6046F588(int a1);  /* 0x0046f588 */
int __fastcall sub_6046F654(int a1);  /* 0x0046f654 */
int __fastcall sub_6046F734(int a1);  /* 0x0046f734 */
int __fastcall sub_6046F800(int a1);  /* 0x0046f800 */
int __fastcall sub_6046F8CC(int a1);  /* 0x0046f8cc */
int __fastcall sub_6046F8E4(int a1);  /* 0x0046f8e4 */
int __fastcall sub_6046F8FC(Actor *a1);  /* 0x0046f8fc */
int __fastcall sub_6046F9EC(int a1);  /* 0x0046f9ec */
bool __fastcall sub_6046FA60(int a1, int a2);  /* 0x0046fa60 */
void __fastcall sub_6046FC4C(_DWORD *a1);  /* 0x0046fc4c */
int __fastcall sub_6046FCFC(_DWORD *a1);  /* 0x0046fcfc */
int __fastcall I_moon_ref(int a1);  /* 0x0046ff08 */
int __fastcall sub_60470050(int a1);  /* 0x00470050 */
int __fastcall sub_604700A4(int a1);  /* 0x004700a4 */
int __fastcall sub_6047014C(int a1);  /* 0x0047014c */
int __fastcall sub_604701F4(int a1);  /* 0x004701f4 */
int __fastcall sub_604702B0(int a1);  /* 0x004702b0 */
int __fastcall sub_60470358(int a1);  /* 0x00470358 */
int __fastcall sub_60470400(int a1);  /* 0x00470400 */
int __fastcall sub_60470418(int a1);  /* 0x00470418 */
int __fastcall sub_60470430(int a1);  /* 0x00470430 */
int __fastcall sub_60470580(int result);  /* 0x00470580 */
int __fastcall sub_604705D4(int a1);  /* 0x004705d4 */
int __fastcall sub_60470658(int result);  /* 0x00470658 */
bool __fastcall sub_60470678(int a1, int a2);  /* 0x00470678 */
int __fastcall sub_60470864(_DWORD *a1);  /* 0x00470864 */
int __fastcall sub_60470B10(int a1);  /* 0x00470b10 */
int __fastcall sub_60470DD4(_DWORD *a1);  /* 0x00470dd4 */
int __fastcall sub_60470F68(_DWORD *a1);  /* 0x00470f68 */
int __fastcall sub_60470F8C(int a1, int a2, int a3, int a4);  /* 0x00470f8c */
bool __fastcall sub_60470FB4(int a1, int a2);  /* 0x00470fb4 */
int __fastcall sub_604710B8(Actor *a1);  /* 0x004710b8 */
int __fastcall sub_60471290(_DWORD *a1);  /* 0x00471290 */
int __fastcall sub_604712E4(int a1);  /* 0x004712e4 */
int __fastcall sub_604713C8(int result);  /* 0x004713c8 */
int __fastcall sub_604713D8(int a1);  /* 0x004713d8 */
int __fastcall sub_60471470(int a1);  /* 0x00471470 */
int __fastcall sub_604714E4(int a1);  /* 0x004714e4 */
int __fastcall sub_60471698(int *a1);  /* 0x00471698 */
int __fastcall sub_60471854(int *a1);  /* 0x00471854 */
int __fastcall sub_60471878(int a1, int a2, int a3, int a4);  /* 0x00471878 */
int __fastcall sub_60471B30(Actor *a1);  /* 0x00471b30 */
int __fastcall sub_60471D64(_DWORD *a1);  /* 0x00471d64 */
int __fastcall sub_60471DB4(int a1, int a2);  /* 0x00471db4 */
int __fastcall sub_604721C8();  /* 0x004721c8 */
int __fastcall sub_6047241C(int a1, int a2, int a3);  /* 0x0047241c */
int __fastcall sub_60472644(int a1);  /* 0x00472644 */
int __fastcall sub_60472960();  /* 0x00472960 */
int __fastcall sub_604729C4(int a1, int a2);  /* 0x004729c4 */
int __fastcall sub_60472ADC(int result);  /* 0x00472adc */
bool __fastcall sub_60472B20();  /* 0x00472b20 */
bool __fastcall sub_60473048(int a1, int a2);  /* 0x00473048 */
int __fastcall sub_6047314C(int a1, _DWORD *a2);  /* 0x0047314c */
int __fastcall sub_6047321C(struct sead_IDisposer *a1);  /* 0x0047321c */
bool __fastcall sub_6047322C(int a1, int a2);  /* 0x0047322c */
int __fastcall sub_60473414(int a1, int a2, int a3);  /* 0x00473414 */
int __fastcall sub_6047342C(_DWORD *a1);  /* 0x0047342c */
int __fastcall sub_6047344C(int a1);  /* 0x0047344c */
int __fastcall sub_604734E4(_DWORD *a1, int a2);  /* 0x004734e4 */
int __fastcall sub_60473624(int a1, _DWORD *a2);  /* 0x00473624 */
int __fastcall sub_604739E8();  /* 0x004739e8 */
int __fastcall sub_60473B4C(int a1);  /* 0x00473b4c */
int __fastcall sub_60473B58(_DWORD *a1, unsigned int a2, __int64 *a3);  /* 0x00473b58 */
int __fastcall sub_60473B88(_DWORD *a1, _DWORD *a2, int a3);  /* 0x00473b88 */
int __fastcall sub_60473CC0();  /* 0x00473cc0 */
int __fastcall sub_60473DA4(int a1);  /* 0x00473da4 */
int __fastcall sub_60473DE4(_DWORD *a1, unsigned int a2, _DWORD *a3, int a4);  /* 0x00473de4 */
int __fastcall sub_60473EDC(_DWORD *a1, unsigned int a2, _DWORD *a3, int a4, int *a5);  /* 0x00473edc */
int __fastcall sub_604741D8(_DWORD *a1, unsigned int a2, _DWORD *a3, int a4);  /* 0x004741d8 */
int __fastcall sub_604742D0(_DWORD *a1, unsigned int a2, _DWORD *a3, unsigned int a4, int a5);  /* 0x004742d0 */
int __fastcall sub_60474420();  /* 0x00474420 */
int __fastcall sub_6047455C(int a1, unsigned int a2);  /* 0x0047455c */
int __fastcall sub_6047457C();  /* 0x0047457c */
int __fastcall sub_6047459C(int a1, unsigned int a2);  /* 0x0047459c */
int __fastcall sub_604745C0();  /* 0x004745c0 */
int __fastcall sub_604745EC();  /* 0x004745ec */
int __fastcall sub_6047467C(_DWORD *a1, unsigned int a2, _DWORD *a3, int a4, int a5);  /* 0x0047467c */
int __fastcall sub_604746E4(int a1, _DWORD *a2, _DWORD *a3);  /* 0x004746e4 */
int __fastcall sub_6047482C(int a1, unsigned int a2);  /* 0x0047482c */
int __fastcall sub_60474848();  /* 0x00474848 */
int __fastcall sub_6047488C(int a1, _DWORD *a2);  /* 0x0047488c */
int __fastcall sub_604749C4(int a1);  /* 0x004749c4 */
int __fastcall sub_60474B24(int a1, _DWORD *a2);  /* 0x00474b24 */
int __fastcall sub_60474C5C(int a1, _DWORD *a2);  /* 0x00474c5c */
int __fastcall sub_60474EBC(int a1, _DWORD *a2);  /* 0x00474ebc */
int __fastcall sub_60474EEC(_DWORD *a1);  /* 0x00474eec */
int __fastcall sub_60474F28(int a1);  /* 0x00474f28 */
int __fastcall sub_60475054(int a1, _DWORD *a2);  /* 0x00475054 */
int __fastcall sub_6047518C();  /* 0x0047518c */
int __fastcall sub_604751FC();  /* 0x004751fc */
int __fastcall __Player__applyPowerUpTransform();  /* 0x00475288 */
int __fastcall sub_604752D4();  /* 0x004752d4 */
int __fastcall sub_60475334();  /* 0x00475334 */
int __fastcall sub_604753A8();  /* 0x004753a8 */
int __fastcall sub_60475438(int a1, int a2, _DWORD *a3, int *a4);  /* 0x00475438 */
int __fastcall sub_60475484();  /* 0x00475484 */
int __fastcall sub_604754E4();  /* 0x004754e4 */
int __fastcall sub_60475520(int a1, int a2, _DWORD *a3, int *a4);  /* 0x00475520 */
int __fastcall sub_60475570();  /* 0x00475570 */
int __fastcall sub_604755C4(int a1, int a2, _DWORD *a3, int a4, int *a5);  /* 0x004755c4 */
int __fastcall sub_60475618();  /* 0x00475618 */
int __fastcall sub_6047566C();  /* 0x0047566c */
int __fastcall sub_604756E0();  /* 0x004756e0 */
int __fastcall sub_6047572C();  /* 0x0047572c */
void __fastcall sub_60475AE8(struct sead_IDisposer *a1);  /* 0x00475ae8 */
int __fastcall sub_60475BB8(struct sead_IDisposer *a1);  /* 0x00475bb8 */
int __fastcall sub_60475C8C(int a1);  /* 0x00475c8c */
int __fastcall sub_60475CDC(_DWORD *a1, _DWORD *a2, int a3, int a4, int a5);  /* 0x00475cdc */
int __fastcall sub_60476030(int a1, _DWORD *a2, int *a3);  /* 0x00476030 */
int __fastcall sub_60476094(int a1, int a2);  /* 0x00476094 */
int __fastcall sub_604762F8(_DWORD *a1, int a2);  /* 0x004762f8 */
int __fastcall sub_60476388();  /* 0x00476388 */
int __fastcall sub_60476434(int a1);  /* 0x00476434 */
void __fastcall sub_6047643C(struct sead_IDisposer *a1);  /* 0x0047643c */
int __fastcall sub_604764D0(int a1);  /* 0x004764d0 */
int __fastcall sub_60476640(int a1, _DWORD *a2);  /* 0x00476640 */
int __fastcall sub_60476708(int a1);  /* 0x00476708 */
bool __fastcall sub_60476718(int a1, int a2);  /* 0x00476718 */
int __fastcall sub_6047682C(_DWORD *a1);  /* 0x0047682c */
int __fastcall sub_6047684C(int result);  /* 0x0047684c */
int __fastcall sub_60476898(int a1);  /* 0x00476898 */
int __fastcall sub_60476920(int a1, int a2);  /* 0x00476920 */
int __fastcall sub_604769E0(int a1, int a2);  /* 0x004769e0 */
int __fastcall sub_60476A7C(int a1, int a2, int a3, char **a4);  /* 0x00476a7c */
int __fastcall sub_6047778C(_DWORD *a1, int a2, int a3);  /* 0x0047778c */
int __fastcall sub_60477B30();  /* 0x00477b30 */
int __fastcall sub_60477C60(int a1);  /* 0x00477c60 */
int __fastcall sub_60477D0C(int a1);  /* 0x00477d0c */
int __fastcall sub_60477DB4(int a1);  /* 0x00477db4 */
int __fastcall sub_60477E50(int a1);  /* 0x00477e50 */
int __fastcall sub_60477EF8(_DWORD *a1);  /* 0x00477ef8 */
bool __fastcall sub_60477F1C(int a1);  /* 0x00477f1c */
int __fastcall sub_60477F50(int a1);  /* 0x00477f50 */
int __fastcall sub_60477F8C(_DWORD *a1);  /* 0x00477f8c */
int __fastcall sub_60477FD8(int a1);  /* 0x00477fd8 */
int __fastcall sub_60478080(int a1);  /* 0x00478080 */
int __fastcall sub_604781C8(int a1, int a2);  /* 0x004781c8 */
int __fastcall sub_60478220(int result);  /* 0x00478220 */
int __fastcall sub_6047823C(_DWORD *a1);  /* 0x0047823c */
int __fastcall sub_60478344(int a1);  /* 0x00478344 */
int __fastcall sub_60478440(_DWORD *a1);  /* 0x00478440 */
int __fastcall sub_604784EC(int a1);  /* 0x004784ec */
bool __fastcall sub_604785CC(int a1);  /* 0x004785cc */
int __fastcall sub_604785EC(int a1);  /* 0x004785ec */
int __fastcall sub_60478638();  /* 0x00478638 */
int __fastcall sub_60478650(_DWORD *a1);  /* 0x00478650 */
int __fastcall sub_60478680(int a1, int a2);  /* 0x00478680 */
int __fastcall sub_60478750(int result);  /* 0x00478750 */
int __fastcall sub_6047877C();  /* 0x0047877c */
int __fastcall sub_60478864();  /* 0x00478864 */
int __fastcall sub_60478880();  /* 0x00478880 */
int __fastcall sub_60478974(int a1);  /* 0x00478974 */
int __fastcall sub_60478B9C(_DWORD *a1);  /* 0x00478b9c */
int __fastcall sub_60478BFC(_DWORD *a1);  /* 0x00478bfc */
int __fastcall sub_60478D70(_DWORD *a1, int a2, int a3);  /* 0x00478d70 */
int __fastcall sub_60478DD8(int result, float *a2);  /* 0x00478dd8 */
int __fastcall sub_60478E94(_DWORD *a1);  /* 0x00478e94 */
bool __fastcall sub_60478EF0(_DWORD *a1);  /* 0x00478ef0 */
int __fastcall sub_60478F58(int a1);  /* 0x00478f58 */
int __fastcall sub_60479098(int a1);  /* 0x00479098 */
int __fastcall sub_604791FC(_DWORD *a1);  /* 0x004791fc */
int __fastcall sub_604793E0(int a1, int a2, int a3);  /* 0x004793e0 */
int __fastcall sub_604793FC(int a1, int a2);  /* 0x004793fc */
int __fastcall sub_60479414();  /* 0x00479414 */
int __fastcall sub_60479524(_DWORD *a1);  /* 0x00479524 */
int __fastcall sub_60479588();  /* 0x00479588 */
int __fastcall sub_60479600(int a1, unsigned int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, int a6);  /* 0x00479600 */
int __fastcall sub_60479808();  /* 0x00479808 */
int __fastcall sub_60479910(int a1, int a2);  /* 0x00479910 */
int __fastcall sub_60479C34(struct sead_IDisposer *a1);  /* 0x00479c34 */
int __fastcall sub_60479C64();  /* 0x00479c64 */
int __fastcall sub_60479DF4(int a1, _DWORD *a2);  /* 0x00479df4 */
int __fastcall sub_60479F28(int a1, _DWORD *a2);  /* 0x00479f28 */
int __fastcall sub_6047A05C();  /* 0x0047a05c */
int __fastcall sub_6047A1EC(int a1, int a2);  /* 0x0047a1ec */
int __fastcall sub_6047A864(int a1, int a2, int *a3);  /* 0x0047a864 */
int __fastcall sub_6047AAB4(int a1, float *a2, _DWORD *a3, int a4);  /* 0x0047aab4 */
int __fastcall sub_6047BE64(_WORD *a1, int a2, int a3);  /* 0x0047be64 */
int __fastcall sub_6047BEC0(_WORD *a1, unsigned int a2);  /* 0x0047bec0 */
int __fastcall sub_6047C13C(unsigned int a1, unsigned int a2, int *a3);  /* 0x0047c13c */
int __fastcall sub_6047D75C(int a1, int a2, int a3);  /* 0x0047d75c */
int __fastcall sub_6047DA04();  /* 0x0047da04 */
int __fastcall sub_6047DC74(int a1);  /* 0x0047dc74 */
int __fastcall sub_6047DC84(int a1, int *a2);  /* 0x0047dc84 */
int __fastcall sub_6047DCCC(int a1);  /* 0x0047dccc */
int __fastcall sub_6047DEC8();  /* 0x0047dec8 */
int __fastcall sub_6047DF58(int a1, _DWORD *a2, int a3, int a4, _DWORD *a5, int a6, int *a7);  /* 0x0047df58 */
int __fastcall sub_6047E0EC(_DWORD *a1, int a2, int a3);  /* 0x0047e0ec */
int __fastcall sub_6047E168(int *a1, _DWORD *a2, unsigned __int8 *a3, int a4, int a5);  /* 0x0047e168 */
int __fastcall sub_6047E4BC(int result);  /* 0x0047e4bc */
int __fastcall sub_6047E518();  /* 0x0047e518 */
int __fastcall sub_6047E7C8(_DWORD *a1, int a2, int a3, int a4);  /* 0x0047e7c8 */
int __fastcall sub_6047EBB4();  /* 0x0047ebb4 */
int __fastcall sub_6047EBC4(int result);  /* 0x0047ebc4 */
int __fastcall sub_6047EBE0(int a1, _DWORD *a2);  /* 0x0047ebe0 */
int __fastcall sub_6047ED10();  /* 0x0047ed10 */
int __fastcall sub_6047EE74(int result, int a2);  /* 0x0047ee74 */
int __fastcall sub_6047EEC4();  /* 0x0047eec4 */
int __fastcall sub_6047EF24();  /* 0x0047ef24 */
bool __fastcall sub_6047EF78();  /* 0x0047ef78 */
int __fastcall sub_6047EFCC(int result, int a2);  /* 0x0047efcc */
int __fastcall sub_6047F01C();  /* 0x0047f01c */
int __fastcall sub_6047F124();  /* 0x0047f124 */
bool __fastcall sub_6047F178();  /* 0x0047f178 */
bool __fastcall sub_6047F1CC(int a1);  /* 0x0047f1cc */
int __fastcall sub_6047F230(int a1);  /* 0x0047f230 */
bool __fastcall sub_6047F384(int a1, int a2);  /* 0x0047f384 */
int __fastcall sub_6047F3B4(_DWORD *a1);  /* 0x0047f3b4 */
int __fastcall sub_6047F4E4(int a1, _DWORD *a2);  /* 0x0047f4e4 */
int __fastcall sub_6047F600(struct sead_IDisposer *a1);  /* 0x0047f600 */
int __fastcall sub_6047F660(int a1);  /* 0x0047f660 */
int __fastcall sub_6047F790(int result);  /* 0x0047f790 */
int __fastcall sub_6047F794(int a1);  /* 0x0047f794 */
int __fastcall sub_6047F7AC(int a1);  /* 0x0047f7ac */
int __fastcall sub_6047F840(int result);  /* 0x0047f840 */
int __fastcall sub_6047F868(int a1);  /* 0x0047f868 */
int __fastcall sub_6047F880(int result);  /* 0x0047f880 */
int __fastcall sub_6047F88C(int a1);  /* 0x0047f88c */
int __fastcall sub_6047FA44(int a1);  /* 0x0047fa44 */
int __fastcall sub_6047FA7C(int a1);  /* 0x0047fa7c */
int __fastcall sub_6047FD20(int result);  /* 0x0047fd20 */
int __fastcall sub_6047FD30(int a1);  /* 0x0047fd30 */
int __fastcall sub_6047FD68(int result);  /* 0x0047fd68 */
int __fastcall sub_6047FDCC(int a1);  /* 0x0047fdcc */
int __fastcall sub_6047FDEC(int a1);  /* 0x0047fdec */

/* ---- projectile.c ---- */
bool __fastcall sub_607A26F8(int a1, int a2);  /* 0x007a2708 */
int __fastcall sub_607AA954(int a1);  /* 0x007aa954 */
int __fastcall sub_607AAA00(int a1);  /* 0x007aaa00 */
void __fastcall sub_607AABA0(int a1, int a2);  /* 0x007aaba0 */
int __fastcall sub_607AAF80(int a1);  /* 0x007aaf80 */

/* ---- modes.c ---- */
int __fastcall sub_6078E608();  /* 0x0078e608 */

