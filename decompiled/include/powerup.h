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

/* RVAs are image-relative: VA = 0x60000000 + RVA */

/* ---- powerup.c ---- */
int __fastcall sub_60450184(int a1, int a2, int a3);  /* 0x00450184 */
int __fastcall sub_60450434(_DWORD *a1, int a2, int a3, int a4);  /* 0x00450434 */
int __fastcall sub_604504CC(int a1, _DWORD *a2, int a3, int a4, int a5, int a6, int a7);  /* 0x004504cc */
int __fastcall sub_60450674(int a1);  /* 0x00450674 */
int __fastcall sub_6045077C(int a1);  /* 0x0045077c */
int __fastcall sub_60450860(int a1);  /* 0x00450860 */
int __fastcall sub_60450A48(int a1, _DWORD *a2, int a3, int a4, unsigned int a5);  /* 0x00450a48 */
int __fastcall sub_60450A7C(_DWORD **a1, int a2, int a3);  /* 0x00450a7c */
int __fastcall sub_60450BAC(_DWORD **a1);  /* 0x00450bac */
int __fastcall sub_60450E5C(int result, int a2, int a3, int *a4, int a5);  /* 0x00450e5c */
int __fastcall TexAnim_play(int a1, int a2, _DWORD *a3);  /* 0x004510e4 */
int __fastcall sub_604511EC(_DWORD *a1, _DWORD *a2, int a3);  /* 0x004511ec */
int __fastcall sub_60451438(int a1);  /* 0x00451438 */
int __fastcall sub_6045154C(int a1, int a2, int a3, int *a4, int a5);  /* 0x0045154c */
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
unsigned int __fastcall sub_60453AA8(int a1, unsigned int a2);  /* 0x00453aa8 */
int __fastcall sub_60453D7C(int a1);  /* 0x00453d7c */
int __fastcall sub_60453F44(int result);  /* 0x00453f44 */
int __fastcall sub_60454344(int a1);  /* 0x00454344 */
int __fastcall sub_60454858(int a1, int a2);  /* 0x00454858 */
int __fastcall sub_60454B60(int result, unsigned __int8 *a2, unsigned __int8 *a3);  /* 0x00454b60 */
int __fastcall sub_60454CDC(int a1, float *a2);  /* 0x00454cdc */
int __fastcall sub_60454E80(int a1, int a2);  /* 0x00454e80 */
int __fastcall sub_604551F0(int a1, int a2);  /* 0x004551f0 */
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
int __fastcall sub_60455B20(int a1, unsigned __int8 *a2);  /* 0x00455b20 */
int __fastcall sub_60455B50(int a1, int a2);  /* 0x00455b50 */
int __fastcall sub_60455B88(int a1, __int16 *a2);  /* 0x00455b88 */
int __fastcall sub_60455BC4(int a1, int a2);  /* 0x00455bc4 */
int __fastcall sub_60455C08(int a1, unsigned __int8 *a2);  /* 0x00455c08 */
int __fastcall sub_60455CB8(int a1);  /* 0x00455cb8 */
int __fastcall sub_60455D54(_DWORD *a1, int a2, int a3);  /* 0x00455d54 */
int __fastcall sub_60455E7C(_DWORD *a1, int a2);  /* 0x00455e7c */
int __fastcall sub_60455EF4(_DWORD *a1);  /* 0x00455ef4 */
int __fastcall sub_60456064(_DWORD *a1);  /* 0x00456064 */
int __fastcall sub_60456128(int a1);  /* 0x00456128 */
int __fastcall sub_60456388(int result);  /* 0x00456388 */
int __fastcall sub_60456428(int a1, int a2, int a3, __int16 a4, __int16 a5);  /* 0x00456428 */
int __fastcall sub_604564E0(int a1, unsigned __int8 *a2);  /* 0x004564e0 */
int __fastcall sub_60456918(int a1);  /* 0x00456918 */
int __fastcall sub_60456A10(int result);  /* 0x00456a10 */
int __fastcall RumbleMgr_ctor(int a1, int a2);  /* 0x00456b44 */
int __fastcall sub_60456EF8(_DWORD *a1);  /* 0x00456ef8 */
int __fastcall sub_604571EC(int a1, unsigned int a2, int a3, int a4);  /* 0x004571ec */
int __fastcall sub_60457304(int a1, unsigned int a2, _DWORD *a3, int a4, int a5);  /* 0x00457304 */
int __fastcall sub_6045744C(int a1, _DWORD *a2, int a3, int a4);  /* 0x0045744c */
int __fastcall sub_60457D5C(int a1, int a2, int a3);  /* 0x00457d5c */
unsigned int __fastcall sub_604580E0(int a1, int a2);  /* 0x004580e0 */
int __fastcall sub_604587EC(int result);  /* 0x004587ec */
int __fastcall sub_60458A04(int a1);  /* 0x00458a04 */
int __fastcall sub_604591A4(int a1);  /* 0x004591a4 */
bool __fastcall sub_604592A0(int a1, int a2);  /* 0x004592a0 */
bool __fastcall sub_604593D0(int a1, int a2);  /* 0x004593d0 */
bool __fastcall sub_60459718(int a1, int a2);  /* 0x00459718 */
int __fastcall sub_60459990(int a1);  /* 0x00459990 */
int __fastcall sub_6045A444(int a1, int a2);  /* 0x0045a444 */
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
unsigned int __fastcall sub_6045C720(int a1);  /* 0x0045c720 */
int __fastcall sub_6045C9A0(int a1);  /* 0x0045c9a0 */
int __fastcall sub_6045D18C(int result);  /* 0x0045d18c */
int __fastcall sub_6045D1C0(int *a1, int a2, int a3);  /* 0x0045d1c0 */
int __fastcall sub_6045D390(int a1, int a2);  /* 0x0045d390 */
int __fastcall sub_6045D408(int *a1, int a2, int a3);  /* 0x0045d408 */
int __fastcall sub_6045EC8C(int a1);  /* 0x0045ec8c */
int __fastcall sub_604615BC(int a1);  /* 0x004615bc */
int __fastcall sub_60461904(int a1);  /* 0x00461904 */
int __fastcall sub_60461A1C(int a1);  /* 0x00461a1c */
int __fastcall sub_60461AA0(int result);  /* 0x00461aa0 */
int __fastcall sub_60461BE4(int a1);  /* 0x00461be4 */
int __fastcall sub_60461C50(int a1);  /* 0x00461c50 */
int __fastcall sub_60462018(int a1);  /* 0x00462018 */
int __fastcall sub_6046233C(int a1, float *a2, float *a3);  /* 0x0046233c */
int __fastcall sub_60462370(int a1);  /* 0x00462370 */
int __fastcall sub_60462530(int a1);  /* 0x00462530 */
int __fastcall sub_60462798(int a1, int a2, int a3);  /* 0x00462798 */
int __fastcall sub_60462888(int a1, int a2);  /* 0x00462888 */
int __fastcall sub_60462A58(int a1);  /* 0x00462a58 */
int __fastcall sub_60462B7C(int result);  /* 0x00462b7c */
int __fastcall sub_60462BB8(int a1);  /* 0x00462bb8 */
int __fastcall sub_60462BEC(int a1, int a2);  /* 0x00462bec */
bool __fastcall sub_60462DE0(int a1, int a2);  /* 0x00462de0 */
int __fastcall sub_60462F64(int a1);  /* 0x00462f64 */
int __fastcall sub_604630C8(int a1);  /* 0x004630c8 */
int __fastcall sub_6046313C(int result);  /* 0x0046313c */
void __fastcall sub_60463178(int a1);  /* 0x00463178 */
int __fastcall sub_60463584(int result);  /* 0x00463584 */
int __fastcall sub_604635F4(int a1);  /* 0x004635f4 */
int __fastcall sub_60463884(int a1);  /* 0x00463884 */
int __fastcall sub_6046395C(int a1, char a2);  /* 0x0046395c */
int __fastcall sub_60463998(Actor *a1, _DWORD *a2, int a3, int a4);  /* 0x00463998 */
bool __fastcall sub_60463C30(int a1);  /* 0x00463c30 */
int __fastcall sub_60463C60(int a1);  /* 0x00463c60 */
int __fastcall sub_60463CD0(int a1, int a2, unsigned int a3);  /* 0x00463cd0 */
int __fastcall sub_60464D3C(int a1);  /* 0x00464d3c */
unsigned int __fastcall sub_60465D70(int a1, unsigned int a2);  /* 0x00465d70 */
int __fastcall sub_60465E4C(int a1, unsigned int a2, unsigned int a3, int a4);  /* 0x00465e4c */
int __fastcall sub_604660AC(int a1, _DWORD *a2, int a3, int a4);  /* 0x004660ac */
int __fastcall sub_60466328(int a1, int a2, int a3, int a4);  /* 0x00466328 */
unsigned int __fastcall sub_604663F4(int a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, int a6);  /* 0x004663f4 */
int __fastcall sub_60466620(int a1, _DWORD **a2, int a3);  /* 0x00466620 */
unsigned int __fastcall sub_60466800(int a1, int a2, int a3, int a4);  /* 0x00466800 */
unsigned int __fastcall sub_604668FC(int a1, _DWORD *a2, int a3, char a4);  /* 0x004668fc */
unsigned int __fastcall sub_60466938(int a1, _DWORD *a2, int a3, char a4);  /* 0x00466938 */
unsigned int __fastcall sub_60466B30(int a1, _DWORD *a2, int a3, unsigned __int8 a4);  /* 0x00466b30 */
unsigned int __fastcall sub_60466B64(int a1, _DWORD *a2, int a3, unsigned __int8 a4);  /* 0x00466b64 */
int __fastcall sub_60467880(int a1);  /* 0x00467880 */
int __fastcall sub_60468324(int a1);  /* 0x00468324 */
int __fastcall sub_6046999C(int a1);  /* 0x0046999c */
int __fastcall sub_6046BB70(Actor *a1);  /* 0x0046bb70 */
int __fastcall sub_6046C3AC(int a1);  /* 0x0046c3ac */
int __fastcall sub_6046DD80(int a1);  /* 0x0046dd80 */
int __fastcall sub_6046DF74(int a1);  /* 0x0046df74 */
int __fastcall Actor_resuta_build(int a1);  /* 0x0046e490 */
int __fastcall sub_6046E5D4(int (__fastcall **a1)(_DWORD));  /* 0x0046e5d4 */
bool __fastcall sub_6046E898(int a1);  /* 0x0046e898 */
int __fastcall sub_6046EFC4(int a1);  /* 0x0046efc4 */
int __fastcall I_moon_ref(int a1);  /* 0x0046ff08 */
int __fastcall sub_60470DD4(_DWORD *a1);  /* 0x00470dd4 */
int __fastcall sub_604714E4(int a1);  /* 0x004714e4 */
int __fastcall sub_60471698(int *a1);  /* 0x00471698 */
int __fastcall sub_604721C8(int a1, const char **a2, int a3);  /* 0x004721c8 */
int __fastcall sub_6047241C(int a1, int a2, int a3);  /* 0x0047241c */
int __fastcall sub_60472644(int a1);  /* 0x00472644 */
int __fastcall sub_60472960(int a1, int a2, int a3);  /* 0x00472960 */
int __fastcall sub_60472ADC(int result);  /* 0x00472adc */
bool __fastcall sub_60472B20(_DWORD *a1);  /* 0x00472b20 */
int __fastcall sub_604734E4(_DWORD *a1, int a2);  /* 0x004734e4 */
int __fastcall sub_60473624(int a1, _DWORD *a2);  /* 0x00473624 */
int __fastcall sub_604739E8(_DWORD *a1, __int64 *a2, __int64 *a3);  /* 0x004739e8 */
int __fastcall sub_60473B88(_DWORD *a1, _DWORD *a2, int a3);  /* 0x00473b88 */
int __fastcall sub_60473CC0(_DWORD *a1, int a2, __int64 *a3);  /* 0x00473cc0 */
int __fastcall sub_60473DA4(int a1);  /* 0x00473da4 */
int __fastcall sub_60473DE4(_DWORD *a1, unsigned int a2, _DWORD *a3, int a4);  /* 0x00473de4 */
int __fastcall sub_60473EDC(_DWORD *a1, unsigned int a2, _DWORD *a3, int a4, int *a5);  /* 0x00473edc */
int __fastcall sub_604741D8(_DWORD *a1, unsigned int a2, _DWORD *a3, int a4);  /* 0x004741d8 */
int __fastcall sub_604742D0(_DWORD *a1, unsigned int a2, _DWORD *a3, unsigned int a4, int a5);  /* 0x004742d0 */
int __fastcall sub_60474420(_DWORD *a1, unsigned int a2, _DWORD *a3, unsigned int a4, int a5);  /* 0x00474420 */
int __fastcall sub_604745EC(int result, unsigned int a2, int a3);  /* 0x004745ec */
int __fastcall sub_6047467C(_DWORD *a1, unsigned int a2, _DWORD *a3, int a4, int a5);  /* 0x0047467c */
int __fastcall sub_604746E4(int a1, _DWORD *a2, _DWORD *a3);  /* 0x004746e4 */
int __fastcall sub_60474848(int a1, _DWORD *a2, int *a3);  /* 0x00474848 */
int __fastcall sub_6047488C(int a1, _DWORD *a2);  /* 0x0047488c */
int __fastcall sub_604749C4(int a1);  /* 0x004749c4 */
int __fastcall sub_60474B24(int a1, _DWORD *a2);  /* 0x00474b24 */
int __fastcall sub_60474C5C(int a1, _DWORD *a2);  /* 0x00474c5c */
int __fastcall sub_60474EBC(int a1, _DWORD *a2);  /* 0x00474ebc */
int __fastcall sub_60474EEC(_DWORD *a1);  /* 0x00474eec */
int __fastcall sub_60475054(int a1, _DWORD *a2);  /* 0x00475054 */
int __fastcall sub_6047518C(int a1, int a2, _DWORD *a3, int *a4);  /* 0x0047518c */
int __fastcall sub_604751FC(int a1, int a2, _DWORD *a3, int *a4);  /* 0x004751fc */
int __fastcall __Player__applyPowerUpTransform(int a1, int a2, int a3, int *a4);  /* 0x00475288 */
int __fastcall sub_604752D4(int a1, int a2, _DWORD *a3, int *a4);  /* 0x004752d4 */
int __fastcall sub_60475334(int a1, int a2, _DWORD *a3, int *a4);  /* 0x00475334 */
int __fastcall sub_604753A8(int a1, int a2, _DWORD *a3, int *a4);  /* 0x004753a8 */
int __fastcall sub_60475438(int a1, int a2, _DWORD *a3, int *a4);  /* 0x00475438 */
int __fastcall sub_60475484(int a1, int a2, _DWORD *a3, int *a4);  /* 0x00475484 */
int __fastcall sub_604754E4(int result, int *a2, _DWORD *a3, int a4);  /* 0x004754e4 */
int __fastcall sub_60475520(int a1, int a2, _DWORD *a3, int *a4);  /* 0x00475520 */
int __fastcall sub_60475570(int a1, int a2, _DWORD *a3, int a4, int *a5);  /* 0x00475570 */
int __fastcall sub_604755C4(int a1, int a2, _DWORD *a3, int a4, int *a5);  /* 0x004755c4 */
int __fastcall sub_60475618(int a1, int a2, _DWORD *a3, int a4, int *a5);  /* 0x00475618 */
int __fastcall sub_6047566C(int a1, int a2, _DWORD *a3, _DWORD *a4, int *a5);  /* 0x0047566c */
int __fastcall sub_604756E0(int a1, int a2, _DWORD *a3, int *a4);  /* 0x004756e0 */
int __fastcall sub_6047572C(int result, _DWORD *a2, int a3, unsigned int a4, int a5);  /* 0x0047572c */
void __fastcall sub_60475AE8(sead::IDisposer *a1);  /* 0x00475ae8 */
int __fastcall sub_60475C8C(int a1);  /* 0x00475c8c */
int __fastcall sub_60475CDC(_DWORD *a1, _DWORD *a2, int a3, int a4, int a5);  /* 0x00475cdc */
int __fastcall sub_60476030(int a1, _DWORD *a2, int *a3);  /* 0x00476030 */
int __fastcall sub_604762F8(_DWORD *a1, int a2);  /* 0x004762f8 */
int __fastcall sub_60476388(_DWORD *a1, int a2, _DWORD *a3);  /* 0x00476388 */
void __fastcall sub_6047643C(sead::IDisposer *a1);  /* 0x0047643c */
int __fastcall sub_6047684C(int result);  /* 0x0047684c */
int __fastcall sub_60476898(int a1);  /* 0x00476898 */
int __fastcall sub_60476920(int a1, int a2);  /* 0x00476920 */
int __fastcall sub_604769E0(int a1, int a2);  /* 0x004769e0 */
int __fastcall sub_60476A7C(int a1, int a2, int a3, char **a4);  /* 0x00476a7c */
int __fastcall sub_6047778C(_DWORD *a1, int a2, int a3);  /* 0x0047778c */
int __fastcall sub_60477B30(_DWORD *a1, int a2);  /* 0x00477b30 */
int __fastcall sub_60478080(int a1);  /* 0x00478080 */
int __fastcall sub_6047823C(_DWORD *a1);  /* 0x0047823c */
int __fastcall sub_60478344(int a1);  /* 0x00478344 */
int __fastcall sub_60478440(_DWORD *a1);  /* 0x00478440 */
int __fastcall sub_604784EC(int a1);  /* 0x004784ec */
int __fastcall sub_604785EC(int a1);  /* 0x004785ec */
int __fastcall sub_60478650(_DWORD *a1);  /* 0x00478650 */
int __fastcall sub_60478680(int a1, int a2);  /* 0x00478680 */
int __fastcall sub_6047877C(int a1, int a2);  /* 0x0047877c */
int __fastcall sub_60478D70(_DWORD *a1, int a2, int a3);  /* 0x00478d70 */
int __fastcall sub_60479414(int a1, int a2, int a3);  /* 0x00479414 */
int __fastcall sub_60479588(int a1, int a2, _DWORD *a3, int a4);  /* 0x00479588 */
int __fastcall sub_60479600(int a1, unsigned int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, int a6);  /* 0x00479600 */
int __fastcall sub_60479808(int a1, unsigned int a2, _DWORD *a3, _DWORD *a4, int a5);  /* 0x00479808 */
int __fastcall sub_60479910(int a1, int a2);  /* 0x00479910 */
int __fastcall sub_60479C64(int a1, _DWORD *a2);  /* 0x00479c64 */
int __fastcall sub_60479DF4(int a1, _DWORD *a2);  /* 0x00479df4 */
int __fastcall sub_60479F28(int a1, _DWORD *a2);  /* 0x00479f28 */
int __fastcall sub_6047A05C(int result);  /* 0x0047a05c */
int __fastcall sub_6047BE64(_WORD *a1, int a2, int a3);  /* 0x0047be64 */
int __fastcall sub_6047BEC0(_WORD *a1, unsigned int a2);  /* 0x0047bec0 */
int __fastcall sub_6047C13C(unsigned int a1, unsigned int a2, int *a3);  /* 0x0047c13c */
int __fastcall sub_6047D75C(int a1, int a2, int a3);  /* 0x0047d75c */
int __fastcall sub_6047DA04(_DWORD *a1, unsigned __int16 *a2, int a3);  /* 0x0047da04 */
int __fastcall sub_6047DCCC(int a1);  /* 0x0047dccc */
int __fastcall sub_6047DEC8(_DWORD *a1, int a2, int a3);  /* 0x0047dec8 */
int __fastcall sub_6047DF58(int a1, _DWORD *a2, int a3, int a4, _DWORD *a5, int a6, int *a7);  /* 0x0047df58 */
int __fastcall sub_6047E0EC(_DWORD *a1, int a2, int a3);  /* 0x0047e0ec */
int __fastcall sub_6047E4BC(int result);  /* 0x0047e4bc */
int __fastcall sub_6047E518(int a1, int a2, int a3, int a4);  /* 0x0047e518 */
int __fastcall sub_6047E7C8(_DWORD *a1, int a2, int a3, int a4);  /* 0x0047e7c8 */
int __fastcall sub_6047EBE0(int a1, _DWORD *a2);  /* 0x0047ebe0 */
int __fastcall sub_6047ED10(int result, int a2, int a3, int a4);  /* 0x0047ed10 */
int __fastcall sub_6047EE74(int result, int a2);  /* 0x0047ee74 */
int __fastcall sub_6047EEC4(int result, int a2);  /* 0x0047eec4 */
int __fastcall sub_6047EF24(int a1, int a2);  /* 0x0047ef24 */
bool __fastcall sub_6047EF78(int a1, int a2);  /* 0x0047ef78 */
int __fastcall sub_6047EFCC(int result, int a2);  /* 0x0047efcc */
int __fastcall sub_6047F01C(_DWORD *a1, int a2);  /* 0x0047f01c */
int __fastcall sub_6047F124(int a1, int a2);  /* 0x0047f124 */
bool __fastcall sub_6047F178(int a1, int a2);  /* 0x0047f178 */
int __fastcall sub_6047F3B4(_DWORD *a1);  /* 0x0047f3b4 */
int __fastcall sub_6047F660(int a1);  /* 0x0047f660 */
int __fastcall sub_6047FA7C(int a1);  /* 0x0047fa7c */
int __fastcall sub_6047FD68(int result);  /* 0x0047fd68 */
int __fastcall sub_6047FDEC(int a1);  /* 0x0047fdec */

/* ---- projectile.c ---- */
bool __fastcall sub_607A26F8(int a1, int a2);  /* 0x007a2708 */
int __fastcall sub_607AA954(int a1);  /* 0x007aa954 */
int __fastcall sub_607AAA00(int a1);  /* 0x007aaa00 */
void __fastcall sub_607AABA0(int a1, int a2);  /* 0x007aaba0 */
int __fastcall sub_607AAF80(int a1);  /* 0x007aaf80 */

/* ---- modes.c ---- */
int __fastcall sub_6078E608(_DWORD *a1, int a2);  /* 0x0078e608 */

