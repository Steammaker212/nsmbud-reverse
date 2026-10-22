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
#include <stddef.h>
#include <stdbool.h>

#include "nsmbudx_types.h"
#include "structs.h"
/* RVAs are image-relative: VA = 0x60000000 + RVA */

/* ---- systems.c ---- */
int __fastcall sub_60480008(int a1);  /* 0x00480008 */
int __fastcall sub_60480144(int result);  /* 0x00480144 */
int __fastcall sub_6048029C(int a1, int a2);  /* 0x0048029c */
int __fastcall sub_604802D4(int a1, _DWORD *a2);  /* 0x004802d4 */
int __fastcall sub_60480318(int a1, int a2);  /* 0x00480318 */
int __fastcall sub_60480324(int result, _DWORD *a2);  /* 0x00480324 */
int __fastcall sub_60480334(int a1, int a2);  /* 0x00480334 */
int __fastcall sub_6048035C(int a1);  /* 0x0048035c */
int __fastcall sub_60480364(int a1);  /* 0x00480364 */
int __fastcall sub_604809F8(int a1);  /* 0x004809f8 */
int __fastcall SE_SYS_CS_READ_BALLOON_ON_ref(int a1);  /* 0x00480a38 */
int __fastcall sub_60480A88(int a1);  /* 0x00480a88 */
int __fastcall sub_60480AC8(int a1);  /* 0x00480ac8 */
int __fastcall sub_60480AE8(int result);  /* 0x00480ae8 */
int __fastcall sub_60480B4C(int a1);  /* 0x00480b4c */
int __fastcall sub_60480B6C(int a1);  /* 0x00480b6c */
int __fastcall sub_60480BA8(int result);  /* 0x00480ba8 */
int __fastcall sub_60480BC0(int a1);  /* 0x00480bc0 */
int __fastcall sub_60480BE0(int a1);  /* 0x00480be0 */
int __fastcall sub_60480C24(int result);  /* 0x00480c24 */
int __fastcall sub_60480C58(int a1);  /* 0x00480c58 */
int __fastcall sub_60480DB8(int a1);  /* 0x00480db8 */
int __fastcall sub_60480E30(int a1);  /* 0x00480e30 */
int __fastcall sub_60480EAC(int a1);  /* 0x00480eac */
int __fastcall sub_60480FC8(_DWORD *a1);  /* 0x00480fc8 */
int __fastcall sub_6048117C(int a1);  /* 0x0048117c */
int __fastcall sub_604811D4(int result, _DWORD *a2);  /* 0x004811d4 */
int __fastcall sub_604811F4(int a1, int a2, int a3);  /* 0x004811f4 */
int __fastcall sub_604812F0(int a1, int *a2);  /* 0x004812f0 */
int __fastcall sub_60481338(int a1, int a2);  /* 0x00481338 */
int __fastcall sub_60481370(int a1, _DWORD *a2);  /* 0x00481370 */
int __fastcall sub_604813B4(int a1, int a2);  /* 0x004813b4 */
int __fastcall sub_604813C0(int result, _DWORD *a2);  /* 0x004813c0 */
int __fastcall sub_604813D0(int a1, int a2);  /* 0x004813d0 */
int __fastcall sub_604813F8(int a1);  /* 0x004813f8 */
int __fastcall sub_60481400(int a1);  /* 0x00481400 */
int __fastcall sub_6048142C(int a1);  /* 0x0048142c */
int __fastcall sub_60481440(int a1);  /* 0x00481440 */
int __fastcall sub_60481548(int a1);  /* 0x00481548 */
int __fastcall SE_SYS_CONTINUE_DONE_ref(_DWORD *a1);  /* 0x004815c0 */
int __fastcall sub_6048161C(int a1);  /* 0x0048161c */
int __fastcall sub_6048163C(int result);  /* 0x0048163c */
int __fastcall sub_604816F4(int result);  /* 0x004816f4 */
int __fastcall sub_6048182C(int result);  /* 0x0048182c */
int __fastcall sub_60481848(int a1);  /* 0x00481848 */
int __fastcall sub_604819AC(_DWORD *a1);  /* 0x004819ac */
int __fastcall sub_604819DC(int a1);  /* 0x004819dc */
int __fastcall sub_60481E54(int a1);  /* 0x00481e54 */
int __fastcall sub_60481E84(int result, _DWORD *a2);  /* 0x00481e84 */
int __fastcall sub_60481E9C(int result, int a2);  /* 0x00481e9c */
int __fastcall sub_60481EE4(int a1, int a2);  /* 0x00481ee4 */
int __fastcall sub_60481F1C(int a1, _DWORD *a2);  /* 0x00481f1c */
int __fastcall sub_60481F60(int a1, int a2);  /* 0x00481f60 */
int __fastcall sub_60481F6C(int result, _DWORD *a2);  /* 0x00481f6c */
int __fastcall sub_60481F7C(int a1, int a2);  /* 0x00481f7c */
int __fastcall sub_60481FA4(int a1);  /* 0x00481fa4 */
int __fastcall sub_60481FAC(int a1);  /* 0x00481fac */
int __fastcall sub_60481FD8(int a1);  /* 0x00481fd8 */
int __fastcall sub_60481FEC(int result);  /* 0x00481fec */
int __fastcall sub_60481FF8(int a1);  /* 0x00481ff8 */
int __fastcall sub_6048202C(int a1);  /* 0x0048202c */
int __fastcall sub_60482064(int result);  /* 0x00482064 */
int __fastcall sub_60482070(int a1);  /* 0x00482070 */
int __fastcall sub_6048208C(int result);  /* 0x0048208c */
int __fastcall sub_604820B0(int a1);  /* 0x004820b0 */
int __fastcall sub_604820CC(int result);  /* 0x004820cc */
int __fastcall sub_604820F0(int result);  /* 0x004820f0 */
int __fastcall sub_6048210C(int a1);  /* 0x0048210c */
int __fastcall sub_60482238(_DWORD *a1);  /* 0x00482238 */
int __fastcall sub_60482268(int a1);  /* 0x00482268 */
int __fastcall sub_60482614(int a1);  /* 0x00482614 */
int __fastcall sub_60482638(int result, _DWORD *a2);  /* 0x00482638 */
int __fastcall sub_60482664(int a1, int a2);  /* 0x00482664 */
int __fastcall sub_6048269C(int a1, _DWORD *a2);  /* 0x0048269c */
int __fastcall sub_604826E0(int a1, int a2);  /* 0x004826e0 */
int __fastcall sub_604826EC(int result, _DWORD *a2);  /* 0x004826ec */
int __fastcall sub_604826FC(int a1, int a2);  /* 0x004826fc */
int __fastcall sub_60482724(int a1);  /* 0x00482724 */
int __fastcall sub_6048272C(int a1);  /* 0x0048272c */
int __fastcall sub_60482754(int result);  /* 0x00482754 */
int __fastcall sub_604827D4(int result);  /* 0x004827d4 */
int __fastcall sub_604827E4(_DWORD *a1);  /* 0x004827e4 */
int __fastcall sub_604828F0(int a1);  /* 0x004828f0 */
int __fastcall sub_60482A74(_DWORD *a1);  /* 0x00482a74 */
int __fastcall sub_60482AB8(_DWORD *a1);  /* 0x00482ab8 */
int __fastcall sub_60482EC0(int a1);  /* 0x00482ec0 */
int __fastcall sub_60483024(int a1);  /* 0x00483024 */
int __fastcall sub_604830AC(int a1, _DWORD *a2);  /* 0x004830ac */
bool __fastcall sub_604830F4(int a1, int a2);  /* 0x004830f4 */
int __fastcall sub_60483268(int a1, int a2);  /* 0x00483268 */
int __fastcall sub_60483318(int a1, int a2);  /* 0x00483318 */
int __fastcall sub_60483350(int a1, _DWORD *a2);  /* 0x00483350 */
int __fastcall sub_60483394(int a1, int a2);  /* 0x00483394 */
int __fastcall sub_604833A0(int result, _DWORD *a2);  /* 0x004833a0 */
int __fastcall sub_604833B0(int a1, int a2);  /* 0x004833b0 */
int __fastcall sub_604833D8(int a1);  /* 0x004833d8 */
int __fastcall sub_604833E0(int a1);  /* 0x004833e0 */
int __fastcall sub_6048340C(int a1, _DWORD *a2);  /* 0x0048340c */
int __fastcall sub_60483604(int a1);  /* 0x00483604 */
int __fastcall sub_60483640(int result);  /* 0x00483640 */
int __fastcall sub_6048364C(int result);  /* 0x0048364c */
int __fastcall sub_60483674(int a1);  /* 0x00483674 */
int __fastcall sub_604836B8(int a1);  /* 0x004836b8 */
int __fastcall sub_6048371C(int a1);  /* 0x0048371c */
int __fastcall sub_60483778(int a1);  /* 0x00483778 */
int __fastcall sub_604837B8(int a1);  /* 0x004837b8 */
int __fastcall sub_6048381C(int a1);  /* 0x0048381c */
int __fastcall sub_60483854(int result);  /* 0x00483854 */
int __fastcall sub_60483864(int a1);  /* 0x00483864 */
int __fastcall sub_604839A4(_DWORD *a1);  /* 0x004839a4 */
int __fastcall sub_604839D4(int a1, int a2);  /* 0x004839d4 */
int __fastcall sub_60483AF8(int a1);  /* 0x00483af8 */
int __fastcall sub_60483C58(int a1);  /* 0x00483c58 */
int __fastcall sub_60483DC0(int a1);  /* 0x00483dc0 */
int __fastcall sub_60483E10(int result, _DWORD *a2);  /* 0x00483e10 */
int __fastcall sub_60483E28(int a1, int a2, int a3, int a4);  /* 0x00483e28 */
unsigned int __fastcall sub_60484570(int a1);  /* 0x00484570 */
unsigned int __fastcall sub_604846B8(int a1);  /* 0x004846b8 */
int __fastcall sub_60484804(_DWORD *a1);  /* 0x00484804 */
int __fastcall sub_604849FC(int a1, int a2);  /* 0x004849fc */
int __fastcall sub_60484A34(int a1, _DWORD *a2);  /* 0x00484a34 */
int __fastcall sub_60484A78(int a1, int a2);  /* 0x00484a78 */
int __fastcall sub_60484A84(int result, _DWORD *a2);  /* 0x00484a84 */
int __fastcall sub_60484A94(int a1, int a2);  /* 0x00484a94 */
int __fastcall sub_60484ABC(int a1);  /* 0x00484abc */
int __fastcall sub_60484AC4(int a1);  /* 0x00484ac4 */
int __fastcall sub_60484AF0(int a1);  /* 0x00484af0 */
int __fastcall sub_60484B08(int a1);  /* 0x00484b08 */
int __fastcall sub_60484B60(int a1);  /* 0x00484b60 */
int __fastcall sub_60484B9C(int result);  /* 0x00484b9c */
int __fastcall sub_60484BA8(int result);  /* 0x00484ba8 */
int __fastcall sub_60484BD0(int result);  /* 0x00484bd0 */
int __fastcall sub_60484BDC(int a1);  /* 0x00484bdc */
int __fastcall sub_60484C14(int result);  /* 0x00484c14 */
int __fastcall sub_60484C28(int a1);  /* 0x00484c28 */
int __fastcall sub_60484D50(_DWORD *a1);  /* 0x00484d50 */
int __fastcall sub_60484D80(int a1);  /* 0x00484d80 */
int __fastcall sub_60485038(int a1);  /* 0x00485038 */
int __fastcall sub_60485068(int result, _DWORD *a2);  /* 0x00485068 */
int __fastcall sub_60485098(int a1, int a2);  /* 0x00485098 */
int __fastcall sub_604850D0(int a1, _DWORD *a2);  /* 0x004850d0 */
int __fastcall sub_60485114(int a1, int a2);  /* 0x00485114 */
int __fastcall sub_60485120(int result, _DWORD *a2);  /* 0x00485120 */
int __fastcall sub_60485130(int a1, int a2);  /* 0x00485130 */
int __fastcall sub_60485158(int a1);  /* 0x00485158 */
int __fastcall sub_60485160(int a1);  /* 0x00485160 */
int __fastcall sub_604851FC(struct sead_IDisposer *a1);  /* 0x004851fc */
int __fastcall sub_60485274(int a1);  /* 0x00485274 */
int __fastcall sub_60485394(int result);  /* 0x00485394 */
int __fastcall sub_604853A8(int a1);  /* 0x004853a8 */
int __fastcall sub_6048570C(int a1);  /* 0x0048570c */
int __fastcall sub_60485748(int a1);  /* 0x00485748 */
int __fastcall sub_60485764(int a1);  /* 0x00485764 */
int __fastcall sub_604857C4(int a1);  /* 0x004857c4 */
int __fastcall sub_60485A74(int a1);  /* 0x00485a74 */
int __fastcall sub_60485B4C(_DWORD *a1);  /* 0x00485b4c */
int __fastcall sub_60485B7C(int a1);  /* 0x00485b7c */
int __fastcall sub_6048647C(int result);  /* 0x0048647c */
int __fastcall sub_604864CC(int a1);  /* 0x004864cc */
int __fastcall sub_60486518(int result, int a2, int a3, int a4);  /* 0x00486518 */
int __fastcall sub_604865C0(int result, int a2, int a3, int a4);  /* 0x004865c0 */
int __fastcall sub_604866A0(_DWORD *a1);  /* 0x004866a0 */
int __fastcall sub_604866E8(int a1, int a2);  /* 0x004866e8 */
int __fastcall sub_60486720(int a1, _DWORD *a2);  /* 0x00486720 */
int __fastcall sub_60486764(int a1, int a2);  /* 0x00486764 */
int __fastcall sub_60486770(int result, _DWORD *a2);  /* 0x00486770 */
int __fastcall sub_60486780(int a1, int a2);  /* 0x00486780 */
int __fastcall sub_604867A8(int a1);  /* 0x004867a8 */
int __fastcall sub_604867B0(int a1);  /* 0x004867b0 */
void __fastcall sub_604867D8(struct sead_IDisposer *a1);  /* 0x004867d8 */
int __fastcall sub_604867DC(struct sead_IDisposer *a1);  /* 0x004867dc */
int __fastcall sub_604867F8(_DWORD *a1);  /* 0x004867f8 */
int __fastcall sub_604868B0(int a1);  /* 0x004868b0 */
int __fastcall sub_60486970(_DWORD *a1);  /* 0x00486970 */
int __fastcall sub_60486A28(_DWORD *a1);  /* 0x00486a28 */
int __fastcall sub_60486BD4(int a1);  /* 0x00486bd4 */
int __fastcall sub_60486E74(int a1);  /* 0x00486e74 */
int __fastcall sub_60486EFC(int result);  /* 0x00486efc */
int __fastcall sub_60486F0C(int a1);  /* 0x00486f0c */
int __fastcall sub_60487220(_DWORD *a1);  /* 0x00487220 */
int __fastcall sub_604873C4(_DWORD *a1);  /* 0x004873c4 */
int __fastcall sub_60487620(int a1);  /* 0x00487620 */
int __fastcall sub_604877B4(int a1);  /* 0x004877b4 */
int __fastcall sub_60487AC8(_DWORD *a1);  /* 0x00487ac8 */
int __fastcall sub_60487C6C(_DWORD *a1);  /* 0x00487c6c */
int __fastcall sub_60487EC8(int a1);  /* 0x00487ec8 */
int __fastcall sub_60488068(int a1);  /* 0x00488068 */
int __fastcall sub_60488094(int result);  /* 0x00488094 */
int __fastcall sub_604880C4(int a1);  /* 0x004880c4 */
int __fastcall sub_60488120(_DWORD *a1);  /* 0x00488120 */
int __fastcall sub_604881DC(_DWORD *a1);  /* 0x004881dc */
int __fastcall sub_60488368(int a1);  /* 0x00488368 */
int __fastcall sub_60488420(int result);  /* 0x00488420 */
int __fastcall sub_60488470(_DWORD *a1);  /* 0x00488470 */
int __fastcall sub_60488530(int a1);  /* 0x00488530 */
int __fastcall sub_6048856C(int a1);  /* 0x0048856c */
int __fastcall sub_604885CC(_DWORD *a1);  /* 0x004885cc */
int __fastcall sub_604887F8(int a1);  /* 0x004887f8 */
int __fastcall sub_60488854(_DWORD *a1);  /* 0x00488854 */
int __fastcall sub_60488910(int result);  /* 0x00488910 */
int __fastcall sub_60488938(int a1);  /* 0x00488938 */
int __fastcall sub_60488980(int a1);  /* 0x00488980 */
unsigned int __fastcall sub_604889E4(int a1);  /* 0x004889e4 */
int __fastcall sub_60488A90(_DWORD *a1);  /* 0x00488a90 */
int __fastcall sub_60488C54(_DWORD *a1);  /* 0x00488c54 */
int __fastcall WSD_BGM_ODAI_MEDAL_CMP_ref(int *a1);  /* 0x00488db0 */
int __fastcall sub_60488E40(int result);  /* 0x00488e40 */
int __fastcall sub_60488E8C(int a1);  /* 0x00488e8c */
int __fastcall sub_60488ED4(_DWORD *a1);  /* 0x00488ed4 */
int __fastcall WSD_BGM_ODAI_MEDALCMP_GOLD_ref(int a1);  /* 0x00488f94 */
int __fastcall sub_60488FF8(int result);  /* 0x00488ff8 */
int __fastcall sub_60489024(int a1);  /* 0x00489024 */
int __fastcall sub_6048906C(_DWORD *a1);  /* 0x0048906c */
int __fastcall sub_6048912C(int a1);  /* 0x0048912c */
int __fastcall sub_6048921C(int a1);  /* 0x0048921c */
int __fastcall sub_60489270(int a1);  /* 0x00489270 */
void __fastcall sub_604898E8(struct sead_IDisposer *a1);  /* 0x004898e8 */
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
int __fastcall sub_60490620(int a1);  /* 0x00490620 */
int __fastcall sub_60490674(int a1);  /* 0x00490674 */
int __fastcall sub_604906A4(int a1);  /* 0x004906a4 */
int __fastcall sub_604907CC(int a1);  /* 0x004907cc */
int __fastcall sub_60490828(int a1);  /* 0x00490828 */
int __fastcall sub_60490858(int a1);  /* 0x00490858 */
int __fastcall sub_604909B8(int a1);  /* 0x004909b8 */
int __fastcall sub_60490CF4(int result);  /* 0x00490cf4 */
int __fastcall sub_60490D74(int a1);  /* 0x00490d74 */
int __fastcall sub_60491018(int result);  /* 0x00491018 */
int __fastcall sub_60491028(_DWORD *a1);  /* 0x00491028 */
int __fastcall sub_60491118(int a1);  /* 0x00491118 */
void __fastcall sub_604912E8(struct sead_IDisposer *a1);  /* 0x004912e8 */
int __fastcall sub_604912EC(struct sead_IDisposer *a1);  /* 0x004912ec */
int __fastcall sub_604912FC(int a1);  /* 0x004912fc */
int __fastcall sub_60491514(unsigned int a1);  /* 0x00491514 */
int __fastcall sub_6049172C(int a1, _DWORD *a2);  /* 0x0049172c */
int __fastcall sub_604917FC(int a1, _DWORD *a2);  /* 0x004917fc */
int __fastcall sub_604918C8(unsigned int a1);  /* 0x004918c8 */
int __fastcall sub_60491AE0(int a1, _DWORD *a2);  /* 0x00491ae0 */
int __fastcall sub_60491BB0(int a1, _DWORD *a2);  /* 0x00491bb0 */
int __fastcall sub_60491C7C(unsigned int a1);  /* 0x00491c7c */
int __fastcall sub_60491E94(int a1, _DWORD *a2);  /* 0x00491e94 */
int __fastcall sub_60491F64(int a1, _DWORD *a2);  /* 0x00491f64 */
int __fastcall sub_60492030(unsigned int a1);  /* 0x00492030 */
int __fastcall sub_60492248(int a1, _DWORD *a2);  /* 0x00492248 */
int __fastcall sub_60492318(int a1, _DWORD *a2);  /* 0x00492318 */
int __fastcall sub_604923E4(unsigned int a1);  /* 0x004923e4 */
int __fastcall sub_604925FC(int a1, _DWORD *a2);  /* 0x004925fc */
int __fastcall sub_604926CC(int a1, _DWORD *a2);  /* 0x004926cc */
int __fastcall sub_60492798(unsigned int a1);  /* 0x00492798 */
int __fastcall sub_604929B0(int a1, _DWORD *a2);  /* 0x004929b0 */
int __fastcall sub_60492A80(int a1, _DWORD *a2);  /* 0x00492a80 */
int __fastcall sub_60492B4C(unsigned int a1);  /* 0x00492b4c */
int __fastcall sub_60492D64(int a1, _DWORD *a2);  /* 0x00492d64 */
int __fastcall sub_60492E34(int a1, _DWORD *a2);  /* 0x00492e34 */
int __fastcall sub_60492F00(unsigned int a1);  /* 0x00492f00 */
int __fastcall sub_60493118(int a1, _DWORD *a2);  /* 0x00493118 */
int __fastcall sub_604931E8(int a1, _DWORD *a2);  /* 0x004931e8 */
int __fastcall sub_604932C8(int a1, int a2);  /* 0x004932c8 */
int __fastcall sub_60493300(int a1, _DWORD *a2);  /* 0x00493300 */
int __fastcall sub_60493344(int a1, int a2);  /* 0x00493344 */
int __fastcall sub_60493350(int result, _DWORD *a2);  /* 0x00493350 */
int __fastcall sub_60493360(int a1, int a2);  /* 0x00493360 */
int __fastcall sub_60493388(int a1);  /* 0x00493388 */
int __fastcall sub_60493390(int a1);  /* 0x00493390 */
int __fastcall sub_604933B8(struct sead_IDisposer *a1);  /* 0x004933b8 */
void __fastcall sub_604933C8(struct sead_IDisposer *a1);  /* 0x004933c8 */
int __fastcall sub_604933CC(struct sead_IDisposer *a1);  /* 0x004933cc */
int __fastcall sub_604933F4(int a1, int a2);  /* 0x004933f4 */
int __fastcall sub_6049342C(int a1, _DWORD *a2);  /* 0x0049342c */
int __fastcall sub_60493470(int a1, int a2);  /* 0x00493470 */
int __fastcall sub_6049347C(int result, _DWORD *a2);  /* 0x0049347c */
int __fastcall sub_6049348C(int a1, int a2);  /* 0x0049348c */
int __fastcall sub_604934B4(int a1);  /* 0x004934b4 */
int __fastcall sub_604934BC(int a1);  /* 0x004934bc */
int __fastcall sub_60493B4C(int a1);  /* 0x00493b4c */
int __fastcall sub_60493BD4(int a1);  /* 0x00493bd4 */
unsigned int __fastcall sub_60493C44(int a1);  /* 0x00493c44 */
int __fastcall sub_6049407C(int result);  /* 0x0049407c */
int __fastcall sub_604940A4(int a1);  /* 0x004940a4 */
int __fastcall sub_604940EC(int a1);  /* 0x004940ec */
void __fastcall sub_60494124(int a1);  /* 0x00494124 */
int __fastcall sub_60494190(int result);  /* 0x00494190 */
void __fastcall sub_604941B4(int a1);  /* 0x004941b4 */
int __fastcall sub_604941E4(int result);  /* 0x004941e4 */
int __fastcall sub_6049420C(int a1);  /* 0x0049420c */
int __fastcall sub_60494298(int a1);  /* 0x00494298 */
int __fastcall sub_604942D4(int a1);  /* 0x004942d4 */
int __fastcall sub_604942F0(int a1);  /* 0x004942f0 */
int __fastcall sub_60494364(int result);  /* 0x00494364 */
void __fastcall sub_60494388(int a1);  /* 0x00494388 */
int __fastcall sub_604943B4(int a1);  /* 0x004943b4 */
int __fastcall sub_604943F0(int a1);  /* 0x004943f0 */
int __fastcall sub_6049440C(int result);  /* 0x0049440c */
int __fastcall sub_60494470(int result);  /* 0x00494470 */
int __fastcall sub_604944B0(int a1);  /* 0x004944b0 */
int __fastcall sub_60494540(int a1);  /* 0x00494540 */
int __fastcall sub_60494580(int result);  /* 0x00494580 */
int __fastcall sub_604945A8(int a1);  /* 0x004945a8 */
int __fastcall sub_604945F0(int a1);  /* 0x004945f0 */
void __fastcall sub_60494628(int a1);  /* 0x00494628 */
int __fastcall sub_6049468C(int a1);  /* 0x0049468c */
void __fastcall sub_6049487C(struct sead_IDisposer *a1);  /* 0x0049487c */
int __fastcall sub_60494884(_DWORD *a1, int a2);  /* 0x00494884 */
int __fastcall sub_604949EC(int *a1);  /* 0x004949ec */
int __fastcall sub_60494B0C(int a1);  /* 0x00494b0c */
int __fastcall sub_60494D5C(_DWORD *a1);  /* 0x00494d5c */
int __fastcall sub_604952C8(int a1);  /* 0x004952c8 */
int __fastcall sub_604953F4(int a1);  /* 0x004953f4 */
int __fastcall sub_6049560C(int a1);  /* 0x0049560c */
int __fastcall sub_60495660(int result, _DWORD *a2);  /* 0x00495660 */
int __fastcall sub_6049567C(int a1, unsigned int a2, unsigned int a3, int a4);  /* 0x0049567c */
int __fastcall sub_604962DC(unsigned int a1);  /* 0x004962dc */
int __fastcall sub_604964F4(int a1, _DWORD *a2);  /* 0x004964f4 */
int __fastcall sub_604965C4(int a1, _DWORD *a2);  /* 0x004965c4 */
int __fastcall sub_60496690(int a1);  /* 0x00496690 */
int __fastcall sub_604968AC(int a1, _DWORD *a2);  /* 0x004968ac */
int __fastcall sub_60496978(unsigned int a1);  /* 0x00496978 */
int __fastcall sub_60496B90(int a1, _DWORD *a2);  /* 0x00496b90 */
int __fastcall sub_60496C60(int a1, _DWORD *a2);  /* 0x00496c60 */
int __fastcall sub_60496D2C(unsigned int a1);  /* 0x00496d2c */
int __fastcall sub_60496F44(int a1, _DWORD *a2);  /* 0x00496f44 */
int __fastcall sub_60497014(int a1, _DWORD *a2);  /* 0x00497014 */
int __fastcall sub_604970F4(int a1, int a2);  /* 0x004970f4 */
int __fastcall sub_6049712C(int a1, _DWORD *a2);  /* 0x0049712c */
int __fastcall sub_60497170(int a1, int a2);  /* 0x00497170 */
int __fastcall sub_6049717C(int result, _DWORD *a2);  /* 0x0049717c */
int __fastcall sub_6049718C(int a1, int a2);  /* 0x0049718c */
int __fastcall sub_604971B4(int a1);  /* 0x004971b4 */
int __fastcall sub_604971BC(int a1);  /* 0x004971bc */
int __fastcall sub_604971E4(struct sead_IDisposer *a1);  /* 0x004971e4 */
bool __fastcall sub_604972DC(int a1);  /* 0x004972dc */
int __fastcall sub_60497374(struct sead_IDisposer *a1);  /* 0x00497374 */
int __fastcall sub_604973E4(int a1);  /* 0x004973e4 */
int __fastcall sub_60497460(int a1);  /* 0x00497460 */
int __fastcall sub_60497510(int a1);  /* 0x00497510 */
int __fastcall sub_604976AC(int a1);  /* 0x004976ac */
int __fastcall sub_60497754(int a1);  /* 0x00497754 */
int __fastcall sub_60497778(int a1);  /* 0x00497778 */
int __fastcall sub_604977F8(int result);  /* 0x004977f8 */
int __fastcall sub_60497810(int a1);  /* 0x00497810 */
int __fastcall sub_60497964(int a1);  /* 0x00497964 */
int __fastcall sub_60497A60(int a1);  /* 0x00497a60 */
int __fastcall sub_60497C44(int a1);  /* 0x00497c44 */
int __fastcall sub_60497D08(int a1);  /* 0x00497d08 */
int __fastcall sub_60497ECC(int a1);  /* 0x00497ecc */
int __fastcall sub_604984AC(int result);  /* 0x004984ac */
int __fastcall sub_60498514(int a1);  /* 0x00498514 */
int __fastcall sub_604986AC(int result);  /* 0x004986ac */
int __fastcall sub_604986CC(int a1);  /* 0x004986cc */
int __fastcall sub_60498834(int a1);  /* 0x00498834 */
int __fastcall sub_60498980(int a1);  /* 0x00498980 */
void __fastcall sub_60498FA8(struct sead_IDisposer *a1);  /* 0x00498fa8 */
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
int __fastcall sub_6049A28C(int a1, int a2);  /* 0x0049a28c */
int __fastcall sub_6049A2C4(int a1, _DWORD *a2);  /* 0x0049a2c4 */
int __fastcall sub_6049A308(int a1, int a2);  /* 0x0049a308 */
int __fastcall sub_6049A314(int result, _DWORD *a2);  /* 0x0049a314 */
int __fastcall sub_6049A324(int a1, int a2);  /* 0x0049a324 */
int __fastcall sub_6049A34C(int a1);  /* 0x0049a34c */
int __fastcall sub_6049A354(int a1);  /* 0x0049a354 */
int __fastcall sub_6049A37C(struct sead_IDisposer *a1);  /* 0x0049a37c */
int __fastcall sub_6049A838(int a1);  /* 0x0049a838 */
int __fastcall sub_6049AB64(_DWORD *a1);  /* 0x0049ab64 */
int __fastcall sub_6049ABD4(int a1);  /* 0x0049abd4 */
int __fastcall SE_SYS_CTRL_ref_2(int a1);  /* 0x0049ac98 */
int __fastcall sub_6049ADB8(int a1);  /* 0x0049adb8 */
int __fastcall sub_6049ADF0(int result);  /* 0x0049adf0 */
int __fastcall sub_6049AE04(int a1);  /* 0x0049ae04 */
int __fastcall sub_6049AF78(int a1);  /* 0x0049af78 */
int __fastcall sub_6049AFAC(int a1);  /* 0x0049afac */
int __fastcall sub_6049AFE4(int result);  /* 0x0049afe4 */
int __fastcall sub_6049AFF4(int a1);  /* 0x0049aff4 */
int __fastcall sub_6049B3BC(int a1);  /* 0x0049b3bc */
int __fastcall sub_6049B3F4(int *a1);  /* 0x0049b3f4 */
int __fastcall sub_6049B540(int a1);  /* 0x0049b540 */
int __fastcall sub_6049B59C(int a1);  /* 0x0049b59c */
int __fastcall sub_6049B5D4(int result);  /* 0x0049b5d4 */
int __fastcall sub_6049B5E4(int a1);  /* 0x0049b5e4 */
int __fastcall sub_6049B648(int a1);  /* 0x0049b648 */
int __fastcall sub_6049B680(int result);  /* 0x0049b680 */
int __fastcall sub_6049B694(int result);  /* 0x0049b694 */
int __fastcall sub_6049B6CC(int a1);  /* 0x0049b6cc */
int __fastcall sub_6049B6E0(int a1);  /* 0x0049b6e0 */
int __fastcall sub_6049B720(int a1);  /* 0x0049b720 */
int __fastcall sub_6049B7FC(int a1);  /* 0x0049b7fc */
int __fastcall sub_6049B93C(int result);  /* 0x0049b93c */
int __fastcall sub_6049B9A0(int result);  /* 0x0049b9a0 */
int __fastcall sub_6049B9C8(int a1);  /* 0x0049b9c8 */
int __fastcall sub_6049B9FC(int a1);  /* 0x0049b9fc */
int __fastcall sub_6049BA34(int result);  /* 0x0049ba34 */
int __fastcall sub_6049BA44(int a1);  /* 0x0049ba44 */
int __fastcall sub_6049BA78(int a1);  /* 0x0049ba78 */
int __fastcall sub_6049BAB0(int result);  /* 0x0049bab0 */
int __fastcall sub_6049C294(int a1, int *a2);  /* 0x0049c294 */
int __fastcall sub_6049C484(int a1, int a2);  /* 0x0049c484 */
int __fastcall sub_6049C5D8(int result);  /* 0x0049c5d8 */
int __fastcall sub_6049C5E8(int a1);  /* 0x0049c5e8 */
int __fastcall sub_6049C878(int a1);  /* 0x0049c878 */
int __fastcall sub_6049CABC(int result);  /* 0x0049cabc */
int __fastcall sub_6049CF50(int result);  /* 0x0049cf50 */
int __fastcall sub_6049D044(int a1);  /* 0x0049d044 */
int __fastcall sub_6049D080(int result);  /* 0x0049d080 */
int __fastcall sub_6049D194(int result);  /* 0x0049d194 */
int __fastcall sub_6049D1BC(int result);  /* 0x0049d1bc */
int __fastcall sub_6049D218(int result);  /* 0x0049d218 */
int __fastcall sub_6049D3A4(int a1);  /* 0x0049d3a4 */
int __fastcall sub_6049D3B0(int result);  /* 0x0049d3b0 */
int __fastcall sub_6049D3D0(int a1);  /* 0x0049d3d0 */
int __fastcall sub_6049D444(int a1);  /* 0x0049d444 */
int __fastcall sub_6049D6B0(int result);  /* 0x0049d6b0 */
int __fastcall sub_6049D750(int result);  /* 0x0049d750 */
int __fastcall sub_6049D760(int result);  /* 0x0049d760 */
int __fastcall sub_6049D788(int a1);  /* 0x0049d788 */
int __fastcall sub_6049D90C(int result);  /* 0x0049d90c */
int __fastcall sub_6049D944(int result);  /* 0x0049d944 */
int __fastcall sub_6049DAB4(int result);  /* 0x0049dab4 */
int __fastcall sub_6049DAC4(int a1);  /* 0x0049dac4 */
int __fastcall sub_6049DCD4(int a1);  /* 0x0049dcd4 */
int __fastcall sub_6049DEE8(int result);  /* 0x0049dee8 */
int __fastcall sub_6049E11C(int result);  /* 0x0049e11c */
int __fastcall sub_6049E144(int a1);  /* 0x0049e144 */
int __fastcall sub_6049E1A8(int result);  /* 0x0049e1a8 */
int __fastcall sub_6049E330(int result);  /* 0x0049e330 */
int __fastcall sub_6049E358(int result);  /* 0x0049e358 */
int __fastcall sub_6049E394(int a1);  /* 0x0049e394 */
int __fastcall sub_6049E518(int a1);  /* 0x0049e518 */
int __fastcall sub_6049E554(int result);  /* 0x0049e554 */
int __fastcall sub_6049E59C(int result);  /* 0x0049e59c */
int __fastcall sub_6049E5AC(int result);  /* 0x0049e5ac */
int __fastcall sub_6049E5D4(int a1);  /* 0x0049e5d4 */
int __fastcall sub_6049E6E0(int result);  /* 0x0049e6e0 */
int __fastcall sub_6049E708(_DWORD *a1);  /* 0x0049e708 */
int __fastcall sub_6049E804(int result);  /* 0x0049e804 */
int __fastcall sub_6049E880(int a1);  /* 0x0049e880 */
int __fastcall sub_6049E934(int result);  /* 0x0049e934 */
int __fastcall sub_6049E95C(_DWORD *a1);  /* 0x0049e95c */
int __fastcall sub_6049EA8C(int result);  /* 0x0049ea8c */
int __fastcall sub_6049ED50(int a1);  /* 0x0049ed50 */
int __fastcall sub_6049EDE8(int result);  /* 0x0049ede8 */
int __fastcall sub_6049EE20(int a1);  /* 0x0049ee20 */
int __fastcall sub_6049EF90(int a1);  /* 0x0049ef90 */
int __fastcall sub_6049EF9C(int a1);  /* 0x0049ef9c */
int __fastcall sub_6049EFB8(int result);  /* 0x0049efb8 */
int __fastcall sub_6049EFDC(int result);  /* 0x0049efdc */
int __fastcall sub_6049F07C(int a1);  /* 0x0049f07c */
int __fastcall sub_6049F0FC(int result);  /* 0x0049f0fc */
int __fastcall sub_6049F138(int result);  /* 0x0049f138 */
int __fastcall sub_6049F148(int result);  /* 0x0049f148 */
int __fastcall sub_6049F1BC(_DWORD *a1);  /* 0x0049f1bc */
int __fastcall sub_6049F304(int result);  /* 0x0049f304 */
int __fastcall sub_6049F428(_DWORD *a1);  /* 0x0049f428 */
int __fastcall sub_6049F588(_DWORD *a1);  /* 0x0049f588 */
int __fastcall sub_6049F880(_DWORD *a1);  /* 0x0049f880 */
int __fastcall sub_6049F8E4(int a1);  /* 0x0049f8e4 */
int __fastcall sub_6049F984(int result);  /* 0x0049f984 */
int __fastcall sub_6049F9D4(int a1);  /* 0x0049f9d4 */
int __fastcall sub_6049FA40(int a1);  /* 0x0049fa40 */
int __fastcall sub_6049FA8C(int result);  /* 0x0049fa8c */
int __fastcall sub_6049FAB0(int result);  /* 0x0049fab0 */
int __fastcall sub_6049FAC8(int a1);  /* 0x0049fac8 */
int __fastcall sub_6049FF18(_DWORD *a1);  /* 0x0049ff18 */
int __fastcall sub_6049FF28(int a1);  /* 0x0049ff28 */
int __fastcall sub_604A1404(int a1);  /* 0x004a1404 */
int __fastcall sub_604A1514(int a1);  /* 0x004a1514 */
int __fastcall sub_604A1614(int a1);  /* 0x004a1614 */
int __fastcall sub_604A17D0(_BYTE *a1);  /* 0x004a17d0 */
int __fastcall sub_604A18B8(int result, _DWORD *a2);  /* 0x004a18b8 */
int __fastcall sub_604A18F0(int a1);  /* 0x004a18f0 */
int __fastcall sub_604A196C(_DWORD *a1);  /* 0x004a196c */
int __fastcall sub_604A1AC0(_DWORD *a1);  /* 0x004a1ac0 */
int __fastcall sub_604A1C24(int a1, unsigned int a2);  /* 0x004a1c24 */
int __fastcall sub_604A1D14(int a1, unsigned int a2);  /* 0x004a1d14 */
int __fastcall sub_604A1E08(_DWORD *a1);  /* 0x004a1e08 */
int __fastcall sub_604A2454(int a1);  /* 0x004a2454 */
int __fastcall sub_604A25EC(int a1, int a2);  /* 0x004a25ec */
int __fastcall sub_604A2624(int a1, _DWORD *a2);  /* 0x004a2624 */
int __fastcall sub_604A2668(int a1, int a2);  /* 0x004a2668 */
int __fastcall sub_604A2674(int result, _DWORD *a2);  /* 0x004a2674 */
int __fastcall sub_604A2684(int a1, int a2);  /* 0x004a2684 */
int __fastcall sub_604A26AC(int a1);  /* 0x004a26ac */
int __fastcall sub_604A26B4(int a1);  /* 0x004a26b4 */
int __fastcall sub_604A26DC(int result);  /* 0x004a26dc */
int __fastcall sub_604A2D58(int a1);  /* 0x004a2d58 */
int __fastcall sub_604A2D78(int a1);  /* 0x004a2d78 */
int __fastcall SE_SYS_BTN_OVER_ref_2(int a1);  /* 0x004a2ef0 */
int __fastcall sub_604A337C(int a1);  /* 0x004a337c */
int __fastcall sub_604A339C(int a1);  /* 0x004a339c */
int __fastcall sub_604A33D4(int a1);  /* 0x004a33d4 */
int __fastcall sub_604A34A4(int a1);  /* 0x004a34a4 */
int __fastcall sub_604A3568(int a1);  /* 0x004a3568 */
int __fastcall sub_604A35CC(int a1);  /* 0x004a35cc */
int __fastcall sub_604A3690(int a1);  /* 0x004a3690 */
int __fastcall sub_604A372C(int a1);  /* 0x004a372c */
int __fastcall sub_604A39D0(int a1);  /* 0x004a39d0 */
int __fastcall sub_604A3B10(int a1);  /* 0x004a3b10 */
int __fastcall sub_604A3BD4(int a1);  /* 0x004a3bd4 */
int __fastcall sub_604A3C58(int a1);  /* 0x004a3c58 */
int __fastcall sub_604A3C90(int a1);  /* 0x004a3c90 */
int __fastcall sub_604A3C94(int a1);  /* 0x004a3c94 */
int __fastcall sub_604A3D2C(int result);  /* 0x004a3d2c */
int __fastcall sub_604A3D40(int a1);  /* 0x004a3d40 */
int __fastcall sub_604A3DE4(int a1);  /* 0x004a3de4 */
int __fastcall sub_604A3DFC(int a1);  /* 0x004a3dfc */
int __fastcall sub_604A3E30(int result);  /* 0x004a3e30 */
int __fastcall sub_604A3E40(int a1);  /* 0x004a3e40 */
int __fastcall sub_604A3ED8(int a1);  /* 0x004a3ed8 */
int __fastcall sub_604A3F98(int a1);  /* 0x004a3f98 */
int __fastcall sub_604A3FE4(int a1);  /* 0x004a3fe4 */
int __fastcall sub_604A4320(int a1);  /* 0x004a4320 */
void __fastcall sub_604A4354(struct sead_IDisposer *a1);  /* 0x004a4354 */
int __fastcall sub_604A435C(int a1, int a2, int a3, int a4);  /* 0x004a435c */
int __fastcall sub_604A46E8(int a1, unsigned int a2, int a3);  /* 0x004a46e8 */
int __fastcall sub_604A4AE4(int a1, unsigned int a2);  /* 0x004a4ae4 */
int __fastcall sub_604A4C4C(int result, _DWORD *a2);  /* 0x004a4c4c */
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
int __fastcall sub_604A735C(int a1, int a2);  /* 0x004a735c */
int __fastcall sub_604A7394(int a1, _DWORD *a2);  /* 0x004a7394 */
int __fastcall sub_604A73D8(int a1, int a2);  /* 0x004a73d8 */
int __fastcall sub_604A73E4(int result, _DWORD *a2);  /* 0x004a73e4 */
int __fastcall sub_604A73F4(int a1, int a2);  /* 0x004a73f4 */
int __fastcall sub_604A741C(int a1);  /* 0x004a741c */
int __fastcall sub_604A7424(int a1);  /* 0x004a7424 */
int __fastcall sub_604A744C(struct sead_IDisposer *a1);  /* 0x004a744c */
int __fastcall sub_604A7DE0(struct sead_IDisposer *a1);  /* 0x004a7de0 */
int __fastcall sub_604A7E50(int a1);  /* 0x004a7e50 */
int __fastcall sub_604A7ECC(int result);  /* 0x004a7ecc */
int __fastcall sub_604A7EF4(int result);  /* 0x004a7ef4 */
int __fastcall sub_604A7F18(int a1);  /* 0x004a7f18 */
int __fastcall sub_604A7F38(int a1);  /* 0x004a7f38 */
int __fastcall sub_604A8154(int a1);  /* 0x004a8154 */
int __fastcall sub_604A82A0(int a1);  /* 0x004a82a0 */
int __fastcall sub_604A8338(int a1);  /* 0x004a8338 */
int __fastcall sub_604A8838(int result);  /* 0x004a8838 */
int __fastcall sub_604A8858(int result);  /* 0x004a8858 */
int __fastcall sub_604A88AC(int a1);  /* 0x004a88ac */
int __fastcall sub_604A8C74(_DWORD *a1);  /* 0x004a8c74 */
int __fastcall sub_604A8F68(int a1);  /* 0x004a8f68 */
int __fastcall sub_604A9008(int a1);  /* 0x004a9008 */
int __fastcall sub_604A9218(int a1);  /* 0x004a9218 */
int __fastcall sub_604A9660(int a1);  /* 0x004a9660 */
int __fastcall sub_604A97A0(int a1);  /* 0x004a97a0 */
int __fastcall sub_604A983C(int result);  /* 0x004a983c */
int __fastcall sub_604A98B8(_DWORD *a1);  /* 0x004a98b8 */
int __fastcall sub_604A9AD4(int a1);  /* 0x004a9ad4 */
int __fastcall sub_604A9B74(int a1);  /* 0x004a9b74 */
int __fastcall sub_604A9CBC(int a1);  /* 0x004a9cbc */
int __fastcall sub_604A9EB0(int result);  /* 0x004a9eb0 */
int __fastcall sub_604A9EF8(int a1);  /* 0x004a9ef8 */
int __fastcall sub_604AA0F0(int result);  /* 0x004aa0f0 */
int __fastcall sub_604AA138(int result);  /* 0x004aa138 */
int __fastcall sub_604AA2C4(int result);  /* 0x004aa2c4 */
int __fastcall sub_604AA30C(int result);  /* 0x004aa30c */
int __fastcall sub_604AA44C(int a1);  /* 0x004aa44c */
int __fastcall sub_604AA74C(int a1);  /* 0x004aa74c */
int __fastcall sub_604AA764(int a1);  /* 0x004aa764 */
int __fastcall sub_604AA7E4(int result);  /* 0x004aa7e4 */
int __fastcall sub_604AA80C(int a1);  /* 0x004aa80c */
int __fastcall sub_604AAAF8(int result);  /* 0x004aaaf8 */
int __fastcall sub_604AAB28(int result);  /* 0x004aab28 */
int __fastcall sub_604AAB3C(int a1);  /* 0x004aab3c */
int __fastcall sub_604AAC94(int a1);  /* 0x004aac94 */
int __fastcall sub_604AAEB4(int a1);  /* 0x004aaeb4 */
int __fastcall sub_604AB390(int a1);  /* 0x004ab390 */
void __fastcall sub_604AB57C(struct sead_IDisposer *a1);  /* 0x004ab57c */
int __fastcall sub_604AB584(_DWORD *a1);  /* 0x004ab584 */
int __fastcall sub_604AB640(_DWORD *a1);  /* 0x004ab640 */
int __fastcall sub_604AB860(int a1);  /* 0x004ab860 */
int __fastcall sub_604AB9BC(int a1);  /* 0x004ab9bc */
int __fastcall sub_604ABACC(int a1);  /* 0x004abacc */
int __fastcall sub_604ABBCC(int a1);  /* 0x004abbcc */
int __fastcall sub_604ABCA8(unsigned __int8 *a1, unsigned int a2, int a3);  /* 0x004abca8 */
int __fastcall sub_604ABE10(int a1, _DWORD *a2);  /* 0x004abe10 */
int __fastcall sub_604ABEA8(int a1);  /* 0x004abea8 */
int __fastcall sub_604ABED4(int a1, int a2);  /* 0x004abed4 */
int __fastcall sub_604ABF6C(int a1, int a2);  /* 0x004abf6c */
int __fastcall sub_604AC1D0(int a1, int a2);  /* 0x004ac1d0 */
int __fastcall sub_604AC434(int a1, int a2);  /* 0x004ac434 */
int __fastcall sub_604AC8BC(int a1);  /* 0x004ac8bc */
int __fastcall sub_604AC9C8(int *a1, unsigned int a2, unsigned int a3, int a4, int a5);  /* 0x004ac9c8 */
int __fastcall sub_604AD320(int a1);  /* 0x004ad320 */
int __fastcall sub_604AD550(int a1, int a2, int a3);  /* 0x004ad550 */
int __fastcall sub_604AD96C(int a1, int a2, int a3);  /* 0x004ad96c */
int __fastcall sub_604ADC7C(int a1, int a2);  /* 0x004adc7c */
int __fastcall sub_604ADCB4(int a1, _DWORD *a2);  /* 0x004adcb4 */
int __fastcall sub_604ADCF8(int a1, int a2);  /* 0x004adcf8 */
int __fastcall sub_604ADD04(int result, _DWORD *a2);  /* 0x004add04 */
int __fastcall sub_604ADD14(int a1, int a2);  /* 0x004add14 */
int __fastcall sub_604ADD3C(int a1);  /* 0x004add3c */
int __fastcall sub_604ADD44(int a1);  /* 0x004add44 */
int __fastcall sub_604ADD6C(struct sead_IDisposer *a1);  /* 0x004add6c */
int __fastcall sub_604AE61C(int a1);  /* 0x004ae61c */
int __fastcall sub_604AE650(int result);  /* 0x004ae650 */
int __fastcall sub_604AE67C(int result);  /* 0x004ae67c */
int __fastcall sub_604AE694(int result);  /* 0x004ae694 */
int __fastcall sub_604AE6D8(int result);  /* 0x004ae6d8 */
int __fastcall sub_604AE6E4(int a1);  /* 0x004ae6e4 */
int __fastcall sub_604AE718(int result);  /* 0x004ae718 */
int __fastcall sub_604AE73C(int result);  /* 0x004ae73c */
int __fastcall sub_604AE748(int a1);  /* 0x004ae748 */
int __fastcall sub_604AE884(int a1);  /* 0x004ae884 */
void __fastcall sub_604AE89C(struct sead_IDisposer *a1);  /* 0x004ae89c */
int __fastcall sub_604AE8A0(int a1);  /* 0x004ae8a0 */
int __fastcall sub_604AED20(int a1);  /* 0x004aed20 */
int __fastcall sub_604AEE94(int a1);  /* 0x004aee94 */
int __fastcall sub_604AEEC0(int result, int a2);  /* 0x004aeec0 */
int __fastcall sub_604AEEF8(int a1);  /* 0x004aeef8 */
int __fastcall sub_604AEFA0(int result);  /* 0x004aefa0 */
int __fastcall sub_604AEFFC(int a1);  /* 0x004aeffc */
int __fastcall sub_604AF054(int a1, _DWORD *a2);  /* 0x004af054 */
int __fastcall sub_604AF098(int a1, int a2);  /* 0x004af098 */
int __fastcall sub_604AF0D0(int a1, _DWORD *a2);  /* 0x004af0d0 */
int __fastcall sub_604AF114(int a1, int a2);  /* 0x004af114 */
int __fastcall sub_604AF120(int result, _DWORD *a2);  /* 0x004af120 */
int __fastcall sub_604AF130(int a1, int a2);  /* 0x004af130 */
int __fastcall sub_604AF158(int a1);  /* 0x004af158 */
int __fastcall sub_604AF160(int a1);  /* 0x004af160 */
int __fastcall sub_604AF188(struct sead_IDisposer *a1);  /* 0x004af188 */
int __fastcall sub_604AF20C(struct sead_IDisposer *a1);  /* 0x004af20c */
int __fastcall sub_604AF284(int a1);  /* 0x004af284 */
int __fastcall sub_604AF514(int a1);  /* 0x004af514 */
int __fastcall sub_604AF854(int a1);  /* 0x004af854 */
int __fastcall sub_604AFB64(int a1);  /* 0x004afb64 */
int __fastcall SE_SYS_CE_MENU_IN_ref(int a1);  /* 0x004afba8 */
int __fastcall sub_604AFD68(int a1);  /* 0x004afd68 */
int __fastcall sub_604AFDA4(int a1);  /* 0x004afda4 */
int __fastcall SE_SYS_CE_MENU_OUT_ref(_DWORD *a1);  /* 0x004afdbc */
int __fastcall sub_604AFED4(int a1);  /* 0x004afed4 */
unsigned int __fastcall sub_604AFF74(int a1);  /* 0x004aff74 */
int __fastcall sub_604AFFA4(int a1);  /* 0x004affa4 */
int __fastcall sub_604B0128(int a1);  /* 0x004b0128 */
int __fastcall sub_604B0528(_DWORD *a1);  /* 0x004b0528 */
int __fastcall sub_604B05E0(int result);  /* 0x004b05e0 */
int __fastcall sub_604B06F0(_DWORD *a1);  /* 0x004b06f0 */
int __fastcall SE_SYS_CE_RESET_ref(int a1);  /* 0x004b07f0 */
int __fastcall sub_604B0B04(_DWORD *a1);  /* 0x004b0b04 */
int __fastcall sub_604B0BEC(int result);  /* 0x004b0bec */
int __fastcall sub_604B0C24(int a1);  /* 0x004b0c24 */
int __fastcall sub_604B0D04(int a1);  /* 0x004b0d04 */
int __fastcall SE_SYS_CE_MENU_OUT_ref_2(int a1);  /* 0x004b0d20 */
int __fastcall sub_604B0E68(int a1);  /* 0x004b0e68 */
int __fastcall sub_604B11A4(_DWORD *a1);  /* 0x004b11a4 */
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
int __fastcall sub_604B2094(int a1, int a2);  /* 0x004b2094 */
int __fastcall sub_604B20BC(int a1);  /* 0x004b20bc */
int __fastcall sub_604B2528(int a1);  /* 0x004b2528 */
int __fastcall sub_604B26C8(int a1, int a2);  /* 0x004b26c8 */
int __fastcall sub_604B2700(int a1, _DWORD *a2);  /* 0x004b2700 */
int __fastcall sub_604B2744(int a1, int a2);  /* 0x004b2744 */
int __fastcall sub_604B2750(int result, _DWORD *a2);  /* 0x004b2750 */
int __fastcall sub_604B2760(int a1, int a2);  /* 0x004b2760 */
int __fastcall sub_604B2788(int a1);  /* 0x004b2788 */
int __fastcall sub_604B2790(int a1);  /* 0x004b2790 */
int __fastcall sub_604B27B8(int a1);  /* 0x004b27b8 */
int __fastcall sub_604B288C(int a1);  /* 0x004b288c */
int __fastcall sub_604B2CF0(int a1);  /* 0x004b2cf0 */
int __fastcall sub_604B2D4C(int a1);  /* 0x004b2d4c */
int __fastcall sub_604B2D88(int a1);  /* 0x004b2d88 */
int __fastcall sub_604B2DE4(int a1);  /* 0x004b2de4 */
int __fastcall sub_604B3208(_DWORD *a1);  /* 0x004b3208 */
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
int __fastcall sub_604B4F94(int result, _DWORD *a2);  /* 0x004b4f94 */
int __fastcall sub_604B4F98(int result, char a2);  /* 0x004b4f98 */
int __fastcall sub_604B4FA4(int result);  /* 0x004b4fa4 */
int __fastcall sub_604B4FF8(int a1);  /* 0x004b4ff8 */
int __fastcall sub_604B5164(int a1);  /* 0x004b5164 */
int __fastcall sub_604B5230(int result);  /* 0x004b5230 */
bool __fastcall sub_604B5270(int a1);  /* 0x004b5270 */
int __fastcall sub_604B55FC(int a1, float *a2);  /* 0x004b55fc */
int __fastcall sub_604B5858(int a1);  /* 0x004b5858 */
int __fastcall sub_604B5AB4(int a1, int a2);  /* 0x004b5ab4 */
int __fastcall sub_604B5AEC(int a1, _DWORD *a2);  /* 0x004b5aec */
int __fastcall sub_604B5B30(int a1, int a2);  /* 0x004b5b30 */
int __fastcall sub_604B5B3C(int result, _DWORD *a2);  /* 0x004b5b3c */
int __fastcall sub_604B5B4C(int a1, int a2);  /* 0x004b5b4c */
int __fastcall sub_604B5B74(int a1);  /* 0x004b5b74 */
int __fastcall sub_604B5B7C(int a1);  /* 0x004b5b7c */
void __fastcall sub_604B5BA4(struct sead_IDisposer *a1);  /* 0x004b5ba4 */
int __fastcall sub_604B5BA8(struct sead_IDisposer *a1);  /* 0x004b5ba8 */
int __fastcall sub_604B5BB8(int result);  /* 0x004b5bb8 */
int __fastcall SE_SYS_FS_FINISHED_ref(int a1);  /* 0x004b5bd0 */
int __fastcall sub_604B5CB8(int a1);  /* 0x004b5cb8 */
int __fastcall sub_604B5CD4(_DWORD *a1);  /* 0x004b5cd4 */
int __fastcall sub_604B5D24(int a1);  /* 0x004b5d24 */
int __fastcall sub_604B5D58(int a1, unsigned int a2);  /* 0x004b5d58 */
int __fastcall sub_604B5D90(int a1);  /* 0x004b5d90 */
int __fastcall sub_604B5F14(int a1);  /* 0x004b5f14 */
int __fastcall sub_604B5F48(int a1);  /* 0x004b5f48 */
int __fastcall sub_604B607C(int a1);  /* 0x004b607c */
int __fastcall sub_604B60C8(int a1);  /* 0x004b60c8 */
int __fastcall sub_604B610C(int a1);  /* 0x004b610c */
int __fastcall sub_604B622C(int a1);  /* 0x004b622c */
int __fastcall sub_604B62B4(int a1);  /* 0x004b62b4 */
int __fastcall sub_604B633C(int a1);  /* 0x004b633c */
int __fastcall sub_604B6354(int a1);  /* 0x004b6354 */
int __fastcall sub_604B6400(int a1);  /* 0x004b6400 */
unsigned int __fastcall sub_604B6534(int a1);  /* 0x004b6534 */
bool __fastcall sub_604B66FC(int a1, int a2);  /* 0x004b66fc */
int __fastcall sub_604B6870(int a1, int a2);  /* 0x004b6870 */
int __fastcall sub_604B691C(int a1, int a2);  /* 0x004b691c */
int __fastcall sub_604B6954(int a1, _DWORD *a2);  /* 0x004b6954 */
int __fastcall sub_604B6998(int a1, int a2);  /* 0x004b6998 */
int __fastcall sub_604B69A4(int result, _DWORD *a2);  /* 0x004b69a4 */
int __fastcall sub_604B69B4(int a1, int a2);  /* 0x004b69b4 */
int __fastcall sub_604B69DC(int a1);  /* 0x004b69dc */
int __fastcall sub_604B69E4(int a1);  /* 0x004b69e4 */
int __fastcall sub_604B6C34(int a1);  /* 0x004b6c34 */
bool __fastcall sub_604B6DDC(int a1);  /* 0x004b6ddc */
bool __fastcall sub_604B6E00(int a1, unsigned int a2);  /* 0x004b6e00 */
bool __fastcall sub_604B6F58(int a1, unsigned int a2);  /* 0x004b6f58 */
int __fastcall sub_604B70B4(int a1);  /* 0x004b70b4 */
int __fastcall sub_604B70B8(int result);  /* 0x004b70b8 */
unsigned int __fastcall sub_604B70BC(int a1, unsigned int a2);  /* 0x004b70bc */
unsigned int __fastcall sub_604B71E0(int a1, unsigned int a2);  /* 0x004b71e0 */
int __fastcall sub_604B7320(_DWORD *a1);  /* 0x004b7320 */
int __fastcall sub_604B74B0(int a1, int a2);  /* 0x004b74b0 */
int __fastcall sub_604B74E8(int a1, unsigned int a2);  /* 0x004b74e8 */
unsigned int __fastcall sub_604B763C(int a1, unsigned int a2);  /* 0x004b763c */
int __fastcall sub_604B78EC(int a1);  /* 0x004b78ec */
void __fastcall sub_604B7A3C(struct sead_IDisposer *a1);  /* 0x004b7a3c */
int __fastcall sub_604B7A40(_DWORD *a1);  /* 0x004b7a40 */
int __fastcall sub_604B7A8C(int a1);  /* 0x004b7a8c */
int __fastcall sub_604B7B70(int a1);  /* 0x004b7b70 */
int __fastcall sub_604B7D04(int a1);  /* 0x004b7d04 */
int __fastcall sub_604B7F5C(int result);  /* 0x004b7f5c */
int __fastcall sub_604B7F78(int result, _DWORD *a2);  /* 0x004b7f78 */
int __fastcall sub_604B7FC8(int a1);  /* 0x004b7fc8 */
bool __fastcall sub_604B80D0(int a1);  /* 0x004b80d0 */
int __fastcall sub_604B81E4(int a1);  /* 0x004b81e4 */
bool __fastcall sub_604B82EC(int a1);  /* 0x004b82ec */
int __fastcall sub_604B8400(int a1);  /* 0x004b8400 */
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
bool __fastcall sub_604B8E64(int a1, int a2);  /* 0x004b8e64 */
int __fastcall sub_604B8F5C(struct sead_IDisposer *a1);  /* 0x004b8f5c */
int __fastcall sub_604BA2B4(int a1);  /* 0x004ba2b4 */
int __fastcall SE_SYS_COUNT_ZANKI_ref(int a1);  /* 0x004ba344 */
int __fastcall sub_604BA454(int result);  /* 0x004ba454 */
int __fastcall sub_604BA460(int result);  /* 0x004ba460 */
int __fastcall sub_604BA48C(int a1);  /* 0x004ba48c */
int __fastcall SE_SYS_CONTINUE_DONE_ref_2(int a1);  /* 0x004ba4f0 */
int __fastcall sub_604BA5F4(int result);  /* 0x004ba5f4 */
int __fastcall sub_604BA600(int result);  /* 0x004ba600 */
int __fastcall sub_604BA62C(int a1);  /* 0x004ba62c */
void __fastcall sub_604BA788(struct sead_IDisposer *a1);  /* 0x004ba788 */
int __fastcall sub_604BA790(_DWORD *a1);  /* 0x004ba790 */
int __fastcall sub_604BA7C0(int a1, int a2);  /* 0x004ba7c0 */
int __fastcall sub_604BAD30(int a1, _DWORD *a2);  /* 0x004bad30 */
int __fastcall sub_604BAE44(int a1);  /* 0x004bae44 */
int __fastcall sub_604BAE74(int result, _DWORD *a2);  /* 0x004bae74 */
int __fastcall sub_604BAE8C(_DWORD *a1);  /* 0x004bae8c */
int __fastcall sub_604BAF00(_DWORD *a1, int a2);  /* 0x004baf00 */
int __fastcall sub_604BAF8C(int a1, int a2);  /* 0x004baf8c */
int __fastcall sub_604BAFC4(int a1, _DWORD *a2);  /* 0x004bafc4 */
int __fastcall sub_604BB008(int a1, int a2);  /* 0x004bb008 */
int __fastcall sub_604BB014(int result, _DWORD *a2);  /* 0x004bb014 */
int __fastcall sub_604BB024(int a1, int a2);  /* 0x004bb024 */
int __fastcall sub_604BB04C(int a1);  /* 0x004bb04c */
int __fastcall sub_604BB054(int a1);  /* 0x004bb054 */
int __fastcall sub_604BB07C(struct sead_IDisposer *a1);  /* 0x004bb07c */
int __fastcall sub_604BB0FC(struct sead_IDisposer *a1);  /* 0x004bb0fc */
int __fastcall sub_604BB170(int a1);  /* 0x004bb170 */
int __fastcall sub_604BB2D0(int a1);  /* 0x004bb2d0 */
int __fastcall sub_604BB484(int a1);  /* 0x004bb484 */
int __fastcall sub_604BB6B8(int a1);  /* 0x004bb6b8 */
int __fastcall sub_604BBB5C(int a1);  /* 0x004bbb5c */
int __fastcall sub_604BBBA4(int result, _DWORD *a2);  /* 0x004bbba4 */
int __fastcall sub_604BBBCC(int a1);  /* 0x004bbbcc */
int __fastcall sub_604BBC24(int a1, int a2);  /* 0x004bbc24 */
int __fastcall sub_604BBC5C(int a1, _DWORD *a2);  /* 0x004bbc5c */
int __fastcall sub_604BBCA0(int a1, int a2);  /* 0x004bbca0 */
int __fastcall sub_604BBCAC(int result, _DWORD *a2);  /* 0x004bbcac */
int __fastcall sub_604BBCBC(int a1, int a2);  /* 0x004bbcbc */
int __fastcall sub_604BBCE4(int a1);  /* 0x004bbce4 */
int __fastcall sub_604BBCEC(int a1);  /* 0x004bbcec */
int __fastcall sub_604BBD14(int result);  /* 0x004bbd14 */
int __fastcall sub_604BBD94(int a1);  /* 0x004bbd94 */
int __fastcall sub_604BBDE8(_DWORD *a1);  /* 0x004bbde8 */
int __fastcall sub_604BBF20(int a1);  /* 0x004bbf20 */
int __fastcall sub_604BC0A8(_DWORD *a1);  /* 0x004bc0a8 */
int __fastcall sub_604BC0EC(_DWORD *a1);  /* 0x004bc0ec */
int __fastcall sub_604BC4F8(int a1);  /* 0x004bc4f8 */
int __fastcall sub_604BC580(int a1, _DWORD *a2);  /* 0x004bc580 */
bool __fastcall sub_604BC5C8(int a1, int a2);  /* 0x004bc5c8 */
int __fastcall sub_604BC750(int a1, int a2);  /* 0x004bc750 */
int __fastcall sub_604BC788(int a1, _DWORD *a2);  /* 0x004bc788 */
int __fastcall sub_604BC7CC(int a1, int a2);  /* 0x004bc7cc */
int __fastcall sub_604BC7D8(int result, _DWORD *a2);  /* 0x004bc7d8 */
int __fastcall sub_604BC7E8(int a1, int a2);  /* 0x004bc7e8 */
int __fastcall sub_604BC810(int a1);  /* 0x004bc810 */
int __fastcall sub_604BC818(int a1);  /* 0x004bc818 */
int __fastcall sub_604BC95C(int a1);  /* 0x004bc95c */
int __fastcall sub_604BC9A8(int result);  /* 0x004bc9a8 */
unsigned int __fastcall sub_604BC9D0(int a1);  /* 0x004bc9d0 */
int __fastcall sub_604BCAE4(int a1);  /* 0x004bcae4 */
int __fastcall sub_604BDA64(int a1);  /* 0x004bda64 */
int __fastcall sub_604BDAE4(int a1);  /* 0x004bdae4 */
int __fastcall sub_604BDD0C(int result);  /* 0x004bdd0c */
int __fastcall sub_604BDD30(int a1);  /* 0x004bdd30 */
int __fastcall sub_604BDD8C(int a1);  /* 0x004bdd8c */
int __fastcall sub_604BDF00(int a1);  /* 0x004bdf00 */
int __fastcall sub_604BDF34(int a1);  /* 0x004bdf34 */
int __fastcall sub_604BDF90(int a1);  /* 0x004bdf90 */
int __fastcall sub_604BE044(int a1);  /* 0x004be044 */
int __fastcall sub_604BE114(int a1);  /* 0x004be114 */
int __fastcall sub_604BE194(int a1);  /* 0x004be194 */
int __fastcall sub_604BE218(int a1);  /* 0x004be218 */
int __fastcall sub_604BEBC8(int a1);  /* 0x004bebc8 */
int __fastcall sub_604BEC04(int result);  /* 0x004bec04 */
int __fastcall sub_604BEC28(int a1);  /* 0x004bec28 */
int __fastcall sub_604BEC74(int a1);  /* 0x004bec74 */
int __fastcall sub_604BED04(int result);  /* 0x004bed04 */
int __fastcall sub_604BED28(int a1);  /* 0x004bed28 */
int __fastcall sub_604BED50(int a1);  /* 0x004bed50 */
int __fastcall sub_604BEDD4(int result);  /* 0x004bedd4 */
int __fastcall sub_604BEDE8(int a1);  /* 0x004bede8 */
int __fastcall sub_604BEE04(int a1);  /* 0x004bee04 */
int __fastcall sub_604BEE90(int a1);  /* 0x004bee90 */
int __fastcall sub_604BF23C(_DWORD *a1);  /* 0x004bf23c */
int __fastcall sub_604BF24C(int a1);  /* 0x004bf24c */
int __fastcall sub_604BF6C4(_DWORD *a1);  /* 0x004bf6c4 */
int __fastcall sub_604BF87C(int a1);  /* 0x004bf87c */
int __fastcall sub_604BFB80(_DWORD *a1);  /* 0x004bfb80 */
int __fastcall sub_604BFE2C(int result);  /* 0x004bfe2c */
int __fastcall sub_604C0278(int a1);  /* 0x004c0278 */
int __fastcall sub_604C0308(_DWORD *a1);  /* 0x004c0308 */
int __fastcall sub_604C03FC(int a1);  /* 0x004c03fc */
int __fastcall sub_604C04BC(int a1, _DWORD *a2);  /* 0x004c04bc */
int __fastcall sub_604C04C8(float *a1, int a2);  /* 0x004c04c8 */
unsigned int __fastcall sub_604C08B0(int a1);  /* 0x004c08b0 */
int __fastcall sub_604C0BAC(int a1, int a2);  /* 0x004c0bac */
int __fastcall sub_604C0EF0(int a1);  /* 0x004c0ef0 */
int __fastcall sub_604C154C(int a1);  /* 0x004c154c */
int __fastcall sub_604C16E4(_DWORD *a1);  /* 0x004c16e4 */
int __fastcall sub_604C1758(_DWORD *a1, int a2);  /* 0x004c1758 */
int __fastcall sub_604C1AA4(int a1, int a2, unsigned __int8 *a3, int a4);  /* 0x004c1aa4 */
int __fastcall sub_604C1CD8(int a1, int a2);  /* 0x004c1cd8 */
int __fastcall sub_604C1D10(int a1, _DWORD *a2);  /* 0x004c1d10 */
int __fastcall sub_604C1D54(int a1, int a2);  /* 0x004c1d54 */
int __fastcall sub_604C1D60(int result, _DWORD *a2);  /* 0x004c1d60 */
int __fastcall sub_604C1D70(int a1, int a2);  /* 0x004c1d70 */
int __fastcall sub_604C1D98(int a1);  /* 0x004c1d98 */
int __fastcall sub_604C1DA0(int a1);  /* 0x004c1da0 */
int __fastcall sub_604C1DC8(int a1);  /* 0x004c1dc8 */
int __fastcall sub_604C1E8C(int a1);  /* 0x004c1e8c */
int __fastcall sub_604C1F08(int a1);  /* 0x004c1f08 */
int __fastcall sub_604C23C4(int a1);  /* 0x004c23c4 */
int __fastcall sub_604C244C(int result);  /* 0x004c244c */
int __fastcall sub_604C2460(int a1);  /* 0x004c2460 */
int __fastcall sub_604C24B0(int result);  /* 0x004c24b0 */
int __fastcall sub_604C24C0(int a1);  /* 0x004c24c0 */
int __fastcall sub_604C2598(int result);  /* 0x004c2598 */
int __fastcall sub_604C2684(int a1);  /* 0x004c2684 */
int __fastcall sub_604C2720(int result);  /* 0x004c2720 */
int __fastcall sub_604C2818(int a1);  /* 0x004c2818 */
int __fastcall sub_604C2908(int a1);  /* 0x004c2908 */
int __fastcall sub_604C2A1C(int a1);  /* 0x004c2a1c */
int __fastcall sub_604C2B4C(int a1);  /* 0x004c2b4c */
int __fastcall sub_604C2C18(int a1);  /* 0x004c2c18 */
int __fastcall sub_604C2D0C(int a1);  /* 0x004c2d0c */
int __fastcall sub_604C2DB0(int result);  /* 0x004c2db0 */
int __fastcall sub_604C2DC0(int result);  /* 0x004c2dc0 */
int __fastcall sub_604C2DDC(int result);  /* 0x004c2ddc */
int __fastcall sub_604C2E00(int a1);  /* 0x004c2e00 */
int __fastcall sub_604C2E48(int a1);  /* 0x004c2e48 */
int __fastcall sub_604C2E60(int a1);  /* 0x004c2e60 */
int __fastcall sub_604C2FE8(int result);  /* 0x004c2fe8 */
int __fastcall sub_604C314C(int result);  /* 0x004c314c */
int __fastcall sub_604C315C(int a1);  /* 0x004c315c */
int __fastcall sub_604C32CC(int result);  /* 0x004c32cc */
int __fastcall sub_604C33E4(int a1);  /* 0x004c33e4 */
int __fastcall sub_604C3418(int a1);  /* 0x004c3418 */
int __fastcall sub_604C34B8(int a1);  /* 0x004c34b8 */
int __fastcall sub_604C36DC(int result);  /* 0x004c36dc */
int __fastcall sub_604C379C(int a1);  /* 0x004c379c */
int __fastcall sub_604C3990(int result);  /* 0x004c3990 */
int __fastcall sub_604C3AA8(int a1);  /* 0x004c3aa8 */
int __fastcall sub_604C3AF8(int result);  /* 0x004c3af8 */
int __fastcall sub_604C3B44(int a1);  /* 0x004c3b44 */
int __fastcall sub_604C3BE0(int a1);  /* 0x004c3be0 */
int __fastcall sub_604C3D50(int a1);  /* 0x004c3d50 */
int __fastcall sub_604C3E68(_BYTE *a1);  /* 0x004c3e68 */
int __fastcall sub_604C3EEC(int a1);  /* 0x004c3eec */
int __fastcall sub_604C4054(int result);  /* 0x004c4054 */
int __fastcall sub_604C4094(int a1);  /* 0x004c4094 */
int __fastcall sub_604C40A0(int a1);  /* 0x004c40a0 */
int __fastcall sub_604C40D4(int a1);  /* 0x004c40d4 */
int __fastcall sub_604C40F8(_DWORD *a1);  /* 0x004c40f8 */
int __fastcall sub_604C4174(_DWORD *a1);  /* 0x004c4174 */
int __fastcall sub_604C41F0(int a1);  /* 0x004c41f0 */
int __fastcall sub_604C421C(int a1);  /* 0x004c421c */
int __fastcall sub_604C4304(_BYTE *a1);  /* 0x004c4304 */
int __fastcall sub_604C44B4(int result);  /* 0x004c44b4 */
int __fastcall sub_604C44C4(int result);  /* 0x004c44c4 */
int __fastcall sub_604C44E8(int a1);  /* 0x004c44e8 */
int __fastcall sub_604C4578(int result);  /* 0x004c4578 */
int __fastcall sub_604C4588(int result);  /* 0x004c4588 */
int __fastcall sub_604C45C0(int result);  /* 0x004c45c0 */
int __fastcall sub_604C45D8(_BYTE *a1);  /* 0x004c45d8 */
int __fastcall sub_604C46E4(int a1);  /* 0x004c46e4 */
int __fastcall sub_604C46FC(int a1);  /* 0x004c46fc */
void __fastcall sub_604C4DA4(struct sead_IDisposer *a1);  /* 0x004c4da4 */
int __fastcall sub_604C4DAC(_DWORD *a1);  /* 0x004c4dac */
int __fastcall sub_604C4E30(int a1);  /* 0x004c4e30 */
int __fastcall sub_604C4FBC(_DWORD *a1);  /* 0x004c4fbc */
int __fastcall sub_604C51F0(_DWORD *a1);  /* 0x004c51f0 */
int __fastcall sub_604C5398(int a1);  /* 0x004c5398 */
int __fastcall sub_604C5524(int a1);  /* 0x004c5524 */
int __fastcall sub_604C56B0(int a1);  /* 0x004c56b0 */
int __fastcall sub_604C5D88(int result, _DWORD *a2);  /* 0x004c5d88 */
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
bool __fastcall sub_604C84E0(int a1);  /* 0x004c84e0 */
int __fastcall sub_604C84E8(_DWORD *a1);  /* 0x004c84e8 */
bool __fastcall sub_604C8564(int a1);  /* 0x004c8564 */
int __fastcall sub_604C88D4(int a1, int a2);  /* 0x004c88d4 */
int __fastcall sub_604C890C(int a1, _DWORD *a2);  /* 0x004c890c */
int __fastcall sub_604C8950(int a1, int a2);  /* 0x004c8950 */
int __fastcall sub_604C895C(int result, _DWORD *a2);  /* 0x004c895c */
int __fastcall sub_604C896C(int a1, int a2);  /* 0x004c896c */
int __fastcall sub_604C8994(int a1);  /* 0x004c8994 */
int __fastcall sub_604C899C(int a1);  /* 0x004c899c */
int __fastcall sub_604C89C4(struct sead_IDisposer *a1);  /* 0x004c89c4 */
int __fastcall sub_604C89D4(int a1);  /* 0x004c89d4 */
int __fastcall sub_604C8A1C(int a1);  /* 0x004c8a1c */
unsigned int __fastcall G_Score_00_ref(int a1);  /* 0x004c8a34 */
int __fastcall sub_604C8C5C(int a1);  /* 0x004c8c5c */
int __fastcall sub_604C8C9C(int a1);  /* 0x004c8c9c */
int __fastcall sub_604C8CE4(int a1);  /* 0x004c8ce4 */
int __fastcall sub_604C8D20(int a1);  /* 0x004c8d20 */
int __fastcall sub_604C8E24(int a1);  /* 0x004c8e24 */
int __fastcall sub_604C8F38(int a1);  /* 0x004c8f38 */
unsigned int __fastcall sub_604C9060(int a1);  /* 0x004c9060 */
int __fastcall sub_604C9218(int a1);  /* 0x004c9218 */
int __fastcall sub_604C9318(int a1);  /* 0x004c9318 */
int __fastcall sub_604C93C0(int a1);  /* 0x004c93c0 */
int __fastcall sub_604C93C4(int a1);  /* 0x004c93c4 */
int __fastcall sub_604C9510(int a1);  /* 0x004c9510 */
int __fastcall sub_604C951C(int a1);  /* 0x004c951c */
int __fastcall sub_604C9568(int a1);  /* 0x004c9568 */
int __fastcall sub_604C9594(int a1);  /* 0x004c9594 */
int __fastcall sub_604C963C(int a1);  /* 0x004c963c */
int __fastcall sub_604C96AC(int result);  /* 0x004c96ac */
int __fastcall sub_604C96E8(int result);  /* 0x004c96e8 */
int __fastcall sub_604C976C(int a1);  /* 0x004c976c */
int __fastcall sub_604C97A8(int a1);  /* 0x004c97a8 */
int __fastcall sub_604C9830(int result);  /* 0x004c9830 */
int __fastcall sub_604C9858(int a1);  /* 0x004c9858 */
int __fastcall sub_604C9870(_DWORD *a1);  /* 0x004c9870 */
int __fastcall sub_604C9B44(int a1);  /* 0x004c9b44 */
int __fastcall sub_604C9BEC(int a1);  /* 0x004c9bec */
int __fastcall sub_604C9C2C(int a1);  /* 0x004c9c2c */
int __fastcall CouseSelectVSRandom_World_00_ref(_DWORD *a1);  /* 0x004c9cd0 */
int __fastcall sub_604C9DD8(_DWORD *a1);  /* 0x004c9dd8 */
int __fastcall sub_604C9E84(int a1);  /* 0x004c9e84 */
int __fastcall sub_604C9F2C(int a1);  /* 0x004c9f2c */
int __fastcall sub_604C9F6C(int a1);  /* 0x004c9f6c */
int __fastcall sub_604CA010(int a1);  /* 0x004ca010 */
int __fastcall sub_604CA064(int a1);  /* 0x004ca064 */
int __fastcall sub_604CA0A8(int result);  /* 0x004ca0a8 */
int __fastcall sub_604CA0CC(int result);  /* 0x004ca0cc */
int __fastcall sub_604CA0DC(int a1);  /* 0x004ca0dc */
int __fastcall sub_604CA124(int a1);  /* 0x004ca124 */
int __fastcall sub_604CA2E8(int *a1);  /* 0x004ca2e8 */
int __fastcall sub_604CA3CC(_DWORD *a1);  /* 0x004ca3cc */
int __fastcall sub_604CA504(int a1);  /* 0x004ca504 */
int __fastcall sub_604CA53C(_DWORD *a1);  /* 0x004ca53c */
int __fastcall sub_604CA544(_DWORD *a1);  /* 0x004ca544 */
int __fastcall sub_604CA680(int a1);  /* 0x004ca680 */
int __fastcall sub_604CA6B8(_DWORD *a1);  /* 0x004ca6b8 */
unsigned int __fastcall sub_604CA6DC(_DWORD *a1);  /* 0x004ca6dc */
int __fastcall sub_604CA6E0(_DWORD *a1);  /* 0x004ca6e0 */
int __fastcall sub_604CA814(int a1);  /* 0x004ca814 */
int __fastcall sub_604CA948(int a1);  /* 0x004ca948 */
int __fastcall sub_604CAA58(int a1);  /* 0x004caa58 */
int __fastcall sub_604CAD24(int a1);  /* 0x004cad24 */
int __fastcall sub_604CAE74(int a1);  /* 0x004cae74 */
int __fastcall sub_604CAED4(int a1);  /* 0x004caed4 */
int __fastcall sub_604CAFFC(int a1);  /* 0x004caffc */
int __fastcall sub_604CB050(_DWORD *a1);  /* 0x004cb050 */
int __fastcall sub_604CB19C(_DWORD *a1);  /* 0x004cb19c */
int __fastcall sub_604CB1C8(_DWORD *a1);  /* 0x004cb1c8 */
int __fastcall sub_604CB1D0(int a1);  /* 0x004cb1d0 */
int __fastcall sub_604CB320(int a1);  /* 0x004cb320 */
int __fastcall sub_604CB380(int a1);  /* 0x004cb380 */
int __fastcall sub_604CB4A8(int a1);  /* 0x004cb4a8 */
int __fastcall sub_604CB4FC(_DWORD *a1);  /* 0x004cb4fc */
int __fastcall sub_604CB64C(_DWORD *a1);  /* 0x004cb64c */
int __fastcall sub_604CB678(_DWORD *a1);  /* 0x004cb678 */
int __fastcall sub_604CB680(int result);  /* 0x004cb680 */
int __fastcall sub_604CB6A0(int result);  /* 0x004cb6a0 */
int __fastcall sub_604CB6DC(_DWORD *a1);  /* 0x004cb6dc */
int __fastcall sub_604CB794(int a1);  /* 0x004cb794 */
int __fastcall sub_604CC1DC(int a1);  /* 0x004cc1dc */
int __fastcall sub_604CC3F0(_DWORD *a1);  /* 0x004cc3f0 */
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
int __fastcall sub_604D46C4(int a1);  /* 0x004d46c4 */
int __fastcall sub_604D47D4(int a1);  /* 0x004d47d4 */
int __fastcall sub_604D4998(int a1);  /* 0x004d4998 */
int __fastcall sub_604D4A1C(int result);  /* 0x004d4a1c */
int __fastcall sub_604D4A40(int a1);  /* 0x004d4a40 */
int __fastcall sub_604D4B28(int a1);  /* 0x004d4b28 */
int __fastcall sub_604D4BB4(int a1);  /* 0x004d4bb4 */
int __fastcall sub_604D4BF8(int result);  /* 0x004d4bf8 */
int __fastcall sub_604D4C08(int a1);  /* 0x004d4c08 */
int __fastcall sub_604D4D1C(int a1);  /* 0x004d4d1c */
int __fastcall sub_604D4D68(int a1);  /* 0x004d4d68 */
int __fastcall sub_604D4DA4(int a1);  /* 0x004d4da4 */
int __fastcall sub_604D4DEC(int a1);  /* 0x004d4dec */
int __fastcall sub_604D4E34(int result);  /* 0x004d4e34 */
int __fastcall sub_604D4E44(int a1);  /* 0x004d4e44 */
int __fastcall sub_604D4F58(int a1);  /* 0x004d4f58 */
int __fastcall sub_604D4FD8(int a1);  /* 0x004d4fd8 */
int __fastcall sub_604D5014(int a1);  /* 0x004d5014 */
int __fastcall sub_604D5060(int a1);  /* 0x004d5060 */
int __fastcall sub_604D509C(int a1);  /* 0x004d509c */
int __fastcall sub_604D50E4(int a1);  /* 0x004d50e4 */
int __fastcall sub_604D511C(int a1);  /* 0x004d511c */
int __fastcall sub_604D5154(int a1);  /* 0x004d5154 */
int __fastcall sub_604D519C(int a1);  /* 0x004d519c */
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
int __fastcall sub_604D71C4(int a1);  /* 0x004d71c4 */
int __fastcall sub_604D7214(int a1);  /* 0x004d7214 */
int __fastcall sub_604D725C(int a1);  /* 0x004d725c */
int __fastcall sub_604D7330(int a1);  /* 0x004d7330 */
int __fastcall sub_604D73CC(int a1);  /* 0x004d73cc */
int __fastcall sub_604D74A4(int result);  /* 0x004d74a4 */
int __fastcall sub_604D74F8(int result);  /* 0x004d74f8 */
int __fastcall sub_604D7520(int a1);  /* 0x004d7520 */
int __fastcall sub_604D7574(int a1);  /* 0x004d7574 */
int __fastcall sub_604D75AC(int a1);  /* 0x004d75ac */
int __fastcall sub_604D75E4(int a1);  /* 0x004d75e4 */
int __fastcall sub_604D7640(int a1);  /* 0x004d7640 */
int __fastcall sub_604D78C4(int a1);  /* 0x004d78c4 */
int __fastcall sub_604D79F4(int a1);  /* 0x004d79f4 */
int __fastcall sub_604D7B04(int a1);  /* 0x004d7b04 */
int __fastcall sub_604D7BF8(int result);  /* 0x004d7bf8 */
int __fastcall sub_604D7C0C(int a1);  /* 0x004d7c0c */
int __fastcall sub_604D7D20(int a1);  /* 0x004d7d20 */
int __fastcall sub_604D7E00(int a1);  /* 0x004d7e00 */
int __fastcall sub_604D7EC0(_DWORD *a1);  /* 0x004d7ec0 */
int __fastcall sub_604D805C(int a1);  /* 0x004d805c */
int __fastcall sub_604D81A0(int a1);  /* 0x004d81a0 */
int __fastcall sub_604D8218(int a1);  /* 0x004d8218 */
int __fastcall sub_604D8314(int result);  /* 0x004d8314 */
int __fastcall sub_604D8368(int a1);  /* 0x004d8368 */
int __fastcall sub_604D83BC(int a1);  /* 0x004d83bc */
int __fastcall sub_604D8414(_DWORD *a1);  /* 0x004d8414 */
int __fastcall sub_604D84B8(int result);  /* 0x004d84b8 */
int __fastcall sub_604D84E4(int a1);  /* 0x004d84e4 */
int __fastcall sub_604D84FC(_DWORD *a1);  /* 0x004d84fc */
int __fastcall sub_604D8564(int result);  /* 0x004d8564 */
int __fastcall sub_604D8588(int a1);  /* 0x004d8588 */
int __fastcall sub_604D8594(_DWORD *a1);  /* 0x004d8594 */
int __fastcall sub_604D8644(int a1);  /* 0x004d8644 */
int __fastcall sub_604D8684(_DWORD *a1);  /* 0x004d8684 */
int __fastcall sub_604D86EC(int result);  /* 0x004d86ec */
int __fastcall sub_604D8740(int a1);  /* 0x004d8740 */
int __fastcall sub_604D87EC(_DWORD *a1);  /* 0x004d87ec */
int __fastcall sub_604D88BC(_DWORD *a1);  /* 0x004d88bc */
int __fastcall sub_604D896C(int a1);  /* 0x004d896c */
int __fastcall sub_604D89AC(_DWORD *a1);  /* 0x004d89ac */
int __fastcall sub_604D8A14(int result);  /* 0x004d8a14 */
int __fastcall sub_604D8A68(int a1);  /* 0x004d8a68 */
int __fastcall sub_604D8B14(_DWORD *a1);  /* 0x004d8b14 */
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
int __fastcall sub_604DA0C8(int a1, _DWORD *a2);  /* 0x004da0c8 */
int __fastcall sub_604DA198(int a1, _DWORD *a2);  /* 0x004da198 */
int __fastcall sub_604DA264(unsigned int a1);  /* 0x004da264 */
int __fastcall sub_604DA47C(int a1, _DWORD *a2);  /* 0x004da47c */
int __fastcall sub_604DA54C(int a1, _DWORD *a2);  /* 0x004da54c */
int __fastcall sub_604DA618(unsigned int a1);  /* 0x004da618 */
int __fastcall sub_604DA830(int a1, _DWORD *a2);  /* 0x004da830 */
int __fastcall sub_604DA900(int a1, _DWORD *a2);  /* 0x004da900 */
int __fastcall sub_604DA9CC(unsigned int a1);  /* 0x004da9cc */
int __fastcall sub_604DABE0(unsigned int a1);  /* 0x004dabe0 */
int __fastcall sub_604DADF8(int a1, _DWORD *a2);  /* 0x004dadf8 */
int __fastcall sub_604DAEC8(int a1, _DWORD *a2);  /* 0x004daec8 */
int __fastcall sub_604DAF94(unsigned int a1);  /* 0x004daf94 */
int __fastcall sub_604DB1AC(int a1, _DWORD *a2);  /* 0x004db1ac */
int __fastcall sub_604DB27C(int a1, _DWORD *a2);  /* 0x004db27c */
int __fastcall sub_604DB348(unsigned int a1);  /* 0x004db348 */
int __fastcall sub_604DB560(int a1, _DWORD *a2);  /* 0x004db560 */
int __fastcall sub_604DB630(int a1, _DWORD *a2);  /* 0x004db630 */
int __fastcall sub_604DB6FC(unsigned int a1);  /* 0x004db6fc */
int __fastcall sub_604DB914(int a1, _DWORD *a2);  /* 0x004db914 */
int __fastcall sub_604DB9E4(int a1, _DWORD *a2);  /* 0x004db9e4 */
int __fastcall sub_604DBAB0(unsigned int a1);  /* 0x004dbab0 */
int __fastcall sub_604DBCC8(int a1, _DWORD *a2);  /* 0x004dbcc8 */
int __fastcall sub_604DBD98(int a1, _DWORD *a2);  /* 0x004dbd98 */
int __fastcall sub_604DBE64(unsigned int a1);  /* 0x004dbe64 */
int __fastcall sub_604DC078(unsigned int a1);  /* 0x004dc078 */
int __fastcall sub_604DC290(int a1, _DWORD *a2);  /* 0x004dc290 */
int __fastcall sub_604DC360(int a1, _DWORD *a2);  /* 0x004dc360 */
int __fastcall sub_604DC42C(unsigned int a1);  /* 0x004dc42c */
int __fastcall sub_604DC644(int a1, _DWORD *a2);  /* 0x004dc644 */
int __fastcall sub_604DC714(int a1, _DWORD *a2);  /* 0x004dc714 */
int __fastcall sub_604DC7E0(int a1);  /* 0x004dc7e0 */
int __fastcall sub_604DC9F8(unsigned int a1);  /* 0x004dc9f8 */
int __fastcall sub_604DCC10(int a1, _DWORD *a2);  /* 0x004dcc10 */
int __fastcall sub_604DCCE0(int a1, _DWORD *a2);  /* 0x004dcce0 */
int __fastcall sub_604DCDAC(unsigned int a1);  /* 0x004dcdac */
int __fastcall sub_604DCFC0(int a1);  /* 0x004dcfc0 */
int __fastcall sub_604DD1DC(int a1, _DWORD *a2);  /* 0x004dd1dc */
int __fastcall sub_604DD2AC(int a1, _DWORD *a2);  /* 0x004dd2ac */
int __fastcall sub_604DD378(unsigned int a1);  /* 0x004dd378 */
int __fastcall sub_604DD590(int a1, _DWORD *a2);  /* 0x004dd590 */
int __fastcall sub_604DD660(int a1, _DWORD *a2);  /* 0x004dd660 */
int __fastcall sub_604DD72C(unsigned int a1);  /* 0x004dd72c */
int __fastcall sub_604DD940(unsigned int a1);  /* 0x004dd940 */
int __fastcall sub_604DDB58(int a1, _DWORD *a2);  /* 0x004ddb58 */
int __fastcall sub_604DDC28(int a1, _DWORD *a2);  /* 0x004ddc28 */
int __fastcall sub_604DDD08(int a1, int a2);  /* 0x004ddd08 */
int __fastcall sub_604DDD40(int a1, _DWORD *a2);  /* 0x004ddd40 */
int __fastcall sub_604DDD84(int a1, int a2);  /* 0x004ddd84 */
int __fastcall sub_604DDD90(int result, _DWORD *a2);  /* 0x004ddd90 */
int __fastcall sub_604DDDA0(int a1, int a2);  /* 0x004ddda0 */
int __fastcall sub_604DDDC8(int a1);  /* 0x004dddc8 */
int __fastcall sub_604DDDD0(int a1);  /* 0x004dddd0 */
int __fastcall sub_604DDE0C(int a1, int a2);  /* 0x004dde0c */
int __fastcall sub_604DDE44(int a1, _DWORD *a2);  /* 0x004dde44 */
int __fastcall sub_604DDE88(int a1, int a2);  /* 0x004dde88 */
int __fastcall sub_604DDE94(int result, _DWORD *a2);  /* 0x004dde94 */
int __fastcall sub_604DDEA4(int a1, int a2);  /* 0x004ddea4 */
int __fastcall sub_604DDECC(int a1);  /* 0x004ddecc */
int __fastcall sub_604DDED4(int a1);  /* 0x004dded4 */
int __fastcall sub_604DDF0C(int a1, int a2);  /* 0x004ddf0c */
int __fastcall sub_604DDF44(int a1, _DWORD *a2);  /* 0x004ddf44 */
int __fastcall sub_604DDF88(int a1, int a2);  /* 0x004ddf88 */
int __fastcall sub_604DDF94(int result, _DWORD *a2);  /* 0x004ddf94 */
int __fastcall sub_604DDFA4(int a1, int a2);  /* 0x004ddfa4 */
int __fastcall sub_604DDFCC(int a1);  /* 0x004ddfcc */
int __fastcall sub_604DDFD4(int a1);  /* 0x004ddfd4 */
int __fastcall sub_604DE00C(int a1, int a2);  /* 0x004de00c */
int __fastcall sub_604DE044(int a1, _DWORD *a2);  /* 0x004de044 */
int __fastcall sub_604DE088(int a1, int a2);  /* 0x004de088 */
int __fastcall sub_604DE094(int result, _DWORD *a2);  /* 0x004de094 */
int __fastcall sub_604DE0A4(int a1, int a2);  /* 0x004de0a4 */
int __fastcall sub_604DE0CC(int a1);  /* 0x004de0cc */
int __fastcall sub_604DE0D4(int a1);  /* 0x004de0d4 */
int __fastcall sub_604DE0FC(int result);  /* 0x004de0fc */
int __fastcall sub_604DE10C(int a1);  /* 0x004de10c */
int __fastcall sub_604DE124(int a1);  /* 0x004de124 */
int __fastcall sub_604DE170(int a1);  /* 0x004de170 */
int __fastcall sub_604DE1A8(int result);  /* 0x004de1a8 */
int __fastcall sub_604DE1B8(int result);  /* 0x004de1b8 */
int __fastcall sub_604DE1DC(int a1);  /* 0x004de1dc */
int __fastcall sub_604DE20C(int result);  /* 0x004de20c */
int __fastcall sub_604DE230(int result);  /* 0x004de230 */
int __fastcall sub_604DE240(int a1);  /* 0x004de240 */
int __fastcall sub_604DE36C(_DWORD *a1);  /* 0x004de36c */
int __fastcall sub_604DE39C(int a1);  /* 0x004de39c */
int __fastcall sub_604DE7AC(int a1);  /* 0x004de7ac */
int __fastcall sub_604DE7DC(int result, _DWORD *a2);  /* 0x004de7dc */
int __fastcall sub_604DE808(int a1, int a2);  /* 0x004de808 */
int __fastcall sub_604DE840(int a1, _DWORD *a2);  /* 0x004de840 */
int __fastcall sub_604DE884(int a1, int a2);  /* 0x004de884 */
int __fastcall sub_604DE890(int result, _DWORD *a2);  /* 0x004de890 */
int __fastcall sub_604DE8A0(int a1, int a2);  /* 0x004de8a0 */
int __fastcall sub_604DE8C8(int a1);  /* 0x004de8c8 */
int __fastcall sub_604DE8D0(int a1);  /* 0x004de8d0 */
int __fastcall sub_604DE8F8(int a1);  /* 0x004de8f8 */
int __fastcall sub_604DE958(int result, _DWORD *a2);  /* 0x004de958 */
int __fastcall sub_604DE988(_DWORD *a1);  /* 0x004de988 */
int __fastcall sub_604DE9B0(int a1);  /* 0x004de9b0 */
int __fastcall sub_604DEA08(int a1, char a2);  /* 0x004dea08 */
int __fastcall sub_604DEA24(_DWORD *a1);  /* 0x004dea24 */
int __fastcall sub_604DEB08(int a1);  /* 0x004deb08 */
int __fastcall sub_604DEBC0(_DWORD *a1);  /* 0x004debc0 */
int __fastcall sub_604DEBF0(int a1);  /* 0x004debf0 */
int __fastcall sub_604DEC98(int a1);  /* 0x004dec98 */
int __fastcall sub_604DECB0(int result);  /* 0x004decb0 */
int __fastcall sub_604DECEC(int result, _DWORD *a2);  /* 0x004decec */
int __fastcall sub_604DED04(int result);  /* 0x004ded04 */
int __fastcall sub_604DEDC4(int a1);  /* 0x004dedc4 */
int __fastcall sub_604DEFC0(int result);  /* 0x004defc0 */
int __fastcall sub_604DEFE4(int result);  /* 0x004defe4 */
int __fastcall sub_604DEFF4(int a1);  /* 0x004deff4 */
int __fastcall sub_604DF0E8(int a1);  /* 0x004df0e8 */
int __fastcall sub_604DF120(int result);  /* 0x004df120 */
int __fastcall sub_604DF130(int result);  /* 0x004df130 */
int __fastcall sub_604DF140(int result);  /* 0x004df140 */
int __fastcall sub_604DF174(int result);  /* 0x004df174 */
int __fastcall sub_604DF1CC(int a1);  /* 0x004df1cc */
int __fastcall sub_604DF3A4(int result);  /* 0x004df3a4 */
int __fastcall sub_604DF3C4(int a1);  /* 0x004df3c4 */
int __fastcall sub_604DF424(int a1);  /* 0x004df424 */
int __fastcall sub_604DF45C(int result);  /* 0x004df45c */
int __fastcall sub_604DF478(int result);  /* 0x004df478 */
int __fastcall sub_604DF490(int result);  /* 0x004df490 */
int __fastcall sub_604DF878(int a1);  /* 0x004df878 */
int __fastcall sub_604DF8B4(int a1);  /* 0x004df8b4 */
int __fastcall sub_604DF8EC(int result);  /* 0x004df8ec */
int __fastcall sub_604DF8FC(int a1);  /* 0x004df8fc */
int __fastcall sub_604DF918(int result);  /* 0x004df918 */
int __fastcall sub_604DF968(int result);  /* 0x004df968 */
int __fastcall sub_604DF99C(int result);  /* 0x004df99c */
int __fastcall sub_604DFB94(int result);  /* 0x004dfb94 */
int __fastcall sub_604DFBA0(int a1);  /* 0x004dfba0 */
int __fastcall SE_SYS_COMPLETE_MESSAGE_ref(int a1);  /* 0x004dfbb8 */
int __fastcall sub_604DFF28(int a1);  /* 0x004dff28 */
int __fastcall sub_604DFF60(int result);  /* 0x004dff60 */
int __fastcall sub_604DFF6C(int a1);  /* 0x004dff6c */
int __fastcall sub_604DFF8C(int a1);  /* 0x004dff8c */
int __fastcall sub_604DFFC8(int a1);  /* 0x004dffc8 */
int __fastcall sub_604DFFE4(int result);  /* 0x004dffe4 */
int __fastcall SE_SYS_DIALOGUE_OUT_ref(int a1);  /* 0x004e0008 */
int __fastcall sub_604E0048(int a1);  /* 0x004e0048 */
int __fastcall sub_604E0080(int result);  /* 0x004e0080 */
int __fastcall sub_604E008C(int a1);  /* 0x004e008c */
int __fastcall sub_604E00BC(int result);  /* 0x004e00bc */
int __fastcall sub_604E00E0(int result);  /* 0x004e00e0 */
int __fastcall sub_604E00F0(int a1);  /* 0x004e00f0 */
int __fastcall sub_604E024C(_DWORD *a1);  /* 0x004e024c */
int __fastcall sub_604E028C(int a1);  /* 0x004e028c */
int __fastcall sub_604E038C(int a1);  /* 0x004e038c */
int __fastcall sub_604E0514(int a1);  /* 0x004e0514 */
int __fastcall sub_604E0678(int a1);  /* 0x004e0678 */
int __fastcall sub_604E06B8(int result, _DWORD *a2);  /* 0x004e06b8 */
int __fastcall sub_604E06D0(int result, int a2, int a3, char a4, char a5, int a6);  /* 0x004e06d0 */
int __fastcall sub_604E06F8(int a1);  /* 0x004e06f8 */
int __fastcall sub_604E0B28(int a1, int a2);  /* 0x004e0b28 */
int __fastcall sub_604E0B60(int a1, _DWORD *a2);  /* 0x004e0b60 */
int __fastcall sub_604E0BA4(int a1, int a2);  /* 0x004e0ba4 */
int __fastcall sub_604E0BB0(int result, _DWORD *a2);  /* 0x004e0bb0 */
int __fastcall sub_604E0BC0(int a1, int a2);  /* 0x004e0bc0 */
int __fastcall sub_604E0BE8(int a1);  /* 0x004e0be8 */
int __fastcall sub_604E0BF0(int a1);  /* 0x004e0bf0 */
int __fastcall sub_604E0FE8(int result);  /* 0x004e0fe8 */
int __fastcall sub_604E0FF8(_DWORD *a1);  /* 0x004e0ff8 */
int __fastcall sub_604E1050(int a1);  /* 0x004e1050 */
int __fastcall sub_604E1084(int a1);  /* 0x004e1084 */
int __fastcall sub_604E10BC(int result);  /* 0x004e10bc */
int __fastcall sub_604E10CC(_DWORD *a1);  /* 0x004e10cc */
int __fastcall sub_604E1230(int a1);  /* 0x004e1230 */
int __fastcall sub_604E1360(int result);  /* 0x004e1360 */
int __fastcall sub_604E1474(int a1);  /* 0x004e1474 */
int __fastcall sub_604E14B0(int a1);  /* 0x004e14b0 */
int __fastcall sub_604E14E8(int a1);  /* 0x004e14e8 */
int __fastcall sub_604E159C(int a1);  /* 0x004e159c */
int __fastcall sub_604E17B8(_DWORD *a1);  /* 0x004e17b8 */
int __fastcall sub_604E1820(_DWORD *a1);  /* 0x004e1820 */
int __fastcall sub_604E1E10(int a1);  /* 0x004e1e10 */
int __fastcall sub_604E1E4C(int a1);  /* 0x004e1e4c */
int __fastcall sub_604E20C0(int result, _DWORD *a2);  /* 0x004e20c0 */
int __fastcall sub_604E20DC(int a1);  /* 0x004e20dc */
int __fastcall sub_604E2228(_DWORD *a1);  /* 0x004e2228 */
unsigned int __fastcall sub_604E254C(_DWORD *a1);  /* 0x004e254c */
int __fastcall sub_604E278C(int result, unsigned int a2, _DWORD *a3);  /* 0x004e278c */
unsigned int __fastcall sub_604E286C(_DWORD *a1, int a2, int a3, int a4);  /* 0x004e286c */
int __fastcall sub_604E29A8(_DWORD *a1);  /* 0x004e29a8 */
int __fastcall sub_604E29C4(int a1, int a2);  /* 0x004e29c4 */
int __fastcall sub_604E29FC(int a1, _DWORD *a2);  /* 0x004e29fc */
int __fastcall sub_604E2A40(int a1, int a2);  /* 0x004e2a40 */
int __fastcall sub_604E2A4C(int result, _DWORD *a2);  /* 0x004e2a4c */
int __fastcall sub_604E2A5C(int a1, int a2);  /* 0x004e2a5c */
int __fastcall sub_604E2A84(int a1);  /* 0x004e2a84 */
int __fastcall sub_604E2A8C(int a1);  /* 0x004e2a8c */
int __fastcall sub_604E2AB4(int a1);  /* 0x004e2ab4 */
int __fastcall sub_604E2C4C(int a1);  /* 0x004e2c4c */
int __fastcall sub_604E2CAC(int result);  /* 0x004e2cac */
int __fastcall sub_604E2CBC(int a1);  /* 0x004e2cbc */
int __fastcall sub_604E2CF0(int a1);  /* 0x004e2cf0 */
int __fastcall sub_604E2D28(int result);  /* 0x004e2d28 */
int __fastcall sub_604E2D38(int result);  /* 0x004e2d38 */
int __fastcall sub_604E2D64(int result);  /* 0x004e2d64 */
int __fastcall sub_604E2DC0(int result);  /* 0x004e2dc0 */
int __fastcall sub_604E2E0C(int a1);  /* 0x004e2e0c */
int __fastcall sub_604E2E5C(int a1);  /* 0x004e2e5c */
int __fastcall sub_604E2EC4(int result);  /* 0x004e2ec4 */
int __fastcall sub_604E2ED4(int a1);  /* 0x004e2ed4 */
int __fastcall sub_604E2F54(int a1);  /* 0x004e2f54 */
int __fastcall sub_604E2F90(int result);  /* 0x004e2f90 */
int __fastcall sub_604E2FA0(int result);  /* 0x004e2fa0 */
int __fastcall sub_604E2FD0(_DWORD *a1);  /* 0x004e2fd0 */
int __fastcall sub_604E3018(int a1);  /* 0x004e3018 */
int __fastcall sub_604E3234(int result);  /* 0x004e3234 */
int __fastcall sub_604E3244(int result);  /* 0x004e3244 */
int __fastcall sub_604E3278(int a1);  /* 0x004e3278 */
int __fastcall sub_604E3290(int result);  /* 0x004e3290 */
int __fastcall sub_604E32A0(int result);  /* 0x004e32a0 */
int __fastcall sub_604E32D0(_DWORD *a1);  /* 0x004e32d0 */
int __fastcall sub_604E3308(int result);  /* 0x004e3308 */
int __fastcall sub_604E3444(int result);  /* 0x004e3444 */
int __fastcall sub_604E3454(int result);  /* 0x004e3454 */
int __fastcall sub_604E3484(int result);  /* 0x004e3484 */
int __fastcall sub_604E34D0(int a1);  /* 0x004e34d0 */
int __fastcall sub_604E3508(int a1);  /* 0x004e3508 */
int __fastcall sub_604E3544(int result);  /* 0x004e3544 */
int __fastcall sub_604E3564(int a1);  /* 0x004e3564 */
int __fastcall sub_604E3770(_DWORD *a1);  /* 0x004e3770 */
int __fastcall sub_604E3808(int a1);  /* 0x004e3808 */
int __fastcall sub_604E43B0(int a1);  /* 0x004e43b0 */
int __fastcall sub_604E4418(int result);  /* 0x004e4418 */
int __fastcall sub_604E46C4(int a1, _DWORD *a2);  /* 0x004e46c4 */
int __fastcall sub_604E4748(int a1, int a2);  /* 0x004e4748 */
int __fastcall sub_604E4780(int a1, _DWORD *a2);  /* 0x004e4780 */
int __fastcall sub_604E47C4(int a1, int a2);  /* 0x004e47c4 */
int __fastcall sub_604E47D0(int result, _DWORD *a2);  /* 0x004e47d0 */
int __fastcall sub_604E47E0(int a1, int a2);  /* 0x004e47e0 */
int __fastcall sub_604E4808(int a1);  /* 0x004e4808 */
int __fastcall sub_604E4810(int a1);  /* 0x004e4810 */
int __fastcall sub_604E4844(int a1);  /* 0x004e4844 */
int __fastcall sub_604E48CC(int a1);  /* 0x004e48cc */
int __fastcall sub_604E4C7C(int a1);  /* 0x004e4c7c */
int __fastcall sub_604E4CC8(int *a1);  /* 0x004e4cc8 */
int __fastcall SE_SYS_STAR_COIN_PAY_ref(_DWORD *a1);  /* 0x004e4e04 */
int __fastcall sub_604E4F04(int a1);  /* 0x004e4f04 */
int __fastcall sub_604E4FB4(int a1);  /* 0x004e4fb4 */
int __fastcall sub_604E5030(int a1);  /* 0x004e5030 */
int __fastcall sub_604E5148(int a1);  /* 0x004e5148 */
int __fastcall sub_604E5224(int a1);  /* 0x004e5224 */
int __fastcall sub_604E52B8(int a1);  /* 0x004e52b8 */
int __fastcall sub_604E5554(_DWORD *a1);  /* 0x004e5554 */
int __fastcall sub_604E5788(int a1);  /* 0x004e5788 */
int __fastcall sub_604E592C(int a1);  /* 0x004e592c */
int __fastcall sub_604E5CC0(_DWORD *a1);  /* 0x004e5cc0 */
int __fastcall sub_604E5DFC(int a1);  /* 0x004e5dfc */
int __fastcall sub_604E5F54(int a1);  /* 0x004e5f54 */
int __fastcall sub_604E5FE0(int a1);  /* 0x004e5fe0 */
int __fastcall sub_604E60E8(int a1);  /* 0x004e60e8 */
int __fastcall sub_604E60F4(_DWORD *a1);  /* 0x004e60f4 */
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
int __fastcall sub_604E7F64(int a1, int a2);  /* 0x004e7f64 */
int __fastcall sub_604E7F9C(int a1, _DWORD *a2);  /* 0x004e7f9c */
int __fastcall sub_604E7FE0(int a1, int a2);  /* 0x004e7fe0 */
int __fastcall sub_604E7FEC(int result, _DWORD *a2);  /* 0x004e7fec */
int __fastcall sub_604E7FFC(int a1, int a2);  /* 0x004e7ffc */
int __fastcall sub_604E8024(int a1);  /* 0x004e8024 */
int __fastcall sub_604E802C(int a1);  /* 0x004e802c */
void __fastcall sub_604E8054(struct sead_IDisposer *a1);  /* 0x004e8054 */
int __fastcall sub_604E8058(struct sead_IDisposer *a1);  /* 0x004e8058 */
int __fastcall sub_604E8710(int a1, _DWORD *a2);  /* 0x004e8710 */
int __fastcall GameScene_Coin_00_ref(int a1);  /* 0x004e8748 */
unsigned int __fastcall sub_604E87E4(int a1);  /* 0x004e87e4 */
int __fastcall sub_604E8830(int a1);  /* 0x004e8830 */
int __fastcall sub_604E8C6C(int a1);  /* 0x004e8c6c */
int __fastcall sub_604E90B8(int a1, int a2);  /* 0x004e90b8 */
int __fastcall sub_604E9298(int a1, unsigned int a2);  /* 0x004e9298 */
int __fastcall sub_604E9478(int result);  /* 0x004e9478 */
void __fastcall sub_604E9590(int a1);  /* 0x004e9590 */
int __fastcall sub_604E9610(int a1);  /* 0x004e9610 */
int __fastcall sub_604E96C8(int a1);  /* 0x004e96c8 */
int __fastcall sub_604E9778(int a1);  /* 0x004e9778 */
int __fastcall sub_604E9794(int result);  /* 0x004e9794 */
int __fastcall sub_604E97D8(int a1);  /* 0x004e97d8 */
int __fastcall sub_604E980C(int a1);  /* 0x004e980c */
int __fastcall G_CoinLost_ref(_DWORD *a1);  /* 0x004e98ac */
int __fastcall sub_604E9A80(int a1);  /* 0x004e9a80 */
int __fastcall sub_604E9AC0(int a1);  /* 0x004e9ac0 */
int __fastcall sub_604E9B4C(int a1);  /* 0x004e9b4c */
int __fastcall sub_604E9B84(int a1);  /* 0x004e9b84 */
int __fastcall sub_604E9BC4(_DWORD *a1);  /* 0x004e9bc4 */
int __fastcall sub_604E9BD0(_DWORD *a1);  /* 0x004e9bd0 */
unsigned int __fastcall G_EnemyLost_ref(int *a1);  /* 0x004e9c3c */
int __fastcall sub_604E9E08(int a1);  /* 0x004e9e08 */
int __fastcall sub_604E9E48(int a1);  /* 0x004e9e48 */
int __fastcall sub_604EA064(int a1);  /* 0x004ea064 */
int __fastcall sub_604EA0A0(int a1);  /* 0x004ea0a0 */
void __fastcall sub_604EA0DC(int a1);  /* 0x004ea0dc */
int __fastcall sub_604EA114(int a1);  /* 0x004ea114 */
int __fastcall sub_604EA3C8(int a1);  /* 0x004ea3c8 */
int __fastcall sub_604EA520(int a1);  /* 0x004ea520 */
int __fastcall sub_604EA648(int a1);  /* 0x004ea648 */
int __fastcall sub_604EA67C(int a1);  /* 0x004ea67c */
int __fastcall sub_604EB030(int a1);  /* 0x004eb030 */
int __fastcall sub_604EB0E4(_DWORD *a1, int a2);  /* 0x004eb0e4 */
int __fastcall sub_604EB2FC(_DWORD *a1);  /* 0x004eb2fc */
int __fastcall sub_604EB37C(int a1, int a2);  /* 0x004eb37c */
int __fastcall sub_604EB3B4(int a1, _DWORD *a2);  /* 0x004eb3b4 */
int __fastcall sub_604EB3F8(int a1, int a2);  /* 0x004eb3f8 */
int __fastcall sub_604EB404(int result, _DWORD *a2);  /* 0x004eb404 */
int __fastcall sub_604EB414(int a1, int a2);  /* 0x004eb414 */
int __fastcall sub_604EB43C(int a1);  /* 0x004eb43c */
int __fastcall sub_604EB444(int a1);  /* 0x004eb444 */
int __fastcall sub_604EB478(int result);  /* 0x004eb478 */
int __fastcall sub_604EB488(int a1);  /* 0x004eb488 */
int __fastcall sub_604EB49C(int result);  /* 0x004eb49c */
int __fastcall sub_604EB4AC(_DWORD *a1);  /* 0x004eb4ac */
int __fastcall sub_604EB578(int result);  /* 0x004eb578 */
int __fastcall sub_604EB5B8(int a1);  /* 0x004eb5b8 */
int __fastcall sub_604EB65C(_DWORD *a1);  /* 0x004eb65c */
int __fastcall sub_604EB7FC(int a1);  /* 0x004eb7fc */
int __fastcall sub_604EBC10(int a1);  /* 0x004ebc10 */
int __fastcall sub_604EBDE0(int a1);  /* 0x004ebde0 */
int __fastcall sub_604EBE38(int a1);  /* 0x004ebe38 */
int __fastcall sub_604EC910(int a1, signed int a2, int a3, int a4);  /* 0x004ec910 */
int __fastcall sub_604ECAA8(_DWORD *a1, signed int a2);  /* 0x004ecaa8 */
int __fastcall sub_604ECC44(_DWORD *a1);  /* 0x004ecc44 */
int __fastcall sub_604ECDE4(int a1);  /* 0x004ecde4 */
int __fastcall sub_604ECEA4(_DWORD *a1);  /* 0x004ecea4 */
int __fastcall sub_604ECF80(int result, _DWORD *a2);  /* 0x004ecf80 */
int __fastcall sub_604ECFA0(int result);  /* 0x004ecfa0 */
int __fastcall sub_604ECFC4(int a1, unsigned int a2);  /* 0x004ecfc4 */
int __fastcall sub_604ED028(int a1);  /* 0x004ed028 */
int __fastcall sub_604ED16C(int a1, int a2);  /* 0x004ed16c */
int __fastcall sub_604ED1A4(int a1, _DWORD *a2);  /* 0x004ed1a4 */
int __fastcall sub_604ED1E8(int a1, int a2);  /* 0x004ed1e8 */
int __fastcall sub_604ED1F4(int result, _DWORD *a2);  /* 0x004ed1f4 */
int __fastcall sub_604ED204(int a1, int a2);  /* 0x004ed204 */
int __fastcall sub_604ED22C(int a1);  /* 0x004ed22c */
int __fastcall sub_604ED234(int a1);  /* 0x004ed234 */
void __fastcall sub_604ED418(struct sead_IDisposer *a1);  /* 0x004ed418 */
void __fastcall sub_604ED41C(struct sead_IDisposer *a1);  /* 0x004ed41c */
int __fastcall sub_604ED420(_DWORD *a1, int a2, _DWORD *a3);  /* 0x004ed420 */
int __fastcall sub_604ED5EC(int a1);  /* 0x004ed5ec */
int __fastcall sub_604ED658(int a1, int a2, int a3);  /* 0x004ed658 */
int __fastcall sub_604ED694(int a1, unsigned int a2);  /* 0x004ed694 */
int __fastcall sub_604ED78C(int a1);  /* 0x004ed78c */
int __fastcall sub_604ED7A0(int a1, int a2);  /* 0x004ed7a0 */
int __fastcall sub_604ED800(int a1, int a2);  /* 0x004ed800 */
int __fastcall sub_604ED860(struct sead_IDisposer *a1);  /* 0x004ed860 */
int __fastcall sub_604ED8D0(_DWORD *a1, int a2);  /* 0x004ed8d0 */
int __fastcall sub_604ED9B4(_DWORD *a1);  /* 0x004ed9b4 */
int __fastcall sub_604ED9CC(int a1, int a2);  /* 0x004ed9cc */
int __fastcall sub_604EDA20(int a1);  /* 0x004eda20 */
int __fastcall sub_604EDA5C(int a1);  /* 0x004eda5c */
int __fastcall SE_SYS_NEW_OSHIRASE_ref(int a1);  /* 0x004eda9c */
int __fastcall sub_604EDB18(int a1);  /* 0x004edb18 */
unsigned int __fastcall sub_604EDB54(int a1);  /* 0x004edb54 */
int __fastcall sub_604EDB8C(int a1);  /* 0x004edb8c */
int __fastcall sub_604EDBC4(int a1);  /* 0x004edbc4 */
int __fastcall sub_604EDC20(int result);  /* 0x004edc20 */
int __fastcall sub_604EDC30(int a1);  /* 0x004edc30 */
int __fastcall sub_604EDC64(int a1);  /* 0x004edc64 */
int __fastcall sub_604EDC80(int a1);  /* 0x004edc80 */
void __fastcall sub_604EDCB8(int a1);  /* 0x004edcb8 */
int __fastcall sub_604EDCD8(int a1);  /* 0x004edcd8 */
int __fastcall sub_604EDDFC(int a1);  /* 0x004eddfc */
int __fastcall sub_604EDE4C(int a1);  /* 0x004ede4c */
int __fastcall sub_604EDEA0(int a1);  /* 0x004edea0 */
int __fastcall sub_604EDF98(_DWORD *a1);  /* 0x004edf98 */
int __fastcall sub_604EE140(int a1);  /* 0x004ee140 */
int __fastcall sub_604EE17C(int result, _DWORD *a2);  /* 0x004ee17c */
int __fastcall sub_604EE198(int a1);  /* 0x004ee198 */
int __fastcall sub_604EE4B0(int a1);  /* 0x004ee4b0 */
int __fastcall sub_604EE5C0(int a1, int a2);  /* 0x004ee5c0 */
int __fastcall sub_604EE5F8(int a1, _DWORD *a2);  /* 0x004ee5f8 */
int __fastcall sub_604EE63C(int a1, int a2);  /* 0x004ee63c */
int __fastcall sub_604EE648(int result, _DWORD *a2);  /* 0x004ee648 */
int __fastcall sub_604EE658(int a1, int a2);  /* 0x004ee658 */
int __fastcall sub_604EE680(int a1);  /* 0x004ee680 */
int __fastcall sub_604EE688(int a1);  /* 0x004ee688 */
int __fastcall sub_604EE6B4(int result);  /* 0x004ee6b4 */
int __fastcall sub_604EE6EC(int a1);  /* 0x004ee6ec */
int __fastcall sub_604EE7DC(int result);  /* 0x004ee7dc */
int __fastcall sub_604EE7F0(int a1);  /* 0x004ee7f0 */
int __fastcall sub_604EE80C(int a1);  /* 0x004ee80c */
int __fastcall sub_604EE8C8(int a1);  /* 0x004ee8c8 */
int __fastcall sub_604EE968(int result);  /* 0x004ee968 */
int __fastcall sub_604EEC38(int a1);  /* 0x004eec38 */
int __fastcall sub_604EEEE4(int a1);  /* 0x004eeee4 */
int __fastcall sub_604EEEFC(int a1);  /* 0x004eeefc */
int __fastcall sub_604EEF18(_BYTE *a1);  /* 0x004eef18 */
int __fastcall sub_604EF074(int result);  /* 0x004ef074 */
int __fastcall SE_PLY_ref_2(int a1);  /* 0x004ef0a0 */
int __fastcall sub_604EF268(int a1);  /* 0x004ef268 */
int __fastcall sub_604EF2D8(int result);  /* 0x004ef2d8 */
int __fastcall sub_604EF2EC(int a1);  /* 0x004ef2ec */
int __fastcall sub_604EF33C(_DWORD *a1);  /* 0x004ef33c */
int __fastcall sub_604EF4C4(int a1);  /* 0x004ef4c4 */
int __fastcall sub_604EF4F4(int result);  /* 0x004ef4f4 */
int __fastcall sub_604EF5B4(_DWORD *a1);  /* 0x004ef5b4 */
int __fastcall sub_604EF6E8(int result);  /* 0x004ef6e8 */
int __fastcall sub_604EF710(_DWORD *a1);  /* 0x004ef710 */
signed int __fastcall ItemList_InvalidItem_ref(int a1);  /* 0x004ef81c */
int __fastcall sub_604EFB64(int a1);  /* 0x004efb64 */
int __fastcall sub_604EFBAC(int result);  /* 0x004efbac */
int __fastcall sub_604EFBE0(int a1);  /* 0x004efbe0 */
int __fastcall sub_604EFC00(int a1);  /* 0x004efc00 */
int __fastcall sub_604EFC40(int a1);  /* 0x004efc40 */
int __fastcall sub_604EFECC(int result);  /* 0x004efecc */
int __fastcall sub_604EFEF8(int result);  /* 0x004efef8 */
int __fastcall sub_604EFFB0(int result);  /* 0x004effb0 */
void __fastcall sub_604EFFE8(int a1);  /* 0x004effe8 */
int __fastcall sub_604F00AC(int result);  /* 0x004f00ac */
int __fastcall sub_604F00D8(int a1);  /* 0x004f00d8 */
int __fastcall sub_604F03B0(int a1);  /* 0x004f03b0 */
int __fastcall sub_604F0BCC(_DWORD *a1);  /* 0x004f0bcc */
int __fastcall sub_604F0BDC(int a1);  /* 0x004f0bdc */
int __fastcall sub_604F1004(_DWORD *a1);  /* 0x004f1004 */
int __fastcall sub_604F127C(_DWORD *a1);  /* 0x004f127c */
int __fastcall sub_604F145C(int a1);  /* 0x004f145c */
int __fastcall sub_604F1774(int a1);  /* 0x004f1774 */
int __fastcall sub_604F1918(int a1);  /* 0x004f1918 */
int __fastcall sub_604F1B18(int a1);  /* 0x004f1b18 */
unsigned int __fastcall sub_604F1C08(int a1);  /* 0x004f1c08 */
int __fastcall sub_604F1F98(int result, _DWORD *a2);  /* 0x004f1f98 */
int __fastcall sub_604F1FBC(int a1);  /* 0x004f1fbc */
int __fastcall sub_604F293C(int a1);  /* 0x004f293c */
int __fastcall sub_604F2F08(int a1, unsigned int a2, int a3);  /* 0x004f2f08 */
bool __fastcall sub_604F31CC(int a1, int a2);  /* 0x004f31cc */
int __fastcall sub_604F377C(int a1, int a2, int a3);  /* 0x004f377c */
int __fastcall sub_604F39D8(int a1);  /* 0x004f39d8 */
int __fastcall sub_604F3B84(int a1);  /* 0x004f3b84 */
int __fastcall sub_604F3CC4(int a1);  /* 0x004f3cc4 */
int __fastcall sub_604F3E64(int a1, int a2);  /* 0x004f3e64 */
int __fastcall sub_604F3E9C(int a1, _DWORD *a2);  /* 0x004f3e9c */
int __fastcall sub_604F3EE0(int a1, int a2);  /* 0x004f3ee0 */
int __fastcall sub_604F3EEC(int result, _DWORD *a2);  /* 0x004f3eec */
int __fastcall sub_604F3EFC(int a1, int a2);  /* 0x004f3efc */
int __fastcall sub_604F3F24(int a1);  /* 0x004f3f24 */
int __fastcall sub_604F3F2C(int a1);  /* 0x004f3f2c */
int __fastcall sub_604F3F60(int a1);  /* 0x004f3f60 */
int __fastcall sub_604F4010(int a1);  /* 0x004f4010 */
int __fastcall sub_604F404C(int a1);  /* 0x004f404c */
int __fastcall sub_604F4080(int a1);  /* 0x004f4080 */
int __fastcall sub_604F4108(int result);  /* 0x004f4108 */
int __fastcall sub_604F4118(int result);  /* 0x004f4118 */
int __fastcall sub_604F4148(int a1);  /* 0x004f4148 */
int __fastcall sub_604F4194(int a1);  /* 0x004f4194 */
void __fastcall sub_604F41CC(int a1);  /* 0x004f41cc */
int __fastcall sub_604F41D0(int a1);  /* 0x004f41d0 */
int __fastcall sub_604F4280(int a1);  /* 0x004f4280 */
int __fastcall sub_604F42E0(int result);  /* 0x004f42e0 */
int __fastcall sub_604F42F0(int a1);  /* 0x004f42f0 */
int __fastcall sub_604F4378(int a1);  /* 0x004f4378 */
int __fastcall SE_SYS_CS_NEW_ITEM_WINDOW_ADD_ITEM_ref(_DWORD *a1);  /* 0x004f43ac */
int __fastcall sub_604F451C(int result);  /* 0x004f451c */
int __fastcall sub_604F452C(int result);  /* 0x004f452c */
int __fastcall sub_604F455C(int a1);  /* 0x004f455c */
int __fastcall sub_604F4578(int a1);  /* 0x004f4578 */
int __fastcall sub_604F45B0(int result);  /* 0x004f45b0 */
int __fastcall sub_604F45C0(int a1);  /* 0x004f45c0 */
int __fastcall sub_604F4D20(_DWORD *a1);  /* 0x004f4d20 */
int __fastcall sub_604F4DB8(_DWORD *a1);  /* 0x004f4db8 */
int __fastcall sub_604F4E20(int a1);  /* 0x004f4e20 */
int __fastcall sub_604F4E98(int a1);  /* 0x004f4e98 */
int __fastcall sub_604F4F0C(int a1);  /* 0x004f4f0c */
int __fastcall sub_604F4F70(int a1);  /* 0x004f4f70 */
int __fastcall sub_604F4FE4(int a1);  /* 0x004f4fe4 */
int __fastcall sub_604F507C(_DWORD *a1);  /* 0x004f507c */
int __fastcall sub_604F51FC(int a1);  /* 0x004f51fc */
int __fastcall sub_604F5264(int a1);  /* 0x004f5264 */
int __fastcall sub_604F529C(int a1);  /* 0x004f529c */
int __fastcall sub_604F535C(int a1);  /* 0x004f535c */
int __fastcall sub_604F53B4(int a1);  /* 0x004f53b4 */
int __fastcall sub_604F5410(int a1);  /* 0x004f5410 */
int __fastcall sub_604F5448(int a1);  /* 0x004f5448 */
int __fastcall sub_604F55F0(int a1);  /* 0x004f55f0 */
int __fastcall sub_604F5690(int a1);  /* 0x004f5690 */
int __fastcall sub_604F5730(int a1);  /* 0x004f5730 */
int __fastcall sub_604F5A4C(int a1);  /* 0x004f5a4c */
unsigned int __fastcall sub_604F6738(int a1);  /* 0x004f6738 */
int __fastcall sub_604F68D8(int a1);  /* 0x004f68d8 */
int __fastcall sub_604F6AF0(int a1);  /* 0x004f6af0 */
int __fastcall sub_604F6B30(int result, _DWORD *a2);  /* 0x004f6b30 */
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
void __fastcall sub_604F8328(struct sead_IDisposer *a1);  /* 0x004f8328 */
int __fastcall sub_604F832C(int a1);  /* 0x004f832c */
int __fastcall sub_604F83CC(int a1, int a2);  /* 0x004f83cc */
int __fastcall sub_604F8C4C(_DWORD *a1);  /* 0x004f8c4c */
int __fastcall sub_604F8D20(int a1);  /* 0x004f8d20 */
int __fastcall sub_604F8E9C(int a1);  /* 0x004f8e9c */
int __fastcall sub_604F9090(int a1);  /* 0x004f9090 */
int __fastcall sub_604F92D4(int a1);  /* 0x004f92d4 */
int __fastcall sub_604F9430(_DWORD *a1);  /* 0x004f9430 */
int __fastcall sub_604F9570(int a1, int a2);  /* 0x004f9570 */
int __fastcall sub_604F95A8(int a1, _DWORD *a2);  /* 0x004f95a8 */
int __fastcall sub_604F95EC(int a1, int a2);  /* 0x004f95ec */
int __fastcall sub_604F95F8(int result, _DWORD *a2);  /* 0x004f95f8 */
int __fastcall sub_604F9608(int a1, int a2);  /* 0x004f9608 */
int __fastcall sub_604F9630(int a1);  /* 0x004f9630 */
int __fastcall sub_604F9638(int a1);  /* 0x004f9638 */
int __fastcall sub_604F9660(struct sead_IDisposer *a1);  /* 0x004f9660 */
int __fastcall SE_SYS_KO_DIALOGUE_IN_ref(int a1);  /* 0x004f967c */
int __fastcall sub_604F9898(int a1);  /* 0x004f9898 */
int __fastcall sub_604F98D8(int a1);  /* 0x004f98d8 */
int __fastcall sub_604F98F4(int a1);  /* 0x004f98f4 */
int __fastcall sub_604F999C(int a1);  /* 0x004f999c */
int __fastcall sub_604F99D0(int a1);  /* 0x004f99d0 */
int __fastcall SE_MG_CMN_WIN_ref(int a1);  /* 0x004f9a24 */
int __fastcall sub_604F9C8C(int a1);  /* 0x004f9c8c */
int __fastcall sub_604F9CBC(int a1);  /* 0x004f9cbc */
int __fastcall sub_604F9D0C(int a1);  /* 0x004f9d0c */
int __fastcall sub_604F9D3C(int a1);  /* 0x004f9d3c */
void __fastcall sub_604F9D7C(int a1);  /* 0x004f9d7c */
int __fastcall sub_604F9DA4(int a1);  /* 0x004f9da4 */
int __fastcall sub_604F9DD4(int a1);  /* 0x004f9dd4 */
int __fastcall sub_604F9E24(int a1);  /* 0x004f9e24 */
int __fastcall sub_604F9E8C(int a1);  /* 0x004f9e8c */
int __fastcall sub_604F9ED0(int *a1);  /* 0x004f9ed0 */
int __fastcall sub_604F9FA0(int a1);  /* 0x004f9fa0 */
int __fastcall sub_604F9FF4(int a1);  /* 0x004f9ff4 */
int __fastcall sub_604FA1A8(int a1);  /* 0x004fa1a8 */
int __fastcall sub_604FA1F0(int a1);  /* 0x004fa1f0 */
int __fastcall sub_604FA23C(int a1);  /* 0x004fa23c */
int __fastcall sub_604FA344(int a1);  /* 0x004fa344 */
int __fastcall sub_604FA500(_DWORD *a1);  /* 0x004fa500 */
int __fastcall sub_604FA62C(_DWORD *a1);  /* 0x004fa62c */
int __fastcall sub_604FAC1C(int a1);  /* 0x004fac1c */
int __fastcall sub_604FAC64(int result, _DWORD *a2);  /* 0x004fac64 */
int __fastcall sub_604FAC7C(int a1, int a2, int a3);  /* 0x004fac7c */
int __fastcall sub_604FAD30(int a1, int a2);  /* 0x004fad30 */
int __fastcall sub_604FAD68(int a1, _DWORD *a2);  /* 0x004fad68 */
int __fastcall sub_604FADAC(int a1, int a2);  /* 0x004fadac */
int __fastcall sub_604FADB8(int result, _DWORD *a2);  /* 0x004fadb8 */
int __fastcall sub_604FADC8(int a1, int a2);  /* 0x004fadc8 */
int __fastcall sub_604FADF0(int a1);  /* 0x004fadf0 */
int __fastcall sub_604FADF8(int a1);  /* 0x004fadf8 */
int __fastcall sub_604FAE20(int a1);  /* 0x004fae20 */
int __fastcall sub_604FAE70(int a1);  /* 0x004fae70 */
int __fastcall sub_604FB06C(int a1);  /* 0x004fb06c */
int __fastcall sub_604FB384(int result);  /* 0x004fb384 */
int __fastcall sub_604FB3B8(int result);  /* 0x004fb3b8 */
int __fastcall sub_604FB3D0(int a1);  /* 0x004fb3d0 */
unsigned int __fastcall sub_604FB454(int a1);  /* 0x004fb454 */
int __fastcall sub_604FBA7C(int a1);  /* 0x004fba7c */
int __fastcall sub_604FBACC(int result);  /* 0x004fbacc */
int __fastcall sub_604FBAF4(int a1);  /* 0x004fbaf4 */
int __fastcall sub_604FBDD8(int a1);  /* 0x004fbdd8 */
int __fastcall sub_604FBE14(int result);  /* 0x004fbe14 */
int __fastcall sub_604FC104(int a1);  /* 0x004fc104 */
int __fastcall sub_604FC1D4(int result);  /* 0x004fc1d4 */
int __fastcall sub_604FC1F8(int result);  /* 0x004fc1f8 */
int __fastcall sub_604FC208(int a1);  /* 0x004fc208 */
int __fastcall sub_604FC238(int a1);  /* 0x004fc238 */
int __fastcall sub_604FC2B4(int a1);  /* 0x004fc2b4 */
int __fastcall sub_604FC580(_DWORD *a1);  /* 0x004fc580 */
int __fastcall sub_604FC590(int a1, unsigned int a2);  /* 0x004fc590 */
int __fastcall sub_604FD19C(int a1);  /* 0x004fd19c */
int __fastcall sub_604FD928(int a1, unsigned int a2, int a3, char a4);  /* 0x004fd928 */
int __fastcall sub_604FDA70(int result, _DWORD *a2);  /* 0x004fda70 */
int __fastcall sub_604FDA90(int a1);  /* 0x004fda90 */
int __fastcall sub_604FDD28(int result, unsigned int a2);  /* 0x004fdd28 */
int __fastcall sub_604FDEF8(int result, int a2);  /* 0x004fdef8 */
unsigned int __fastcall sub_604FE050(int a1, int a2);  /* 0x004fe050 */
int __fastcall sub_604FE30C(int result);  /* 0x004fe30c */
int __fastcall sub_604FE33C(int a1, int a2);  /* 0x004fe33c */
int __fastcall sub_604FE374(int a1, _DWORD *a2);  /* 0x004fe374 */
int __fastcall sub_604FE3B8(int a1, int a2);  /* 0x004fe3b8 */
int __fastcall sub_604FE3C4(int result, _DWORD *a2);  /* 0x004fe3c4 */
int __fastcall sub_604FE3D4(int a1, int a2);  /* 0x004fe3d4 */
int __fastcall sub_604FE3FC(int a1);  /* 0x004fe3fc */
int __fastcall sub_604FE404(int a1);  /* 0x004fe404 */
int __fastcall sub_604FE4A0(struct sead_IDisposer *a1);  /* 0x004fe4a0 */
int __fastcall sub_604FE5C0(int a1);  /* 0x004fe5c0 */
int __fastcall sub_604FE678(_DWORD *a1);  /* 0x004fe678 */
int __fastcall sub_604FE6A8(int a1);  /* 0x004fe6a8 */
int __fastcall sub_604FE740(int result);  /* 0x004fe740 */
int __fastcall sub_604FE74C(int result);  /* 0x004fe74c */
int __fastcall sub_604FE788(int result, _DWORD *a2);  /* 0x004fe788 */
int __fastcall sub_604FE7A0(int a1);  /* 0x004fe7a0 */
int __fastcall sub_604FE858(_DWORD *a1);  /* 0x004fe858 */
int __fastcall sub_604FE914(int a1);  /* 0x004fe914 */
int __fastcall STRM_BGM_NX_STAFF_CREDIT_ref(int a1);  /* 0x004fe92c */
int __fastcall sub_604FE9EC(int a1);  /* 0x004fe9ec */
int __fastcall sub_604FEAD0(int result);  /* 0x004fead0 */
int __fastcall sub_604FEB08(int a1);  /* 0x004feb08 */
int __fastcall sub_604FEBD0(int a1);  /* 0x004febd0 */
int __fastcall sub_604FEC60(int a1);  /* 0x004fec60 */
int __fastcall sub_604FED44(int a1);  /* 0x004fed44 */
int __fastcall sub_604FEEFC(int a1);  /* 0x004feefc */
int __fastcall sub_604FF028(_DWORD *a1);  /* 0x004ff028 */
int __fastcall sub_604FF248(_DWORD *a1);  /* 0x004ff248 */
int __fastcall sub_604FF638(int a1);  /* 0x004ff638 */
int __fastcall sub_604FF7EC(_DWORD *a1);  /* 0x004ff7ec */
int __fastcall sub_604FFB50(int a1);  /* 0x004ffb50 */
int __fastcall sub_604FFBF4(int result);  /* 0x004ffbf4 */
int __fastcall sub_604FFD54(int a1);  /* 0x004ffd54 */
int __fastcall sub_604FFE4C(int a1, int a2);  /* 0x004ffe4c */
int __fastcall sub_604FFE84(int a1, _DWORD *a2);  /* 0x004ffe84 */
int __fastcall sub_604FFEC8(int a1, int a2);  /* 0x004ffec8 */
int __fastcall sub_604FFED4(int result, _DWORD *a2);  /* 0x004ffed4 */
int __fastcall sub_604FFEE4(int a1, int a2);  /* 0x004ffee4 */
int __fastcall sub_604FFF0C(int a1);  /* 0x004fff0c */
int __fastcall sub_604FFF14(int a1);  /* 0x004fff14 */
int __fastcall sub_605001B0(int a1);  /* 0x005001b0 */
int __fastcall sub_605001F4(int a1);  /* 0x005001f4 */
int __fastcall sub_60500344(int a1);  /* 0x00500344 */
int __fastcall sub_60500380(int result);  /* 0x00500380 */
int __fastcall sub_6050039C(int a1);  /* 0x0050039c */
int __fastcall sub_60500550(int result);  /* 0x00500550 */
int __fastcall sub_605005B4(int a1);  /* 0x005005b4 */
int __fastcall sub_605005E8(int result);  /* 0x005005e8 */
int __fastcall sub_6050060C(int a1);  /* 0x0050060c */
int __fastcall sub_60500658(int result);  /* 0x00500658 */
int __fastcall sub_60500670(int a1);  /* 0x00500670 */
int __fastcall sub_60500898(_DWORD *a1);  /* 0x00500898 */
int __fastcall sub_6050090C(int a1);  /* 0x0050090c */
int __fastcall sub_605009F0(int a1);  /* 0x005009f0 */
int __fastcall sub_60500BDC(int a1);  /* 0x00500bdc */
int __fastcall sub_6050103C(int a1);  /* 0x0050103c */
int __fastcall sub_6050120C(int a1, int a2);  /* 0x0050120c */
int __fastcall sub_60501260(int a1);  /* 0x00501260 */
int __fastcall sub_605013AC(int a1);  /* 0x005013ac */
int __fastcall sub_60501518(int a1, int a2);  /* 0x00501518 */
int __fastcall sub_60501550(int a1, _DWORD *a2);  /* 0x00501550 */
int __fastcall sub_60501594(int a1, int a2);  /* 0x00501594 */
int __fastcall sub_605015A0(int result, _DWORD *a2);  /* 0x005015a0 */
int __fastcall sub_605015B0(int a1, int a2);  /* 0x005015b0 */
int __fastcall sub_605015D8(int a1);  /* 0x005015d8 */
int __fastcall sub_605015E0(int a1);  /* 0x005015e0 */
int __fastcall sub_605018F4(int a1);  /* 0x005018f4 */
int __fastcall sub_60501908(int a1);  /* 0x00501908 */
int __fastcall sub_60501A10(int result);  /* 0x00501a10 */
int __fastcall sub_60501A1C(int a1);  /* 0x00501a1c */
int __fastcall sub_60501A9C(int result);  /* 0x00501a9c */
int __fastcall sub_60501AAC(int result);  /* 0x00501aac */
int __fastcall sub_60501AE8(int a1);  /* 0x00501ae8 */
int __fastcall sub_60501BF4(int a1);  /* 0x00501bf4 */
int __fastcall sub_60501C10(int a1);  /* 0x00501c10 */
int __fastcall sub_60501CA0(int a1);  /* 0x00501ca0 */
int __fastcall sub_60501D28(int result, int a2, int a3, int a4);  /* 0x00501d28 */
int __fastcall sub_60501DC4(int a1, int a2, int a3, int a4);  /* 0x00501dc4 */
int __fastcall sub_605021E0(_DWORD *a1);  /* 0x005021e0 */
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
int __fastcall sub_605029FC(int a1, int *a2, int a3);  /* 0x005029fc */
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
int __fastcall sub_60502FAC(int a1, int a2);  /* 0x00502fac */
int __fastcall sub_60502FE4(int a1, _DWORD *a2);  /* 0x00502fe4 */
int __fastcall sub_60503028(int a1, int a2);  /* 0x00503028 */
int __fastcall sub_60503034(int result, _DWORD *a2);  /* 0x00503034 */
int __fastcall sub_60503044(int a1, int a2);  /* 0x00503044 */
int __fastcall sub_6050306C(int a1);  /* 0x0050306c */
int __fastcall sub_60503074(int a1);  /* 0x00503074 */
int __fastcall sub_6050328C(int a1);  /* 0x0050328c */
int __fastcall sub_605032A0(int a1);  /* 0x005032a0 */
int __fastcall sub_605033AC(int result);  /* 0x005033ac */
int __fastcall sub_605033B8(int a1);  /* 0x005033b8 */
int __fastcall sub_60503438(int result);  /* 0x00503438 */
int __fastcall sub_60503448(int result);  /* 0x00503448 */
int __fastcall sub_60503484(int a1);  /* 0x00503484 */
int __fastcall sub_60503590(int a1);  /* 0x00503590 */
int __fastcall sub_605035AC(int a1);  /* 0x005035ac */
int __fastcall sub_6050363C(int a1);  /* 0x0050363c */
int __fastcall sub_605036C8(int result);  /* 0x005036c8 */
int __fastcall sub_60503714(int a1, int a2, int a3, int a4);  /* 0x00503714 */
int __fastcall sub_60503BD8(int a1);  /* 0x00503bd8 */
int __fastcall sub_60503FB0(int a1);  /* 0x00503fb0 */
int __fastcall sub_60504098(int a1);  /* 0x00504098 */
int __fastcall sub_605040B4(int a1, int a2, _DWORD *a3);  /* 0x005040b4 */
int __fastcall sub_60504234(int a1, int a2);  /* 0x00504234 */
int __fastcall sub_605043AC(int a1);  /* 0x005043ac */
bool __fastcall sub_605043B4(int a1);  /* 0x005043b4 */
int __fastcall sub_605043EC(int a1, _DWORD *a2);  /* 0x005043ec */
int __fastcall sub_60504564(int a1, int a2);  /* 0x00504564 */
int __fastcall sub_60504590(int a1, int a2);  /* 0x00504590 */
int __fastcall sub_605045C8(int a1, _DWORD *a2);  /* 0x005045c8 */
int __fastcall sub_6050460C(int a1, int a2);  /* 0x0050460c */
int __fastcall sub_60504618(int result, _DWORD *a2);  /* 0x00504618 */
int __fastcall sub_60504628(int a1, int a2);  /* 0x00504628 */
int __fastcall sub_60504650(int a1);  /* 0x00504650 */
int __fastcall sub_60504658(int a1);  /* 0x00504658 */
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
int __fastcall sub_60505324(int a1, unsigned int a2, unsigned int a3);  /* 0x00505324 */
int __fastcall sub_60505350(int a1);  /* 0x00505350 */
int __fastcall sub_605053EC(int a1);  /* 0x005053ec */
int __fastcall sub_6050543C(int a1);  /* 0x0050543c */
int __fastcall sub_6050548C(int a1);  /* 0x0050548c */
int __fastcall sub_605054F0(int a1);  /* 0x005054f0 */
int __fastcall sub_60505508(int a1, unsigned int a2, int a3);  /* 0x00505508 */
int __fastcall sub_60505730(int a1);  /* 0x00505730 */
int __fastcall sub_60505788(int a1);  /* 0x00505788 */
int __fastcall sub_605057D8(unsigned int a1);  /* 0x005057d8 */
int __fastcall sub_605059F0(int a1, _DWORD *a2);  /* 0x005059f0 */
int __fastcall sub_60505AC0(int a1, _DWORD *a2);  /* 0x00505ac0 */
int __fastcall sub_60505B8C(unsigned int a1);  /* 0x00505b8c */
int __fastcall sub_60505DA4(int a1, _DWORD *a2);  /* 0x00505da4 */
int __fastcall sub_60505E74(int a1, _DWORD *a2);  /* 0x00505e74 */
int __fastcall sub_60505FE8(_DWORD *a1, int a2, int a3, int a4, int a5);  /* 0x00505fe8 */
int __fastcall sub_605061B8(_DWORD *a1, int a2, unsigned int a3, int a4);  /* 0x005061b8 */
int __fastcall sub_60506438(_DWORD *a1, int a2);  /* 0x00506438 */
int __fastcall sub_605067A0(unsigned int a1);  /* 0x005067a0 */
int __fastcall sub_605069B8(int a1, _DWORD *a2);  /* 0x005069b8 */
int __fastcall sub_60506A88(int a1, _DWORD *a2);  /* 0x00506a88 */
int __fastcall sub_60506B54(unsigned int a1);  /* 0x00506b54 */
void __fastcall sub_60506D68(struct sead_IDisposer *a1);  /* 0x00506d68 */
int __fastcall sub_60506D6C(struct sead_IDisposer *a1);  /* 0x00506d6c */
int __fastcall sub_60506D80(int a1, int a2);  /* 0x00506d80 */
int __fastcall sub_60506DB0(int a1);  /* 0x00506db0 */
int __fastcall sub_60506EB8(_DWORD *a1);  /* 0x00506eb8 */
int __fastcall sub_60506EEC(_DWORD *a1);  /* 0x00506eec */
int __fastcall sub_60506F20(_DWORD *a1, int a2, _DWORD *a3);  /* 0x00506f20 */
int __fastcall sub_60507028(int a1);  /* 0x00507028 */
int __fastcall sub_60507044(_DWORD *a1, int a2);  /* 0x00507044 */
bool __fastcall sub_60507240(int a1, int a2);  /* 0x00507240 */
int __fastcall sub_605073B4(int a1);  /* 0x005073b4 */
int __fastcall sub_605073BC(int a1, int a2);  /* 0x005073bc */
int __fastcall sub_60507468(int a1, int a2);  /* 0x00507468 */
int __fastcall sub_605074A0(int a1, _DWORD *a2);  /* 0x005074a0 */
int __fastcall sub_605074E4(int a1, int a2);  /* 0x005074e4 */
int __fastcall sub_605074F0(int result, _DWORD *a2);  /* 0x005074f0 */
int __fastcall sub_60507500(int a1, int a2);  /* 0x00507500 */
int __fastcall sub_60507528(int a1);  /* 0x00507528 */
int __fastcall sub_60507530(int a1);  /* 0x00507530 */
int __fastcall sub_605076A4(int a1);  /* 0x005076a4 */
int __fastcall sub_60507BA8(int a1);  /* 0x00507ba8 */
int __fastcall sub_60507C90(int a1);  /* 0x00507c90 */
int __fastcall sub_60507CA8(int a1, int a2, _DWORD *a3);  /* 0x00507ca8 */
int __fastcall sub_60507E28(int a1, int a2);  /* 0x00507e28 */
int __fastcall sub_60507FA0(int a1);  /* 0x00507fa0 */
bool __fastcall sub_60507FA8(int a1);  /* 0x00507fa8 */
int __fastcall sub_60507FE0(int a1, _DWORD *a2);  /* 0x00507fe0 */
int __fastcall sub_60508214(int a1, int a2);  /* 0x00508214 */
int __fastcall sub_60508244(int a1, int a2);  /* 0x00508244 */
int __fastcall sub_6050827C(int a1, _DWORD *a2);  /* 0x0050827c */
int __fastcall sub_605082C0(int a1, int a2);  /* 0x005082c0 */
int __fastcall sub_605082CC(int result, _DWORD *a2);  /* 0x005082cc */
int __fastcall sub_605082DC(int a1, int a2);  /* 0x005082dc */
int __fastcall sub_60508304(int a1);  /* 0x00508304 */
int __fastcall sub_6050830C(int a1);  /* 0x0050830c */
int __fastcall sub_60508488(int *a1);  /* 0x00508488 */
int __fastcall sub_605084AC(_DWORD *a1);  /* 0x005084ac */
int __fastcall sub_605084E4(int a1);  /* 0x005084e4 */
int __fastcall sub_60508660(int a1);  /* 0x00508660 */
void __fastcall sub_60508678(struct sead_IDisposer *a1);  /* 0x00508678 */
int __fastcall sub_60508680(_DWORD *a1, int a2, _DWORD *a3, int a4, int a5, int a6);  /* 0x00508680 */
int __fastcall sub_605087C0(int *a1);  /* 0x005087c0 */
int __fastcall sub_60508C34(int a1);  /* 0x00508c34 */
int __fastcall sub_60508E90(int a1);  /* 0x00508e90 */
int __fastcall sub_60508FA4(int a1);  /* 0x00508fa4 */
int __fastcall sub_605092CC(_DWORD *a1);  /* 0x005092cc */
int __fastcall sub_605093C8(int a1);  /* 0x005093c8 */
int __fastcall sub_605094B8(int result);  /* 0x005094b8 */
bool __fastcall sub_605094C4(int a1);  /* 0x005094c4 */
int __fastcall sub_605094E0(int result);  /* 0x005094e0 */
int __fastcall sub_605094EC(int a1);  /* 0x005094ec */
int __fastcall sub_6050961C(int a1);  /* 0x0050961c */
int __fastcall sub_60509668(int a1, int a2);  /* 0x00509668 */
int __fastcall sub_605097CC(_DWORD *a1);  /* 0x005097cc */
int __fastcall sub_605098E0(int a1);  /* 0x005098e0 */
int __fastcall sub_60509900(int result, int a2);  /* 0x00509900 */
bool __fastcall sub_60509908(int a1);  /* 0x00509908 */
int __fastcall sub_60509920(_DWORD *a1);  /* 0x00509920 */
int __fastcall sub_60509994(int a1, int a2);  /* 0x00509994 */
int __fastcall sub_605099CC(int a1, _DWORD *a2);  /* 0x005099cc */
int __fastcall sub_60509A10(int a1, int a2);  /* 0x00509a10 */
int __fastcall sub_60509A1C(int result, _DWORD *a2);  /* 0x00509a1c */
int __fastcall sub_60509A2C(int a1, int a2);  /* 0x00509a2c */
int __fastcall sub_60509A54(int a1);  /* 0x00509a54 */
int __fastcall sub_60509A5C(int a1);  /* 0x00509a5c */
int __fastcall sub_60509A84(struct sead_IDisposer *a1);  /* 0x00509a84 */
int __fastcall sub_60509A98(_DWORD *a1);  /* 0x00509a98 */
int __fastcall sub_60509B54(int a1);  /* 0x00509b54 */
int __fastcall sub_60509C38(int a1);  /* 0x00509c38 */
int __fastcall sub_60509C50(int a1, int a2, _DWORD *a3, int a4);  /* 0x00509c50 */
int __fastcall sub_60509CB8(int a1);  /* 0x00509cb8 */
int __fastcall sub_60509CD8(int a1, int a2);  /* 0x00509cd8 */
int __fastcall sub_60509D10(int a1, _DWORD *a2);  /* 0x00509d10 */
int __fastcall sub_60509D54(int a1, int a2);  /* 0x00509d54 */
int __fastcall sub_60509D60(int result, _DWORD *a2);  /* 0x00509d60 */
int __fastcall sub_60509D70(int a1, int a2);  /* 0x00509d70 */
int __fastcall sub_60509D98(int a1);  /* 0x00509d98 */
int __fastcall sub_60509DA0(int a1);  /* 0x00509da0 */
int __fastcall sub_60509F2C(int a1);  /* 0x00509f2c */
int __fastcall sub_6050A308(int a1);  /* 0x0050a308 */
int __fastcall sub_6050A4C4(int a1);  /* 0x0050a4c4 */
int __fastcall sub_6050A4EC(int a1, int a2, _DWORD *a3, char a4, char a5);  /* 0x0050a4ec */
int __fastcall sub_6050A660(int a1);  /* 0x0050a660 */
int __fastcall sub_6050A704(int a1, int a2, _DWORD *a3, _DWORD *a4, char a5, char a6);  /* 0x0050a704 */
int __fastcall sub_6050A8A4(int a1);  /* 0x0050a8a4 */
int __fastcall sub_6050A8AC(int a1);  /* 0x0050a8ac */
int __fastcall sub_6050A950(int result, unsigned int a2);  /* 0x0050a950 */
int __fastcall sub_6050A95C(int a1);  /* 0x0050a95c */
int __fastcall sub_6050A97C(int a1, int a2);  /* 0x0050a97c */
int __fastcall sub_6050A9B4(int a1, _DWORD *a2);  /* 0x0050a9b4 */
int __fastcall sub_6050A9F8(int a1, int a2);  /* 0x0050a9f8 */
int __fastcall sub_6050AA04(int result, _DWORD *a2);  /* 0x0050aa04 */
int __fastcall sub_6050AA14(int a1, int a2);  /* 0x0050aa14 */
int __fastcall sub_6050AA3C(int a1);  /* 0x0050aa3c */
int __fastcall sub_6050AA44(int a1);  /* 0x0050aa44 */
int __fastcall sub_6050ABE8(int result);  /* 0x0050abe8 */
int __fastcall sub_6050AC00(int a1);  /* 0x0050ac00 */
int __fastcall sub_6050ACE4(int a1, int a2, _DWORD *a3);  /* 0x0050ace4 */
int __fastcall sub_6050AD50(int a1);  /* 0x0050ad50 */
int __fastcall sub_6050AD6C(int result, int a2);  /* 0x0050ad6c */
int __fastcall sub_6050AECC(int a1, int a2);  /* 0x0050aecc */
int __fastcall sub_6050AF04(int a1, _DWORD *a2);  /* 0x0050af04 */
int __fastcall sub_6050AF48(int a1, int a2);  /* 0x0050af48 */
int __fastcall sub_6050AF54(int result, _DWORD *a2);  /* 0x0050af54 */
int __fastcall sub_6050AF64(int a1, int a2);  /* 0x0050af64 */
int __fastcall sub_6050AF8C(int a1);  /* 0x0050af8c */
int __fastcall sub_6050AF94(int a1);  /* 0x0050af94 */
int __fastcall sub_6050B0BC(int result);  /* 0x0050b0bc */
int __fastcall sub_6050B0CC(int result);  /* 0x0050b0cc */
int __fastcall sub_6050B0EC(int result);  /* 0x0050b0ec */
int __fastcall sub_6050B0F8(int a1);  /* 0x0050b0f8 */
int __fastcall sub_6050B12C(int a1);  /* 0x0050b12c */
int __fastcall sub_6050B164(int result);  /* 0x0050b164 */
int __fastcall sub_6050B174(int result);  /* 0x0050b174 */
int __fastcall sub_6050B194(int result);  /* 0x0050b194 */
int __fastcall sub_6050B1A0(int a1);  /* 0x0050b1a0 */
int __fastcall sub_6050B1D0(int a1);  /* 0x0050b1d0 */
int __fastcall sub_6050B208(int result);  /* 0x0050b208 */
unsigned int __fastcall sub_6050B3F4(int a1);  /* 0x0050b3f4 */
int __fastcall sub_6050B4E4(int a1);  /* 0x0050b4e4 */
int __fastcall sub_6050B5C8(int a1);  /* 0x0050b5c8 */
int __fastcall sub_6050B5E4(int a1, int a2, _DWORD *a3);  /* 0x0050b5e4 */
int __fastcall sub_6050B744(int a1);  /* 0x0050b744 */
int __fastcall sub_6050B760(int a1, int a2);  /* 0x0050b760 */
int __fastcall sub_6050B798(int a1, _DWORD *a2);  /* 0x0050b798 */
int __fastcall sub_6050B7DC(int a1, int a2);  /* 0x0050b7dc */
int __fastcall sub_6050B7E8(int result, _DWORD *a2);  /* 0x0050b7e8 */
int __fastcall sub_6050B7F8(int a1, int a2);  /* 0x0050b7f8 */
int __fastcall sub_6050B820(int a1);  /* 0x0050b820 */
int __fastcall sub_6050B828(int a1);  /* 0x0050b828 */
unsigned int __fastcall T_Count_00_ref(int a1, int a2);  /* 0x0050b944 */
int __fastcall sub_6050BA40(int a1);  /* 0x0050ba40 */
int __fastcall sub_6050BB7C(_DWORD *a1);  /* 0x0050bb7c */
int __fastcall sub_6050BBB0(_DWORD *a1);  /* 0x0050bbb0 */
int __fastcall sub_6050BBE4(int a1);  /* 0x0050bbe4 */
int __fastcall sub_6050BCD0(int a1, int a2, _DWORD *a3);  /* 0x0050bcd0 */
int __fastcall sub_6050BDDC(int a1);  /* 0x0050bddc */
unsigned int __fastcall sub_6050BDF8(_DWORD *a1, int a2);  /* 0x0050bdf8 */
int __fastcall sub_6050BF9C(int a1);  /* 0x0050bf9c */
bool __fastcall sub_6050C0D0(int a1, int a2);  /* 0x0050c0d0 */
int __fastcall sub_6050C244(int a1);  /* 0x0050c244 */
int __fastcall sub_6050C24C(unsigned int a1);  /* 0x0050c24c */
int __fastcall sub_6050C464(int a1, _DWORD *a2);  /* 0x0050c464 */
int __fastcall sub_6050C534(int a1, _DWORD *a2);  /* 0x0050c534 */
int __fastcall sub_6050C600(int a1);  /* 0x0050c600 */
int __fastcall sub_6050C81C(int a1, _DWORD *a2);  /* 0x0050c81c */
int __fastcall sub_6050C8EC(int a1, _DWORD *a2);  /* 0x0050c8ec */
int __fastcall sub_6050C9B8(unsigned int a1);  /* 0x0050c9b8 */
int __fastcall sub_6050CBE0(int a1, int a2);  /* 0x0050cbe0 */
int __fastcall sub_6050CC18(int a1, _DWORD *a2);  /* 0x0050cc18 */
int __fastcall sub_6050CC5C(int a1, int a2);  /* 0x0050cc5c */
int __fastcall sub_6050CC68(int result, _DWORD *a2);  /* 0x0050cc68 */
int __fastcall sub_6050CC78(int a1, int a2);  /* 0x0050cc78 */
int __fastcall sub_6050CCA0(int a1);  /* 0x0050cca0 */
int __fastcall sub_6050CCA8(int a1);  /* 0x0050cca8 */
int __fastcall sub_6050CE38(int a1);  /* 0x0050ce38 */
int __fastcall sub_6050CF24(_DWORD *a1, int a2, _DWORD *a3);  /* 0x0050cf24 */
int __fastcall sub_6050D014(int a1);  /* 0x0050d014 */
int __fastcall sub_6050D0AC(_DWORD *a1);  /* 0x0050d0ac */
int __fastcall sub_6050D1DC(int result, _DWORD *a2, int a3);  /* 0x0050d1dc */
int __fastcall sub_6050D228(int a1);  /* 0x0050d228 */
int __fastcall sub_6050D440(int a1);  /* 0x0050d440 */
int __fastcall CourseSelectScene_Zanki1P_00_ref(_DWORD *a1, int a2);  /* 0x0050d65c */
int __fastcall sub_6050D7FC(int a1);  /* 0x0050d7fc */
int __fastcall sub_6050D8F4(_DWORD *a1);  /* 0x0050d8f4 */
int __fastcall sub_6050D928(_DWORD *a1);  /* 0x0050d928 */
int __fastcall sub_6050D95C(int a1);  /* 0x0050d95c */
int __fastcall sub_6050D99C(int a1, int a2, _DWORD *a3);  /* 0x0050d99c */
int __fastcall sub_6050DB10(int a1);  /* 0x0050db10 */
bool __fastcall sub_6050DB2C(int a1, int a2);  /* 0x0050db2c */
int __fastcall sub_6050DCA0(int a1);  /* 0x0050dca0 */
int __fastcall sub_6050DCBC(int a1, int a2);  /* 0x0050dcbc */
int __fastcall sub_6050DCF4(int a1, _DWORD *a2);  /* 0x0050dcf4 */
int __fastcall sub_6050DD38(int a1, int a2);  /* 0x0050dd38 */
int __fastcall sub_6050DD44(int result, _DWORD *a2);  /* 0x0050dd44 */
int __fastcall sub_6050DD54(int a1, int a2);  /* 0x0050dd54 */
int __fastcall sub_6050DD7C(int a1);  /* 0x0050dd7c */
int __fastcall sub_6050DD84(int a1);  /* 0x0050dd84 */
unsigned int __fastcall sub_6050DF0C(int a1);  /* 0x0050df0c */
int __fastcall sub_6050DF1C(int a1, int a2);  /* 0x0050df1c */
int __fastcall sub_6050DF34(int a1, int a2);  /* 0x0050df34 */
bool __fastcall sub_6050DF4C(int a1, int a2);  /* 0x0050df4c */
int __fastcall CourseSelectScene_Zanki1P_00_ref_2(_DWORD *a1, int a2, unsigned __int64 *a3);  /* 0x0050e048 */
int __fastcall sub_6050E1E8(int a1);  /* 0x0050e1e8 */
int __fastcall sub_6050E324(_DWORD *a1);  /* 0x0050e324 */
int __fastcall sub_6050E358(_DWORD *a1);  /* 0x0050e358 */
int __fastcall sub_6050E38C(_DWORD *a1, int a2, _DWORD *a3);  /* 0x0050e38c */
int __fastcall sub_6050E4C0(_DWORD *a1);  /* 0x0050e4c0 */
int __fastcall sub_6050E4E4(int result, int a2, unsigned __int64 *a3);  /* 0x0050e4e4 */
unsigned int __fastcall sub_6050E6F8(_DWORD *a1, int a2);  /* 0x0050e6f8 */
bool __fastcall sub_6050E89C(int a1, int a2);  /* 0x0050e89c */
int __fastcall sub_6050EA10(int a1);  /* 0x0050ea10 */
int __fastcall sub_6050EA2C(int a1, int a2);  /* 0x0050ea2c */
int __fastcall sub_6050EA64(int a1, _DWORD *a2);  /* 0x0050ea64 */
int __fastcall sub_6050EAA8(int a1, int a2);  /* 0x0050eaa8 */
int __fastcall sub_6050EAB4(int result, _DWORD *a2);  /* 0x0050eab4 */
int __fastcall sub_6050EAC4(int a1, int a2);  /* 0x0050eac4 */
int __fastcall sub_6050EAEC(int a1);  /* 0x0050eaec */
int __fastcall sub_6050EAF4(int a1);  /* 0x0050eaf4 */
int __fastcall CourseSelectScene_Zanki1P_00_ref_3(_DWORD *a1);  /* 0x0050ed10 */
int __fastcall sub_6050EEAC(int a1);  /* 0x0050eeac */
int __fastcall sub_6050F048(_DWORD *a1);  /* 0x0050f048 */
void __fastcall sub_6050F078(struct sead_IDisposer *a1);  /* 0x0050f078 */
int __fastcall sub_6050F07C(_DWORD *a1);  /* 0x0050f07c */
int __fastcall sub_6050F0B0(_DWORD *a1, int a2, _DWORD *a3);  /* 0x0050f0b0 */
int __fastcall sub_6050F224(_DWORD *a1);  /* 0x0050f224 */
int __fastcall sub_6050F248(int result, unsigned int a2, unsigned int a3);  /* 0x0050f248 */
int __fastcall sub_6050F27C(int a1, unsigned __int64 *a2);  /* 0x0050f27c */
int __fastcall sub_6050F728(_DWORD *a1);  /* 0x0050f728 */
bool __fastcall sub_6050FAA4(int a1, int a2);  /* 0x0050faa4 */
int __fastcall sub_6050FC18(int a1);  /* 0x0050fc18 */
int __fastcall sub_6050FC38(int a1, int a2);  /* 0x0050fc38 */
int __fastcall sub_6050FC70(int a1, _DWORD *a2);  /* 0x0050fc70 */
int __fastcall sub_6050FCB4(int a1, int a2);  /* 0x0050fcb4 */
int __fastcall sub_6050FCC0(int result, _DWORD *a2);  /* 0x0050fcc0 */
int __fastcall sub_6050FCD0(int a1, int a2);  /* 0x0050fcd0 */
int __fastcall sub_6050FCF8(int a1);  /* 0x0050fcf8 */
int __fastcall sub_6050FD00(int a1);  /* 0x0050fd00 */
int __fastcall sub_6050FD28(struct sead_IDisposer *a1);  /* 0x0050fd28 */
int __fastcall sub_6051000C(int result);  /* 0x0051000c */
int __fastcall sub_60510030(int a1);  /* 0x00510030 */
int __fastcall sub_60510324(int a1);  /* 0x00510324 */
int __fastcall sub_6051036C(_DWORD *a1);  /* 0x0051036c */
int __fastcall sub_60510504(int a1);  /* 0x00510504 */
int __fastcall sub_60510534(int a1);  /* 0x00510534 */
int __fastcall sub_605105D8(int a1);  /* 0x005105d8 */
int __fastcall sub_60510928(int a1);  /* 0x00510928 */
int __fastcall sub_60510AC8(int a1);  /* 0x00510ac8 */
void __fastcall sub_60510B20(struct sead_IDisposer *a1);  /* 0x00510b20 */
int __fastcall sub_60510BE0(struct sead_IDisposer *a1);  /* 0x00510be0 */
int __fastcall sub_60510BF0(int a1);  /* 0x00510bf0 */
int __fastcall sub_60510C68(int a1);  /* 0x00510c68 */
int __fastcall sub_60510E6C(int a1);  /* 0x00510e6c */
int __fastcall sub_60510FE4(int a1);  /* 0x00510fe4 */
int __fastcall sub_6051113C(int a1);  /* 0x0051113c */
int __fastcall sub_60511208(int a1);  /* 0x00511208 */
int __fastcall sub_60511318(int a1);  /* 0x00511318 */
int __fastcall sub_6051141C(_DWORD *a1);  /* 0x0051141c */
int __fastcall sub_60511584(int result, _DWORD *a2);  /* 0x00511584 */
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
int __fastcall sub_6051356C(int a1, int a2);  /* 0x0051356c */
int __fastcall sub_605135A4(int a1, _DWORD *a2);  /* 0x005135a4 */
int __fastcall sub_605135E8(int a1, int a2);  /* 0x005135e8 */
int __fastcall sub_605135F4(int result, _DWORD *a2);  /* 0x005135f4 */
int __fastcall sub_60513604(int a1, int a2);  /* 0x00513604 */
int __fastcall sub_6051362C(int a1);  /* 0x0051362c */
int __fastcall sub_60513634(int a1);  /* 0x00513634 */
int __fastcall sub_60513D20(int a1);  /* 0x00513d20 */
int __fastcall sub_60513D34(int result);  /* 0x00513d34 */
int __fastcall sub_60513D44(int a1);  /* 0x00513d44 */
int __fastcall sub_60513D9C(int a1);  /* 0x00513d9c */
int __fastcall sub_60513DD4(int result);  /* 0x00513dd4 */
int __fastcall sub_60513DE4(int result);  /* 0x00513de4 */
int __fastcall sub_60513E00(int a1);  /* 0x00513e00 */
int __fastcall sub_60513E80(int a1);  /* 0x00513e80 */
int __fastcall sub_60513EB4(int a1);  /* 0x00513eb4 */
int __fastcall sub_605140FC(int result);  /* 0x005140fc */
int __fastcall sub_60514114(int a1);  /* 0x00514114 */
int __fastcall sub_60514474(int a1);  /* 0x00514474 */
int __fastcall sub_60514490(int a1);  /* 0x00514490 */
int __fastcall sub_605144B8(int result);  /* 0x005144b8 */
int __fastcall sub_605144D0(int result);  /* 0x005144d0 */
int __fastcall sub_60514534(int result);  /* 0x00514534 */
int __fastcall sub_60514718(int result);  /* 0x00514718 */
int __fastcall sub_60514754(int result);  /* 0x00514754 */
int __fastcall sub_60514884(_DWORD *a1);  /* 0x00514884 */
int __fastcall sub_60514968(int a1);  /* 0x00514968 */
int __fastcall sub_60514994(int a1);  /* 0x00514994 */
int __fastcall sub_60514AA4(int a1);  /* 0x00514aa4 */
int __fastcall sub_60514C50(_DWORD *a1);  /* 0x00514c50 */
int __fastcall sub_60514CD8(_DWORD *a1);  /* 0x00514cd8 */
int __fastcall sub_60514E64(int a1);  /* 0x00514e64 */
int __fastcall sub_60515024(int a1, int a2);  /* 0x00515024 */
int __fastcall sub_605151FC(int a1);  /* 0x005151fc */
bool __fastcall sub_60515390(int a1);  /* 0x00515390 */
bool __fastcall sub_6051551C(int a1);  /* 0x0051551c */
int __fastcall sub_60515690(int a1);  /* 0x00515690 */
int __fastcall sub_60515864(int a1);  /* 0x00515864 */
int __fastcall sub_605159B8(int a1);  /* 0x005159b8 */
int __fastcall sub_60515A14(int a1);  /* 0x00515a14 */
int __fastcall sub_60515AC0(int a1);  /* 0x00515ac0 */
int __fastcall sub_60515AE0(int result);  /* 0x00515ae0 */
int __fastcall sub_60515B04(int a1);  /* 0x00515b04 */
int __fastcall sub_60515B24(_BYTE *a1);  /* 0x00515b24 */
int __fastcall sub_60515B5C(int result);  /* 0x00515b5c */
int __fastcall sub_60515B80(int a1, unsigned int a2, unsigned int a3);  /* 0x00515b80 */
bool __fastcall sub_60515C34(int a1, int a2);  /* 0x00515c34 */
bool __fastcall sub_60515D2C(int a1, int a2);  /* 0x00515d2c */
int __fastcall sub_60515EA0(_DWORD *a1);  /* 0x00515ea0 */
int __fastcall sub_60515F50(int a1, int a2);  /* 0x00515f50 */
bool __fastcall sub_60515FE8(int a1, int a2);  /* 0x00515fe8 */
int __fastcall sub_6051615C(_DWORD *a1);  /* 0x0051615c */
int __fastcall sub_60516220(int a1, int a2);  /* 0x00516220 */
int __fastcall sub_60516258(int a1, _DWORD *a2);  /* 0x00516258 */
int __fastcall sub_6051629C(int a1, int a2);  /* 0x0051629c */
int __fastcall sub_605162A8(int result, _DWORD *a2);  /* 0x005162a8 */
int __fastcall sub_605162B8(int a1, int a2);  /* 0x005162b8 */
int __fastcall sub_605162E0(int a1);  /* 0x005162e0 */
int __fastcall sub_605162E8(int a1);  /* 0x005162e8 */
int __fastcall SE_SYS_CH_SCORE_PAGE_IN_ref(int a1);  /* 0x00516754 */
int __fastcall sub_60516784(int a1);  /* 0x00516784 */
int __fastcall SE_SYS_CH_SCORE_PAGE_OUT_ref(int a1);  /* 0x005167cc */
int __fastcall sub_60516844(int a1);  /* 0x00516844 */
int __fastcall sub_6051697C(int a1);  /* 0x0051697c */
int __fastcall sub_60516994(int a1);  /* 0x00516994 */
int __fastcall sub_60516B18(int a1);  /* 0x00516b18 */
int __fastcall sub_60516CA4(int a1);  /* 0x00516ca4 */
int __fastcall sub_60516CC8(int result, _DWORD *a2);  /* 0x00516cc8 */
int __fastcall sub_60516CE0(int a1);  /* 0x00516ce0 */
int __fastcall sub_60516D28(int a1);  /* 0x00516d28 */
int __fastcall sub_60516E80(int *a1);  /* 0x00516e80 */
int __fastcall sub_60516FE8(int a1);  /* 0x00516fe8 */
int __fastcall sub_60517004(int a1);  /* 0x00517004 */
int __fastcall sub_60517018(unsigned int a1);  /* 0x00517018 */
int __fastcall sub_60517230(int a1, _DWORD *a2);  /* 0x00517230 */
int __fastcall sub_60517300(int a1, _DWORD *a2);  /* 0x00517300 */
int __fastcall sub_605173CC(unsigned int a1);  /* 0x005173cc */
int __fastcall sub_605175F8(int a1, int a2);  /* 0x005175f8 */
int __fastcall sub_60517630(int a1, _DWORD *a2);  /* 0x00517630 */
int __fastcall sub_60517674(int a1, int a2);  /* 0x00517674 */
int __fastcall sub_60517680(int result, _DWORD *a2);  /* 0x00517680 */
int __fastcall sub_60517690(int a1, int a2);  /* 0x00517690 */
int __fastcall sub_605176B8(int a1);  /* 0x005176b8 */
int __fastcall sub_605176C0(int a1);  /* 0x005176c0 */
int __fastcall sub_60517830(int a1);  /* 0x00517830 */
int __fastcall sub_60517B18(int a1);  /* 0x00517b18 */
int __fastcall sub_60517C8C(int a1);  /* 0x00517c8c */
int __fastcall sub_60517CDC(int a1, int a2);  /* 0x00517cdc */
int __fastcall sub_60517DC0(int a1);  /* 0x00517dc0 */
int __fastcall sub_605180D0(int a1);  /* 0x005180d0 */
int __fastcall sub_6051812C(int a1, _DWORD *a2);  /* 0x0051812c */
unsigned int __fastcall sub_60518138(int a1);  /* 0x00518138 */
unsigned int __fastcall sub_605184C0(int a1);  /* 0x005184c0 */
int __fastcall sub_6051854C(int a1, int a2);  /* 0x0051854c */
int __fastcall sub_60518584(int a1, _DWORD *a2);  /* 0x00518584 */
int __fastcall sub_605185C8(int a1, int a2);  /* 0x005185c8 */
int __fastcall sub_605185D4(int result, _DWORD *a2);  /* 0x005185d4 */
int __fastcall sub_605185E4(int a1, int a2);  /* 0x005185e4 */
int __fastcall sub_6051860C(int a1);  /* 0x0051860c */
int __fastcall sub_60518614(int a1);  /* 0x00518614 */
int __fastcall sub_60518824(int a1);  /* 0x00518824 */
int __fastcall sub_60518848(_DWORD *a1);  /* 0x00518848 */
int __fastcall sub_605188A4(int a1);  /* 0x005188a4 */
int __fastcall sub_605188C8(int a1);  /* 0x005188c8 */
int __fastcall sub_605189F8(_DWORD *a1);  /* 0x005189f8 */
int __fastcall sub_60518A28(int a1);  /* 0x00518a28 */
int __fastcall sub_60518E34(int a1);  /* 0x00518e34 */
int __fastcall sub_60518E58(int result, _DWORD *a2);  /* 0x00518e58 */
int __fastcall sub_60518E70(_DWORD *a1);  /* 0x00518e70 */
int __fastcall sub_60518ECC(int a1);  /* 0x00518ecc */
int __fastcall sub_60518EE0(int a1);  /* 0x00518ee0 */
int __fastcall sub_60518F10(int a1, int a2);  /* 0x00518f10 */
int __fastcall sub_60518F48(int a1, _DWORD *a2);  /* 0x00518f48 */
int __fastcall sub_60518F8C(int a1, int a2);  /* 0x00518f8c */
int __fastcall sub_60518F98(int result, _DWORD *a2);  /* 0x00518f98 */
int __fastcall sub_60518FA8(int a1, int a2);  /* 0x00518fa8 */
int __fastcall sub_60518FD0(int a1);  /* 0x00518fd0 */
int __fastcall sub_60518FD8(int a1);  /* 0x00518fd8 */
int __fastcall SE_SYS_BM_COURSE_PAGE_IN_ref(int a1);  /* 0x00519000 */
int __fastcall sub_60519090(int a1);  /* 0x00519090 */
int __fastcall sub_605190CC(int result);  /* 0x005190cc */
int __fastcall SE_SYS_BM_COURSE_PAGE_OUT_ref(int a1);  /* 0x005190dc */
int __fastcall sub_60519160(int a1);  /* 0x00519160 */
int __fastcall sub_6051939C(_DWORD *a1);  /* 0x0051939c */
int __fastcall sub_605193FC(_DWORD *a1);  /* 0x005193fc */
int __fastcall sub_605196A8(int a1);  /* 0x005196a8 */
int __fastcall sub_605197DC(int a1);  /* 0x005197dc */
int __fastcall sub_60519910(int a1);  /* 0x00519910 */
int __fastcall sub_60519968(int result, _DWORD *a2);  /* 0x00519968 */
int __fastcall sub_60519984(int a1);  /* 0x00519984 */
int __fastcall sub_605199CC(int *a1);  /* 0x005199cc */
int __fastcall sub_60519B68(int a1);  /* 0x00519b68 */
int __fastcall sub_60519D88(int result);  /* 0x00519d88 */
int __fastcall sub_6051A034(int a1);  /* 0x0051a034 */
int __fastcall sub_6051A2E0(int a1);  /* 0x0051a2e0 */
int __fastcall sub_6051A2F8(int a1);  /* 0x0051a2f8 */
int __fastcall sub_6051A314(unsigned int a1);  /* 0x0051a314 */
int __fastcall sub_6051A528(unsigned int a1);  /* 0x0051a528 */
int __fastcall sub_6051A740(int a1, _DWORD *a2);  /* 0x0051a740 */
int __fastcall sub_6051A810(int a1, _DWORD *a2);  /* 0x0051a810 */
int __fastcall sub_6051A8DC(unsigned int a1);  /* 0x0051a8dc */
int __fastcall sub_6051AAF4(int a1, _DWORD *a2);  /* 0x0051aaf4 */
int __fastcall sub_6051ABC4(int a1, _DWORD *a2);  /* 0x0051abc4 */
int __fastcall sub_6051ACA4(int a1, int a2);  /* 0x0051aca4 */
int __fastcall sub_6051ACDC(int a1, _DWORD *a2);  /* 0x0051acdc */
int __fastcall sub_6051AD20(int a1, int a2);  /* 0x0051ad20 */
int __fastcall sub_6051AD2C(int result, _DWORD *a2);  /* 0x0051ad2c */
int __fastcall sub_6051AD3C(int a1, int a2);  /* 0x0051ad3c */
int __fastcall sub_6051AD64(int a1);  /* 0x0051ad64 */
int __fastcall sub_6051AD6C(int a1);  /* 0x0051ad6c */
int __fastcall sub_6051AF68(int result);  /* 0x0051af68 */
int __fastcall sub_6051AFE8(int a1);  /* 0x0051afe8 */
int __fastcall sub_6051B024(int result);  /* 0x0051b024 */
int __fastcall sub_6051B038(int a1);  /* 0x0051b038 */
unsigned int __fastcall sub_6051B060(int a1);  /* 0x0051b060 */
int __fastcall sub_6051B10C(int a1);  /* 0x0051b10c */
void __fastcall sub_6051B3D4(int a1);  /* 0x0051b3d4 */
int __fastcall sub_6051B48C(_DWORD *a1);  /* 0x0051b48c */
int __fastcall sub_6051B4CC(int a1);  /* 0x0051b4cc */
int __fastcall sub_6051B4EC(int a1);  /* 0x0051b4ec */
int __fastcall sub_6051B860(int a1);  /* 0x0051b860 */
int __fastcall sub_6051BBD0(_DWORD *a1);  /* 0x0051bbd0 */
int __fastcall sub_6051BCEC(int a1);  /* 0x0051bcec */
int __fastcall sub_6051BD20(int a1, _DWORD *a2);  /* 0x0051bd20 */
int __fastcall sub_6051BD50(int a1);  /* 0x0051bd50 */
int __fastcall sub_6051BD68(int a1);  /* 0x0051bd68 */
int __fastcall sub_6051BD84(int a1);  /* 0x0051bd84 */
bool __fastcall sub_6051BE4C(int a1);  /* 0x0051be4c */
int __fastcall sub_6051C200(int a1, int a2);  /* 0x0051c200 */
int __fastcall sub_6051C238(int a1, _DWORD *a2);  /* 0x0051c238 */
int __fastcall sub_6051C27C(int a1, int a2);  /* 0x0051c27c */
int __fastcall sub_6051C288(int result, _DWORD *a2);  /* 0x0051c288 */
int __fastcall sub_6051C298(int a1, int a2);  /* 0x0051c298 */
int __fastcall sub_6051C2C0(int a1);  /* 0x0051c2c0 */
int __fastcall sub_6051C2C8(int a1);  /* 0x0051c2c8 */
int __fastcall SE_SYS_CH_SCORE_PAGE_IN_ref_2(int a1);  /* 0x0051c2f0 */
int __fastcall sub_6051C320(int a1);  /* 0x0051c320 */
int __fastcall SE_SYS_CH_SCORE_PAGE_OUT_ref_2(int a1);  /* 0x0051c35c */
int __fastcall sub_6051C3E4(int a1);  /* 0x0051c3e4 */
int __fastcall sub_6051C408(int a1);  /* 0x0051c408 */
int __fastcall sub_6051C650(int a1);  /* 0x0051c650 */
int __fastcall sub_6051C668(int a1);  /* 0x0051c668 */
int __fastcall sub_6051C73C(int a1);  /* 0x0051c73c */
int __fastcall sub_6051C908(_DWORD *a1);  /* 0x0051c908 */
int __fastcall sub_6051CB4C(int a1);  /* 0x0051cb4c */
int __fastcall sub_6051CD8C(_DWORD *a1);  /* 0x0051cd8c */
int __fastcall sub_6051CFD8(int a1);  /* 0x0051cfd8 */
int __fastcall sub_6051D004(int a1);  /* 0x0051d004 */
int __fastcall sub_6051D12C(int result, _DWORD *a2);  /* 0x0051d12c */
int __fastcall sub_6051D144(int a1);  /* 0x0051d144 */
int __fastcall sub_6051D5FC(int a1);  /* 0x0051d5fc */
int __fastcall sub_6051D7B8(int a1);  /* 0x0051d7b8 */
int __fastcall sub_6051D7D4(int a1);  /* 0x0051d7d4 */
int __fastcall sub_6051D7E8(int result);  /* 0x0051d7e8 */
int __fastcall sub_6051DB50(unsigned int a1);  /* 0x0051db50 */
int __fastcall sub_6051DD64(unsigned int a1);  /* 0x0051dd64 */
int __fastcall sub_6051DF7C(int a1, _DWORD *a2);  /* 0x0051df7c */
int __fastcall sub_6051E04C(int a1, _DWORD *a2);  /* 0x0051e04c */
int __fastcall sub_6051E130(int a1, int a2);  /* 0x0051e130 */
int __fastcall sub_6051E168(int a1, _DWORD *a2);  /* 0x0051e168 */
int __fastcall sub_6051E1AC(int a1, int a2);  /* 0x0051e1ac */
int __fastcall sub_6051E1B8(int result, _DWORD *a2);  /* 0x0051e1b8 */
int __fastcall sub_6051E1C8(int a1, int a2);  /* 0x0051e1c8 */
int __fastcall sub_6051E1F0(int a1);  /* 0x0051e1f0 */
int __fastcall sub_6051E1F8(int a1);  /* 0x0051e1f8 */
int __fastcall sub_6051E5B0(int result);  /* 0x0051e5b0 */
int __fastcall sub_6051E5C4(int a1);  /* 0x0051e5c4 */
int __fastcall sub_6051E674(int result);  /* 0x0051e674 */
int __fastcall sub_6051E714(int a1);  /* 0x0051e714 */
int __fastcall SE_SYS_RECORD_PAGE_IN_ref(int a1);  /* 0x0051e754 */
int __fastcall sub_6051E7BC(_DWORD *a1);  /* 0x0051e7bc */
int __fastcall sub_6051E820(unsigned __int8 *a1);  /* 0x0051e820 */
int __fastcall sub_6051E8CC(int result);  /* 0x0051e8cc */
int __fastcall sub_6051EA6C(int a1);  /* 0x0051ea6c */
int __fastcall sub_6051EAB8(int a1);  /* 0x0051eab8 */
int __fastcall sub_6051EB08(int result);  /* 0x0051eb08 */
int __fastcall SE_SYS_RECORD_PAGE_IN_ref_2(int a1);  /* 0x0051eb50 */
int __fastcall sub_6051EB9C(int a1);  /* 0x0051eb9c */
int __fastcall SE_SYS_RECORD_PAGE_IN_ref_3(int a1);  /* 0x0051ec00 */
int __fastcall sub_6051EC4C(int a1);  /* 0x0051ec4c */
int __fastcall sub_6051ECB4(int a1);  /* 0x0051ecb4 */
int __fastcall sub_6051ECCC(int result);  /* 0x0051eccc */
int __fastcall sub_6051ECF4(int a1);  /* 0x0051ecf4 */
int __fastcall sub_6051ED10(int a1);  /* 0x0051ed10 */
int __fastcall sub_6051ED48(int result);  /* 0x0051ed48 */
int __fastcall sub_6051ED58(int a1);  /* 0x0051ed58 */
int __fastcall sub_6051EF08(int a1);  /* 0x0051ef08 */
int __fastcall sub_6051EF98(int a1);  /* 0x0051ef98 */
int __fastcall sub_6051F028(int a1);  /* 0x0051f028 */
int __fastcall sub_6051F1A0(_DWORD *a1);  /* 0x0051f1a0 */
int __fastcall sub_6051F388(int *a1);  /* 0x0051f388 */
int __fastcall sub_6051F7B8(_DWORD *a1);  /* 0x0051f7b8 */
int __fastcall sub_6051FEE8(int a1);  /* 0x0051fee8 */
int __fastcall sub_6051FF3C(int a1);  /* 0x0051ff3c */
int __fastcall sub_60520078(int a1, int a2);  /* 0x00520078 */
int __fastcall sub_605201D4(int a1, int a2);  /* 0x005201d4 */
int __fastcall sub_6052020C(int a1, _DWORD *a2);  /* 0x0052020c */
int __fastcall sub_60520250(int a1, int a2);  /* 0x00520250 */
int __fastcall sub_6052025C(int result, _DWORD *a2);  /* 0x0052025c */
int __fastcall sub_6052026C(int a1, int a2);  /* 0x0052026c */
int __fastcall sub_60520294(int a1);  /* 0x00520294 */
int __fastcall sub_6052029C(int a1);  /* 0x0052029c */
int __fastcall sub_605202C4(int a1);  /* 0x005202c4 */
int __fastcall SE_SYS_CH_RESULT_SCORE_ref(int a1);  /* 0x0052033c */
int __fastcall sub_60520448(int a1);  /* 0x00520448 */
int __fastcall SE_SYS_CH_RESULT_SCORE_ref_2(int a1);  /* 0x005204d0 */
int __fastcall sub_60520588(int result);  /* 0x00520588 */
int __fastcall SE_SYS_CH_RESULT_SCORE_BEST_ref(int a1);  /* 0x00520598 */
int __fastcall sub_605206AC(int result);  /* 0x005206ac */
int __fastcall sub_605206BC(int a1);  /* 0x005206bc */
int __fastcall sub_605208E8(int result);  /* 0x005208e8 */
int __fastcall SE_SYS_CH_RESULT_GET_ref(int a1);  /* 0x005208f8 */
int __fastcall sub_60520B08(int a1);  /* 0x00520b08 */
int __fastcall SE_SYS_FS_PROCESSING_ref(int a1);  /* 0x00520b24 */
int __fastcall sub_60520BB0(int a1);  /* 0x00520bb0 */
void __fastcall sub_60520E10(struct sead_IDisposer *a1);  /* 0x00520e10 */
int __fastcall sub_60520E18(int a1);  /* 0x00520e18 */
int __fastcall sub_60520F5C(_DWORD *a1);  /* 0x00520f5c */
int __fastcall sub_60521144(int a1);  /* 0x00521144 */
int __fastcall sub_6052132C(int result, _DWORD *a2);  /* 0x0052132c */
int __fastcall sub_60521348(int result);  /* 0x00521348 */
int __fastcall sub_60521364(int a1);  /* 0x00521364 */
int __fastcall sub_60521684(int a1, _DWORD *a2, int a3, int a4);  /* 0x00521684 */
int __fastcall sub_605218E4(int a1, int a2);  /* 0x005218e4 */
int __fastcall sub_60521A84(int a1);  /* 0x00521a84 */
int __fastcall sub_60522068(int a1);  /* 0x00522068 */
int __fastcall sub_605226E4(_BYTE *a1);  /* 0x005226e4 */
int __fastcall sub_6052283C(unsigned int a1);  /* 0x0052283c */
int __fastcall sub_60522A54(int a1, _DWORD *a2);  /* 0x00522a54 */
int __fastcall sub_60522B24(int a1, _DWORD *a2);  /* 0x00522b24 */
int __fastcall sub_60522BF0(unsigned int a1);  /* 0x00522bf0 */
int __fastcall sub_60522E04(unsigned int a1);  /* 0x00522e04 */
int __fastcall sub_6052301C(int a1, _DWORD *a2);  /* 0x0052301c */
int __fastcall sub_605230EC(int a1, _DWORD *a2);  /* 0x005230ec */
int __fastcall sub_605231B8(unsigned int a1);  /* 0x005231b8 */
int __fastcall sub_605233D0(int a1, _DWORD *a2);  /* 0x005233d0 */
int __fastcall sub_605234A0(int a1, _DWORD *a2);  /* 0x005234a0 */
int __fastcall sub_60523580(int a1, int a2);  /* 0x00523580 */
int __fastcall sub_605235B8(int a1, _DWORD *a2);  /* 0x005235b8 */
int __fastcall sub_605235FC(int a1, int a2);  /* 0x005235fc */
int __fastcall sub_60523608(int result, _DWORD *a2);  /* 0x00523608 */
int __fastcall sub_60523618(int a1, int a2);  /* 0x00523618 */
int __fastcall sub_60523640(int a1);  /* 0x00523640 */
int __fastcall sub_60523648(int a1);  /* 0x00523648 */
int __fastcall sub_60523670(struct sead_IDisposer *a1);  /* 0x00523670 */
int __fastcall sub_605236E8(_DWORD *a1);  /* 0x005236e8 */
int __fastcall sub_60523840(_DWORD *a1);  /* 0x00523840 */
int __fastcall sub_6052384C(int result, _DWORD *a2);  /* 0x0052384c */
int __fastcall sub_60523860(int a1);  /* 0x00523860 */
int __fastcall sub_60523944(unsigned int a1);  /* 0x00523944 */
int __fastcall sub_60523B64(int result);  /* 0x00523b64 */
int __fastcall sub_60523BE8(int a1);  /* 0x00523be8 */
int __fastcall sub_60523C60(int a1);  /* 0x00523c60 */
int __fastcall sub_60523C90(int a1);  /* 0x00523c90 */
int __fastcall SE_SYS_CB_RESULT_ref(int a1);  /* 0x00523cd8 */
int __fastcall sub_60523D30(int a1);  /* 0x00523d30 */
int __fastcall sub_60523D6C(int result);  /* 0x00523d6c */
int __fastcall sub_60523D7C(int a1);  /* 0x00523d7c */
int __fastcall sub_60523DB0(int result, int a2, int a3);  /* 0x00523db0 */
int __fastcall sub_60524078(int result);  /* 0x00524078 */
int __fastcall sub_605240AC(int result);  /* 0x005240ac */
int __fastcall sub_605240BC(int a1);  /* 0x005240bc */
int __fastcall sub_605240F0(int a1);  /* 0x005240f0 */
int __fastcall sub_6052410C(int a1);  /* 0x0052410c */
int __fastcall sub_60524224(int result);  /* 0x00524224 */
int __fastcall sub_60524234(int a1);  /* 0x00524234 */
int __fastcall sub_60524268(int result);  /* 0x00524268 */
int __fastcall sub_60524278(int a1);  /* 0x00524278 */
int __fastcall sub_605242AC(_DWORD *a1);  /* 0x005242ac */
int __fastcall sub_6052448C(int a1);  /* 0x0052448c */
int __fastcall sub_605244C0(int result);  /* 0x005244c0 */
int __fastcall sub_605244D0(int a1);  /* 0x005244d0 */
int __fastcall SE_SYS_CB_TOTAL_COIN_NUM_ref(int a1);  /* 0x00524508 */
int __fastcall sub_6052456C(int result);  /* 0x0052456c */
int __fastcall sub_6052457C(int a1);  /* 0x0052457c */
int __fastcall sub_605245B0(_DWORD *a1);  /* 0x005245b0 */
int __fastcall sub_605247E0(int a1);  /* 0x005247e0 */
int __fastcall sub_60524814(int result);  /* 0x00524814 */
int __fastcall sub_60524824(int a1);  /* 0x00524824 */
int __fastcall SE_SYS_CB_FINAL_RESULT_ref(int a1);  /* 0x00524858 */
int __fastcall sub_60524990(int a1);  /* 0x00524990 */
int __fastcall sub_605249C4(int result);  /* 0x005249c4 */
int __fastcall sub_605249E4(int a1);  /* 0x005249e4 */
int __fastcall sub_60524A38(_DWORD *a1);  /* 0x00524a38 */
int __fastcall sub_60524C24(int a1);  /* 0x00524c24 */
int __fastcall sub_60524CA8(int result);  /* 0x00524ca8 */
int __fastcall sub_60524CB8(int a1);  /* 0x00524cb8 */
int __fastcall SE_SYS_CB_FINAL_RESULT_ref_2(_DWORD *a1);  /* 0x00524cec */
int __fastcall sub_60524D5C(int a1);  /* 0x00524d5c */
int __fastcall SE_SYS_CB_TOTAL_COIN_NUM_ref_2(int a1);  /* 0x00524d94 */
int __fastcall sub_60524DF8(int result);  /* 0x00524df8 */
int __fastcall sub_60524E08(int a1);  /* 0x00524e08 */
int __fastcall sub_60524E3C(int a1);  /* 0x00524e3c */
int __fastcall sub_60524F70(int a1);  /* 0x00524f70 */
int __fastcall sub_60524FC4(_DWORD *a1);  /* 0x00524fc4 */
int __fastcall sub_60525200(int a1);  /* 0x00525200 */
int __fastcall sub_60525284(int result);  /* 0x00525284 */
int __fastcall sub_605252F0(int result);  /* 0x005252f0 */
int __fastcall sub_60525348(int a1);  /* 0x00525348 */
int __fastcall sub_605253BC(_DWORD *a1);  /* 0x005253bc */
int __fastcall sub_605253C0(int a1);  /* 0x005253c0 */
int __fastcall sub_60525400(_DWORD *a1);  /* 0x00525400 */
int __fastcall sub_6052544C(int a1);  /* 0x0052544c */
int __fastcall sub_605254D8(int a1);  /* 0x005254d8 */
int __fastcall sub_60525560(int result);  /* 0x00525560 */
int __fastcall sub_60525570(int result);  /* 0x00525570 */
int __fastcall sub_60525608(int a1);  /* 0x00525608 */
int __fastcall sub_605258AC(_DWORD *a1);  /* 0x005258ac */
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
int __fastcall sub_60529BCC(int result);  /* 0x00529bcc */
int __fastcall sub_60529D80(int result);  /* 0x00529d80 */
int __fastcall sub_60529DAC(_DWORD *a1);  /* 0x00529dac */
int __fastcall sub_60529E2C(int a1);  /* 0x00529e2c */
int __fastcall sub_60529E64(_DWORD *a1);  /* 0x00529e64 */
int __fastcall sub_60529EEC(int a1);  /* 0x00529eec */
int __fastcall sub_60529F28(int a1);  /* 0x00529f28 */
int __fastcall sub_60529F60(int a1);  /* 0x00529f60 */
int __fastcall sub_60529F90(int a1);  /* 0x00529f90 */
int __fastcall sub_6052A02C(int a1);  /* 0x0052a02c */
int __fastcall sub_6052A068(int a1);  /* 0x0052a068 */
int __fastcall sub_6052A0A0(int result);  /* 0x0052a0a0 */
int __fastcall sub_6052A0AC(int result);  /* 0x0052a0ac */
int __fastcall sub_6052A108(int a1);  /* 0x0052a108 */
int __fastcall sub_6052A120(int result);  /* 0x0052a120 */
int __fastcall sub_6052A144(int *a1);  /* 0x0052a144 */
int __fastcall sub_6052A174(int a1);  /* 0x0052a174 */
int __fastcall sub_6052A1C4(int a1, int a2, _DWORD *a3);  /* 0x0052a1c4 */
int __fastcall sub_6052A250(int a1, int a2, int a3);  /* 0x0052a250 */
int __fastcall sub_6052AA14(int a1, int a2);  /* 0x0052aa14 */
int __fastcall sub_6052AA4C(int a1, _DWORD *a2);  /* 0x0052aa4c */
int __fastcall sub_6052AA90(int a1, int a2);  /* 0x0052aa90 */
int __fastcall sub_6052AA9C(int result, _DWORD *a2);  /* 0x0052aa9c */
int __fastcall sub_6052AAAC(int a1, int a2);  /* 0x0052aaac */
int __fastcall sub_6052AAD4(int a1);  /* 0x0052aad4 */
int __fastcall sub_6052AADC(int a1);  /* 0x0052aadc */
int __fastcall sub_6052AB1C(int a1, int a2);  /* 0x0052ab1c */
int __fastcall sub_6052AB54(int a1, _DWORD *a2);  /* 0x0052ab54 */
int __fastcall sub_6052AB98(int a1, int a2);  /* 0x0052ab98 */
int __fastcall sub_6052ABA4(int result, _DWORD *a2);  /* 0x0052aba4 */
int __fastcall sub_6052ABB4(int a1, int a2);  /* 0x0052abb4 */
int __fastcall sub_6052ABDC(int a1);  /* 0x0052abdc */
int __fastcall sub_6052ABE4(int a1);  /* 0x0052abe4 */
int __fastcall sub_6052AC24(int a1, int a2);  /* 0x0052ac24 */
int __fastcall sub_6052AC5C(int a1, _DWORD *a2);  /* 0x0052ac5c */
int __fastcall sub_6052ACA0(int a1, int a2);  /* 0x0052aca0 */
int __fastcall sub_6052ACAC(int result, _DWORD *a2);  /* 0x0052acac */
int __fastcall sub_6052ACBC(int a1, int a2);  /* 0x0052acbc */
int __fastcall sub_6052ACE4(int a1);  /* 0x0052ace4 */
int __fastcall sub_6052ACEC(int a1);  /* 0x0052acec */
int __fastcall sub_6052AD14(int a1);  /* 0x0052ad14 */
int __fastcall sub_6052AD9C(int a1);  /* 0x0052ad9c */
int __fastcall sub_6052ADD0(int a1);  /* 0x0052add0 */
int __fastcall sub_6052AE08(int a1);  /* 0x0052ae08 */
int __fastcall sub_6052AF5C(int result);  /* 0x0052af5c */
int __fastcall sub_6052B004(struct sead_IDisposer *a1);  /* 0x0052b004 */
int __fastcall sub_6052B07C(int a1);  /* 0x0052b07c */
int __fastcall sub_6052B110(int result);  /* 0x0052b110 */
int __fastcall sub_6052B15C(_DWORD *a1);  /* 0x0052b15c */
int __fastcall SE_SYS_CB_RESULT_COIN_FINISH_ref(int a1);  /* 0x0052b25c */
int __fastcall sub_6052B328(int a1);  /* 0x0052b328 */
int __fastcall sub_6052B514(int a1);  /* 0x0052b514 */
int __fastcall sub_6052B52C(int a1);  /* 0x0052b52c */
int __fastcall sub_6052BA64(int a1);  /* 0x0052ba64 */
int __fastcall sub_6052BB94(int a1);  /* 0x0052bb94 */
int __fastcall sub_6052BBBC(int a1, int a2, int a3, int a4, int a5);  /* 0x0052bbbc */
int __fastcall sub_6052BC7C(int a1, int a2, int a3, int *a4, _DWORD *a5);  /* 0x0052bc7c */
int __fastcall sub_6052BEBC(int a1, unsigned int a2);  /* 0x0052bebc */
int __fastcall sub_6052C150(int a1);  /* 0x0052c150 */
int __fastcall sub_6052C3C4(int a1, int a2);  /* 0x0052c3c4 */
int __fastcall sub_6052C3FC(int a1, _DWORD *a2);  /* 0x0052c3fc */
int __fastcall sub_6052C440(int a1, int a2);  /* 0x0052c440 */
int __fastcall sub_6052C44C(int result, _DWORD *a2);  /* 0x0052c44c */
int __fastcall sub_6052C45C(int a1, int a2);  /* 0x0052c45c */
int __fastcall sub_6052C484(int a1);  /* 0x0052c484 */
int __fastcall sub_6052C48C(int a1);  /* 0x0052c48c */
int __fastcall sub_6052C5E4(int a1);  /* 0x0052c5e4 */
int __fastcall sub_6052C5EC(int a1);  /* 0x0052c5ec */
int __fastcall sub_6052C5F4(int result);  /* 0x0052c5f4 */
int __fastcall SE_SYS_BM_ref(int a1);  /* 0x0052c608 */
int __fastcall sub_6052CCBC(int a1);  /* 0x0052ccbc */
int __fastcall sub_6052CF18(_DWORD *a1);  /* 0x0052cf18 */
int __fastcall sub_6052CF48(int a1);  /* 0x0052cf48 */
int __fastcall sub_6052CF7C(int a1);  /* 0x0052cf7c */
int __fastcall sub_6052D12C(int a1);  /* 0x0052d12c */
int __fastcall sub_6052D264(int a1);  /* 0x0052d264 */
int __fastcall sub_6052D86C(int a1, unsigned int a2);  /* 0x0052d86c */
int __fastcall sub_6052D92C(int a1, int a2);  /* 0x0052d92c */
int __fastcall sub_6052DB30(int a1);  /* 0x0052db30 */
int __fastcall sub_6052DBEC(_DWORD *a1);  /* 0x0052dbec */
int __fastcall sub_6052DC30(int result, _DWORD *a2);  /* 0x0052dc30 */
int __fastcall sub_6052DC68(int a1);  /* 0x0052dc68 */
int __fastcall sub_6052DD08(int a1, unsigned int a2);  /* 0x0052dd08 */
int __fastcall sub_6052DE5C(int a1, unsigned int a2);  /* 0x0052de5c */
int __fastcall sub_6052DFA0(_DWORD *a1);  /* 0x0052dfa0 */
int __fastcall sub_6052E2C8(unsigned int a1);  /* 0x0052e2c8 */
int __fastcall sub_6052E4E0(int a1, _DWORD *a2);  /* 0x0052e4e0 */
int __fastcall sub_6052E5B0(int a1, _DWORD *a2);  /* 0x0052e5b0 */
int __fastcall sub_6052E690(int a1, int a2);  /* 0x0052e690 */
int __fastcall sub_6052E6C8(int a1, _DWORD *a2);  /* 0x0052e6c8 */
int __fastcall sub_6052E70C(int a1, int a2);  /* 0x0052e70c */
int __fastcall sub_6052E718(int result, _DWORD *a2);  /* 0x0052e718 */
int __fastcall sub_6052E728(int a1, int a2);  /* 0x0052e728 */
int __fastcall sub_6052E750(int a1);  /* 0x0052e750 */
int __fastcall sub_6052E758(int a1);  /* 0x0052e758 */
int __fastcall sub_6052E78C(_DWORD *a1);  /* 0x0052e78c */
int __fastcall sub_6052E840(int a1);  /* 0x0052e840 */
int __fastcall sub_6052E87C(int result);  /* 0x0052e87c */
int __fastcall sub_6052E88C(int result);  /* 0x0052e88c */
int __fastcall sub_6052E8BC(int result);  /* 0x0052e8bc */
int __fastcall SE_MG_CMN_WIN_ref_2(int a1);  /* 0x0052e8f0 */
int __fastcall sub_6052EAE8(int result);  /* 0x0052eae8 */
int __fastcall sub_6052EAF8(int a1);  /* 0x0052eaf8 */
int __fastcall sub_6052EB2C(int a1);  /* 0x0052eb2c */
int __fastcall sub_6052EB48(int a1);  /* 0x0052eb48 */
int __fastcall sub_6052EB80(int result);  /* 0x0052eb80 */
int __fastcall sub_6052EB9C(int a1);  /* 0x0052eb9c */
int __fastcall sub_6052ED0C(int a1);  /* 0x0052ed0c */
int __fastcall sub_6052ED60(int a1);  /* 0x0052ed60 */
int __fastcall sub_6052EDB4(int a1);  /* 0x0052edb4 */
int __fastcall sub_6052EF18(int a1);  /* 0x0052ef18 */
int __fastcall sub_6052F098(int a1);  /* 0x0052f098 */
int __fastcall sub_6052F1C4(int a1);  /* 0x0052f1c4 */
int __fastcall sub_6052F434(_DWORD *a1);  /* 0x0052f434 */
int __fastcall sub_6052F8EC(int a1);  /* 0x0052f8ec */
int __fastcall sub_6052F970(int result, _DWORD *a2);  /* 0x0052f970 */
int __fastcall sub_6052F98C(int a1);  /* 0x0052f98c */
int __fastcall sub_6052FC14(_DWORD *a1, unsigned int a2, unsigned int a3);  /* 0x0052fc14 */
int __fastcall SE_MG_CMN_START_ref_2_helper(int result);  /* 0x0052fd30 */
int __fastcall sub_605301B0(int a1, int a2);  /* 0x005301b0 */
int __fastcall sub_605301E8(int a1, _DWORD *a2);  /* 0x005301e8 */
int __fastcall sub_6053022C(int a1, int a2);  /* 0x0053022c */
int __fastcall sub_60530238(int result, _DWORD *a2);  /* 0x00530238 */
int __fastcall sub_60530248(int a1, int a2);  /* 0x00530248 */
int __fastcall sub_60530270(int a1);  /* 0x00530270 */
int __fastcall sub_60530278(int a1);  /* 0x00530278 */
int __fastcall sub_60530314(struct sead_IDisposer *a1);  /* 0x00530314 */
int __fastcall sub_6053038C(int a1);  /* 0x0053038c */
int __fastcall sub_60530420(int a1);  /* 0x00530420 */
int __fastcall sub_60530850(int a1);  /* 0x00530850 */
int __fastcall sub_60530C64(int a1);  /* 0x00530c64 */
int __fastcall sub_60530CB4(int a1, int a2, int a3, int a4);  /* 0x00530cb4 */
signed int __fastcall sub_60530D3C(signed int result, int a2, int a3);  /* 0x00530d3c */
int __fastcall sub_60530DD8(_DWORD *a1, int *a2);  /* 0x00530dd8 */
int __fastcall sub_60530E50(int result);  /* 0x00530e50 */
int __fastcall sub_60530F3C(int a1);  /* 0x00530f3c */
int __fastcall sub_60530FBC(int a1);  /* 0x00530fbc */
int __fastcall sub_60530FC4(int a1, int a2, int a3);  /* 0x00530fc4 */
int __fastcall sub_60531178(int a1);  /* 0x00531178 */
int __fastcall sub_6053138C(_DWORD *a1, _DWORD *a2);  /* 0x0053138c */
int __fastcall sub_60531704(int a1, int a2);  /* 0x00531704 */
int __fastcall sub_6053173C(int a1, _DWORD *a2);  /* 0x0053173c */
int __fastcall sub_60531780(int a1, int a2);  /* 0x00531780 */
int __fastcall sub_6053178C(int result, _DWORD *a2);  /* 0x0053178c */
int __fastcall sub_6053179C(int a1, int a2);  /* 0x0053179c */
int __fastcall sub_605317C4(int a1);  /* 0x005317c4 */
int __fastcall sub_605317CC(int a1);  /* 0x005317cc */
int __fastcall sub_60531804(int a1, int a2);  /* 0x00531804 */
int __fastcall sub_6053183C(int a1, _DWORD *a2);  /* 0x0053183c */
int __fastcall sub_60531880(int a1, int a2);  /* 0x00531880 */
int __fastcall sub_6053188C(int result, _DWORD *a2);  /* 0x0053188c */
int __fastcall sub_6053189C(int a1, int a2);  /* 0x0053189c */
int __fastcall sub_605318C4(int a1);  /* 0x005318c4 */
int __fastcall sub_605318CC(int a1);  /* 0x005318cc */
int __fastcall sub_60531B7C(int a1);  /* 0x00531b7c */
void __fastcall sub_60531B94(struct sead_IDisposer *a1);  /* 0x00531b94 */
int __fastcall sub_60531B9C(int a1);  /* 0x00531b9c */
int __fastcall sub_60531C68(int a1, int a2, _DWORD *a3);  /* 0x00531c68 */
int __fastcall sub_60531DE4(int a1);  /* 0x00531de4 */
int __fastcall sub_60531DEC(int a1);  /* 0x00531dec */
unsigned int __fastcall sub_605324A4(int a1, unsigned int a2);  /* 0x005324a4 */
unsigned int __fastcall sub_605325C0(int a1);  /* 0x005325c0 */
int __fastcall sub_60532710(int a1);  /* 0x00532710 */
int __fastcall sub_60532800(int a1);  /* 0x00532800 */
bool __fastcall sub_60532834(int a1);  /* 0x00532834 */
int __fastcall sub_60532930(int a1, int a2);  /* 0x00532930 */
int __fastcall sub_60532968(int a1, _DWORD *a2);  /* 0x00532968 */
int __fastcall sub_605329AC(int a1, int a2);  /* 0x005329ac */
int __fastcall sub_605329B8(int result, _DWORD *a2);  /* 0x005329b8 */
int __fastcall sub_605329C8(int a1, int a2);  /* 0x005329c8 */
int __fastcall sub_605329F0(int a1);  /* 0x005329f0 */
int __fastcall sub_605329F8(int a1);  /* 0x005329f8 */
int __fastcall sub_60532A20(struct sead_IDisposer *a1);  /* 0x00532a20 */
int __fastcall sub_60532E04(struct sead_IDisposer *a1);  /* 0x00532e04 */
int __fastcall sub_60532E74(int a1);  /* 0x00532e74 */
int __fastcall sub_60532EF0(int a1);  /* 0x00532ef0 */
int __fastcall sub_60532F74(int result);  /* 0x00532f74 */
int __fastcall sub_60533000(int a1);  /* 0x00533000 */
int __fastcall sub_6053341C(int a1);  /* 0x0053341c */
int __fastcall sub_60533464(int a1);  /* 0x00533464 */
int __fastcall sub_60533530(int a1);  /* 0x00533530 */
int __fastcall sub_60533640(int a1);  /* 0x00533640 */
int __fastcall sub_605336B8(int a1);  /* 0x005336b8 */
int __fastcall sub_60533E6C(int a1);  /* 0x00533e6c */
int __fastcall SE_SYS_CHANGE_MODE_RDASH_ref(int a1);  /* 0x00533e84 */
int __fastcall sub_60533FB4(int a1);  /* 0x00533fb4 */
int __fastcall sub_60533FF0(int result);  /* 0x00533ff0 */
int __fastcall sub_60534010(int result);  /* 0x00534010 */
int __fastcall sub_60534044(int result);  /* 0x00534044 */
int __fastcall sub_60534070(int a1);  /* 0x00534070 */
int __fastcall sub_605340AC(int a1);  /* 0x005340ac */
int __fastcall sub_605340E8(int a1);  /* 0x005340e8 */
int __fastcall sub_605341D8(int a1);  /* 0x005341d8 */
int __fastcall sub_60534214(int a1);  /* 0x00534214 */
unsigned int __fastcall sub_6053427C(int a1);  /* 0x0053427c */
int __fastcall sub_605342B4(int a1);  /* 0x005342b4 */
int __fastcall sub_60534304(int a1);  /* 0x00534304 */
int __fastcall sub_60534310(int a1);  /* 0x00534310 */
int __fastcall sub_6053432C(int result);  /* 0x0053432c */
int __fastcall sub_60534348(int result);  /* 0x00534348 */
int __fastcall sub_60534380(int result);  /* 0x00534380 */
int __fastcall sub_60534394(int result);  /* 0x00534394 */
int __fastcall sub_605343F8(int result);  /* 0x005343f8 */
int __fastcall sub_60534414(int a1);  /* 0x00534414 */
int __fastcall SE_SYS_FS_DELETE_ref(int a1);  /* 0x00534584 */
int __fastcall sub_60534670(_DWORD *a1);  /* 0x00534670 */
int __fastcall sub_605346C4(int result);  /* 0x005346c4 */
int __fastcall sub_6053472C(int a1);  /* 0x0053472c */
int __fastcall sub_605347C0(int result);  /* 0x005347c0 */
int __fastcall sub_605347DC(int a1);  /* 0x005347dc */
int __fastcall sub_60534990(int a1);  /* 0x00534990 */
int __fastcall sub_60534A18(int a1);  /* 0x00534a18 */
int __fastcall sub_60534A54(int a1);  /* 0x00534a54 */
int __fastcall sub_60534AE4(int result);  /* 0x00534ae4 */
int __fastcall sub_60534B28(int a1);  /* 0x00534b28 */
int __fastcall sub_60534CD8(int a1);  /* 0x00534cd8 */
int __fastcall sub_60534D94(int a1);  /* 0x00534d94 */
int __fastcall sub_60535044(int a1);  /* 0x00535044 */
int __fastcall sub_60535104(int result);  /* 0x00535104 */
int __fastcall sub_60535158(int a1);  /* 0x00535158 */
int __fastcall sub_60535350(int a1);  /* 0x00535350 */
int __fastcall sub_6053538C(int a1);  /* 0x0053538c */
int __fastcall SE_SYS_FS_COPY_ref(int a1);  /* 0x0053545c */
int __fastcall sub_60535548(_DWORD *a1);  /* 0x00535548 */
int __fastcall sub_6053559C(int result);  /* 0x0053559c */
int __fastcall sub_60535600(int result);  /* 0x00535600 */
int __fastcall sub_6053561C(int a1);  /* 0x0053561c */
int __fastcall sub_605357D0(int a1);  /* 0x005357d0 */
int __fastcall sub_605359CC(int a1);  /* 0x005359cc */
int __fastcall sub_60535A08(int a1);  /* 0x00535a08 */
int __fastcall sub_60535B94(int result);  /* 0x00535b94 */
int __fastcall sub_60535CA4(int a1);  /* 0x00535ca4 */
int __fastcall sub_60535D3C(int a1);  /* 0x00535d3c */
int __fastcall sub_60535D78(int result);  /* 0x00535d78 */
int __fastcall sub_60535DE0(int result);  /* 0x00535de0 */
int __fastcall sub_60535E08(int result);  /* 0x00535e08 */
int __fastcall sub_60535E18(int result);  /* 0x00535e18 */
int __fastcall sub_60535E40(int a1);  /* 0x00535e40 */
int __fastcall sub_60535FEC(int a1);  /* 0x00535fec */
int __fastcall sub_60536070(int a1);  /* 0x00536070 */
int __fastcall sub_60536104(int a1);  /* 0x00536104 */
int __fastcall sub_605362E4(int result);  /* 0x005362e4 */
int __fastcall sub_6053630C(int a1);  /* 0x0053630c */
int __fastcall sub_605364F4(int a1);  /* 0x005364f4 */
int __fastcall sub_605365B0(int a1);  /* 0x005365b0 */
int __fastcall sub_60536620(int result);  /* 0x00536620 */
int __fastcall sub_60536648(int result);  /* 0x00536648 */
int __fastcall sub_60536678(int result);  /* 0x00536678 */
int __fastcall sub_6053668C(int result);  /* 0x0053668c */
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
int __fastcall sub_60539384(int a1, int a2);  /* 0x00539384 */
int __fastcall sub_605393BC(int a1, _DWORD *a2);  /* 0x005393bc */
int __fastcall sub_60539400(int a1, int a2);  /* 0x00539400 */
int __fastcall sub_6053940C(int result, _DWORD *a2);  /* 0x0053940c */
int __fastcall sub_6053941C(int a1, int a2);  /* 0x0053941c */
int __fastcall sub_60539444(int a1);  /* 0x00539444 */
int __fastcall sub_6053944C(int a1);  /* 0x0053944c */
int __fastcall sub_605394E0(struct sead_IDisposer *a1);  /* 0x005394e0 */
int __fastcall sub_60539550(int a1);  /* 0x00539550 */
int __fastcall sub_605395CC(int a1);  /* 0x005395cc */
int __fastcall sub_6053963C(int a1);  /* 0x0053963c */
int __fastcall sub_6053967C(int a1);  /* 0x0053967c */
int __fastcall sub_60539A00(int a1);  /* 0x00539a00 */
int __fastcall sub_60539A48(int a1);  /* 0x00539a48 */
int __fastcall sub_60539AD0(int a1);  /* 0x00539ad0 */
int __fastcall sub_60539BC8(int a1);  /* 0x00539bc8 */
int __fastcall sub_60539C18(int a1);  /* 0x00539c18 */
int __fastcall sub_60539C58(int a1);  /* 0x00539c58 */
int __fastcall sub_60539DAC(int a1);  /* 0x00539dac */
int __fastcall sub_6053A478(int a1);  /* 0x0053a478 */
int __fastcall SE_SYS_CHANGE_MODE_RDASH_ref_2(int a1);  /* 0x0053a490 */
int __fastcall sub_6053A570(int a1);  /* 0x0053a570 */
int __fastcall sub_6053A5AC(int result);  /* 0x0053a5ac */
int __fastcall sub_6053A5CC(int result);  /* 0x0053a5cc */
int __fastcall sub_6053A600(int result);  /* 0x0053a600 */
int __fastcall sub_6053A62C(int a1);  /* 0x0053a62c */
int __fastcall sub_6053A668(int a1);  /* 0x0053a668 */
int __fastcall sub_6053A6A4(int a1);  /* 0x0053a6a4 */
int __fastcall sub_6053A78C(int a1);  /* 0x0053a78c */
int __fastcall sub_6053A7C8(int a1);  /* 0x0053a7c8 */
unsigned int __fastcall sub_6053A830(int a1);  /* 0x0053a830 */
int __fastcall sub_6053A868(int a1);  /* 0x0053a868 */
int __fastcall sub_6053A8B8(int a1);  /* 0x0053a8b8 */
int __fastcall sub_6053A8C0(int a1);  /* 0x0053a8c0 */
int __fastcall sub_6053A8DC(int result);  /* 0x0053a8dc */
int __fastcall sub_6053A900(int result);  /* 0x0053a900 */
int __fastcall sub_6053A91C(int a1);  /* 0x0053a91c */
int __fastcall SE_SYS_FS_DELETE_ref_2(int a1);  /* 0x0053a9a0 */
int __fastcall sub_6053AA88(_DWORD *a1);  /* 0x0053aa88 */
int __fastcall sub_6053AB78(int result);  /* 0x0053ab78 */
int __fastcall sub_6053ABE0(int a1);  /* 0x0053abe0 */
int __fastcall sub_6053AC74(int result);  /* 0x0053ac74 */
int __fastcall sub_6053AC90(int a1);  /* 0x0053ac90 */
int __fastcall sub_6053AE44(int a1);  /* 0x0053ae44 */
int __fastcall sub_6053AEC8(int a1);  /* 0x0053aec8 */
int __fastcall sub_6053AF04(int a1);  /* 0x0053af04 */
int __fastcall sub_6053AF94(int result);  /* 0x0053af94 */
int __fastcall sub_6053AFD8(int a1);  /* 0x0053afd8 */
int __fastcall sub_6053B160(int a1);  /* 0x0053b160 */
int __fastcall sub_6053B250(int a1);  /* 0x0053b250 */
int __fastcall sub_6053B4D8(int a1);  /* 0x0053b4d8 */
int __fastcall sub_6053B5CC(int result);  /* 0x0053b5cc */
int __fastcall sub_6053B61C(int a1);  /* 0x0053b61c */
int __fastcall sub_6053B7B0(int a1);  /* 0x0053b7b0 */
int __fastcall sub_6053B824(int a1);  /* 0x0053b824 */
int __fastcall SE_SYS_FS_COPY_ref_2(int a1);  /* 0x0053b8f0 */
int __fastcall sub_6053B9D8(_DWORD *a1);  /* 0x0053b9d8 */
int __fastcall sub_6053BAC8(int result);  /* 0x0053bac8 */
int __fastcall sub_6053BB2C(int result);  /* 0x0053bb2c */
int __fastcall sub_6053BB48(int a1);  /* 0x0053bb48 */
int __fastcall sub_6053BCFC(int a1);  /* 0x0053bcfc */
int __fastcall sub_6053BECC(int a1);  /* 0x0053becc */
int __fastcall sub_6053BF08(int a1);  /* 0x0053bf08 */
int __fastcall sub_6053C06C(int result);  /* 0x0053c06c */
int __fastcall sub_6053C17C(int a1);  /* 0x0053c17c */
int __fastcall sub_6053C214(int a1);  /* 0x0053c214 */
int __fastcall sub_6053C250(int result);  /* 0x0053c250 */
int __fastcall sub_6053C2B8(int result);  /* 0x0053c2b8 */
int __fastcall sub_6053C2E0(int result);  /* 0x0053c2e0 */
int __fastcall sub_6053C2F0(int result);  /* 0x0053c2f0 */
int __fastcall sub_6053C318(int a1);  /* 0x0053c318 */
int __fastcall sub_6053C49C(int a1);  /* 0x0053c49c */
int __fastcall sub_6053C554(int a1);  /* 0x0053c554 */
int __fastcall sub_6053C5E8(int a1);  /* 0x0053c5e8 */
int __fastcall sub_6053C7D4(int result);  /* 0x0053c7d4 */
int __fastcall sub_6053C7FC(int a1);  /* 0x0053c7fc */
int __fastcall sub_6053C980(int a1);  /* 0x0053c980 */
int __fastcall sub_6053CA70(int a1);  /* 0x0053ca70 */
int __fastcall sub_6053CAE0(int result);  /* 0x0053cae0 */
int __fastcall sub_6053CB08(int result);  /* 0x0053cb08 */
int __fastcall sub_6053CB60(int a1);  /* 0x0053cb60 */
int __fastcall sub_6053CBC8(int result);  /* 0x0053cbc8 */
int __fastcall sub_6053CC18(int a1);  /* 0x0053cc18 */
int __fastcall sub_6053CC7C(int a1);  /* 0x0053cc7c */
int __fastcall sub_6053CF68(int a1);  /* 0x0053cf68 */
int __fastcall sub_6053D028(int a1);  /* 0x0053d028 */
int __fastcall sub_6053D538(_DWORD *a1);  /* 0x0053d538 */
int __fastcall sub_6053E53C(int a1);  /* 0x0053e53c */
int __fastcall sub_6053EE84(int a1);  /* 0x0053ee84 */
int __fastcall sub_6053F07C(int a1, _DWORD *a2);  /* 0x0053f07c */
int __fastcall sub_6053F0DC(int a1);  /* 0x0053f0dc */
int __fastcall sub_6053F30C(int a1, unsigned int a2);  /* 0x0053f30c */
int __fastcall sub_6053F41C(int a1, int a2);  /* 0x0053f41c */
int __fastcall sub_6053F454(int a1, _DWORD *a2);  /* 0x0053f454 */
int __fastcall sub_6053F498(int a1, int a2);  /* 0x0053f498 */
int __fastcall sub_6053F4A4(int result, _DWORD *a2);  /* 0x0053f4a4 */
int __fastcall sub_6053F4B4(int a1, int a2);  /* 0x0053f4b4 */
int __fastcall sub_6053F4DC(int a1);  /* 0x0053f4dc */
int __fastcall sub_6053F4E4(int a1);  /* 0x0053f4e4 */
int __fastcall sub_6053F50C(int result);  /* 0x0053f50c */
int __fastcall sub_6053F51C(int result);  /* 0x0053f51c */
int __fastcall sub_6053F564(int a1);  /* 0x0053f564 */
int __fastcall sub_6053F754(int a1);  /* 0x0053f754 */
int __fastcall sub_6053F8C8(int result);  /* 0x0053f8c8 */
int __fastcall sub_6053F8F0(int result);  /* 0x0053f8f0 */
int __fastcall sub_6053F900(int result);  /* 0x0053f900 */
int __fastcall sub_6053F92C(int a1);  /* 0x0053f92c */
int __fastcall sub_6053FA9C(int a1);  /* 0x0053fa9c */
int __fastcall sub_6053FB20(int a1);  /* 0x0053fb20 */
int __fastcall sub_6053FB60(int result);  /* 0x0053fb60 */
int __fastcall sub_6053FB84(int a1);  /* 0x0053fb84 */
int __fastcall sub_6053FB90(int a1);  /* 0x0053fb90 */
int __fastcall sub_6053FBB0(int result);  /* 0x0053fbb0 */
int __fastcall sub_6053FBD4(int result);  /* 0x0053fbd4 */
int __fastcall sub_6053FC00(int result);  /* 0x0053fc00 */
int __fastcall sub_6053FC74(int a1);  /* 0x0053fc74 */
int __fastcall SE_SYS_FS_ref(int a1);  /* 0x0053fd5c */
int __fastcall sub_6053FEA8(int a1);  /* 0x0053fea8 */
int __fastcall sub_6053FEF8(int a1);  /* 0x0053fef8 */
int __fastcall sub_60540164(int a1);  /* 0x00540164 */
int __fastcall sub_605401A4(int result);  /* 0x005401a4 */
int __fastcall sub_605401B4(int result);  /* 0x005401b4 */
int __fastcall sub_605401E0(int a1);  /* 0x005401e0 */
int __fastcall sub_60540398(int result);  /* 0x00540398 */
int __fastcall sub_605403C0(int a1);  /* 0x005403c0 */
int __fastcall sub_605403F4(int a1);  /* 0x005403f4 */
int __fastcall sub_6054042C(int a1);  /* 0x0054042c */
int __fastcall sub_6054046C(int result);  /* 0x0054046c */
int __fastcall sub_605405B4(int a1);  /* 0x005405b4 */
int __fastcall sub_605405F4(int result);  /* 0x005405f4 */
int __fastcall sub_60540620(int result);  /* 0x00540620 */
int __fastcall sub_6054064C(int a1);  /* 0x0054064c */
int __fastcall sub_60540800(int a1);  /* 0x00540800 */
int __fastcall sub_60540818(int a1);  /* 0x00540818 */
int __fastcall sub_60540844(int a1);  /* 0x00540844 */
int __fastcall SE_SYS_FS_ref_2(int a1);  /* 0x0054097c */
int __fastcall sub_60540AC8(int a1);  /* 0x00540ac8 */
int __fastcall sub_60540B18(int a1);  /* 0x00540b18 */
int __fastcall sub_60540DB4(_DWORD *a1);  /* 0x00540db4 */
int __fastcall sub_60540E5C(int a1, char a2);  /* 0x00540e5c */
int __fastcall sub_60541978(int a1);  /* 0x00541978 */
int __fastcall sub_60541D74(_DWORD *a1);  /* 0x00541d74 */
int __fastcall sub_60541DE8(int a1, _DWORD *a2);  /* 0x00541de8 */
int __fastcall sub_60541DF8(int a1, unsigned __int8 a2, unsigned int a3);  /* 0x00541df8 */
int __fastcall sub_60541F34(int a1, int a2);  /* 0x00541f34 */
int __fastcall sub_60541F6C(int a1, _DWORD *a2);  /* 0x00541f6c */
int __fastcall sub_60541FB0(int a1, int a2);  /* 0x00541fb0 */
int __fastcall sub_60541FBC(int result, _DWORD *a2);  /* 0x00541fbc */
int __fastcall sub_60541FCC(int a1, int a2);  /* 0x00541fcc */
int __fastcall sub_60541FF4(int a1);  /* 0x00541ff4 */
int __fastcall sub_60541FFC(int a1);  /* 0x00541ffc */
int __fastcall sub_60542098(struct sead_IDisposer *a1);  /* 0x00542098 */
int __fastcall sub_60542110(int a1);  /* 0x00542110 */
int __fastcall sub_605422B4(_DWORD *a1);  /* 0x005422b4 */
int __fastcall sub_605422E4(int a1);  /* 0x005422e4 */
int __fastcall sub_605425C8(int a1);  /* 0x005425c8 */
int __fastcall sub_605425EC(int result, _DWORD *a2);  /* 0x005425ec */
int __fastcall sub_60542604(int a1);  /* 0x00542604 */
int __fastcall sub_605426E8(int result);  /* 0x005426e8 */
int __fastcall sub_6054273C(int a1);  /* 0x0054273c */
int __fastcall sub_60542790(int a1, int a2);  /* 0x00542790 */
int __fastcall sub_605427C8(int a1, _DWORD *a2);  /* 0x005427c8 */
int __fastcall sub_6054280C(int a1, int a2);  /* 0x0054280c */
int __fastcall sub_60542818(int result, _DWORD *a2);  /* 0x00542818 */
int __fastcall sub_60542828(int a1, int a2);  /* 0x00542828 */
int __fastcall sub_60542850(int a1);  /* 0x00542850 */
int __fastcall sub_60542858(int a1);  /* 0x00542858 */
int __fastcall sub_60542880(int a1);  /* 0x00542880 */
int __fastcall sub_60542940(_DWORD *a1);  /* 0x00542940 */
int __fastcall sub_60542970(int a1);  /* 0x00542970 */
int __fastcall sub_60542B54(int a1, int a2);  /* 0x00542b54 */
int __fastcall sub_60542C10(int a1, _DWORD *a2);  /* 0x00542c10 */
int __fastcall sub_60542C1C(int a1);  /* 0x00542c1c */
int __fastcall sub_60542CE8(_DWORD *a1);  /* 0x00542ce8 */
int __fastcall sub_60542D18(int a1);  /* 0x00542d18 */
int __fastcall sub_60542F90(int result);  /* 0x00542f90 */
int __fastcall sub_60542FA4(int a1);  /* 0x00542fa4 */
int __fastcall sub_60543094(int result, _DWORD *a2);  /* 0x00543094 */
int __fastcall sub_605430C0(int result);  /* 0x005430c0 */
int __fastcall sub_605430CC(int result, int a2);  /* 0x005430cc */
int __fastcall sub_605430EC(int a1);  /* 0x005430ec */
int __fastcall sub_60543190(int a1);  /* 0x00543190 */
int __fastcall sub_60543258(_DWORD *a1);  /* 0x00543258 */
int __fastcall sub_60543288(int a1);  /* 0x00543288 */
int __fastcall sub_605434F4(int result);  /* 0x005434f4 */
int __fastcall sub_60543508(int result);  /* 0x00543508 */
int __fastcall sub_60543620(int result, _DWORD *a2);  /* 0x00543620 */
int __fastcall sub_6054364C(int result);  /* 0x0054364c */
int __fastcall sub_60543658(int result, int a2);  /* 0x00543658 */
int __fastcall sub_60543678(int result);  /* 0x00543678 */
int __fastcall sub_60543688(int result);  /* 0x00543688 */
int __fastcall sub_6054371C(int a1);  /* 0x0054371c */
int __fastcall sub_60543754(int a1);  /* 0x00543754 */
int __fastcall sub_60543824(int a1);  /* 0x00543824 */
int __fastcall sub_605438D8(int a1);  /* 0x005438d8 */
int __fastcall sub_60543B8C(int result);  /* 0x00543b8c */
int __fastcall sub_60543BE8(int result);  /* 0x00543be8 */
int __fastcall sub_60543BF8(int a1);  /* 0x00543bf8 */
int __fastcall sub_60543C14(int a1);  /* 0x00543c14 */
int __fastcall sub_60543C80(int result);  /* 0x00543c80 */
int __fastcall sub_60543CBC(int a1);  /* 0x00543cbc */
int __fastcall sub_60543CF0(int a1);  /* 0x00543cf0 */
int __fastcall sub_60543DE0(_DWORD *a1);  /* 0x00543de0 */
int __fastcall sub_60543E7C(int a1);  /* 0x00543e7c */
int __fastcall sub_60543F50(int a1);  /* 0x00543f50 */
int __fastcall sub_60543F60(int a1);  /* 0x00543f60 */
int __fastcall sub_60543FFC(int a1);  /* 0x00543ffc */
int __fastcall sub_60544040(int a1);  /* 0x00544040 */
int __fastcall sub_60544098(int result);  /* 0x00544098 */
int __fastcall sub_605440AC(int result);  /* 0x005440ac */
int __fastcall sub_60544118(int result);  /* 0x00544118 */
int __fastcall sub_60544144(int a1);  /* 0x00544144 */
int __fastcall sub_605441A8(int result);  /* 0x005441a8 */
int __fastcall sub_605441D4(int result);  /* 0x005441d4 */
int __fastcall sub_60544228(int a1);  /* 0x00544228 */
int __fastcall sub_60544260(int a1);  /* 0x00544260 */
int __fastcall sub_605442B8(int result);  /* 0x005442b8 */
int __fastcall sub_605442CC(int result);  /* 0x005442cc */
int __fastcall sub_6054434C(int a1);  /* 0x0054434c */
int __fastcall sub_6054438C(int result);  /* 0x0054438c */
int __fastcall sub_6054439C(int result);  /* 0x0054439c */
int __fastcall sub_605443D4(int result);  /* 0x005443d4 */
int __fastcall sub_6054440C(int result);  /* 0x0054440c */
int __fastcall sub_6054441C(int a1);  /* 0x0054441c */
int __fastcall sub_605444A4(int a1);  /* 0x005444a4 */
int __fastcall sub_605444FC(int result);  /* 0x005444fc */
int __fastcall sub_60544510(int result);  /* 0x00544510 */
int __fastcall sub_6054458C(int a1, unsigned int a2);  /* 0x0054458c */
int __fastcall sub_605445FC(int a1);  /* 0x005445fc */
int __fastcall sub_60544658(int result);  /* 0x00544658 */
int __fastcall sub_6054466C(int result);  /* 0x0054466c */
int __fastcall sub_605446A0(int result);  /* 0x005446a0 */
int __fastcall sub_605446CC(int result);  /* 0x005446cc */
int __fastcall sub_60544720(int result);  /* 0x00544720 */
int __fastcall sub_60544824(int result);  /* 0x00544824 */
int __fastcall sub_6054486C(int result);  /* 0x0054486c */
int __fastcall sub_60544890(int a1);  /* 0x00544890 */
int __fastcall sub_605448A4(int a1);  /* 0x005448a4 */
int __fastcall sub_605448C0(int result);  /* 0x005448c0 */
int __fastcall sub_605448E4(int result);  /* 0x005448e4 */
int __fastcall sub_605448F4(int a1);  /* 0x005448f4 */
int __fastcall sub_6054495C(int a1);  /* 0x0054495c */
int __fastcall sub_605449D0(int a1);  /* 0x005449d0 */
int __fastcall sub_605449E8(int result);  /* 0x005449e8 */
int __fastcall sub_605449F8(int result);  /* 0x005449f8 */
int __fastcall sub_60544A68(int a1);  /* 0x00544a68 */
int __fastcall sub_60544AD0(int a1);  /* 0x00544ad0 */
int __fastcall sub_60544B40(int a1);  /* 0x00544b40 */
int __fastcall sub_60544B84(int a1);  /* 0x00544b84 */
int __fastcall sub_60544BDC(int result);  /* 0x00544bdc */
int __fastcall sub_60544BF0(int result);  /* 0x00544bf0 */
int __fastcall sub_60544C6C(int result);  /* 0x00544c6c */
int __fastcall sub_60544C94(int a1);  /* 0x00544c94 */
int __fastcall sub_60544E84(int a1);  /* 0x00544e84 */
int __fastcall sub_60544F3C(int a1);  /* 0x00544f3c */
int __fastcall sub_60544F4C(int a1);  /* 0x00544f4c */
int __fastcall sub_605450E0(_DWORD *a1);  /* 0x005450e0 */
int __fastcall sub_60545310(int a1);  /* 0x00545310 */
int __fastcall sub_605454B8(int a1);  /* 0x005454b8 */
int __fastcall sub_6054550C(int a1, _DWORD *a2);  /* 0x0054550c */
int __fastcall sub_6054554C(int result);  /* 0x0054554c */
int __fastcall sub_6054555C(int a1, int a2);  /* 0x0054555c */
int __fastcall sub_605455D4(int a1);  /* 0x005455d4 */
int __fastcall sub_605462AC(int result);  /* 0x005462ac */
int __fastcall sub_605463C0(int result);  /* 0x005463c0 */
int __fastcall sub_60546B50(_DWORD *a1);  /* 0x00546b50 */
int __fastcall sub_60546CBC(int a1, int a2);  /* 0x00546cbc */
int __fastcall sub_60546CF4(int a1, _DWORD *a2);  /* 0x00546cf4 */
int __fastcall sub_60546D38(int a1, int a2);  /* 0x00546d38 */
int __fastcall sub_60546D44(int result, _DWORD *a2);  /* 0x00546d44 */
int __fastcall sub_60546D54(int a1, int a2);  /* 0x00546d54 */
int __fastcall sub_60546D7C(int a1);  /* 0x00546d7c */
int __fastcall sub_60546D84(int a1);  /* 0x00546d84 */
int __fastcall sub_60546DB8(_DWORD *a1);  /* 0x00546db8 */
int __fastcall sub_60546F9C(int a1);  /* 0x00546f9c */
int __fastcall sub_60546FD8(int a1);  /* 0x00546fd8 */
int __fastcall sub_60547014(int result);  /* 0x00547014 */
int __fastcall sub_6054705C(_DWORD *a1);  /* 0x0054705c */
int __fastcall sub_60547068(int result);  /* 0x00547068 */
int __fastcall sub_60547090(int a1);  /* 0x00547090 */
int __fastcall sub_605470BC(int result);  /* 0x005470bc */
int __fastcall sub_605470F0(_DWORD *a1);  /* 0x005470f0 */
int __fastcall sub_605471A0(int a1);  /* 0x005471a0 */
int __fastcall sub_605471D8(int a1);  /* 0x005471d8 */
int __fastcall sub_6054720C(int a1);  /* 0x0054720c */
int __fastcall sub_60547240(int a1);  /* 0x00547240 */
int __fastcall sub_6054728C(int a1);  /* 0x0054728c */
int __fastcall sub_60547314(int a1);  /* 0x00547314 */
int __fastcall sub_60547360(int a1);  /* 0x00547360 */
int __fastcall sub_605473E8(_DWORD *a1);  /* 0x005473e8 */
int __fastcall sub_60547440(int a1);  /* 0x00547440 */
int __fastcall sub_60547488(_DWORD *a1);  /* 0x00547488 */
int __fastcall sub_605474E0(int a1);  /* 0x005474e0 */
int __fastcall sub_60547528(_DWORD *a1);  /* 0x00547528 */
int __fastcall sub_60547580(int a1);  /* 0x00547580 */
int __fastcall sub_605475C8(_DWORD *a1);  /* 0x005475c8 */
int __fastcall sub_60547620(int a1);  /* 0x00547620 */
int __fastcall sub_60547668(int result);  /* 0x00547668 */
int __fastcall sub_60547678(int result);  /* 0x00547678 */
int __fastcall sub_605476D0(int a1);  /* 0x005476d0 */
int __fastcall sub_60547730(int result);  /* 0x00547730 */
int __fastcall sub_60547784(int result);  /* 0x00547784 */
int __fastcall sub_605477B8(int a1);  /* 0x005477b8 */
int __fastcall sub_60547AA4(int a1);  /* 0x00547aa4 */
int __fastcall sub_60547B4C(int a1);  /* 0x00547b4c */
int __fastcall sub_60547BF4(int a1);  /* 0x00547bf4 */
int __fastcall sub_60547D74(int a1);  /* 0x00547d74 */
int __fastcall sub_60547FDC(int a1);  /* 0x00547fdc */
int __fastcall sub_60548168(_DWORD *a1);  /* 0x00548168 */
int __fastcall sub_605483E0(int a1);  /* 0x005483e0 */
int __fastcall sub_60548530(int a1);  /* 0x00548530 */
int __fastcall sub_60548D68(int a1);  /* 0x00548d68 */
int __fastcall sub_60548E4C(int a1);  /* 0x00548e4c */
int __fastcall sub_60548F10(int result, _DWORD *a2);  /* 0x00548f10 */
int __fastcall sub_60548F2C(int a1, unsigned int a2);  /* 0x00548f2c */
int __fastcall sub_60548F78(_DWORD *a1, int a2);  /* 0x00548f78 */
int __fastcall sub_605492C4(int a1);  /* 0x005492c4 */
int __fastcall sub_60549400(_DWORD *a1);  /* 0x00549400 */
int __fastcall sub_60549510(int a1);  /* 0x00549510 */
int __fastcall sub_6054963C(int a1);  /* 0x0054963c */
int __fastcall sub_60549854(unsigned int a1);  /* 0x00549854 */
int __fastcall sub_60549A7C(int a1, int a2);  /* 0x00549a7c */
int __fastcall sub_60549AB4(int a1, _DWORD *a2);  /* 0x00549ab4 */
int __fastcall sub_60549AF8(int a1, int a2);  /* 0x00549af8 */
int __fastcall sub_60549B04(int result, _DWORD *a2);  /* 0x00549b04 */
int __fastcall sub_60549B14(int a1, int a2);  /* 0x00549b14 */
int __fastcall sub_60549B3C(int a1);  /* 0x00549b3c */
int __fastcall sub_60549B44(int a1);  /* 0x00549b44 */
int __fastcall sub_60549B70(int a1);  /* 0x00549b70 */
int __fastcall sub_60549B88(int a1);  /* 0x00549b88 */
int __fastcall sub_60549BDC(int a1);  /* 0x00549bdc */
int __fastcall sub_60549C1C(int result);  /* 0x00549c1c */
int __fastcall sub_60549C40(int a1);  /* 0x00549c40 */
int __fastcall sub_60549C88(int a1);  /* 0x00549c88 */
int __fastcall sub_60549CC0(int result);  /* 0x00549cc0 */
int __fastcall sub_60549CD0(int a1);  /* 0x00549cd0 */
int __fastcall sub_60549E08(_DWORD *a1);  /* 0x00549e08 */
int __fastcall sub_60549E38(int a1);  /* 0x00549e38 */
int __fastcall sub_6054A104(int a1);  /* 0x0054a104 */
int __fastcall sub_6054A134(int result, _DWORD *a2);  /* 0x0054a134 */
int __fastcall sub_6054A160(int a1, int a2);  /* 0x0054a160 */
int __fastcall sub_6054A198(int a1, _DWORD *a2);  /* 0x0054a198 */
int __fastcall sub_6054A1DC(int a1, int a2);  /* 0x0054a1dc */
int __fastcall sub_6054A1E8(int result, _DWORD *a2);  /* 0x0054a1e8 */
int __fastcall sub_6054A1F8(int a1, int a2);  /* 0x0054a1f8 */
int __fastcall sub_6054A220(int a1);  /* 0x0054a220 */
int __fastcall sub_6054A228(int a1);  /* 0x0054a228 */
int __fastcall sub_6054A254(int a1);  /* 0x0054a254 */
int __fastcall sub_6054A3D4(int a1);  /* 0x0054a3d4 */
int __fastcall sub_6054A418(int a1);  /* 0x0054a418 */
int __fastcall sub_6054A44C(int a1);  /* 0x0054a44c */
int __fastcall sub_6054A468(int a1);  /* 0x0054a468 */
int __fastcall sub_6054A4B4(int a1);  /* 0x0054a4b4 */
int __fastcall sub_6054A608(_DWORD *a1);  /* 0x0054a608 */
int __fastcall sub_6054A638(int a1);  /* 0x0054a638 */
int __fastcall sub_6054AA2C(int a1);  /* 0x0054aa2c */
int __fastcall sub_6054AA50(int a1, _DWORD *a2);  /* 0x0054aa50 */
int __fastcall sub_6054AC20(float *a1);  /* 0x0054ac20 */
int __fastcall sub_6054B014(int a1, int a2);  /* 0x0054b014 */
int __fastcall sub_6054B04C(int a1, _DWORD *a2);  /* 0x0054b04c */
int __fastcall sub_6054B090(int a1, int a2);  /* 0x0054b090 */
int __fastcall sub_6054B09C(int result, _DWORD *a2);  /* 0x0054b09c */
int __fastcall sub_6054B0AC(int a1, int a2);  /* 0x0054b0ac */
int __fastcall sub_6054B0D4(int a1);  /* 0x0054b0d4 */
int __fastcall sub_6054B0DC(int a1);  /* 0x0054b0dc */
int __fastcall sub_6054B108(int a1);  /* 0x0054b108 */
int __fastcall sub_6054B120(int a1);  /* 0x0054b120 */
int __fastcall sub_6054B178(int a1);  /* 0x0054b178 */
int __fastcall sub_6054B1B8(int result);  /* 0x0054b1b8 */
int __fastcall sub_6054B1DC(int a1);  /* 0x0054b1dc */
int __fastcall sub_6054B22C(int a1);  /* 0x0054b22c */
int __fastcall sub_6054B264(int result);  /* 0x0054b264 */
int __fastcall sub_6054B278(int a1);  /* 0x0054b278 */
int __fastcall sub_6054B3A8(_DWORD *a1);  /* 0x0054b3a8 */
int __fastcall sub_6054B3D8(int a1);  /* 0x0054b3d8 */
int __fastcall sub_6054B6A4(int a1);  /* 0x0054b6a4 */
int __fastcall sub_6054B6D4(int result, _DWORD *a2);  /* 0x0054b6d4 */
int __fastcall sub_6054B700(int a1, int a2);  /* 0x0054b700 */
int __fastcall sub_6054B738(int a1, _DWORD *a2);  /* 0x0054b738 */
int __fastcall sub_6054B77C(int a1, int a2);  /* 0x0054b77c */
int __fastcall sub_6054B788(int result, _DWORD *a2);  /* 0x0054b788 */
int __fastcall sub_6054B798(int a1, int a2);  /* 0x0054b798 */
int __fastcall sub_6054B7C0(int a1);  /* 0x0054b7c0 */
int __fastcall sub_6054B7C8(int a1);  /* 0x0054b7c8 */
int __fastcall sub_6054B7F4(int a1);  /* 0x0054b7f4 */
int __fastcall sub_6054B80C(int a1);  /* 0x0054b80c */
int __fastcall sub_6054B864(int a1);  /* 0x0054b864 */
int __fastcall sub_6054B8A4(int result);  /* 0x0054b8a4 */
int __fastcall sub_6054B8C8(int a1);  /* 0x0054b8c8 */
int __fastcall sub_6054B918(int a1);  /* 0x0054b918 */
int __fastcall sub_6054B950(int result);  /* 0x0054b950 */
int __fastcall sub_6054B964(int a1);  /* 0x0054b964 */
int __fastcall sub_6054BA90(_DWORD *a1);  /* 0x0054ba90 */
int __fastcall sub_6054BAC0(int a1);  /* 0x0054bac0 */
int __fastcall sub_6054BD8C(int a1);  /* 0x0054bd8c */
int __fastcall sub_6054BDBC(int result, _DWORD *a2);  /* 0x0054bdbc */
int __fastcall sub_6054BDEC(int a1, int a2);  /* 0x0054bdec */
int __fastcall sub_6054BE24(int a1, _DWORD *a2);  /* 0x0054be24 */
int __fastcall sub_6054BE68(int a1, int a2);  /* 0x0054be68 */
int __fastcall sub_6054BE74(int result, _DWORD *a2);  /* 0x0054be74 */
int __fastcall sub_6054BE84(int a1, int a2);  /* 0x0054be84 */
int __fastcall sub_6054BEAC(int a1);  /* 0x0054beac */
int __fastcall sub_6054BEB4(int a1);  /* 0x0054beb4 */
int __fastcall sub_6054BEE8(int a1);  /* 0x0054bee8 */
int __fastcall sub_6054C03C(int a1);  /* 0x0054c03c */
int __fastcall sub_6054C074(int a1);  /* 0x0054c074 */
int __fastcall sub_6054C090(int result);  /* 0x0054c090 */
int __fastcall sub_6054C0A0(int result);  /* 0x0054c0a0 */
int __fastcall sub_6054C0D0(int a1);  /* 0x0054c0d0 */
int __fastcall sub_6054C104(int a1);  /* 0x0054c104 */
int __fastcall sub_6054C158(int result);  /* 0x0054c158 */
int __fastcall sub_6054C184(int a1);  /* 0x0054c184 */
int __fastcall sub_6054C1B4(int a1);  /* 0x0054c1b4 */
int __fastcall SE_SYS_DIALOGUE_OUT_ref_2(int a1);  /* 0x0054c204 */
int __fastcall sub_6054C250(int a1);  /* 0x0054c250 */
void __fastcall sub_6054C288(int a1);  /* 0x0054c288 */
int __fastcall sub_6054C2A8(int a1);  /* 0x0054c2a8 */
int __fastcall sub_6054C40C(int a1);  /* 0x0054c40c */
int __fastcall sub_6054C458(int a1);  /* 0x0054c458 */
int __fastcall sub_6054C4A4(int a1);  /* 0x0054c4a4 */
int __fastcall sub_6054C5C0(int a1);  /* 0x0054c5c0 */
int __fastcall sub_6054C77C(_DWORD *a1);  /* 0x0054c77c */
int __fastcall sub_6054C8A0(_DWORD *a1);  /* 0x0054c8a0 */
int __fastcall sub_6054CD7C(int a1);  /* 0x0054cd7c */
int __fastcall sub_6054CDC4(int result, _DWORD *a2);  /* 0x0054cdc4 */
int __fastcall sub_6054CDDC(int a1, int a2, char a3, char a4);  /* 0x0054cddc */
int __fastcall sub_6054CEF8(int a1, int a2);  /* 0x0054cef8 */
int __fastcall sub_6054CF30(int a1, _DWORD *a2);  /* 0x0054cf30 */
int __fastcall sub_6054CF74(int a1, int a2);  /* 0x0054cf74 */
int __fastcall sub_6054CF80(int result, _DWORD *a2);  /* 0x0054cf80 */
int __fastcall sub_6054CF90(int a1, int a2);  /* 0x0054cf90 */
int __fastcall sub_6054CFB8(int a1);  /* 0x0054cfb8 */
int __fastcall sub_6054CFC0(int a1);  /* 0x0054cfc0 */
int __fastcall sub_6054CFE8(int a1);  /* 0x0054cfe8 */
int __fastcall sub_6054D098(_DWORD *a1);  /* 0x0054d098 */
int __fastcall sub_6054D0C8(int a1);  /* 0x0054d0c8 */
int __fastcall sub_6054D170(int a1);  /* 0x0054d170 */
int __fastcall sub_6054D180(int a1, _DWORD *a2);  /* 0x0054d180 */
int __fastcall sub_6054D6A4(_DWORD *a1);  /* 0x0054d6a4 */
int __fastcall sub_6054D7A8(int a1);  /* 0x0054d7a8 */
int __fastcall sub_6054DBE8(int result);  /* 0x0054dbe8 */
int __fastcall sub_6054DC2C(int result);  /* 0x0054dc2c */
int __fastcall sub_6054DD40(int result);  /* 0x0054dd40 */
int __fastcall sub_6054DD4C(int a1);  /* 0x0054dd4c */
int __fastcall sub_6054DE9C(int result);  /* 0x0054de9c */
int __fastcall sub_6054DF98(int a1);  /* 0x0054df98 */
int __fastcall sub_6054E000(_DWORD *a1);  /* 0x0054e000 */
int __fastcall sub_6054E0F0(_DWORD *a1);  /* 0x0054e0f0 */
int __fastcall sub_6054E120(int a1);  /* 0x0054e120 */
int __fastcall sub_6054E158(int a1);  /* 0x0054e158 */
int __fastcall sub_6054E32C(_DWORD *a1);  /* 0x0054e32c */
int __fastcall sub_6054E35C(_DWORD *a1);  /* 0x0054e35c */
int __fastcall sub_6054E87C(int a1);  /* 0x0054e87c */
int __fastcall sub_6054E8A8(int a1);  /* 0x0054e8a8 */
int __fastcall sub_6054EAB4(int result, _DWORD *a2);  /* 0x0054eab4 */
int __fastcall sub_6054EACC(int a1);  /* 0x0054eacc */
int __fastcall sub_6054EDD8(int a1);  /* 0x0054edd8 */
int __fastcall sub_6054EF70(int a1);  /* 0x0054ef70 */
int __fastcall sub_6054F3FC(int a1);  /* 0x0054f3fc */
int __fastcall sub_6054F674(_DWORD *a1);  /* 0x0054f674 */
int __fastcall sub_6054F8EC(int a1, _DWORD *a2, int a3, _DWORD *a4, int a5, int a6);  /* 0x0054f8ec */
int __fastcall sub_6054F998(int a1);  /* 0x0054f998 */
int __fastcall sub_6054FAB8(int a1, int a2);  /* 0x0054fab8 */
int __fastcall sub_6054FAF0(int a1, _DWORD *a2);  /* 0x0054faf0 */
int __fastcall sub_6054FB34(int a1, int a2);  /* 0x0054fb34 */
int __fastcall sub_6054FB40(int result, _DWORD *a2);  /* 0x0054fb40 */
int __fastcall sub_6054FB50(int a1, int a2);  /* 0x0054fb50 */
int __fastcall sub_6054FB78(int a1);  /* 0x0054fb78 */
int __fastcall sub_6054FB80(int a1);  /* 0x0054fb80 */
int __fastcall sub_6054FBB4(int a1);  /* 0x0054fbb4 */
int __fastcall sub_6054FBD0(int a1);  /* 0x0054fbd0 */
int __fastcall sub_6054FC18(int a1);  /* 0x0054fc18 */
int __fastcall sub_6054FD20(int a1);  /* 0x0054fd20 */
int __fastcall sub_6054FD5C(int a1);  /* 0x0054fd5c */
unsigned int __fastcall sub_6054FD98(int a1);  /* 0x0054fd98 */
int __fastcall sub_6054FDB0(int a1);  /* 0x0054fdb0 */
unsigned int __fastcall sub_6054FF28(int a1);  /* 0x0054ff28 */
int __fastcall sub_6055023C(int a1);  /* 0x0055023c */
int __fastcall sub_6055026C(int result, _DWORD *a2);  /* 0x0055026c */
int __fastcall sub_60550284(int a1, int a2);  /* 0x00550284 */
int __fastcall sub_6055033C(int a1, int a2);  /* 0x0055033c */
int __fastcall sub_60550374(int a1, _DWORD *a2);  /* 0x00550374 */
int __fastcall sub_605503B8(int a1, int a2);  /* 0x005503b8 */
int __fastcall sub_605503C4(int result, _DWORD *a2);  /* 0x005503c4 */
int __fastcall sub_605503D4(int a1, int a2);  /* 0x005503d4 */
int __fastcall sub_605503FC(int a1);  /* 0x005503fc */
int __fastcall sub_60550404(int a1);  /* 0x00550404 */
int __fastcall sub_60550438(int a1);  /* 0x00550438 */
int __fastcall sub_60550590(_DWORD *a1);  /* 0x00550590 */
int __fastcall sub_605505C0(int a1);  /* 0x005505c0 */
int __fastcall sub_60550808(int a1);  /* 0x00550808 */
int __fastcall sub_60550938(int a1);  /* 0x00550938 */
int __fastcall sub_605509B4(int a1);  /* 0x005509b4 */
int __fastcall sub_60550B84(int result, _DWORD *a2);  /* 0x00550b84 */
int __fastcall sub_60550BB4(int a1, int a2);  /* 0x00550bb4 */
int __fastcall sub_60550BEC(int a1, _DWORD *a2);  /* 0x00550bec */
int __fastcall sub_60550C30(int a1, int a2);  /* 0x00550c30 */
int __fastcall sub_60550C3C(int result, _DWORD *a2);  /* 0x00550c3c */
int __fastcall sub_60550C4C(int a1, int a2);  /* 0x00550c4c */
int __fastcall sub_60550C74(int a1);  /* 0x00550c74 */
int __fastcall sub_60550C7C(int a1);  /* 0x00550c7c */
int __fastcall sub_605511F8(int a1);  /* 0x005511f8 */
int __fastcall sub_60551244(int a1);  /* 0x00551244 */
int __fastcall sub_605512AC(_BYTE *a1);  /* 0x005512ac */
int __fastcall sub_605512D4(int a1);  /* 0x005512d4 */
int __fastcall sub_605514B8(int a1);  /* 0x005514b8 */
int __fastcall sub_60551510(_DWORD *a1);  /* 0x00551510 */
int __fastcall sub_605516C8(int a1);  /* 0x005516c8 */
int __fastcall sub_60551760(_DWORD *a1);  /* 0x00551760 */
int __fastcall sub_605517CC(int a1);  /* 0x005517cc */
int __fastcall sub_60551948(int result);  /* 0x00551948 */
int __fastcall sub_60551970(int a1);  /* 0x00551970 */
int __fastcall sub_605519D0(int a1);  /* 0x005519d0 */
int __fastcall sub_60551A08(int a1);  /* 0x00551a08 */
int __fastcall sub_60551A3C(int a1);  /* 0x00551a3c */
int __fastcall sub_60551A50(int a1);  /* 0x00551a50 */
int __fastcall sub_60551AEC(int a1);  /* 0x00551aec */
int __fastcall sub_60551EB8(int a1);  /* 0x00551eb8 */
int __fastcall sub_60552540(int a1);  /* 0x00552540 */
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
int __fastcall sub_60554358(int a1, int a2);  /* 0x00554358 */
int __fastcall sub_60554390(int a1, _DWORD *a2);  /* 0x00554390 */
int __fastcall sub_605543D4(int a1, int a2);  /* 0x005543d4 */
int __fastcall sub_605543E0(int result, _DWORD *a2);  /* 0x005543e0 */
int __fastcall sub_605543F0(int a1, int a2);  /* 0x005543f0 */
int __fastcall sub_60554418(int a1);  /* 0x00554418 */
int __fastcall sub_60554420(int a1);  /* 0x00554420 */
int __fastcall sub_60554608(int a1, int a2);  /* 0x00554608 */
int __fastcall sub_60554900(_DWORD *a1);  /* 0x00554900 */
int __fastcall sub_60554A60(int a1);  /* 0x00554a60 */
int __fastcall sub_60554C24(int a1);  /* 0x00554c24 */
int __fastcall sub_60554D9C(int a1, int a2, _DWORD *a3, int a4, int a5, int a6, int a7, int a8);  /* 0x00554d9c */
int __fastcall sub_60555088(int a1);  /* 0x00555088 */
int __fastcall sub_60555134(int a1, int a2);  /* 0x00555134 */
int __fastcall sub_605555F0(int a1, int a2);  /* 0x005555f0 */
int __fastcall sub_60555628(int a1, int a2);  /* 0x00555628 */
int __fastcall sub_60555638(int a1);  /* 0x00555638 */
int __fastcall sub_60555668(int a1);  /* 0x00555668 */
int __fastcall sub_60555684(int a1);  /* 0x00555684 */
int __fastcall sub_605556BC(int a1);  /* 0x005556bc */
int __fastcall sub_60555718(int result);  /* 0x00555718 */
int __fastcall sub_60555748(int a1);  /* 0x00555748 */
int __fastcall sub_6055576C(int a1);  /* 0x0055576c */
int __fastcall sub_60555A90(int a1);  /* 0x00555a90 */
int __fastcall sub_60555D90(int a1);  /* 0x00555d90 */
int __fastcall sub_60555D9C(int a1);  /* 0x00555d9c */
int __fastcall sub_60555DB8(int result);  /* 0x00555db8 */
int __fastcall sub_60555DD8(int a1);  /* 0x00555dd8 */
int __fastcall sub_60555E90(int result);  /* 0x00555e90 */
int __fastcall sub_6055601C(int a1);  /* 0x0055601c */
int __fastcall sub_60556084(int result);  /* 0x00556084 */
int __fastcall sub_605560F4(int a1);  /* 0x005560f4 */
int __fastcall sub_60556288(int result);  /* 0x00556288 */
int __fastcall sub_605562C8(int a1);  /* 0x005562c8 */
int __fastcall sub_6055631C(int a1);  /* 0x0055631c */
int __fastcall sub_60556458(int a1);  /* 0x00556458 */
int __fastcall sub_605564B8(int result);  /* 0x005564b8 */
int __fastcall sub_60556504(int a1);  /* 0x00556504 */
int __fastcall sub_6055665C(int result);  /* 0x0055665c */
unsigned int __fastcall sub_605566A4(_DWORD *a1);  /* 0x005566a4 */
int __fastcall sub_605568B8(int result);  /* 0x005568b8 */
int __fastcall sub_60556930(int a1);  /* 0x00556930 */
int __fastcall sub_60556BAC(_DWORD *a1);  /* 0x00556bac */
int __fastcall sub_60556C3C(_DWORD *a1);  /* 0x00556c3c */
int __fastcall sub_60556FD4(int a1);  /* 0x00556fd4 */
int __fastcall sub_605571D8(int a1);  /* 0x005571d8 */
int __fastcall sub_605571E4(int a1);  /* 0x005571e4 */
int __fastcall sub_605572C8(int result, _DWORD *a2);  /* 0x005572c8 */
int __fastcall sub_605572E4(int result, _DWORD *a2);  /* 0x005572e4 */
int __fastcall sub_60557814(int a1, _DWORD *a2);  /* 0x00557814 */
int __fastcall sub_6055793C(int a1, unsigned int a2);  /* 0x0055793c */
int __fastcall sub_60557A20(int a1, unsigned int a2);  /* 0x00557a20 */
int __fastcall sub_60557B04(int a1);  /* 0x00557b04 */
int __fastcall sub_60557C40(int a1, int a2);  /* 0x00557c40 */
int __fastcall sub_60557C78(int a1, _DWORD *a2);  /* 0x00557c78 */
int __fastcall sub_60557CBC(int a1, int a2);  /* 0x00557cbc */
int __fastcall sub_60557CC8(int result, _DWORD *a2);  /* 0x00557cc8 */
int __fastcall sub_60557CD8(int a1, int a2);  /* 0x00557cd8 */
int __fastcall sub_60557D00(int a1);  /* 0x00557d00 */
int __fastcall sub_60557D08(int a1);  /* 0x00557d08 */
int __fastcall sub_60557D34(int a1);  /* 0x00557d34 */
int __fastcall sub_60557D48(int result);  /* 0x00557d48 */
int __fastcall sub_60557D54(int a1);  /* 0x00557d54 */
int __fastcall sub_60557DE4(int result);  /* 0x00557de4 */
int __fastcall sub_60557E0C(int a1);  /* 0x00557e0c */
int __fastcall sub_60557E60(int a1);  /* 0x00557e60 */
int __fastcall sub_60557ECC(int result);  /* 0x00557ecc */
int __fastcall sub_60557EEC(int result);  /* 0x00557eec */
int __fastcall sub_60557EF8(int a1);  /* 0x00557ef8 */
int __fastcall sub_60557F30(int result);  /* 0x00557f30 */
int __fastcall sub_60557F54(int result);  /* 0x00557f54 */
int __fastcall sub_60557F60(int result);  /* 0x00557f60 */
int __fastcall sub_60557F84(int a1);  /* 0x00557f84 */
int __fastcall sub_60557FC0(int result);  /* 0x00557fc0 */
int __fastcall sub_60557FE4(int a1);  /* 0x00557fe4 */
int __fastcall sub_60558150(_DWORD *a1);  /* 0x00558150 */
int __fastcall sub_60558180(int a1, char a2);  /* 0x00558180 */
int __fastcall sub_605585A4(int a1);  /* 0x005585a4 */
int __fastcall sub_60558700(int a1);  /* 0x00558700 */
int __fastcall sub_60558728(_BYTE *a1);  /* 0x00558728 */
int __fastcall sub_605588AC(int a1, _DWORD *a2);  /* 0x005588ac */
int __fastcall sub_605588E8(int a1, int a2);  /* 0x005588e8 */
int __fastcall sub_60558964(int a1, int a2);  /* 0x00558964 */
int __fastcall sub_605589E4(_DWORD *a1, int a2);  /* 0x005589e4 */
int __fastcall sub_60558A30(_DWORD *a1, int a2);  /* 0x00558a30 */
int __fastcall sub_60558A90(int a1, int a2);  /* 0x00558a90 */
int __fastcall sub_60558AC8(int a1, _DWORD *a2);  /* 0x00558ac8 */
int __fastcall sub_60558B0C(int a1, int a2);  /* 0x00558b0c */
int __fastcall sub_60558B18(int result, _DWORD *a2);  /* 0x00558b18 */
int __fastcall sub_60558B28(int a1, int a2);  /* 0x00558b28 */
int __fastcall sub_60558B50(int a1);  /* 0x00558b50 */
int __fastcall sub_60558B58(int a1);  /* 0x00558b58 */
int __fastcall sub_60558B80(int result);  /* 0x00558b80 */
int __fastcall sub_60558B8C(int result);  /* 0x00558b8c */
int __fastcall sub_60558BB4(int a1);  /* 0x00558bb4 */
int __fastcall sub_60558BE8(int a1);  /* 0x00558be8 */
int __fastcall sub_60558C20(int result);  /* 0x00558c20 */
int __fastcall sub_60558C2C(int a1);  /* 0x00558c2c */
int __fastcall sub_60558C50(int result);  /* 0x00558c50 */
int __fastcall sub_60558C78(int result);  /* 0x00558c78 */
int __fastcall sub_60558E84(int a1);  /* 0x00558e84 */
int __fastcall sub_60558EB8(int a1);  /* 0x00558eb8 */
int __fastcall sub_60558EF0(int result);  /* 0x00558ef0 */
int __fastcall sub_60558EFC(int result);  /* 0x00558efc */
int __fastcall sub_60558F08(int result);  /* 0x00558f08 */
int __fastcall sub_60558F30(int a1);  /* 0x00558f30 */
int __fastcall sub_60558F60(int a1);  /* 0x00558f60 */
int __fastcall sub_60558F98(int result);  /* 0x00558f98 */
int __fastcall sub_60558FA4(int result);  /* 0x00558fa4 */
int __fastcall sub_60558FBC(int a1);  /* 0x00558fbc */
int __fastcall sub_605590E0(_DWORD *a1);  /* 0x005590e0 */
int __fastcall sub_60559110(int a1);  /* 0x00559110 */
int __fastcall sub_60559448(int a1);  /* 0x00559448 */
int __fastcall sub_60559478(int result, _DWORD *a2);  /* 0x00559478 */
int __fastcall sub_605594A8(int a1, int a2);  /* 0x005594a8 */
int __fastcall sub_605594E0(int a1, _DWORD *a2);  /* 0x005594e0 */
int __fastcall sub_60559524(int a1, int a2);  /* 0x00559524 */
int __fastcall sub_60559530(int result, _DWORD *a2);  /* 0x00559530 */
int __fastcall sub_60559540(int a1, int a2);  /* 0x00559540 */
int __fastcall sub_60559568(int a1);  /* 0x00559568 */
int __fastcall sub_60559570(int a1);  /* 0x00559570 */
int __fastcall sub_6055960C(struct sead_IDisposer *a1);  /* 0x0055960c */
int __fastcall sub_60559684(int a1);  /* 0x00559684 */
int __fastcall sub_605597FC(int a1);  /* 0x005597fc */
int __fastcall sub_605598EC(_DWORD *a1);  /* 0x005598ec */
int __fastcall sub_6055991C(int a1);  /* 0x0055991c */
int __fastcall sub_60559CE4(int a1, _DWORD *a2);  /* 0x00559ce4 */
int __fastcall sub_60559CF0(int a1);  /* 0x00559cf0 */
int __fastcall SE_MG_CMN_START_ref_2_helper_559D2C(int a1);  /* 0x00559d2c */
int __fastcall sub_60559D58(int a1);  /* 0x00559d58 */
int __fastcall sub_60559DAC(int a1, int a2);  /* 0x00559dac */
int __fastcall sub_60559DE4(int a1, _DWORD *a2);  /* 0x00559de4 */
int __fastcall sub_60559E28(int a1, int a2);  /* 0x00559e28 */
int __fastcall sub_60559E34(int result, _DWORD *a2);  /* 0x00559e34 */
int __fastcall sub_60559E44(int a1, int a2);  /* 0x00559e44 */
int __fastcall sub_60559E6C(int a1);  /* 0x00559e6c */
int __fastcall sub_60559E74(int a1);  /* 0x00559e74 */
int __fastcall sub_60559EA8(int a1);  /* 0x00559ea8 */
int __fastcall sub_60559EDC(int a1);  /* 0x00559edc */
int __fastcall sub_60559F14(int result);  /* 0x00559f14 */
int __fastcall sub_60559F20(int result);  /* 0x00559f20 */
int __fastcall sub_60559F58(int result);  /* 0x00559f58 */
int __fastcall sub_60559F80(int a1);  /* 0x00559f80 */
int __fastcall sub_60559FB0(int a1);  /* 0x00559fb0 */
int __fastcall sub_60559FE8(int result);  /* 0x00559fe8 */
int __fastcall sub_6055A000(int a1);  /* 0x0055a000 */
int __fastcall sub_6055A178(_DWORD *a1);  /* 0x0055a178 */
int __fastcall sub_6055A1D4(int a1);  /* 0x0055a1d4 */
int __fastcall sub_6055A5AC(int result);  /* 0x0055a5ac */
int __fastcall sub_6055A5C4(int a1);  /* 0x0055a5c4 */
int __fastcall sub_6055A604(int result, _DWORD *a2);  /* 0x0055a604 */
int __fastcall sub_6055A644(int a1, int a2);  /* 0x0055a644 */
int __fastcall sub_6055A67C(int a1, _DWORD *a2);  /* 0x0055a67c */
int __fastcall sub_6055A6C0(int a1, int a2);  /* 0x0055a6c0 */
int __fastcall sub_6055A6CC(int result, _DWORD *a2);  /* 0x0055a6cc */
int __fastcall sub_6055A6DC(int a1, int a2);  /* 0x0055a6dc */
int __fastcall sub_6055A704(int a1);  /* 0x0055a704 */
int __fastcall sub_6055A70C(int a1);  /* 0x0055a70c */
int __fastcall sub_6055A734(_BYTE *a1);  /* 0x0055a734 */
int __fastcall sub_6055A7A4(int result);  /* 0x0055a7a4 */
int __fastcall sub_6055A7C8(int a1);  /* 0x0055a7c8 */
int __fastcall sub_6055A7F8(int result);  /* 0x0055a7f8 */
int __fastcall sub_6055A81C(int result);  /* 0x0055a81c */
int __fastcall sub_6055A834(int result);  /* 0x0055a834 */
int __fastcall sub_6055A858(int a1);  /* 0x0055a858 */
int __fastcall sub_6055A888(int a1);  /* 0x0055a888 */
int __fastcall sub_6055A8F0(int a1);  /* 0x0055a8f0 */
int __fastcall sub_6055A930(int result);  /* 0x0055a930 */
int __fastcall sub_6055A978(int a1);  /* 0x0055a978 */
int __fastcall sub_6055A9B0(int result);  /* 0x0055a9b0 */
int __fastcall sub_6055A9D4(int a1);  /* 0x0055a9d4 */
int __fastcall sub_6055AA04(int result);  /* 0x0055aa04 */
int __fastcall sub_6055AA28(int result);  /* 0x0055aa28 */
int __fastcall sub_6055AA3C(int a1);  /* 0x0055aa3c */
int __fastcall sub_6055AA4C(int a1);  /* 0x0055aa4c */
int __fastcall sub_6055ABA4(_DWORD *a1);  /* 0x0055aba4 */
int __fastcall sub_6055ABE4(_DWORD *a1);  /* 0x0055abe4 */
int __fastcall sub_6055B43C(int a1);  /* 0x0055b43c */
int __fastcall sub_6055B46C(int result, _DWORD *a2);  /* 0x0055b46c */
int __fastcall sub_6055B498(int a1, int a2);  /* 0x0055b498 */
int __fastcall sub_6055B4D0(int a1, _DWORD *a2);  /* 0x0055b4d0 */
int __fastcall sub_6055B514(int a1, int a2);  /* 0x0055b514 */
int __fastcall sub_6055B520(int result, _DWORD *a2);  /* 0x0055b520 */
int __fastcall sub_6055B530(int a1, int a2);  /* 0x0055b530 */
int __fastcall sub_6055B558(int a1);  /* 0x0055b558 */
int __fastcall sub_6055B560(int a1);  /* 0x0055b560 */
int __fastcall sub_6055B594(int a1);  /* 0x0055b594 */
int __fastcall sub_6055B610(int a1);  /* 0x0055b610 */
int __fastcall sub_6055B64C(int a1);  /* 0x0055b64c */
int __fastcall sub_6055B6E0(int a1);  /* 0x0055b6e0 */
int __fastcall sub_6055B6FC(_DWORD *a1);  /* 0x0055b6fc */
int __fastcall sub_6055B734(int a1);  /* 0x0055b734 */
int __fastcall sub_6055B7B8(int a1);  /* 0x0055b7b8 */
int __fastcall sub_6055B838(int a1);  /* 0x0055b838 */
int __fastcall sub_6055B894(int a1);  /* 0x0055b894 */
int __fastcall sub_6055B9EC(int a1);  /* 0x0055b9ec */
int __fastcall sub_6055BA48(_DWORD *a1);  /* 0x0055ba48 */
int __fastcall sub_6055BBAC(int a1);  /* 0x0055bbac */
int __fastcall sub_6055BE28(int a1);  /* 0x0055be28 */
int __fastcall sub_6055BE74(int result, _DWORD *a2);  /* 0x0055be74 */
int __fastcall sub_6055BE90(int a1, int a2);  /* 0x0055be90 */
int __fastcall sub_6055BF48(int a1);  /* 0x0055bf48 */
int __fastcall sub_6055C048(int a1);  /* 0x0055c048 */
int __fastcall sub_6055C1E0(unsigned int a1);  /* 0x0055c1e0 */
int __fastcall sub_6055C3F8(int a1, _DWORD *a2);  /* 0x0055c3f8 */
int __fastcall sub_6055C4C8(int a1, _DWORD *a2);  /* 0x0055c4c8 */
int __fastcall sub_6055C594(unsigned int a1);  /* 0x0055c594 */
int __fastcall sub_6055C7C0(int a1, int a2);  /* 0x0055c7c0 */
int __fastcall sub_6055C7F8(int a1, _DWORD *a2);  /* 0x0055c7f8 */
int __fastcall sub_6055C83C(int a1, int a2);  /* 0x0055c83c */
int __fastcall sub_6055C848(int result, _DWORD *a2);  /* 0x0055c848 */
int __fastcall sub_6055C858(int a1, int a2);  /* 0x0055c858 */
int __fastcall sub_6055C880(int a1);  /* 0x0055c880 */
int __fastcall sub_6055C888(int a1);  /* 0x0055c888 */
int __fastcall sub_6055CA84(int a1);  /* 0x0055ca84 */
int __fastcall sub_6055CB4C(int result);  /* 0x0055cb4c */
int __fastcall sub_6055CB94(int a1);  /* 0x0055cb94 */
int __fastcall sub_6055CBD4(int a1);  /* 0x0055cbd4 */
int __fastcall sub_6055CBFC(int *a1);  /* 0x0055cbfc */
int __fastcall sub_6055D384(int result);  /* 0x0055d384 */
int __fastcall sub_6055D3A8(int result);  /* 0x0055d3a8 */
int __fastcall sub_6055D3B8(int a1);  /* 0x0055d3b8 */
int __fastcall sub_6055D448(int a1);  /* 0x0055d448 */
int __fastcall sub_6055D694(_DWORD *a1);  /* 0x0055d694 */
int __fastcall sub_6055D6FC(int a1);  /* 0x0055d6fc */
int __fastcall sub_6055D714(int a1);  /* 0x0055d714 */
int __fastcall sub_6055D730(int result);  /* 0x0055d730 */
int __fastcall sub_6055D768(int a1);  /* 0x0055d768 */
int __fastcall sub_6055D7C0(int a1);  /* 0x0055d7c0 */
int __fastcall sub_6055D840(int a1);  /* 0x0055d840 */
int __fastcall sub_6055D914(int result);  /* 0x0055d914 */
int __fastcall sub_6055D938(int a1);  /* 0x0055d938 */
int __fastcall sub_6055D990(int result);  /* 0x0055d990 */
int __fastcall sub_6055D9A0(int result);  /* 0x0055d9a0 */
int __fastcall sub_6055D9D4(int result);  /* 0x0055d9d4 */
int __fastcall sub_6055D9E4(int a1);  /* 0x0055d9e4 */
int __fastcall sub_6055DA08(int result);  /* 0x0055da08 */
int __fastcall sub_6055DA3C(int result);  /* 0x0055da3c */
int __fastcall sub_6055DA58(int a1);  /* 0x0055da58 */
int __fastcall sub_6055DABC(int a1);  /* 0x0055dabc */
int __fastcall sub_6055DB0C(int result);  /* 0x0055db0c */
int __fastcall sub_6055DB48(int result);  /* 0x0055db48 */
int __fastcall sub_6055DB64(int result);  /* 0x0055db64 */
int __fastcall sub_6055DB8C(int a1);  /* 0x0055db8c */
int __fastcall sub_6055DBDC(int result);  /* 0x0055dbdc */
int __fastcall sub_6055DC04(int a1);  /* 0x0055dc04 */
int __fastcall sub_6055DECC(_DWORD *a1);  /* 0x0055decc */
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
int __fastcall sub_6055F20C(int result, _DWORD *a2);  /* 0x0055f20c */
int __fastcall sub_6055F880(int result, int a2);  /* 0x0055f880 */
int __fastcall sub_6055F98C(int a1);  /* 0x0055f98c */
int __fastcall sub_60560298(int a1);  /* 0x00560298 */
int __fastcall sub_605603C4(int a1);  /* 0x005603c4 */
int __fastcall sub_605603FC(int a1, int a2, int a3, int a4);  /* 0x005603fc */
int __fastcall sub_60560654(unsigned int a1);  /* 0x00560654 */
int __fastcall sub_6056087C(int a1, int a2);  /* 0x0056087c */
int __fastcall sub_605608B4(int a1, _DWORD *a2);  /* 0x005608b4 */
int __fastcall sub_605608F8(int a1, int a2);  /* 0x005608f8 */
int __fastcall sub_60560904(int result, _DWORD *a2);  /* 0x00560904 */
int __fastcall sub_60560914(int a1, int a2);  /* 0x00560914 */
int __fastcall sub_6056093C(int a1);  /* 0x0056093c */
int __fastcall sub_60560944(int a1);  /* 0x00560944 */
int __fastcall sub_60560970(int a1);  /* 0x00560970 */
int __fastcall sub_60560988(int a1);  /* 0x00560988 */
int __fastcall sub_60560A90(int result);  /* 0x00560a90 */
int __fastcall sub_60560B08(int result);  /* 0x00560b08 */
int __fastcall sub_60560B78(int a1);  /* 0x00560b78 */
int __fastcall sub_60560DD8(_DWORD *a1);  /* 0x00560dd8 */
int __fastcall sub_60560E08(int a1);  /* 0x00560e08 */
int __fastcall sub_60560E3C(int a1);  /* 0x00560e3c */
unsigned int __fastcall sub_60560E80(int a1);  /* 0x00560e80 */
int __fastcall sub_60560F68(int a1, _DWORD *a2);  /* 0x00560f68 */
int __fastcall sub_60560FD4(int a1, _DWORD *a2);  /* 0x00560fd4 */
int __fastcall sub_60561088(int result, int a2, int a3);  /* 0x00561088 */
int __fastcall sub_605610BC(int a1, int a2);  /* 0x005610bc */
int __fastcall sub_605612AC(int a1);  /* 0x005612ac */
int __fastcall sub_6056143C(int a1);  /* 0x0056143c */
int __fastcall sub_60561750(_DWORD *a1);  /* 0x00561750 */
int __fastcall sub_605617DC(_DWORD *a1);  /* 0x005617dc */
int __fastcall sub_60561FA8(int a1);  /* 0x00561fa8 */
bool __fastcall sub_60562274(int a1);  /* 0x00562274 */
int __fastcall sub_60562560(int a1, int a2);  /* 0x00562560 */
int __fastcall sub_60562598(int a1, _DWORD *a2);  /* 0x00562598 */
int __fastcall sub_605625DC(int a1, int a2);  /* 0x005625dc */
int __fastcall sub_605625E8(int result, _DWORD *a2);  /* 0x005625e8 */
int __fastcall sub_605625F8(int a1, int a2);  /* 0x005625f8 */
int __fastcall sub_60562620(int a1);  /* 0x00562620 */
int __fastcall sub_60562628(int a1);  /* 0x00562628 */
int __fastcall nnMain(struct nn_os *a1);  /* 0x00562698 */
int __fastcall sub_60562ABC(int a1);  /* 0x00562abc */
int __fastcall sub_60562DC8(int a1);  /* 0x00562dc8 */
int __fastcall sub_60562FA8(int a1);  /* 0x00562fa8 */
int __fastcall sub_60562FFC(int a1);  /* 0x00562ffc */
int __fastcall sub_605631C0(int a1);  /* 0x005631c0 */
bool __fastcall sub_605632C0(int a1);  /* 0x005632c0 */
int __fastcall sub_605634AC(int a1, int a2);  /* 0x005634ac */
int __fastcall sub_605635AC(int a1, int a2, int a3);  /* 0x005635ac */
bool __fastcall sub_60563890(int a1, int a2, int a3);  /* 0x00563890 */
int __fastcall sub_60563A0C(int a1);  /* 0x00563a0c */
int __fastcall sub_60563AB8(_DWORD *a1);  /* 0x00563ab8 */
int __fastcall sub_60563B3C(int a1);  /* 0x00563b3c */
int __fastcall sub_60563BB8(int a1, int a2);  /* 0x00563bb8 */
int __fastcall sub_60563C28(_DWORD *a1);  /* 0x00563c28 */
int __fastcall sub_60564098(int result);  /* 0x00564098 */
unsigned int __fastcall sub_605641B4(int a1);  /* 0x005641b4 */
int __fastcall sub_605643B8(int a1);  /* 0x005643b8 */
int __fastcall sub_60564734(int result);  /* 0x00564734 */
int __fastcall sub_60564834(int a1);  /* 0x00564834 */
int __fastcall sub_605649F8(int a1);  /* 0x005649f8 */
int __fastcall sub_60564BFC(int a1);  /* 0x00564bfc */
int __fastcall sub_6056506C(int a1);  /* 0x0056506c */
int __fastcall sub_605651C8(_DWORD *a1);  /* 0x005651c8 */
int __fastcall sub_6056539C(int a1);  /* 0x0056539c */
int __fastcall sub_60565420(int a1);  /* 0x00565420 */
int __fastcall sub_60565578(int a1);  /* 0x00565578 */
int __fastcall sub_60565680(int a1);  /* 0x00565680 */
int __fastcall sub_60565804(int a1);  /* 0x00565804 */
int __fastcall sub_60565B0C(int a1);  /* 0x00565b0c */
int __fastcall sub_60565BF8(_DWORD *a1);  /* 0x00565bf8 */
int __fastcall sub_60565C28(int result);  /* 0x00565c28 */
int __fastcall sub_60565C5C(int a1);  /* 0x00565c5c */
int __fastcall sub_60566104(int a1);  /* 0x00566104 */
int __fastcall sub_60566310(int a1);  /* 0x00566310 */
int __fastcall sub_60566490(int a1);  /* 0x00566490 */
int __fastcall sub_60566B48(_BYTE *a1);  /* 0x00566b48 */
int __fastcall sub_60566DE4(int result, _DWORD *a2);  /* 0x00566de4 */
bool __fastcall sub_60566E64(int a1);  /* 0x00566e64 */
int __fastcall sub_60566EDC(int a1);  /* 0x00566edc */
int __fastcall sub_60567064(int a1);  /* 0x00567064 */
int __fastcall sub_6056719C(int a1);  /* 0x0056719c */
int __fastcall sub_605673E0(int a1);  /* 0x005673e0 */
int __fastcall sub_6056759C(_DWORD *a1);  /* 0x0056759c */
int __fastcall sub_605676DC(_DWORD *a1);  /* 0x005676dc */
int __fastcall sub_6056782C(int a1);  /* 0x0056782c */
int __fastcall sub_60567A84(int a1);  /* 0x00567a84 */
int __fastcall sub_60567B24(int a1, int a2, int a3, int a4);  /* 0x00567b24 */
int __fastcall sub_60567D90(int a1);  /* 0x00567d90 */
int __fastcall sub_60567DA8(int a1);  /* 0x00567da8 */
bool __fastcall sub_60567DD8(int a1, int a2);  /* 0x00567dd8 */
int __fastcall sub_60568098(int a1);  /* 0x00568098 */
int __fastcall obj_block_ref(_DWORD *a1);  /* 0x005682a8 */
int __fastcall sub_60568430(int a1);  /* 0x00568430 */
int __fastcall sub_6056847C(int a1);  /* 0x0056847c */
int __fastcall sub_605685FC(int a1, int a2, int a3, int a4);  /* 0x005685fc */
bool __fastcall sub_60568624(int a1, int a2);  /* 0x00568624 */
void __fastcall sub_60568728(int a1);  /* 0x00568728 */
int __fastcall sub_60568778(int a1);  /* 0x00568778 */
int __fastcall sub_605690F4(Actor *a1);  /* 0x005690f4 */
bool __fastcall sub_605691BC(int a1, int a2);  /* 0x005691bc */
int __fastcall sub_605692C0(int a1);  /* 0x005692c0 */
int __fastcall sub_60569314(int a1, int a2);  /* 0x00569314 */
int __fastcall sub_60569ABC(int a1);  /* 0x00569abc */
int __fastcall sub_60569C24(int a1);  /* 0x00569c24 */
int __fastcall sub_60569DB4(int a1);  /* 0x00569db4 */
int __fastcall sub_60569F0C(int a1);  /* 0x00569f0c */
int __fastcall sub_6056A200(_DWORD *a1);  /* 0x0056a200 */
bool __fastcall sub_6056A28C(int a1, int a2);  /* 0x0056a28c */
void __fastcall sub_6056A390(int a1);  /* 0x0056a390 */
int __fastcall sub_6056A3E0(int a1);  /* 0x0056a3e0 */
bool __fastcall sub_6056A434(int a1);  /* 0x0056a434 */
int __fastcall sub_6056A620(int a1, int a2);  /* 0x0056a620 */
int __fastcall sub_6056A7C4(_DWORD *a1);  /* 0x0056a7c4 */
bool __fastcall sub_6056A818(int a1, int a2);  /* 0x0056a818 */
int __fastcall sub_6056A91C(int a1);  /* 0x0056a91c */
bool __fastcall sub_6056A970(int a1);  /* 0x0056a970 */
int __fastcall sub_6056AB5C(int a1, int a2);  /* 0x0056ab5c */
int __fastcall sub_6056ACE0(int a1);  /* 0x0056ace0 */
int __fastcall sub_6056AF2C(int a1, _BYTE *a2);  /* 0x0056af2c */
int __fastcall sub_6056AF30(int a1, unsigned __int8 *a2, int a3);  /* 0x0056af30 */
int __fastcall sub_6056AF34(int a1);  /* 0x0056af34 */
int __fastcall sub_6056B158(int *a1);  /* 0x0056b158 */
int __fastcall SE_OBJ_BLOCK_HELP_APPEAL_ref(int a1);  /* 0x0056b308 */
int __fastcall sub_6056B4AC(int a1, int a2, int a3, int a4);  /* 0x0056b4ac */
int __fastcall sub_6056B4E4(int a1);  /* 0x0056b4e4 */
int __fastcall sub_6056B740(int a1);  /* 0x0056b740 */
unsigned int __fastcall sub_6056BA70(int a1);  /* 0x0056ba70 */
int __fastcall sub_6056BB38(int a1);  /* 0x0056bb38 */
void __fastcall sub_6056BCFC(int a1);  /* 0x0056bcfc */
int __fastcall sub_6056BD4C(int a1);  /* 0x0056bd4c */
int __fastcall sub_6056BF90(int a1);  /* 0x0056bf90 */
int __fastcall sub_6056C20C(int result);  /* 0x0056c20c */
unsigned int __fastcall sub_6056C21C(int a1);  /* 0x0056c21c */
int __fastcall sub_6056C33C(int result);  /* 0x0056c33c */
unsigned int __fastcall sub_6056C358(int a1);  /* 0x0056c358 */
int __fastcall sub_6056C52C(int a1);  /* 0x0056c52c */
int __fastcall sub_6056C828(int a1, _BYTE *a2);  /* 0x0056c828 */
unsigned int __fastcall sub_6056C91C(int a1, int a2);  /* 0x0056c91c */
int __fastcall sub_6056CA14(_DWORD *a1);  /* 0x0056ca14 */
int __fastcall sub_6056CB84(int a1);  /* 0x0056cb84 */
int __fastcall sub_6056CE44(int a1, int a2, int a3, int a4);  /* 0x0056ce44 */
int __fastcall sub_6056CE6C(int a1);  /* 0x0056ce6c */
int __fastcall sub_6056CEBC(int a1, int a2);  /* 0x0056cebc */
int __fastcall sub_6056CFFC(int a1);  /* 0x0056cffc */
int __fastcall sub_6056D17C(int a1, char *a2);  /* 0x0056d17c */
int __fastcall sub_6056D330(int a1, int a2);  /* 0x0056d330 */
int __fastcall sub_6056D564(int a1, int a2);  /* 0x0056d564 */
int __fastcall sub_6056D678(int a1);  /* 0x0056d678 */
int __fastcall sub_6056DA0C(int a1);  /* 0x0056da0c */
int __fastcall sub_6056DC3C(int a1, int a2);  /* 0x0056dc3c */
int __fastcall sub_6056DF3C(int a1);  /* 0x0056df3c */
int __fastcall sub_6056E0AC(int a1);  /* 0x0056e0ac */
int __fastcall sub_6056E138(int result);  /* 0x0056e138 */
int __fastcall sub_6056E148(int a1);  /* 0x0056e148 */
int __fastcall sub_6056E24C(int a1);  /* 0x0056e24c */
int __fastcall sub_6056E294(int result);  /* 0x0056e294 */
int __fastcall sub_6056E2A4(int a1);  /* 0x0056e2a4 */
int __fastcall SE_OBJ_BOUND_BLOCK_JUMP_ref_3(int a1, int a2);  /* 0x0056e45c */
int __fastcall sub_6056E5F8(int a1);  /* 0x0056e5f8 */
int __fastcall sub_6056E840(int a1);  /* 0x0056e840 */
int __fastcall sub_6056EAA4(int a1);  /* 0x0056eaa4 */
int __fastcall sub_6056EC84(int a1);  /* 0x0056ec84 */
bool __fastcall sub_6056ED4C(int a1, int a2);  /* 0x0056ed4c */
int __fastcall sub_6056EDC8(int a1);  /* 0x0056edc8 */
int __fastcall sub_6056F02C(float *a1);  /* 0x0056f02c */
int __fastcall sub_6056F124(int a1);  /* 0x0056f124 */
int __fastcall sub_6056F248(int a1);  /* 0x0056f248 */
int __fastcall sub_6056F2E8(int result);  /* 0x0056f2e8 */
int __fastcall sub_6056F748(int a1, int a2);  /* 0x0056f748 */
int __fastcall sub_6056F9A4(int a1);  /* 0x0056f9a4 */
int __fastcall sub_6056FB38(int a1);  /* 0x0056fb38 */
int __fastcall sub_6056FD5C(int a1, int a2, int a3, int a4);  /* 0x0056fd5c */
int __fastcall sub_6056FDE8(int a1);  /* 0x0056fde8 */
int __fastcall sub_6056FDFC(_DWORD *a1);  /* 0x0056fdfc */
int __fastcall sub_6056FEB4(int a1, int a2);  /* 0x0056feb4 */
void __fastcall sub_60570010(int a1);  /* 0x00570010 */
int __fastcall sub_60570060(int a1);  /* 0x00570060 */
int __fastcall sub_605700B4(int a1, int a2);  /* 0x005700b4 */
int __fastcall sub_605706DC(int *a1);  /* 0x005706dc */
int __fastcall sub_60570768(int a1);  /* 0x00570768 */
int __fastcall sub_6057093C(int a1);  /* 0x0057093c */
int __fastcall sub_605709BC(int a1);  /* 0x005709bc */
int __fastcall sub_60570C64(int a1, int a2);  /* 0x00570c64 */
int __fastcall sub_60570EA8(_DWORD *a1);  /* 0x00570ea8 */
int __fastcall sub_6057102C(_DWORD *a1);  /* 0x0057102c */
int __fastcall sub_6057108C(int a1, int a2, int a3, int a4);  /* 0x0057108c */
int __fastcall sub_605710B4(int a1);  /* 0x005710b4 */
int __fastcall sub_6057110C(int a1);  /* 0x0057110c */
int __fastcall sub_605715F0(__int64 *a1);  /* 0x005715f0 */
int __fastcall sub_605716FC(int a1, int a2);  /* 0x005716fc */
void __fastcall sub_60571858(int a1);  /* 0x00571858 */
int __fastcall sub_605718A8(int a1);  /* 0x005718a8 */
int __fastcall sub_605718FC(int a1, int a2);  /* 0x005718fc */
int __fastcall sub_60571D10(int a1);  /* 0x00571d10 */
bool __fastcall sub_60571F78(int a1);  /* 0x00571f78 */
int __fastcall sub_60572008(int a1);  /* 0x00572008 */
bool __fastcall sub_60572038(int a1);  /* 0x00572038 */
int __fastcall sub_60572128(int a1);  /* 0x00572128 */
int __fastcall sub_605724B0(int a1);  /* 0x005724b0 */
bool __fastcall sub_605725A0(int a1);  /* 0x005725a0 */
bool __fastcall sub_60572630(int a1, int a2);  /* 0x00572630 */
int __fastcall sub_60572734(int a1);  /* 0x00572734 */
int __fastcall sub_605728E8(int a1);  /* 0x005728e8 */
int __fastcall sub_60572AE8(int a1);  /* 0x00572ae8 */
bool __fastcall sub_60572BC4(int a1);  /* 0x00572bc4 */
int __fastcall sub_60572CD0(int a1);  /* 0x00572cd0 */
int __fastcall sub_60572FC4(int a1);  /* 0x00572fc4 */
bool __fastcall sub_605730B8(int a1);  /* 0x005730b8 */
bool __fastcall sub_60573148(int a1, int a2);  /* 0x00573148 */
int __fastcall sub_6057324C(int a1);  /* 0x0057324c */
int __fastcall sub_605733AC(int a1);  /* 0x005733ac */
bool __fastcall sub_60573438(int a1);  /* 0x00573438 */
bool __fastcall sub_605734C8(int a1, int a2);  /* 0x005734c8 */
int __fastcall sub_605735CC(int a1);  /* 0x005735cc */
int __fastcall sub_605736E0(_DWORD *a1);  /* 0x005736e0 */
int __fastcall sub_6057399C(int a1);  /* 0x0057399c */
int __fastcall sub_60573C54(int a1);  /* 0x00573c54 */
int __fastcall sub_60573D1C(int result);  /* 0x00573d1c */
bool __fastcall sub_60573DA8(int a1, int a2);  /* 0x00573da8 */
int __fastcall sub_60573E24(int a1);  /* 0x00573e24 */
int __fastcall sub_60573F4C(int a1);  /* 0x00573f4c */
int __fastcall sub_60574094(int a1);  /* 0x00574094 */
int __fastcall sub_605742E8(int a1);  /* 0x005742e8 */
int __fastcall sub_605743D0(int a1);  /* 0x005743d0 */
int __fastcall obj_block_ref_2(int a1);  /* 0x00574730 */
int __fastcall sub_605749C4(int a1, unsigned __int8 *a2);  /* 0x005749c4 */
int __fastcall sub_60574B80(int a1, unsigned __int8 *a2);  /* 0x00574b80 */
int __fastcall sub_60574D3C(int a1, unsigned __int8 *a2);  /* 0x00574d3c */
int __fastcall sub_60574F00(int a1);  /* 0x00574f00 */
int __fastcall sub_60575080(int a1);  /* 0x00575080 */
int __fastcall sub_605750F8(int a1);  /* 0x005750f8 */
int __fastcall sub_605751F0(int a1, int a2, int a3, int a4);  /* 0x005751f0 */
bool __fastcall sub_60575298(int a1, int a2);  /* 0x00575298 */
void __fastcall sub_6057539C(int a1);  /* 0x0057539c */
int __fastcall sub_605753EC(int a1);  /* 0x005753ec */
int __fastcall sub_605755C4(int a1);  /* 0x005755c4 */
int __fastcall sub_6057574C(int a1);  /* 0x0057574c */
int __fastcall sub_6057589C(int a1, int a2);  /* 0x0057589c */
int __fastcall sub_60575A84(int a1);  /* 0x00575a84 */
int __fastcall sub_60575B34(int a1);  /* 0x00575b34 */
int __fastcall sub_60575BEC(int a1);  /* 0x00575bec */
bool __fastcall sub_60575BF0(int a1, int a2);  /* 0x00575bf0 */
int __fastcall sub_60575EB8(int a1);  /* 0x00575eb8 */
int __fastcall sub_60576060(int a1);  /* 0x00576060 */
int __fastcall sub_60576268(int a1);  /* 0x00576268 */
int __fastcall sub_60576384(int a1);  /* 0x00576384 */
void __fastcall sub_605764C8(int a1);  /* 0x005764c8 */
int __fastcall sub_60576518(int a1);  /* 0x00576518 */
int __fastcall sub_60576A00(int a1);  /* 0x00576a00 */
int __fastcall sub_60576F3C(int a1);  /* 0x00576f3c */
int __fastcall sub_60577238(int a1);  /* 0x00577238 */
int __fastcall sub_60577404(int a1);  /* 0x00577404 */
int __fastcall sub_6057746C(int result, float *a2);  /* 0x0057746c */
int __fastcall sub_605777CC(int a1);  /* 0x005777cc */
int __fastcall sub_605779BC(int a1);  /* 0x005779bc */
int __fastcall sub_60577B8C(int a1);  /* 0x00577b8c */
int __fastcall sub_60577E9C(int result);  /* 0x00577e9c */
int __fastcall sub_60577F48(int a1);  /* 0x00577f48 */
int __fastcall sub_60578214(int a1);  /* 0x00578214 */
int __fastcall sub_60578394(int result, int a2);  /* 0x00578394 */
int __fastcall sub_60578444(int a1);  /* 0x00578444 */
int __fastcall sub_6057856C(int a1);  /* 0x0057856c */
int __fastcall sub_60578930(int a1);  /* 0x00578930 */
int __fastcall sub_60578A54(int a1);  /* 0x00578a54 */
bool __fastcall sub_60578B1C(int a1, int a2);  /* 0x00578b1c */
int __fastcall sub_60578EB4(int a1);  /* 0x00578eb4 */
int __fastcall sub_60578FB8(int a1);  /* 0x00578fb8 */
int __fastcall sub_605790A0(int a1);  /* 0x005790a0 */
int __fastcall sub_605791F0(int a1);  /* 0x005791f0 */
int __fastcall sub_60579354(_DWORD *a1);  /* 0x00579354 */
int __fastcall sub_605793D8(int a1);  /* 0x005793d8 */
int __fastcall sub_60579500(int a1);  /* 0x00579500 */
int __fastcall sub_60579AE4(int a1);  /* 0x00579ae4 */
int __fastcall sub_60579D4C(int a1);  /* 0x00579d4c */
int __fastcall sub_60579FC8(_DWORD *a1);  /* 0x00579fc8 */
int __fastcall sub_6057A064(int a1);  /* 0x0057a064 */
int __fastcall sub_6057A200(int result);  /* 0x0057a200 */
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
int __fastcall sub_6057B6C4(unsigned int *a1);  /* 0x0057b6c4 */
int __fastcall sub_6057B720(int a1, int a2);  /* 0x0057b720 */
int __fastcall sub_6057BB44(int a1);  /* 0x0057bb44 */
int __fastcall sub_6057BE48(int a1, int a2, int a3, int a4);  /* 0x0057be48 */
int __fastcall balloon_coin_model_ref(int a1);  /* 0x0057c140 */
int __fastcall sub_6057C318(int a1, int a2, int a3, int a4);  /* 0x0057c318 */
int __fastcall balloon_coin_model_ref_2(int a1);  /* 0x0057c53c */
int __fastcall sub_6057C7A0(int a1);  /* 0x0057c7a0 */
int __fastcall sub_6057CA4C(_DWORD *a1);  /* 0x0057ca4c */
int __fastcall sub_6057CD28(int a1);  /* 0x0057cd28 */
int __fastcall sub_6057CFA0(int a1);  /* 0x0057cfa0 */
int __fastcall sub_6057D034(int a1, int a2, int a3, int a4);  /* 0x0057d034 */
int __fastcall sub_6057D09C(int a1);  /* 0x0057d09c */
int __fastcall sub_6057D26C(int a1);  /* 0x0057d26c */
int __fastcall sub_6057D3E8(int a1, int a2);  /* 0x0057d3e8 */
int __fastcall sub_6057D598(int a1);  /* 0x0057d598 */
int __fastcall sub_6057D96C(_DWORD *a1);  /* 0x0057d96c */
int __fastcall sub_6057D990(_DWORD *a1);  /* 0x0057d990 */
int __fastcall sub_6057DB18(int a1, int a2, int a3, int a4);  /* 0x0057db18 */
int __fastcall sub_6057DB40(int a1);  /* 0x0057db40 */
bool __fastcall sub_6057DC10(int a1, int a2);  /* 0x0057dc10 */
int __fastcall sub_6057DD14(Actor *a1);  /* 0x0057dd14 */
int __fastcall sub_6057DD8C(int a1);  /* 0x0057dd8c */
int __fastcall sub_6057DE54(int a1);  /* 0x0057de54 */
bool __fastcall sub_6057DFDC(int a1, int a2);  /* 0x0057dfdc */
int __fastcall sub_6057E154(Actor *a1);  /* 0x0057e154 */
int __fastcall sub_6057E188(int a1, int a2);  /* 0x0057e188 */
int __fastcall sub_6057E3A0(_DWORD *a1);  /* 0x0057e3a0 */
int __fastcall sub_6057E414(int a1);  /* 0x0057e414 */
int __fastcall sub_6057E594(_DWORD *a1);  /* 0x0057e594 */
int __fastcall sub_6057E71C(_DWORD *a1);  /* 0x0057e71c */
int __fastcall sub_6057E72C(int a1, int a2, int a3, int a4);  /* 0x0057e72c */
int __fastcall sub_6057E7DC(unsigned int *a1);  /* 0x0057e7dc */
int __fastcall sub_6057E7E4(int a1, int a2);  /* 0x0057e7e4 */
bool __fastcall sub_6057E910(int a1, int a2);  /* 0x0057e910 */
int __fastcall sub_6057EA14(Actor *a1);  /* 0x0057ea14 */
int __fastcall sub_6057EA98(int a1);  /* 0x0057ea98 */
int __fastcall sub_6057EB88(int a1);  /* 0x0057eb88 */
int __fastcall sub_6057ECE0(int a1);  /* 0x0057ece0 */
int __fastcall sub_6057EFE8(int a1);  /* 0x0057efe8 */
int __fastcall sub_6057F204(int a1);  /* 0x0057f204 */
int __fastcall sub_6057F504(int a1);  /* 0x0057f504 */
int __fastcall sub_6057F874(int a1);  /* 0x0057f874 */
bool __fastcall sub_6057FA14(int a1);  /* 0x0057fa14 */
int __fastcall sub_6057FA28(_DWORD *a1);  /* 0x0057fa28 */
int __fastcall sub_6057FA6C(int a1);  /* 0x0057fa6c */
int __fastcall sub_6057FBCC(int a1);  /* 0x0057fbcc */
int __fastcall sub_6057FEC4(int a1);  /* 0x0057fec4 */
int __fastcall sub_6057FF58(int a1);  /* 0x0057ff58 */
bool __fastcall sub_60580048(int a1, int a2);  /* 0x00580048 */
int __fastcall sub_605801C0(Actor *a1);  /* 0x005801c0 */
int __fastcall sub_60580390(int result);  /* 0x00580390 */
int __fastcall sub_605803A0(int a1);  /* 0x005803a0 */
int __fastcall sub_6058041C(int a1);  /* 0x0058041c */
int __fastcall sub_605805A0(int a1);  /* 0x005805a0 */
int __fastcall sub_6058061C(int a1);  /* 0x0058061c */
void __fastcall sub_605807D4(_DWORD *a1);  /* 0x005807d4 */
int __fastcall sub_60580864(_DWORD *a1);  /* 0x00580864 */
int __fastcall sub_605811C4(int a1);  /* 0x005811c4 */
int __fastcall sub_605813D0(int a1);  /* 0x005813d0 */
int __fastcall sub_60581560(int a1);  /* 0x00581560 */
int __fastcall sub_6058178C(int a1);  /* 0x0058178c */
int __fastcall sub_60581794(int a1);  /* 0x00581794 */
int __fastcall sub_60581A20(int a1);  /* 0x00581a20 */
int __fastcall sub_60581EC4(int a1);  /* 0x00581ec4 */
int __fastcall sub_60582050(int a1);  /* 0x00582050 */
int __fastcall sub_60582368(struct sead_IDisposer *a1);  /* 0x00582368 */
int __fastcall sub_60582544(int a1);  /* 0x00582544 */
__int64 __fastcall sub_605825E0(__int64 result);  /* 0x005825e0 */
int __fastcall sub_60582614(int result);  /* 0x00582614 */
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
int __fastcall sub_605843DC(int a1);  /* 0x005843dc */
int __fastcall sub_60584408(int a1, unsigned int a2, int a3);  /* 0x00584408 */
int __fastcall sub_605844A4(int result, int a2, int *a3, unsigned int a4, int a5);  /* 0x005844a4 */
int __fastcall sub_60584678(int a1, float *a2, int a3);  /* 0x00584678 */
int __fastcall sub_60584834(int a1, _BYTE *a2, int a3);  /* 0x00584834 */
int __fastcall sub_60584938(int a1, int a2, int a3, unsigned int a4, int a5, int a6, int a7);  /* 0x00584938 */
int __fastcall sub_60584FEC(int a1, float *a2);  /* 0x00584fec */
int __fastcall sub_60585110(int result, int a2, int a3, int a4, int a5, char a6);  /* 0x00585110 */
int __fastcall sub_60585214(int a1, int a2, char a3);  /* 0x00585214 */
int __fastcall sub_605854EC(int a1, int a2, int a3);  /* 0x005854ec */
int __fastcall sub_605855E0(int a1, unsigned int a2);  /* 0x005855e0 */
int __fastcall sub_60585600(int a1, unsigned int a2);  /* 0x00585600 */
int __fastcall sub_6058561C(int a1, unsigned int a2);  /* 0x0058561c */
int __fastcall sub_60585638(int a1, unsigned int a2);  /* 0x00585638 */
int __fastcall sub_60585654(int a1, unsigned int a2);  /* 0x00585654 */
int __fastcall sub_60585670(int a1, unsigned int a2);  /* 0x00585670 */
int __fastcall sub_6058568C(int a1, int a2, int a3);  /* 0x0058568c */
int __fastcall sub_60585738(int a1);  /* 0x00585738 */
int __fastcall sub_60585974(int a1);  /* 0x00585974 */
int __fastcall star_coinA_ref_2(int a1);  /* 0x00585c68 */
int __fastcall sub_60585D84(_DWORD **a1);  /* 0x00585d84 */
int __fastcall sub_60585F1C(int a1);  /* 0x00585f1c */
int __fastcall sub_60585F3C(int a1, int a2, int a3, int a4);  /* 0x00585f3c */
int __fastcall sub_60585FF8(int a1);  /* 0x00585ff8 */
int __fastcall sub_60586314(int a1);  /* 0x00586314 */
int __fastcall sub_6058640C(int a1);  /* 0x0058640c */
int __fastcall sub_60586500(int a1);  /* 0x00586500 */
int __fastcall sub_605865F8(int a1);  /* 0x005865f8 */
int __fastcall sub_605866E0(int a1);  /* 0x005866e0 */
int __fastcall sub_60586878(_DWORD *a1);  /* 0x00586878 */
int __fastcall sub_605868C0(int a1);  /* 0x005868c0 */
int __fastcall sub_60586A68(int a1);  /* 0x00586a68 */
int __fastcall sub_60586C2C(int a1);  /* 0x00586c2c */
int __fastcall sub_60586C84(int result, float *a2);  /* 0x00586c84 */
int __fastcall sub_605870FC(int a1);  /* 0x005870fc */
int __fastcall sub_60587494(int result);  /* 0x00587494 */
int __fastcall para_receive_ref_2(int a1);  /* 0x005874a4 */
int __fastcall sub_605875D0(int result);  /* 0x005875d0 */
int __fastcall sub_605876B8(_DWORD *a1);  /* 0x005876b8 */
int __fastcall sub_60587884(_DWORD *a1);  /* 0x00587884 */
int __fastcall sub_605879E4(_DWORD *a1);  /* 0x005879e4 */
int __fastcall sub_60587B7C(_DWORD *a1);  /* 0x00587b7c */
int __fastcall sub_60587BAC(int a1, int a2, int a3, int a4);  /* 0x00587bac */
int __fastcall sub_60587BD4(int a1, int a2, int a3);  /* 0x00587bd4 */
int __fastcall sub_60587C54(_BYTE *a1, int a2, int a3);  /* 0x00587c54 */
int __fastcall sub_60587DDC(_BYTE *a1);  /* 0x00587ddc */
int __fastcall sub_60587E4C(_BYTE *a1);  /* 0x00587e4c */
int __fastcall sub_60587F34(_BYTE *a1);  /* 0x00587f34 */
int __fastcall sub_60587FDC(int a1, int a2);  /* 0x00587fdc */
int __fastcall sub_60588188(int a1, float *a2, int a3);  /* 0x00588188 */
int __fastcall sub_60588290(_DWORD *a1);  /* 0x00588290 */
int __fastcall sub_60588560(int a1, int a2);  /* 0x00588560 */
bool __fastcall sub_605886DC(int a1, int a2);  /* 0x005886dc */
int __fastcall sub_60588854(Actor *a1);  /* 0x00588854 */
int __fastcall sub_60588B40(int a1);  /* 0x00588b40 */
int __fastcall sub_60588C20(int result);  /* 0x00588c20 */
int __fastcall SE_OBJ_COIN_APP_ref_2(int a1);  /* 0x00588c3c */
int __fastcall sub_60588DE4(int a1);  /* 0x00588de4 */
int __fastcall sub_60589708(int a1, int a2);  /* 0x00589708 */
int __fastcall sub_605897D4(int a1, int a2);  /* 0x005897d4 */
int __fastcall sub_605898A0(int a1, int a2);  /* 0x005898a0 */
int __fastcall sub_60589968(int a1);  /* 0x00589968 */
int __fastcall sub_60589CF8(_DWORD *a1);  /* 0x00589cf8 */
int __fastcall sub_60589D54(int a1);  /* 0x00589d54 */
int __fastcall sub_60589E88(int result, int a2, int a3);  /* 0x00589e88 */
int __fastcall sub_6058A268(float *a1);  /* 0x0058a268 */
int __fastcall sub_6058A3B4(_DWORD *a1);  /* 0x0058a3b4 */
int __fastcall sub_6058A4A8(int a1);  /* 0x0058a4a8 */
int __fastcall sub_6058A920(int a1);  /* 0x0058a920 */
int __fastcall sub_6058AB24(int a1);  /* 0x0058ab24 */
int __fastcall sub_6058AD68(int a1);  /* 0x0058ad68 */
int __fastcall sub_6058AE80(int a1);  /* 0x0058ae80 */
int __fastcall sub_6058B200(int a1);  /* 0x0058b200 */
int __fastcall sub_6058B474(int a1);  /* 0x0058b474 */
int __fastcall sub_6058B728(int a1);  /* 0x0058b728 */
int __fastcall sub_6058BA48(int a1);  /* 0x0058ba48 */
int __fastcall sub_6058BC4C(int a1);  /* 0x0058bc4c */
int __fastcall sub_6058BD10(int a1);  /* 0x0058bd10 */
int __fastcall SE_OBJ_GET_COIN_SHOWER_ref(int a1);  /* 0x0058bee4 */
int __fastcall sub_6058BF88(int a1);  /* 0x0058bf88 */
int __fastcall sub_6058C130(int a1);  /* 0x0058c130 */
int __fastcall sub_6058C530(int a1);  /* 0x0058c530 */
int __fastcall sub_6058C6C4(int a1);  /* 0x0058c6c4 */
int __fastcall sub_6058C8C0(int a1);  /* 0x0058c8c0 */
int __fastcall sub_6058C9EC(int a1);  /* 0x0058c9ec */
int __fastcall sub_6058CD08(int a1);  /* 0x0058cd08 */
int __fastcall sub_6058CDB0(int a1);  /* 0x0058cdb0 */
int __fastcall sub_6058CE4C(int a1);  /* 0x0058ce4c */
int __fastcall sub_6058CF4C(int a1);  /* 0x0058cf4c */
int __fastcall sub_6058CF74(int a1);  /* 0x0058cf74 */
int __fastcall sub_6058D07C(int a1);  /* 0x0058d07c */
int __fastcall sub_6058D3EC(int a1);  /* 0x0058d3ec */
int __fastcall sub_6058D610(int a1);  /* 0x0058d610 */
int __fastcall SE_OBJ_COIN_POP_UP_ref(int a1);  /* 0x0058d928 */
int __fastcall sub_6058DBB0(int a1);  /* 0x0058dbb0 */
int __fastcall sub_6058DC48(int a1);  /* 0x0058dc48 */
bool __fastcall sub_6058DC60(int a1, int a2);  /* 0x0058dc60 */
int __fastcall sub_6058DD64(Actor *a1);  /* 0x0058dd64 */
int __fastcall sub_6058E33C(int result);  /* 0x0058e33c */
int __fastcall sub_6058E388(int a1);  /* 0x0058e388 */
int __fastcall sub_6058E44C(int a1);  /* 0x0058e44c */
bool __fastcall sub_6058E464(int a1, int a2);  /* 0x0058e464 */
int __fastcall sub_6058E568(Actor *a1);  /* 0x0058e568 */
int __fastcall sub_6058E730(int a1);  /* 0x0058e730 */
int __fastcall sub_6058E864(int a1);  /* 0x0058e864 */
void __fastcall sub_6058E9A8(int a1);  /* 0x0058e9a8 */
int __fastcall sub_6058E9F8(int a1);  /* 0x0058e9f8 */
int __fastcall sub_6058ED08(int a1);  /* 0x0058ed08 */
int __fastcall sub_6058EE0C(float *a1);  /* 0x0058ee0c */
int __fastcall sub_6058EF40(float *a1);  /* 0x0058ef40 */
int __fastcall sub_6058F020(int result);  /* 0x0058f020 */
int __fastcall sub_6058F110(int a1);  /* 0x0058f110 */
bool __fastcall sub_6058F128(int a1, unsigned __int16 *a2);  /* 0x0058f128 */
int __fastcall sub_6058F13C(int a1, int a2);  /* 0x0058f13c */
int __fastcall sub_6058F1F0(int a1);  /* 0x0058f1f0 */
bool __fastcall sub_6058F354(int a1, int a2);  /* 0x0058f354 */
int __fastcall sub_6058F458(Actor *a1);  /* 0x0058f458 */
int __fastcall sub_6058F788(int a1);  /* 0x0058f788 */
int __fastcall sub_6058FA30(int *a1);  /* 0x0058fa30 */
int __fastcall sub_60590014(int a1);  /* 0x00590014 */
int __fastcall sub_605905E4(int a1);  /* 0x005905e4 */
int __fastcall sub_60590684(int a1, int a2, int a3, int a4);  /* 0x00590684 */
int __fastcall sub_60590790(int a1);  /* 0x00590790 */
bool __fastcall sub_605907C8(int a1, int a2);  /* 0x005907c8 */
void __fastcall sub_605909B0(int a1);  /* 0x005909b0 */
int __fastcall sub_605909F0(int a1);  /* 0x005909f0 */
int __fastcall ship_bottom_waku_ref(int a1);  /* 0x00590af4 */
int __fastcall sub_60590CBC(int a1);  /* 0x00590cbc */
int __fastcall sub_60590E6C(_DWORD **a1, int a2, int a3, int a4, int a5);  /* 0x00590e6c */
int __fastcall sub_60590F30(int a1);  /* 0x00590f30 */
int __fastcall sub_6059115C(int a1, int a2);  /* 0x0059115c */
int __fastcall sub_60591278(int *a1);  /* 0x00591278 */
int __fastcall sub_6059140C(int *a1);  /* 0x0059140c */
int __fastcall sub_60591414(int a1);  /* 0x00591414 */
int __fastcall sub_60591480(int a1);  /* 0x00591480 */
int __fastcall sub_60591530(_DWORD *a1);  /* 0x00591530 */
int __fastcall sub_60591598(int a1);  /* 0x00591598 */
int __fastcall sub_6059170C(int a1);  /* 0x0059170c */
int __fastcall sub_60591878(int a1);  /* 0x00591878 */
int __fastcall sub_605918A4(int a1, int a2, int a3, int a4);  /* 0x005918a4 */
bool __fastcall sub_605918CC(int a1, int a2);  /* 0x005918cc */
int __fastcall sub_605919D0(Actor *a1);  /* 0x005919d0 */
int __fastcall sub_60591D24(_DWORD *a1);  /* 0x00591d24 */
int __fastcall sub_60591D90(int a1);  /* 0x00591d90 */
int __fastcall sub_60591DAC(int result);  /* 0x00591dac */
unsigned int __fastcall sub_60591DBC(int a1);  /* 0x00591dbc */
int __fastcall sub_60592190(int a1, int a2, int a3, int a4);  /* 0x00592190 */
int __fastcall sub_605922A4(int result);  /* 0x005922a4 */
int __fastcall sub_605922F0(int a1);  /* 0x005922f0 */
int __fastcall sub_605922F8(int *a1);  /* 0x005922f8 */
int __fastcall sub_605924A4(int a1);  /* 0x005924a4 */
int __fastcall sub_60592CFC(int a1);  /* 0x00592cfc */
int __fastcall sub_60592E6C(int a1);  /* 0x00592e6c */
int __fastcall SE_EMY_SHELL_OPEN_ref(int a1);  /* 0x00592f00 */
int __fastcall SE_EMY_SHELL_OPEN_ref_2(int a1);  /* 0x00593414 */
int __fastcall sub_60593580(int a1);  /* 0x00593580 */
int __fastcall sub_605938D4(int a1);  /* 0x005938d4 */
int __fastcall sub_60593A1C(int a1);  /* 0x00593a1c */
int __fastcall sub_60593B2C(int result);  /* 0x00593b2c */
int __fastcall sub_60593B3C(int a1);  /* 0x00593b3c */
int __fastcall sub_60593B98(int a1);  /* 0x00593b98 */
int __fastcall sub_6059423C(_DWORD *a1);  /* 0x0059423c */
int __fastcall sub_605943EC(int a1, int a2);  /* 0x005943ec */
int __fastcall sub_605947BC(int a1);  /* 0x005947bc */
int __fastcall sub_6059499C(int result);  /* 0x0059499c */
int __fastcall sub_60594AF8(int a1, int a2, int a3, int a4);  /* 0x00594af8 */
int __fastcall sub_60594B40(int a1);  /* 0x00594b40 */
int __fastcall sub_6059504C(int a1, int a2);  /* 0x0059504c */
int __fastcall sub_60595520(int a1, int a2);  /* 0x00595520 */
int __fastcall sub_60595760(int a1, int a2);  /* 0x00595760 */
bool __fastcall sub_605958FC(int a1, _BYTE *a2);  /* 0x005958fc */
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
int __fastcall sub_605981FC(int a1, int a2);  /* 0x005981fc */
bool __fastcall sub_605982A8(int a1, int a2);  /* 0x005982a8 */
void __fastcall sub_605983AC(int a1);  /* 0x005983ac */
int __fastcall sub_60598418(int a1);  /* 0x00598418 */
int __fastcall sub_6059848C(int a1, int a2);  /* 0x0059848c */
int __fastcall Actor_chibiyoshi_ship_build(int a1);  /* 0x00598524 */
int __fastcall sub_60598588(int a1);  /* 0x00598588 */
int __fastcall sub_605986B0(int a1, int a2);  /* 0x005986b0 */
int __fastcall sub_6059886C(int a1);  /* 0x0059886c */
int __fastcall sub_60598870(int a1);  /* 0x00598870 */
int __fastcall sub_60598874(int a1, unsigned int a2);  /* 0x00598874 */
int __fastcall sub_60598898(int a1);  /* 0x00598898 */
int __fastcall sub_605988CC(int a1);  /* 0x005988cc */
int __fastcall sub_6059892C(int a1);  /* 0x0059892c */
int __fastcall sub_60598AAC(int a1);  /* 0x00598aac */
int __fastcall sub_60598BD4(int a1);  /* 0x00598bd4 */
int __fastcall sub_60598E98(_BYTE *a1, int a2);  /* 0x00598e98 */
int __fastcall sub_60598F10(int a1);  /* 0x00598f10 */
int __fastcall sub_60598F2C(int a1);  /* 0x00598f2c */
int __fastcall sub_60598F48(int a1);  /* 0x00598f48 */
int __fastcall sub_60598FC0(int a1, int a2, int a3);  /* 0x00598fc0 */
int __fastcall sub_60599120(_DWORD *a1);  /* 0x00599120 */
int __fastcall sub_605991A4(int a1, int a2);  /* 0x005991a4 */
int __fastcall sub_605992AC(int a1);  /* 0x005992ac */
int __fastcall sub_605992C4(int a1);  /* 0x005992c4 */
int __fastcall SE_PLY_CH_YOSHI_BLLN_FLY_ref(int a1);  /* 0x00599424 */
int __fastcall sub_605994F4(int a1);  /* 0x005994f4 */
int __fastcall sub_60599518(int a1);  /* 0x00599518 */
int __fastcall sub_605996D0(int a1);  /* 0x005996d0 */
int __fastcall sub_60599800(int a1);  /* 0x00599800 */
int __fastcall sub_60599954(int a1);  /* 0x00599954 */
bool __fastcall sub_605999E8(int a1);  /* 0x005999e8 */
int __fastcall sub_60599BE4(int a1);  /* 0x00599be4 */
int __fastcall sub_60599C58(int a1);  /* 0x00599c58 */
int __fastcall sub_60599FAC(_DWORD *a1);  /* 0x00599fac */
int __fastcall sub_6059A25C(int a1);  /* 0x0059a25c */
int __fastcall sub_6059A2A0(int a1);  /* 0x0059a2a0 */
int __fastcall sub_6059A470(int a1);  /* 0x0059a470 */
int __fastcall sub_6059A4A0(int a1);  /* 0x0059a4a0 */
int __fastcall sub_6059A5CC(int a1);  /* 0x0059a5cc */
int __fastcall sub_6059A684(int a1);  /* 0x0059a684 */
int __fastcall sub_6059A758(int a1);  /* 0x0059a758 */
unsigned int __fastcall sub_6059A80C(int a1);  /* 0x0059a80c */
int __fastcall sub_6059A838(int a1);  /* 0x0059a838 */
int __fastcall sub_6059A83C(int a1);  /* 0x0059a83c */
int __fastcall sub_6059A9F4(int a1, int a2);  /* 0x0059a9f4 */
int __fastcall sub_6059AB2C(int *a1, int a2, float *a3);  /* 0x0059ab2c */
int __fastcall sub_6059ABB4(int a1, int a2);  /* 0x0059abb4 */
int __fastcall sub_6059AC08(int a1, int a2);  /* 0x0059ac08 */
int __fastcall sub_6059AC24(int a1);  /* 0x0059ac24 */
int __fastcall sub_6059AC64(int result);  /* 0x0059ac64 */
bool __fastcall sub_6059AC8C(int a1, int a2);  /* 0x0059ac8c */
void __fastcall sub_6059AD90(int a1);  /* 0x0059ad90 */
int __fastcall sub_6059AE74(int a1);  /* 0x0059ae74 */
int __fastcall sub_6059AF5C(int result, int *a2);  /* 0x0059af5c */
bool __fastcall sub_6059AF8C(int a1, int a2);  /* 0x0059af8c */
bool __fastcall sub_6059B0CC(int a1);  /* 0x0059b0cc */
int __fastcall sub_6059B2C0(int a1);  /* 0x0059b2c0 */
int __fastcall sub_6059B2F8(int a1, int a2);  /* 0x0059b2f8 */
int __fastcall sub_6059B330(int a1, _DWORD *a2);  /* 0x0059b330 */
int __fastcall sub_6059B374(int a1, int a2);  /* 0x0059b374 */
int __fastcall sub_6059B380(int result, _DWORD *a2);  /* 0x0059b380 */
int __fastcall sub_6059B390(int a1, int a2);  /* 0x0059b390 */
int __fastcall sub_6059B3B8(int a1);  /* 0x0059b3b8 */
int __fastcall sub_6059B3C0(int a1);  /* 0x0059b3c0 */
int __fastcall sub_6059B720(int a1, int *a2);  /* 0x0059b720 */
int __fastcall sub_6059B84C(int a1);  /* 0x0059b84c */
int __fastcall sub_6059B854(int a1);  /* 0x0059b854 */
int __fastcall sub_6059B974(int a1, int a2);  /* 0x0059b974 */
int __fastcall sub_6059BB5C(int a1, int a2, int a3, int a4, int a5);  /* 0x0059bb5c */
int __fastcall sub_6059BBD4(int a1);  /* 0x0059bbd4 */
int __fastcall sub_6059BBE0(int a1);  /* 0x0059bbe0 */
int __fastcall sub_6059BDC4(int a1);  /* 0x0059bdc4 */
int __fastcall sub_6059BDD4(int result);  /* 0x0059bdd4 */
int __fastcall sub_6059BDF8(int a1, _DWORD *a2, int a3);  /* 0x0059bdf8 */
int __fastcall sub_6059BE40(int a1);  /* 0x0059be40 */
int __fastcall sub_6059BE48(int a1);  /* 0x0059be48 */
int __fastcall sub_6059BE50(int a1);  /* 0x0059be50 */
int __fastcall sub_6059BE58(int a1);  /* 0x0059be58 */
int __fastcall sub_6059BE64(int a1);  /* 0x0059be64 */
int __fastcall sub_6059BFA4(int a1, int a2, int a3);  /* 0x0059bfa4 */
int __fastcall sub_6059C0D8(float *a1);  /* 0x0059c0d8 */
int __fastcall sub_6059C584(int a1);  /* 0x0059c584 */
int __fastcall sub_6059C894(int a1, int a2, int a3, int a4);  /* 0x0059c894 */
int __fastcall sub_6059C8C0(int a1);  /* 0x0059c8c0 */
int __fastcall sub_6059C8D8(int a1);  /* 0x0059c8d8 */
bool __fastcall sub_6059CAF4(int a1);  /* 0x0059caf4 */
int __fastcall sub_6059CBA8(int result);  /* 0x0059cba8 */
int __fastcall sub_6059CBBC(int result);  /* 0x0059cbbc */
int __fastcall sub_6059CBF4(_BYTE *a1);  /* 0x0059cbf4 */
int __fastcall sub_6059CC28(_BYTE *a1);  /* 0x0059cc28 */
int __fastcall sub_6059CC54(int a1);  /* 0x0059cc54 */
bool __fastcall sub_6059CCF4(int a1, int a2);  /* 0x0059ccf4 */
void __fastcall sub_6059CE6C(int a1);  /* 0x0059ce6c */
int __fastcall sub_6059CF14(int a1);  /* 0x0059cf14 */
int __fastcall sub_6059CFC0(int a1, int a2);  /* 0x0059cfc0 */
int __fastcall sub_6059D05C(int a1);  /* 0x0059d05c */
int __fastcall sub_6059D2A4(int a1);  /* 0x0059d2a4 */
int __fastcall sub_6059D380(int a1, int a2, int a3, int a4);  /* 0x0059d380 */
int __fastcall sub_6059D384(int result);  /* 0x0059d384 */
int __fastcall sub_6059D394(int result);  /* 0x0059d394 */
bool __fastcall sub_6059D3D0(int a1);  /* 0x0059d3d0 */
int __fastcall sub_6059D484(int a1);  /* 0x0059d484 */
unsigned int __fastcall sub_6059D4A0(int a1);  /* 0x0059d4a0 */
int __fastcall sub_6059D6C8(_BYTE *a1);  /* 0x0059d6c8 */
bool __fastcall sub_6059D6CC(int a1, int a2);  /* 0x0059d6cc */
int __fastcall sub_6059D8B8(int a1);  /* 0x0059d8b8 */
int __fastcall sub_6059D964(int a1, int a2);  /* 0x0059d964 */
int __fastcall sub_6059DA00(int a1);  /* 0x0059da00 */
int __fastcall sub_6059DB80(int result);  /* 0x0059db80 */
int __fastcall sub_6059DD28(int a1);  /* 0x0059dd28 */
int __fastcall fire_rot_cannon_ref(int a1);  /* 0x0059dec4 */
int __fastcall sub_6059E220(int a1);  /* 0x0059e220 */
int __fastcall sub_6059E5AC(int result);  /* 0x0059e5ac */
int __fastcall sub_6059E75C(int a1);  /* 0x0059e75c */
int __fastcall sub_6059E8CC(int a1, int a2, int a3, int a4);  /* 0x0059e8cc */
int __fastcall sub_6059E8F4(int a1);  /* 0x0059e8f4 */
int __fastcall sub_6059E988(int a1);  /* 0x0059e988 */
int __fastcall sub_6059EA0C(_DWORD *a1);  /* 0x0059ea0c */
bool __fastcall sub_6059EA38(int a1, int a2);  /* 0x0059ea38 */
void __fastcall sub_6059EBB0(int a1);  /* 0x0059ebb0 */
int __fastcall sub_6059ECD8(int a1);  /* 0x0059ecd8 */
int __fastcall Actor_bana_2_build(int a1);  /* 0x0059ee3c */
int __fastcall sub_6059EEF0(_BYTE *a1);  /* 0x0059eef0 */
int __fastcall sub_6059F0A4(int a1);  /* 0x0059f0a4 */
int __fastcall sub_6059F258(int a1, int a2, int a3, int a4);  /* 0x0059f258 */
int __fastcall sub_6059F25C(int a1);  /* 0x0059f25c */
int __fastcall sub_6059F274(int result);  /* 0x0059f274 */
bool __fastcall sub_6059F28C(int a1);  /* 0x0059f28c */
int __fastcall sub_6059F340(_BYTE *a1);  /* 0x0059f340 */
int __fastcall sub_6059F344(_BYTE *a1);  /* 0x0059f344 */
unsigned int __fastcall sub_6059F348(int a1);  /* 0x0059f348 */
bool __fastcall sub_6059F514(int a1, int a2);  /* 0x0059f514 */
int __fastcall sub_6059F700(int a1);  /* 0x0059f700 */
bool __fastcall sub_6059F7AC(int a1, int a2);  /* 0x0059f7ac */
int __fastcall sub_6059F804(int a1);  /* 0x0059f804 */
int __fastcall sub_6059FA30(int a1);  /* 0x0059fa30 */
int __fastcall sub_6059FA44(_DWORD *a1, unsigned int *a2, _DWORD *a3, int a4);  /* 0x0059fa44 */
bool __fastcall sub_6059FAA8(int a1, int a2);  /* 0x0059faa8 */
int __fastcall sub_6059FC90(Actor *a1);  /* 0x0059fc90 */
int __fastcall sub_6059FEA4(float *a1);  /* 0x0059fea4 */
int __fastcall sub_6059FEDC(int result);  /* 0x0059fedc */
int __fastcall sub_6059FF08(int a1);  /* 0x0059ff08 */
int __fastcall sub_605A0308(int result);  /* 0x005a0308 */
int __fastcall sub_605A033C(int a1);  /* 0x005a033c */
int __fastcall sub_605A050C(int result);  /* 0x005a050c */
__int64 __fastcall sub_605A051C(__int64 result);  /* 0x005a051c */
int __fastcall sub_605A055C(int a1);  /* 0x005a055c */
int __fastcall sub_605A0774(int result);  /* 0x005a0774 */
int __fastcall sub_605A0784(int result);  /* 0x005a0784 */
int __fastcall sub_605A07A0(int a1);  /* 0x005a07a0 */
int __fastcall sub_605A0A04(int result);  /* 0x005a0a04 */
int __fastcall sub_605A0A14(int result);  /* 0x005a0a14 */
int __fastcall sub_605A0A24(int result);  /* 0x005a0a24 */
int __fastcall sub_605A0A84(int result);  /* 0x005a0a84 */
int __fastcall sub_605A0A98(int a1);  /* 0x005a0a98 */
int __fastcall sub_605A0C8C(int result);  /* 0x005a0c8c */
int __fastcall sub_605A0D08(int result);  /* 0x005a0d08 */
int __fastcall sub_605A0D80(int a1);  /* 0x005a0d80 */
int __fastcall sub_605A1410(_DWORD *a1);  /* 0x005a1410 */
int __fastcall sub_605A158C(int a1);  /* 0x005a158c */
int __fastcall sub_605A1818(int result);  /* 0x005a1818 */
int __fastcall sub_605A1AA8(int a1, int a2, int a3, int a4);  /* 0x005a1aa8 */
int __fastcall sub_605A1AD4(int a1);  /* 0x005a1ad4 */
void __fastcall sub_605A1B90(_BYTE *a1);  /* 0x005a1b90 */
int __fastcall sub_605A1C00(_BYTE *a1);  /* 0x005a1c00 */
int __fastcall sub_605A2140(int a1);  /* 0x005a2140 */
int __fastcall sub_605A24B0(int a1, int a2);  /* 0x005a24b0 */
int __fastcall sub_605A25B4(int a1);  /* 0x005a25b4 */
int __fastcall sub_605A26DC(int a1);  /* 0x005a26dc */
int __fastcall sub_605A26F4(int result);  /* 0x005a26f4 */
int __fastcall sub_605A2704(int result);  /* 0x005a2704 */
int __fastcall sub_605A2714(int a1);  /* 0x005a2714 */
int __fastcall sub_605A28B0(int a1, int a2, int a3, int a4);  /* 0x005a28b0 */
bool __fastcall sub_605A2920(int a1, int a2);  /* 0x005a2920 */
void __fastcall sub_605A2A98(_DWORD *a1);  /* 0x005a2a98 */
int __fastcall sub_605A2BF0(_DWORD *a1);  /* 0x005a2bf0 */
bool __fastcall sub_605A2C10(int a1, int a2);  /* 0x005a2c10 */
bool __fastcall TerrainEffects_vf0(int a1, int a2);  /* 0x005a2d08 */
int __fastcall sub_605A2F78(int a1);  /* 0x005a2f78 */
int __fastcall sub_605A32E4(int result);  /* 0x005a32e4 */
int __fastcall sub_605A3318(int result);  /* 0x005a3318 */
int __fastcall sub_605A38F0(int a1, int a2, int a3, int a4);  /* 0x005a38f0 */
int __fastcall sub_605A3B58(int a1);  /* 0x005a3b58 */
int __fastcall sub_605A3DBC(int result);  /* 0x005a3dbc */
int __fastcall sub_605A3F14(int a1);  /* 0x005a3f14 */
int __fastcall sub_605A3F40(int result);  /* 0x005a3f40 */
int __fastcall sub_605A4188(int a1, int a2, int a3, int a4);  /* 0x005a4188 */
int __fastcall sub_605A4244(int result);  /* 0x005a4244 */
int __fastcall sub_605A4444(int a1);  /* 0x005a4444 */
int __fastcall sub_605A46B0(int a1);  /* 0x005a46b0 */
int __fastcall sub_605A46DC(int result);  /* 0x005a46dc */
int __fastcall sub_605A4894(int result);  /* 0x005a4894 */
int __fastcall sub_605A48A8(__int64 a1);  /* 0x005a48a8 */
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
int __fastcall sub_605A58C0(int a1);  /* 0x005a58c0 */
int __fastcall sub_605A5D8C(float *a1);  /* 0x005a5d8c */
int __fastcall sub_605A6260(int a1, int a2);  /* 0x005a6260 */
unsigned int __fastcall sub_605A6708(unsigned int result, _DWORD *a2);  /* 0x005a6708 */
int __fastcall sub_605A6A98(int a1);  /* 0x005a6a98 */
int __fastcall sub_605A6BC4(int a1);  /* 0x005a6bc4 */
int __fastcall sub_605A6BDC(int result);  /* 0x005a6bdc */
int __fastcall sub_605A6BEC(int result);  /* 0x005a6bec */
int __fastcall sub_605A6BFC(int a1);  /* 0x005a6bfc */
int __fastcall sub_605A6D94(int a1, int a2, int a3, int a4);  /* 0x005a6d94 */
void __fastcall sub_605A6FE0(int a1, int a2, int a3);  /* 0x005a6fe0 */
bool __fastcall sub_605A7150(int a1, int a2, float *a3);  /* 0x005a7150 */
int __fastcall SE_PLY_HIT_BROS_FLR_BOUND_ref(int a1, int a2, int *a3);  /* 0x005a72a8 */
bool __fastcall sub_605A731C(int a1, int a2);  /* 0x005a731c */
void __fastcall sub_605A7494(_DWORD *a1);  /* 0x005a7494 */
int __fastcall sub_605A75CC(_DWORD *a1);  /* 0x005a75cc */
int __fastcall CloudTerrainActor_vf5(int **a1);  /* 0x005a77dc */
int __fastcall sub_605A788C(int **a1);  /* 0x005a788c */
int __fastcall CloudTerrainActor_vf49(int result);  /* 0x005a7a64 */
int __fastcall CloudTerrainActor_vf50(int result);  /* 0x005a7a74 */
bool __fastcall CloudTerrainActor_vf0(int a1, int a2);  /* 0x005a7a90 */
int __fastcall CloudTerrainActor_vf3(_DWORD *a1);  /* 0x005a7c08 */
int __fastcall Lava_onCreate(int a1);  /* 0x005a7d68 */
int __fastcall sub_605A8104(_DWORD *a1);  /* 0x005a8104 */
int __fastcall sub_605A8604(int result);  /* 0x005a8604 */
int __fastcall Lava_vf49(int result);  /* 0x005a8794 */
int __fastcall Lava_vf50(int result);  /* 0x005a87b8 */
int __fastcall SE_AMB_MAGMA_RISE_ref_2(int a1);  /* 0x005a87d0 */
int __fastcall Lava_vf8(int a1);  /* 0x005a8ba0 */
int __fastcall Lava_vf53(int result);  /* 0x005a8bdc */
int __fastcall SE_AMB_MAGMA_RISE_ref_3(int a1);  /* 0x005a8bfc */
bool __fastcall Lava_vf0(int a1, int a2);  /* 0x005a90f8 */
int __fastcall Lava_vf3(_DWORD *a1);  /* 0x005a9270 */
int __fastcall sub_605A931C(int a1);  /* 0x005a931c */
int __fastcall MistEffect_vf5(int **a1);  /* 0x005a94bc */
int __fastcall sub_605A955C(int **a1);  /* 0x005a955c */
int __fastcall MistEffect_vf49(int result);  /* 0x005a9720 */
int __fastcall MistEffect_vf50(int result);  /* 0x005a9730 */
bool __fastcall MistEffect_vf0(int a1, int a2);  /* 0x005a974c */
int __fastcall MistEffect_vf3(_DWORD *a1);  /* 0x005a98c4 */
int __fastcall Poison_onCreate(int a1);  /* 0x005a9a20 */
int __fastcall Poison_vf49(int result);  /* 0x005aa00c */
int __fastcall Poison_vf50(int result);  /* 0x005aa01c */
int __fastcall Poison_onExecute(int a1);  /* 0x005aa034 */
int __fastcall SE_AMB_POISON_RISE_ref(int a1);  /* 0x005aa038 */
bool __fastcall Poison_checkRTTI(int a1, int a2);  /* 0x005aa430 */
int __fastcall Poison_dtorFree(_DWORD *a1);  /* 0x005aa5a8 */
int __fastcall sub_605AA654(int a1);  /* 0x005aa654 */
int __fastcall Quicksand_onCreate(int a1);  /* 0x005aa7a4 */
int __fastcall sub_605AAB4C(_DWORD **a1);  /* 0x005aab4c */
int __fastcall Quicksand_vf49(int result);  /* 0x005aaddc */
int __fastcall Quicksand_vf50(int result);  /* 0x005aadec */
int __fastcall Quicksand_vf12(int a1, int a2, int a3, int a4);  /* 0x005aae08 */
bool __fastcall Quicksand_vf0(int a1, int a2);  /* 0x005aaf14 */
int __fastcall Quicksand_vf3(_DWORD *a1);  /* 0x005ab08c */
int __fastcall sub_605AB138(int a1);  /* 0x005ab138 */
int __fastcall sub_605AB664(int a1);  /* 0x005ab664 */
int __fastcall sub_605AC130(int a1);  /* 0x005ac130 */
int __fastcall sub_605AC470(int a1);  /* 0x005ac470 */
int __fastcall Water_vf49(int result);  /* 0x005ac6a4 */
int __fastcall Water_onExecute(int a1);  /* 0x005ac75c */
int __fastcall Water_onDraw(int a1);  /* 0x005ac930 */
bool __fastcall Water_checkRTTI(int a1, int a2);  /* 0x005aca40 */
int __fastcall Water_dtorFree(_DWORD *a1);  /* 0x005acbb8 */
int __fastcall sub_605ACD1C(int a1);  /* 0x005acd1c */
int __fastcall sub_605AD148(float *a1);  /* 0x005ad148 */
int __fastcall sub_605AD4D4(int a1);  /* 0x005ad4d4 */
int __fastcall sub_605AD534(_DWORD *a1);  /* 0x005ad534 */
int __fastcall sub_605AD594(int a1, int a2);  /* 0x005ad594 */
int __fastcall sub_605AD5B4(int a1, int a2);  /* 0x005ad5b4 */
int __fastcall sub_605AD5D4(int a1, int a2);  /* 0x005ad5d4 */
int __fastcall sub_605AD5F4(int a1);  /* 0x005ad5f4 */
int __fastcall sub_605AD620(int a1, int a2);  /* 0x005ad620 */
int __fastcall sub_605AD64C(int a1);  /* 0x005ad64c */
int __fastcall sub_605AD678(int result);  /* 0x005ad678 */
unsigned int __fastcall sub_605AD9C8(int a1);  /* 0x005ad9c8 */
int __fastcall SE_OBJ_DAIKONBOU_L_SIGN_ref(int a1);  /* 0x005adb00 */
bool __fastcall sub_605ADB84(int a1, int a2);  /* 0x005adb84 */
void __fastcall sub_605ADCFC(int a1);  /* 0x005adcfc */
int __fastcall sub_605ADD64(int a1);  /* 0x005add64 */
int __fastcall sub_605ADE70(int a1);  /* 0x005ade70 */
int __fastcall sub_605ADE88(int a1);  /* 0x005ade88 */
int __fastcall sub_605ADE9C(int a1, int a2);  /* 0x005ade9c */
int __fastcall sub_605ADFF0(_DWORD *a1);  /* 0x005adff0 */
int __fastcall sub_605AE18C(int *a1);  /* 0x005ae18c */
int __fastcall sub_605AE3D4(int a1);  /* 0x005ae3d4 */
bool __fastcall sub_605AE3E0(int a1);  /* 0x005ae3e0 */
int __fastcall sub_605AE414(int a1);  /* 0x005ae414 */
int __fastcall sub_605AE4E4(_DWORD *a1, int *a2, int a3);  /* 0x005ae4e4 */
int __fastcall sub_605AE5FC(int a1, int a2, int a3, int a4);  /* 0x005ae5fc */
int __fastcall sub_605AE628(int a1, int *a2);  /* 0x005ae628 */
int __fastcall sub_605AE8D0(int a1);  /* 0x005ae8d0 */
int __fastcall sub_605AE948(int a1);  /* 0x005ae948 */
int __fastcall sub_605AE9AC(int result);  /* 0x005ae9ac */
int __fastcall sub_605AE9BC(float *a1);  /* 0x005ae9bc */
int __fastcall sub_605AEAD4(_BYTE *a1);  /* 0x005aead4 */
int __fastcall sub_605AEB58(int a1);  /* 0x005aeb58 */
int __fastcall sub_605AEB9C(int a1, int a2);  /* 0x005aeb9c */
bool __fastcall sub_605AEC7C(int a1, int a2);  /* 0x005aec7c */
int __fastcall sub_605AED80(Actor *a1);  /* 0x005aed80 */
int __fastcall sub_605AEE80(int result);  /* 0x005aee80 */
int __fastcall sub_605AEF70(int a1);  /* 0x005aef70 */
bool __fastcall sub_605AF060(int a1, int a2);  /* 0x005af060 */
int __fastcall sub_605AF24C(int a1);  /* 0x005af24c */
int __fastcall sub_605AF2C0(int a1, int a2, int a3);  /* 0x005af2c0 */
int __fastcall sub_605AF2F8(int result);  /* 0x005af2f8 */
int __fastcall sub_605AF320(int a1, float *a2, int a3);  /* 0x005af320 */
int __fastcall sub_605AF340(int a1, int a2);  /* 0x005af340 */
int __fastcall sub_605AF48C(int result);  /* 0x005af48c */
int __fastcall sub_605AF57C(int a1);  /* 0x005af57c */
bool __fastcall sub_605AF67C(int a1, int a2);  /* 0x005af67c */
int __fastcall sub_605AF868(int a1);  /* 0x005af868 */
int __fastcall sub_605AF8DC(int a1, int a2, int a3);  /* 0x005af8dc */
int __fastcall sub_605AF914(int result);  /* 0x005af914 */
int __fastcall sub_605AF93C(int a1, float *a2, int a3);  /* 0x005af93c */
int __fastcall sub_605AFA20(int result);  /* 0x005afa20 */
__int64 __fastcall sub_605AFAA4(__int64 result);  /* 0x005afaa4 */
int __fastcall sub_605AFAD8(int result);  /* 0x005afad8 */
bool __fastcall sub_605AFBF4(int a1, int a2);  /* 0x005afbf4 */
int __fastcall sub_605AFDE0(int a1);  /* 0x005afde0 */
int __fastcall sub_605AFE54(int a1, int a2, int a3);  /* 0x005afe54 */
int __fastcall sub_605AFE90(int result);  /* 0x005afe90 */
int __fastcall sub_605AFF60(int result);  /* 0x005aff60 */
int __fastcall sub_605AFF88(int a1, int a2, int a3);  /* 0x005aff88 */
int __fastcall sub_605B006C(int result);  /* 0x005b006c */
__int64 __fastcall sub_605B00F0(__int64 result);  /* 0x005b00f0 */
int __fastcall sub_605B0124(int result);  /* 0x005b0124 */
bool __fastcall sub_605B0240(int a1, int a2);  /* 0x005b0240 */
int __fastcall sub_605B042C(int a1);  /* 0x005b042c */
int __fastcall sub_605B04A0(int a1, int a2, int a3);  /* 0x005b04a0 */
int __fastcall sub_605B05BC(int result);  /* 0x005b05bc */
unsigned int __fastcall sub_605B05E4(int a1, int a2, int a3);  /* 0x005b05e4 */
int __fastcall sub_605B06FC(int *a1);  /* 0x005b06fc */
int __fastcall sub_605B07F8(int *a1);  /* 0x005b07f8 */
int __fastcall sub_605B0ADC(int a1);  /* 0x005b0adc */
int __fastcall sub_605B0AF4(int *a1);  /* 0x005b0af4 */
int __fastcall sub_605B0B80(int a1, int *a2, int *a3, int a4);  /* 0x005b0b80 */
int __fastcall sub_605B0CB8(Actor *a1);  /* 0x005b0cb8 */
int __fastcall sub_605B1298(int a1);  /* 0x005b1298 */
int __fastcall sub_605B1328(int a1);  /* 0x005b1328 */
int __fastcall sub_605B13A4(int a1);  /* 0x005b13a4 */
int __fastcall sub_605B1404(int a1);  /* 0x005b1404 */
int __fastcall sub_605B1564(int a1);  /* 0x005b1564 */
int __fastcall sub_605B1828(int a1);  /* 0x005b1828 */
int __fastcall sub_605B18A0(int result);  /* 0x005b18a0 */
int __fastcall sub_605B1A5C(int a1);  /* 0x005b1a5c */
bool __fastcall sub_605B1A74(int a1, int a2);  /* 0x005b1a74 */
int __fastcall sub_605B1C3C(int a1);  /* 0x005b1c3c */
int __fastcall sub_605B1D60(int a1, int a2);  /* 0x005b1d60 */
int __fastcall sub_605B1EAC(int result);  /* 0x005b1eac */
int __fastcall sub_605B1EC4(int result);  /* 0x005b1ec4 */
int __fastcall sub_605B1F0C(int result);  /* 0x005b1f0c */
int __fastcall sub_605B1F24(int result);  /* 0x005b1f24 */
int __fastcall sub_605B1F6C(int a1);  /* 0x005b1f6c */
int __fastcall sub_605B1FA4(int a1, int a2, int a3, int a4);  /* 0x005b1fa4 */
int __fastcall sub_605B1FF4(int a1);  /* 0x005b1ff4 */
int __fastcall sub_605B2024(int result);  /* 0x005b2024 */
int __fastcall sub_605B2030(int a1);  /* 0x005b2030 */
int __fastcall sub_605B2094(int a1);  /* 0x005b2094 */
int __fastcall sub_605B2370(int a1);  /* 0x005b2370 */
int __fastcall sub_605B2438(int a1, int a2, int a3, int a4);  /* 0x005b2438 */
int __fastcall sub_605B2460(float *a1);  /* 0x005b2460 */
bool __fastcall sub_605B25D8(int a1, int a2);  /* 0x005b25d8 */
void __fastcall sub_605B26DC(int a1);  /* 0x005b26dc */
int __fastcall sub_605B272C(int a1);  /* 0x005b272c */
int __fastcall sub_605B2C10(int result);  /* 0x005b2c10 */
int __fastcall sub_605B2D70(int result);  /* 0x005b2d70 */
bool __fastcall sub_605B2DE8(int a1);  /* 0x005b2de8 */
int __fastcall sub_605B30CC(int a1, _BYTE *a2);  /* 0x005b30cc */
unsigned int __fastcall sub_605B30EC(int a1, int a2);  /* 0x005b30ec */
int __fastcall sub_605B3224(int a1, _BYTE *a2);  /* 0x005b3224 */
int __fastcall sub_605B348C(int a1, _BYTE *a2);  /* 0x005b348c */
int __fastcall sub_605B3700(int a1, int a2);  /* 0x005b3700 */
int __fastcall sub_605B3934(int a1, int a2);  /* 0x005b3934 */
int __fastcall sub_605B3E18(int a1, unsigned __int8 *a2);  /* 0x005b3e18 */
int __fastcall sub_605B4010(int a1, _DWORD *a2);  /* 0x005b4010 */
int __fastcall sub_605B4110(int a1, unsigned __int8 *a2, int a3);  /* 0x005b4110 */
int __fastcall sub_605B434C(int a1, int a2, int a3);  /* 0x005b434c */
int __fastcall sub_605B4548(int a1, int a2, int a3, int a4, int a5);  /* 0x005b4548 */
int __fastcall sub_605B4930(int a1, unsigned __int8 *a2, int a3);  /* 0x005b4930 */
int __fastcall sub_605B4A6C(int a1, int a2, int a3);  /* 0x005b4a6c */
int __fastcall sub_605B4CC4(int a1);  /* 0x005b4cc4 */
int __fastcall sub_605B5054(int a1);  /* 0x005b5054 */
int __fastcall sub_605B5274(_DWORD *a1);  /* 0x005b5274 */
int __fastcall sub_605B5A3C(int a1, int a2, int a3, int a4, int a5);  /* 0x005b5a3c */
int __fastcall sub_605B5BDC(_DWORD *a1, _DWORD *a2);  /* 0x005b5bdc */
int __fastcall sub_605B5FA8(int a1, _DWORD *a2, int a3, int a4, int a5);  /* 0x005b5fa8 */
int __fastcall sub_605B6238(int result);  /* 0x005b6238 */
int __fastcall sub_605B6364(int result, int *a2, int a3);  /* 0x005b6364 */
int __fastcall sub_605B6DF8(int a1);  /* 0x005b6df8 */
int __fastcall Actor_charenjimodoexclusive_buroku_build(int a1);  /* 0x005b700c */
int __fastcall sub_605B7070(int a1);  /* 0x005b7070 */
int __fastcall sub_605B7128(int a1, int a2, int a3, int a4);  /* 0x005b7128 */
int __fastcall sub_605B7260(int a1, int a2, int a3, int a4);  /* 0x005b7260 */
int __fastcall sub_605B7284(int a1);  /* 0x005b7284 */
bool __fastcall sub_605B72A8(int a1, int a2);  /* 0x005b72a8 */
void __fastcall sub_605B7490(_DWORD *a1);  /* 0x005b7490 */
int __fastcall sub_605B74CC(_DWORD *a1);  /* 0x005b74cc */
void __fastcall sub_605B750C(_DWORD *a1);  /* 0x005b750c */
int __fastcall sub_605B774C(_DWORD *a1, int a2, unsigned __int8 a3, unsigned __int8 a4);  /* 0x005b774c */
int __fastcall sub_605B77BC(_DWORD *a1);  /* 0x005b77bc */
int __fastcall sub_605B7974(_DWORD *a1);  /* 0x005b7974 */
unsigned int __fastcall sub_605B7AA0(int a1, float *a2);  /* 0x005b7aa0 */
int __fastcall sub_605B7C10(int a1, int a2, int a3, int a4);  /* 0x005b7c10 */
int __fastcall sub_605B7D58(int a1);  /* 0x005b7d58 */
int __fastcall sub_605B7E84(int a1);  /* 0x005b7e84 */
bool __fastcall sub_605B8178(int a1);  /* 0x005b8178 */
bool __fastcall sub_605B8198(int a1);  /* 0x005b8198 */
bool __fastcall sub_605B81B8(int a1, int a2, int a3);  /* 0x005b81b8 */
int __fastcall sub_605B81F0(int a1);  /* 0x005b81f0 */
int __fastcall sub_605B8580(int a1, int a2, int a3, int a4);  /* 0x005b8580 */
int __fastcall sub_605B85BC(int result);  /* 0x005b85bc */
int __fastcall sub_605B85E8(int a1);  /* 0x005b85e8 */
int __fastcall sub_605B861C(int a1, int a2);  /* 0x005b861c */
int __fastcall SE_OBJ_TOUCH_PIKA_ASHIBA_ref(int a1, int a2);  /* 0x005b86e4 */
bool __fastcall sub_605B87D8(int a1, int a2);  /* 0x005b87d8 */
void __fastcall sub_605B8950(int a1);  /* 0x005b8950 */
int __fastcall sub_605B89B8(int a1);  /* 0x005b89b8 */
int __fastcall sub_605B8A34(int a1);  /* 0x005b8a34 */
int __fastcall sub_605B8A44(int a1, int a2);  /* 0x005b8a44 */
int __fastcall sub_605B8AE0(int a1);  /* 0x005b8ae0 */
int __fastcall sub_605B8C5C(struct sead_IDisposer *a1);  /* 0x005b8c5c */
int __fastcall sub_605B8E44(int a1, int a2, int a3);  /* 0x005b8e44 */
int __fastcall sub_605B9044(int a1, float *a2);  /* 0x005b9044 */
int __fastcall sub_605B9130(int a1, int a2, _BYTE *a3);  /* 0x005b9130 */
int __fastcall sub_605B9974(int a1, int a2);  /* 0x005b9974 */
int __fastcall sub_605B9AD4(int a1, int a2, int a3, int a4);  /* 0x005b9ad4 */
int __fastcall sub_605B9CAC(int a1, int a2);  /* 0x005b9cac */
int __fastcall sub_605B9F30(int a1, unsigned int a2);  /* 0x005b9f30 */
int __fastcall sub_605B9FEC(int a1, float *a2, int a3);  /* 0x005b9fec */
int __fastcall sub_605BA078(int result, int a2, int a3, int a4);  /* 0x005ba078 */
int __fastcall sub_605BA788(int a1);  /* 0x005ba788 */
int __fastcall sub_605BA834(int a1);  /* 0x005ba834 */
int __fastcall sub_605BA8A8(int a1);  /* 0x005ba8a8 */
int __fastcall sub_605BA954(int a1);  /* 0x005ba954 */
int __fastcall sub_605BA9F0(int a1);  /* 0x005ba9f0 */
int __fastcall sub_605BAA9C(int a1);  /* 0x005baa9c */
int __fastcall sub_605BAB48(int a1);  /* 0x005bab48 */
int __fastcall sub_605BAC0C(int a1);  /* 0x005bac0c */
int __fastcall sub_605BACA4(_DWORD *a1);  /* 0x005baca4 */
int __fastcall sub_605BACE8(int a1);  /* 0x005bace8 */
int __fastcall sub_605BAD1C(int a1);  /* 0x005bad1c */
int __fastcall sub_605BAF84(int a1, int a2);  /* 0x005baf84 */
int __fastcall sub_605BAFC8(int a1);  /* 0x005bafc8 */
int __fastcall sub_605BAFE0(int a1, int a2, int a3, int a4);  /* 0x005bafe0 */
bool __fastcall sub_605BB00C(int a1, int a2);  /* 0x005bb00c */
void __fastcall sub_605BB110(_DWORD *a1);  /* 0x005bb110 */
int __fastcall sub_605BB170(_DWORD *a1);  /* 0x005bb170 */
void __fastcall sub_605BB1D4(_DWORD *a1);  /* 0x005bb1d4 */
int __fastcall Actor_omodo_build_helper(int a1);  /* 0x005bb3d8 */
unsigned int __fastcall sub_605BB524(unsigned int result, int a2, int a3, unsigned int a4, unsigned int a5);  /* 0x005bb524 */
int __fastcall sub_605BB690(int a1, float *a2);  /* 0x005bb690 */
int __fastcall sub_605BB7F0(int a1);  /* 0x005bb7f0 */
int __fastcall sub_605BB858(int a1, int a2, int a3, int a4);  /* 0x005bb858 */
int __fastcall sub_605BB8D0(int a1);  /* 0x005bb8d0 */
int __fastcall sub_605BB950(int result, int a2);  /* 0x005bb950 */
int __fastcall sub_605BB9D8(_DWORD **a1);  /* 0x005bb9d8 */
int __fastcall sub_605BB9EC(int *a1);  /* 0x005bb9ec */
int __fastcall sub_605BBA08(int a1, int a2, _DWORD *a3);  /* 0x005bba08 */
int __fastcall SE_OBJ_TSUTA_APPEAR_ref(int a1);  /* 0x005bbb64 */
int __fastcall sub_605BBBE8(int a1);  /* 0x005bbbe8 */
int __fastcall sub_605BBD04(int result);  /* 0x005bbd04 */
int __fastcall head_root_ref(int a1);  /* 0x005bbd3c */
int __fastcall sub_605BBEC4(int a1);  /* 0x005bbec4 */
int __fastcall sub_605BBED4(int a1);  /* 0x005bbed4 */
int __fastcall sub_605BC1B4(_DWORD *a1);  /* 0x005bc1b4 */
int __fastcall sub_605BC6F8(int a1);  /* 0x005bc6f8 */
int __fastcall sub_605BC7CC(int a1, int a2, int a3, int a4);  /* 0x005bc7cc */
int __fastcall sub_605BC7F4(int a1);  /* 0x005bc7f4 */
int __fastcall sub_605BC984(int a1, int a2);  /* 0x005bc984 */
bool __fastcall sub_605BCA54(int a1, int a2);  /* 0x005bca54 */
void __fastcall sub_605BCB58(int a1);  /* 0x005bcb58 */
int __fastcall sub_605BCBB8(int a1);  /* 0x005bcbb8 */
int __fastcall sub_605BCC1C(int a1);  /* 0x005bcc1c */
int __fastcall sub_605BCE90(int result);  /* 0x005bce90 */
int __fastcall sub_605BCEA0(_DWORD *a1);  /* 0x005bcea0 */
int __fastcall sub_605BCF18(int a1);  /* 0x005bcf18 */
int __fastcall sub_605BCF40(int a1);  /* 0x005bcf40 */
int __fastcall sub_605BD008(int a1);  /* 0x005bd008 */
int __fastcall sub_605BD024(int a1);  /* 0x005bd024 */
int __fastcall sub_605BD07C(int a1);  /* 0x005bd07c */
int __fastcall sub_605BD16C(int result);  /* 0x005bd16c */
int __fastcall sub_605BD17C(int result);  /* 0x005bd17c */
int __fastcall obj_coin_blue_ref_2(int a1);  /* 0x005bd1a0 */
int __fastcall sub_605BD600(int a1);  /* 0x005bd600 */
int __fastcall sub_605BD7EC(int a1, int a2, int a3, int a4);  /* 0x005bd7ec */
int __fastcall sub_605BD82C(int a1);  /* 0x005bd82c */
bool __fastcall sub_605BD844(int a1, int a2);  /* 0x005bd844 */
int __fastcall sub_605BDD74(int result);  /* 0x005bdd74 */
int __fastcall sub_605BDD84(int a1);  /* 0x005bdd84 */
int __fastcall sub_605BDDE0(int a1);  /* 0x005bdde0 */
int __fastcall sub_605BDEA4(int a1);  /* 0x005bdea4 */
int __fastcall sub_605BDF18(int a1);  /* 0x005bdf18 */
int __fastcall sub_605BDFE0(int a1);  /* 0x005bdfe0 */
int __fastcall sub_605BE044(float *a1);  /* 0x005be044 */
bool __fastcall sub_605BE110(int a1, int a2);  /* 0x005be110 */
void __fastcall sub_605BE288(_DWORD *a1);  /* 0x005be288 */
int __fastcall sub_605BE314(_DWORD *a1);  /* 0x005be314 */
int __fastcall sub_605BE3A8(int a1, int a2);  /* 0x005be3a8 */
int __fastcall sub_605BE4C4(int a1, int a2, _DWORD *a3);  /* 0x005be4c4 */
int __fastcall sub_605BE4E8(int a1, int a2, int a3);  /* 0x005be4e8 */
int __fastcall sub_605BE52C(int a1, int a2);  /* 0x005be52c */
int __fastcall sub_605BE584(int a1, int a2, int a3, int a4);  /* 0x005be584 */
unsigned int __fastcall sub_605BE604(unsigned __int8 *a1, int a2);  /* 0x005be604 */
bool __fastcall sub_605BE6BC(unsigned __int8 *a1);  /* 0x005be6bc */
unsigned int __fastcall sub_605BE780(unsigned __int8 *a1, int a2);  /* 0x005be780 */
int __fastcall sub_605BE848(int a1, int a2, float *a3);  /* 0x005be848 */
int __fastcall sub_605BE9F4(int a1);  /* 0x005be9f4 */
int __fastcall sub_605BEAD0(int a1);  /* 0x005bead0 */
int __fastcall sub_605BEC5C(int a1);  /* 0x005bec5c */
int __fastcall sub_605BECA4(int a1);  /* 0x005beca4 */
int __fastcall sub_605BECEC(int a1, int a2, int a3);  /* 0x005becec */
int __fastcall sub_605BEF58(int a1);  /* 0x005bef58 */
int __fastcall sub_605BEF74(int a1, float *a2, int a3);  /* 0x005bef74 */
int __fastcall sub_605BF1F8(int a1, int a2, _BYTE *a3, float *a4);  /* 0x005bf1f8 */
int __fastcall sub_605BF51C(int a1);  /* 0x005bf51c */
int __fastcall sub_605BF550(int a1);  /* 0x005bf550 */
int __fastcall sub_605BF5E0(int a1);  /* 0x005bf5e0 */
int __fastcall sub_605BF660(int a1, int a2, int a3, int a4, int a5);  /* 0x005bf660 */
int __fastcall sub_605BF968(int a1, unsigned int *a2, float *a3);  /* 0x005bf968 */
int __fastcall sub_605BF988(_DWORD **a1, unsigned int *a2, float *a3);  /* 0x005bf988 */
int __fastcall sub_605BFAE0(int a1, int *a2, _DWORD *a3, _DWORD *a4);  /* 0x005bfae0 */
int __fastcall SE_BOSS_KOOPA_FLOOR_BREAK_ref(int a1);  /* 0x005bfd54 */
int __fastcall sub_605BFFF0(int result);  /* 0x005bfff0 */
int __fastcall sub_605C0054(_DWORD *a1);  /* 0x005c0054 */
int __fastcall sub_605C0140(_DWORD *a1);  /* 0x005c0140 */
int __fastcall sub_605C018C(int a1);  /* 0x005c018c */
int __fastcall sub_605C0258(int a1);  /* 0x005c0258 */
int __fastcall sub_605C06AC(int a1);  /* 0x005c06ac */
int __fastcall sub_605C06EC(int a1, int a2, int a3, int a4);  /* 0x005c06ec */
bool __fastcall sub_605C08F0(int a1, int a2);  /* 0x005c08f0 */
void __fastcall sub_605C09F4(int a1);  /* 0x005c09f4 */
int __fastcall sub_605C0A44(int a1);  /* 0x005c0a44 */
int __fastcall sub_605C0A9C(int a1, int a2);  /* 0x005c0a9c */
int __fastcall sub_605C0B84(int a1);  /* 0x005c0b84 */
int __fastcall sub_605C0D88(int a1);  /* 0x005c0d88 */
bool __fastcall sub_605C0E34(int a1, int a2);  /* 0x005c0e34 */
int __fastcall sub_605C0FAC(int a1);  /* 0x005c0fac */
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
int __fastcall sub_605C3158(_DWORD *a1);  /* 0x005c3158 */
int __fastcall sub_605C32CC(int a1);  /* 0x005c32cc */
int __fastcall sub_605C32F8(int a1);  /* 0x005c32f8 */
int __fastcall sub_605C399C(int a1);  /* 0x005c399c */
int __fastcall sub_605C4308(int a1);  /* 0x005c4308 */
int __fastcall sub_605C589C(int a1);  /* 0x005c589c */
void __fastcall sub_605C58BC(Actor *a1);  /* 0x005c58bc */
int __fastcall sub_605C592C(Actor *a1);  /* 0x005c592c */
int __fastcall sub_605C59A0(int a1);  /* 0x005c59a0 */
int __fastcall sub_605C5B74(int a1);  /* 0x005c5b74 */
int __fastcall sub_605C5B84(int a1);  /* 0x005c5b84 */
int __fastcall sub_605C5B88(int a1);  /* 0x005c5b88 */
int __fastcall sub_605C5B8C(int a1);  /* 0x005c5b8c */
int __fastcall sub_605C5BA4(int a1);  /* 0x005c5ba4 */
int __fastcall sub_605C5E58(int a1, int a2);  /* 0x005c5e58 */
signed int __fastcall sub_605C5FA8(signed int result, int *a2, float *a3);  /* 0x005c5fa8 */
int __fastcall sub_605C6380(signed int a1, int a2);  /* 0x005c6380 */
int __fastcall sub_605C6508(signed int a1, int a2, int a3);  /* 0x005c6508 */
int __fastcall sub_605C6618(_DWORD *a1);  /* 0x005c6618 */
bool __fastcall sub_605C6684(int a1, int a2);  /* 0x005c6684 */
void __fastcall sub_605C6788(_DWORD *a1);  /* 0x005c6788 */
int __fastcall sub_605C683C(_DWORD *a1);  /* 0x005c683c */
int __fastcall sub_605C69F0(int a1);  /* 0x005c69f0 */
int __fastcall sub_605C6A78(int a1, int a2);  /* 0x005c6a78 */
int __fastcall sub_605C6B58(_DWORD *a1);  /* 0x005c6b58 */
bool __fastcall sub_605C6C08(int a1, int a2);  /* 0x005c6c08 */
int __fastcall sub_605C6C40(int result, int a2, int a3);  /* 0x005c6c40 */
bool __fastcall sub_605C6C9C(int a1, int a2);  /* 0x005c6c9c */
int __fastcall sub_605C6DA0(Actor *a1);  /* 0x005c6da0 */
int __fastcall sub_605C6DD8(int a1);  /* 0x005c6dd8 */
int __fastcall sub_605C6EB4(int a1, int a2, int a3);  /* 0x005c6eb4 */
int __fastcall sub_605C6F0C(int *a1, float *a2, float *a3);  /* 0x005c6f0c */
int __fastcall Actor_pipe_big_RDash_build(int a1);  /* 0x005c7114 */
int __fastcall sub_605C7220(int result);  /* 0x005c7220 */
int __fastcall sub_605C7248(int a1);  /* 0x005c7248 */
int __fastcall sub_605C72DC(int result);  /* 0x005c72dc */
int __fastcall sub_605C72E8(int result);  /* 0x005c72e8 */
int __fastcall sub_605C7314(int a1);  /* 0x005c7314 */
unsigned int __fastcall SE_PLY_CANNON_READY_ref(int a1, int a2, int a3, int a4);  /* 0x005c7350 */
int __fastcall sub_605C7410(int a1);  /* 0x005c7410 */
int __fastcall sub_605C7428(int result);  /* 0x005c7428 */
int __fastcall sub_605C744C(int a1);  /* 0x005c744c */
int __fastcall sub_605C74F8(int result);  /* 0x005c74f8 */
int __fastcall sub_605C7504(int *a1, int a2, int a3, int a4);  /* 0x005c7504 */
bool __fastcall sub_605C7768(int a1, int a2);  /* 0x005c7768 */
int __fastcall sub_605C7C70(int a1);  /* 0x005c7c70 */
unsigned int __fastcall sub_605C7E54(int a1);  /* 0x005c7e54 */
int __fastcall sub_605C8194(int a1);  /* 0x005c8194 */
int __fastcall sub_605C832C(int a1);  /* 0x005c832c */
int __fastcall sub_605C8554(int a1, int a2);  /* 0x005c8554 */
int __fastcall sub_605C8764(_DWORD *a1);  /* 0x005c8764 */
bool __fastcall sub_605C8858(int a1, int a2);  /* 0x005c8858 */
void __fastcall sub_605C8A40(int a1);  /* 0x005c8a40 */
int __fastcall sub_605C8A7C(int a1);  /* 0x005c8a7c */
int __fastcall sub_605C8ABC(int a1, int a2);  /* 0x005c8abc */
int __fastcall sub_605C8B6C(int a1, int a2);  /* 0x005c8b6c */
int __fastcall sub_605C8BA4(int a1, _DWORD *a2);  /* 0x005c8ba4 */
int __fastcall sub_605C8BE8(int a1, int a2);  /* 0x005c8be8 */
int __fastcall sub_605C8BF4(int result, _DWORD *a2);  /* 0x005c8bf4 */
int __fastcall sub_605C8C04(int a1, int a2);  /* 0x005c8c04 */
int __fastcall sub_605C8C2C(int a1);  /* 0x005c8c2c */
int __fastcall sub_605C8C34(int a1);  /* 0x005c8c34 */
int __fastcall sub_605C8C5C(struct sead_IDisposer *a1);  /* 0x005c8c5c */
bool __fastcall sub_605C8C6C(int a1, int a2);  /* 0x005c8c6c */
int __fastcall PowBlock_vf7(_DWORD *a1);  /* 0x005c9330 */
int __fastcall PowBlock_vf8(_DWORD *a1);  /* 0x005c93d4 */
int __fastcall sub_605C9460(int a1, int a2);  /* 0x005c9460 */
int __fastcall sub_605C95B8(int a1, int a2);  /* 0x005c95b8 */
int __fastcall sub_605C9710(int a1, int a2, int a3);  /* 0x005c9710 */
int __fastcall PowBlock_vf66(int a1);  /* 0x005c9878 */
int __fastcall PowBlock_vf69(int a1, int a2);  /* 0x005c988c */
int __fastcall sub_605C999C(_DWORD *a1);  /* 0x005c999c */
int __fastcall PowBlock_vf70(int a1);  /* 0x005c99f8 */
int __fastcall PowBlock_vf73(int a1, int a2, int a3);  /* 0x005c9a0c */
int __fastcall PowBlock_vf74(int a1);  /* 0x005c9a70 */
int __fastcall PowBlock_vf78(unsigned __int8 *a1);  /* 0x005c9a8c */
int __fastcall sub_605C9ACC(int a1, int a2);  /* 0x005c9acc */
int __fastcall sub_605C9C40(int a1, int a2);  /* 0x005c9c40 */
int __fastcall PowBlock_vf61(int a1, int a2);  /* 0x005c9c80 */
int __fastcall sub_605C9CA0(int a1);  /* 0x005c9ca0 */
int __fastcall sub_605C9CD0(int a1);  /* 0x005c9cd0 */
int __fastcall sub_605C9D04(int a1);  /* 0x005c9d04 */
int __fastcall sub_605C9DD8(_DWORD *a1);  /* 0x005c9dd8 */
int __fastcall sub_605C9E44(int a1);  /* 0x005c9e44 */
int __fastcall sub_605C9FEC(int a1);  /* 0x005c9fec */
int __fastcall PowBlock_vf58(_DWORD *a1);  /* 0x005ca070 */
int __fastcall PowBlock_vf59(int a1);  /* 0x005ca0ec */
unsigned int __fastcall PowBlock_vf60(int a1);  /* 0x005ca0f0 */
bool __fastcall sub_605CA180(int a1, int a2);  /* 0x005ca180 */
int __fastcall sub_605CA2F8(Actor *a1);  /* 0x005ca2f8 */
int __fastcall PowBlock_vf10(int a1);  /* 0x005ca32c */
int __fastcall PowBlock_vf22(int a1);  /* 0x005ca338 */
int __fastcall sub_605CA358(int a1);  /* 0x005ca358 */
int __fastcall sub_605CA48C(int a1, int a2);  /* 0x005ca48c */
int __fastcall sub_605CA4FC(int a1, int a2);  /* 0x005ca4fc */
int __fastcall sub_605CA700(int a1);  /* 0x005ca700 */
int __fastcall block_taru_ref(int *a1);  /* 0x005ca760 */
int __fastcall sub_605CA9B8(int result, int a2);  /* 0x005ca9b8 */
int __fastcall sub_605CAB0C(int a1, int a2);  /* 0x005cab0c */
int __fastcall sub_605CAB54(int a1, int a2, int a3);  /* 0x005cab54 */
int __fastcall sub_605CABBC(int a1);  /* 0x005cabbc */
int __fastcall sub_605CABC8(int a1, int a2, int a3, int a4);  /* 0x005cabc8 */
int __fastcall sub_605CABF4(int a1, int a2);  /* 0x005cabf4 */
int __fastcall sub_605CAD30(int a1, int a2, int a3);  /* 0x005cad30 */
int __fastcall sub_605CB1B4(int a1);  /* 0x005cb1b4 */
int __fastcall sub_605CB29C(int result);  /* 0x005cb29c */
int __fastcall sub_605CB2F4(int a1, int a2);  /* 0x005cb2f4 */
int __fastcall sub_605CB3D4(int a1, int a2, __int16 a3);  /* 0x005cb3d4 */
int __fastcall sub_605CB554(int a1);  /* 0x005cb554 */
unsigned int __fastcall sub_605CB790(int a1);  /* 0x005cb790 */
unsigned int __fastcall sub_605CB8D0(_DWORD *a1);  /* 0x005cb8d0 */
int __fastcall SE_OBJ_TARU_ref(int a1);  /* 0x005cb910 */
void __fastcall sub_605CBAA4(int a1);  /* 0x005cbaa4 */
int __fastcall sub_605CBB04(int a1);  /* 0x005cbb04 */
int __fastcall sub_605CBB60(int a1);  /* 0x005cbb60 */
bool __fastcall sub_605CBB64(int a1, int a2);  /* 0x005cbb64 */
void __fastcall sub_605CBD50(int a1);  /* 0x005cbd50 */
int __fastcall sub_605CBDB0(int a1);  /* 0x005cbdb0 */
int __fastcall sub_605CBE18(int a1);  /* 0x005cbe18 */
int __fastcall sub_605CC294(int a1);  /* 0x005cc294 */
int __fastcall sub_605CC390(int a1);  /* 0x005cc390 */
int __fastcall PowBlock_vf9(_BYTE *a1, unsigned int a2);  /* 0x005cc3dc */
int __fastcall PowBlock_vf15(int a1);  /* 0x005cc478 */
int __fastcall sub_605CC4B0(int result, int a2, int a3);  /* 0x005cc4b0 */
int __fastcall sub_605CC4D8(int a1);  /* 0x005cc4d8 */
int __fastcall sub_605CC4E0(int a1, int a2);  /* 0x005cc4e0 */
__int64 __fastcall sub_605CC5A0(__int64 result);  /* 0x005cc5a0 */
int __fastcall sub_605CC61C(int a1, int a2, int a3, int a4);  /* 0x005cc61c */
int __fastcall sub_605CC6E4(_DWORD *a1, int a2, __int16 a3);  /* 0x005cc6e4 */
int __fastcall sub_605CC72C(int a1, int a2);  /* 0x005cc72c */
int __fastcall sub_605CC78C(int a1, float *a2);  /* 0x005cc78c */
int __fastcall sub_605CC878(int a1);  /* 0x005cc878 */
int __fastcall PowBlock_vf32(int result);  /* 0x005cc8c4 */
int __fastcall PowBlock_vf40(int a1);  /* 0x005cc8ec */
int __fastcall sub_605CC8F8(int result);  /* 0x005cc8f8 */
int __fastcall sub_605CC924(int result);  /* 0x005cc924 */
int __fastcall sub_605CC95C(int a1);  /* 0x005cc95c */
unsigned int __fastcall sub_605CCA10(int a1);  /* 0x005cca10 */
int __fastcall sub_605CCAB0(int result);  /* 0x005ccab0 */
int __fastcall sub_605CCAD4(int a1);  /* 0x005ccad4 */
unsigned int __fastcall sub_605CCB3C(int a1);  /* 0x005ccb3c */
bool __fastcall sub_605CCB7C(int a1, int a2);  /* 0x005ccb7c */
int __fastcall sub_605CCC80(Actor *a1);  /* 0x005ccc80 */
int __fastcall sub_605CCCB8(int a1);  /* 0x005cccb8 */
int __fastcall sub_605CCEC8(int a1);  /* 0x005ccec8 */
int __fastcall sub_605CCF80(int a1);  /* 0x005ccf80 */
int __fastcall sub_605CCFC4(int a1, int a2);  /* 0x005ccfc4 */
bool __fastcall sub_605CD084(int a1, int a2);  /* 0x005cd084 */
int __fastcall sub_605CD270(Actor *a1);  /* 0x005cd270 */
int __fastcall sub_605CD294(int a1, int a2);  /* 0x005cd294 */
int __fastcall sub_605CD2CC(int a1, _DWORD *a2);  /* 0x005cd2cc */
int __fastcall sub_605CD310(int a1, int a2);  /* 0x005cd310 */
int __fastcall sub_605CD31C(int result, _DWORD *a2);  /* 0x005cd31c */
int __fastcall sub_605CD32C(int a1, int a2);  /* 0x005cd32c */
int __fastcall sub_605CD354(int a1);  /* 0x005cd354 */
int __fastcall sub_605CD35C(int a1);  /* 0x005cd35c */
int __fastcall sub_605CD404(int result);  /* 0x005cd404 */
int __fastcall sub_605CD420(int a1);  /* 0x005cd420 */
int __fastcall sub_605CD500(int result);  /* 0x005cd500 */
int __fastcall sub_605CD558(int a1);  /* 0x005cd558 */
int __fastcall sub_605CD6C8(int result);  /* 0x005cd6c8 */
int __fastcall sub_605CD6E8(int result);  /* 0x005cd6e8 */
int __fastcall sub_605CD7B8(int result);  /* 0x005cd7b8 */
int __fastcall sub_605CD7C4(int result);  /* 0x005cd7c4 */
int __fastcall sub_605CD7DC(int result);  /* 0x005cd7dc */
int __fastcall sub_605CD82C(int result);  /* 0x005cd82c */
int __fastcall sub_605CD838(int a1);  /* 0x005cd838 */
int __fastcall sub_605CD92C(int result);  /* 0x005cd92c */
int __fastcall sub_605CDAD4(int a1, _QWORD *a2);  /* 0x005cdad4 */
int __fastcall sub_605CDB0C(int a1);  /* 0x005cdb0c */
int __fastcall sub_605CDB34(int a1);  /* 0x005cdb34 */
int __fastcall sub_605CDB68(int a1);  /* 0x005cdb68 */
int __fastcall sub_605CDC78(_BYTE *a1, char a2);  /* 0x005cdc78 */
int __fastcall sub_605CDFD4(int a1);  /* 0x005cdfd4 */
int __fastcall sub_605CDFF0(int a1);  /* 0x005cdff0 */
int __fastcall sub_605CE0CC(int a1);  /* 0x005ce0cc */
int __fastcall sub_605CE0D4(int a1);  /* 0x005ce0d4 */
bool __fastcall sub_605CE118(int a1, int a2);  /* 0x005ce118 */
void __fastcall sub_605CE290(Actor *a1);  /* 0x005ce290 */
int __fastcall sub_605CE2C0(Actor *a1);  /* 0x005ce2c0 */
int __fastcall sub_605CE2F4(int a1, int a2);  /* 0x005ce2f4 */
int __fastcall Actor_mid_pendulum_build(int a1);  /* 0x005ce40c */
int __fastcall sub_605CE45C(_DWORD *a1);  /* 0x005ce45c */
int __fastcall sub_605CE4C0(int a1);  /* 0x005ce4c0 */
bool __fastcall sub_605CE508(int a1, int a2);  /* 0x005ce508 */
int __fastcall sub_605CE6F0(Actor *a1);  /* 0x005ce6f0 */
int __fastcall sub_605CE780(int result, _DWORD *a2, int a3, int a4, char a5, int a6, int a7, char a8, int a9, int a10);  /* 0x005ce780 */
int __fastcall sub_605CE840(int result, _DWORD *a2, _QWORD *a3, int a4);  /* 0x005ce840 */
int __fastcall sub_605CE9B4(int a1, int a2);  /* 0x005ce9b4 */
int __fastcall sub_605CEA9C(int a1);  /* 0x005cea9c */
int __fastcall sub_605CEB6C(int a1);  /* 0x005ceb6c */
int __fastcall sub_605CEC10(_DWORD *a1);  /* 0x005cec10 */
int __fastcall sub_605CEC9C(int a1);  /* 0x005cec9c */
int __fastcall sub_605CECA4(int a1);  /* 0x005ceca4 */
bool __fastcall sub_605CECEC(int a1, int a2);  /* 0x005cecec */
int __fastcall sub_605CEE64(Actor *a1);  /* 0x005cee64 */
int __fastcall TileGod_onCreate(int a1);  /* 0x005cef60 */
int __fastcall TileGod_onExecute(int a1);  /* 0x005cf660 */
int __fastcall sub_605CF690(int a1);  /* 0x005cf690 */
bool __fastcall TileGod_checkRTTI(int a1, int a2);  /* 0x005cf804 */
int __fastcall TileGod_dtorFree(Actor *a1);  /* 0x005cf908 */
int __fastcall sub_605CFB28(_BYTE *a1);  /* 0x005cfb28 */
int __fastcall sub_605CFC44(_DWORD *a1);  /* 0x005cfc44 */
int __fastcall sub_605CFC80(int a1);  /* 0x005cfc80 */
int __fastcall sub_605CFC8C(_BYTE *a1);  /* 0x005cfc8c */
int __fastcall sub_605CFDB8(int a1);  /* 0x005cfdb8 */
int __fastcall sub_605CFDE4(float *a1);  /* 0x005cfde4 */
int __fastcall sub_605CFF00(int a1);  /* 0x005cff00 */
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
int __fastcall sub_605D0FD4(int a1);  /* 0x005d0fd4 */
int __fastcall sub_605D111C(int a1);  /* 0x005d111c */
int __fastcall sub_605D128C(int a1);  /* 0x005d128c */
int __fastcall middle_flag_ref(int a1);  /* 0x005d1344 */
int __fastcall sub_605D1AB8(int a1);  /* 0x005d1ab8 */
int __fastcall sub_605D1D10(int a1, int a2, int a3, int a4);  /* 0x005d1d10 */
int __fastcall sub_605D1F54(int a1, unsigned int a2, int a3);  /* 0x005d1f54 */
int __fastcall sub_605D21DC(int a1, int a2);  /* 0x005d21dc */
bool __fastcall sub_605D2440(int a1, int a2);  /* 0x005d2440 */
void __fastcall sub_605D2544(_DWORD *a1);  /* 0x005d2544 */
int __fastcall sub_605D25D0(_DWORD *a1);  /* 0x005d25d0 */
int __fastcall Actor_chibiyoshi_2_build(int a1);  /* 0x005d27d8 */
int __fastcall sub_605D2A1C(int a1);  /* 0x005d2a1c */
int __fastcall sub_605D2D70(int result);  /* 0x005d2d70 */
int __fastcall SE_PLY_CH_YOSHI_BBL_CATCH_ref(int a1);  /* 0x005d2d80 */
int __fastcall sub_605D2E34(int a1);  /* 0x005d2e34 */
int __fastcall sub_605D335C(_DWORD *a1);  /* 0x005d335c */
int __fastcall sub_605D3530(_DWORD *a1);  /* 0x005d3530 */
int __fastcall sub_605D3590(int result);  /* 0x005d3590 */
int __fastcall sub_605D35AC(int a1);  /* 0x005d35ac */
int __fastcall sub_605D39CC(int a1);  /* 0x005d39cc */
int __fastcall sub_605D3BA0(_DWORD *a1);  /* 0x005d3ba0 */
int __fastcall sub_605D3D9C(int a1);  /* 0x005d3d9c */
int __fastcall sub_605D3F5C(int a1);  /* 0x005d3f5c */
float __fastcall sub_605D40F0(int a1);  /* 0x005d40f0 */
int __fastcall sub_605D4624(_DWORD *a1, unsigned int a2);  /* 0x005d4624 */
int __fastcall sub_605D463C(int a1);  /* 0x005d463c */
int __fastcall sub_605D476C(int a1);  /* 0x005d476c */
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
int __fastcall sub_605D586C(int a1, int a2, int a3);  /* 0x005d586c */
bool __fastcall sub_605D599C(int a1, int a2);  /* 0x005d599c */
int __fastcall sub_605D5B88(Actor *a1);  /* 0x005d5b88 */
int __fastcall sub_605D5BB0(int a1, int a2);  /* 0x005d5bb0 */
int __fastcall sub_605D5BE8(int a1, _DWORD *a2);  /* 0x005d5be8 */
int __fastcall sub_605D5C2C(int a1, int a2);  /* 0x005d5c2c */
int __fastcall sub_605D5C38(int result, _DWORD *a2);  /* 0x005d5c38 */
int __fastcall sub_605D5C48(int a1, int a2);  /* 0x005d5c48 */
int __fastcall sub_605D5C70(int a1);  /* 0x005d5c70 */
int __fastcall sub_605D5C78(int a1);  /* 0x005d5c78 */
int __fastcall sub_605D5CF8(int a1);  /* 0x005d5cf8 */
int __fastcall sub_605D64EC(int a1);  /* 0x005d64ec */
int __fastcall sub_605D66B0(_DWORD *a1);  /* 0x005d66b0 */
int __fastcall sub_605D6734(_DWORD *a1);  /* 0x005d6734 */
unsigned int __fastcall sub_605D67D8(_DWORD *a1);  /* 0x005d67d8 */
int __fastcall sub_605D684C(int a1);  /* 0x005d684c */
int __fastcall SE_PLY_CH_YOSHI_HIT_ENEMY_ref_2(int a1);  /* 0x005d69e4 */
int __fastcall sub_605D6D8C(int a1);  /* 0x005d6d8c */
unsigned int __fastcall sub_605D6E70(int a1);  /* 0x005d6e70 */
int __fastcall BabyYoshiBaseProbably_ctor(int a1, int a2, int a3);  /* 0x005d7040 */
int __fastcall sub_605D7738(int a1);  /* 0x005d7738 */
int __fastcall sub_605D792C(int a1, int a2);  /* 0x005d792c */
int __fastcall sub_605D793C(int result);  /* 0x005d793c */
int __fastcall sub_605D7954(int result);  /* 0x005d7954 */
int __fastcall sub_605D796C(int result);  /* 0x005d796c */
int __fastcall sub_605D79D0(_DWORD *a1, int a2, int a3);  /* 0x005d79d0 */
void __fastcall sub_605D79F8(_DWORD *a1, int a2);  /* 0x005d79f8 */
int __fastcall sub_605D7A3C(int a1);  /* 0x005d7a3c */
int __fastcall sub_605D7B24(_DWORD *a1);  /* 0x005d7b24 */
int __fastcall sub_605D7F64(int result);  /* 0x005d7f64 */
int __fastcall sub_605D8110(int a1, unsigned int a2);  /* 0x005d8110 */
bool __fastcall sub_605D8184(Actor *a1);  /* 0x005d8184 */
int __fastcall sub_605D81B8(int a1);  /* 0x005d81b8 */
int __fastcall sub_605D8214(_DWORD *a1);  /* 0x005d8214 */
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
int __fastcall sub_605D8B34(_BYTE *a1, int a2, int a3);  /* 0x005d8b34 */
int __fastcall sub_605D8B9C(_DWORD *a1);  /* 0x005d8b9c */
int __fastcall sub_605D8BC8(_DWORD *a1);  /* 0x005d8bc8 */
int __fastcall sub_605D8EEC(int a1);  /* 0x005d8eec */
int __fastcall sub_605D9390(int a1);  /* 0x005d9390 */
int __fastcall sub_605D93AC(int a1);  /* 0x005d93ac */
int __fastcall sub_605D9454(int a1, int a2);  /* 0x005d9454 */
int __fastcall sub_605D9504(_DWORD *a1, int a2);  /* 0x005d9504 */
int __fastcall sub_605D9550(_DWORD *a1, int a2);  /* 0x005d9550 */
int __fastcall sub_605D959C(_DWORD *a1);  /* 0x005d959c */
int __fastcall sub_605D9648(int a1);  /* 0x005d9648 */
int __fastcall sub_605D97B0(int a1);  /* 0x005d97b0 */
int __fastcall sub_605D97C0(int a1);  /* 0x005d97c0 */
int __fastcall sub_605D9850(_DWORD *a1);  /* 0x005d9850 */
int __fastcall sub_605D98C0(int a1);  /* 0x005d98c0 */
int __fastcall sub_605D9914(int result);  /* 0x005d9914 */
int __fastcall sub_605D9940(int a1, int a2, int a3);  /* 0x005d9940 */
int __fastcall SE_PLY_CH_YOSHI_ref(int a1);  /* 0x005d9a84 */
int __fastcall sub_605D9BC8(int a1);  /* 0x005d9bc8 */
int __fastcall sub_605D9ED4(_DWORD *a1);  /* 0x005d9ed4 */
int __fastcall sub_605D9F14(int a1);  /* 0x005d9f14 */
int __fastcall sub_605D9FAC(int a1, int a2);  /* 0x005d9fac */
int __fastcall sub_605DA0A8(_DWORD *a1, int *a2, _DWORD *a3, int a4);  /* 0x005da0a8 */
bool __fastcall sub_605DA138(int a1, int a2);  /* 0x005da138 */
int __fastcall sub_605DA1B4(_DWORD *a1);  /* 0x005da1b4 */
int __fastcall sub_605DA280(int a1);  /* 0x005da280 */
int __fastcall sub_605DA2B8(int a1, int a2);  /* 0x005da2b8 */
int __fastcall sub_605DA2F0(int a1, _DWORD *a2);  /* 0x005da2f0 */
int __fastcall sub_605DA334(int a1, int a2);  /* 0x005da334 */
int __fastcall sub_605DA340(int result, _DWORD *a2);  /* 0x005da340 */
int __fastcall sub_605DA350(int a1, int a2);  /* 0x005da350 */
int __fastcall sub_605DA378(int a1);  /* 0x005da378 */
int __fastcall sub_605DA380(int a1);  /* 0x005da380 */
int __fastcall sub_605DA750(int a1);  /* 0x005da750 */
bool __fastcall sub_605DA7CC(int a1, int a2);  /* 0x005da7cc */
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
int __fastcall sub_605DBC60(int a1, _DWORD *a2);  /* 0x005dbc60 */
bool __fastcall sub_605DBCCC(int a1, int a2);  /* 0x005dbccc */
bool __fastcall sub_605DBD18(int a1, int a2);  /* 0x005dbd18 */
bool __fastcall sub_605DBD64(int a1);  /* 0x005dbd64 */
int __fastcall sub_605DBD7C(int a1);  /* 0x005dbd7c */
int __fastcall sub_605DBDAC(int a1);  /* 0x005dbdac */
int __fastcall sub_605DBDDC(int a1);  /* 0x005dbddc */
int __fastcall sub_605DBE0C(int a1, _BYTE *a2);  /* 0x005dbe0c */
bool __fastcall sub_605DBF54(int a1);  /* 0x005dbf54 */
bool __fastcall sub_605DBF94(int a1);  /* 0x005dbf94 */
int __fastcall sub_605DBFD4(int a1, int a2);  /* 0x005dbfd4 */
unsigned int __fastcall sub_605DC030(int a1, int (__fastcall ***a2)(_DWORD, int));  /* 0x005dc030 */
unsigned int __fastcall sub_605DC0F8(int a1);  /* 0x005dc0f8 */
int __fastcall sub_605DC144(int a1);  /* 0x005dc144 */
int __fastcall sub_605DC344(int a1);  /* 0x005dc344 */
int __fastcall sub_605DC44C(int a1, int a2);  /* 0x005dc44c */
unsigned int __fastcall sub_605DC9A0(int a1);  /* 0x005dc9a0 */
int __fastcall sub_605DCB0C(int a1);  /* 0x005dcb0c */
int __fastcall sub_605DCBAC(int a1);  /* 0x005dcbac */
int __fastcall sub_605DCC74(int a1);  /* 0x005dcc74 */
int __fastcall sub_605DCC78(int a1, int a2, int a3, int a4);  /* 0x005dcc78 */
int __fastcall sub_605DCF1C(int a1, int a2);  /* 0x005dcf1c */
int __fastcall sub_605DCF28(int a1, int a2);  /* 0x005dcf28 */
int __fastcall sub_605DCF34(int a1, int a2);  /* 0x005dcf34 */
int __fastcall sub_605DCF40(int result, float *a2);  /* 0x005dcf40 */
int __fastcall sub_605DD398(int a1);  /* 0x005dd398 */
int __fastcall sub_605DD400(int a1);  /* 0x005dd400 */
void __fastcall sub_605DD51C(int a1);  /* 0x005dd51c */
int __fastcall sub_605DD5FC(int a1);  /* 0x005dd5fc */
bool __fastcall sub_605DD6E8(int a1);  /* 0x005dd6e8 */
int __fastcall sub_605DD6FC(int a1);  /* 0x005dd6fc */
int __fastcall sub_605DD9D8(int result, int a2, int a3);  /* 0x005dd9d8 */
int __fastcall sub_605DD9F0(int a1, int a2);  /* 0x005dd9f0 */
int __fastcall sub_605DDA14(int a1, int a2);  /* 0x005dda14 */
int __fastcall sub_605DDB40(int a1, int a2, int a3);  /* 0x005ddb40 */
int __fastcall sub_605DDC70(int a1, int a2, int a3);  /* 0x005ddc70 */
int __fastcall sub_605DDDF4(unsigned __int8 *a1, int a2, int a3);  /* 0x005dddf4 */
int __fastcall sub_605DDF24(int result, int a2, _DWORD *a3);  /* 0x005ddf24 */
unsigned int __fastcall sub_605DE130(unsigned int a1, int a2, int a3);  /* 0x005de130 */
unsigned int __fastcall sub_605DE1C4(unsigned int result, int a2, int a3);  /* 0x005de1c4 */
int __fastcall sub_605DE548(unsigned __int8 *a1, int a2, int a3);  /* 0x005de548 */
int __fastcall sub_605DE6F0(int a1, int a2);  /* 0x005de6f0 */
int __fastcall sub_605DE734(int a1, unsigned int a2);  /* 0x005de734 */
int __fastcall sub_605DE7D4(int a1, float *a2);  /* 0x005de7d4 */
bool __fastcall sub_605DE910(int a1);  /* 0x005de910 */
int __fastcall sub_605DE940(int a1);  /* 0x005de940 */
int __fastcall sub_605DE950(int result, int a2, char a3);  /* 0x005de950 */
int __fastcall sub_605DEA30(_DWORD *a1, int a2, int a3, int a4);  /* 0x005dea30 */
int __fastcall sub_605DEC04(int a1, int a2);  /* 0x005dec04 */
int __fastcall sub_605DECE4(_DWORD *a1);  /* 0x005dece4 */
int __fastcall sub_605DEEE0(int a1, int a2);  /* 0x005deee0 */
int __fastcall sub_605DEF10(int a1);  /* 0x005def10 */
int __fastcall sub_605DEF3C(Actor *a1);  /* 0x005def3c */
int __fastcall sub_605DEFB4(int a1, int a2);  /* 0x005defb4 */
int __fastcall sub_605DF080(_DWORD *a1);  /* 0x005df080 */
int __fastcall sub_605DF0DC(int a1);  /* 0x005df0dc */
int __fastcall sub_605DF254(int a1);  /* 0x005df254 */
int __fastcall sub_605DF280(int *a1);  /* 0x005df280 */
int __fastcall sub_605DF358(int a1);  /* 0x005df358 */
int __fastcall sub_605DF500(_DWORD *a1);  /* 0x005df500 */
int __fastcall sub_605DF584(float *a1);  /* 0x005df584 */
int __fastcall sub_605DFABC(int *a1);  /* 0x005dfabc */
int __fastcall sub_605DFC14(int a1);  /* 0x005dfc14 */
int __fastcall sub_605DFDC4(int a1);  /* 0x005dfdc4 */
int __fastcall sub_605DFF5C(_DWORD *a1);  /* 0x005dff5c */
int __fastcall sub_605E00D0(int *a1);  /* 0x005e00d0 */
int __fastcall sub_605E0140(int result);  /* 0x005e0140 */
int __fastcall SE_PLY_CH_YOSHI_FUMU_ref(int a1);  /* 0x005e0220 */
int __fastcall sub_605E0368(_DWORD *a1);  /* 0x005e0368 */
int __fastcall sub_605E03F8(int *a1);  /* 0x005e03f8 */
int __fastcall sub_605E048C(int a1);  /* 0x005e048c */
int __fastcall sub_605E04F4(_DWORD *a1);  /* 0x005e04f4 */
int __fastcall sub_605E05C8(_DWORD *a1);  /* 0x005e05c8 */
int __fastcall sub_605E0654(_DWORD *a1);  /* 0x005e0654 */
int __fastcall sub_605E0758(_DWORD *a1);  /* 0x005e0758 */
int __fastcall sub_605E07C0(int a1);  /* 0x005e07c0 */
int __fastcall sub_605E084C(int a1);  /* 0x005e084c */
int __fastcall sub_605E0870(int a1, int a2, int a3);  /* 0x005e0870 */
bool __fastcall sub_605E0B38(int a1);  /* 0x005e0b38 */
int __fastcall sub_605E0D80(int a1);  /* 0x005e0d80 */
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
int __fastcall sub_605E1FEC(int a1);  /* 0x005e1fec */
int __fastcall sub_605E1FF4(int result, int a2);  /* 0x005e1ff4 */
int __fastcall sub_605E213C(int a1);  /* 0x005e213c */
int __fastcall sub_605E2144(_DWORD *a1, int a2);  /* 0x005e2144 */
int __fastcall sub_605E21D8(int a1);  /* 0x005e21d8 */
int __fastcall sub_605E22A0(int a1, _DWORD *a2);  /* 0x005e22a0 */
unsigned int __fastcall sub_605E28D0(int a1);  /* 0x005e28d0 */
int __fastcall sub_605E2910(int *a1);  /* 0x005e2910 */
unsigned int __fastcall SE_VOC_CH_YS_EAT_ref(int a1);  /* 0x005e2c10 */
int __fastcall SE_VOC_CH_YS_GOKUN_ref(int a1);  /* 0x005e2cd8 */
unsigned int __fastcall sub_605E31C4(int *a1);  /* 0x005e31c4 */
int __fastcall sub_605E321C(int *a1);  /* 0x005e321c */
int __fastcall sub_605E328C(int a1, int a2);  /* 0x005e328c */
unsigned int __fastcall sub_605E3388(_DWORD *a1);  /* 0x005e3388 */
int __fastcall sub_605E33D0(int a1, int a2, int a3);  /* 0x005e33d0 */
bool __fastcall sub_605E34C4(int a1);  /* 0x005e34c4 */
bool __fastcall sub_605E3528(int a1, int a2, int a3);  /* 0x005e3528 */
int __fastcall sub_605E35F8(int a1, int a2);  /* 0x005e35f8 */
int __fastcall sub_605E3980(int a1);  /* 0x005e3980 */
int __fastcall sub_605E398C(int a1, int a2);  /* 0x005e398c */
int __fastcall sub_605E3998(int result);  /* 0x005e3998 */
int __fastcall sub_605E3BA4(int result);  /* 0x005e3ba4 */
bool __fastcall sub_605E3BBC(int a1);  /* 0x005e3bbc */
int __fastcall sub_605E3BD4(_DWORD *a1);  /* 0x005e3bd4 */
int __fastcall sub_605E3D3C(int result, float *a2, float *a3, int a4);  /* 0x005e3d3c */
int __fastcall sub_605E3EFC(int result);  /* 0x005e3efc */
int __fastcall sub_605E40C0(int a1, int a2);  /* 0x005e40c0 */
int __fastcall sub_605E41BC(int result);  /* 0x005e41bc */
int __fastcall sub_605E41E0(int result, int a2);  /* 0x005e41e0 */
int __fastcall sub_605E456C(int a1, int a2);  /* 0x005e456c */
int __fastcall sub_605E463C(int a1, int a2);  /* 0x005e463c */
int __fastcall sub_605E470C(int a1);  /* 0x005e470c */
int __fastcall sub_605E47DC(int a1, int a2);  /* 0x005e47dc */
int __fastcall sub_605E48AC(int a1);  /* 0x005e48ac */
int __fastcall sub_605E4A14(int a1);  /* 0x005e4a14 */
int __fastcall sub_605E4C38(int result, int a2);  /* 0x005e4c38 */
int __fastcall sub_605E4D0C(int result, int a2);  /* 0x005e4d0c */
int __fastcall sub_605E4DE0(int a1);  /* 0x005e4de0 */
int __fastcall sub_605E4E30(int a1, int a2);  /* 0x005e4e30 */
int __fastcall sub_605E4EBC(int a1, _DWORD *a2);  /* 0x005e4ebc */
int __fastcall sub_605E4ED8(int a1);  /* 0x005e4ed8 */
bool __fastcall sub_605E5044(int a1);  /* 0x005e5044 */
int __fastcall sub_605E516C(float *a1);  /* 0x005e516c */
int __fastcall sub_605E52E4(int result, int a2, unsigned int a3);  /* 0x005e52e4 */
int __fastcall sub_605E540C(_DWORD *a1, unsigned int a2, int a3);  /* 0x005e540c */
int __fastcall sub_605E560C(_DWORD *a1, int a2);  /* 0x005e560c */
int __fastcall sub_605E5638(_DWORD *a1, int a2);  /* 0x005e5638 */
int __fastcall sub_605E5644(int a1);  /* 0x005e5644 */
int __fastcall sub_605E56D4(int a1);  /* 0x005e56d4 */
int __fastcall sub_605E596C(int a1);  /* 0x005e596c */
int __fastcall sub_605E59FC(_DWORD *a1);  /* 0x005e59fc */
int __fastcall sub_605E5B18(int a1);  /* 0x005e5b18 */
int __fastcall sub_605E5D1C(int a1);  /* 0x005e5d1c */
int __fastcall sub_605E5F68(int a1);  /* 0x005e5f68 */
int __fastcall sub_605E6178(int a1);  /* 0x005e6178 */
int __fastcall sub_605E6350(int result, int a2, int a3);  /* 0x005e6350 */
int __fastcall sub_605E66FC(_DWORD *a1);  /* 0x005e66fc */
int __fastcall sub_605E6738(int a1);  /* 0x005e6738 */
int __fastcall sub_605E6784(int a1, int a2);  /* 0x005e6784 */
int __fastcall sub_605E67A0(int a1, int a2);  /* 0x005e67a0 */
int __fastcall sub_605E67B8(int a1, int a2);  /* 0x005e67b8 */
int __fastcall sub_605E6874(int a1);  /* 0x005e6874 */
int __fastcall SE_PLY_CH_YOSHI_EGG_BREAK_ref(int a1);  /* 0x005e68a4 */
int __fastcall sub_605E6B50(int a1);  /* 0x005e6b50 */
int __fastcall sub_605E6DA8(_DWORD *a1);  /* 0x005e6da8 */
int __fastcall sub_605E6E10(int result);  /* 0x005e6e10 */
int __fastcall sub_605E6E40(int a1);  /* 0x005e6e40 */
int __fastcall sub_605E7054(int a1);  /* 0x005e7054 */
int __fastcall sub_605E7208(int a1);  /* 0x005e7208 */
int __fastcall sub_605E7388(int a1);  /* 0x005e7388 */
unsigned int __fastcall sub_605E73FC(int a1);  /* 0x005e73fc */
bool __fastcall sub_605E756C(int a1, int a2);  /* 0x005e756c */
void __fastcall sub_605E7670(int a1);  /* 0x005e7670 */
int __fastcall sub_605E76C0(int a1);  /* 0x005e76c0 */
int __fastcall sub_605E7928(struct sead_IDisposer *a1);  /* 0x005e7928 */
int __fastcall sub_605E7988(int a1);  /* 0x005e7988 */
int __fastcall sub_605E7A00(int result);  /* 0x005e7a00 */
int __fastcall sub_605E7A18(int result);  /* 0x005e7a18 */
int __fastcall sub_605E7A28(int result);  /* 0x005e7a28 */
int __fastcall sub_605E7B4C(int result);  /* 0x005e7b4c */
int __fastcall sub_605E7BF8(int result);  /* 0x005e7bf8 */
int __fastcall sub_605E7C08(_DWORD *a1);  /* 0x005e7c08 */
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
bool __fastcall sub_605E95C4(int a1);  /* 0x005e95c4 */
int __fastcall sub_605E95E4(_DWORD *a1);  /* 0x005e95e4 */
int __fastcall sub_605E97C0(int a1, int a2);  /* 0x005e97c0 */
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
int __fastcall sub_605E9E08(int a1, int a2);  /* 0x005e9e08 */
int __fastcall sub_605E9E40(int a1, _DWORD *a2);  /* 0x005e9e40 */
int __fastcall sub_605E9E84(int a1, int a2);  /* 0x005e9e84 */
int __fastcall sub_605E9E90(int result, _DWORD *a2);  /* 0x005e9e90 */
int __fastcall sub_605E9EA0(int a1, int a2);  /* 0x005e9ea0 */
int __fastcall sub_605E9EC8(int a1);  /* 0x005e9ec8 */
int __fastcall sub_605E9ED0(int a1);  /* 0x005e9ed0 */
int __fastcall sub_605EA200(int a1, int a2, int a3);  /* 0x005ea200 */
int __fastcall sub_605EA31C(int *a1);  /* 0x005ea31c */
int __fastcall sub_605EA46C(int result, int a2);  /* 0x005ea46c */
int __fastcall sub_605EA6F0(int a1);  /* 0x005ea6f0 */
int __fastcall sub_605EA7EC(int a1);  /* 0x005ea7ec */
int __fastcall sub_605EA968(int a1);  /* 0x005ea968 */
int __fastcall sub_605EAAC0(int a1, _DWORD *a2, int a3);  /* 0x005eaac0 */
int __fastcall sub_605EAB0C(int a1, int a2, int a3);  /* 0x005eab0c */
int __fastcall sub_605EAB2C(int a1, int a2, int a3, int a4, int a5);  /* 0x005eab2c */
int __fastcall sub_605EAB48(int result, int a2);  /* 0x005eab48 */
int __fastcall sub_605EAB74(int a1, int a2);  /* 0x005eab74 */
int __fastcall sub_605EAC24(int result, int a2);  /* 0x005eac24 */
int __fastcall sub_605EAC4C(int a1, int a2);  /* 0x005eac4c */
int __fastcall sub_605EAD00(int *a1, int a2);  /* 0x005ead00 */
int __fastcall sub_605EAE4C(int *a1, int a2);  /* 0x005eae4c */
int __fastcall sub_605EAE74(int *a1);  /* 0x005eae74 */
int __fastcall sub_605EAF44(int a1);  /* 0x005eaf44 */
int __fastcall sub_605EAFD8(int result);  /* 0x005eafd8 */
int __fastcall sub_605EB024(int a1);  /* 0x005eb024 */
int __fastcall sub_605EB074(int *a1);  /* 0x005eb074 */
unsigned int __fastcall sub_605EB12C(int a1);  /* 0x005eb12c */
int __fastcall sub_605EB15C(int a1, _DWORD *a2);  /* 0x005eb15c */
int __fastcall sub_605EB3B0(int a1, int a2);  /* 0x005eb3b0 */
int __fastcall sub_605EB5D0(int result);  /* 0x005eb5d0 */
int __fastcall sub_605EB5E4(int result);  /* 0x005eb5e4 */
int __fastcall sub_605EB5F8(int a1);  /* 0x005eb5f8 */
unsigned int __fastcall sub_605EB6D4(int a1);  /* 0x005eb6d4 */
int __fastcall sub_605EB7B0(int a1);  /* 0x005eb7b0 */
int __fastcall sub_605EB89C(_DWORD *a1);  /* 0x005eb89c */
int __fastcall sub_605EB988(int a1);  /* 0x005eb988 */
int __fastcall sub_605EB9CC(int a1);  /* 0x005eb9cc */
int __fastcall sub_605EBB58(int a1);  /* 0x005ebb58 */
int __fastcall sub_605EBBA8(int a1);  /* 0x005ebba8 */
int __fastcall sub_605EBC2C(int a1);  /* 0x005ebc2c */
bool __fastcall sub_605EBCAC(int a1, int a2);  /* 0x005ebcac */
void __fastcall sub_605EBE24(int a1);  /* 0x005ebe24 */
int __fastcall sub_605EBE74(int a1);  /* 0x005ebe74 */
int __fastcall sub_605EBECC(int a1, int a2);  /* 0x005ebecc */
int __fastcall sub_605EBFE8(int a1);  /* 0x005ebfe8 */
int __fastcall sub_605EC168(int a1, int a2, int a3, int a4);  /* 0x005ec168 */
int __fastcall sub_605EC190(int a1);  /* 0x005ec190 */
int __fastcall sub_605EC240(int a1);  /* 0x005ec240 */
int __fastcall sub_605EC37C(int a1);  /* 0x005ec37c */
unsigned int __fastcall sub_605EC52C(int a1, int a2);  /* 0x005ec52c */
int __fastcall sub_605EC644(int a1);  /* 0x005ec644 */
int __fastcall sub_605EC698(int result);  /* 0x005ec698 */
unsigned int __fastcall sub_605EC6B8(int a1);  /* 0x005ec6b8 */
int __fastcall sub_605EC8E0(int result);  /* 0x005ec8e0 */
int __fastcall sub_605EC8F0(int a1);  /* 0x005ec8f0 */
int __fastcall sub_605EC98C(int result);  /* 0x005ec98c */
int __fastcall sub_605EC9A0(int a1);  /* 0x005ec9a0 */
float __fastcall sub_605ECA2C(float *a1);  /* 0x005eca2c */
bool __fastcall sub_605ECAA4(int a1, int a2);  /* 0x005ecaa4 */
int __fastcall sub_605ECBA8(int a1);  /* 0x005ecba8 */
int __fastcall sub_605ECC04(int a1);  /* 0x005ecc04 */
int __fastcall sub_605ECE18(int a1);  /* 0x005ece18 */
int __fastcall sub_605ECF7C(_DWORD *a1, _DWORD *a2, int a3, char a4);  /* 0x005ecf7c */
int __fastcall sub_605ED120(int a1);  /* 0x005ed120 */
int __fastcall sub_605ED2AC(int result);  /* 0x005ed2ac */
int __fastcall sub_605ED320(int a1);  /* 0x005ed320 */
int __fastcall sub_605ED358(int result);  /* 0x005ed358 */
int __fastcall sub_605ED490(int result, int a2);  /* 0x005ed490 */
int __fastcall sub_605ED5C0(int result);  /* 0x005ed5c0 */
int __fastcall sub_605ED718(int a1);  /* 0x005ed718 */
bool __fastcall sub_605ED858(int a1, int a2);  /* 0x005ed858 */
int __fastcall sub_605ED95C(Actor *a1);  /* 0x005ed95c */
int __fastcall sub_605EDA64(_DWORD *a1);  /* 0x005eda64 */
int __fastcall sub_605EDABC(int a1);  /* 0x005edabc */
int __fastcall sub_605EDB78(_DWORD *a1);  /* 0x005edb78 */
int __fastcall sub_605EDC14(int a1);  /* 0x005edc14 */
int __fastcall sub_605EDC2C(int a1);  /* 0x005edc2c */
bool __fastcall sub_605EDC38(int a1, int a2);  /* 0x005edc38 */
void __fastcall sub_605EDD3C(Actor *a1);  /* 0x005edd3c */
int __fastcall sub_605EDD6C(Actor *a1);  /* 0x005edd6c */
int __fastcall sub_605EDDA0(int a1);  /* 0x005edda0 */
int __fastcall Actor_chibiyoshi_cloud_build(int a1);  /* 0x005ede34 */
int __fastcall sub_605EDEC0(int a1);  /* 0x005edec0 */
int __fastcall sub_605EDF20(int a1);  /* 0x005edf20 */
int __fastcall sub_605EDF30(int a1);  /* 0x005edf30 */
int __fastcall sub_605EDFC4(int a1);  /* 0x005edfc4 */
int __fastcall sub_605EE004(int a1);  /* 0x005ee004 */
int __fastcall sub_605EE190(int a1);  /* 0x005ee190 */
bool __fastcall sub_605EE1A8(int a1, int a2);  /* 0x005ee1a8 */
int __fastcall sub_605EE2AC(_DWORD *a1);  /* 0x005ee2ac */
int __fastcall sub_605EE368(int a1);  /* 0x005ee368 */
int __fastcall sub_605EE618(int result);  /* 0x005ee618 */
int __fastcall sub_605EE720(int result);  /* 0x005ee720 */
int __fastcall sub_605EE770(int result);  /* 0x005ee770 */
int __fastcall sub_605EE834(int result);  /* 0x005ee834 */
int __fastcall sub_605EE88C(int a1);  /* 0x005ee88c */
unsigned int __fastcall sub_605EEB84(int a1, int a2);  /* 0x005eeb84 */
int __fastcall sub_605EEDDC(int a1);  /* 0x005eeddc */
bool __fastcall sub_605EEE0C(int a1, int a2);  /* 0x005eee0c */
void __fastcall sub_605EEF84(int a1);  /* 0x005eef84 */
int __fastcall sub_605EEFD4(int a1);  /* 0x005eefd4 */
int __fastcall sub_605EF028(int result);  /* 0x005ef028 */
int __fastcall sub_605EF038(int result);  /* 0x005ef038 */
int __fastcall sub_605EF050(int a1);  /* 0x005ef050 */
int __fastcall sub_605EF05C(int a1);  /* 0x005ef05c */
int __fastcall sub_605EF068(int a1, int a2);  /* 0x005ef068 */
int __fastcall sub_605EF47C(int result);  /* 0x005ef47c */
int __fastcall sub_605EF584(int result);  /* 0x005ef584 */
int __fastcall sub_605EF5D4(int result);  /* 0x005ef5d4 */
int __fastcall sub_605EF6A0(int result);  /* 0x005ef6a0 */
int __fastcall sub_605EF6FC(int a1);  /* 0x005ef6fc */
unsigned int __fastcall sub_605EF9F4(unsigned int result, int a2, int a3);  /* 0x005ef9f4 */
int __fastcall sub_605EFB58(int a1);  /* 0x005efb58 */
bool __fastcall sub_605EFB88(int a1, int a2);  /* 0x005efb88 */
int __fastcall sub_605EFD00(int a1);  /* 0x005efd00 */
int __fastcall sub_605F00D0(int result);  /* 0x005f00d0 */
int __fastcall sub_605F01D8(int result);  /* 0x005f01d8 */
int __fastcall sub_605F0228(int result);  /* 0x005f0228 */
int __fastcall sub_605F02EC(int result);  /* 0x005f02ec */
int __fastcall sub_605F0340(int a1);  /* 0x005f0340 */
unsigned int __fastcall sub_605F0638(unsigned int result, int a2, int a3);  /* 0x005f0638 */
int __fastcall sub_605F079C(int a1);  /* 0x005f079c */
bool __fastcall sub_605F07CC(int a1, int a2);  /* 0x005f07cc */
int __fastcall sub_605F0944(int a1);  /* 0x005f0944 */
int __fastcall sub_605F0D14(int result);  /* 0x005f0d14 */
int __fastcall sub_605F0E1C(int result);  /* 0x005f0e1c */
int __fastcall sub_605F0E6C(int result);  /* 0x005f0e6c */
int __fastcall sub_605F0F38(int result);  /* 0x005f0f38 */
int __fastcall sub_605F0F88(int a1);  /* 0x005f0f88 */
unsigned int __fastcall sub_605F1284(int a1, int a2);  /* 0x005f1284 */
int __fastcall sub_605F14DC(int a1);  /* 0x005f14dc */
bool __fastcall sub_605F150C(int a1, int a2);  /* 0x005f150c */
int __fastcall sub_605F1684(int a1);  /* 0x005f1684 */
int __fastcall sub_605F1938(int a1);  /* 0x005f1938 */
unsigned int __fastcall sub_605F1AA8(int a1);  /* 0x005f1aa8 */
int __fastcall sub_605F1D44(_DWORD *a1);  /* 0x005f1d44 */
bool __fastcall sub_605F1DB0(int a1, int a2);  /* 0x005f1db0 */
void __fastcall sub_605F1EB4(Actor *a1);  /* 0x005f1eb4 */
int __fastcall sub_605F1EE4(Actor *a1);  /* 0x005f1ee4 */
int __fastcall sub_605F2044(int a1);  /* 0x005f2044 */
int __fastcall sub_605F20A0(_BYTE *a1);  /* 0x005f20a0 */
int __fastcall sub_605F2114(int a1);  /* 0x005f2114 */
int __fastcall sub_605F2244(int a1);  /* 0x005f2244 */
int __fastcall sub_605F2390(int a1, int a2, int a3, int a4);  /* 0x005f2390 */
int __fastcall sub_605F23A0(int a1);  /* 0x005f23a0 */
bool __fastcall sub_605F23CC(int a1, int a2);  /* 0x005f23cc */
int __fastcall sub_605F2844(int a1);  /* 0x005f2844 */
int __fastcall sub_605F28FC(int a1);  /* 0x005f28fc */
int __fastcall sub_605F3184(int a1);  /* 0x005f3184 */
int __fastcall sub_605F32FC(int a1);  /* 0x005f32fc */
int __fastcall sub_605F3378(int a1);  /* 0x005f3378 */
int __fastcall sub_605F33F8(Actor *a1);  /* 0x005f33f8 */
int __fastcall StarCoin_onCreate(float *a1);  /* 0x005f35cc */
int __fastcall StarCoin_onExecute(int a1);  /* 0x005f3714 */
bool __fastcall StarCoin_vf0(int a1, int a2);  /* 0x005f38d0 */
int __fastcall StarCoin_dtorFree(Actor *a1);  /* 0x005f3a48 */
int __fastcall StarCoinBase_ctor(int a1);  /* 0x005f3b14 */
int __fastcall sub_605F3B94(int a1);  /* 0x005f3b94 */
int __fastcall sub_605F3BF4(int result);  /* 0x005f3bf4 */
int __fastcall sub_605F3C48(int a1);  /* 0x005f3c48 */
int __fastcall sub_605F3C9C(int a1);  /* 0x005f3c9c */
int __fastcall sub_605F3DC8(int a1);  /* 0x005f3dc8 */
int __fastcall sub_605F3EE8(int result);  /* 0x005f3ee8 */
int __fastcall sub_605F3EF8(_DWORD *a1);  /* 0x005f3ef8 */
int __fastcall sub_605F4018(int a1);  /* 0x005f4018 */
int __fastcall sub_605F40D0(int result);  /* 0x005f40d0 */
int __fastcall sub_605F40E0(int a1);  /* 0x005f40e0 */
int __fastcall sub_605F423C(int a1);  /* 0x005f423c */
int __fastcall sub_605F43EC(int a1, int a2);  /* 0x005f43ec */
int __fastcall sub_605F46C0(int a1);  /* 0x005f46c0 */
int __fastcall StarCoinBase_onDraw(int a1, int a2, int a3, int a4);  /* 0x005f485c */
int __fastcall StarCoinBase_updateModel(_DWORD *a1);  /* 0x005f488c */
int __fastcall StarCoinBase_vf32(unsigned __int8 *a1);  /* 0x005f4a14 */
int __fastcall sub_605F4A94(unsigned __int8 *a1);  /* 0x005f4a94 */
int __fastcall sub_605F4B14(int a1);  /* 0x005f4b14 */
int __fastcall sub_605F4FD4(int a1, int a2);  /* 0x005f4fd4 */
int __fastcall StarCoinBase_vf40(int result, int a2);  /* 0x005f52fc */
float __fastcall sub_605F53A8(int a1);  /* 0x005f53a8 */
bool __fastcall StarCoinBase_checkRTTI(int a1, int a2);  /* 0x005f5510 */
int __fastcall StarCoinBase_dtorFree(Actor *a1);  /* 0x005f5614 */
int __fastcall sub_605F58B4(_DWORD *a1);  /* 0x005f58b4 */
int __fastcall sub_605F59EC(_DWORD *a1);  /* 0x005f59ec */
bool __fastcall sub_605F5AB0(int a1, int a2);  /* 0x005f5ab0 */
void __fastcall sub_605F5C28(Actor *a1);  /* 0x005f5c28 */
int __fastcall sub_605F5C58(Actor *a1);  /* 0x005f5c58 */
int __fastcall sub_605F5DCC(int a1);  /* 0x005f5dcc */
int __fastcall sub_605F6150(_DWORD *a1);  /* 0x005f6150 */
int __fastcall sub_605F649C(int a1);  /* 0x005f649c */
bool __fastcall sub_605F64E8(int a1, int a2);  /* 0x005f64e8 */
void __fastcall sub_605F6660(Actor *a1);  /* 0x005f6660 */
int __fastcall sub_605F6690(Actor *a1);  /* 0x005f6690 */
int __fastcall sub_605F68B4(int a1);  /* 0x005f68b4 */
int __fastcall sub_605F68E0(_DWORD *a1);  /* 0x005f68e0 */
int __fastcall sub_605F6A6C(_DWORD *a1);  /* 0x005f6a6c */
bool __fastcall sub_605F6BA8(int a1, int a2);  /* 0x005f6ba8 */
void __fastcall sub_605F6D20(Actor *a1);  /* 0x005f6d20 */
int __fastcall sub_605F6D50(Actor *a1);  /* 0x005f6d50 */
int __fastcall sub_605F6EB4(_DWORD *a1);  /* 0x005f6eb4 */
int __fastcall sub_605F6F2C(int a1);  /* 0x005f6f2c */
bool __fastcall sub_605F70E0(int a1, int a2);  /* 0x005f70e0 */
int __fastcall sub_605F7258(Actor *a1);  /* 0x005f7258 */
int __fastcall sub_605F7478(int a1);  /* 0x005f7478 */
int __fastcall sub_605F75F8(int a1);  /* 0x005f75f8 */
int __fastcall sub_605F7618(int a1, int a2, int a3, int a4);  /* 0x005f7618 */
int __fastcall sub_605F76BC(Actor *a1);  /* 0x005f76bc */
int __fastcall sub_605F7AC0(int a1);  /* 0x005f7ac0 */
int __fastcall sub_605F7C40(int a1);  /* 0x005f7c40 */
int __fastcall sub_605F7C60(int a1, int a2, int a3, int a4);  /* 0x005f7c60 */
int __fastcall sub_605F7D04(Actor *a1);  /* 0x005f7d04 */
int __fastcall sub_605F7FA4(int a1);  /* 0x005f7fa4 */
int __fastcall sub_605F7FF4(_DWORD *a1);  /* 0x005f7ff4 */
int __fastcall sub_605F814C(_DWORD *a1);  /* 0x005f814c */
int __fastcall sub_605F82F4(int a1);  /* 0x005f82f4 */
int __fastcall sub_605F8328(_DWORD *a1);  /* 0x005f8328 */
int __fastcall sub_605F84B0(int a1, int a2, int a3, int a4);  /* 0x005f84b0 */
int __fastcall sub_605F84F8(int a1, int a2);  /* 0x005f84f8 */
int __fastcall sub_605F8764(int a1);  /* 0x005f8764 */
int __fastcall sub_605F8790(int result);  /* 0x005f8790 */
int __fastcall sub_605F87A0(int *a1);  /* 0x005f87a0 */
int __fastcall SE_OBJ_DDOOR_OPEN_ref(int a1);  /* 0x005f888c */
int __fastcall sub_605F8970(_DWORD *a1);  /* 0x005f8970 */
int __fastcall sub_605F8998(int *a1);  /* 0x005f8998 */
int __fastcall sub_605F8A28(_DWORD *a1);  /* 0x005f8a28 */
unsigned int __fastcall sub_605F8A4C(int *a1);  /* 0x005f8a4c */
int __fastcall sub_605F8ABC(int result);  /* 0x005f8abc */
bool __fastcall sub_605F8AC8(int a1, int a2);  /* 0x005f8ac8 */
int __fastcall sub_605F8C40(Actor *a1);  /* 0x005f8c40 */
bool __fastcall sub_605F8C94(int a1);  /* 0x005f8c94 */
int __fastcall sub_605F8DD8(int a1);  /* 0x005f8dd8 */
int __fastcall obj_door_shiroboss_ref(int a1);  /* 0x005f8fd0 */
void __fastcall sub_605F9100(int a1);  /* 0x005f9100 */
int __fastcall obj_door_shiroboss_ref_2(int a1);  /* 0x005f9190 */
int __fastcall obj_door_shiroboss_close_ref(int a1);  /* 0x005f9228 */
int __fastcall sub_605F92C0(int a1);  /* 0x005f92c0 */
int __fastcall sub_605F9368(Actor *a1);  /* 0x005f9368 */
bool __fastcall sub_605F93BC(int a1);  /* 0x005f93bc */
int __fastcall SE_OBJ_BDOOR_MOVE_ref(float *a1);  /* 0x005f9464 */
int __fastcall sub_605F959C(int a1);  /* 0x005f959c */
bool __fastcall sub_605F95B0(int a1);  /* 0x005f95b0 */
int __fastcall sub_605F963C(Actor *a1);  /* 0x005f963c */
int __fastcall sub_605F9840(float *a1);  /* 0x005f9840 */
int __fastcall boss_koopa_door_ref(int a1);  /* 0x005f99c8 */
int __fastcall sub_605F9BD8(_DWORD *a1);  /* 0x005f9bd8 */
void __fastcall sub_605F9DE0(int a1);  /* 0x005f9de0 */
int __fastcall boss_koopa_door_open_ref(int a1);  /* 0x005f9e6c */
int __fastcall boss_koopa_door_close_ref(int a1);  /* 0x005f9f04 */
int __fastcall sub_605F9F9C(int a1);  /* 0x005f9f9c */
void __fastcall sub_605FA0D0(_BYTE *a1);  /* 0x005fa0d0 */
int __fastcall sub_605FA15C(_BYTE *a1);  /* 0x005fa15c */
bool __fastcall sub_605FA1EC(int a1);  /* 0x005fa1ec */
int __fastcall SE_OBJ_KDOOR_MOVE_ref(float *a1);  /* 0x005fa238 */
int __fastcall sub_605FA39C(int a1);  /* 0x005fa39c */
int __fastcall sub_605FA3B0(_BYTE *a1);  /* 0x005fa3b0 */
int __fastcall obj_doorA_ref(int a1);  /* 0x005fa538 */
void __fastcall sub_605FA668(int a1);  /* 0x005fa668 */
int __fastcall sub_605FA6F4(int a1);  /* 0x005fa6f4 */
int __fastcall sub_605FA744(int a1);  /* 0x005fa744 */
int __fastcall sub_605FA798(int a1);  /* 0x005fa798 */
int __fastcall sub_605FA7D0(int result);  /* 0x005fa7d0 */
int __fastcall sub_605FA7F8(Actor *a1);  /* 0x005fa7f8 */
bool __fastcall sub_605FA84C(int a1);  /* 0x005fa84c */
int __fastcall obj_obake_door_ref(int a1);  /* 0x005faa3c */
void __fastcall sub_605FAB6C(int a1);  /* 0x005fab6c */
void __fastcall sub_605FABDC(int a1);  /* 0x005fabdc */
int __fastcall sub_605FAD50(int a1);  /* 0x005fad50 */
int __fastcall sub_605FADA0(int a1);  /* 0x005fada0 */
int __fastcall sub_605FADF4(int a1);  /* 0x005fadf4 */
int __fastcall sub_605FAE2C(int result);  /* 0x005fae2c */
bool __fastcall sub_605FAE54(int a1);  /* 0x005fae54 */
int __fastcall sub_605FAEEC(Actor *a1);  /* 0x005faeec */
bool __fastcall sub_605FAF40(int a1);  /* 0x005faf40 */
int __fastcall obj_door_torideboss_ref(int a1);  /* 0x005fb16c */
void __fastcall sub_605FB29C(int a1);  /* 0x005fb29c */
int __fastcall obj_door_torideboss_ref_2(int a1);  /* 0x005fb32c */
int __fastcall obj_door_torideboss_close_ref(int a1);  /* 0x005fb3c4 */
int __fastcall sub_605FB45C(int a1);  /* 0x005fb45c */
int __fastcall sub_605FB504(Actor *a1);  /* 0x005fb504 */
bool __fastcall sub_605FB558(int a1);  /* 0x005fb558 */
int __fastcall SE_OBJ_BDOOR_MOVE_ref_2(float *a1);  /* 0x005fb600 */
int __fastcall sub_605FB738(int a1);  /* 0x005fb738 */
bool __fastcall sub_605FB74C(int a1);  /* 0x005fb74c */
int __fastcall sub_605FB7D8(Actor *a1);  /* 0x005fb7d8 */
void __fastcall sub_605FB978(Actor *a1);  /* 0x005fb978 */
int __fastcall sub_605FB9A8(Actor *a1);  /* 0x005fb9a8 */
int __fastcall sub_605FB9DC(int a1);  /* 0x005fb9dc */
int __fastcall sub_605FBC6C(int a1);  /* 0x005fbc6c */
bool __fastcall sub_605FBC94(int a1, int a2);  /* 0x005fbc94 */
int __fastcall sub_605FBE7C(int a1);  /* 0x005fbe7c */
bool __fastcall sub_605FBF74(int a1, int a2);  /* 0x005fbf74 */
int __fastcall sub_605FC078(Actor *a1);  /* 0x005fc078 */
unsigned int __fastcall sub_605FC130(int a1);  /* 0x005fc130 */
int __fastcall sub_605FC4D0(int a1);  /* 0x005fc4d0 */
int __fastcall sub_605FC774(int a1);  /* 0x005fc774 */
int __fastcall sub_605FC79C(_BYTE *a1);  /* 0x005fc79c */
int __fastcall sub_605FC990(int a1);  /* 0x005fc990 */
unsigned int __fastcall sub_605FCF04(int a1);  /* 0x005fcf04 */
int __fastcall sub_605FD008(int result);  /* 0x005fd008 */
unsigned int __fastcall sub_605FD28C(int a1);  /* 0x005fd28c */
int __fastcall sub_605FD520(int a1);  /* 0x005fd520 */
bool __fastcall sub_605FD614(int a1);  /* 0x005fd614 */
int __fastcall sub_605FD65C(int a1, int a2, int a3, int a4);  /* 0x005fd65c */
unsigned int __fastcall sub_605FD6C8(int a1);  /* 0x005fd6c8 */
unsigned int __fastcall sub_605FD7AC(int a1);  /* 0x005fd7ac */
int __fastcall sub_605FD890(int a1);  /* 0x005fd890 */
int __fastcall sub_605FD9A4(int a1);  /* 0x005fd9a4 */
bool __fastcall sub_605FDBA4(int a1, int a2);  /* 0x005fdba4 */
void __fastcall sub_605FDCA8(int a1);  /* 0x005fdca8 */
int __fastcall sub_605FDCF8(int a1);  /* 0x005fdcf8 */
int __fastcall sub_605FE030(int result);  /* 0x005fe030 */
int __fastcall sub_605FE0F0(int a1);  /* 0x005fe0f0 */
int __fastcall sub_605FE168(int a1);  /* 0x005fe168 */
int __fastcall sub_605FE180(int a1);  /* 0x005fe180 */
bool __fastcall sub_605FE2A0(int a1, int a2);  /* 0x005fe2a0 */
int __fastcall sub_605FE3A4(Actor *a1);  /* 0x005fe3a4 */
int __fastcall sub_605FE7F0(int a1);  /* 0x005fe7f0 */
int __fastcall sub_605FEA9C(int a1);  /* 0x005fea9c */
int __fastcall sub_605FEAC4(_BYTE *a1);  /* 0x005feac4 */
int __fastcall sub_605FEBAC(int a1);  /* 0x005febac */
int __fastcall sub_605FECC4(int a1);  /* 0x005fecc4 */
unsigned int __fastcall sub_605FF138(int a1);  /* 0x005ff138 */
int __fastcall sub_605FF28C(int a1);  /* 0x005ff28c */
int __fastcall sub_605FF3DC(int result);  /* 0x005ff3dc */
unsigned int __fastcall sub_605FF658(int a1);  /* 0x005ff658 */
int __fastcall sub_605FF8E4(int a1);  /* 0x005ff8e4 */
bool __fastcall sub_605FF980(int a1);  /* 0x005ff980 */
int __fastcall sub_605FF9C8(int a1, int a2, int a3, int a4);  /* 0x005ff9c8 */
unsigned int __fastcall sub_605FFA34(int a1);  /* 0x005ffa34 */
unsigned int __fastcall sub_605FFB18(int a1);  /* 0x005ffb18 */
int __fastcall sub_605FFBFC(int a1);  /* 0x005ffbfc */
int __fastcall sub_605FFD60(int a1);  /* 0x005ffd60 */
bool __fastcall sub_605FFFC8(int a1, int a2);  /* 0x005fffc8 */

/* ---- states.c ---- */
void __fastcall sub_606000CC(int a1);  /* 0x006000cc */
int __fastcall sub_6060011C(int a1);  /* 0x0060011c */
int __fastcall sub_60600808(int a1);  /* 0x00600808 */
int __fastcall sub_60600A8C(int a1);  /* 0x00600a8c */
int __fastcall sub_60600E5C(int a1);  /* 0x00600e5c */
int __fastcall sub_606010D8(int a1);  /* 0x006010d8 */
int __fastcall sub_60601218(int a1, int a2, int a3, int a4);  /* 0x00601218 */
int __fastcall sub_606012B0(int a1);  /* 0x006012b0 */
int __fastcall sub_606012D0(int a1);  /* 0x006012d0 */
int __fastcall sub_60601364(int a1);  /* 0x00601364 */
bool __fastcall sub_606013F8(int a1, int a2);  /* 0x006013f8 */
void __fastcall sub_60601570(int a1);  /* 0x00601570 */
int __fastcall sub_6060166C(int a1);  /* 0x0060166c */
int __fastcall sub_60601788(int a1, int a2);  /* 0x00601788 */
int __fastcall sub_60601824(int a1);  /* 0x00601824 */
int __fastcall sub_6060193C(int a1);  /* 0x0060193c */
int __fastcall sub_60601BC8(int a1);  /* 0x00601bc8 */
int __fastcall sub_60601F6C(int a1);  /* 0x00601f6c */
int __fastcall sub_6060225C(int a1);  /* 0x0060225c */
int __fastcall sub_6060239C(int a1, int a2, int a3, int a4);  /* 0x0060239c */
int __fastcall sub_60602434(int a1);  /* 0x00602434 */
bool __fastcall sub_60602454(int a1, int a2);  /* 0x00602454 */
void __fastcall sub_606025CC(int a1);  /* 0x006025cc */
int __fastcall sub_606026C8(int a1);  /* 0x006026c8 */
int __fastcall sub_606027CC(int a1);  /* 0x006027cc */
int __fastcall sub_60602934(int a1, int a2);  /* 0x00602934 */
int __fastcall sub_60602A80(int a1);  /* 0x00602a80 */
int __fastcall sub_60602AA8(int a1, _DWORD *a2, int a3);  /* 0x00602aa8 */
int __fastcall sub_60602DF0(int a1);  /* 0x00602df0 */
bool __fastcall sub_606031C8(float *a1);  /* 0x006031c8 */
int __fastcall sub_60603290(int a1);  /* 0x00603290 */
unsigned int __fastcall sub_60603428(int a1, _DWORD *a2);  /* 0x00603428 */
int __fastcall sub_6060352C(int32x4_t *a1, float *a2, unsigned int *a3, float *a4);  /* 0x0060352c */
int __fastcall sub_60603554(int a1);  /* 0x00603554 */
int __fastcall sub_60603578(int a1, int a2);  /* 0x00603578 */
bool __fastcall sub_60603594(int a1, int a2);  /* 0x00603594 */
void __fastcall sub_60603698(int a1);  /* 0x00603698 */
int __fastcall sub_60603708(int a1);  /* 0x00603708 */
int __fastcall sub_60603780(int a1);  /* 0x00603780 */
int __fastcall sub_60603854(int a1);  /* 0x00603854 */
int __fastcall sub_6060389C(int a1);  /* 0x0060389c */
bool __fastcall sub_606038CC(int a1, int a2);  /* 0x006038cc */
int __fastcall sub_60603A44(Actor *a1);  /* 0x00603a44 */
int __fastcall sub_60603A78(int a1, int a2);  /* 0x00603a78 */
int __fastcall sub_60603C90(StageActor *a1);  /* 0x00603c90 */
int __fastcall sub_60604128(int a1);  /* 0x00604128 */
int __fastcall sub_6060426C(int a1, int a2, __int64 a3);  /* 0x0060426c */
int __fastcall sub_606044F8(int a1);  /* 0x006044f8 */
int __fastcall sub_606046B8(int a1);  /* 0x006046b8 */
bool __fastcall sub_606047AC(int a1, int a2);  /* 0x006047ac */
int __fastcall sub_60604924(Actor *a1);  /* 0x00604924 */
int __fastcall sub_60604AA8(int a1);  /* 0x00604aa8 */
int __fastcall sub_60604CD0(int a1);  /* 0x00604cd0 */
bool __fastcall sub_60604D44(int a1, int a2);  /* 0x00604d44 */
int __fastcall sub_60604EBC(Actor *a1);  /* 0x00604ebc */
int __fastcall sub_6060501C(int result);  /* 0x0060501c */
int __fastcall sub_6060503C(int a1);  /* 0x0060503c */
int __fastcall sub_60605108(int a1);  /* 0x00605108 */
bool __fastcall sub_60605178(int a1, int a2);  /* 0x00605178 */
int __fastcall sub_606052F0(Actor *a1);  /* 0x006052f0 */
bool __fastcall sub_6060556C(int a1, int a2);  /* 0x0060556c */
int __fastcall sub_606056E4(Actor *a1);  /* 0x006056e4 */
bool __fastcall sub_60605718(int a1, int a2);  /* 0x00605718 */
int __fastcall sub_60605890(Actor *a1);  /* 0x00605890 */
bool __fastcall sub_606058C4(int a1, int a2);  /* 0x006058c4 */
int __fastcall sub_60605A3C(Actor *a1);  /* 0x00605a3c */
int __fastcall sub_60605BC4(int a1);  /* 0x00605bc4 */
int __fastcall sub_60605C40(int a1);  /* 0x00605c40 */
bool __fastcall sub_60605C70(int a1, int a2);  /* 0x00605c70 */
int __fastcall sub_60605DE8(Actor *a1);  /* 0x00605de8 */
int __fastcall sub_60605F70(int a1);  /* 0x00605f70 */
int __fastcall sub_606064B8(int a1);  /* 0x006064b8 */
bool __fastcall sub_60606570(int a1, int a2);  /* 0x00606570 */
int __fastcall sub_606066E8(Actor *a1);  /* 0x006066e8 */
int __fastcall sub_606067AC(_DWORD *a1);  /* 0x006067ac */
int __fastcall sub_606067E4(int a1);  /* 0x006067e4 */
int __fastcall sub_60606978(int *a1, int *a2, int a3);  /* 0x00606978 */
int __fastcall sub_606069FC(int a1, float *a2, int a3);  /* 0x006069fc */
int __fastcall sub_60606B2C(_DWORD *a1, int a2, int a3, int a4, int a5);  /* 0x00606b2c */
int __fastcall sub_60606BB4(int result);  /* 0x00606bb4 */
int __fastcall sub_60606CB0(int result, int a2, int a3, int a4);  /* 0x00606cb0 */
int __fastcall sub_60606D64(int a1);  /* 0x00606d64 */
int __fastcall sub_60606E58(int a1);  /* 0x00606e58 */
int __fastcall sub_6060700C(int a1);  /* 0x0060700c */
int __fastcall sub_606070E0(int result);  /* 0x006070e0 */
int __fastcall sub_6060710C(int a1);  /* 0x0060710c */
int __fastcall sub_60607314(int a1);  /* 0x00607314 */
int __fastcall sub_606074DC(int a1, int a2, int a3);  /* 0x006074dc */
int __fastcall sub_606075FC(int a1);  /* 0x006075fc */
int __fastcall sub_60607978(int a1);  /* 0x00607978 */
int __fastcall sub_60607D4C(int *a1);  /* 0x00607d4c */
int __fastcall sub_60608074(int a1);  /* 0x00608074 */
int __fastcall sub_606087C0(int a1, _DWORD *a2);  /* 0x006087c0 */
int __fastcall sub_60608F74(int a1, int a2, int a3, int a4);  /* 0x00608f74 */
int __fastcall sub_60608FF8(int a1, unsigned int a2);  /* 0x00608ff8 */
int __fastcall sub_60609110(int result);  /* 0x00609110 */
bool __fastcall sub_606092B0(int a1, int a2);  /* 0x006092b0 */
void __fastcall sub_606093B4(int a1);  /* 0x006093b4 */
int __fastcall sub_60609420(int a1);  /* 0x00609420 */
int __fastcall sub_60609494(unsigned int *a1, unsigned int *a2);  /* 0x00609494 */
int __fastcall RollingHill_ctor(int a1);  /* 0x006097c8 */
int __fastcall RollingHill_onCreate(int a1);  /* 0x00609b28 */
int __fastcall RollingHill_updateModel(int a1);  /* 0x00609dc8 */
int __fastcall RollingHill_onExecute(unsigned int a1);  /* 0x00609fa4 */
unsigned int __fastcall sub_6060A088(unsigned int result);  /* 0x0060a088 */
int __fastcall sub_6060A200(_DWORD *a1);  /* 0x0060a200 */
int __fastcall RollingHill_onDraw(int a1, int a2, int a3, int a4);  /* 0x0060a354 */
int __fastcall sub_6060A388(int result, int a2);  /* 0x0060a388 */
int __fastcall sub_6060A3B4(int a1, int a2);  /* 0x0060a3b4 */
int __fastcall sub_6060A430(int a1, int a2, int a3);  /* 0x0060a430 */
bool __fastcall RollingHill_checkRTTI(int a1, int a2);  /* 0x0060a474 */
void __fastcall RollingHill_dtor(int a1);  /* 0x0060a65c */
int __fastcall RollingHill_dtorFree(int a1);  /* 0x0060a68c */
int __fastcall sub_6060A964(int a1);  /* 0x0060a964 */
int __fastcall sub_6060B144(int a1, int a2);  /* 0x0060b144 */
int __fastcall sub_6060B15C(int a1, int a2);  /* 0x0060b15c */
int __fastcall sub_6060B180(int a1, int a2);  /* 0x0060b180 */
int __fastcall sub_6060B1A4(int a1);  /* 0x0060b1a4 */
int __fastcall sub_6060B2AC(_DWORD **a1, int a2, int a3, int a4);  /* 0x0060b2ac */
int __fastcall sub_6060B2F8(int a1, __int64 *a2);  /* 0x0060b2f8 */
int __fastcall sub_6060B51C(int a1, int a2, int a3);  /* 0x0060b51c */
int __fastcall sub_6060B6A8(int a1);  /* 0x0060b6a8 */
bool __fastcall sub_6060B9A0(int a1, int a2);  /* 0x0060b9a0 */
void __fastcall sub_6060BAA4(int a1);  /* 0x0060baa4 */
int __fastcall sub_6060BB18(int a1);  /* 0x0060bb18 */
int __fastcall sub_6060BCD4(int result);  /* 0x0060bcd4 */
int __fastcall sub_6060BDE0(int a1);  /* 0x0060bde0 */
int __fastcall sub_6060BEE4(int result);  /* 0x0060bee4 */
int __fastcall sub_6060BFB4(int a1);  /* 0x0060bfb4 */
int __fastcall sub_6060C1F4(int a1);  /* 0x0060c1f4 */
int __fastcall sub_6060C4CC(_DWORD *a1);  /* 0x0060c4cc */
int __fastcall sub_6060C7C8(_DWORD *a1);  /* 0x0060c7c8 */
int __fastcall sub_6060CB44(int a1);  /* 0x0060cb44 */
int __fastcall sub_6060CCD8(int a1, int a2, int a3, int a4);  /* 0x0060ccd8 */
bool __fastcall sub_6060CEE8(int a1);  /* 0x0060cee8 */
int __fastcall sub_6060CF08(int a1);  /* 0x0060cf08 */
bool __fastcall sub_6060D00C(int a1, int a2);  /* 0x0060d00c */
void __fastcall sub_6060D110(int a1);  /* 0x0060d110 */
int __fastcall sub_6060D160(int a1);  /* 0x0060d160 */
int __fastcall sub_6060D208(_DWORD *a1);  /* 0x0060d208 */
int __fastcall sub_6060D27C(_DWORD *a1);  /* 0x0060d27c */
bool __fastcall sub_6060D34C(int a1, int a2);  /* 0x0060d34c */
int __fastcall sub_6060D534(Actor *a1);  /* 0x0060d534 */
int __fastcall sub_6060D628(int a1);  /* 0x0060d628 */
int __fastcall sub_6060D6D8(_BYTE *a1);  /* 0x0060d6d8 */
int __fastcall sub_6060D708(int a1);  /* 0x0060d708 */
int __fastcall sub_6060D720(int a1, unsigned int a2, float *a3);  /* 0x0060d720 */
bool __fastcall sub_6060D8A8(int a1, int a2);  /* 0x0060d8a8 */
int __fastcall sub_6060D9AC(Actor *a1);  /* 0x0060d9ac */
int __fastcall sub_6060DAE0(int result);  /* 0x0060dae0 */
int __fastcall SE_OBJ_ICE_S_THAW_ref(int a1);  /* 0x0060db00 */
int __fastcall sub_6060DD98(_DWORD *a1);  /* 0x0060dd98 */
int __fastcall sub_6060DEF8(int a1);  /* 0x0060def8 */
int __fastcall sub_6060E028(int a1);  /* 0x0060e028 */
int __fastcall sub_6060E120(int a1);  /* 0x0060e120 */
int __fastcall sub_6060E324(int a1, int a2);  /* 0x0060e324 */
int __fastcall sub_6060E358(int a1, int a2);  /* 0x0060e358 */
int __fastcall sub_6060E38C(int a1, int a2);  /* 0x0060e38c */
int __fastcall sub_6060E3BC(int a1);  /* 0x0060e3bc */
int __fastcall sub_6060E428(int a1, int a2, int a3, int a4);  /* 0x0060e428 */
int __fastcall sub_6060E464(int a1);  /* 0x0060e464 */
int __fastcall sub_6060E48C(int a1, unsigned __int8 *a2);  /* 0x0060e48c */
bool __fastcall sub_6060E6C4(int a1, int a2);  /* 0x0060e6c4 */
void __fastcall sub_6060E7C8(_DWORD *a1);  /* 0x0060e7c8 */
int __fastcall sub_6060E884(_DWORD *a1);  /* 0x0060e884 */
int __fastcall sub_6060EBBC(int a1);  /* 0x0060ebbc */
int __fastcall sub_6060EC0C(_DWORD *a1);  /* 0x0060ec0c */
int __fastcall sub_6060EDB0(int a1);  /* 0x0060edb0 */
int __fastcall sub_6060EF3C(int a1);  /* 0x0060ef3c */
int __fastcall sub_6060EF64(int a1, int a2, int a3, int a4);  /* 0x0060ef64 */
bool __fastcall sub_6060EF8C(int a1, int a2);  /* 0x0060ef8c */
int __fastcall sub_6060F178(Actor *a1);  /* 0x0060f178 */
int __fastcall sub_6060F1A0(int a1, int a2);  /* 0x0060f1a0 */
int __fastcall sub_6060F1D8(int a1, _DWORD *a2);  /* 0x0060f1d8 */
int __fastcall sub_6060F21C(int a1, int a2);  /* 0x0060f21c */
int __fastcall sub_6060F228(int result, _DWORD *a2);  /* 0x0060f228 */
int __fastcall sub_6060F238(int a1, int a2);  /* 0x0060f238 */
int __fastcall sub_6060F260(int a1);  /* 0x0060f260 */
int __fastcall sub_6060F268(int a1);  /* 0x0060f268 */
int __fastcall sub_6060F49C(int *a1);  /* 0x0060f49c */
int __fastcall sub_6060F82C(int a1);  /* 0x0060f82c */
int __fastcall sub_6060F858(int a1);  /* 0x0060f858 */
int __fastcall sub_6060F9E8(int a1, int a2, int a3, int a4);  /* 0x0060f9e8 */
int __fastcall sub_6060FA10(Actor *a1);  /* 0x0060fa10 */
int __fastcall sub_6060FAA0(int a1);  /* 0x0060faa0 */
int __fastcall Actor_RDash_build(int a1);  /* 0x00610008 */
int __fastcall sub_606101D4(int a1, int a2);  /* 0x006101d4 */
int __fastcall sub_6061055C(int a1, int a2, __int64 a3, int a4);  /* 0x0061055c */
int __fastcall sub_606106B0(int a1);  /* 0x006106b0 */
int __fastcall sub_6061078C(int a1);  /* 0x0061078c */
bool __fastcall sub_60610988(int a1);  /* 0x00610988 */
unsigned int __fastcall sub_60610C18(unsigned int result);  /* 0x00610c18 */
int __fastcall sub_60610D90(_DWORD *a1);  /* 0x00610d90 */
int __fastcall sub_60610EEC(int a1, int a2, int a3, int a4);  /* 0x00610eec */
int __fastcall sub_60610F18(int a1, float *a2);  /* 0x00610f18 */
int __fastcall sub_60611410(int a1, int a2);  /* 0x00611410 */
int __fastcall sub_60611488(int a1, int a2, int a3);  /* 0x00611488 */
bool __fastcall sub_606114CC(int a1, int a2);  /* 0x006114cc */
void __fastcall sub_606116B4(int a1);  /* 0x006116b4 */
int __fastcall sub_60611738(int a1);  /* 0x00611738 */
bool __fastcall sub_60611808(int a1, int a2);  /* 0x00611808 */
int __fastcall sub_606120B0(int a1);  /* 0x006120b0 */
int __fastcall SE_SYS_GOAL_FLAG_ref(int a1);  /* 0x006121f8 */
int __fastcall sub_60612338(int result);  /* 0x00612338 */
int __fastcall sub_606123A8(int a1);  /* 0x006123a8 */
int __fastcall sub_606127A0(_DWORD *a1);  /* 0x006127a0 */
int __fastcall sub_60612DB4(_DWORD *a1);  /* 0x00612db4 */
float __fastcall sub_606134E8(int a1);  /* 0x006134e8 */
int __fastcall sub_60613D50(int a1);  /* 0x00613d50 */
int __fastcall sub_60613DC4(int a1, int a2, int a3, int a4);  /* 0x00613dc4 */
int __fastcall sub_60613E58(int a1);  /* 0x00613e58 */
unsigned int __fastcall sub_60613EF0(int a1, int a2);  /* 0x00613ef0 */
unsigned int __fastcall sub_606140FC(int a1, int a2);  /* 0x006140fc */
unsigned int __fastcall sub_60614318(int a1, int a2);  /* 0x00614318 */
int __fastcall sub_60614478(int result);  /* 0x00614478 */
int __fastcall sub_60614A7C(int a1);  /* 0x00614a7c */
int __fastcall sub_60614BE8(int a1, int a2, unsigned int a3, int a4);  /* 0x00614be8 */
int __fastcall sub_60614F84(int *a1);  /* 0x00614f84 */
int __fastcall sub_6061515C(int a1, int a2, unsigned int a3);  /* 0x0061515c */
unsigned int __fastcall sub_60615A1C(int a1);  /* 0x00615a1c */
int __fastcall sub_60615B80(int a1);  /* 0x00615b80 */
bool __fastcall sub_60615CA0(int a1, int a2);  /* 0x00615ca0 */
void __fastcall sub_60615DA4(_DWORD *a1);  /* 0x00615da4 */
int __fastcall sub_60615E1C(_DWORD *a1);  /* 0x00615e1c */
unsigned int __fastcall sub_60615EE8(int a1);  /* 0x00615ee8 */
int __fastcall SE_SYS_GOAL_RING_ref(int a1);  /* 0x00615f7c */
int __fastcall sub_6061613C(int a1);  /* 0x0061613c */
int __fastcall sub_60616380(_DWORD *a1);  /* 0x00616380 */
int __fastcall sub_60616524(int a1);  /* 0x00616524 */
int __fastcall sub_60616608(int a1, int a2, int a3, int a4);  /* 0x00616608 */
bool __fastcall sub_60616630(int a1, int a2);  /* 0x00616630 */
int __fastcall sub_60616734(Actor *a1);  /* 0x00616734 */
unsigned int __fastcall sub_606169D8(int a1);  /* 0x006169d8 */
int __fastcall SE_SYS_STOCK_ITEM_USE_ref(int a1);  /* 0x00616a94 */
int __fastcall sub_60616B14(int a1);  /* 0x00616b14 */
int __fastcall sub_60616D14(_DWORD *a1);  /* 0x00616d14 */
unsigned int __fastcall sub_60616DF8(int a1, float *a2, unsigned int *a3, int a4);  /* 0x00616df8 */
int __fastcall sub_60616F0C(_DWORD *a1);  /* 0x00616f0c */
int __fastcall sub_6061723C(int a1);  /* 0x0061723c */
int __fastcall sub_606172E0(_DWORD *a1);  /* 0x006172e0 */
int __fastcall sub_60617320(int a1);  /* 0x00617320 */
bool __fastcall sub_60617508(int a1, int a2);  /* 0x00617508 */
void __fastcall RedCoin_vf2(int a1);  /* 0x00617680 */
int __fastcall sub_606176D0(int a1);  /* 0x006176d0 */
int __fastcall sub_6061773C(int a1, int a2);  /* 0x0061773c */
int __fastcall sub_606177D8(int a1);  /* 0x006177d8 */
int __fastcall obj_coin_green_ref(_DWORD *a1);  /* 0x00617a04 */
int __fastcall sub_60617C5C(int a1);  /* 0x00617c5c */
int __fastcall sub_60617E0C(int a1);  /* 0x00617e0c */
int __fastcall sub_60618014(int a1);  /* 0x00618014 */
int __fastcall sub_60618040(_BYTE *a1);  /* 0x00618040 */
bool __fastcall sub_606180CC(int a1, int a2);  /* 0x006180cc */
int __fastcall sub_60618244(int a1);  /* 0x00618244 */
int __fastcall sub_606183B4(int result);  /* 0x006183b4 */
int __fastcall sub_606183C4(int a1);  /* 0x006183c4 */
int __fastcall sub_60618488(int a1);  /* 0x00618488 */
int __fastcall sub_606184E0(int a1);  /* 0x006184e0 */
int __fastcall sub_606185A8(int a1);  /* 0x006185a8 */
int __fastcall sub_606185D4(float *a1);  /* 0x006185d4 */
bool __fastcall sub_60618678(int a1, int a2);  /* 0x00618678 */
int __fastcall sub_606187F0(_DWORD *a1);  /* 0x006187f0 */
int __fastcall sub_60618958(int a1);  /* 0x00618958 */
int __fastcall sub_6061897C(int a1);  /* 0x0061897c */
bool __fastcall sub_6061898C(int a1, int a2);  /* 0x0061898c */
int __fastcall sub_60618B04(Actor *a1);  /* 0x00618b04 */
int __fastcall sub_60618BFC(int result);  /* 0x00618bfc */
int __fastcall sub_60619030(int result);  /* 0x00619030 */
bool __fastcall sub_606190EC(int a1, int a2);  /* 0x006190ec */
int __fastcall sub_606191F0(Actor *a1);  /* 0x006191f0 */
int __fastcall sub_60619254(int a1);  /* 0x00619254 */
bool __fastcall sub_60619264(int a1, int a2);  /* 0x00619264 */
int __fastcall sub_60619450(Actor *a1);  /* 0x00619450 */
int __fastcall sub_60619484(int a1, int a2);  /* 0x00619484 */
int __fastcall sub_606195D0(int a1);  /* 0x006195d0 */
int __fastcall sub_606195DC(int a1);  /* 0x006195dc */
bool __fastcall sub_606195F4(int a1, int a2);  /* 0x006195f4 */
void __fastcall sub_6061976C(int a1);  /* 0x0061976c */
int __fastcall sub_606197BC(int a1);  /* 0x006197bc */
int __fastcall sub_60619810(int a1, int a2);  /* 0x00619810 */
int __fastcall sub_606199A4(int a1);  /* 0x006199a4 */
int __fastcall sub_60619AC8(int a1);  /* 0x00619ac8 */
int __fastcall sub_60619C9C(int a1);  /* 0x00619c9c */
int __fastcall sub_60619F28(int a1, int a2, int a3, int a4);  /* 0x00619f28 */
int __fastcall sub_60619FB4(int a1);  /* 0x00619fb4 */
int __fastcall sub_60619FD8(int a1, int a2, int a3, int a4, int a5);  /* 0x00619fd8 */
int __fastcall sub_6061A004(int a1);  /* 0x0061a004 */
int __fastcall sub_6061A07C(int result);  /* 0x0061a07c */
int __fastcall sub_6061A0F4(int a1);  /* 0x0061a0f4 */
bool __fastcall sub_6061A1D0(int a1, int a2);  /* 0x0061a1d0 */
int __fastcall sub_6061A348(Actor *a1);  /* 0x0061a348 */
int __fastcall sub_6061A37C(int a1, int a2);  /* 0x0061a37c */
int __fastcall sub_6061A418(int a1);  /* 0x0061a418 */
int __fastcall sub_6061A5F4(int a1);  /* 0x0061a5f4 */
int __fastcall sub_6061A67C(int a1);  /* 0x0061a67c */
int __fastcall sub_6061A8EC(int a1);  /* 0x0061a8ec */
bool __fastcall sub_6061AA48(int a1);  /* 0x0061aa48 */
int __fastcall sub_6061AA68(_DWORD *a1);  /* 0x0061aa68 */
int __fastcall sub_6061AC10(int a1);  /* 0x0061ac10 */
int __fastcall sub_6061AD00(int a1);  /* 0x0061ad00 */
int __fastcall sub_6061AEEC(int a1);  /* 0x0061aeec */
int __fastcall sub_6061B030(int a1, int a2, int a3, int a4);  /* 0x0061b030 */
int __fastcall sub_6061B058(int a1, int a2);  /* 0x0061b058 */
int __fastcall sub_6061B14C(int a1, int a2);  /* 0x0061b14c */
bool __fastcall sub_6061B218(int a1, int a2);  /* 0x0061b218 */
void __fastcall sub_6061B31C(int a1);  /* 0x0061b31c */
int __fastcall sub_6061B36C(int a1);  /* 0x0061b36c */
int __fastcall sub_6061B54C(int a1);  /* 0x0061b54c */
int __fastcall sub_6061B640(int a1);  /* 0x0061b640 */
int __fastcall sub_6061B834(int a1);  /* 0x0061b834 */
bool __fastcall sub_6061B8FC(int a1, int a2);  /* 0x0061b8fc */
void __fastcall sub_6061BA00(int a1);  /* 0x0061ba00 */
int __fastcall sub_6061BA50(int a1);  /* 0x0061ba50 */
int __fastcall sub_6061BC30(int a1);  /* 0x0061bc30 */
int __fastcall sub_6061BD0C(int a1, int a2);  /* 0x0061bd0c */
bool __fastcall sub_6061BD60(int a1);  /* 0x0061bd60 */
bool __fastcall sub_6061BD80(int a1);  /* 0x0061bd80 */
bool __fastcall sub_6061BDA0(int a1, int a2, int a3);  /* 0x0061bda0 */
int __fastcall sub_6061BDD8(int a1);  /* 0x0061bdd8 */
int __fastcall sub_6061C198(int a1);  /* 0x0061c198 */
int __fastcall sub_6061C1D0(int a1, int a2, int a3, int a4);  /* 0x0061c1d0 */
int __fastcall sub_6061C1FC(_DWORD *a1);  /* 0x0061c1fc */
int __fastcall sub_6061C240(int a1, int a2);  /* 0x0061c240 */
int __fastcall sub_6061C28C(int a1, int a2, int a3);  /* 0x0061c28c */
int __fastcall sub_6061C2D0(int a1);  /* 0x0061c2d0 */
int __fastcall sub_6061C4A0(int result);  /* 0x0061c4a0 */
int __fastcall sub_6061C600(int a1);  /* 0x0061c600 */
int __fastcall sub_6061C700(int a1);  /* 0x0061c700 */
int __fastcall sub_6061C7B4(int a1);  /* 0x0061c7b4 */
int __fastcall sub_6061C93C(int result);  /* 0x0061c93c */
int __fastcall sub_6061C94C(int a1);  /* 0x0061c94c */
int __fastcall sub_6061CA08(int result);  /* 0x0061ca08 */
int __fastcall sub_6061CA1C(int a1);  /* 0x0061ca1c */
int __fastcall sub_6061CB4C(int a1);  /* 0x0061cb4c */
int __fastcall sub_6061CC78(int result);  /* 0x0061cc78 */
int __fastcall sub_6061CC88(int a1);  /* 0x0061cc88 */
int __fastcall sub_6061CD78(int result);  /* 0x0061cd78 */
int __fastcall sub_6061CD94(float *a1);  /* 0x0061cd94 */
int __fastcall sub_6061CF78(unsigned int *a1);  /* 0x0061cf78 */
int __fastcall sub_6061D0B8(int a1);  /* 0x0061d0b8 */
int __fastcall sub_6061D350(int a1);  /* 0x0061d350 */
int __fastcall sub_6061D36C(int a1);  /* 0x0061d36c */
int __fastcall sub_6061D384(int a1);  /* 0x0061d384 */
int __fastcall sub_6061D584(int a1);  /* 0x0061d584 */
int __fastcall sub_6061D6B8(int a1);  /* 0x0061d6b8 */
int __fastcall sub_6061D7B0(int a1, int a2);  /* 0x0061d7b0 */
int __fastcall sub_6061D7E4(int a1, int a2);  /* 0x0061d7e4 */
int __fastcall sub_6061D818(int a1, int a2);  /* 0x0061d818 */
int __fastcall sub_6061D848(int a1);  /* 0x0061d848 */
int __fastcall sub_6061D8C0(int a1);  /* 0x0061d8c0 */
int __fastcall sub_6061DA40(int a1, int a2, int a3, int a4);  /* 0x0061da40 */
int __fastcall sub_6061DA68(int a1);  /* 0x0061da68 */
int __fastcall sub_6061DA90(int (__fastcall ***a1)(_DWORD, int), unsigned __int8 *a2);  /* 0x0061da90 */
bool __fastcall sub_6061DCC0(int a1, int a2);  /* 0x0061dcc0 */
void __fastcall sub_6061DDC4(_DWORD *a1);  /* 0x0061ddc4 */
int __fastcall sub_6061DE80(_DWORD *a1);  /* 0x0061de80 */
int __fastcall Actor_ice_2_build(int a1);  /* 0x0061e0d0 */
int __fastcall sub_6061E1D4(int a1);  /* 0x0061e1d4 */
int __fastcall sub_6061E1E0(int result);  /* 0x0061e1e0 */
int __fastcall sub_6061E1EC(int result);  /* 0x0061e1ec */
int __fastcall sub_6061E208(int a1);  /* 0x0061e208 */
int __fastcall sub_6061E338(int *a1);  /* 0x0061e338 */
int __fastcall sub_6061E5A8(int a1);  /* 0x0061e5a8 */
int __fastcall sub_6061E71C(int a1);  /* 0x0061e71c */
int __fastcall sub_6061E780(int a1);  /* 0x0061e780 */
int __fastcall sub_6061E7F4(int a1);  /* 0x0061e7f4 */
int __fastcall sub_6061E968(int a1);  /* 0x0061e968 */
int __fastcall sub_6061EA58(_DWORD *a1);  /* 0x0061ea58 */
int __fastcall sub_6061EB7C(int a1);  /* 0x0061eb7c */
bool __fastcall sub_6061EDC4(int a1, int a2);  /* 0x0061edc4 */
void __fastcall sub_6061EFAC(int a1);  /* 0x0061efac */
int __fastcall sub_6061EFDC(int a1);  /* 0x0061efdc */
int __fastcall sub_6061F028(int a1, int a2);  /* 0x0061f028 */
int __fastcall sub_6061F060(int a1, _DWORD *a2);  /* 0x0061f060 */
int __fastcall sub_6061F0A4(int a1, int a2);  /* 0x0061f0a4 */
int __fastcall sub_6061F0B0(int result, _DWORD *a2);  /* 0x0061f0b0 */
int __fastcall sub_6061F0C0(int a1, int a2);  /* 0x0061f0c0 */
int __fastcall sub_6061F0E8(int a1);  /* 0x0061f0e8 */
int __fastcall sub_6061F0F0(int a1);  /* 0x0061f0f0 */
int __fastcall sub_6061F770(int a1);  /* 0x0061f770 */
int __fastcall sub_6061F7AC(_DWORD *a1);  /* 0x0061f7ac */
int __fastcall sub_6061F81C(int result);  /* 0x0061f81c */
int __fastcall sub_6061F974(int a1);  /* 0x0061f974 */
int __fastcall sub_6061FB48(_DWORD *a1);  /* 0x0061fb48 */
int __fastcall sub_6061FD14(_DWORD *a1);  /* 0x0061fd14 */
int __fastcall sub_6061FD34(int a1);  /* 0x0061fd34 */
void __fastcall sub_6061FD80(int a1);  /* 0x0061fd80 */
int __fastcall sub_6061FDE0(int a1);  /* 0x0061fde0 */
int __fastcall sub_6061FDF4(int a1, __int16 a2);  /* 0x0061fdf4 */
int __fastcall sub_6061FF4C(_DWORD *a1);  /* 0x0061ff4c */
int __fastcall sub_606200CC(_DWORD *a1);  /* 0x006200cc */
int __fastcall sub_6062021C(_DWORD *a1);  /* 0x0062021c */
void __fastcall sub_60620854(int a1);  /* 0x00620854 */
bool __fastcall sub_60620A5C(int a1, int a2);  /* 0x00620a5c */
void __fastcall sub_60620C48(_BYTE *a1);  /* 0x00620c48 */
int __fastcall sub_60620CB8(_BYTE *a1);  /* 0x00620cb8 */
int __fastcall sub_60620D44(int a1);  /* 0x00620d44 */
int __fastcall sub_60620D58(int a1);  /* 0x00620d58 */
int __fastcall sub_60620D68(int a1, int a2);  /* 0x00620d68 */
int __fastcall sub_60620E04(int a1);  /* 0x00620e04 */
int __fastcall sub_60620E30(int a1, int a2);  /* 0x00620e30 */
int __fastcall sub_60620EE4(int a1, int a2, int a3);  /* 0x00620ee4 */
int __fastcall sub_60620F98(int a1);  /* 0x00620f98 */
int __fastcall sub_60621028(_DWORD *a1);  /* 0x00621028 */
int __fastcall sub_6062134C(_DWORD *a1);  /* 0x0062134c */
int __fastcall sub_60621388(int a1, int a2, int a3, int a4);  /* 0x00621388 */
int __fastcall sub_606213CC(int a1, int a2, int a3);  /* 0x006213cc */
int __fastcall sub_60621420(int a1, int a2, int a3);  /* 0x00621420 */
int __fastcall sub_60621478(int a1, int a2, int a3);  /* 0x00621478 */
int __fastcall sub_606214C8(int a1, int a2, int a3);  /* 0x006214c8 */
int __fastcall sub_60621520(int a1, _DWORD *a2, int a3);  /* 0x00621520 */
int __fastcall sub_60621580(int a1);  /* 0x00621580 */
int __fastcall sub_606215FC(int a1);  /* 0x006215fc */
bool __fastcall sub_6062189C(int a1, int a2);  /* 0x0062189c */
int __fastcall sub_60621A14(_BYTE *a1);  /* 0x00621a14 */
int __fastcall sub_60621A8C(int a1, int a2);  /* 0x00621a8c */
int __fastcall sub_60621AE8(int a1);  /* 0x00621ae8 */
int __fastcall sub_60621D28(int a1);  /* 0x00621d28 */
int __fastcall gura_anim_ref(int a1);  /* 0x00621f50 */
int __fastcall SE_OBJ_ICICLE_L_SIGN_ref(int a1);  /* 0x00621fd4 */
int __fastcall rakka_anim_ref(int a1);  /* 0x0062209c */
int __fastcall sub_606225C0(int a1);  /* 0x006225c0 */
int __fastcall sub_60622630(_DWORD *a1);  /* 0x00622630 */
int __fastcall sub_606226C8(int a1);  /* 0x006226c8 */
int __fastcall sub_606227D4(int a1);  /* 0x006227d4 */
int __fastcall sub_6062289C(int a1);  /* 0x0062289c */
int __fastcall sub_60622AC0(int a1);  /* 0x00622ac0 */
int __fastcall sub_60622C48(int a1);  /* 0x00622c48 */
int __fastcall sub_60622E50(int a1);  /* 0x00622e50 */
int __fastcall sub_606230B0(_DWORD *a1);  /* 0x006230b0 */
int __fastcall sub_606230E8(int a1);  /* 0x006230e8 */
int __fastcall sub_60623140(int a1);  /* 0x00623140 */
bool __fastcall sub_6062320C(int a1, int a2);  /* 0x0062320c */
void __fastcall sub_606233F8(_BYTE *a1);  /* 0x006233f8 */
int __fastcall sub_60623488(_BYTE *a1);  /* 0x00623488 */
int __fastcall sub_60623524(int result, float *a2);  /* 0x00623524 */
int __fastcall sub_606235A0(int a1);  /* 0x006235a0 */
int __fastcall sub_60623BEC(int a1);  /* 0x00623bec */
int __fastcall sub_60623BFC(int a1, int a2);  /* 0x00623bfc */
int __fastcall sub_60623CB0(int a1, __int16 a2);  /* 0x00623cb0 */
int __fastcall sub_60624754(int a1, int a2);  /* 0x00624754 */
int __fastcall sub_606250C8(int result);  /* 0x006250c8 */
int __fastcall sub_606250D4(int result);  /* 0x006250d4 */
int __fastcall sub_60625298(int a1);  /* 0x00625298 */
int __fastcall sub_606252E8(int a1);  /* 0x006252e8 */
int __fastcall sub_6062545C(int a1);  /* 0x0062545c */
int __fastcall sub_60625548(_DWORD *a1);  /* 0x00625548 */
int __fastcall sub_60625890(int result);  /* 0x00625890 */
int __fastcall sandpillar_end_ref(int a1);  /* 0x00625b90 */
int __fastcall sub_60625E1C(int a1);  /* 0x00625e1c */
int __fastcall sub_606262C4(int a1);  /* 0x006262c4 */
int __fastcall sub_606262F4(int a1, unsigned int a2);  /* 0x006262f4 */
int __fastcall sub_6062661C(int a1);  /* 0x0062661c */
float __fastcall sub_60626928(int a1);  /* 0x00626928 */
int __fastcall sub_60626B28(int *a1);  /* 0x00626b28 */
unsigned int __fastcall sub_60626F5C(int a1);  /* 0x00626f5c */
int __fastcall sub_60627210(int a1, int a2, int a3, int a4);  /* 0x00627210 */
int __fastcall sub_6062723C(_DWORD *a1);  /* 0x0062723c */
int __fastcall sub_606272BC(int a1);  /* 0x006272bc */
int __fastcall sub_60627420(int a1);  /* 0x00627420 */
void __fastcall sub_60627490(int a1);  /* 0x00627490 */
int __fastcall sub_60627530(int a1);  /* 0x00627530 */
int __fastcall sub_60627538(int a1, int a2);  /* 0x00627538 */
int __fastcall sub_60627754(int a1, int a2);  /* 0x00627754 */
int __fastcall sub_6062795C(int a1, int a2);  /* 0x0062795c */
int __fastcall sub_60627B64(float *a1, int a2);  /* 0x00627b64 */
bool __fastcall sub_60627CC4(int a1, int a2);  /* 0x00627cc4 */
void __fastcall sub_60627DC8(_DWORD *a1);  /* 0x00627dc8 */
int __fastcall sub_60627E70(_DWORD *a1);  /* 0x00627e70 */
int __fastcall sub_606281EC(int a1);  /* 0x006281ec */
int __fastcall sub_6062820C(int a1);  /* 0x0062820c */
int __fastcall sub_60628254(int a1);  /* 0x00628254 */
int __fastcall sub_606282A4(int a1);  /* 0x006282a4 */
bool __fastcall sub_606282C4(int a1);  /* 0x006282c4 */
int __fastcall sub_60628540(_DWORD *a1);  /* 0x00628540 */
int __fastcall iron_ball_hole_ref(int a1);  /* 0x00628748 */
int __fastcall sub_60628928(int a1);  /* 0x00628928 */
int __fastcall sub_60628AA4(int a1);  /* 0x00628aa4 */
int __fastcall sub_60628AD4(int a1, int a2, int a3, int a4);  /* 0x00628ad4 */
int __fastcall sub_60628AF8(int a1);  /* 0x00628af8 */
bool __fastcall sub_60628B20(int a1, int a2);  /* 0x00628b20 */
void __fastcall sub_60628D08(int a1);  /* 0x00628d08 */
int __fastcall sub_60628D38(int a1);  /* 0x00628d38 */
int __fastcall Actor_JumpStand_build(int a1);  /* 0x00628e38 */
int __fastcall sub_60628FA8(int result);  /* 0x00628fa8 */
int __fastcall sub_60628FD4(int result);  /* 0x00628fd4 */
int __fastcall sub_60629038(int result);  /* 0x00629038 */
int __fastcall sub_606291D0(int result);  /* 0x006291d0 */
int __fastcall sub_606291E0(int result);  /* 0x006291e0 */
int __fastcall sub_606292CC(int a1);  /* 0x006292cc */
int __fastcall sub_6062943C(int a1);  /* 0x0062943c */
int __fastcall sub_60629698(int a1);  /* 0x00629698 */
int __fastcall sub_60629730(int a1);  /* 0x00629730 */
int __fastcall sub_606298EC(int a1, int a2, int a3, int a4);  /* 0x006298ec */
int __fastcall sub_60629914(int a1, int a2);  /* 0x00629914 */
int __fastcall sub_606299C8(int a1, int a2, int a3);  /* 0x006299c8 */
int __fastcall sub_60629B8C(int a1, int a2);  /* 0x00629b8c */
int __fastcall sub_60629D00(__int64 a1);  /* 0x00629d00 */
int __fastcall sub_60629D84(int result);  /* 0x00629d84 */
int __fastcall sub_60629D8C(int a1);  /* 0x00629d8c */
int __fastcall sub_60629D90(_DWORD *a1);  /* 0x00629d90 */
unsigned int __fastcall sub_60629DA8(int a1);  /* 0x00629da8 */
int __fastcall sub_60629DAC(int a1);  /* 0x00629dac */
int __fastcall sub_60629F08(int result);  /* 0x00629f08 */
int __fastcall sub_60629F24(int a1);  /* 0x00629f24 */
int __fastcall sub_60629F28(int a1);  /* 0x00629f28 */
int __fastcall sub_6062A07C(int a1);  /* 0x0062a07c */
int __fastcall sub_6062A094(int a1);  /* 0x0062a094 */
int __fastcall sub_6062A098(int a1, int a2);  /* 0x0062a098 */
bool __fastcall sub_6062A15C(int a1, int a2);  /* 0x0062a15c */
void __fastcall sub_6062A2D4(Actor *a1);  /* 0x0062a2d4 */
int __fastcall sub_6062A304(Actor *a1);  /* 0x0062a304 */
int __fastcall sub_6062A344(int a1);  /* 0x0062a344 */
int __fastcall sub_6062A37C(int a1, int a2);  /* 0x0062a37c */
int __fastcall sub_6062A3B4(int a1, _DWORD *a2);  /* 0x0062a3b4 */
int __fastcall sub_6062A3F8(int a1, int a2);  /* 0x0062a3f8 */
int __fastcall sub_6062A404(int result, _DWORD *a2);  /* 0x0062a404 */
int __fastcall sub_6062A414(int a1, int a2);  /* 0x0062a414 */
int __fastcall sub_6062A43C(int a1);  /* 0x0062a43c */
int __fastcall sub_6062A444(int a1);  /* 0x0062a444 */
int __fastcall SE_BOSS_CMN_MAGIC_DISAPP_ref_2(int a1);  /* 0x0062a840 */
int __fastcall sub_6062A940(_DWORD *a1);  /* 0x0062a940 */
int __fastcall block_kameck_ref(int a1);  /* 0x0062aa68 */
int __fastcall sub_6062ACF4(int a1);  /* 0x0062acf4 */
int __fastcall sub_6062AF48(int a1);  /* 0x0062af48 */
int __fastcall sub_6062AFC0(int a1, int a2, int a3, int a4);  /* 0x0062afc0 */
int __fastcall sub_6062B004(int a1, int a2);  /* 0x0062b004 */
int __fastcall sub_6062B0E8(int a1, int a2);  /* 0x0062b0e8 */
int __fastcall sub_6062B1CC(int a1, int a2);  /* 0x0062b1cc */
int __fastcall sub_6062B2AC(int a1);  /* 0x0062b2ac */
int __fastcall sub_6062B2C8(int a1);  /* 0x0062b2c8 */
bool __fastcall sub_6062B2E0(int a1, int a2);  /* 0x0062b2e0 */
void __fastcall sub_6062B458(int a1);  /* 0x0062b458 */
int __fastcall sub_6062B4C8(int a1);  /* 0x0062b4c8 */
void __fastcall sub_6062B898(Actor *a1);  /* 0x0062b898 */
int __fastcall sub_6062B8CC(Actor *a1);  /* 0x0062b8cc */
int __fastcall kanban_yajirushi_ref(int a1);  /* 0x0062b900 */
int __fastcall sub_6062C150(int a1);  /* 0x0062c150 */
int __fastcall sub_6062C244(int a1);  /* 0x0062c244 */
int __fastcall sub_6062C3B4(int a1);  /* 0x0062c3b4 */
int __fastcall sub_6062C428(int a1, int a2, int a3, int a4);  /* 0x0062c428 */
int __fastcall sub_6062C4AC(int a1);  /* 0x0062c4ac */
int __fastcall sub_6062C6D4(int result, int a2, int a3);  /* 0x0062c6d4 */
int __fastcall sub_6062C818(int a1, float *a2);  /* 0x0062c818 */
int __fastcall sub_6062C954(int result, int a2, int a3);  /* 0x0062c954 */
int __fastcall sub_6062CAE8(int a1, _BYTE *a2);  /* 0x0062cae8 */
int __fastcall sub_6062CBC0(int a1);  /* 0x0062cbc0 */
int __fastcall sub_6062CE84(int result);  /* 0x0062ce84 */
int __fastcall sub_6062CEB0(int result);  /* 0x0062ceb0 */
bool __fastcall sub_6062CEBC(int a1, int a2);  /* 0x0062cebc */
int __fastcall sub_6062D12C(int a1);  /* 0x0062d12c */
int __fastcall sub_6062D164(int a1, int a2);  /* 0x0062d164 */
int __fastcall sub_6062D19C(int a1, _DWORD *a2);  /* 0x0062d19c */
int __fastcall sub_6062D1E0(int a1, int a2);  /* 0x0062d1e0 */
int __fastcall sub_6062D1EC(int result, _DWORD *a2);  /* 0x0062d1ec */
int __fastcall sub_6062D1FC(int a1, int a2);  /* 0x0062d1fc */
int __fastcall sub_6062D224(int a1);  /* 0x0062d224 */
int __fastcall sub_6062D22C(int a1);  /* 0x0062d22c */
int __fastcall sub_6062D608(int result);  /* 0x0062d608 */
int __fastcall sub_6062D744(int a1);  /* 0x0062d744 */
int __fastcall sub_6062DEE0(int a1);  /* 0x0062dee0 */
int __fastcall sub_6062E1B0(int a1);  /* 0x0062e1b0 */
int __fastcall sub_6062E1E8(int a1);  /* 0x0062e1e8 */
int __fastcall sub_6062E200(int a1);  /* 0x0062e200 */
int __fastcall sub_6062E40C(int a1);  /* 0x0062e40c */
int __fastcall sub_6062E508(int a1);  /* 0x0062e508 */
unsigned int __fastcall sub_6062E608(int a1, int a2);  /* 0x0062e608 */
int __fastcall sub_6062EE94(int a1, int a2);  /* 0x0062ee94 */
int __fastcall sub_6062EF48(int a1, int a2, int a3);  /* 0x0062ef48 */
bool __fastcall sub_6062F054(int a1, int a2);  /* 0x0062f054 */
void __fastcall sub_6062F158(int a1);  /* 0x0062f158 */
int __fastcall sub_6062F1D4(int a1);  /* 0x0062f1d4 */
int __fastcall sub_6062F50C(int a1);  /* 0x0062f50c */
int __fastcall sub_6062F540(int result);  /* 0x0062f540 */
int __fastcall sub_6062F5C4(int a1);  /* 0x0062f5c4 */
int __fastcall sub_6062F5E0(int result);  /* 0x0062f5e0 */
int __fastcall sub_6062F600(int result);  /* 0x0062f600 */
int __fastcall sub_6062F63C(_DWORD *a1);  /* 0x0062f63c */
int __fastcall sub_6062F6B4(_DWORD *a1);  /* 0x0062f6b4 */
int __fastcall sub_6062F7A4(int result);  /* 0x0062f7a4 */
int __fastcall sub_6062F804(_DWORD *a1);  /* 0x0062f804 */
int __fastcall sub_6062F864(_DWORD *a1);  /* 0x0062f864 */
int __fastcall sub_6062F98C(_DWORD *a1);  /* 0x0062f98c */
int __fastcall sub_6062F9E0(int a1);  /* 0x0062f9e0 */
int __fastcall sub_6062FA08(_DWORD *a1, int a2);  /* 0x0062fa08 */
bool __fastcall sub_6062FB30(int a1);  /* 0x0062fb30 */
bool __fastcall sub_6062FCAC(int a1);  /* 0x0062fcac */
bool __fastcall sub_6062FEF8(int a1, int a2);  /* 0x0062fef8 */
int __fastcall sub_6062FFFC(Actor *a1);  /* 0x0062fffc */
int __fastcall sub_6063031C(_DWORD *a1, int a2, int a3, int a4);  /* 0x0063031c */
int __fastcall sub_606303F4(_DWORD *a1);  /* 0x006303f4 */
int __fastcall sub_6063044C(int result);  /* 0x0063044c */
int __fastcall sub_60630468(int a1, int a2, int a3, int a4);  /* 0x00630468 */
int __fastcall sub_60630830(int a1, float *a2);  /* 0x00630830 */
int __fastcall sub_60630B04(int a1, int a2, int a3, int a4, int a5);  /* 0x00630b04 */
int __fastcall sub_60630B4C(int result);  /* 0x00630b4c */
int __fastcall sub_60630B60(int a1);  /* 0x00630b60 */
int __fastcall sub_60630E00(int *a1);  /* 0x00630e00 */
int __fastcall sub_60630FE0(int a1, int a2);  /* 0x00630fe0 */
int __fastcall sub_606310C8(int a1, _DWORD *a2, _DWORD *a3, int a4);  /* 0x006310c8 */
int __fastcall sub_606311BC(int a1, int a2, int a3);  /* 0x006311bc */
bool __fastcall sub_60631424(int a1, int a2);  /* 0x00631424 */
void __fastcall sub_60631610(int a1);  /* 0x00631610 */
int __fastcall sub_60631660(int a1);  /* 0x00631660 */
int __fastcall sub_606316B4(int a1, int a2);  /* 0x006316b4 */
int __fastcall sub_6063174C(int a1, int a2);  /* 0x0063174c */
int __fastcall sub_6063188C(int a1);  /* 0x0063188c */
int __fastcall sub_6063189C(int a1);  /* 0x0063189c */
int __fastcall sub_60631984(int a1);  /* 0x00631984 */
int __fastcall sub_60631A30(int a1);  /* 0x00631a30 */
int __fastcall sub_60631D54(_DWORD *a1, int a2);  /* 0x00631d54 */
int __fastcall sub_60631EB0(int a1, float *a2, float a3);  /* 0x00631eb0 */
int __fastcall sub_60631FE8(int a1);  /* 0x00631fe8 */
bool __fastcall sub_606321FC(int a1, int a2);  /* 0x006321fc */
int __fastcall sub_60632300(int a1);  /* 0x00632300 */
int __fastcall sub_606327B0(int a1);  /* 0x006327b0 */
int __fastcall sub_60632A9C(int a1);  /* 0x00632a9c */
int __fastcall sub_60632AB4(int a1, char a2);  /* 0x00632ab4 */
int __fastcall sub_60632B10(int a1, int *a2, unsigned int a3, unsigned int a4);  /* 0x00632b10 */
bool __fastcall sub_60632B40(int a1, int a2);  /* 0x00632b40 */
int __fastcall sub_60632CB8(int a1);  /* 0x00632cb8 */
int __fastcall sub_60632D90(int a1, int a2, char a3);  /* 0x00632d90 */
int __fastcall sub_60632F70(int a1, int *a2, int a3, unsigned int a4, unsigned int a5);  /* 0x00632f70 */
int __fastcall sub_606330F4(int a1, int a2, int a3, int a4, int a5);  /* 0x006330f4 */
int __fastcall sub_606331A0(int a1);  /* 0x006331a0 */
int __fastcall sub_6063328C(int a1);  /* 0x0063328c */
int __fastcall sub_606333C0(_DWORD *a1);  /* 0x006333c0 */
bool __fastcall sub_606334B0(int a1, int a2);  /* 0x006334b0 */
int __fastcall sub_606335B4(Actor *a1);  /* 0x006335b4 */
int __fastcall sub_60633850(int result);  /* 0x00633850 */
int __fastcall sub_6063386C(int a1);  /* 0x0063386c */
int __fastcall sub_606338D0(int a1);  /* 0x006338d0 */
void __fastcall SE_BOSS_JR_BLOCK_APPEAR_ref(_DWORD *a1);  /* 0x006339a4 */
int __fastcall sub_60633CC8(int a1);  /* 0x00633cc8 */
int __fastcall sub_60633DC0(int a1);  /* 0x00633dc0 */
int __fastcall sub_60633F68(int a1);  /* 0x00633f68 */
int __fastcall sub_606342DC(int *a1);  /* 0x006342dc */
int __fastcall sub_60634678(int *a1);  /* 0x00634678 */
int __fastcall sub_606346A8(int a1, int a2, int a3, int a4);  /* 0x006346a8 */
int __fastcall sub_6063473C(int a1, int a2);  /* 0x0063473c */
int __fastcall sub_60634B08(_DWORD *a1);  /* 0x00634b08 */
int __fastcall sub_60634F48(int a1);  /* 0x00634f48 */
bool __fastcall sub_606350B8(int a1, int a2);  /* 0x006350b8 */
void __fastcall sub_606351BC(int a1);  /* 0x006351bc */
int __fastcall sub_6063520C(int a1);  /* 0x0063520c */
bool __fastcall sub_60635414(int a1, int a2);  /* 0x00635414 */
int __fastcall sub_606355FC(Actor *a1);  /* 0x006355fc */
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
int __fastcall sub_60639154(_DWORD **a1, int a2, int a3, int a4, int a5);  /* 0x00639154 */
int __fastcall sub_6063916C(int a1, int a2, int a3, unsigned int a4, int a5);  /* 0x0063916c */
int __fastcall sub_60639204(int a1, int a2);  /* 0x00639204 */
int __fastcall sub_60639230(int a1);  /* 0x00639230 */
int __fastcall sub_60639254(int result);  /* 0x00639254 */
int __fastcall sub_6063926C(int result);  /* 0x0063926c */
int __fastcall sub_60639354(int result);  /* 0x00639354 */
int __fastcall sub_60639370(int result);  /* 0x00639370 */
int __fastcall sub_6063938C(int result);  /* 0x0063938c */
int __fastcall sub_606393C0(int result);  /* 0x006393c0 */
int __fastcall sub_606394C8(int a1);  /* 0x006394c8 */
int __fastcall sub_60639704(int a1);  /* 0x00639704 */
int __fastcall sub_60639A58(int a1);  /* 0x00639a58 */
int __fastcall sub_60639BC0(int a1);  /* 0x00639bc0 */
int __fastcall sub_60639D64(_DWORD *a1);  /* 0x00639d64 */
int __fastcall sub_60639EA8(int a1);  /* 0x00639ea8 */
unsigned int __fastcall sub_60639EF8(int a1);  /* 0x00639ef8 */
int __fastcall sub_6063A004(int a1);  /* 0x0063a004 */
int __fastcall sub_6063A044(int a1);  /* 0x0063a044 */
bool __fastcall sub_6063A1D0(int a1, int a2);  /* 0x0063a1d0 */
void __fastcall sub_6063A2D4(int a1);  /* 0x0063a2d4 */
int __fastcall sub_6063A3A4(int a1);  /* 0x0063a3a4 */
int __fastcall sub_6063A7FC(int a1, int a2, int a3, int a4);  /* 0x0063a7fc */
bool __fastcall sub_6063AB64(int a1, int a2);  /* 0x0063ab64 */
void __fastcall sub_6063AD50(int a1);  /* 0x0063ad50 */
int __fastcall sub_6063ADA0(int a1);  /* 0x0063ada0 */
int __fastcall sub_6063ADF8(int a1, int a2);  /* 0x0063adf8 */
int __fastcall sub_6063AE90(int a1, int a2);  /* 0x0063ae90 */
unsigned int __fastcall sub_6063B114(unsigned int a1, unsigned int a2, int a3, int a4, int a5, int a6);  /* 0x0063b114 */
int __fastcall sub_6063B3C0(int a1, int a2, int a3);  /* 0x0063b3c0 */
int __fastcall sub_6063B50C(unsigned int a1, unsigned int a2);  /* 0x0063b50c */
bool __fastcall sub_6063B9B8(float *a1, float *a2, float *a3);  /* 0x0063b9b8 */
int __fastcall sub_6063BA64(int a1);  /* 0x0063ba64 */
int __fastcall sub_6063BC20(_DWORD **a1, int a2, int a3, int a4);  /* 0x0063bc20 */
int __fastcall sub_6063BC94(int a1, _DWORD *a2);  /* 0x0063bc94 */
int __fastcall sub_6063BEA4(int a1, _DWORD *a2, int a3);  /* 0x0063bea4 */
int __fastcall sub_6063C028(int a1);  /* 0x0063c028 */
int __fastcall sub_6063C10C(int a1);  /* 0x0063c10c */
int __fastcall sub_6063C3D4(int a1, int a2);  /* 0x0063c3d4 */
int __fastcall sub_6063C560(int a1);  /* 0x0063c560 */
bool __fastcall sub_6063C608(int a1, int a2);  /* 0x0063c608 */
void __fastcall sub_6063C7F4(int a1);  /* 0x0063c7f4 */
int __fastcall sub_6063C844(int a1);  /* 0x0063c844 */
int __fastcall sub_6063C8A0(_DWORD *a1, int a2, int a3, _DWORD *a4);  /* 0x0063c8a0 */
int __fastcall sub_6063C948(float *a1, float *a2);  /* 0x0063c948 */
int __fastcall sub_6063CAC0(int a1, float *a2, unsigned int a3);  /* 0x0063cac0 */
int __fastcall sub_6063CC30(_DWORD *a1, int a2, int a3, _DWORD *a4);  /* 0x0063cc30 */
int __fastcall sub_6063CC70(float *a1, float *a2);  /* 0x0063cc70 */
int __fastcall sub_6063CC9C(unsigned int a1, float *a2, unsigned int a3);  /* 0x0063cc9c */
int __fastcall sub_6063CCD0(_DWORD **a1, int a2, int a3, int a4);  /* 0x0063ccd0 */
int __fastcall sub_6063D004(int a1, int a2);  /* 0x0063d004 */
int __fastcall SE_EMY_KK_SHIKO_ref_2(int a1);  /* 0x0063d030 */
int __fastcall sub_6063D0BC(int a1);  /* 0x0063d0bc */
int __fastcall sub_6063D144(int a1, int a2);  /* 0x0063d144 */
int __fastcall sub_6063D204(int a1);  /* 0x0063d204 */
bool __fastcall sub_6063D258(int a1);  /* 0x0063d258 */
int __fastcall sub_6063D458(int a1, int a2);  /* 0x0063d458 */
int __fastcall lift_huriko_yougan_ref_2(_DWORD *a1);  /* 0x0063d520 */
int __fastcall sub_6063D654(_DWORD *a1);  /* 0x0063d654 */
int __fastcall sub_6063D7DC(_DWORD *a1);  /* 0x0063d7dc */
int __fastcall sub_6063D7FC(int a1, int a2, int a3, int a4);  /* 0x0063d7fc */
bool __fastcall sub_6063D824(int a1, int a2);  /* 0x0063d824 */
int __fastcall sub_6063D928(Actor *a1);  /* 0x0063d928 */
int __fastcall sub_6063DE54(int a1);  /* 0x0063de54 */
int __fastcall sub_6063E234(int a1);  /* 0x0063e234 */
int __fastcall sub_6063E3C4(int result);  /* 0x0063e3c4 */
int __fastcall sub_6063E3F4(int result);  /* 0x0063e3f4 */
int __fastcall sub_6063E4C4(int result);  /* 0x0063e4c4 */
int __fastcall sub_6063E524(int a1);  /* 0x0063e524 */
int __fastcall sub_6063E660(int a1);  /* 0x0063e660 */
int __fastcall sub_6063E6D0(int result);  /* 0x0063e6d0 */
int __fastcall sub_6063E71C(_DWORD *a1);  /* 0x0063e71c */
int __fastcall sub_6063E75C(int a1);  /* 0x0063e75c */
int __fastcall sub_6063E9A8(_DWORD *a1);  /* 0x0063e9a8 */
int __fastcall sub_6063EA34(int result);  /* 0x0063ea34 */
int __fastcall sub_6063EA98(_DWORD *a1);  /* 0x0063ea98 */
int __fastcall sub_6063EDE0(int a1);  /* 0x0063ede0 */
int __fastcall sub_6063F258(_DWORD *a1);  /* 0x0063f258 */
int __fastcall sub_6063F758(int a1);  /* 0x0063f758 */
int __fastcall sub_6063F984(int a1);  /* 0x0063f984 */
int __fastcall sub_6063FBFC(int a1, int a2, int a3, int a4);  /* 0x0063fbfc */
int __fastcall sub_6063FC54(int a1);  /* 0x0063fc54 */
int __fastcall sub_6063FDE8(int a1);  /* 0x0063fde8 */
int __fastcall sub_6063FF74(int a1);  /* 0x0063ff74 */
int __fastcall sub_60640150(int a1);  /* 0x00640150 */
int __fastcall sub_606402E8(int a1);  /* 0x006402e8 */
int __fastcall sub_60640480(int a1);  /* 0x00640480 */
int __fastcall sub_606405DC(int a1);  /* 0x006405dc */
unsigned int __fastcall sub_606408A8(int a1, int a2);  /* 0x006408a8 */
int __fastcall sub_60640C3C(int a1);  /* 0x00640c3c */
bool __fastcall sub_60640F38(int a1, int a2);  /* 0x00640f38 */
void __fastcall sub_6064103C(int a1);  /* 0x0064103c */
int __fastcall sub_6064108C(int a1);  /* 0x0064108c */
int __fastcall Actor_Lift_RDash_build(int a1);  /* 0x006410e4 */
int __fastcall sub_606412EC(int a1);  /* 0x006412ec */
int __fastcall sub_60641320(int a1);  /* 0x00641320 */
int __fastcall sub_60641398(_DWORD *a1);  /* 0x00641398 */
int __fastcall sub_606413F4(int a1);  /* 0x006413f4 */
int __fastcall sub_606414C8(int a1);  /* 0x006414c8 */
int __fastcall sub_606415A0(int a1);  /* 0x006415a0 */
int __fastcall sub_6064163C(int a1);  /* 0x0064163c */
bool __fastcall sub_60641A6C(int a1);  /* 0x00641a6c */
int __fastcall sub_60641C44(int a1, int a2, int a3, int a4);  /* 0x00641c44 */
int __fastcall sub_60641C70(int a1);  /* 0x00641c70 */
int __fastcall sub_60641D6C(int a1, int a2, _BYTE *a3);  /* 0x00641d6c */
int __fastcall sub_60641F0C(int a1);  /* 0x00641f0c */
int __fastcall sub_60642004(int a1);  /* 0x00642004 */
int __fastcall sub_60642220(int a1);  /* 0x00642220 */
int __fastcall sub_606423C8(int a1);  /* 0x006423c8 */
bool __fastcall sub_60642570(int a1, int a2);  /* 0x00642570 */
void __fastcall sub_60642674(int a1);  /* 0x00642674 */
int __fastcall sub_606426F0(int a1);  /* 0x006426f0 */
int __fastcall sub_606429F0(_DWORD *a1, _DWORD *a2);  /* 0x006429f0 */
bool __fastcall sub_60642A0C(int a1);  /* 0x00642a0c */
int __fastcall sub_60642B40(Actor *a1);  /* 0x00642b40 */
int __fastcall sub_60642CBC(int a1, int a2, int a3, int a4);  /* 0x00642cbc */
int __fastcall sub_60642CE4(int a1, int a2);  /* 0x00642ce4 */
int __fastcall sub_60642EAC(int a1);  /* 0x00642eac */
bool __fastcall sub_60642F3C(int a1, int a2);  /* 0x00642f3c */
void __fastcall sub_60643128(int a1);  /* 0x00643128 */
int __fastcall sub_60643178(int a1);  /* 0x00643178 */
int __fastcall sub_606431CC(int a1, int a2);  /* 0x006431cc */
int __fastcall sub_60643264(int a1, int a2);  /* 0x00643264 */
int __fastcall sub_60643300(int result);  /* 0x00643300 */
int __fastcall sub_60643334(int a1);  /* 0x00643334 */
unsigned int __fastcall sub_60643340(int a1);  /* 0x00643340 */
int __fastcall sub_606433A0(int a1);  /* 0x006433a0 */
int __fastcall sub_606433AC(int result);  /* 0x006433ac */
int __fastcall sub_60643510(int result);  /* 0x00643510 */
int __fastcall sub_60643544(int a1);  /* 0x00643544 */
int __fastcall sub_606435CC(int a1);  /* 0x006435cc */
int __fastcall sub_60643714(_DWORD *a1);  /* 0x00643714 */
int __fastcall sub_60643784(int a1);  /* 0x00643784 */
bool __fastcall sub_60643794(int a1, int a2);  /* 0x00643794 */
int __fastcall sub_60643898(Actor *a1);  /* 0x00643898 */
int __fastcall sub_60643C5C(int a1);  /* 0x00643c5c */
int __fastcall sub_60643C74(int a1);  /* 0x00643c74 */
int __fastcall sub_60643E70(int a1, int a2);  /* 0x00643e70 */
int __fastcall sub_60643EBC(_DWORD *a1);  /* 0x00643ebc */
int __fastcall sub_60643ECC(_DWORD *a1);  /* 0x00643ecc */
int __fastcall sub_60643FDC(int a1);  /* 0x00643fdc */
int __fastcall sub_60644094(int a1);  /* 0x00644094 */
int __fastcall sub_6064410C(int a1);  /* 0x0064410c */
bool __fastcall sub_606441DC(int a1, int a2);  /* 0x006441dc */
void __fastcall sub_60644354(int a1);  /* 0x00644354 */
int __fastcall sub_606443A4(int a1);  /* 0x006443a4 */
int __fastcall sub_606444A8(int *a1, int a2, int a3);  /* 0x006444a8 */
int __fastcall sub_60644758(_DWORD **a1, float *a2, int a3);  /* 0x00644758 */
int __fastcall sub_606447C8(_DWORD **a1, int a2, int a3, int a4, int a5);  /* 0x006447c8 */
int __fastcall sub_606447F4(_DWORD *a1);  /* 0x006447f4 */
unsigned int __fastcall sub_60644DD8(int a1);  /* 0x00644dd8 */
unsigned int __fastcall sub_60645374(int a1);  /* 0x00645374 */
unsigned int __fastcall sub_60645448(int a1, int a2);  /* 0x00645448 */
unsigned int __fastcall sub_606456E4(int a1, int a2, int a3, int a4, int a5);  /* 0x006456e4 */
int __fastcall sub_606458A4(int a1, int a2, int a3, int a4);  /* 0x006458a4 */
int __fastcall sub_606458D4(int a1, int a2);  /* 0x006458d4 */
int __fastcall sub_60645A38(int a1);  /* 0x00645a38 */
bool __fastcall sub_60645B9C(int a1, int a2);  /* 0x00645b9c */
void __fastcall sub_60645D88(int a1);  /* 0x00645d88 */
int __fastcall sub_60645E0C(int a1);  /* 0x00645e0c */
int __fastcall Actor_tarihorizontal_move_Lift_build(int a1);  /* 0x006462e8 */
int __fastcall sub_606463EC(int a1);  /* 0x006463ec */
int __fastcall sub_60646434(int a1);  /* 0x00646434 */
int __fastcall sub_60646490(int a1);  /* 0x00646490 */
float __fastcall sub_606464B8(int a1);  /* 0x006464b8 */
int __fastcall sub_60646684(int a1);  /* 0x00646684 */
int __fastcall sub_606468B0(int result);  /* 0x006468b0 */
int __fastcall sub_606468BC(int a1);  /* 0x006468bc */
int __fastcall sub_606469A0(int a1);  /* 0x006469a0 */
int __fastcall sub_60646D10(int a1, int a2);  /* 0x00646d10 */
bool __fastcall sub_60646E50(int a1, int a2, int a3);  /* 0x00646e50 */
int __fastcall sub_60646E88(int a1);  /* 0x00646e88 */
int __fastcall sub_60646EE0(int a1, int a2, int a3, int a4);  /* 0x00646ee0 */
int __fastcall sub_60646F0C(int a1);  /* 0x00646f0c */
bool __fastcall sub_60646FDC(int a1, int a2);  /* 0x00646fdc */
void __fastcall sub_606470E0(int a1);  /* 0x006470e0 */
int __fastcall sub_6064715C(int a1);  /* 0x0064715c */
int __fastcall Actor_tarivertical_move_Lift_build(int a1);  /* 0x006473e8 */
int __fastcall sub_6064750C(int a1);  /* 0x0064750c */
int __fastcall sub_60647568(int a1);  /* 0x00647568 */
int __fastcall sub_606475C4(int a1);  /* 0x006475c4 */
int __fastcall sub_60647604(int a1);  /* 0x00647604 */
int __fastcall sub_606477F8(int a1);  /* 0x006477f8 */
int __fastcall sub_60647A78(int result);  /* 0x00647a78 */
int __fastcall sub_60647A84(int a1);  /* 0x00647a84 */
int __fastcall sub_60647ECC(int a1, int a2);  /* 0x00647ecc */
bool __fastcall sub_6064800C(int a1);  /* 0x0064800c */
bool __fastcall sub_6064802C(int a1);  /* 0x0064802c */
int __fastcall sub_6064804C(int a1);  /* 0x0064804c */
int __fastcall sub_606480A4(int a1, int a2, int a3, int a4);  /* 0x006480a4 */
int __fastcall sub_606480D0(int a1);  /* 0x006480d0 */
bool __fastcall sub_606480F8(int a1, int a2);  /* 0x006480f8 */
void __fastcall sub_606481FC(int a1);  /* 0x006481fc */
int __fastcall sub_60648278(int a1);  /* 0x00648278 */
int __fastcall sub_6064862C(int a1);  /* 0x0064862c */
int __fastcall sub_60649440(int result);  /* 0x00649440 */
int __fastcall SE_OBJ_RC_UPLIFT_ref(int a1);  /* 0x0064945c */
int __fastcall sub_6064985C(int result);  /* 0x0064985c */
int __fastcall SE_OBJ_RC_UPLIFT_REVERT_ref(int a1);  /* 0x0064986c */
int __fastcall sub_60649C20(int a1);  /* 0x00649c20 */
int __fastcall sub_60649EC0(int a1);  /* 0x00649ec0 */
int __fastcall sub_6064A59C(_DWORD *a1);  /* 0x0064a59c */
bool __fastcall sub_6064A784(int a1, int a2);  /* 0x0064a784 */
int __fastcall sub_6064A7C4(_DWORD *a1);  /* 0x0064a7c4 */
int __fastcall sub_6064A998(int a1);  /* 0x0064a998 */
int __fastcall sub_6064AD08(int *a1);  /* 0x0064ad08 */
int __fastcall sub_6064AF30(int a1);  /* 0x0064af30 */
int __fastcall sub_6064B170(Actor *a1);  /* 0x0064b170 */
int __fastcall sub_6064B180(_DWORD ***a1, int a2, int a3, int a4);  /* 0x0064b180 */
int __fastcall sub_6064B1E8(int a1);  /* 0x0064b1e8 */
int __fastcall sub_6064B2FC(int *a1, int *a2);  /* 0x0064b2fc */
int __fastcall sub_6064B450(_DWORD *a1);  /* 0x0064b450 */
int __fastcall sub_6064B5E8(int a1, _DWORD *a2);  /* 0x0064b5e8 */
int __fastcall sub_6064B760(unsigned __int8 *a1, char a2);  /* 0x0064b760 */
int __fastcall sub_6064BC80(int a1, int a2);  /* 0x0064bc80 */
int __fastcall sub_6064BF74(int a1, int a2);  /* 0x0064bf74 */
bool __fastcall sub_6064C064(int a1, int a2);  /* 0x0064c064 */
void __fastcall sub_6064C168(int a1);  /* 0x0064c168 */
int __fastcall sub_6064C1C4(int a1);  /* 0x0064c1c4 */
int __fastcall sub_6064C4B8(Actor *a1);  /* 0x0064c4b8 */
int __fastcall sub_6064C77C(int a1);  /* 0x0064c77c */
int __fastcall sub_6064C7D0(int a1);  /* 0x0064c7d0 */
int __fastcall sub_6064C7EC(int a1);  /* 0x0064c7ec */
int __fastcall sub_6064C964(int a1, int *a2);  /* 0x0064c964 */
int __fastcall sub_6064C9E4(int a1, int a2, int a3, int a4, int a5);  /* 0x0064c9e4 */
bool __fastcall sub_6064CA04(int a1);  /* 0x0064ca04 */
int __fastcall sub_6064CA9C(int a1, unsigned int a2);  /* 0x0064ca9c */
int __fastcall sub_6064CE74(int a1);  /* 0x0064ce74 */
int __fastcall sub_6064CE80(int a1);  /* 0x0064ce80 */
bool __fastcall sub_6064CF34(int a1, int a2);  /* 0x0064cf34 */
int __fastcall sub_6064D0AC(int a1);  /* 0x0064d0ac */
int __fastcall sub_6064D10C(int a1, int a2);  /* 0x0064d10c */
int __fastcall sub_6064D1A4(int a1, char a2);  /* 0x0064d1a4 */
int __fastcall sub_6064D288(int a1, unsigned int a2);  /* 0x0064d288 */
int __fastcall sub_6064D634(unsigned __int8 *a1, int a2);  /* 0x0064d634 */
int __fastcall sub_6064D988(int a1, _BYTE *a2);  /* 0x0064d988 */
int __fastcall sub_6064DC38(int a1, int a2, int *a3);  /* 0x0064dc38 */
int __fastcall sub_6064DC7C(int a1);  /* 0x0064dc7c */
int __fastcall sub_6064DF00(int a1);  /* 0x0064df00 */
int __fastcall SE_OBJ_RC_CONTROL_ON_ref_2(int a1);  /* 0x0064df44 */
int __fastcall sub_6064E198(int a1);  /* 0x0064e198 */
int __fastcall sub_6064E2B0(int *a1);  /* 0x0064e2b0 */
int __fastcall sub_6064E408(int a1);  /* 0x0064e408 */
int __fastcall sub_6064E6D0(_DWORD *a1);  /* 0x0064e6d0 */
int __fastcall sub_6064E908(int a1, int a2, int a3, int a4);  /* 0x0064e908 */
int __fastcall sub_6064E934(int a1);  /* 0x0064e934 */
int __fastcall sub_6064E95C(int a1, char a2, int a3, int a4);  /* 0x0064e95c */
int __fastcall sub_6064ED5C(int a1, int a2);  /* 0x0064ed5c */
int __fastcall sub_6064EE4C(int a1);  /* 0x0064ee4c */
int __fastcall SE_OBJ_RC_CONTROL_ON_ref_3(int a1);  /* 0x0064efe0 */
int __fastcall sub_6064F8E8(int a1);  /* 0x0064f8e8 */
int __fastcall sub_6064F934(int a1);  /* 0x0064f934 */
int __fastcall sub_6064FBDC(int a1);  /* 0x0064fbdc */
int __fastcall sub_6064FEF8(int *a1);  /* 0x0064fef8 */
bool __fastcall sub_60650050(int a1, int a2);  /* 0x00650050 */
int __fastcall sub_60650090(int a1);  /* 0x00650090 */
int __fastcall SE_OBJ_RC_LIFTLINE_MOVE_ref(int a1);  /* 0x00650368 */
int __fastcall sub_60650864(int a1, int a2, int a3, int a4);  /* 0x00650864 */
int __fastcall sub_606508C0(int a1);  /* 0x006508c0 */
int __fastcall sub_60650908(int a1, int a2);  /* 0x00650908 */
void __fastcall sub_606509F8(_DWORD *a1);  /* 0x006509f8 */
int __fastcall sub_60650A9C(_DWORD *a1);  /* 0x00650a9c */
int __fastcall Actor_tarihorizontal_move_Lift_2_build(int a1);  /* 0x00650d00 */
int __fastcall sub_60650EEC(int a1);  /* 0x00650eec */
int __fastcall sub_60650F20(int a1);  /* 0x00650f20 */
int __fastcall sub_60650FCC(int a1);  /* 0x00650fcc */
float __fastcall sub_60650FE8(int a1);  /* 0x00650fe8 */
int __fastcall sub_606511B4(int a1);  /* 0x006511b4 */
int __fastcall sub_606513E0(int result);  /* 0x006513e0 */
int __fastcall sub_606513EC(int a1);  /* 0x006513ec */
int __fastcall sub_606514F4(_DWORD *a1);  /* 0x006514f4 */
int __fastcall sub_60651A94(int a1, int a2);  /* 0x00651a94 */
int __fastcall sub_60651BD4(int a1);  /* 0x00651bd4 */
int __fastcall sub_60651C8C(int a1, int a2, int a3, int a4);  /* 0x00651c8c */
bool __fastcall sub_60651CC4(int a1);  /* 0x00651cc4 */
int __fastcall sub_60651CD0(int a1);  /* 0x00651cd0 */
int __fastcall sub_60651CEC(int a1);  /* 0x00651cec */
bool __fastcall sub_60651D30(int a1, int a2);  /* 0x00651d30 */
void __fastcall sub_60651E34(int a1);  /* 0x00651e34 */
int __fastcall sub_60651EB0(int a1);  /* 0x00651eb0 */
int __fastcall sub_60652298(int a1);  /* 0x00652298 */
int __fastcall sub_606523F4(int a1, int a2, int a3, int a4);  /* 0x006523f4 */
unsigned int __fastcall sub_6065240C(int a1);  /* 0x0065240c */
int __fastcall sub_6065242C(int a1);  /* 0x0065242c */
int __fastcall sub_60652448(int a1);  /* 0x00652448 */
int __fastcall sub_60652464(int a1);  /* 0x00652464 */
bool __fastcall sub_606524B4(int a1, int a2);  /* 0x006524b4 */
void __fastcall sub_6065262C(_DWORD *a1);  /* 0x0065262c */
int __fastcall sub_606526BC(_DWORD *a1);  /* 0x006526bc */
int __fastcall sub_60652754(int a1, int a2);  /* 0x00652754 */
int __fastcall sub_60652870(int a1);  /* 0x00652870 */
int __fastcall sub_606529D0(_DWORD *a1);  /* 0x006529d0 */
int __fastcall sub_606529FC(int a1);  /* 0x006529fc */
unsigned int __fastcall sub_60652A84(int a1);  /* 0x00652a84 */
int __fastcall sub_60652D0C(int a1);  /* 0x00652d0c */
int __fastcall sub_60652DA0(int a1);  /* 0x00652da0 */
int __fastcall sub_60652F0C(int a1, int a2);  /* 0x00652f0c */
int __fastcall sub_6065306C(_DWORD *a1);  /* 0x0065306c */
int __fastcall sub_606530C4(int a1, int *a2, float *a3);  /* 0x006530c4 */
int __fastcall sub_606530F4(int a1, int a2);  /* 0x006530f4 */
bool __fastcall sub_606531AC(int a1);  /* 0x006531ac */
bool __fastcall sub_6065350C(int a1, int a2);  /* 0x0065350c */
void __fastcall sub_60653610(int a1);  /* 0x00653610 */
int __fastcall sub_60653660(int a1);  /* 0x00653660 */
int __fastcall sub_60653988(int a1);  /* 0x00653988 */
int __fastcall sub_60653C88(int a1);  /* 0x00653c88 */
int __fastcall sub_60653FC4(_DWORD *a1);  /* 0x00653fc4 */
int __fastcall sub_60654114(int a1, int a2, int a3, int a4);  /* 0x00654114 */
int __fastcall sub_6065413C(int *a1);  /* 0x0065413c */
int __fastcall sub_6065448C(int result);  /* 0x0065448c */
int __fastcall sub_60654720(int a1);  /* 0x00654720 */
unsigned int __fastcall sub_60654B0C(int a1, int a2);  /* 0x00654b0c */
int __fastcall sub_60654C14(int a1);  /* 0x00654c14 */
int __fastcall sub_60654C30(int a1);  /* 0x00654c30 */
int __fastcall sub_60654C98(int a1, int a2, _DWORD *a3);  /* 0x00654c98 */
bool __fastcall sub_60654D54(int a1, int a2);  /* 0x00654d54 */
void __fastcall sub_60654ECC(int a1);  /* 0x00654ecc */
int __fastcall sub_60654F3C(int a1);  /* 0x00654f3c */
int __fastcall sub_60654FB4(int a1);  /* 0x00654fb4 */
unsigned int __fastcall sub_60654FF4(int a1);  /* 0x00654ff4 */
int __fastcall sub_6065505C(int a1);  /* 0x0065505c */
int __fastcall sub_606550D0(int a1);  /* 0x006550d0 */
int __fastcall sub_60655130(int a1);  /* 0x00655130 */
int __fastcall sub_606554E0(int a1);  /* 0x006554e0 */
int __fastcall sub_60655900(int a1);  /* 0x00655900 */
int __fastcall sub_60655A50(int a1);  /* 0x00655a50 */
int __fastcall sub_60655D78(int a1, int a2, int a3, int a4);  /* 0x00655d78 */
bool __fastcall sub_60655DA0(int a1, int a2);  /* 0x00655da0 */
void __fastcall sub_60655EA4(int a1);  /* 0x00655ea4 */
int __fastcall sub_60655F04(int a1);  /* 0x00655f04 */
int __fastcall sub_60655F68(int result);  /* 0x00655f68 */
int __fastcall sub_60656244(int a1);  /* 0x00656244 */
int __fastcall sub_606565E8(int a1, int a2, int a3, char a4);  /* 0x006565e8 */
int __fastcall sub_60656814(int a1, _DWORD *a2, unsigned int a3);  /* 0x00656814 */
int __fastcall sub_60656868(int a1, unsigned int a2, _DWORD *a3);  /* 0x00656868 */
int __fastcall sub_60656A8C(int a1);  /* 0x00656a8c */
int __fastcall sub_60656AF4(int a1, int a2);  /* 0x00656af4 */
int __fastcall sub_60656CAC(int a1);  /* 0x00656cac */
bool __fastcall sub_60656E0C(int a1, int a2);  /* 0x00656e0c */
int __fastcall sub_60656F84(int a1);  /* 0x00656f84 */
int __fastcall sub_60656FE8(int a1, int a2);  /* 0x00656fe8 */
int __fastcall Actor_tarivertical_move_Lift_2_build(int a1);  /* 0x00657080 */
int __fastcall sub_6065729C(int a1);  /* 0x0065729c */
int __fastcall sub_606572D0(int a1);  /* 0x006572d0 */
int __fastcall sub_606572E8(int a1);  /* 0x006572e8 */
int __fastcall sub_60657328(_DWORD *a1);  /* 0x00657328 */
int __fastcall sub_60657360(int a1);  /* 0x00657360 */
int __fastcall sub_60657538(int a1);  /* 0x00657538 */
int __fastcall sub_606577B8(int result);  /* 0x006577b8 */
int __fastcall sub_606577C4(int a1);  /* 0x006577c4 */
int __fastcall sub_606578F0(float *a1);  /* 0x006578f0 */
int __fastcall sub_60657DB0(int a1, int a2);  /* 0x00657db0 */
int __fastcall sub_60657EF0(int a1);  /* 0x00657ef0 */
int __fastcall sub_60657F7C(int a1, int a2, int a3, int a4);  /* 0x00657f7c */
int __fastcall sub_60657FB0(int a1);  /* 0x00657fb0 */
int __fastcall sub_60657FCC(int a1);  /* 0x00657fcc */
bool __fastcall sub_60658010(int a1, int a2);  /* 0x00658010 */
void __fastcall sub_60658114(int a1);  /* 0x00658114 */
int __fastcall sub_60658190(int a1);  /* 0x00658190 */
int __fastcall sub_60658534(int a1, int a2, int a3, int a4);  /* 0x00658534 */
int __fastcall sub_6065855C(int a1, int *a2, int a3);  /* 0x0065855c */
int __fastcall sub_606585F8(int a1, int a2);  /* 0x006585f8 */
int __fastcall sub_6065864C(int a1);  /* 0x0065864c */
int __fastcall sub_60658854(int a1);  /* 0x00658854 */
int __fastcall sub_60658908(int a1);  /* 0x00658908 */
int __fastcall sub_60658A84(int a1);  /* 0x00658a84 */
bool __fastcall sub_60658AF8(int a1, int a2);  /* 0x00658af8 */
void __fastcall sub_60658C70(int a1);  /* 0x00658c70 */
int __fastcall sub_60658CC0(int a1);  /* 0x00658cc0 */
int __fastcall sub_60658F20(int a1);  /* 0x00658f20 */
int __fastcall sub_60659114(int a1, int a2, int a3, int a4);  /* 0x00659114 */
unsigned int __fastcall sub_60659150(int a1, int a2, int a3);  /* 0x00659150 */
int __fastcall sub_60659188(int a1, int a2);  /* 0x00659188 */
int __fastcall sub_606591E8(int a1);  /* 0x006591e8 */
int __fastcall sub_606593D0(int a1, _DWORD *a2, int (__fastcall ***a3)(_DWORD, int), int a4);  /* 0x006593d0 */
int __fastcall sub_6065940C(int a1, float *a2, unsigned int *a3, int a4, int a5);  /* 0x0065940c */
int __fastcall sub_6065945C(int a1, _DWORD *a2);  /* 0x0065945c */
int __fastcall sub_606595FC(int *a1, int a2);  /* 0x006595fc */
int __fastcall sub_60659714(_DWORD *a1);  /* 0x00659714 */
bool __fastcall sub_606598F0(int a1, int a2);  /* 0x006598f0 */
void __fastcall sub_60659ADC(_DWORD *a1);  /* 0x00659adc */
int __fastcall sub_60659B5C(_DWORD *a1);  /* 0x00659b5c */
int __fastcall sub_60659BE0(int result);  /* 0x00659be0 */
int __fastcall sub_60659DB8(int result);  /* 0x00659db8 */
int __fastcall sub_6065A48C(int result);  /* 0x0065a48c */
int __fastcall sub_6065ACE0(int a1);  /* 0x0065ace0 */
int __fastcall sub_6065ADE4(int a1);  /* 0x0065ade4 */
void __fastcall sub_6065AF60(int a1);  /* 0x0065af60 */
int __fastcall sub_6065AFCC(int result);  /* 0x0065afcc */
int __fastcall sub_6065B0DC(_DWORD *a1);  /* 0x0065b0dc */
int __fastcall sub_6065B254(int result);  /* 0x0065b254 */
int __fastcall sub_6065B364(_DWORD *a1);  /* 0x0065b364 */
int __fastcall sub_6065BA98(int *a1);  /* 0x0065ba98 */
int __fastcall sub_6065BEEC(int a1);  /* 0x0065beec */
int __fastcall sub_6065C038(int a1);  /* 0x0065c038 */
int __fastcall sub_6065C06C(int a1);  /* 0x0065c06c */
int __fastcall sub_6065C164(int a1);  /* 0x0065c164 */
int __fastcall sub_6065C404(int a1);  /* 0x0065c404 */
int __fastcall sub_6065C6DC(_DWORD *a1);  /* 0x0065c6dc */
int __fastcall sub_6065C8D4(int result, int a2, int *a3, int a4);  /* 0x0065c8d4 */
bool __fastcall sub_6065CBA4(int a1, int a2);  /* 0x0065cba4 */
int __fastcall sub_6065CCA8(Actor *a1);  /* 0x0065cca8 */
int __fastcall sub_6065D020(int result);  /* 0x0065d020 */
int __fastcall sub_6065D07C(int a1);  /* 0x0065d07c */
int __fastcall sub_6065D0F4(int a1);  /* 0x0065d0f4 */
int __fastcall sub_6065D148(int a1);  /* 0x0065d148 */
int __fastcall sub_6065D188(int a1);  /* 0x0065d188 */
void __fastcall sub_6065D1AC(_DWORD *a1);  /* 0x0065d1ac */
float __fastcall sub_6065D220(int a1);  /* 0x0065d220 */
int __fastcall sub_6065D324(int a1);  /* 0x0065d324 */
int __fastcall sub_6065D6B0(int a1);  /* 0x0065d6b0 */
int __fastcall sub_6065D954(int a1);  /* 0x0065d954 */
int __fastcall sub_6065DB08(int a1, int a2, int a3, int a4);  /* 0x0065db08 */
int __fastcall sub_6065DB20(int a1, int a2);  /* 0x0065db20 */
int __fastcall sub_6065E128(int a1, int *a2);  /* 0x0065e128 */
bool __fastcall sub_6065E154(int a1, int a2);  /* 0x0065e154 */
void __fastcall sub_6065E258(int a1);  /* 0x0065e258 */
int __fastcall sub_6065E2D4(int a1);  /* 0x0065e2d4 */
int __fastcall sub_6065E36C(int a1, int a2);  /* 0x0065e36c */
int __fastcall sub_6065E3A4(int a1, _DWORD *a2);  /* 0x0065e3a4 */
int __fastcall sub_6065E3E8(int a1, int a2);  /* 0x0065e3e8 */
int __fastcall sub_6065E3F4(int result, _DWORD *a2);  /* 0x0065e3f4 */
int __fastcall sub_6065E404(int a1, int a2);  /* 0x0065e404 */
int __fastcall sub_6065E42C(int a1);  /* 0x0065e42c */
int __fastcall sub_6065E434(int a1);  /* 0x0065e434 */
int __fastcall sub_6065E6C0(int result);  /* 0x0065e6c0 */
int __fastcall sub_6065E6D8(_DWORD *a1);  /* 0x0065e6d8 */
int __fastcall sub_6065E8D4(int a1);  /* 0x0065e8d4 */
int __fastcall sub_6065EBA8(int a1);  /* 0x0065eba8 */
int __fastcall sub_6065F29C(int *a1);  /* 0x0065f29c */
int __fastcall sub_6065F464(int a1);  /* 0x0065f464 */
int __fastcall sub_6065F5B4(int a1, int a2, int a3, int a4);  /* 0x0065f5b4 */
int __fastcall sub_6065F60C(int a1, int a2, _DWORD *a3, int a4);  /* 0x0065f60c */
void __fastcall sub_6065F740(int a1);  /* 0x0065f740 */
int __fastcall sub_6065F7BC(int a1);  /* 0x0065f7bc */
int __fastcall sub_6065F9A0(int a1);  /* 0x0065f9a0 */
int __fastcall sub_6065FC90(int a1);  /* 0x0065fc90 */
int __fastcall sub_6065FE10(int result);  /* 0x0065fe10 */
int __fastcall sub_6065FE64(int result);  /* 0x0065fe64 */
int __fastcall sub_6065FECC(int result);  /* 0x0065fecc */
int __fastcall sub_6065FF20(int result);  /* 0x0065ff20 */
int __fastcall sub_6065FF9C(int a1);  /* 0x0065ff9c */
int __fastcall sub_60660118(int result);  /* 0x00660118 */
int __fastcall sub_6066016C(int result);  /* 0x0066016c */
int __fastcall sub_606601D4(int result);  /* 0x006601d4 */
int __fastcall sub_60660228(int result);  /* 0x00660228 */
int __fastcall sub_60660238(int a1);  /* 0x00660238 */
int __fastcall sub_6066092C(int a1);  /* 0x0066092c */
int __fastcall sub_60660AAC(_DWORD **a1);  /* 0x00660aac */
int __fastcall sub_60660D70(int a1);  /* 0x00660d70 */
int __fastcall sub_60660F88(int result);  /* 0x00660f88 */
int __fastcall sub_606610E4(int a1, int a2, int a3, int a4);  /* 0x006610e4 */
bool __fastcall sub_6066112C(int a1, int a2);  /* 0x0066112c */
void __fastcall sub_60661230(_DWORD *a1);  /* 0x00661230 */
int __fastcall sub_606612DC(_DWORD *a1);  /* 0x006612dc */
int __fastcall sub_60661A14(int a1);  /* 0x00661a14 */
int __fastcall sub_60661A40(int a1);  /* 0x00661a40 */
int __fastcall sub_60661B24(int result);  /* 0x00661b24 */
int __fastcall sub_60661B90(int result);  /* 0x00661b90 */
int __fastcall sub_60661C70(int result);  /* 0x00661c70 */
int __fastcall sub_60661CBC(int a1);  /* 0x00661cbc */
int __fastcall sub_60661CEC(int a1);  /* 0x00661cec */
int __fastcall sub_60661DC4(int result);  /* 0x00661dc4 */
int __fastcall sub_60661E0C(int result);  /* 0x00661e0c */
int __fastcall sub_60661E28(int result);  /* 0x00661e28 */
int __fastcall sub_60661F0C(int result);  /* 0x00661f0c */
int __fastcall sub_606621A8(int a1);  /* 0x006621a8 */
float __fastcall sub_60662348(float *a1);  /* 0x00662348 */
int __fastcall sub_6066257C(int a1);  /* 0x0066257c */
int __fastcall sub_60662694(int result);  /* 0x00662694 */
int __fastcall sub_606627E8(int a1, int a2, int a3, int a4);  /* 0x006627e8 */
int __fastcall sub_60662900(int a1);  /* 0x00662900 */
int __fastcall sub_60662A68(int a1, int a2, int a3, int a4);  /* 0x00662a68 */
int __fastcall sub_60662A90(int a1, int a2);  /* 0x00662a90 */
bool __fastcall sub_60662CF8(int a1, int a2);  /* 0x00662cf8 */
void __fastcall sub_60662DFC(int a1);  /* 0x00662dfc */
int __fastcall sub_60662E5C(int a1);  /* 0x00662e5c */
int __fastcall sub_6066354C(int a1);  /* 0x0066354c */
int __fastcall sub_606638D4(int result);  /* 0x006638d4 */
int __fastcall sub_606638E4(int a1);  /* 0x006638e4 */
int __fastcall sub_60663D24(int a1);  /* 0x00663d24 */
float __fastcall sub_60663F70(int a1);  /* 0x00663f70 */
int __fastcall sub_60664220(int a1);  /* 0x00664220 */
int __fastcall sub_606643DC(int a1);  /* 0x006643dc */
int __fastcall sub_60664650(int a1);  /* 0x00664650 */
int __fastcall sub_60664A08(_DWORD **a1, int a2, int a3, int a4);  /* 0x00664a08 */
int __fastcall sub_60664A54(_DWORD *a1);  /* 0x00664a54 */
int __fastcall sub_60664E84(_BYTE *a1);  /* 0x00664e84 */
int __fastcall sub_60665044(int a1);  /* 0x00665044 */
int __fastcall sub_6066541C(int a1, int a2);  /* 0x0066541c */
bool __fastcall sub_606654CC(int a1, int a2);  /* 0x006654cc */
void __fastcall sub_606655D0(int a1);  /* 0x006655d0 */
int __fastcall sub_6066563C(int a1);  /* 0x0066563c */
int __fastcall sub_606656FC(_DWORD *a1);  /* 0x006656fc */
int __fastcall sub_606657C4(_DWORD *a1);  /* 0x006657c4 */
int __fastcall sub_6066591C(int a1);  /* 0x0066591c */
int __fastcall sub_60665B30(int a1, int a2, int a3, int a4);  /* 0x00665b30 */
int __fastcall sub_60665B6C(int a1);  /* 0x00665b6c */
bool __fastcall sub_60665C48(int a1, int a2);  /* 0x00665c48 */
int __fastcall sub_60665DC0(int a1);  /* 0x00665dc0 */
int __fastcall sub_60665E30(int a1, int a2);  /* 0x00665e30 */
int __fastcall Actor_kishiLift_build(int a1);  /* 0x00665fc8 */
int __fastcall sub_60666028(int a1);  /* 0x00666028 */
int __fastcall sub_6066631C(int a1);  /* 0x0066631c */
int __fastcall sub_60666598(Actor *a1);  /* 0x00666598 */
int __fastcall Actor_kishiLift_sutepu_build(int a1);  /* 0x0066662c */
int __fastcall sub_606667F8(int a1);  /* 0x006667f8 */
int __fastcall sub_606669F0(int a1);  /* 0x006669f0 */
int __fastcall sub_60666B44(int a1, int a2, int a3, int a4);  /* 0x00666b44 */
int __fastcall sub_60666B5C(int a1);  /* 0x00666b5c */
bool __fastcall sub_60666B84(int a1, int a2);  /* 0x00666b84 */
void __fastcall sub_60666C88(int a1);  /* 0x00666c88 */
int __fastcall sub_60666D04(int a1);  /* 0x00666d04 */
int __fastcall sub_60666E28(int a1);  /* 0x00666e28 */
int __fastcall sub_60666E78(int result);  /* 0x00666e78 */
int __fastcall sub_60666EB0(int a1);  /* 0x00666eb0 */
int __fastcall SE_OBJ_SUISHA_ref(int a1);  /* 0x00666f9c */
int __fastcall lift_suisha_4line_ref(int a1);  /* 0x006677b4 */
int __fastcall sub_60667CE8(_DWORD *a1);  /* 0x00667ce8 */
int __fastcall sub_60667D3C(int a1);  /* 0x00667d3c */
int __fastcall sub_60667D70(int a1);  /* 0x00667d70 */
unsigned int __fastcall sub_60667DB0(int a1);  /* 0x00667db0 */
int __fastcall sub_60667E9C(int a1);  /* 0x00667e9c */
int __fastcall sub_60667FC4(int a1, _DWORD *a2);  /* 0x00667fc4 */
int __fastcall sub_6066827C(int a1);  /* 0x0066827c */
int __fastcall sub_6066848C(int a1);  /* 0x0066848c */
void __fastcall sub_606685F0(int a1);  /* 0x006685f0 */
int __fastcall sub_60668664(int a1);  /* 0x00668664 */
int __fastcall sub_60668C48(int a1);  /* 0x00668c48 */
int __fastcall sub_60668F88(int result);  /* 0x00668f88 */
int __fastcall sub_60669534(int a1);  /* 0x00669534 */
int __fastcall sub_6066971C(int a1);  /* 0x0066971c */
int __fastcall sub_60669A8C(int a1);  /* 0x00669a8c */
int __fastcall sub_60669B8C(int result);  /* 0x00669b8c */
int __fastcall sub_60669D44(int a1);  /* 0x00669d44 */
int __fastcall sub_60669E88(int a1, int a2, int a3, int a4);  /* 0x00669e88 */
bool __fastcall sub_60669F34(int a1, int a2);  /* 0x00669f34 */
void __fastcall sub_6066A038(_DWORD *a1);  /* 0x0066a038 */
int __fastcall sub_6066A0D4(_DWORD *a1);  /* 0x0066a0d4 */
int __fastcall sub_6066A498(int a1, int a2);  /* 0x0066a498 */
int __fastcall sub_6066A4B0(int a1, int a2, int a3);  /* 0x0066a4b0 */
int __fastcall sub_6066A680(int a1, int a2, int a3, int a4);  /* 0x0066a680 */
int __fastcall lift_zen_hammer_ref(int a1, _DWORD *a2);  /* 0x0066a6b0 */
int __fastcall sub_6066A8D0(int a1);  /* 0x0066a8d0 */
int __fastcall sub_6066A9C4(int a1);  /* 0x0066a9c4 */
int __fastcall sub_6066AB48(int a1);  /* 0x0066ab48 */
bool __fastcall sub_6066AC6C(int a1, int a2);  /* 0x0066ac6c */
void __fastcall sub_6066AE58(int a1);  /* 0x0066ae58 */
int __fastcall sub_6066AEA8(int a1);  /* 0x0066aea8 */
int __fastcall sub_6066AEFC(struct sead_IDisposer *a1);  /* 0x0066aefc */
bool __fastcall sub_6066AF0C(int a1, int a2);  /* 0x0066af0c */
int __fastcall sub_6066B374(int a1, int a2, int a3, int a4);  /* 0x0066b374 */
int __fastcall sub_6066B39C(int a1);  /* 0x0066b39c */
int __fastcall sub_6066B4DC(int *a1, _DWORD *a2);  /* 0x0066b4dc */
int __fastcall sub_6066B5B8(int a1);  /* 0x0066b5b8 */
int __fastcall sub_6066B5BC(int a1);  /* 0x0066b5bc */
void __fastcall sub_6066BD4C(int a1);  /* 0x0066bd4c */
int __fastcall sub_6066BD9C(int a1);  /* 0x0066bd9c */
int __fastcall sub_6066BFDC(int a1, int a2);  /* 0x0066bfdc */
int __fastcall sub_6066C2A0(_DWORD *a1);  /* 0x0066c2a0 */
int __fastcall sub_6066C3FC(_DWORD *a1, int *a2);  /* 0x0066c3fc */
int __fastcall sub_6066C564(int *a1);  /* 0x0066c564 */
int __fastcall sub_6066C5BC(int a1, int a2, int a3, int a4);  /* 0x0066c5bc */
int __fastcall sub_6066C5E0(_DWORD *a1);  /* 0x0066c5e0 */
bool __fastcall sub_6066C668(int a1, int a2);  /* 0x0066c668 */
void __fastcall sub_6066C850(int a1);  /* 0x0066c850 */
int __fastcall sub_6066C8A0(int a1);  /* 0x0066c8a0 */
int __fastcall sub_6066CA68(int a1);  /* 0x0066ca68 */
int __fastcall sub_6066CA94(int a1);  /* 0x0066ca94 */
int __fastcall sub_6066CC88(int a1, int a2, int a3, int a4);  /* 0x0066cc88 */
int __fastcall lift_zen_hashi_tomegu_ref(int a1);  /* 0x0066ccb0 */
int __fastcall sub_6066CED4(int a1);  /* 0x0066ced4 */
bool __fastcall sub_6066CF04(int a1, int a2);  /* 0x0066cf04 */
int __fastcall sub_6066D008(Actor *a1);  /* 0x0066d008 */
int __fastcall sub_6066D220(int a1);  /* 0x0066d220 */
int __fastcall sub_6066D224(int a1);  /* 0x0066d224 */
int __fastcall sub_6066D28C(int a1);  /* 0x0066d28c */
int __fastcall sub_6066D434(int a1);  /* 0x0066d434 */
bool __fastcall sub_6066D524(int a1);  /* 0x0066d524 */
bool __fastcall sub_6066D544(int a1);  /* 0x0066d544 */
int __fastcall sub_6066D564(int a1);  /* 0x0066d564 */
int __fastcall sub_6066D6E0(int a1);  /* 0x0066d6e0 */
int __fastcall sub_6066D714(int a1, int a2, int a3, int a4);  /* 0x0066d714 */
int __fastcall sub_6066D73C(int a1);  /* 0x0066d73c */
bool __fastcall sub_6066DA24(int a1, int a2);  /* 0x0066da24 */
void __fastcall sub_6066DB28(int a1);  /* 0x0066db28 */
int __fastcall sub_6066DB78(int a1);  /* 0x0066db78 */
int __fastcall sub_6066E578(int a1);  /* 0x0066e578 */
int __fastcall sub_6066E768(int a1);  /* 0x0066e768 */
int __fastcall sub_6066E954(int a1);  /* 0x0066e954 */
int __fastcall sub_6066EB44(int a1);  /* 0x0066eb44 */
int __fastcall sub_6066ED30(int a1);  /* 0x0066ed30 */
int __fastcall sub_6066EF20(int a1);  /* 0x0066ef20 */
int __fastcall sub_6066F10C(int a1);  /* 0x0066f10c */
int __fastcall sub_6066F2FC(int a1);  /* 0x0066f2fc */
int __fastcall sub_6066F404(int a1);  /* 0x0066f404 */
int __fastcall sub_6066F5A4(int a1, int a2);  /* 0x0066f5a4 */
int __fastcall sub_6066F7B4(_DWORD *a1, unsigned int a2, _DWORD *a3, int a4);  /* 0x0066f7b4 */
int __fastcall sub_6066FAC0(_DWORD *a1, int a2);  /* 0x0066fac0 */
int __fastcall sub_6066FCB4(int a1);  /* 0x0066fcb4 */
int __fastcall SE_OBJ_CMN_TOUCH_MOVE_LV_ref_3(int a1);  /* 0x0067008c */
int __fastcall sub_606702FC(int a1);  /* 0x006702fc */
int __fastcall sub_60670568(int a1, int a2, int a3, int a4);  /* 0x00670568 */
bool __fastcall sub_606705D0(int a1);  /* 0x006705d0 */
bool __fastcall sub_60670684(int a1);  /* 0x00670684 */
bool __fastcall sub_60670738(int a1, int a2, char a3);  /* 0x00670738 */
bool __fastcall sub_606707F8(int a1);  /* 0x006707f8 */
bool __fastcall sub_606708AC(int a1);  /* 0x006708ac */
bool __fastcall sub_60670960(int a1, int a2, char a3);  /* 0x00670960 */
void __fastcall sub_60670A20(int a1);  /* 0x00670a20 */
int __fastcall sub_60670B38(int a1);  /* 0x00670b38 */
int __fastcall sub_60670C2C(int a1);  /* 0x00670c2c */
int __fastcall sub_60670D9C(int a1, int a2);  /* 0x00670d9c */
int __fastcall sub_60670DD8(int a1, int a2, int a3);  /* 0x00670dd8 */
bool __fastcall sub_60670E1C(int a1, int a2);  /* 0x00670e1c */
void __fastcall sub_60670F20(int a1);  /* 0x00670f20 */
int __fastcall sub_60670FA0(int a1);  /* 0x00670fa0 */
int __fastcall sub_606712E8(int a1);  /* 0x006712e8 */
void __fastcall sub_60671398(int a1);  /* 0x00671398 */
int __fastcall sub_606713E8(int a1);  /* 0x006713e8 */
int __fastcall sub_60671628(int a1, int a2);  /* 0x00671628 */
int __fastcall sub_606716C0(int a1, int a2);  /* 0x006716c0 */
int __fastcall sub_60671758(int a1, int a2);  /* 0x00671758 */
int __fastcall sub_60671854(int a1);  /* 0x00671854 */
int __fastcall sub_60671878(int a1);  /* 0x00671878 */
bool __fastcall sub_60671894(int a1, int a2);  /* 0x00671894 */
int __fastcall sub_60671998(Actor *a1);  /* 0x00671998 */
int __fastcall sub_60671DC0(int a1);  /* 0x00671dc0 */
int __fastcall sub_60671E70(int a1);  /* 0x00671e70 */
int __fastcall sub_60672440(int a1);  /* 0x00672440 */
int __fastcall SpinningStar_onCreate(int a1);  /* 0x00672aac */
int __fastcall sub_60672DC8(float *a1);  /* 0x00672dc8 */
int __fastcall sub_60672F6C(int a1, int a2);  /* 0x00672f6c */
int __fastcall sub_6067306C(int a1, int a2, int a3);  /* 0x0067306c */
int __fastcall SpinningStar_onExecute(int a1);  /* 0x00673140 */
int __fastcall SpinningStar_onDraw(int a1, int a2, int a3, int a4);  /* 0x0067348c */
int __fastcall sub_606734DC(_WORD *a1);  /* 0x006734dc */
bool __fastcall SpinningStar_checkRTTI(int a1, int a2);  /* 0x006736ac */
void __fastcall SpinningStar_dtor(int a1);  /* 0x006737b0 */
int __fastcall SpinningStar_dtorFree(int a1);  /* 0x00673800 */
int __fastcall sub_60673858(int a1);  /* 0x00673858 */
int __fastcall sub_606738DC(struct sead_IDisposer *a1);  /* 0x006738dc */
bool __fastcall sub_606738EC(int a1, int a2);  /* 0x006738ec */
int __fastcall sub_60674470(int result, float *a2);  /* 0x00674470 */
int __fastcall sub_6067450C(int result);  /* 0x0067450c */
int __fastcall sub_60674528(int a1, int a2);  /* 0x00674528 */
int __fastcall SE_OBJ_TOUCH_STARLIFT_ref(int a1, int a2, int a3);  /* 0x00674544 */
int __fastcall sub_6067484C(int a1);  /* 0x0067484c */
int __fastcall sub_606748FC(int a1);  /* 0x006748fc */
int __fastcall sub_60674D14(int a1, int a2, _DWORD *a3);  /* 0x00674d14 */
int __fastcall sub_60674D48(int a1, int a2, int a3, int a4);  /* 0x00674d48 */
int __fastcall sub_60674D70(int a1);  /* 0x00674d70 */
int __fastcall sub_60674EA4(int a1, int a2);  /* 0x00674ea4 */
int __fastcall sub_6067506C(int a1);  /* 0x0067506c */
int __fastcall sub_606751CC(_DWORD *a1, int (__fastcall ***a2)(_DWORD, int));  /* 0x006751cc */
int __fastcall sub_606752C8(int a1);  /* 0x006752c8 */
int __fastcall sub_606753A0(int a1);  /* 0x006753a0 */
int __fastcall sub_606754FC(int a1);  /* 0x006754fc */
int __fastcall sub_60675744(_DWORD *a1, int a2, int a3);  /* 0x00675744 */
bool __fastcall sub_6067595C(int a1, int a2);  /* 0x0067595c */
void __fastcall sub_60675AD4(int a1);  /* 0x00675ad4 */
int __fastcall sub_60675B3C(int a1);  /* 0x00675b3c */
int __fastcall sub_60675BF0(int a1, int a2, int a3, int a4);  /* 0x00675bf0 */
int __fastcall sub_60675C18(int a1);  /* 0x00675c18 */
int __fastcall lift_zen_yoko_ref(int *a1, _DWORD *a2);  /* 0x00675d3c */
int __fastcall sub_60675E20(int a1);  /* 0x00675e20 */
int __fastcall sub_60675E24(int a1);  /* 0x00675e24 */
int __fastcall sub_60675F5C(int a1);  /* 0x00675f5c */
int __fastcall lift_zen_yoko_ref_2(int a1);  /* 0x00676258 */
int __fastcall sub_60676378(float *a1);  /* 0x00676378 */
int __fastcall sub_606764F4(int a1);  /* 0x006764f4 */
int __fastcall sub_60676508(int a1, int a2, int a3, int a4);  /* 0x00676508 */
int __fastcall sub_60676530(Actor *a1);  /* 0x00676530 */
int __fastcall sub_606765C8(int a1);  /* 0x006765c8 */
int __fastcall sub_606767B4(int result, int a2, int a3);  /* 0x006767b4 */
int __fastcall sub_606768FC(unsigned __int8 *a1);  /* 0x006768fc */
int __fastcall sub_6067699C(int a1);  /* 0x0067699c */
int __fastcall sub_606769E4(int a1, float *a2);  /* 0x006769e4 */
int __fastcall sub_60676B28(int a1);  /* 0x00676b28 */
int __fastcall sub_60676D48(int a1);  /* 0x00676d48 */
int __fastcall sub_60676EFC(_BYTE *a1);  /* 0x00676efc */
int __fastcall sub_60676F28(int a1, _BYTE *a2);  /* 0x00676f28 */
int __fastcall sub_60676FFC(int result, int a2, int a3);  /* 0x00676ffc */
int __fastcall sub_60677174(_BYTE *a1);  /* 0x00677174 */
int __fastcall sub_6067723C(Actor *a1);  /* 0x0067723c */
int __fastcall sub_60677278(int a1);  /* 0x00677278 */
int __fastcall Actor_light_ruburoku_build(int a1);  /* 0x00677380 */
int __fastcall sub_60677418(_DWORD *a1);  /* 0x00677418 */
int __fastcall sub_6067757C(int a1);  /* 0x0067757c */
int __fastcall sub_606776A0(int a1);  /* 0x006776a0 */
int __fastcall sub_606776AC(int a1, int a2, int a3, int a4);  /* 0x006776ac */
int __fastcall sub_606778EC(int a1);  /* 0x006778ec */
int __fastcall sub_606778F0(int a1);  /* 0x006778f0 */
int __fastcall sub_606778F4(_DWORD *a1);  /* 0x006778f4 */
int __fastcall sub_60677940(int result, int a2);  /* 0x00677940 */
bool __fastcall sub_606779B8(int a1, int a2);  /* 0x006779b8 */
void __fastcall sub_60677BA4(int a1);  /* 0x00677ba4 */
int __fastcall sub_60677BF4(int a1);  /* 0x00677bf4 */
int __fastcall sub_60677C4C(int a1);  /* 0x00677c4c */
int __fastcall sub_60677DE4(int a1);  /* 0x00677de4 */
int __fastcall sub_60677E24(int a1);  /* 0x00677e24 */
int __fastcall sub_60677EC4(int a1);  /* 0x00677ec4 */
int __fastcall sub_60678044(int a1);  /* 0x00678044 */
int __fastcall sub_606780AC(int a1);  /* 0x006780ac */
int __fastcall sub_60678194(int a1, int a2, int a3, int a4);  /* 0x00678194 */
void __fastcall sub_606781E8(Actor *a1);  /* 0x006781e8 */
int __fastcall sub_60678218(Actor *a1);  /* 0x00678218 */
int __fastcall Actor_chibiyoshi_light_ru_build(int a1);  /* 0x0067834c */
int __fastcall sub_60678570(int a1);  /* 0x00678570 */
int __fastcall sub_606786DC(int a1);  /* 0x006786dc */
int __fastcall sub_606789F4(int a1, int a2);  /* 0x006789f4 */
bool __fastcall sub_60678C5C(int a1);  /* 0x00678c5c */
int __fastcall sub_60678D64(int a1, int a2, int a3, int a4);  /* 0x00678d64 */
int __fastcall sub_60678DEC(int a1, int a2);  /* 0x00678dec */
bool __fastcall sub_60678E1C(int a1);  /* 0x00678e1c */
void __fastcall sub_60678E64(int a1);  /* 0x00678e64 */
int __fastcall sub_60678ED4(int a1);  /* 0x00678ed4 */
int __fastcall sub_60678F48(_DWORD *a1);  /* 0x00678f48 */
int __fastcall sub_60678FA8(int a1);  /* 0x00678fa8 */
int __fastcall SE_PLY_CH_YOSHI_LIGHT_ref(int a1);  /* 0x00678fd8 */
int __fastcall sub_606790FC(_DWORD *a1);  /* 0x006790fc */
int __fastcall sub_606791D4(int a1);  /* 0x006791d4 */
bool __fastcall sub_606798A8(int a1, int a2);  /* 0x006798a8 */
void __fastcall sub_606799AC(int a1);  /* 0x006799ac */
int __fastcall sub_60679A90(int a1);  /* 0x00679a90 */
int __fastcall sub_60679BF4(int a1);  /* 0x00679bf4 */
int __fastcall sub_60679C04(int a1);  /* 0x00679c04 */
unsigned int __fastcall sub_60679CB0(int a1);  /* 0x00679cb0 */
int __fastcall sub_60679D3C(int a1);  /* 0x00679d3c */
int __fastcall sub_60679DCC(_DWORD *a1);  /* 0x00679dcc */
int __fastcall cube_kinoko_M_ref(int a1);  /* 0x00679e6c */
int __fastcall sub_6067A0EC(int a1);  /* 0x0067a0ec */
int __fastcall sub_6067A248(_DWORD *a1);  /* 0x0067a248 */
int __fastcall sub_6067A2A8(int a1, int a2, int a3, int a4);  /* 0x0067a2a8 */
int __fastcall sub_6067A2D0(int a1);  /* 0x0067a2d0 */
int __fastcall sub_6067A2E4(int a1);  /* 0x0067a2e4 */
bool __fastcall sub_6067A2EC(int a1, int a2);  /* 0x0067a2ec */
int __fastcall sub_6067A3F0(int a1);  /* 0x0067a3f0 */
int __fastcall sub_6067A604(int a1);  /* 0x0067a604 */
int __fastcall sub_6067A614(_DWORD *a1);  /* 0x0067a614 */
void __fastcall sub_6067A6A0(int a1);  /* 0x0067a6a0 */
int __fastcall sub_6067AABC(int a1);  /* 0x0067aabc */
int __fastcall sub_6067AE44(int *a1);  /* 0x0067ae44 */
int __fastcall sub_6067B124(int a1);  /* 0x0067b124 */
int __fastcall sub_6067B1C0(int a1, int a2, int a3, int a4);  /* 0x0067b1c0 */
int __fastcall sub_6067B1F8(int a1);  /* 0x0067b1f8 */
int __fastcall sub_6067B210(int a1, int a2);  /* 0x0067b210 */
bool __fastcall sub_6067B294(int a1, int a2);  /* 0x0067b294 */
void __fastcall sub_6067B398(int a1);  /* 0x0067b398 */
int __fastcall sub_6067B430(int a1);  /* 0x0067b430 */
int __fastcall sub_6067B7A8(int a1);  /* 0x0067b7a8 */
int __fastcall sub_6067B8BC(int a1);  /* 0x0067b8bc */
int __fastcall sub_6067B9A4(int a1);  /* 0x0067b9a4 */
int __fastcall sub_6067BA40(int a1);  /* 0x0067ba40 */
int __fastcall sub_6067BAE0(int a1);  /* 0x0067bae0 */
int __fastcall sub_6067BB7C(int a1);  /* 0x0067bb7c */
int __fastcall sub_6067BCB0(_DWORD *a1);  /* 0x0067bcb0 */
int __fastcall sub_6067BCEC(int a1);  /* 0x0067bcec */
int __fastcall sub_6067BDB8(int a1, int a2);  /* 0x0067bdb8 */
int __fastcall sub_6067BDD0(int a1);  /* 0x0067bdd0 */
int __fastcall sub_6067BE94(int a1);  /* 0x0067be94 */
int __fastcall sub_6067C238(int a1);  /* 0x0067c238 */
int __fastcall sub_6067C324(int a1);  /* 0x0067c324 */
bool __fastcall sub_6067C450(int a1);  /* 0x0067c450 */
int __fastcall sub_6067C4DC(int a1);  /* 0x0067c4dc */
int __fastcall sub_6067C624(int a1);  /* 0x0067c624 */
int __fastcall sub_6067C718(int a1);  /* 0x0067c718 */
int __fastcall sub_6067C838(int a1);  /* 0x0067c838 */
int __fastcall sub_6067C890(_DWORD *a1);  /* 0x0067c890 */
int __fastcall sub_6067C8E0(int a1);  /* 0x0067c8e0 */
int __fastcall sub_6067C904(int a1);  /* 0x0067c904 */
int __fastcall sub_6067C9A0(int a1);  /* 0x0067c9a0 */
int __fastcall sub_6067CA4C(int a1, int a2);  /* 0x0067ca4c */
int __fastcall sub_6067CAE4(int a1);  /* 0x0067cae4 */
bool __fastcall sub_6067CC88(int a1, int a2);  /* 0x0067cc88 */
void __fastcall sub_6067CD8C(_DWORD *a1);  /* 0x0067cd8c */
int __fastcall sub_6067CDF4(_DWORD *a1);  /* 0x0067cdf4 */
int __fastcall sub_6067CF94(int a1);  /* 0x0067cf94 */
int __fastcall sub_6067D3EC(int a1, int a2, float *a3, char a4, int a5, int a6);  /* 0x0067d3ec */
int __fastcall sub_6067D628(int result, float *a2, int a3);  /* 0x0067d628 */
int __fastcall sub_6067D670(int a1);  /* 0x0067d670 */
int __fastcall sub_6067D68C(int a1);  /* 0x0067d68c */
int __fastcall sub_6067D6D8(int a1);  /* 0x0067d6d8 */
int __fastcall sub_6067D8B4(int a1);  /* 0x0067d8b4 */
int __fastcall sub_6067D9D0(int a1, int a2, int a3, int a4);  /* 0x0067d9d0 */
int __fastcall sub_6067DA10(int a1);  /* 0x0067da10 */
int __fastcall sub_6067DBD0(int result, float *a2);  /* 0x0067dbd0 */
int __fastcall sub_6067DC50(int a1, float *a2);  /* 0x0067dc50 */
int __fastcall sub_6067DD1C(int a1, float *a2);  /* 0x0067dd1c */
int __fastcall SE_EMY_LIFT_LINE_HPDP_BODY_ref(int a1);  /* 0x0067dde8 */
int __fastcall sub_6067DF50(int a1);  /* 0x0067df50 */
int __fastcall sub_6067DF60(_DWORD *a1);  /* 0x0067df60 */
int __fastcall sub_6067DF8C(int a1);  /* 0x0067df8c */
int __fastcall SE_EMY_LIFT_LINE_ref(int a1);  /* 0x0067e054 */
int __fastcall sub_6067E6A0(int *a1);  /* 0x0067e6a0 */
int __fastcall sub_6067E8E8(int a1, int a2, int a3, int a4, int a5);  /* 0x0067e8e8 */
int __fastcall sub_6067E914(int result);  /* 0x0067e914 */
int __fastcall sub_6067E934(int a1);  /* 0x0067e934 */
int __fastcall sub_6067E9E4(int a1);  /* 0x0067e9e4 */
int __fastcall sub_6067EA08(int a1);  /* 0x0067ea08 */
int __fastcall sub_6067EAB8(int a1);  /* 0x0067eab8 */
int __fastcall sub_6067EADC(int a1, int a2, float *a3, char a4, unsigned int a5, int a6, int a7);  /* 0x0067eadc */
int __fastcall sub_6067EC2C(_DWORD *a1, int a2);  /* 0x0067ec2c */
int __fastcall sub_6067EF7C(int result, int a2, int a3, int a4);  /* 0x0067ef7c */
int __fastcall sub_6067EFAC(int a1);  /* 0x0067efac */
int __fastcall sub_6067F09C(unsigned __int8 *a1);  /* 0x0067f09c */
int __fastcall sub_6067F108(int a1, float *a2);  /* 0x0067f108 */
bool __fastcall sub_6067F184(int *a1);  /* 0x0067f184 */
int __fastcall sub_6067F45C(int a1, float *a2, int a3);  /* 0x0067f45c */
int __fastcall sub_6067F55C(_DWORD *a1);  /* 0x0067f55c */
int __fastcall sub_6067F584(_DWORD *a1);  /* 0x0067f584 */
int __fastcall sub_6067F5C0(int a1, int a2);  /* 0x0067f5c0 */
int __fastcall sub_6067F658(int a1);  /* 0x0067f658 */
bool __fastcall sub_6067F76C(int a1, int a2);  /* 0x0067f76c */
int __fastcall sub_6067F8E4(_DWORD *a1);  /* 0x0067f8e4 */
int __fastcall sub_6067F950(int a1, int a2);  /* 0x0067f950 */
int __fastcall sub_6067F9F0(int a1);  /* 0x0067f9f0 */
int __fastcall sub_6067FBB8(int a1);  /* 0x0067fbb8 */
int __fastcall sub_6067FC30(int a1);  /* 0x0067fc30 */
bool __fastcall sub_6067FC48(int a1, int a2);  /* 0x0067fc48 */
int __fastcall sub_6067FDC0(_DWORD *a1);  /* 0x0067fdc0 */
int __fastcall sub_6067FF64(_DWORD *a1);  /* 0x0067ff64 */
int __fastcall sub_606801CC(int a1);  /* 0x006801cc */
int __fastcall sub_60680358(int a1);  /* 0x00680358 */
int __fastcall sub_60680378(int a1, int a2, int a3, int a4);  /* 0x00680378 */
bool __fastcall sub_6068046C(int a1, int a2);  /* 0x0068046c */
int __fastcall sub_60680654(Actor *a1);  /* 0x00680654 */
int __fastcall sub_60680830(int a1);  /* 0x00680830 */
int __fastcall sub_606809A0(_DWORD *a1);  /* 0x006809a0 */
int __fastcall sub_606809D8(int result);  /* 0x006809d8 */
int __fastcall sub_60680A1C(float *a1);  /* 0x00680a1c */
int __fastcall sub_60680AA4(int a1);  /* 0x00680aa4 */
int __fastcall sub_60680B28(int *a1);  /* 0x00680b28 */
int __fastcall SE_OBJ_KP_ref(_DWORD *a1);  /* 0x00680c10 */
int __fastcall sub_60680EFC(int a1);  /* 0x00680efc */
int __fastcall sub_6068126C(_DWORD *a1);  /* 0x0068126c */
int __fastcall sub_6068129C(int *a1);  /* 0x0068129c */
int __fastcall SE_OBJ_KP_ref_2(int a1);  /* 0x00681458 */
int __fastcall sub_60681544(float *a1);  /* 0x00681544 */
int __fastcall sub_60681638(int result);  /* 0x00681638 */
int __fastcall sub_606816CC(int a1);  /* 0x006816cc */
int __fastcall sub_606817D0(int result);  /* 0x006817d0 */
int __fastcall sub_606817F8(float *a1);  /* 0x006817f8 */
int __fastcall sub_60681908(int a1);  /* 0x00681908 */
int __fastcall sub_606819D4(int a1);  /* 0x006819d4 */
int __fastcall sub_60681BD8(int a1);  /* 0x00681bd8 */
int __fastcall sub_60681EB8(int a1, int a2, int a3, int a4);  /* 0x00681eb8 */
unsigned int __fastcall sub_60681F10(int a1, int a2);  /* 0x00681f10 */
int __fastcall sub_60682200(int a1);  /* 0x00682200 */
int __fastcall sub_606822CC(int a1, int a2, int a3, int a4);  /* 0x006822cc */
int __fastcall sub_606824CC(int a1);  /* 0x006824cc */
bool __fastcall sub_60682698(int a1, int a2);  /* 0x00682698 */
void __fastcall sub_6068279C(int a1);  /* 0x0068279c */
int __fastcall sub_606827FC(int a1);  /* 0x006827fc */
int __fastcall sub_60682E98(int a1);  /* 0x00682e98 */
int __fastcall sub_60682FDC(_DWORD *a1);  /* 0x00682fdc */
int __fastcall sub_606832F0(int a1);  /* 0x006832f0 */
int __fastcall sub_606834A4(_DWORD *a1);  /* 0x006834a4 */
int __fastcall sub_60683510(int a1);  /* 0x00683510 */
void __fastcall sub_60683564(int a1);  /* 0x00683564 */
int __fastcall sub_606835C8(int result);  /* 0x006835c8 */
int __fastcall sub_606836FC(int a1);  /* 0x006836fc */
int __fastcall sub_606838C8(int a1);  /* 0x006838c8 */
int __fastcall gu_wait00_ref(int a1);  /* 0x00683960 */
int __fastcall gu_attack00_ref(int a1);  /* 0x00683a70 */
int __fastcall gu_attack01_ref(int a1);  /* 0x00683b88 */
int __fastcall gu_attack02_ref(int a1);  /* 0x00683c98 */
int __fastcall gu_raise00_ref(int a1);  /* 0x00683da8 */
int __fastcall gu_feint00_ref(int a1);  /* 0x00683eb8 */
int __fastcall sub_60683FD0(int32x4_t *a1);  /* 0x00683fd0 */
bool __fastcall sub_60684008(int a1, int a2);  /* 0x00684008 */
void __fastcall sub_60684180(_DWORD *a1);  /* 0x00684180 */
int __fastcall sub_60684230(_DWORD *a1);  /* 0x00684230 */
int __fastcall sub_606842E4(struct sead_IDisposer *a1);  /* 0x006842e4 */
bool __fastcall sub_606842F4(int a1, int a2);  /* 0x006842f4 */
int __fastcall sub_6068466C(_DWORD *a1);  /* 0x0068466c */
int __fastcall sub_60684748(_DWORD *a1);  /* 0x00684748 */
int __fastcall sub_60684B20(int a1);  /* 0x00684b20 */
int __fastcall sub_60684CA0(_DWORD *a1);  /* 0x00684ca0 */
int __fastcall sub_60684D0C(_DWORD *a1);  /* 0x00684d0c */
int __fastcall sub_60684E28(int a1);  /* 0x00684e28 */
int __fastcall sub_60685220(_DWORD *a1);  /* 0x00685220 */
int __fastcall sub_606853F8(_DWORD *a1);  /* 0x006853f8 */
int __fastcall sub_606855E0(_DWORD *a1);  /* 0x006855e0 */
int __fastcall sub_606857B8(_DWORD *a1);  /* 0x006857b8 */
int __fastcall sub_60685990(_DWORD *a1);  /* 0x00685990 */
int __fastcall sub_60685B68(_DWORD *a1);  /* 0x00685b68 */
bool __fastcall sub_60685D50(int a1, int a2);  /* 0x00685d50 */
void __fastcall sub_60685EC8(int a1);  /* 0x00685ec8 */
int __fastcall sub_60685F4C(int a1);  /* 0x00685f4c */
int __fastcall sub_60686118(int a1);  /* 0x00686118 */
bool __fastcall sub_60686210(int a1, int a2);  /* 0x00686210 */
int __fastcall sub_60686314(Actor *a1);  /* 0x00686314 */
int __fastcall sub_606864F0(int a1);  /* 0x006864f0 */
int __fastcall sub_6068661C(int a1);  /* 0x0068661c */
int __fastcall sub_60686CBC(int a1);  /* 0x00686cbc */
int __fastcall sub_60686EB8(int a1);  /* 0x00686eb8 */
int __fastcall sub_60686F98(int a1);  /* 0x00686f98 */
int __fastcall sub_6068769C(int a1);  /* 0x0068769c */
int __fastcall sub_60687C18(int result, int a2);  /* 0x00687c18 */
int __fastcall sub_60688140(int a1);  /* 0x00688140 */
int __fastcall sub_60688374(int a1);  /* 0x00688374 */
int __fastcall sub_60688668(int a1, float *a2, int a3, int a4, int a5);  /* 0x00688668 */
int __fastcall sub_60688878(int a1);  /* 0x00688878 */
bool __fastcall sub_60688A1C(int a1, int a2);  /* 0x00688a1c */
void __fastcall sub_60688B94(int a1);  /* 0x00688b94 */
int __fastcall sub_60688C18(int a1);  /* 0x00688c18 */
int __fastcall sub_60688F88(_DWORD *a1, int a2);  /* 0x00688f88 */
unsigned int __fastcall sub_60689684(int a1, int a2);  /* 0x00689684 */
int __fastcall sub_606897FC(int a1);  /* 0x006897fc */
int __fastcall lift_maruta_ref(int a1);  /* 0x00689a70 */
int __fastcall sub_60689D78(int a1);  /* 0x00689d78 */
int __fastcall sub_60689F30(int a1, int a2, int a3, int a4);  /* 0x00689f30 */
int __fastcall sub_6068A038(int a1);  /* 0x0068a038 */
int __fastcall sub_6068A190(int a1, int a2, int a3, int a4);  /* 0x0068a190 */
int __fastcall sub_6068A28C(int a1, int a2);  /* 0x0068a28c */
int __fastcall sub_6068A2AC(int a1, int a2, int a3);  /* 0x0068a2ac */
bool __fastcall sub_6068A2F0(int a1, int a2);  /* 0x0068a2f0 */
void __fastcall sub_6068A468(_BYTE *a1);  /* 0x0068a468 */
int __fastcall sub_6068A4EC(_BYTE *a1);  /* 0x0068a4ec */
int __fastcall sub_6068A6FC(_DWORD *a1, int a2, int a3);  /* 0x0068a6fc */
int __fastcall sub_6068A83C(int a1, int a2);  /* 0x0068a83c */
float __fastcall sub_6068AAE4(int a1);  /* 0x0068aae4 */
int __fastcall sub_6068ABEC(int a1, int a2, int a3, int a4);  /* 0x0068abec */
int __fastcall sub_6068AD3C(int a1);  /* 0x0068ad3c */
int __fastcall sub_6068AD50(int a1);  /* 0x0068ad50 */
int __fastcall sub_6068AD84(int a1, int a2);  /* 0x0068ad84 */
int __fastcall sub_6068AE00(int a1);  /* 0x0068ae00 */
int __fastcall sub_6068AE38(int a1);  /* 0x0068ae38 */
int __fastcall sub_6068AE70(int a1);  /* 0x0068ae70 */
int __fastcall sub_6068AEA8(int a1);  /* 0x0068aea8 */
int __fastcall sub_6068AF48(int a1);  /* 0x0068af48 */
int __fastcall sub_6068AF60(int a1);  /* 0x0068af60 */
int __fastcall sub_6068AF7C(int a1);  /* 0x0068af7c */
int __fastcall sub_6068AF9C(int a1);  /* 0x0068af9c */
int __fastcall sub_6068AFBC(int a1);  /* 0x0068afbc */
int __fastcall sub_6068AFD4(int a1);  /* 0x0068afd4 */
int __fastcall sub_6068B02C(struct sead_IDisposer *a1);  /* 0x0068b02c */
int __fastcall sub_6068B3C4(_DWORD *a1, int a2);  /* 0x0068b3c4 */
int __fastcall sub_6068B428(int a1);  /* 0x0068b428 */
int __fastcall sub_6068B644(int a1);  /* 0x0068b644 */
int __fastcall sub_6068B678(int a1, int a2, int a3);  /* 0x0068b678 */
int __fastcall sub_6068B6D8(int a1);  /* 0x0068b6d8 */
int __fastcall sub_6068B75C(int a1);  /* 0x0068b75c */
int __fastcall MaskManager_ctor_helper_68B770(int a1, int a2);  /* 0x0068b770 */
int __fastcall sub_6068B778(_DWORD *a1, int a2, int a3);  /* 0x0068b778 */
int __fastcall sub_6068B7CC(_DWORD *a1);  /* 0x0068b7cc */
int __fastcall sub_6068B810(int a1);  /* 0x0068b810 */
int __fastcall sub_6068B888(struct sead_IDisposer *a1);  /* 0x0068b888 */
int __fastcall MaskManager_createInstance_(int a1);  /* 0x0068b8e8 */
int __fastcall MaskManager_ctor(int a1);  /* 0x0068bb2c */
int __fastcall sub_6068C060(int a1);  /* 0x0068c060 */
int __fastcall sub_6068C0CC(int a1);  /* 0x0068c0cc */
int __fastcall sub_6068C290(int a1);  /* 0x0068c290 */
int __fastcall sub_6068C2EC(int a1);  /* 0x0068c2ec */
bool __fastcall sub_6068C438(int a1);  /* 0x0068c438 */
int __fastcall sub_6068C464(_DWORD *a1);  /* 0x0068c464 */
bool __fastcall sub_6068C5D0(int a1);  /* 0x0068c5d0 */
int __fastcall sub_6068C8E0(int a1, int *a2, int *a3);  /* 0x0068c8e0 */
bool __fastcall sub_6068CA04(int a1, int a2);  /* 0x0068ca04 */
bool __fastcall sub_6068CA40(int a1, float *a2, float *a3);  /* 0x0068ca40 */
int __fastcall sub_6068CB4C(int a1);  /* 0x0068cb4c */
int __fastcall sub_6068CDB8(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4);  /* 0x0068cdb8 */
int __fastcall sub_6068D138(int a1, int a2);  /* 0x0068d138 */
int __fastcall sub_6068D150(int a1, int a2, int a3);  /* 0x0068d150 */
int __fastcall sub_6068D194(int a1);  /* 0x0068d194 */
int __fastcall StoneEye_vf12(int a1, int a2, int a3, int a4);  /* 0x0068d364 */
bool __fastcall StoneEye_vf49(int a1, int a2);  /* 0x0068d398 */
int __fastcall StoneEye_vf50(int a1);  /* 0x0068d4a4 */
int __fastcall StoneEye_vf53(int a1);  /* 0x0068d7d0 */
int __fastcall sub_6068D904(int a1);  /* 0x0068d904 */
int __fastcall sub_6068DB28(int a1);  /* 0x0068db28 */
int __fastcall SE_OBJ_IWAHEM_SHOCK_ref(int a1);  /* 0x0068dc78 */
unsigned int __fastcall sub_6068E0F4(int a1);  /* 0x0068e0f4 */
int __fastcall sub_6068E378(int a1);  /* 0x0068e378 */
int __fastcall sub_6068E4E4(int a1);  /* 0x0068e4e4 */
int __fastcall StoneEye_vf58(int a1, int a2);  /* 0x0068e5c4 */
int __fastcall sub_6068E614(int a1, float *a2, float *a3);  /* 0x0068e614 */
unsigned int __fastcall sub_6068E788(int a1);  /* 0x0068e788 */
bool __fastcall sub_6068E90C(int a1, int a2);  /* 0x0068e90c */
bool __fastcall StoneEye_vf0(int a1, int a2);  /* 0x0068e960 */
void __fastcall StoneEye_vf2(int a1);  /* 0x0068ead8 */
int __fastcall StoneEye_vf3(int a1);  /* 0x0068eb54 */
int __fastcall sub_6068EC60(int a1, int a2, int a3, int a4);  /* 0x0068ec60 */
int __fastcall sub_606903D0(int a1, int a2);  /* 0x006903d0 */
bool __fastcall sub_606903EC(int a1, int a2);  /* 0x006903ec */
int __fastcall sub_606905D8(int a1);  /* 0x006905d8 */
int __fastcall sub_60690658(int a1, int a2);  /* 0x00690658 */
bool __fastcall sub_606907A8(int a1, int a2);  /* 0x006907a8 */
int __fastcall sub_60690A90(int a1, int a2);  /* 0x00690a90 */
int __fastcall sub_60690BAC(int *a1, int a2, int a3, int a4);  /* 0x00690bac */
int __fastcall sub_60690CB8(int a1, int a2);  /* 0x00690cb8 */
int __fastcall sub_60690D34(int a1);  /* 0x00690d34 */
bool __fastcall sub_60690D70(int a1);  /* 0x00690d70 */
bool __fastcall sub_60690DD4(int a1, int a2);  /* 0x00690dd4 */
int __fastcall sub_60690FC0(int a1);  /* 0x00690fc0 */
int __fastcall sub_606911FC(int result);  /* 0x006911fc */
int __fastcall sub_6069120C(int result);  /* 0x0069120c */
int __fastcall sub_60691454(int a1);  /* 0x00691454 */
int __fastcall SE_OBJ_IWAHEM_SHOCK_ref_2(int a1);  /* 0x00691588 */
int __fastcall sub_60691614(int a1);  /* 0x00691614 */
int __fastcall sub_606917EC(int a1);  /* 0x006917ec */
int __fastcall sub_6069193C(int a1);  /* 0x0069193c */
int __fastcall sub_60691B4C(int a1);  /* 0x00691b4c */
int __fastcall sub_60691D0C(int a1, int a2, int a3, int a4);  /* 0x00691d0c */
unsigned int __fastcall sub_60691D3C(int a1);  /* 0x00691d3c */
int __fastcall sub_60691F1C(int a1, int a2);  /* 0x00691f1c */
int __fastcall sub_60691F34(int a1, int a2, int a3);  /* 0x00691f34 */
bool __fastcall sub_60691F78(int a1, int a2);  /* 0x00691f78 */
void __fastcall sub_6069207C(int a1);  /* 0x0069207c */
int __fastcall sub_606920CC(int a1);  /* 0x006920cc */
int __fastcall sub_6069270C(int a1, int a2);  /* 0x0069270c */
int __fastcall sub_60692724(int a1, int a2, int a3);  /* 0x00692724 */
int __fastcall sub_60692768(int a1, int a2, int a3, int a4);  /* 0x00692768 */
int __fastcall sub_60692790(int a1);  /* 0x00692790 */
bool __fastcall sub_606928C0(int a1);  /* 0x006928c0 */
bool __fastcall sub_606928E0(int a1);  /* 0x006928e0 */
bool __fastcall sub_60692900(int a1, int a2, int a3);  /* 0x00692900 */
int __fastcall sub_60692938(int a1);  /* 0x00692938 */
int __fastcall sub_60692B38(int a1);  /* 0x00692b38 */
bool __fastcall sub_60692DD8(int a1, int a2);  /* 0x00692dd8 */
void __fastcall sub_60692F50(int a1);  /* 0x00692f50 */
int __fastcall sub_60692FA0(int a1);  /* 0x00692fa0 */
int __fastcall sub_60693478(int **a1, int a2, int a3);  /* 0x00693478 */
int __fastcall Actor_monoreruburoku_reru_build(int a1);  /* 0x00693578 */
int __fastcall sub_60693594(int a1, int a2);  /* 0x00693594 */
int __fastcall sub_60693940(int *a1);  /* 0x00693940 */
int __fastcall sub_60693A00(int a1);  /* 0x00693a00 */
int __fastcall sub_60693B4C(int a1);  /* 0x00693b4c */
int __fastcall sub_60693B88(int a1, int a2, int a3, int a4);  /* 0x00693b88 */
bool __fastcall sub_60693B9C(int a1, int a2);  /* 0x00693b9c */
void __fastcall sub_60693D84(int a1);  /* 0x00693d84 */
int __fastcall sub_60693E0C(int a1);  /* 0x00693e0c */
int __fastcall sub_60693F1C(int a1, int a2, int a3);  /* 0x00693f1c */
int __fastcall sub_60694258(int a1, float *a2);  /* 0x00694258 */
int __fastcall sub_6069455C(int a1);  /* 0x0069455c */
int __fastcall sub_60694680(int a1, int a2, int a3, int a4, int a5);  /* 0x00694680 */
int __fastcall sub_60694A20(int a1);  /* 0x00694a20 */
int __fastcall sub_60694D6C(int a1);  /* 0x00694d6c */
int __fastcall sub_60694FD4(int result);  /* 0x00694fd4 */
int __fastcall sub_60695168(_DWORD *a1);  /* 0x00695168 */
int __fastcall sub_606951A4(int a1);  /* 0x006951a4 */
int __fastcall sub_606951B4(int a1, int a2, int a3, int a4);  /* 0x006951b4 */
int __fastcall sub_60695208(Actor *a1);  /* 0x00695208 */
void __fastcall sub_606953EC(Actor *a1);  /* 0x006953ec */
int __fastcall sub_60695420(Actor *a1);  /* 0x00695420 */
int __fastcall sub_60695454(int a1);  /* 0x00695454 */
int __fastcall sub_60696A80(int a1);  /* 0x00696a80 */
int __fastcall sub_60696B74(int a1);  /* 0x00696b74 */
int __fastcall sub_60696BA0(int a1);  /* 0x00696ba0 */
int __fastcall sub_60696BFC(int a1);  /* 0x00696bfc */
int __fastcall sub_60696C78(int a1);  /* 0x00696c78 */
int __fastcall sub_60696E28(int result, int a2, int a3);  /* 0x00696e28 */
int __fastcall sub_60696F6C(int a1, float *a2);  /* 0x00696f6c */
int __fastcall sub_606970A8(int result, int a2, int a3);  /* 0x006970a8 */
int __fastcall sub_6069723C(int a1, _BYTE *a2);  /* 0x0069723c */
int __fastcall sub_60697314(int a1);  /* 0x00697314 */
int __fastcall sub_606975D8(int result);  /* 0x006975d8 */
bool __fastcall sub_606975E8(int a1, int a2);  /* 0x006975e8 */
int __fastcall sub_606977D0(int a1);  /* 0x006977d0 */
int __fastcall sub_606977DC(int a1);  /* 0x006977dc */
int __fastcall sub_60697814(int a1, int a2);  /* 0x00697814 */
int __fastcall sub_6069784C(int a1, _DWORD *a2);  /* 0x0069784c */
int __fastcall sub_60697890(int a1, int a2);  /* 0x00697890 */
int __fastcall sub_6069789C(int result, _DWORD *a2);  /* 0x0069789c */
int __fastcall sub_606978AC(int a1, int a2);  /* 0x006978ac */
int __fastcall sub_606978D4(int a1);  /* 0x006978d4 */
int __fastcall sub_606978DC(int a1);  /* 0x006978dc */
int __fastcall sub_60697BE8(int a1);  /* 0x00697be8 */
int __fastcall sub_60697F8C(int result);  /* 0x00697f8c */
int __fastcall sub_60698090(int result);  /* 0x00698090 */
int __fastcall sub_606980C4(int a1);  /* 0x006980c4 */
int __fastcall sub_60698264(int a1);  /* 0x00698264 */
int __fastcall sub_606983C8(int a1);  /* 0x006983c8 */
unsigned int __fastcall sub_606983F0(int a1, int a2);  /* 0x006983f0 */
int __fastcall sub_60698718(int a1);  /* 0x00698718 */
bool __fastcall sub_60698850(int a1, int a2);  /* 0x00698850 */
int __fastcall sub_60698954(Actor *a1);  /* 0x00698954 */
int __fastcall sub_60698B70(int a1);  /* 0x00698b70 */
bool __fastcall sub_60698BFC(int a1, int a2);  /* 0x00698bfc */
int __fastcall sub_60698D00(Actor *a1);  /* 0x00698d00 */
int __fastcall sub_60698E04(int a1);  /* 0x00698e04 */
int __fastcall sub_60698FF4(int a1);  /* 0x00698ff4 */
int __fastcall sub_60699168(int a1);  /* 0x00699168 */
int __fastcall sub_60699180(int a1);  /* 0x00699180 */
bool __fastcall sub_606992C4(int a1, int a2);  /* 0x006992c4 */
int __fastcall sub_606993C8(Actor *a1);  /* 0x006993c8 */
int __fastcall sub_60699798(int a1);  /* 0x00699798 */
int __fastcall sub_60699AD4(_DWORD ***a1, int a2, int a3, int a4);  /* 0x00699ad4 */
int __fastcall sub_60699B20(Actor *a1);  /* 0x00699b20 */
int __fastcall sub_60699BB4(int result, int a2, int a3);  /* 0x00699bb4 */
int __fastcall SE_OBJ_NUT_REVERT_ref(int a1);  /* 0x00699f5c */
int __fastcall sub_6069A0D8(int result);  /* 0x0069a0d8 */
int __fastcall SE_OBJ_NUT_ROLL_ref(int a1);  /* 0x0069a0e8 */
int __fastcall obj_nut_ref(int a1);  /* 0x0069a238 */
int __fastcall sub_6069A5B0(_DWORD *a1);  /* 0x0069a5b0 */
int __fastcall sub_6069A734(unsigned int *a1);  /* 0x0069a734 */
unsigned int __fastcall sub_6069A76C(unsigned int *a1);  /* 0x0069a76c */
int __fastcall sub_6069A90C(int a1, int a2, int a3, int a4);  /* 0x0069a90c */
int __fastcall sub_6069A940(int a1, int a2);  /* 0x0069a940 */
bool __fastcall sub_6069ACDC(int a1, int a2);  /* 0x0069acdc */
int __fastcall sub_6069ADE0(Actor *a1);  /* 0x0069ade0 */
int __fastcall sub_6069AFA0(int a1, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5);  /* 0x0069afa0 */
int __fastcall sub_6069B070(float *a1, float *a2);  /* 0x0069b070 */
int __fastcall Actor_obujekinoko_build(int a1);  /* 0x0069b198 */
int __fastcall sub_6069B254(int a1);  /* 0x0069b254 */
int __fastcall sub_6069B2F4(int a1);  /* 0x0069b2f4 */
int __fastcall sub_6069B3AC(int a1);  /* 0x0069b3ac */
bool __fastcall sub_6069B3C0(int a1, int a2);  /* 0x0069b3c0 */
void __fastcall sub_6069B5A8(int a1);  /* 0x0069b5a8 */
int __fastcall sub_6069B5D8(int a1);  /* 0x0069b5d8 */
int __fastcall sub_6069B6F4(float *a1, int a2);  /* 0x0069b6f4 */
int __fastcall sub_6069B8C4(int a1, int a2, _DWORD *a3, unsigned int a4, int a5, int a6);  /* 0x0069b8c4 */
int __fastcall sub_6069BB38(_DWORD *a1, int a2, int a3);  /* 0x0069bb38 */
int __fastcall sub_6069BE24(int a1, _DWORD *a2, float *a3);  /* 0x0069be24 */
int __fastcall sub_6069BF80(int result, _DWORD *a2, float *a3);  /* 0x0069bf80 */
int __fastcall sub_6069C03C(int result, int a2, int a3, int a4, int a5);  /* 0x0069c03c */
int __fastcall sub_6069C058(int a1, int a2);  /* 0x0069c058 */
int __fastcall sub_6069C0C0(int a1, int a2);  /* 0x0069c0c0 */
int __fastcall sub_6069C17C(_DWORD *a1);  /* 0x0069c17c */
int __fastcall sub_6069C1A8(int a1, int a2, int a3, int a4);  /* 0x0069c1a8 */
void __fastcall sub_6069C1BC(int a1);  /* 0x0069c1bc */
int __fastcall sub_6069C1EC(int a1);  /* 0x0069c1ec */
int __fastcall Actor_mamemariofor_OBJpipe_build(int a1);  /* 0x0069c220 */
int __fastcall sub_6069C2D4(_DWORD *a1);  /* 0x0069c2d4 */
int __fastcall sub_6069C30C(int a1);  /* 0x0069c30c */
int __fastcall Actor_mamemariofor_OBJpipe_2_build(int a1);  /* 0x0069c3c4 */
int __fastcall sub_6069C478(_DWORD *a1);  /* 0x0069c478 */
int __fastcall sub_6069C4B0(int a1);  /* 0x0069c4b0 */
int __fastcall Actor_mamemariofor_OBJpipe_3_build(int a1);  /* 0x0069c568 */
int __fastcall sub_6069C61C(_DWORD *a1);  /* 0x0069c61c */
int __fastcall sub_6069C65C(int a1);  /* 0x0069c65c */
int __fastcall Actor_mamemariofor_OBJpipe_4_build(int a1);  /* 0x0069c714 */
int __fastcall sub_6069C7C8(_DWORD *a1);  /* 0x0069c7c8 */
int __fastcall sub_6069C800(int a1);  /* 0x0069c800 */
int __fastcall sub_6069C900(_DWORD *a1);  /* 0x0069c900 */
bool __fastcall sub_6069C9A8(int a1);  /* 0x0069c9a8 */
bool __fastcall sub_6069C9C8(int a1);  /* 0x0069c9c8 */
bool __fastcall sub_6069C9E8(int a1, int a2, int a3);  /* 0x0069c9e8 */
unsigned int __fastcall sub_6069CA20(int a1);  /* 0x0069ca20 */
int __fastcall sub_6069CA74(_DWORD *a1);  /* 0x0069ca74 */
bool __fastcall sub_6069CA9C(int a1, int a2);  /* 0x0069ca9c */
int __fastcall sub_6069CC14(int a1);  /* 0x0069cc14 */
int __fastcall sub_6069CD38(int a1);  /* 0x0069cd38 */
int __fastcall sub_6069CD50(int a1, int a2);  /* 0x0069cd50 */
int __fastcall sub_6069CE7C(int a1);  /* 0x0069ce7c */
bool __fastcall sub_6069CE94(int a1, int a2);  /* 0x0069ce94 */
void __fastcall sub_6069D080(_DWORD *a1);  /* 0x0069d080 */
int __fastcall sub_6069D164(_DWORD *a1);  /* 0x0069d164 */
int __fastcall sub_6069D2D0(_DWORD *a1, int a2, int a3, int a4);  /* 0x0069d2d0 */
int __fastcall sub_6069D354(int a1);  /* 0x0069d354 */
int __fastcall sub_6069D760(int a1, int a2, _DWORD *a3);  /* 0x0069d760 */
int __fastcall sub_6069DA08(int a1, int a2, int a3, int a4, int a5);  /* 0x0069da08 */
int __fastcall sub_6069DBD8(int *a1, int a2);  /* 0x0069dbd8 */
int __fastcall sub_6069DFE8(int a1, float *a2, int a3, int a4, int a5, char a6, char a7);  /* 0x0069dfe8 */
int __fastcall sub_6069E178(int a1, _DWORD *a2);  /* 0x0069e178 */
int __fastcall sub_6069E56C(int a1, _DWORD *a2, int a3, int a4);  /* 0x0069e56c */
int __fastcall sub_6069E5A4(int a1, int a2, int a3, int a4, int a5);  /* 0x0069e5a4 */
int __fastcall sub_6069E5F4(int a1);  /* 0x0069e5f4 */
int __fastcall sub_6069E608(int a1, int a2);  /* 0x0069e608 */
bool __fastcall sub_6069E678(int a1);  /* 0x0069e678 */
int __fastcall sub_6069E698(int a1, int a2, int a3, int a4, int a5, int a6, int a7);  /* 0x0069e698 */
int __fastcall sub_6069E88C(int a1);  /* 0x0069e88c */
int __fastcall sub_6069E90C(int a1, int a2, int a3, int a4);  /* 0x0069e90c */
bool __fastcall sub_6069E924(int a1, int a2);  /* 0x0069e924 */
int __fastcall sub_6069EA28(int a1);  /* 0x0069ea28 */
int __fastcall sub_6069EB94(int a1);  /* 0x0069eb94 */
int __fastcall sub_6069EE24(int a1);  /* 0x0069ee24 */
int __fastcall sub_6069F084(int a1);  /* 0x0069f084 */
unsigned int __fastcall sub_6069F0F8(int a1, int a2);  /* 0x0069f0f8 */
int __fastcall sub_6069F3C0(int a1);  /* 0x0069f3c0 */
bool __fastcall sub_6069F3F0(int a1, int a2);  /* 0x0069f3f0 */
int __fastcall sub_6069F568(int a1);  /* 0x0069f568 */
int __fastcall sub_6069F758(int a1);  /* 0x0069f758 */
int __fastcall sub_6069FA10(int a1);  /* 0x0069fa10 */
int __fastcall sub_6069FC80(int a1);  /* 0x0069fc80 */
unsigned int __fastcall sub_6069FE1C(unsigned int result, int a2, int a3);  /* 0x0069fe1c */
int __fastcall sub_606A0088(int a1);  /* 0x006a0088 */
bool __fastcall sub_606A00B8(int a1, int a2);  /* 0x006a00b8 */
int __fastcall sub_606A0230(int a1);  /* 0x006a0230 */
int __fastcall sub_606A0438(int a1);  /* 0x006a0438 */
int __fastcall sub_606A06F4(int a1);  /* 0x006a06f4 */
int __fastcall sub_606A0954(int a1);  /* 0x006a0954 */
unsigned int __fastcall sub_606A0AF0(unsigned int result, int a2, int a3);  /* 0x006a0af0 */
int __fastcall sub_606A0D5C(int a1);  /* 0x006a0d5c */
bool __fastcall sub_606A0D8C(int a1, int a2);  /* 0x006a0d8c */
int __fastcall sub_606A0F04(int a1);  /* 0x006a0f04 */
int __fastcall sub_606A110C(int a1);  /* 0x006a110c */
int __fastcall sub_606A1374(int a1);  /* 0x006a1374 */
int __fastcall sub_606A15E4(int a1);  /* 0x006a15e4 */
unsigned int __fastcall sub_606A1774(int a1, int a2);  /* 0x006a1774 */
int __fastcall sub_606A19BC(int a1);  /* 0x006a19bc */
int __fastcall sub_606A19D8(int a1);  /* 0x006a19d8 */
bool __fastcall sub_606A1A14(int a1, int a2);  /* 0x006a1a14 */
int __fastcall sub_606A1B8C(int a1);  /* 0x006a1b8c */
int __fastcall sub_606A1DA8(int a1);  /* 0x006a1da8 */
int __fastcall sub_606A1E14(int a1);  /* 0x006a1e14 */
int __fastcall sub_606A1E60(int a1);  /* 0x006a1e60 */
int __fastcall sub_606A1ECC(int a1);  /* 0x006a1ecc */
int __fastcall sub_606A1F24(int a1);  /* 0x006a1f24 */
int __fastcall sub_606A2040(int a1);  /* 0x006a2040 */
int __fastcall sub_606A22C0(int a1);  /* 0x006a22c0 */
bool __fastcall sub_606A2450(int a1);  /* 0x006a2450 */
bool __fastcall sub_606A2470(int a1);  /* 0x006a2470 */
bool __fastcall sub_606A2490(int a1, int a2, int a3);  /* 0x006a2490 */
int __fastcall sub_606A24C8(_DWORD *a1);  /* 0x006a24c8 */
int __fastcall sub_606A2518(int a1);  /* 0x006a2518 */
int __fastcall sub_606A254C(int result);  /* 0x006a254c */
bool __fastcall sub_606A25B8(int a1, int a2);  /* 0x006a25b8 */
void __fastcall sub_606A26BC(int a1);  /* 0x006a26bc */
int __fastcall sub_606A278C(int a1);  /* 0x006a278c */
bool __fastcall sub_606A2A0C(int a1, int a2);  /* 0x006a2a0c */
int __fastcall sub_606A2B84(int a1);  /* 0x006a2b84 */
int __fastcall sub_606A2C58(int a1, int a2);  /* 0x006a2c58 */
bool __fastcall sub_606A2DA8(int a1, int a2);  /* 0x006a2da8 */
int __fastcall sub_606A2F20(int a1);  /* 0x006a2f20 */
bool __fastcall sub_606A30AC(int a1, int a2);  /* 0x006a30ac */
int __fastcall sub_606A3224(int a1);  /* 0x006a3224 */
int __fastcall sub_606A33F0(int *a1);  /* 0x006a33f0 */
int __fastcall sub_606A3474(int a1);  /* 0x006a3474 */
bool __fastcall sub_606A349C(int a1, int a2);  /* 0x006a349c */
int __fastcall sub_606A35A0(Actor *a1);  /* 0x006a35a0 */
int __fastcall env_snow_ref(int a1);  /* 0x006a37a8 */
int __fastcall sub_606A42E4(int a1);  /* 0x006a42e4 */
void __fastcall sub_606A42FC(Actor *a1);  /* 0x006a42fc */
int __fastcall sub_606A436C(Actor *a1);  /* 0x006a436c */
int __fastcall sub_606A43E0(int a1);  /* 0x006a43e0 */
int __fastcall sub_606A43FC(int a1);  /* 0x006a43fc */
int __fastcall sub_606A4400(int a1);  /* 0x006a4400 */
int __fastcall sub_606A4578(int a1);  /* 0x006a4578 */
int __fastcall sub_606A4748(int a1);  /* 0x006a4748 */
int __fastcall sub_606A4F94(int a1);  /* 0x006a4f94 */
void __fastcall sub_606A4FAC(Actor *a1);  /* 0x006a4fac */
int __fastcall sub_606A501C(Actor *a1);  /* 0x006a501c */
int __fastcall sub_606A5090(int a1);  /* 0x006a5090 */
int __fastcall sub_606A5094(int a1);  /* 0x006a5094 */
int __fastcall sub_606A5188(int a1);  /* 0x006a5188 */
int __fastcall sub_606A541C(float *a1);  /* 0x006a541c */
int __fastcall sub_606A54B0(int a1, int a2);  /* 0x006a54b0 */
bool __fastcall sub_606A5578(int a1, int a2);  /* 0x006a5578 */
void __fastcall sub_606A56F0(int a1);  /* 0x006a56f0 */
int __fastcall sub_606A5740(int a1);  /* 0x006a5740 */
int __fastcall sub_606A5794(int a1, int a2);  /* 0x006a5794 */
int __fastcall sub_606A5904(int a1);  /* 0x006a5904 */
int __fastcall sub_606A591C(int a1);  /* 0x006a591c */
int __fastcall sub_606A5A28(int a1, int a2, int a3, int a4);  /* 0x006a5a28 */
int __fastcall sub_606A5B34(int a1, int a2);  /* 0x006a5b34 */
bool __fastcall sub_606A5C00(int a1, int a2);  /* 0x006a5c00 */
void __fastcall sub_606A5DEC(_DWORD *a1);  /* 0x006a5dec */
int __fastcall sub_606A5ED0(_DWORD *a1);  /* 0x006a5ed0 */
int __fastcall sub_606A5FB8(int a1, int a2);  /* 0x006a5fb8 */
int __fastcall sub_606A60D4(int a1, int a2);  /* 0x006a60d4 */
int __fastcall sub_606A60EC(int a1, int a2, int a3);  /* 0x006a60ec */
int __fastcall sub_606A6130(int a1);  /* 0x006a6130 */
int __fastcall sub_606A61A8(int a1);  /* 0x006a61a8 */
int __fastcall sub_606A6298(int a1, int a2);  /* 0x006a6298 */
int __fastcall sub_606A6418(_DWORD *a1);  /* 0x006a6418 */
int __fastcall sub_606A6464(int a1, int a2, int a3, int a4);  /* 0x006a6464 */
bool __fastcall sub_606A64A0(int a1);  /* 0x006a64a0 */
bool __fastcall sub_606A64C0(int a1);  /* 0x006a64c0 */
bool __fastcall sub_606A64E0(int a1, int a2, int a3);  /* 0x006a64e0 */
int __fastcall sub_606A6518(int a1);  /* 0x006a6518 */
int __fastcall sub_606A663C(int a1, int a2, int a3, int a4);  /* 0x006a663c */
int __fastcall sub_606A6664(int a1);  /* 0x006a6664 */
int __fastcall sub_606A6780(int a1, int a2, int a3, int a4);  /* 0x006a6780 */
int __fastcall sub_606A6930(int a1, _DWORD *a2);  /* 0x006a6930 */
int __fastcall sub_606A6AAC(int a1, _DWORD *a2);  /* 0x006a6aac */
bool __fastcall sub_606A6AC8(int a1, int a2);  /* 0x006a6ac8 */
int __fastcall sub_606A6CB4(int a1);  /* 0x006a6cb4 */
bool __fastcall sub_606A7018(int a1, int a2);  /* 0x006a7018 */
int __fastcall sub_606A72D4(int a1, int a2);  /* 0x006a72d4 */
int __fastcall Actor_neshikutariOBJ_parent_build(int a1);  /* 0x006a73f0 */
int __fastcall sub_606A7574(int a1);  /* 0x006a7574 */
int __fastcall sub_606A76C4(int a1);  /* 0x006a76c4 */
int __fastcall sub_606A7794(int a1, int a2);  /* 0x006a7794 */
int __fastcall sub_606A79A8(int a1, int a2, int a3, int a4);  /* 0x006a79a8 */
int __fastcall sub_606A79CC(int a1);  /* 0x006a79cc */
int __fastcall sub_606A79E0(int a1, int a2);  /* 0x006a79e0 */
bool __fastcall sub_606A7A04(int a1, int a2);  /* 0x006a7a04 */
void __fastcall sub_606A7BEC(int a1);  /* 0x006a7bec */
int __fastcall sub_606A7C24(int a1);  /* 0x006a7c24 */
int __fastcall sub_606A7D14(int result, int a2);  /* 0x006a7d14 */
void __fastcall sub_606A7D28(int a1, unsigned int a2, int a3, int a4);  /* 0x006a7d28 */
int __fastcall sub_606A7E64(int *a1, int a2, int a3);  /* 0x006a7e64 */
int __fastcall sub_606A7E80(int a1, int a2);  /* 0x006a7e80 */
void __fastcall sub_606A7EB8(int a1, unsigned int a2, unsigned int a3);  /* 0x006a7eb8 */
int __fastcall sub_606A7F18(int a1);  /* 0x006a7f18 */
int __fastcall sub_606A8084(int a1);  /* 0x006a8084 */
int __fastcall sub_606A8198(int a1);  /* 0x006a8198 */
int __fastcall sub_606A81C0(int a1);  /* 0x006a81c0 */
bool __fastcall sub_606A8380(int a1);  /* 0x006a8380 */
bool __fastcall sub_606A83A0(int a1);  /* 0x006a83a0 */
bool __fastcall sub_606A83C0(int a1, int a2, int a3);  /* 0x006a83c0 */
int __fastcall sub_606A83F8(int a1);  /* 0x006a83f8 */
float __fastcall sub_606A855C(int a1);  /* 0x006a855c */
bool __fastcall sub_606A8910(int a1, int a2);  /* 0x006a8910 */
void __fastcall sub_606A8AFC(int a1);  /* 0x006a8afc */
int __fastcall sub_606A8BCC(int a1);  /* 0x006a8bcc */
int __fastcall sub_606A8D48(int a1);  /* 0x006a8d48 */
int __fastcall sub_606A8D54(_BYTE *a1);  /* 0x006a8d54 */
int __fastcall sub_606A8D78(int a1);  /* 0x006a8d78 */
int __fastcall sub_606A8F0C(int a1);  /* 0x006a8f0c */
int __fastcall sub_606A8FA4(int a1, int a2);  /* 0x006a8fa4 */
int __fastcall sub_606A9094(_DWORD *a1);  /* 0x006a9094 */
int __fastcall sub_606A910C(unsigned __int8 *a1);  /* 0x006a910c */
bool __fastcall sub_606A915C(int a1, int a2);  /* 0x006a915c */
int __fastcall sub_606A9260(Actor *a1);  /* 0x006a9260 */
int __fastcall sub_606A9370(int a1, int a2);  /* 0x006a9370 */
int __fastcall sub_606A93E4(int a1, int a2, int a3);  /* 0x006a93e4 */
int __fastcall sub_606A9498(int a1, int a2, int a3, int a4);  /* 0x006a9498 */
int __fastcall sub_606A94C0(float *a1);  /* 0x006a94c0 */
int __fastcall sub_606A968C(int a1, int a2);  /* 0x006a968c */
bool __fastcall sub_606A96D8(int a1);  /* 0x006a96d8 */
bool __fastcall sub_606A96F8(int a1);  /* 0x006a96f8 */
bool __fastcall sub_606A9718(int a1, int a2, int a3);  /* 0x006a9718 */
int __fastcall sub_606A9750(_DWORD *a1);  /* 0x006a9750 */
int __fastcall sub_606A97A0(int a1);  /* 0x006a97a0 */
int __fastcall sub_606A9924(int a1);  /* 0x006a9924 */
bool __fastcall sub_606A9940(int a1, int a2);  /* 0x006a9940 */
int __fastcall sub_606A9B2C(int a1);  /* 0x006a9b2c */
bool __fastcall sub_606A9BB8(int a1, int a2);  /* 0x006a9bb8 */
int __fastcall sub_606A9EF4(int a1, int a2);  /* 0x006a9ef4 */
bool __fastcall sub_606AA044(int a1, int a2);  /* 0x006aa044 */
int __fastcall sub_606AA4FC(int a1, int a2, int a3, int a4);  /* 0x006aa4fc */
int __fastcall sub_606AA510(int a1);  /* 0x006aa510 */
int __fastcall sub_606AA584(int a1);  /* 0x006aa584 */
int __fastcall sub_606AA5E4(int a1);  /* 0x006aa5e4 */
int __fastcall sub_606AA628(int a1);  /* 0x006aa628 */
bool __fastcall sub_606AA7EC(int a1);  /* 0x006aa7ec */
bool __fastcall sub_606AA800(int a1, int a2);  /* 0x006aa800 */
void __fastcall sub_606AA9EC(int a1);  /* 0x006aa9ec */
int __fastcall sub_606AAA3C(int a1);  /* 0x006aaa3c */
bool __fastcall sub_606AABB0(int a1, int a2);  /* 0x006aabb0 */
int __fastcall sub_606AAFCC(_DWORD *a1);  /* 0x006aafcc */
int __fastcall sub_606AB038(int result, int a2);  /* 0x006ab038 */
int __fastcall sub_606AB0AC(int a1, int a2);  /* 0x006ab0ac */
bool __fastcall sub_606AB2D0(int a1, int a2);  /* 0x006ab2d0 */
int __fastcall sub_606AB448(Actor *a1);  /* 0x006ab448 */
bool __fastcall sub_606AB4B4(int a1, int a2);  /* 0x006ab4b4 */
int __fastcall sub_606AB8FC(int a1, int a2, int a3, int a4);  /* 0x006ab8fc */
int __fastcall sub_606AB924(int a1);  /* 0x006ab924 */
int __fastcall sub_606ABD80(int a1);  /* 0x006abd80 */
int __fastcall sub_606ABE20(int a1);  /* 0x006abe20 */
bool __fastcall sub_606ABF88(int a1, int a2);  /* 0x006abf88 */
void __fastcall sub_606AC174(int a1);  /* 0x006ac174 */
int __fastcall sub_606AC1C4(int a1);  /* 0x006ac1c4 */
int __fastcall sub_606AC460(int a1);  /* 0x006ac460 */
int __fastcall sub_606AC510(int a1);  /* 0x006ac510 */
bool __fastcall sub_606AC788(int a1, int a2);  /* 0x006ac788 */
int __fastcall sub_606ACCEC(int a1);  /* 0x006accec */
int __fastcall sub_606ACD9C(int a1);  /* 0x006acd9c */
bool __fastcall sub_606ACDF0(int a1);  /* 0x006acdf0 */
int __fastcall Actor_parentchild_obuje_child_fort_rock_RDashfor_build(int a1);  /* 0x006acfdc */
int __fastcall sub_606AD01C(int a1);  /* 0x006ad01c */
bool __fastcall sub_606AD028(int a1, int a2);  /* 0x006ad028 */
int __fastcall sub_606AD12C(int a1);  /* 0x006ad12c */
int __fastcall sub_606AD180(int a1, int a2);  /* 0x006ad180 */
int __fastcall sub_606AD2F4(int a1, int a2, int a3, int a4);  /* 0x006ad2f4 */
int __fastcall sub_606AD31C(int a1);  /* 0x006ad31c */
int __fastcall sub_606AD38C(int a1);  /* 0x006ad38c */
int __fastcall sub_606AD550(int a1);  /* 0x006ad550 */
int __fastcall sub_606AD56C(int a1);  /* 0x006ad56c */
int __fastcall sub_606AD6EC(int a1);  /* 0x006ad6ec */
bool __fastcall sub_606AD860(int a1, int a2);  /* 0x006ad860 */
int __fastcall sub_606ADA4C(Actor *a1);  /* 0x006ada4c */
int __fastcall sub_606ADA80(int result);  /* 0x006ada80 */
int __fastcall sub_606ADD78(_DWORD *a1);  /* 0x006add78 */
int __fastcall sub_606ADDB4(int a1);  /* 0x006addb4 */
int __fastcall sub_606ADFD4(int a1);  /* 0x006adfd4 */
int __fastcall sub_606AE084(int a1);  /* 0x006ae084 */
int __fastcall sub_606AE1F0(int result, unsigned int a2);  /* 0x006ae1f0 */
int __fastcall sub_606AE218(int result, char a2, unsigned int a3);  /* 0x006ae218 */
int __fastcall sub_606AE22C(int a1, unsigned int a2);  /* 0x006ae22c */
int __fastcall sub_606AE248(int a1, _DWORD *a2, unsigned int a3);  /* 0x006ae248 */
bool __fastcall sub_606AE294(int a1, int a2);  /* 0x006ae294 */
void __fastcall sub_606AE398(Actor *a1);  /* 0x006ae398 */
int __fastcall sub_606AE3C8(Actor *a1);  /* 0x006ae3c8 */
int __fastcall Actor_child_tree_build(int a1);  /* 0x006ae7d8 */
int __fastcall sub_606AE7F4(int a1, int a2);  /* 0x006ae7f4 */
int __fastcall sub_606AE938(int a1);  /* 0x006ae938 */
int __fastcall sub_606AEC9C(int a1);  /* 0x006aec9c */
int __fastcall SE_OBJ_PALM_SWING_ref(int a1);  /* 0x006aef8c */
int __fastcall sub_606AF2F8(int a1);  /* 0x006af2f8 */
void __fastcall sub_606AF450(int a1);  /* 0x006af450 */
int __fastcall sub_606AF5CC(int a1, int a2, int a3, int a4);  /* 0x006af5cc */
int __fastcall sub_606AF5F8(int result, int a2);  /* 0x006af5f8 */
bool __fastcall sub_606AF650(int a1, int a2);  /* 0x006af650 */
void __fastcall sub_606AF838(int a1);  /* 0x006af838 */
int __fastcall sub_606AF868(int a1);  /* 0x006af868 */
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
int __fastcall sub_606B226C(int a1, int a2);  /* 0x006b226c */
int __fastcall sub_606B22A4(int a1, _DWORD *a2);  /* 0x006b22a4 */
int __fastcall sub_606B22E8(int a1, int a2);  /* 0x006b22e8 */
int __fastcall sub_606B22F4(int result, _DWORD *a2);  /* 0x006b22f4 */
int __fastcall sub_606B2304(int a1, int a2);  /* 0x006b2304 */
int __fastcall sub_606B232C(int a1);  /* 0x006b232c */
int __fastcall sub_606B2334(int a1);  /* 0x006b2334 */
int __fastcall State_MovementHandler_dtorFree(int a1);  /* 0x006b235c */
int __fastcall sub_606B243C(int result);  /* 0x006b243c */
int __fastcall SE_OBJ_COIN_POP_UP_S_ref(int a1);  /* 0x006b2578 */
int __fastcall sub_606B2678(int result);  /* 0x006b2678 */
int __fastcall sub_606B2688(int a1);  /* 0x006b2688 */
int __fastcall sub_606B2730(int a1);  /* 0x006b2730 */
int __fastcall sub_606B281C(int result);  /* 0x006b281c */
int __fastcall sub_606B2834(int result);  /* 0x006b2834 */
int __fastcall sub_606B2940(int a1);  /* 0x006b2940 */
int __fastcall sub_606B2A18(int a1, unsigned int a2, unsigned int a3, char a4, char a5, char a6);  /* 0x006b2a18 */
int __fastcall sub_606B2C4C(int a1);  /* 0x006b2c4c */
int __fastcall sub_606B2DE0(int a1);  /* 0x006b2de0 */
int __fastcall sub_606B2DE8(int result);  /* 0x006b2de8 */
int __fastcall sub_606B2F00(int result);  /* 0x006b2f00 */
int __fastcall sub_606B3030(int a1, int a2);  /* 0x006b3030 */
int __fastcall sub_606B3068(int a1, _DWORD *a2);  /* 0x006b3068 */
int __fastcall sub_606B30AC(int a1, int a2);  /* 0x006b30ac */
int __fastcall sub_606B30B8(int result, _DWORD *a2);  /* 0x006b30b8 */
int __fastcall sub_606B30C8(int a1, int a2);  /* 0x006b30c8 */
int __fastcall sub_606B30F0(int a1);  /* 0x006b30f0 */
int __fastcall sub_606B30F8(int a1);  /* 0x006b30f8 */
int __fastcall sub_606B3444(struct sead_IDisposer *a1);  /* 0x006b3444 */
int __fastcall sub_606B35AC(int result);  /* 0x006b35ac */
int __fastcall sub_606B35BC(_DWORD *a1);  /* 0x006b35bc */
int __fastcall sub_606B3690(_DWORD *a1, unsigned int a2, unsigned int a3, char a4, char a5, char a6);  /* 0x006b3690 */
int __fastcall sub_606B37CC(_DWORD *a1, int a2);  /* 0x006b37cc */
int __fastcall sub_606B3830(_DWORD *a1, unsigned int a2);  /* 0x006b3830 */
int __fastcall sub_606B3858(_DWORD *a1);  /* 0x006b3858 */
int __fastcall sub_606B3928(int result);  /* 0x006b3928 */
int __fastcall sub_606B395C(int result, int a2, char a3, char a4, int a5);  /* 0x006b395c */
int __fastcall sub_606B39DC(int result);  /* 0x006b39dc */
unsigned int __fastcall sub_606B4928(int a1, int a2, int a3);  /* 0x006b4928 */
int __fastcall sub_606B4C80(int a1);  /* 0x006b4c80 */
int __fastcall sub_606B4E90(int a1, int a2, int a3, __int64 *a4);  /* 0x006b4e90 */
int __fastcall sub_606B4F08(int a1, int32x2_t *a2);  /* 0x006b4f08 */
int __fastcall sub_606B51C0(int a1);  /* 0x006b51c0 */
int __fastcall sub_606B5360(int a1);  /* 0x006b5360 */
int __fastcall sub_606B5548(int a1);  /* 0x006b5548 */
int __fastcall sub_606B5768(int a1);  /* 0x006b5768 */
int __fastcall sub_606B57AC(int result);  /* 0x006b57ac */
int __fastcall sub_606B57C8(int result, int a2);  /* 0x006b57c8 */
int __fastcall sub_606B5970(int result);  /* 0x006b5970 */
int __fastcall sub_606B5988(int result);  /* 0x006b5988 */
int __fastcall sub_606B59A0(int result);  /* 0x006b59a0 */
int __fastcall sub_606B59D8(int a1);  /* 0x006b59d8 */
bool __fastcall sub_606B5C28(int a1, int a2);  /* 0x006b5c28 */
void __fastcall sub_606B5DA0(int a1);  /* 0x006b5da0 */
int __fastcall sub_606B5E10(int a1);  /* 0x006b5e10 */
int __fastcall sub_606B5E88(int a1);  /* 0x006b5e88 */
bool __fastcall sub_606B5E94(int a1);  /* 0x006b5e94 */
int __fastcall sub_606B5ED8(int a1, int a2);  /* 0x006b5ed8 */
int __fastcall sub_606B5FF4(int a1);  /* 0x006b5ff4 */
int __fastcall sub_606B610C(int result);  /* 0x006b610c */
int __fastcall sub_606B611C(int a1);  /* 0x006b611c */
int __fastcall sub_606B61B0(int a1);  /* 0x006b61b0 */
int __fastcall sub_606B62C8(int a1);  /* 0x006b62c8 */
int __fastcall sub_606B6400(int a1);  /* 0x006b6400 */
int __fastcall sub_606B65D8(int a1);  /* 0x006b65d8 */
int __fastcall sub_606B67C0(int a1, int a2, int a3, int a4);  /* 0x006b67c0 */
int __fastcall sub_606B67E8(_DWORD *a1, int a2);  /* 0x006b67e8 */
int __fastcall sub_606B6A94(int a1, _DWORD *a2);  /* 0x006b6a94 */
int __fastcall sub_606B6C50(int result, int a2, int a3);  /* 0x006b6c50 */
int __fastcall sub_606B6CA4(int result, int a2, int a3);  /* 0x006b6ca4 */
bool __fastcall sub_606B6EAC(int a1, int a2);  /* 0x006b6eac */
int __fastcall sub_606B6F78(_DWORD *a1, int a2);  /* 0x006b6f78 */
int __fastcall sub_606B72B4(_DWORD *a1);  /* 0x006b72b4 */
int __fastcall sub_606B7630(int a1, int a2);  /* 0x006b7630 */
bool __fastcall sub_606B7714(int a1, int a2);  /* 0x006b7714 */
void __fastcall sub_606B7818(int a1);  /* 0x006b7818 */
int __fastcall sub_606B7868(int a1);  /* 0x006b7868 */
int __fastcall sub_606B7B88(_DWORD *a1);  /* 0x006b7b88 */
int __fastcall sub_606B7DB0(int a1);  /* 0x006b7db0 */
int __fastcall sub_606B7FD0(int a1);  /* 0x006b7fd0 */
int __fastcall sub_606B8004(int a1);  /* 0x006b8004 */
int __fastcall sub_606B8098(int result, int a2);  /* 0x006b8098 */
int __fastcall sub_606B8570(int result);  /* 0x006b8570 */
int __fastcall sub_606B8588(int result);  /* 0x006b8588 */
int __fastcall sub_606B85A0(int result);  /* 0x006b85a0 */
bool __fastcall sub_606B85E8(int a1, int a2);  /* 0x006b85e8 */
void __fastcall sub_606B8760(_DWORD *a1);  /* 0x006b8760 */
int __fastcall sub_606B8800(_DWORD *a1);  /* 0x006b8800 */
int __fastcall sub_606B88A4(int a1);  /* 0x006b88a4 */
bool __fastcall sub_606B88B0(int a1);  /* 0x006b88b0 */
int __fastcall sub_606B89A4(_DWORD *a1);  /* 0x006b89a4 */
int __fastcall sub_606B8A08(_DWORD *a1, int a2);  /* 0x006b8a08 */
bool __fastcall sub_606B8CD0(int a1, int a2);  /* 0x006b8cd0 */
int __fastcall sub_606B8EBC(int a1);  /* 0x006b8ebc */
int __fastcall sub_606B8F30(int a1, int a2);  /* 0x006b8f30 */
int __fastcall sub_606B93A4(int a1, int a2, int32x4_t **a3);  /* 0x006b93a4 */
int __fastcall sub_606B966C(int a1);  /* 0x006b966c */
int __fastcall sub_606B99AC(_DWORD *a1);  /* 0x006b99ac */
int __fastcall sub_606B9E9C(_DWORD *a1);  /* 0x006b9e9c */
int __fastcall sub_606BA084(int a1);  /* 0x006ba084 */
int __fastcall sub_606BA1C0(int a1);  /* 0x006ba1c0 */
int __fastcall sub_606BA3AC(int a1, int a2, int a3, int a4);  /* 0x006ba3ac */
int __fastcall sub_606BA3D4(_DWORD *a1);  /* 0x006ba3d4 */
bool __fastcall sub_606BA7B0(int a1, int a2);  /* 0x006ba7b0 */
void __fastcall sub_606BA8B4(Actor *a1);  /* 0x006ba8b4 */
int __fastcall sub_606BA8E4(Actor *a1);  /* 0x006ba8e4 */
int __fastcall sub_606BA968(int *a1, int *a2, int a3);  /* 0x006ba968 */
int __fastcall sub_606BAAFC(unsigned int a1);  /* 0x006baafc */
int __fastcall sub_606BAB1C(int *a1, int *a2, int a3);  /* 0x006bab1c */
int __fastcall Actor_Player_level_miTag_build(int a1);  /* 0x006bab74 */
int __fastcall sub_606BAB90(int a1, int a2);  /* 0x006bab90 */
bool __fastcall sub_606BAD7C(int a1, int a2);  /* 0x006bad7c */
int __fastcall sub_606BAF64(Actor *a1);  /* 0x006baf64 */
int __fastcall sub_606BB22C(int a1);  /* 0x006bb22c */
int __fastcall sub_606BB4D8(int a1);  /* 0x006bb4d8 */
bool __fastcall sub_606BB528(int a1, int a2);  /* 0x006bb528 */
void __fastcall sub_606BB62C(int a1);  /* 0x006bb62c */
int __fastcall sub_606BB68C(int a1);  /* 0x006bb68c */
int __fastcall sub_606BB794(int result);  /* 0x006bb794 */
int __fastcall sub_606BB7B8(int a1);  /* 0x006bb7b8 */
int __fastcall sub_606BB874(int a1, unsigned int a2, int a3, int a4, int a5, int a6, int a7, int a8);  /* 0x006bb874 */
int __fastcall sub_606BBA3C(int a1);  /* 0x006bba3c */
int __fastcall sub_606BBDB8(int a1, int a2);  /* 0x006bbdb8 */
int __fastcall sub_606BBDF0(int a1, _DWORD *a2);  /* 0x006bbdf0 */
int __fastcall sub_606BBE34(int a1, int a2);  /* 0x006bbe34 */
int __fastcall sub_606BBE40(int result, _DWORD *a2);  /* 0x006bbe40 */
int __fastcall sub_606BBE50(int a1, int a2);  /* 0x006bbe50 */
int __fastcall sub_606BBE78(int a1);  /* 0x006bbe78 */
int __fastcall sub_606BBE80(int a1);  /* 0x006bbe80 */
int __fastcall sub_606BC028(int a1, int (__fastcall ***a2)(_DWORD, int));  /* 0x006bc028 */
int __fastcall sub_606BC048(int a1, int a2);  /* 0x006bc048 */
int __fastcall sub_606BC0B4(unsigned int *a1, int a2);  /* 0x006bc0b4 */
int __fastcall PowBlock_ctor(_DWORD *a1);  /* 0x006bc194 */
int __fastcall sub_606BC2D4(int a1);  /* 0x006bc2d4 */
int __fastcall sub_606BC4E8(int a1);  /* 0x006bc4e8 */
int __fastcall sub_606BC598(int a1);  /* 0x006bc598 */
int __fastcall sub_606BC6FC(int result);  /* 0x006bc6fc */
int __fastcall sub_606BC70C(int a1);  /* 0x006bc70c */
int __fastcall sub_606BC76C(int a1);  /* 0x006bc76c */
int __fastcall PowBlock_onCreate(int a1);  /* 0x006bcb34 */
int __fastcall sub_606BCDA4(int a1);  /* 0x006bcda4 */
unsigned int __fastcall sub_606BD03C(unsigned int result, _DWORD *a2);  /* 0x006bd03c */
int __fastcall sub_606BD27C(int result, _DWORD *a2);  /* 0x006bd27c */
int __fastcall sub_606BD514(int result, int a2, int a3);  /* 0x006bd514 */
int __fastcall PowBlock_vf63(int a1);  /* 0x006bd728 */
int __fastcall PowBlock_vf12(int a1, int a2, int a3, int a4);  /* 0x006bd734 */
unsigned int __fastcall sub_606BD814(unsigned int result, int a2);  /* 0x006bd814 */
int __fastcall PowBlock_vf64(int a1);  /* 0x006bdb70 */
int __fastcall PowBlock_vf62(int result, int a2, int a3, int a4);  /* 0x006bdf54 */
int __fastcall PowBlock_vf21(_DWORD *a1, int a2, unsigned __int16 a3);  /* 0x006bdfc0 */
int __fastcall PowBlock_vf49(int result);  /* 0x006bdff0 */
int __fastcall PowBlock_vf50(int a1);  /* 0x006bdff8 */
int __fastcall PowBlock_vf52(_DWORD *a1);  /* 0x006bdffc */
int __fastcall PowBlock_vf54(int a1);  /* 0x006be084 */
int __fastcall PowBlock_vf53(_DWORD *a1);  /* 0x006be088 */
int __fastcall PowBlock_vf57(int a1);  /* 0x006be31c */
int __fastcall PowBlock_vf56(int a1);  /* 0x006be320 */
int __fastcall sub_606BE3E4(int a1, int a2);  /* 0x006be3e4 */
bool __fastcall PowBlock_vf0(int a1, int a2);  /* 0x006be4ec */
void __fastcall PowBlock_vf2(int a1);  /* 0x006be6d8 */
int __fastcall PowBlock_vf3(int a1);  /* 0x006be728 */
int __fastcall sub_606BE780(int a1);  /* 0x006be780 */
int __fastcall block_fly_ref(_DWORD *a1);  /* 0x006be84c */
int __fastcall sub_606BEAA4(_DWORD *a1);  /* 0x006beaa4 */
int __fastcall sub_606BEAE4(int a1, int a2, int a3, int a4);  /* 0x006beae4 */
int __fastcall sub_606BEB10(int a1);  /* 0x006beb10 */
int __fastcall sub_606BED40(int a1);  /* 0x006bed40 */
int __fastcall sub_606BED44(int a1);  /* 0x006bed44 */
int __fastcall sub_606BED74(_DWORD *a1);  /* 0x006bed74 */
int __fastcall sub_606BEDCC(int result, int a2);  /* 0x006bedcc */
bool __fastcall sub_606BEE44(int a1, int a2);  /* 0x006bee44 */
void __fastcall sub_606BF030(_DWORD *a1);  /* 0x006bf030 */
int __fastcall sub_606BF100(_DWORD *a1);  /* 0x006bf100 */
int __fastcall sub_606BF1D8(int a1);  /* 0x006bf1d8 */
int __fastcall sub_606BF368(int result);  /* 0x006bf368 */
int __fastcall sub_606BF378(int a1);  /* 0x006bf378 */
int __fastcall sub_606BF43C(int a1);  /* 0x006bf43c */
int __fastcall sub_606BF494(int a1);  /* 0x006bf494 */
int __fastcall sub_606BF55C(int a1);  /* 0x006bf55c */
int __fastcall sub_606BF588(float *a1);  /* 0x006bf588 */
bool __fastcall sub_606BF70C(int a1, int a2);  /* 0x006bf70c */
int __fastcall sub_606BF884(_DWORD *a1);  /* 0x006bf884 */
int __fastcall sub_606BFA14(int a1);  /* 0x006bfa14 */
bool __fastcall sub_606BFC24(int a1);  /* 0x006bfc24 */
int __fastcall sub_606BFD04(int a1);  /* 0x006bfd04 */
int __fastcall sub_606BFD2C(int a1, int a2, int a3, int a4);  /* 0x006bfd2c */
bool __fastcall sub_606BFD60(int a1, int a2);  /* 0x006bfd60 */
void __fastcall sub_606BFE64(int a1);  /* 0x006bfe64 */
int __fastcall sub_606BFEB4(int a1);  /* 0x006bfeb4 */
bool __fastcall sub_606C009C(int a1, int a2);  /* 0x006c009c */
int __fastcall sub_606C01A0(Actor *a1);  /* 0x006c01a0 */
int __fastcall sub_606C02C4(int a1);  /* 0x006c02c4 */
int __fastcall sub_606C0384(int a1);  /* 0x006c0384 */
bool __fastcall sub_606C0574(int a1, int a2);  /* 0x006c0574 */
void __fastcall sub_606C0678(Actor *a1);  /* 0x006c0678 */
int __fastcall sub_606C06A8(Actor *a1);  /* 0x006c06a8 */
int __fastcall sub_606C07D8(int a1, int a2, int a3, int a4);  /* 0x006c07d8 */
int __fastcall sub_606C0800(int a1);  /* 0x006c0800 */
bool __fastcall sub_606C0A3C(int a1);  /* 0x006c0a3c */
bool __fastcall sub_606C0A5C(int a1);  /* 0x006c0a5c */
bool __fastcall sub_606C0A7C(int a1, int a2, int a3);  /* 0x006c0a7c */
int __fastcall sub_606C0AB4(_DWORD *a1);  /* 0x006c0ab4 */
int __fastcall sub_606C0AF8(int a1);  /* 0x006c0af8 */
int __fastcall sub_606C0C74(int a1);  /* 0x006c0c74 */
bool __fastcall sub_606C0C9C(int a1, int a2);  /* 0x006c0c9c */
void __fastcall sub_606C0E14(int a1);  /* 0x006c0e14 */
int __fastcall sub_606C0E64(int a1);  /* 0x006c0e64 */
int __fastcall sub_606C0F40(int a1);  /* 0x006c0f40 */
int __fastcall sub_606C1020(int a1);  /* 0x006c1020 */
int __fastcall sub_606C102C(int a1);  /* 0x006c102c */
int __fastcall sub_606C1094(int a1);  /* 0x006c1094 */
int __fastcall sub_606C11C0(int a1);  /* 0x006c11c0 */
bool __fastcall sub_606C1294(Actor *a1);  /* 0x006c1294 */
int __fastcall sub_606C12CC(int a1);  /* 0x006c12cc */
int __fastcall sub_606C12E0(int a1);  /* 0x006c12e0 */
bool __fastcall sub_606C131C(int a1, int a2);  /* 0x006c131c */
int __fastcall sub_606C1420(Actor *a1);  /* 0x006c1420 */
int __fastcall sub_606C1644(int a1);  /* 0x006c1644 */
int __fastcall sub_606C18D0(int a1);  /* 0x006c18d0 */
bool __fastcall sub_606C1A4C(int a1);  /* 0x006c1a4c */
bool __fastcall sub_606C1A6C(int a1);  /* 0x006c1a6c */
bool __fastcall sub_606C1A8C(int a1, int a2, int a3);  /* 0x006c1a8c */
int __fastcall sub_606C1AC4(int a1);  /* 0x006c1ac4 */
int __fastcall sub_606C1B98(int a1, int a2, int a3, int a4);  /* 0x006c1b98 */
bool __fastcall sub_606C1BC0(int a1, int a2);  /* 0x006c1bc0 */
void __fastcall sub_606C1CC4(int a1);  /* 0x006c1cc4 */
int __fastcall sub_606C1D14(int a1);  /* 0x006c1d14 */
int __fastcall sub_606C1F24(int a1);  /* 0x006c1f24 */
int __fastcall sub_606C1F84(int a1);  /* 0x006c1f84 */
int __fastcall sub_606C1F94(int a1);  /* 0x006c1f94 */
int __fastcall sub_606C2144(int a1);  /* 0x006c2144 */
bool __fastcall sub_606C2508(int a1, int a2);  /* 0x006c2508 */
void __fastcall sub_606C260C(Actor *a1);  /* 0x006c260c */
int __fastcall sub_606C263C(Actor *a1);  /* 0x006c263c */
int __fastcall sub_606C2840(int result);  /* 0x006c2840 */
int __fastcall sub_606C289C(int a1);  /* 0x006c289c */
int __fastcall sub_606C28F8(int a1);  /* 0x006c28f8 */
int __fastcall sub_606C2B24(int a1, _BYTE *a2);  /* 0x006c2b24 */
int __fastcall sub_606C2B28(int a1, unsigned __int8 *a2, int a3);  /* 0x006c2b28 */
int __fastcall sub_606C2B2C(int a1);  /* 0x006c2b2c */
int __fastcall sub_606C2C48(int a1);  /* 0x006c2c48 */
int __fastcall sub_606C2E2C(int a1, int a2, int a3, int a4);  /* 0x006c2e2c */
int __fastcall sub_606C2E64(int a1);  /* 0x006c2e64 */
int __fastcall sub_606C2F6C(int result);  /* 0x006c2f6c */
int __fastcall sub_606C2F80(int a1);  /* 0x006c2f80 */
int __fastcall sub_606C3138(int a1);  /* 0x006c3138 */
int __fastcall sub_606C31A0(int a1);  /* 0x006c31a0 */
void __fastcall sub_606C3294(int a1);  /* 0x006c3294 */
int __fastcall sub_606C32E4(int a1);  /* 0x006c32e4 */
int __fastcall sub_606C352C(int a1);  /* 0x006c352c */
int __fastcall sub_606C3968(_DWORD *a1);  /* 0x006c3968 */
int __fastcall sub_606C39A8(int a1);  /* 0x006c39a8 */
int __fastcall sub_606C3B20(int a1);  /* 0x006c3b20 */
int __fastcall sub_606C3CD4(int a1);  /* 0x006c3cd4 */
int __fastcall sub_606C3DC0(int a1);  /* 0x006c3dc0 */
int __fastcall sub_606C3E70(int a1);  /* 0x006c3e70 */
int __fastcall sub_606C3FD8(int result, unsigned int a2);  /* 0x006c3fd8 */
int __fastcall sub_606C4000(int result, char a2, unsigned int a3);  /* 0x006c4000 */
int __fastcall sub_606C4014(int a1, unsigned int a2);  /* 0x006c4014 */
int __fastcall sub_606C4030(int a1, _DWORD *a2, unsigned int a3);  /* 0x006c4030 */
bool __fastcall sub_606C407C(int a1, int a2);  /* 0x006c407c */
void __fastcall sub_606C4180(Actor *a1);  /* 0x006c4180 */
int __fastcall sub_606C41B0(Actor *a1);  /* 0x006c41b0 */
int __fastcall sub_606C43D8(int result);  /* 0x006c43d8 */
int __fastcall sub_606C4454(int result);  /* 0x006c4454 */
int __fastcall sub_606C4498(int result);  /* 0x006c4498 */
int __fastcall sub_606C44EC(int result);  /* 0x006c44ec */
int __fastcall sub_606C4534(int result);  /* 0x006c4534 */
int __fastcall sub_606C4544(int a1);  /* 0x006c4544 */
int __fastcall sub_606C4608(int a1, unsigned int a2, int a3, int a4, int a5, int a6, int a7, int a8);  /* 0x006c4608 */
int __fastcall sub_606C47E8(int a1);  /* 0x006c47e8 */
int __fastcall sub_606C480C(int a1);  /* 0x006c480c */
int __fastcall sub_606C4880(int a1);  /* 0x006c4880 */
int __fastcall sub_606C4BFC(int a1);  /* 0x006c4bfc */
int __fastcall sub_606C4C38(int a1, int a2);  /* 0x006c4c38 */
int __fastcall sub_606C4C70(int a1, _DWORD *a2);  /* 0x006c4c70 */
int __fastcall sub_606C4CB4(int a1, int a2);  /* 0x006c4cb4 */
int __fastcall sub_606C4CC0(int result, _DWORD *a2);  /* 0x006c4cc0 */
int __fastcall sub_606C4CD0(int a1, int a2);  /* 0x006c4cd0 */
int __fastcall sub_606C4CF8(int a1);  /* 0x006c4cf8 */
int __fastcall sub_606C4D00(int a1);  /* 0x006c4d00 */
int __fastcall RedCoin_onCreate(int a1);  /* 0x006c4ed8 */
bool __fastcall RedCoin_vf0(int a1, int a2);  /* 0x006c51ec */
int __fastcall RedCoin_vf3(int a1);  /* 0x006c5364 */
int __fastcall sub_606C546C(int result);  /* 0x006c546c */
int __fastcall sub_606C547C(int a1);  /* 0x006c547c */
int __fastcall sub_606C5540(int a1);  /* 0x006c5540 */
int __fastcall sub_606C5598(int a1);  /* 0x006c5598 */
int __fastcall sub_606C5660(int a1);  /* 0x006c5660 */
int __fastcall sub_606C568C(float *a1);  /* 0x006c568c */
bool __fastcall sub_606C5730(int a1, int a2);  /* 0x006c5730 */
int __fastcall sub_606C58A8(_DWORD *a1);  /* 0x006c58a8 */
int __fastcall sub_606C59BC(int result);  /* 0x006c59bc */
int __fastcall sub_606C59CC(int a1);  /* 0x006c59cc */
int __fastcall sub_606C5A7C(int result, int a2, char a3);  /* 0x006c5a7c */
bool __fastcall sub_606C5A90(int a1);  /* 0x006c5a90 */
int __fastcall sub_606C5AA0(int a1);  /* 0x006c5aa0 */
int __fastcall sub_606C5B88(int *a1, int a2, int a3, _DWORD *a4);  /* 0x006c5b88 */
int __fastcall sub_606C5EC4(unsigned int a1);  /* 0x006c5ec4 */
int __fastcall sub_606C5EE8(unsigned int a1);  /* 0x006c5ee8 */
int __fastcall sub_606C5F0C(unsigned int a1);  /* 0x006c5f0c */
int __fastcall sub_606C5F4C(unsigned int a1, int a2, int a3, int *a4, int a5);  /* 0x006c5f4c */
int __fastcall sub_606C6638(int a1);  /* 0x006c6638 */
int __fastcall sub_606C69A0(int a1);  /* 0x006c69a0 */
int __fastcall sub_606C6AA0(int a1);  /* 0x006c6aa0 */
int __fastcall sub_606C6CEC(int a1);  /* 0x006c6cec */
int __fastcall sub_606C6D80(int a1, int a2, int a3, int a4);  /* 0x006c6d80 */
int __fastcall sub_606C6DA8(int a1);  /* 0x006c6da8 */
bool __fastcall sub_606C6E14(int a1, int a2);  /* 0x006c6e14 */
int __fastcall sub_606C6F18(_DWORD *a1);  /* 0x006c6f18 */
int __fastcall sub_606C70B4(int a1);  /* 0x006c70b4 */
int __fastcall sub_606C720C(int a1);  /* 0x006c720c */
int __fastcall SE_SYS_STOCK_ITEM_USE_ref_2(int a1);  /* 0x006c728c */
int __fastcall sub_606C74A0(int result);  /* 0x006c74a0 */
int __fastcall sub_606C74B0(int result);  /* 0x006c74b0 */
int __fastcall sub_606C75EC(int a1);  /* 0x006c75ec */
int __fastcall sub_606C77EC(int result);  /* 0x006c77ec */
int __fastcall sub_606C7974(int result);  /* 0x006c7974 */
int __fastcall RedCoin_onExecute(int a1);  /* 0x006c79a0 */
int __fastcall sub_606C7B7C(int result);  /* 0x006c7b7c */
int __fastcall sub_606C7C4C(int a1);  /* 0x006c7c4c */
int __fastcall RedCoin_vf12(int a1, int a2, int a3, int a4);  /* 0x006c7df0 */
int __fastcall RedCoin_vf32(_BYTE *a1);  /* 0x006c7e4c */
int __fastcall sub_606C7EB8(int a1);  /* 0x006c7eb8 */
int __fastcall sub_606C8408(int a1, int a2);  /* 0x006c8408 */
int __fastcall sub_606C84E8(int a1, int a2);  /* 0x006c84e8 */
int __fastcall sub_606C85E4(int a1, int a2);  /* 0x006c85e4 */
int __fastcall sub_606C86E0(int a1, int a2);  /* 0x006c86e0 */
int __fastcall sub_606C87D8(int a1, int a2);  /* 0x006c87d8 */
int __fastcall sub_606C8974(int a1);  /* 0x006c8974 */
int __fastcall sub_606C8B1C(int a1);  /* 0x006c8b1c */
int __fastcall sub_606C8B5C(int a1);  /* 0x006c8b5c */
int __fastcall sub_606C8BA0(int a1);  /* 0x006c8ba0 */
int __fastcall sub_606C8C0C(int a1);  /* 0x006c8c0c */
int __fastcall sub_606C8E88(int a1);  /* 0x006c8e88 */
int __fastcall RedCoin_vf51(int result);  /* 0x006c931c */
int __fastcall RedCoin_vf52(int a1);  /* 0x006c9330 */
int __fastcall RedCoin_vf54(int a1);  /* 0x006c940c */
int __fastcall RedCoin_vf55(int a1);  /* 0x006c9470 */
int __fastcall sub_606C9510(unsigned int *a1);  /* 0x006c9510 */
int __fastcall sub_606C956C(int a1, int a2);  /* 0x006c956c */
bool __fastcall sub_606C9668(int a1, int a2);  /* 0x006c9668 */
int __fastcall sub_606C976C(int a1);  /* 0x006c976c */
int __fastcall sub_606C97CC(int a1);  /* 0x006c97cc */
int __fastcall Actor_condition_Flag_with_rotate_control_build(int a1);  /* 0x006c9a5c */
int __fastcall Actor_condition_Flag_with_rotate_control_2_build(int a1);  /* 0x006c9ae8 */
int __fastcall sub_606C9B04(int a1, int a2);  /* 0x006c9b04 */
bool __fastcall sub_606C9BB8(int a1, int a2);  /* 0x006c9bb8 */
int __fastcall sub_606C9D2C(_DWORD *a1);  /* 0x006c9d2c */
bool __fastcall sub_606C9D3C(int a1, int a2);  /* 0x006c9d3c */
int __fastcall sub_606C9F24(Actor *a1);  /* 0x006c9f24 */
int __fastcall sub_606CA008(int a1);  /* 0x006ca008 */
int __fastcall sub_606CA0C0(int a1);  /* 0x006ca0c0 */
int __fastcall sub_606CA0CC(int a1);  /* 0x006ca0cc */
int __fastcall sub_606CA124(_DWORD *a1, int a2, int a3);  /* 0x006ca124 */
int __fastcall sub_606CA1A4(int a1);  /* 0x006ca1a4 */
int __fastcall sub_606CA1C8(int a1);  /* 0x006ca1c8 */
int __fastcall StoneEye_onCreate(_DWORD *a1);  /* 0x006ca1ec */
int __fastcall StoneEye_vf8(_DWORD *a1);  /* 0x006ca2e0 */
bool __fastcall sub_606CA390(Actor *a1);  /* 0x006ca390 */
int __fastcall sub_606CA41C(int a1, int a2);  /* 0x006ca41c */
int __fastcall StoneEye_vf56(int a1, _DWORD *a2, int (__fastcall ***a3)(_DWORD, int), int a4);  /* 0x006ca4cc */
int __fastcall StoneEye_vf57(int a1, float *a2, unsigned int *a3, int a4, int a5);  /* 0x006ca4dc */
int __fastcall sub_606CA500(int a1);  /* 0x006ca500 */
bool __fastcall sub_606CA514(int a1, int a2);  /* 0x006ca514 */
bool __fastcall sub_606CA5CC(int a1, int a2);  /* 0x006ca5cc */
bool __fastcall sub_606CA684(int a1, int a2, int a3);  /* 0x006ca684 */
bool __fastcall sub_606CA754(int a1, int a2);  /* 0x006ca754 */
int __fastcall sub_606CA858(Actor *a1);  /* 0x006ca858 */
int __fastcall sub_606CA968(int a1, int a2);  /* 0x006ca968 */
int __fastcall sub_606CA980(int a1, int a2, int a3);  /* 0x006ca980 */
int __fastcall sub_606CA9C4(int a1);  /* 0x006ca9c4 */
int __fastcall sub_606CAA5C(int a1, int a2, int a3);  /* 0x006caa5c */
int __fastcall sub_606CAA68(int a1, int a2);  /* 0x006caa68 */
int __fastcall sub_606CAA9C(int a1, int a2);  /* 0x006caa9c */
int __fastcall sub_606CABE0(int a1);  /* 0x006cabe0 */
int __fastcall sub_606CAD14(int a1);  /* 0x006cad14 */
void __fastcall sub_606CAEC0(int a1, _DWORD *a2);  /* 0x006caec0 */
bool __fastcall sub_606CAF0C(int a1);  /* 0x006caf0c */
bool __fastcall sub_606CAF2C(int a1);  /* 0x006caf2c */
bool __fastcall sub_606CAF4C(int a1, int a2, int a3);  /* 0x006caf4c */
bool __fastcall sub_606CAF84(int a1, int a2);  /* 0x006caf84 */
int __fastcall sub_606CB170(int a1);  /* 0x006cb170 */
int __fastcall sub_606CB250(int a1, int a2);  /* 0x006cb250 */
int __fastcall sub_606CB268(int a1, int a2, int a3);  /* 0x006cb268 */
int __fastcall sub_606CB2AC(int a1, int a2, int a3, int a4);  /* 0x006cb2ac */
int __fastcall sub_606CB2DC(int a1);  /* 0x006cb2dc */
int __fastcall sub_606CB408(int a1);  /* 0x006cb408 */
int __fastcall SE_OBJ_STONE_LAND_ref(int a1);  /* 0x006cb594 */
int __fastcall lift_zen_chika_pori_ref(int a1, _DWORD *a2);  /* 0x006cb77c */
bool __fastcall sub_606CB914(int a1, int a2);  /* 0x006cb914 */
void __fastcall sub_606CBB00(int a1);  /* 0x006cbb00 */
int __fastcall sub_606CBB50(int a1);  /* 0x006cbb50 */
int __fastcall sub_606CC3F4(int a1);  /* 0x006cc3f4 */
bool __fastcall sub_606CC408(int a1, int a2);  /* 0x006cc408 */
void __fastcall sub_606CC50C(_DWORD *a1);  /* 0x006cc50c */
int __fastcall sub_606CC5F0(_DWORD *a1);  /* 0x006cc5f0 */
bool __fastcall sub_606CC6D8(int a1);  /* 0x006cc6d8 */
int __fastcall sub_606CC8C4(int a1, int a2);  /* 0x006cc8c4 */
int __fastcall sub_606CCAC0(int a1);  /* 0x006ccac0 */
int __fastcall sub_606CCB90(int a1);  /* 0x006ccb90 */
int __fastcall sub_606CCBA8(int a1, float *a2);  /* 0x006ccba8 */
int __fastcall sub_606CCCB4(int a1);  /* 0x006cccb4 */
int __fastcall sub_606CCCC0(int a1);  /* 0x006cccc0 */
int __fastcall sub_606CCCCC(int result);  /* 0x006ccccc */
int __fastcall sub_606CCCF0(int a1);  /* 0x006cccf0 */
bool __fastcall sub_606CCDDC(int a1, int a2);  /* 0x006ccddc */
int __fastcall sub_606CCE58(_DWORD *a1);  /* 0x006cce58 */
int __fastcall sub_606CD008(unsigned __int8 *a1);  /* 0x006cd008 */
int __fastcall sub_606CD038(int result);  /* 0x006cd038 */
bool __fastcall sub_606CD280(int a1, int a2);  /* 0x006cd280 */
int __fastcall sub_606CD384(_DWORD *a1);  /* 0x006cd384 */
bool __fastcall sub_606CD528(int a1, int a2);  /* 0x006cd528 */
int __fastcall sub_606CD62C(_DWORD *a1);  /* 0x006cd62c */
bool __fastcall sub_606CD814(int a1, int a2);  /* 0x006cd814 */
int __fastcall sub_606CD918(_DWORD *a1);  /* 0x006cd918 */
int __fastcall sub_606CDAE0(int a1);  /* 0x006cdae0 */
bool __fastcall sub_606CDAE8(int a1, int a2);  /* 0x006cdae8 */
int __fastcall sub_606CDBEC(_DWORD *a1);  /* 0x006cdbec */
int __fastcall SE_OBJ_METAL_BOX_LAND_ref(int a1);  /* 0x006cdd88 */
bool __fastcall sub_606CDE08(int a1, int a2);  /* 0x006cde08 */
int __fastcall sub_606CDF80(_DWORD *a1);  /* 0x006cdf80 */
int __fastcall sub_606CE068(int a1, int a2);  /* 0x006ce068 */
int __fastcall sub_606CE2C0(int a1, int a2, int a3, int a4);  /* 0x006ce2c0 */
int __fastcall sub_606CE2E8(int *a1, _DWORD *a2);  /* 0x006ce2e8 */
int __fastcall sub_606CE3B8(int a1);  /* 0x006ce3b8 */
int __fastcall sub_606CE598(int a1);  /* 0x006ce598 */
int __fastcall sub_606CE988(int a1, int a2, int a3, int a4);  /* 0x006ce988 */
int __fastcall sub_606CE9B0(int a1, int a2);  /* 0x006ce9b0 */
int __fastcall sub_606CE9D4(int *a1, _DWORD *a2);  /* 0x006ce9d4 */
int __fastcall sub_606CEABC(int a1);  /* 0x006ceabc */
int __fastcall sub_606CECC4(int a1);  /* 0x006cecc4 */
int __fastcall sub_606CF024(int a1);  /* 0x006cf024 */
int __fastcall sub_606CF090(_DWORD *a1, int (__fastcall ***a2)(_DWORD, int));  /* 0x006cf090 */
int __fastcall sub_606CF154(int *a1, int a2);  /* 0x006cf154 */
unsigned int __fastcall sub_606CF204(int *a1, int a2);  /* 0x006cf204 */
int __fastcall sub_606CF464(int result);  /* 0x006cf464 */
int __fastcall sub_606CF480(int a1);  /* 0x006cf480 */
void __fastcall sub_606CF734(int a1, _DWORD *a2);  /* 0x006cf734 */
int __fastcall sub_606CF7C8(int a1);  /* 0x006cf7c8 */
int __fastcall sub_606CFAA4(int a1, int a2);  /* 0x006cfaa4 */
int __fastcall sub_606CFD50(int a1, float *a2);  /* 0x006cfd50 */
int __fastcall sub_606CFFF8(_DWORD **a1, int a2, int a3, int a4);  /* 0x006cfff8 */
int __fastcall sub_606D0090(int a1);  /* 0x006d0090 */
int __fastcall Actor_mid_faiaba_build(int a1);  /* 0x006d0168 */
int __fastcall sub_606D0330(int a1, int a2, int a3, int a4);  /* 0x006d0330 */
int __fastcall sub_606D03BC(int a1);  /* 0x006d03bc */
int __fastcall sub_606D03EC(int a1);  /* 0x006d03ec */
int __fastcall sub_606D0514(int a1);  /* 0x006d0514 */
int __fastcall sub_606D0708(int a1);  /* 0x006d0708 */
int __fastcall sub_606D0A4C(int a1);  /* 0x006d0a4c */
int __fastcall sub_606D0A94(int a1, int a2);  /* 0x006d0a94 */
bool __fastcall sub_606D0AF0(int a1, int a2);  /* 0x006d0af0 */
void __fastcall sub_606D0CDC(_BYTE *a1);  /* 0x006d0cdc */
int __fastcall sub_606D0DAC(_BYTE *a1);  /* 0x006d0dac */
int __fastcall sub_606D0FDC(int a1, int a2, int a3, int a4);  /* 0x006d0fdc */
int __fastcall sub_606D1004(int a1);  /* 0x006d1004 */
int __fastcall sub_606D114C(int a1);  /* 0x006d114c */
int __fastcall sub_606D12CC(int a1);  /* 0x006d12cc */
int __fastcall sub_606D13BC(int a1);  /* 0x006d13bc */
int __fastcall sub_606D13E8(int a1);  /* 0x006d13e8 */
bool __fastcall sub_606D1430(int a1, int a2);  /* 0x006d1430 */
void __fastcall sub_606D15A8(int a1);  /* 0x006d15a8 */
int __fastcall sub_606D15F8(int a1);  /* 0x006d15f8 */
int __fastcall sub_606D16EC(_DWORD *a1);  /* 0x006d16ec */
unsigned int __fastcall sub_606D17A0(int a1);  /* 0x006d17a0 */
int __fastcall sub_606D17D4(int a1);  /* 0x006d17d4 */
int __fastcall sub_606D1ACC(int a1);  /* 0x006d1acc */
int __fastcall sub_606D1B00(int a1);  /* 0x006d1b00 */
int __fastcall sub_606D1D98(int a1);  /* 0x006d1d98 */
void __fastcall sub_606D1E9C(_DWORD *a1);  /* 0x006d1e9c */
int __fastcall sub_606D1F70(_DWORD *a1);  /* 0x006d1f70 */
int __fastcall sub_606D2410(int a1, int a2, int a3);  /* 0x006d2410 */
int __fastcall sub_606D2458(int a1, int a2);  /* 0x006d2458 */
int __fastcall sub_606D249C(int a1);  /* 0x006d249c */
int __fastcall sub_606D24D4(int a1);  /* 0x006d24d4 */
int __fastcall sub_606D25F0(int a1);  /* 0x006d25f0 */
int __fastcall sub_606D26BC(int a1);  /* 0x006d26bc */
int __fastcall sub_606D27A4(int a1);  /* 0x006d27a4 */
bool __fastcall sub_606D27E8(int a1, int a2);  /* 0x006d27e8 */
int __fastcall sub_606D2960(Actor *a1);  /* 0x006d2960 */
int __fastcall sub_606D2AAC(int a1, int a2, int a3, int a4);  /* 0x006d2aac */
int __fastcall SE_OBJ_CMN_QUAKE_ref(int a1, int a2);  /* 0x006d2ac4 */
int __fastcall sub_606D2C20(int a1);  /* 0x006d2c20 */
int __fastcall sub_606D2F94(int a1);  /* 0x006d2f94 */
int __fastcall sub_606D3048(int a1, int a2, int a3, int a4);  /* 0x006d3048 */
void __fastcall sub_606D30EC(int a1);  /* 0x006d30ec */
int __fastcall sub_606D313C(int a1);  /* 0x006d313c */
int __fastcall sub_606D3190(_DWORD *a1);  /* 0x006d3190 */
int __fastcall sub_606D337C(int a1);  /* 0x006d337c */
int __fastcall sub_606D38D0(int a1);  /* 0x006d38d0 */
int __fastcall sub_606D3A90(int a1);  /* 0x006d3a90 */
int __fastcall sub_606D3C40(int a1, int a2, int a3, int a4);  /* 0x006d3c40 */
int __fastcall sub_606D3C7C(int a1);  /* 0x006d3c7c */
int __fastcall sub_606D3D10(int a1);  /* 0x006d3d10 */
bool __fastcall sub_606D3DC4(int a1, int a2);  /* 0x006d3dc4 */
int __fastcall sub_606D4150(int a1);  /* 0x006d4150 */
int __fastcall sub_606D41DC(int a1);  /* 0x006d41dc */
int __fastcall sub_606D4268(int a1);  /* 0x006d4268 */
int __fastcall sub_606D42F4(int a1);  /* 0x006d42f4 */
int __fastcall sub_606D4384(int *a1, int a2);  /* 0x006d4384 */
int __fastcall sub_606D45B8(_DWORD *a1, _DWORD *a2, int *a3, int a4);  /* 0x006d45b8 */
int __fastcall sub_606D45F8(int *a1, int a2, int a3);  /* 0x006d45f8 */
int __fastcall sub_606D46F0(int a1, int a2);  /* 0x006d46f0 */
int __fastcall sub_606D4728(int a1, int a2);  /* 0x006d4728 */
int __fastcall sub_606D4760(int a1, int a2);  /* 0x006d4760 */
bool __fastcall sub_606D4788(unsigned __int8 *a1, int a2);  /* 0x006d4788 */
int __fastcall sub_606D47D8(int result, int a2);  /* 0x006d47d8 */
int __fastcall sub_606D4820(int result, int a2);  /* 0x006d4820 */
bool __fastcall sub_606D4838(int a1, int a2);  /* 0x006d4838 */
int __fastcall sub_606D4894(int a1, int a2, char a3);  /* 0x006d4894 */
int __fastcall sub_606D48C0(_DWORD *a1, int (__fastcall ***a2)(_DWORD, int), int a3);  /* 0x006d48c0 */
int __fastcall sub_606D4980(float *a1, unsigned int *a2, int a3, float *a4, int a5);  /* 0x006d4980 */
int __fastcall sub_606D4ABC(int a1);  /* 0x006d4abc */
int __fastcall sub_606D4B48(int a1);  /* 0x006d4b48 */
int __fastcall sub_606D4BD4(int a1);  /* 0x006d4bd4 */
int __fastcall Seaweed_onCreate(int a1);  /* 0x006d4ca8 */
int __fastcall Seaweed_onExecute(int a1);  /* 0x006d4f08 */
int __fastcall Seaweed_onDraw(int a1, int a2, int a3, int a4);  /* 0x006d4f58 */
signed int __fastcall Seaweed_setupModels(int a1);  /* 0x006d4fb8 */
bool __fastcall Seaweed_vf0(int a1, int a2);  /* 0x006d5358 */
int __fastcall Seaweed_dtorFree(Actor *a1);  /* 0x006d5540 */
int __fastcall sub_606D563C(_DWORD *a1);  /* 0x006d563c */
bool __fastcall sub_606D5768(int a1);  /* 0x006d5768 */
int __fastcall sub_606D5848(int a1);  /* 0x006d5848 */
int __fastcall sub_606D5948(int a1, int a2, int a3, int a4);  /* 0x006d5948 */
bool __fastcall sub_606D597C(int a1, int a2);  /* 0x006d597c */
int __fastcall sub_606D5A80(Actor *a1);  /* 0x006d5a80 */
int __fastcall Actor_ice_buroku_teru_build(int a1);  /* 0x006d5be8 */
int __fastcall sub_606D5C84(int a1, int a2, int a3, int a4);  /* 0x006d5c84 */
int __fastcall ice_A1_ref(int a1);  /* 0x006d5e18 */
int __fastcall sub_606D6268(int a1, int a2);  /* 0x006d6268 */
int __fastcall sub_606D6408(int a1, _DWORD *a2);  /* 0x006d6408 */
int __fastcall sub_606D66F4(int a1, int a2);  /* 0x006d66f4 */
int __fastcall sub_606D69C4(int a1);  /* 0x006d69c4 */
int __fastcall sub_606D6A24(int a1, int a2, int a3, int a4);  /* 0x006d6a24 */
int __fastcall sub_606D6A7C(int a1, int a2);  /* 0x006d6a7c */
int __fastcall sub_606D6C90(int a1);  /* 0x006d6c90 */
int __fastcall sub_606D6E80(int a1, int a2);  /* 0x006d6e80 */
int __fastcall sub_606D6F18(_DWORD *a1, int a2);  /* 0x006d6f18 */
int __fastcall sub_606D6F64(int a1, int a2, unsigned __int16 a3);  /* 0x006d6f64 */
int __fastcall sub_606D6FD8(int a1);  /* 0x006d6fd8 */
int __fastcall sub_606D7084(int a1);  /* 0x006d7084 */
int __fastcall sub_606D70B8(int a1);  /* 0x006d70b8 */
int __fastcall sub_606D73C8(int a1);  /* 0x006d73c8 */
int __fastcall sub_606D73CC(int a1);  /* 0x006d73cc */
int __fastcall SE_OBJ_PNGN_ICE_SLIDE_ref_2(int a1);  /* 0x006d7408 */
int __fastcall sub_606D75C8(_DWORD *a1);  /* 0x006d75c8 */
int __fastcall sub_606D7604(int a1);  /* 0x006d7604 */
int __fastcall sub_606D7644(int a1);  /* 0x006d7644 */
int __fastcall sub_606D7738(int result);  /* 0x006d7738 */
bool __fastcall sub_606D7744(int a1, int a2);  /* 0x006d7744 */
void __fastcall sub_606D7930(_DWORD *a1);  /* 0x006d7930 */
int __fastcall sub_606D79EC(_DWORD *a1);  /* 0x006d79ec */
int __fastcall sub_606D7AB0(int a1);  /* 0x006d7ab0 */
int __fastcall sub_606D7D78(_DWORD *a1);  /* 0x006d7d78 */
int __fastcall sub_606D7EA4(int a1);  /* 0x006d7ea4 */
int __fastcall sub_606D8294(_DWORD *a1);  /* 0x006d8294 */
int __fastcall sub_606D8338(_DWORD *a1, _DWORD *a2, int a3);  /* 0x006d8338 */
bool __fastcall sub_606D83BC(int a1, int a2);  /* 0x006d83bc */
void __fastcall sub_606D84C0(Actor *a1);  /* 0x006d84c0 */
int __fastcall sub_606D84F0(Actor *a1);  /* 0x006d84f0 */
int __fastcall sub_606D85D8(int a1, int a2, int a3, int a4);  /* 0x006d85d8 */
int __fastcall sub_606D8600(_DWORD *a1);  /* 0x006d8600 */
int __fastcall sub_606D8654(_DWORD *a1);  /* 0x006d8654 */
int __fastcall ball_ice_ref(int a1);  /* 0x006d869c */
int __fastcall sub_606D875C(int a1);  /* 0x006d875c */
bool __fastcall sub_606D8954(int a1, int a2);  /* 0x006d8954 */
int __fastcall sub_606D8B40(_BYTE *a1);  /* 0x006d8b40 */
int __fastcall sub_606D8BE0(int a1, int a2);  /* 0x006d8be0 */
int __fastcall sub_606D8D18(int a1);  /* 0x006d8d18 */
int __fastcall sub_606D8DEC(int a1);  /* 0x006d8dec */
int __fastcall sub_606D8DF8(int a1);  /* 0x006d8df8 */
int __fastcall sub_606D8E5C(int a1);  /* 0x006d8e5c */
int __fastcall sub_606D8FA4(_DWORD *a1);  /* 0x006d8fa4 */
bool __fastcall sub_606D9020(Actor *a1);  /* 0x006d9020 */
int __fastcall sub_606D9058(int result, int a2);  /* 0x006d9058 */
int __fastcall sub_606D9108(int a1);  /* 0x006d9108 */
bool __fastcall sub_606D9110(int a1, int a2);  /* 0x006d9110 */
int __fastcall sub_606D9214(Actor *a1);  /* 0x006d9214 */
int __fastcall sub_606D936C(_DWORD *a1);  /* 0x006d936c */
int __fastcall lift_turi_ashiba_wire_ref(_DWORD *a1);  /* 0x006d942c */
int __fastcall sub_606D95BC(Actor *a1);  /* 0x006d95bc */
int __fastcall pol_shokudai_ref(int a1);  /* 0x006d96d8 */
int __fastcall sub_606D9818(int a1);  /* 0x006d9818 */
int __fastcall sub_606D9998(int a1);  /* 0x006d9998 */
int __fastcall sub_606D99D4(int a1, int a2, int a3, int a4);  /* 0x006d99d4 */
int __fastcall sub_606D99FC(int a1);  /* 0x006d99fc */
bool __fastcall sub_606D9A24(int a1, int a2);  /* 0x006d9a24 */
void __fastcall sub_606D9B28(int a1);  /* 0x006d9b28 */
int __fastcall sub_606D9B78(int a1);  /* 0x006d9b78 */
int __fastcall sub_606D9E8C(int result);  /* 0x006d9e8c */
int __fastcall sub_606D9E9C(int a1);  /* 0x006d9e9c */
int __fastcall sub_606D9F14(int result);  /* 0x006d9f14 */
void __fastcall sub_606DA084(int a1);  /* 0x006da084 */
int __fastcall sub_606DA260(int result);  /* 0x006da260 */
int __fastcall sub_606DA2AC(int result);  /* 0x006da2ac */
int __fastcall sub_606DA2BC(int result);  /* 0x006da2bc */
int __fastcall SE_OBJ_TREASURE_BOX_OPEN_ref(int a1);  /* 0x006da2f0 */
int __fastcall sub_606DA668(_DWORD *a1);  /* 0x006da668 */
int __fastcall sub_606DA6D8(int result);  /* 0x006da6d8 */
int __fastcall sub_606DA6E8(int a1);  /* 0x006da6e8 */
int __fastcall sub_606DA7B0(int result);  /* 0x006da7b0 */
int __fastcall sub_606DA860(int a1);  /* 0x006da860 */
int __fastcall sub_606DA8F4(int a1);  /* 0x006da8f4 */
int __fastcall sub_606DA91C(int a1);  /* 0x006da91c */
int __fastcall sub_606DB1A8(_DWORD *a1);  /* 0x006db1a8 */
int __fastcall sub_606DB31C(int result, unsigned int a2);  /* 0x006db31c */
int __fastcall sub_606DB5A8(int a1);  /* 0x006db5a8 */
int __fastcall sub_606DB7E8(int a1);  /* 0x006db7e8 */
int __fastcall sub_606DB80C(int a1, int a2, int a3, int a4);  /* 0x006db80c */
int __fastcall sub_606DB884(int a1, int a2);  /* 0x006db884 */
int __fastcall sub_606DC080(int a1);  /* 0x006dc080 */
int __fastcall sub_606DC1F0(int a1);  /* 0x006dc1f0 */
int __fastcall sub_606DC8A4(_DWORD *a1);  /* 0x006dc8a4 */
bool __fastcall sub_606DD008(int a1, int a2);  /* 0x006dd008 */
void __fastcall sub_606DD10C(int a1);  /* 0x006dd10c */
int __fastcall sub_606DD1C0(int a1);  /* 0x006dd1c0 */
int __fastcall sub_606DD278(int a1);  /* 0x006dd278 */
int __fastcall sub_606DD2D0(int result);  /* 0x006dd2d0 */
int __fastcall sub_606DD2E4(int a1);  /* 0x006dd2e4 */
int __fastcall sub_606DD374(int result);  /* 0x006dd374 */
int __fastcall sub_606DD3D8(int a1);  /* 0x006dd3d8 */
bool __fastcall sub_606DD568(int a1, int a2);  /* 0x006dd568 */
int __fastcall sub_606DD66C(Actor *a1);  /* 0x006dd66c */
int __fastcall sub_606DD85C(int result);  /* 0x006dd85c */
int __fastcall sub_606DD880(int result);  /* 0x006dd880 */
int __fastcall sub_606DD8AC(int result);  /* 0x006dd8ac */
int __fastcall sub_606DD8C8(int result);  /* 0x006dd8c8 */
int __fastcall sub_606DD95C(int a1);  /* 0x006dd95c */
int __fastcall sub_606DDAB4(int result);  /* 0x006ddab4 */
int __fastcall sub_606DDACC(int result);  /* 0x006ddacc */
int __fastcall SE_OBJ_DAIKONBOU_L_ref(int a1);  /* 0x006ddafc */
int __fastcall sub_606DDD74(int result);  /* 0x006ddd74 */
int __fastcall sub_606DDD90(int result);  /* 0x006ddd90 */
int __fastcall sub_606DDDBC(int result);  /* 0x006dddbc */
int __fastcall SE_OBJ_DAIKONBOU_L_REVERT_ref(int a1);  /* 0x006dddc8 */
int __fastcall sub_606DDFC4(int result);  /* 0x006ddfc4 */
int __fastcall sub_606DDFDC(int result);  /* 0x006ddfdc */
int __fastcall sub_606DE0AC(int a1);  /* 0x006de0ac */
int __fastcall sub_606DE0E4(int result);  /* 0x006de0e4 */
int __fastcall sub_606DE0FC(int result);  /* 0x006de0fc */
int __fastcall sub_606DE180(int a1);  /* 0x006de180 */
int __fastcall sub_606DE244(float *a1);  /* 0x006de244 */
int __fastcall sub_606DE2A8(int a1);  /* 0x006de2a8 */
int __fastcall SE_OBJ_DAIKONBOU_L_SIGN_ref_3(int a1);  /* 0x006de39c */
bool __fastcall sub_606DE474(int a1, int a2);  /* 0x006de474 */
int __fastcall sub_606DE5EC(int a1);  /* 0x006de5ec */
int __fastcall sub_606DE6F8(int a1);  /* 0x006de6f8 */
int __fastcall sub_606DE714(int a1);  /* 0x006de714 */
int __fastcall sub_606DEB9C(int a1);  /* 0x006deb9c */
bool __fastcall sub_606DEC10(int a1, int a2);  /* 0x006dec10 */
int __fastcall sub_606DEDFC(int a1);  /* 0x006dedfc */
int __fastcall sub_606DEE68(int a1, int a2, int a3);  /* 0x006dee68 */
int __fastcall sub_606DEEA8(int a1, int a2);  /* 0x006deea8 */
int __fastcall sub_606DEFF4(int result);  /* 0x006deff4 */
int __fastcall sub_606DF0D4(int a1);  /* 0x006df0d4 */
bool __fastcall sub_606DF13C(int a1, int a2);  /* 0x006df13c */
int __fastcall sub_606DF328(int a1);  /* 0x006df328 */
int __fastcall sub_606DF394(int a1, int a2, int a3);  /* 0x006df394 */
int __fastcall sub_606DF470(_DWORD *a1, int a2);  /* 0x006df470 */
int __fastcall sub_606DF4A4(int result, int a2);  /* 0x006df4a4 */
bool __fastcall sub_606DF674(int a1, int a2);  /* 0x006df674 */
void __fastcall sub_606DF7EC(int a1);  /* 0x006df7ec */
int __fastcall sub_606DF83C(int a1);  /* 0x006df83c */
int __fastcall sub_606DF9D4(int result);  /* 0x006df9d4 */
int __fastcall SE_BOSS_KOOPA_AUX_FALL_ref(int a1);  /* 0x006df9f8 */
int __fastcall sub_606DFB74(int result);  /* 0x006dfb74 */
bool __fastcall sub_606DFBE4(_DWORD *a1);  /* 0x006dfbe4 */
int __fastcall sub_606DFDDC(int result);  /* 0x006dfddc */
int __fastcall sub_606DFDEC(int a1);  /* 0x006dfdec */
void __fastcall sub_606DFF84(int a1);  /* 0x006dff84 */
bool __fastcall sub_606DFFC8(_DWORD *a1);  /* 0x006dffc8 */
int __fastcall sub_606E0078(float *a1);  /* 0x006e0078 */
int __fastcall sub_606E017C(int a1);  /* 0x006e017c */
int __fastcall sub_606E01F8(int a1);  /* 0x006e01f8 */
int __fastcall sub_606E0210(int a1);  /* 0x006e0210 */
bool __fastcall sub_606E0228(int a1, int a2);  /* 0x006e0228 */
void __fastcall sub_606E03A0(int a1);  /* 0x006e03a0 */
int __fastcall sub_606E0410(int a1);  /* 0x006e0410 */
int __fastcall sub_606E064C(int a1);  /* 0x006e064c */
int __fastcall sub_606E0798(_DWORD *a1);  /* 0x006e0798 */
int __fastcall sub_606E0818(int a1);  /* 0x006e0818 */
int __fastcall sub_606E0A4C(int result);  /* 0x006e0a4c */
int __fastcall SE_OBJ_STEP_ON_SWITCH_ref(int a1);  /* 0x006e0a98 */
int __fastcall sub_606E0C5C(int *a1);  /* 0x006e0c5c */
int __fastcall sub_606E0EDC(int result);  /* 0x006e0edc */
int __fastcall sub_606E0EEC(int a1);  /* 0x006e0eec */
int __fastcall sub_606E1038(int a1);  /* 0x006e1038 */
int __fastcall sub_606E107C(int a1);  /* 0x006e107c */
int __fastcall sub_606E124C(int a1);  /* 0x006e124c */
int __fastcall sub_606E1290(int a1);  /* 0x006e1290 */
int __fastcall SE_OBJ_SWITCH_APP_AGAIN_ref(int a1);  /* 0x006e1408 */
int __fastcall SE_OBJ_SWITCH_APP_AGAIN_ref_2(int a1);  /* 0x006e1518 */
int __fastcall sub_606E1714(int a1);  /* 0x006e1714 */
int __fastcall sub_606E1790(int a1);  /* 0x006e1790 */
int __fastcall sub_606E1864(int a1);  /* 0x006e1864 */
int __fastcall sub_606E18AC(_DWORD *a1);  /* 0x006e18ac */
int __fastcall sub_606E1CB4(int a1);  /* 0x006e1cb4 */
int __fastcall sub_606E1E8C(int a1);  /* 0x006e1e8c */
int __fastcall sub_606E204C(int a1, int a2, int a3, int a4);  /* 0x006e204c */
int __fastcall sub_606E2074(float *a1);  /* 0x006e2074 */
int __fastcall sub_606E21C4(int a1, int a2);  /* 0x006e21c4 */
bool __fastcall sub_606E2674(int (__fastcall ***a1)(_DWORD, int), int a2);  /* 0x006e2674 */
int __fastcall sub_606E2808(int a1, int a2);  /* 0x006e2808 */
bool __fastcall sub_606E2CAC(_DWORD *a1);  /* 0x006e2cac */
int __fastcall sub_606E2E20(int a1);  /* 0x006e2e20 */
bool __fastcall sub_606E3080(int a1, int a2);  /* 0x006e3080 */
int __fastcall sub_606E3184(int a1);  /* 0x006e3184 */
int __fastcall sub_606E31F4(int a1);  /* 0x006e31f4 */
int __fastcall switch_hatena_ref(int a1);  /* 0x006e35b0 */
int __fastcall sub_606E369C(int a1);  /* 0x006e369c */
int __fastcall sub_606E37B0(int result);  /* 0x006e37b0 */
int __fastcall up_switch_hatena_ref(int a1);  /* 0x006e37d8 */
int __fastcall switch_hatena_all_root_ref(int a1);  /* 0x006e38ec */
int __fastcall sub_606E39B8(int a1);  /* 0x006e39b8 */
bool __fastcall sub_606E39CC(int a1, int a2);  /* 0x006e39cc */
int __fastcall sub_606E3B44(int a1);  /* 0x006e3b44 */
int __fastcall sub_606E3C4C(int a1);  /* 0x006e3c4c */
int __fastcall switch_P_ref(int a1);  /* 0x006e3c9c */
int __fastcall sub_606E3D88(int a1);  /* 0x006e3d88 */
int __fastcall sub_606E3E9C(int a1);  /* 0x006e3e9c */
int __fastcall sub_606E3EFC(int result);  /* 0x006e3efc */
int __fastcall up_switch_P_ref(int a1);  /* 0x006e3f0c */
int __fastcall sub_606E4020(int a1);  /* 0x006e4020 */
int __fastcall switch_P_all_root_ref(int a1);  /* 0x006e4054 */
int __fastcall sub_606E40C8(int a1);  /* 0x006e40c8 */
int __fastcall sub_606E40DC(int a1);  /* 0x006e40dc */
bool __fastcall sub_606E4134(int a1, int a2);  /* 0x006e4134 */
int __fastcall sub_606E42AC(int a1);  /* 0x006e42ac */
int __fastcall sub_606E4448(Actor *a1);  /* 0x006e4448 */
int __fastcall sub_606E45A0(int a1, int a2, int a3);  /* 0x006e45a0 */
bool __fastcall sub_606E46BC(int a1, int a2);  /* 0x006e46bc */
int __fastcall sub_606E48A4(Actor *a1);  /* 0x006e48a4 */
bool __fastcall sub_606E496C(int a1, int a2);  /* 0x006e496c */
int __fastcall sub_606E4B54(Actor *a1);  /* 0x006e4b54 */
int __fastcall Chain_ctor(int a1);  /* 0x006e4be8 */
void __fastcall sub_606E4CC8(int a1);  /* 0x006e4cc8 */
int __fastcall sub_606E4CF8(int a1);  /* 0x006e4cf8 */
int __fastcall SwingingVine_ctor(int a1);  /* 0x006e4db8 */
int __fastcall sub_606E4E9C(int *a1);  /* 0x006e4e9c */
int __fastcall sub_606E5000(int a1, int a2);  /* 0x006e5000 */
int __fastcall sub_606E5160(int result);  /* 0x006e5160 */
unsigned int __fastcall sub_606E5468(int a1);  /* 0x006e5468 */
int __fastcall sub_606E5828(int a1);  /* 0x006e5828 */
int __fastcall sub_606E5B50(int a1);  /* 0x006e5b50 */
int __fastcall sub_606E5E10(int a1);  /* 0x006e5e10 */
int __fastcall sub_606E61A0(int a1);  /* 0x006e61a0 */
int __fastcall sub_606E67AC(int a1, int a2, int a3, int a4);  /* 0x006e67ac */
int __fastcall sub_606E67D0(int a1);  /* 0x006e67d0 */
int __fastcall sub_606E680C(int a1);  /* 0x006e680c */
int __fastcall sub_606E6930(struct sead_IDisposer *a1);  /* 0x006e6930 */
int __fastcall sub_606E69A0(int a1);  /* 0x006e69a0 */
__int64 __fastcall sub_606E6A1C(int a1);  /* 0x006e6a1c */
int __fastcall sub_606E6A50(int a1, int a2);  /* 0x006e6a50 */
int __fastcall sub_606E6B00(int a1, int a2, int a3);  /* 0x006e6b00 */
int __fastcall sub_606E6B44(int a1);  /* 0x006e6b44 */
int __fastcall sub_606E6C70(int *a1);  /* 0x006e6c70 */
int __fastcall sub_606E6D84(_BYTE *a1);  /* 0x006e6d84 */
int __fastcall sub_606E6DC8(_DWORD *a1);  /* 0x006e6dc8 */
int __fastcall sub_606E6EC4(int a1, int a2, int a3, int a4);  /* 0x006e6ec4 */
int __fastcall sub_606E6EEC(_BYTE *a1);  /* 0x006e6eec */
int __fastcall sub_606E70E4(int a1);  /* 0x006e70e4 */
void __fastcall sub_606E7130(int a1);  /* 0x006e7130 */
int __fastcall sub_606E7190(int a1, int a2, int a3);  /* 0x006e7190 */
int __fastcall sub_606E7250(_DWORD *a1);  /* 0x006e7250 */
int __fastcall SE_OBJ_TEKKYU_CRASH_ref_2(float *a1);  /* 0x006e73d8 */
int __fastcall sub_606E74C4(int a1);  /* 0x006e74c4 */
int __fastcall sub_606E750C(int a1);  /* 0x006e750c */
int __fastcall sub_606E75A8(int a1);  /* 0x006e75a8 */
int __fastcall sub_606E7BA8(int result);  /* 0x006e7ba8 */
int __fastcall sub_606E7BF8(int a1);  /* 0x006e7bf8 */
bool __fastcall sub_606E7CDC(int a1, int a2);  /* 0x006e7cdc */
void __fastcall sub_606E7E54(_BYTE *a1);  /* 0x006e7e54 */
int __fastcall sub_606E7EF8(_BYTE *a1);  /* 0x006e7ef8 */
int __fastcall SE_OBJ_TEKKYU_L_ROLL_ref_2(int a1);  /* 0x006e7fc4 */
int __fastcall sub_606E8080(int a1);  /* 0x006e8080 */
int __fastcall sub_606E8194(int a1);  /* 0x006e8194 */
int __fastcall sub_606E8220(int result);  /* 0x006e8220 */
int __fastcall sub_606E832C(int a1);  /* 0x006e832c */
int __fastcall sub_606E84F8(int a1);  /* 0x006e84f8 */
int __fastcall sub_606E8678(int a1);  /* 0x006e8678 */
int __fastcall sub_606E8770(int a1, int a2, int a3, int a4);  /* 0x006e8770 */
bool __fastcall sub_606E87D0(int a1, int a2);  /* 0x006e87d0 */
int __fastcall sub_606E89BC(Actor *a1);  /* 0x006e89bc */
int __fastcall sub_606E8B04(struct sead_IDisposer *a1);  /* 0x006e8b04 */
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
int __fastcall sub_606EB5C8(int a1, char a2);  /* 0x006eb5c8 */
bool __fastcall sub_606EB800(int a1, int a2);  /* 0x006eb800 */
int __fastcall sub_606EB904(Actor *a1);  /* 0x006eb904 */
int __fastcall sub_606EB9D4(int a1);  /* 0x006eb9d4 */
int __fastcall sub_606EBC3C(int result);  /* 0x006ebc3c */
int __fastcall sub_606EBC6C(int a1);  /* 0x006ebc6c */
int __fastcall sub_606EBCE4(int a1);  /* 0x006ebce4 */
int __fastcall sub_606EBCF0(int a1, _BYTE *a2);  /* 0x006ebcf0 */
int __fastcall sub_606EC530(int a1);  /* 0x006ec530 */
int __fastcall sub_606ECB5C(int a1);  /* 0x006ecb5c */
int __fastcall sub_606ECB90(int a1, int a2);  /* 0x006ecb90 */
bool __fastcall sub_606ECBC4(int a1, int a2);  /* 0x006ecbc4 */
void __fastcall sub_606ECCC8(int a1);  /* 0x006eccc8 */
int __fastcall sub_606ECD34(int a1);  /* 0x006ecd34 */
int __fastcall sub_606ECF10(int *a1, int a2);  /* 0x006ecf10 */
int __fastcall sub_606ED1F8(int a1, unsigned int a2);  /* 0x006ed1f8 */
int __fastcall sub_606ED22C(int *a1);  /* 0x006ed22c */
int __fastcall sub_606ED2F0(int *a1);  /* 0x006ed2f0 */
int __fastcall sub_606ED404(int *a1);  /* 0x006ed404 */
int __fastcall sub_606ED64C(_DWORD ***a1, int a2, int a3, int a4, int a5);  /* 0x006ed64c */
int __fastcall sub_606ED668(int a1);  /* 0x006ed668 */
int __fastcall sub_606ED7CC(int a1);  /* 0x006ed7cc */
int __fastcall sub_606ED8EC(int a1);  /* 0x006ed8ec */
int __fastcall sub_606ED9B4(int a1);  /* 0x006ed9b4 */
int __fastcall sub_606ED9E4(int result, float *a2);  /* 0x006ed9e4 */
int __fastcall sub_606EDD58(int a1);  /* 0x006edd58 */
int __fastcall sub_606EDDE0(int result);  /* 0x006edde0 */
int __fastcall sub_606EDE00(int a1);  /* 0x006ede00 */
int __fastcall sub_606EDE74(int a1, _BYTE *a2);  /* 0x006ede74 */
int __fastcall sub_606EDFE4(int a1, _BYTE *a2);  /* 0x006edfe4 */
int __fastcall TrampolineCloud_vf5(int a1);  /* 0x006ee0f0 */
int __fastcall TrampolineCloud_vf8(int a1);  /* 0x006ee364 */
int __fastcall TrampolineCloud_vf12(int a1);  /* 0x006ee4d8 */
int __fastcall sub_606EE4F0(int a1, int a2);  /* 0x006ee4f0 */
bool __fastcall TrampolineCloud_vf0(int a1, int a2);  /* 0x006ee524 */
void __fastcall TrampolineCloud_vf2(int a1);  /* 0x006ee628 */
int __fastcall TrampolineCloud_vf3(int a1);  /* 0x006ee688 */
int __fastcall sub_606EE960(int a1);  /* 0x006ee960 */
int __fastcall sub_606EEB44(int result);  /* 0x006eeb44 */
int __fastcall sub_606EEB88(int a1);  /* 0x006eeb88 */
int __fastcall sub_606EEBAC(_DWORD *a1);  /* 0x006eebac */
bool __fastcall sub_606EEC50(int a1);  /* 0x006eec50 */
int __fastcall sub_606EEEC4(int a1);  /* 0x006eeec4 */
bool __fastcall sub_606EF024(int a1, int a2);  /* 0x006ef024 */
int __fastcall sub_606EF128(Actor *a1);  /* 0x006ef128 */
int __fastcall Actor_pipe_kishi_build(int a1);  /* 0x006ef2fc */
int __fastcall sub_606EF368(int a1);  /* 0x006ef368 */
int __fastcall sub_606EF45C(int a1, float *a2);  /* 0x006ef45c */
int __fastcall sub_606EF4B0(int a1);  /* 0x006ef4b0 */
int __fastcall sub_606EF4E8(int a1, float *a2);  /* 0x006ef4e8 */
int __fastcall sub_606EF568(int a1, float *a2);  /* 0x006ef568 */
int __fastcall sub_606EF5E8(int a1);  /* 0x006ef5e8 */
int __fastcall sub_606EF7A8(int a1);  /* 0x006ef7a8 */
int __fastcall sub_606EFFF0(float *a1);  /* 0x006efff0 */
int __fastcall sub_606F01AC(Actor *a1);  /* 0x006f01ac */
int __fastcall sub_606F02D4(int a1);  /* 0x006f02d4 */
int __fastcall sub_606F0630(int *a1);  /* 0x006f0630 */
int __fastcall sub_606F07AC(_DWORD *a1);  /* 0x006f07ac */
int __fastcall sub_606F0A54(_DWORD *a1);  /* 0x006f0a54 */
int __fastcall sub_606F0A8C(int a1, int a2, int a3, int a4);  /* 0x006f0a8c */
unsigned int __fastcall sub_606F0B24(int a1);  /* 0x006f0b24 */
int __fastcall sub_606F0C28(int a1);  /* 0x006f0c28 */
unsigned int __fastcall sub_606F0D70(int a1);  /* 0x006f0d70 */
bool __fastcall sub_606F0F1C(int a1, int a2);  /* 0x006f0f1c */
void __fastcall sub_606F1020(int a1);  /* 0x006f1020 */
int __fastcall sub_606F1070(int a1);  /* 0x006f1070 */
int __fastcall sub_606F10C8(int a1);  /* 0x006f10c8 */
int __fastcall sub_606F1254(int a1);  /* 0x006f1254 */
int __fastcall sub_606F13D0(int a1);  /* 0x006f13d0 */
int __fastcall sub_606F13F4(int a1);  /* 0x006f13f4 */
int __fastcall sub_606F140C(int a1, int *a2);  /* 0x006f140c */
bool __fastcall sub_606F1534(int a1, int a2);  /* 0x006f1534 */
int __fastcall sub_606F1638(Actor *a1);  /* 0x006f1638 */
int __fastcall sub_606F17C4(int result);  /* 0x006f17c4 */
int __fastcall sub_606F181C(int a1);  /* 0x006f181c */
int __fastcall sub_606F1884(_DWORD *a1);  /* 0x006f1884 */
int __fastcall sub_606F18F0(int a1);  /* 0x006f18f0 */
int __fastcall sub_606F1918(int a1);  /* 0x006f1918 */
bool __fastcall sub_606F1A54(int a1, int a2);  /* 0x006f1a54 */
int __fastcall sub_606F1B58(Actor *a1);  /* 0x006f1b58 */
int __fastcall sub_606F1D30(_DWORD *a1);  /* 0x006f1d30 */
int __fastcall sub_606F1D7C(int *a1);  /* 0x006f1d7c */
int __fastcall sub_606F1E60(Actor *a1);  /* 0x006f1e60 */
int __fastcall sub_606F2288(int a1);  /* 0x006f2288 */
int __fastcall sub_606F23C8(int a1);  /* 0x006f23c8 */
int __fastcall sub_606F2590(int a1);  /* 0x006f2590 */
int __fastcall sub_606F25C8(int a1);  /* 0x006f25c8 */
int __fastcall sub_606F26D0(float *a1);  /* 0x006f26d0 */
bool __fastcall sub_606F2A14(int a1, int a2);  /* 0x006f2a14 */
void __fastcall sub_606F2B18(_DWORD *a1);  /* 0x006f2b18 */
int __fastcall sub_606F2BB0(_DWORD *a1);  /* 0x006f2bb0 */
void __fastcall sub_606F2C4C(_DWORD *a1);  /* 0x006f2c4c */
int __fastcall sub_606F2E40(int32x4_t *a1);  /* 0x006f2e40 */
int __fastcall sub_606F2F70(int32x4_t *a1);  /* 0x006f2f70 */
void __fastcall sub_606F3070(_DWORD *a1);  /* 0x006f3070 */
int __fastcall sub_606F30E0(_DWORD *a1);  /* 0x006f30e0 */
void __fastcall sub_606F3408(int a1, int a2);  /* 0x006f3408 */
int __fastcall sub_606F4044(int a1);  /* 0x006f4044 */
int __fastcall sub_606F45A8(int a1);  /* 0x006f45a8 */
int __fastcall sub_606F4650(int a1, unsigned int a2);  /* 0x006f4650 */
float __fastcall sub_606F4A88(int a1);  /* 0x006f4a88 */
int __fastcall sub_606F4FBC(int a1);  /* 0x006f4fbc */
int __fastcall sub_606F5378(int a1);  /* 0x006f5378 */
int __fastcall sub_606F53C4(int result);  /* 0x006f53c4 */
int __fastcall sub_606F544C(int a1);  /* 0x006f544c */
int __fastcall sub_606F5548(int *a1);  /* 0x006f5548 */
unsigned int __fastcall sub_606F5974(int a1);  /* 0x006f5974 */
bool __fastcall sub_606F5CB4(float *a1, float *a2);  /* 0x006f5cb4 */
int __fastcall sub_606F5D44(_DWORD ***a1, int a2, int a3, int a4);  /* 0x006f5d44 */
int __fastcall sub_606F5D9C(_DWORD *a1);  /* 0x006f5d9c */
int __fastcall sub_606F5E18(int a1);  /* 0x006f5e18 */
unsigned int __fastcall sub_606F5F3C(int a1);  /* 0x006f5f3c */
int __fastcall sub_606F5F74(int a1);  /* 0x006f5f74 */
int __fastcall sub_606F6004(int a1);  /* 0x006f6004 */
int __fastcall sub_606F60C0(int *a1);  /* 0x006f60c0 */
int __fastcall sub_606F635C(int a1);  /* 0x006f635c */
int __fastcall sub_606F6364(int a1, unsigned __int8 *a2);  /* 0x006f6364 */
int __fastcall sub_606F6590(int a1, int a2);  /* 0x006f6590 */
int __fastcall sub_606F6798(int a1, int a2);  /* 0x006f6798 */
bool __fastcall sub_606F6A14(float *a1, int a2);  /* 0x006f6a14 */
int __fastcall sub_606F6B7C(int result);  /* 0x006f6b7c */
int __fastcall sub_606F6BC0(int result);  /* 0x006f6bc0 */
int __fastcall sub_606F6C28(int a1);  /* 0x006f6c28 */
int __fastcall sub_606F6D10(int a1);  /* 0x006f6d10 */
int __fastcall sub_606F6E04(int a1);  /* 0x006f6e04 */
int __fastcall sub_606F713C(int a1);  /* 0x006f713c */
int __fastcall sub_606F77AC(int a1);  /* 0x006f77ac */
int __fastcall SE_AMB_WATERPILLAR_SPOUT_ref(int a1);  /* 0x006f780c */
int __fastcall sub_606F7D78(int a1);  /* 0x006f7d78 */
int __fastcall sub_606F7FFC(int a1);  /* 0x006f7ffc */
bool __fastcall sub_606F8540(int a1, int a2);  /* 0x006f8540 */
void __fastcall sub_606F8644(_DWORD *a1);  /* 0x006f8644 */
int __fastcall sub_606F86F8(_DWORD *a1);  /* 0x006f86f8 */
int __fastcall sub_606F87B0(int a1, unsigned int a2);  /* 0x006f87b0 */
int __fastcall sub_606F87BC(int a1);  /* 0x006f87bc */
int __fastcall sub_606F8A54(int a1);  /* 0x006f8a54 */
int __fastcall sub_606F8DE4(int result);  /* 0x006f8de4 */
int __fastcall sub_606F9178(int a1);  /* 0x006f9178 */
int __fastcall sub_606F9828(_DWORD *a1);  /* 0x006f9828 */
int __fastcall sub_606F9ED0(_DWORD *a1);  /* 0x006f9ed0 */
int __fastcall sub_606FA564(_DWORD *a1);  /* 0x006fa564 */
int __fastcall sub_606FABF4(_DWORD *a1);  /* 0x006fabf4 */
int __fastcall sub_606FB29C(_DWORD *a1);  /* 0x006fb29c */
int __fastcall sub_606FB908(_DWORD *a1);  /* 0x006fb908 */
int __fastcall sub_606FBF94(_DWORD *a1);  /* 0x006fbf94 */
int __fastcall sub_606FC430(int a1);  /* 0x006fc430 */
int __fastcall sub_606FC608(int a1);  /* 0x006fc608 */
bool __fastcall sub_606FC630(int a1, int a2);  /* 0x006fc630 */
int __fastcall sub_606FC734(Actor *a1);  /* 0x006fc734 */
void __fastcall sub_606FCB80(int a1, int a2);  /* 0x006fcb80 */
int __fastcall sub_606FD324(int a1);  /* 0x006fd324 */
int __fastcall sub_606FD430(int a1);  /* 0x006fd430 */
int __fastcall SE_AMB_WATERPILLAR_SPOUT_ref_2(int a1);  /* 0x006fd76c */
int __fastcall sub_606FD9B0(int a1);  /* 0x006fd9b0 */
int __fastcall sub_606FDB54(int a1);  /* 0x006fdb54 */
int __fastcall sub_606FDDF8(int a1);  /* 0x006fddf8 */
int __fastcall sub_606FE194(int a1);  /* 0x006fe194 */
int __fastcall sub_606FE3C0(int *a1);  /* 0x006fe3c0 */
float __fastcall sub_606FE65C(int a1);  /* 0x006fe65c */
int __fastcall sub_606FEC00(int a1, int a2);  /* 0x006fec00 */
int __fastcall sub_606FEC44(int a1);  /* 0x006fec44 */
int __fastcall sub_606FED80(int *a1);  /* 0x006fed80 */
int __fastcall sub_606FF04C(int a1);  /* 0x006ff04c */
int __fastcall sub_606FF3C4(_DWORD ***a1, int a2, int a3, int a4);  /* 0x006ff3c4 */
int __fastcall sub_606FF41C(int a1);  /* 0x006ff41c */
int __fastcall sub_606FF4BC(int a1);  /* 0x006ff4bc */
int __fastcall sub_606FF620(int result);  /* 0x006ff620 */
int __fastcall sub_606FF890(int result);  /* 0x006ff890 */
int __fastcall sub_606FFC34(int a1, int a2);  /* 0x006ffc34 */
bool __fastcall sub_606FFCBC(float *a1, int a2);  /* 0x006ffcbc */
int __fastcall sub_606FFE1C(int a1, unsigned __int8 *a2);  /* 0x006ffe1c */
int __fastcall sub_607000C8(int a1, int a2);  /* 0x007000c8 */
int __fastcall sub_607002CC(int a1, int a2);  /* 0x007002cc */
bool __fastcall sub_607004D0(int a1, int a2);  /* 0x007004d0 */
void __fastcall sub_607005D4(_DWORD *a1);  /* 0x007005d4 */
int __fastcall sub_6070067C(_DWORD *a1);  /* 0x0070067c */
int __fastcall sub_6070098C(int a1);  /* 0x0070098c */
int __fastcall sub_607009C4(int a1);  /* 0x007009c4 */
int __fastcall sub_607009E4(int a1);  /* 0x007009e4 */
int __fastcall sub_60700A2C(int a1);  /* 0x00700a2c */
int __fastcall sub_60700A84(int a1);  /* 0x00700a84 */
bool __fastcall sub_60700AA4(int a1);  /* 0x00700aa4 */
bool __fastcall sub_60700D20(int a1, int a2);  /* 0x00700d20 */
int __fastcall sub_60700E98(_DWORD *a1);  /* 0x00700e98 */
int __fastcall sub_60700F50(int a1, unsigned __int8 a2);  /* 0x00700f50 */
int __fastcall sub_60700F58(int a1, int a2);  /* 0x00700f58 */
int __fastcall sub_60701120(int a1);  /* 0x00701120 */
int __fastcall sub_607011B8(int a1);  /* 0x007011b8 */
bool __fastcall sub_60701418(Actor *a1);  /* 0x00701418 */
int __fastcall sub_6070147C(int a1);  /* 0x0070147c */
int __fastcall sub_607014A8(int a1);  /* 0x007014a8 */
int __fastcall sub_6070159C(int a1);  /* 0x0070159c */
float __fastcall sub_607015BC(float *a1);  /* 0x007015bc */
int __fastcall sub_60701744(int *a1);  /* 0x00701744 */
int __fastcall sub_60701C50(int result);  /* 0x00701c50 */
int __fastcall SE_AMB_WATERPILLAR_SPOUT_ref_3(int a1);  /* 0x00701c8c */
int __fastcall sub_60701FEC(int a1);  /* 0x00701fec */
int __fastcall sub_60702258(int a1);  /* 0x00702258 */
bool __fastcall sub_607025B0(int a1, int a2);  /* 0x007025b0 */
int __fastcall sub_6070279C(_DWORD *a1);  /* 0x0070279c */
int __fastcall sub_60702854(int a1, int a2);  /* 0x00702854 */
int __fastcall sub_607028F0(int a1);  /* 0x007028f0 */
int __fastcall sub_60702C14(int a1);  /* 0x00702c14 */
int __fastcall sub_60702D28(int a1);  /* 0x00702d28 */
int __fastcall sub_60702E2C(int a1);  /* 0x00702e2c */
int __fastcall sub_60702F30(int a1);  /* 0x00702f30 */
int __fastcall FloatingBubble_onCreate(int a1);  /* 0x00703160 */
int __fastcall sub_607035EC(int a1, int a2);  /* 0x007035ec */
int __fastcall sub_6070382C(_DWORD *a1);  /* 0x0070382c */
int __fastcall FloatingBubble_onExecute(int a1);  /* 0x007039a4 */
int __fastcall FloatingBubble_onDraw(int a1, int a2, int a3, int a4);  /* 0x00703c2c */
int __fastcall sub_60703E9C(int a1, float *a2);  /* 0x00703e9c */
bool __fastcall FloatingBubble_vf0(int a1, int a2);  /* 0x00704028 */
void __fastcall FloatingBubble_vf2(int a1);  /* 0x0070412c */
int __fastcall FloatingBubble_vf3(int a1);  /* 0x0070418c */
int __fastcall sub_607042EC(int a1);  /* 0x007042ec */
int __fastcall sub_6070438C(int a1, int a2);  /* 0x0070438c */
int __fastcall sub_60704498(int a1, int a2);  /* 0x00704498 */
int __fastcall sub_607045A4(int a1);  /* 0x007045a4 */
int __fastcall sub_60704774(int a1);  /* 0x00704774 */
int __fastcall sub_60704A44(int a1);  /* 0x00704a44 */
int __fastcall sub_60704B6C(int a1);  /* 0x00704b6c */
int __fastcall sub_60704C90(int a1, int a2);  /* 0x00704c90 */
int __fastcall sub_60704F9C(int result);  /* 0x00704f9c */
int __fastcall sub_60705034(int a1, int a2);  /* 0x00705034 */
bool __fastcall sub_60705100(int a1, int a2);  /* 0x00705100 */
bool __fastcall sub_60705114(int a1, int a2);  /* 0x00705114 */
void __fastcall sub_6070528C(_BYTE *a1);  /* 0x0070528c */
int __fastcall sub_60705328(_BYTE *a1);  /* 0x00705328 */
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
int __fastcall sub_60707A5C(int result);  /* 0x00707a5c */
int __fastcall sub_60707BEC(int result);  /* 0x00707bec */
int __fastcall sub_60707E70(int a1);  /* 0x00707e70 */
int __fastcall sub_6070818C(int a1);  /* 0x0070818c */
int __fastcall sub_60708244(int a1);  /* 0x00708244 */
int __fastcall sub_6070825C(int a1);  /* 0x0070825c */
bool __fastcall sub_60708284(int a1, int a2);  /* 0x00708284 */
void __fastcall sub_60708388(int a1);  /* 0x00708388 */
int __fastcall sub_60708458(int a1);  /* 0x00708458 */
int __fastcall sub_607086D0(int result);  /* 0x007086d0 */
int __fastcall sub_6070891C(int a1, int a2);  /* 0x0070891c */
int __fastcall sub_607089F0(_DWORD *a1);  /* 0x007089f0 */
int __fastcall sub_607095F4(int *a1);  /* 0x007095f4 */
int __fastcall sub_60709720(int a1, int a2);  /* 0x00709720 */
int __fastcall sub_607098E4(int a1, int a2);  /* 0x007098e4 */
int __fastcall sub_60709BA4(int a1, int a2, int a3);  /* 0x00709ba4 */
bool __fastcall sub_60709D94(int a1);  /* 0x00709d94 */
bool __fastcall sub_60709DB4(int a1);  /* 0x00709db4 */
bool __fastcall sub_60709DD4(int a1, int a2, int a3);  /* 0x00709dd4 */
int __fastcall sub_60709E0C(int a1, int a2);  /* 0x00709e0c */
int __fastcall sub_60709EBC(int a1);  /* 0x00709ebc */
int __fastcall sub_6070A108(int a1);  /* 0x0070a108 */
int __fastcall sub_6070A2F8(int a1, _DWORD *a2);  /* 0x0070a2f8 */
int __fastcall sub_6070A6C4(int a1);  /* 0x0070a6c4 */
int __fastcall sub_6070AA8C(int a1);  /* 0x0070aa8c */
int __fastcall sub_6070AD2C(int a1, int a2, int a3, int a4);  /* 0x0070ad2c */
int __fastcall sub_6070AD54(int a1);  /* 0x0070ad54 */
bool __fastcall sub_6070AEE0(int a1, int a2);  /* 0x0070aee0 */
int __fastcall sub_6070B058(int a1);  /* 0x0070b058 */
int __fastcall sub_6070B2A4(int result);  /* 0x0070b2a4 */
int __fastcall sub_6070B350(int a1);  /* 0x0070b350 */
int __fastcall sub_6070B440(int a1);  /* 0x0070b440 */
bool __fastcall sub_6070B594(int a1, int a2);  /* 0x0070b594 */
int __fastcall sub_6070B698(Actor *a1);  /* 0x0070b698 */
int __fastcall sub_6070B84C(int a1, int a2);  /* 0x0070b84c */
int __fastcall sub_6070BBE0(int a1);  /* 0x0070bbe0 */
int __fastcall LavaGeyser_vf5(int a1);  /* 0x0070bd94 */
int __fastcall LavaGeyser_vf8(_DWORD *a1);  /* 0x0070c198 */
int __fastcall LavaGeyser_vf12(int a1, int a2, int a3, int a4);  /* 0x0070c200 */
int __fastcall LavaGeyser_vf15(int a1);  /* 0x0070c29c */
int __fastcall LavaGeyser_vf157(_DWORD *a1);  /* 0x0070c2e0 */
int __fastcall LavaGeyser_vf158(float *a1);  /* 0x0070c40c */
float __fastcall ef_firepillar_ref(int a1);  /* 0x0070c688 */
int __fastcall LavaGeyser_vf162(int result);  /* 0x0070c72c */
void __fastcall LavaGeyser_vf163(int a1);  /* 0x0070c77c */
int __fastcall SE_AMB_FIREPILLAR_SPOUT_ref(float *a1);  /* 0x0070c91c */
int __fastcall LavaGeyser_vf169(int a1);  /* 0x0070c984 */
void __fastcall LavaGeyser_vf171(int a1);  /* 0x0070c9f8 */
int __fastcall LavaGeyser_vf170(int *a1);  /* 0x0070ca4c */
int __fastcall LavaGeyser_vf172(int a1);  /* 0x0070ca9c */
void __fastcall LavaGeyser_vf174(int a1);  /* 0x0070cb1c */
int __fastcall LavaGeyser_vf173(int *a1);  /* 0x0070cb70 */
int __fastcall LavaGeyser_vf176(float *a1);  /* 0x0070cbe8 */
int __fastcall sub_6070CC54(_DWORD *a1);  /* 0x0070cc54 */
int __fastcall LavaGeyser_vf179(int *a1);  /* 0x0070ccb4 */
int __fastcall LavaGeyser_vf181(int result);  /* 0x0070ce4c */
int __fastcall LavaGeyser_vf182(float *a1);  /* 0x0070cec0 */
int __fastcall LavaGeyser_vf185(int *a1);  /* 0x0070d068 */
int __fastcall sub_6070D240(float *a1);  /* 0x0070d240 */
int __fastcall LavaGeyser_vf3(_BYTE *a1);  /* 0x0070d32c */
int __fastcall LavaGeyser_vf161(int result);  /* 0x0070d344 */
int __fastcall LavaGeyser_vf167(int a1);  /* 0x0070d360 */
int __fastcall LavaGeyser_vf168(int a1);  /* 0x0070d398 */
int __fastcall sub_6070D3D4(int a1);  /* 0x0070d3d4 */
int __fastcall sub_6070D6F8(int a1, int a2, int a3, int a4);  /* 0x0070d6f8 */
int __fastcall sub_6070D740(int a1);  /* 0x0070d740 */
int __fastcall sub_6070D81C(int *a1, int a2);  /* 0x0070d81c */
int __fastcall sub_6070D980(_DWORD *a1);  /* 0x0070d980 */
int __fastcall sub_6070DA84(int a1);  /* 0x0070da84 */
bool __fastcall sub_6070DDD0(int a1, int a2);  /* 0x0070ddd0 */
void __fastcall sub_6070DF48(int a1);  /* 0x0070df48 */
int __fastcall sub_6070DF98(int a1);  /* 0x0070df98 */
int __fastcall sub_6070E920(int a1);  /* 0x0070e920 */
int __fastcall sub_6070E9E0(int a1);  /* 0x0070e9e0 */
int __fastcall sub_6070EAAC(int a1);  /* 0x0070eaac */
int __fastcall sub_6070EBD4(int a1);  /* 0x0070ebd4 */
void __fastcall sub_6070ECAC(int a1);  /* 0x0070ecac */
int __fastcall sub_6070EE4C(int a1);  /* 0x0070ee4c */
void __fastcall sub_6070EFF8(int a1);  /* 0x0070eff8 */
void __fastcall sub_6070F178(int a1);  /* 0x0070f178 */
int __fastcall sub_6070F180(int a1);  /* 0x0070f180 */
void __fastcall sub_6070F280(int a1);  /* 0x0070f280 */
void __fastcall sub_6070F454(int a1);  /* 0x0070f454 */
int __fastcall sub_6070F694(int a1);  /* 0x0070f694 */
int __fastcall sub_6070F8E0(_DWORD *a1);  /* 0x0070f8e0 */
int __fastcall sub_6070FAA0(int a1, unsigned int a2);  /* 0x0070faa0 */
int __fastcall sub_6070FC1C(_DWORD *a1);  /* 0x0070fc1c */
int __fastcall sub_6070FDA4(_DWORD *a1);  /* 0x0070fda4 */
int __fastcall sub_6070FDE8(int a1, int a2, int a3, int a4);  /* 0x0070fde8 */
bool __fastcall sub_6070FE10(int a1, int a2);  /* 0x0070fe10 */
int __fastcall sub_6070FF14(Actor *a1);  /* 0x0070ff14 */
void __fastcall sub_6071021C(int a1);  /* 0x0071021c */
int __fastcall sub_6071026C(int a1);  /* 0x0071026c */
int __fastcall sub_60710344(int a1);  /* 0x00710344 */
int __fastcall sub_60710420(int result);  /* 0x00710420 */
int __fastcall sub_60710434(int result);  /* 0x00710434 */
int __fastcall sub_6071046C(int a1);  /* 0x0071046c */
int __fastcall sub_60710570(int a1);  /* 0x00710570 */
int __fastcall sub_60710704(_DWORD *a1);  /* 0x00710704 */
int __fastcall sub_60710748(int a1, int a2, int a3, int a4);  /* 0x00710748 */
int __fastcall sub_60710760(int a1);  /* 0x00710760 */
int __fastcall sub_607108D0(int a1);  /* 0x007108d0 */
int __fastcall sub_607109E4(int a1);  /* 0x007109e4 */
int __fastcall sub_60710AF8(int a1);  /* 0x00710af8 */
int __fastcall sub_60710C40(struct sead_IDisposer *a1);  /* 0x00710c40 */
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
int __fastcall sub_607180AC(int a1);  /* 0x007180ac */
int __fastcall sub_60718420(int result, unsigned int a2, char a3);  /* 0x00718420 */
int __fastcall sub_607186B8(_DWORD *a1);  /* 0x007186b8 */
int __fastcall sub_607186C8(int a1);  /* 0x007186c8 */
int __fastcall sub_607186E4(int a1);  /* 0x007186e4 */
int __fastcall sub_60718884(struct sead_IDisposer *a1);  /* 0x00718884 */
int __fastcall sub_607189B4(_DWORD *a1);  /* 0x007189b4 */
int __fastcall sub_60718B04(int a1);  /* 0x00718b04 */
int __fastcall sub_60719364(int a1);  /* 0x00719364 */
int __fastcall sub_60719430(int a1, int a2);  /* 0x00719430 */
int __fastcall sub_607198F4(int result);  /* 0x007198f4 */
int __fastcall sub_60719AC0(int result, int a2, int a3, int a4);  /* 0x00719ac0 */
int __fastcall sub_60719B38(int a1, int a2, int a3, int a4, unsigned int a5);  /* 0x00719b38 */
int __fastcall sub_6071A768(struct sead_IDisposer *a1);  /* 0x0071a768 */
int __fastcall sub_6071A7C8(int a1);  /* 0x0071a7c8 */
int __fastcall sub_6071A840(int a1);  /* 0x0071a840 */
int __fastcall sub_6071AA08(int a1, int a2);  /* 0x0071aa08 */
void __fastcall sub_6071AA3C(_DWORD *a1, int a2);  /* 0x0071aa3c */
void __fastcall sub_6071ABC8(int a1);  /* 0x0071abc8 */
int __fastcall sub_6071AE28(int a1);  /* 0x0071ae28 */
int __fastcall sub_6071B084(int a1, int a2);  /* 0x0071b084 */
int __fastcall sub_6071B22C(int a1, unsigned int a2, unsigned int a3);  /* 0x0071b22c */
int __fastcall sub_6071B258(int a1, unsigned int a2, unsigned int a3, int a4);  /* 0x0071b258 */
int __fastcall sub_6071B284(int a1, unsigned int a2, unsigned int a3, int a4);  /* 0x0071b284 */
int __fastcall sub_6071B2AC(int a1, unsigned int a2, unsigned int a3);  /* 0x0071b2ac */
int __fastcall TilesetManager_getTileLayer(int a1, unsigned int a2, unsigned int a3);  /* 0x0071b2d4 */
int __fastcall sub_6071B2FC(int a1, unsigned int a2, int a3, unsigned int a4);  /* 0x0071b2fc */
int __fastcall sub_6071B620(int a1);  /* 0x0071b620 */
int __fastcall sub_6071B638(int a1, _WORD *a2);  /* 0x0071b638 */
int __fastcall sub_6071B680(int *a1, int a2);  /* 0x0071b680 */
int __fastcall sub_6071B734(int a1);  /* 0x0071b734 */
int __fastcall sub_6071B820(struct sead_IDisposer *a1);  /* 0x0071b820 */
int __fastcall sub_6071B890(int a1);  /* 0x0071b890 */
int __fastcall sub_6071B908(int a1);  /* 0x0071b908 */
int __fastcall sub_6071BF98(_DWORD *a1);  /* 0x0071bf98 */
int __fastcall sub_6071BFB0(_DWORD *a1);  /* 0x0071bfb0 */
int __fastcall sub_6071C14C(int a1);  /* 0x0071c14c */
int __fastcall sub_6071C67C(_DWORD *a1, int a2);  /* 0x0071c67c */
int __fastcall sub_6071D7D4(int a1, int a2);  /* 0x0071d7d4 */
int __fastcall sub_6071DC4C(int a1, int a2);  /* 0x0071dc4c */
int __fastcall sub_6071DC78(int a1, int a2);  /* 0x0071dc78 */
int __fastcall sub_6071DF2C(int a1, int a2);  /* 0x0071df2c */
int __fastcall sub_6071DF7C(int a1, int a2);  /* 0x0071df7c */
int __fastcall sub_6071E5AC(int a1, int a2);  /* 0x0071e5ac */
int __fastcall sub_6071E5F0(int a1, int a2);  /* 0x0071e5f0 */
int __fastcall sub_6071E638(int a1, int a2);  /* 0x0071e638 */
int __fastcall sub_6071E664(int a1, int a2);  /* 0x0071e664 */
int __fastcall sub_6071E788(int a1, int a2, int a3, float *a4, unsigned int a5);  /* 0x0071e788 */
int __fastcall sub_6071E9D0(int *a1, _DWORD *a2);  /* 0x0071e9d0 */
int __fastcall sub_6071EB4C(int a1, int a2);  /* 0x0071eb4c */
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
int __fastcall sub_6071FFF4(int a1);  /* 0x0071fff4 */
int __fastcall sub_60720018(int a1, int a2, int a3, float *a4, _DWORD *a5, float *a6);  /* 0x00720018 */
int __fastcall sub_607201B0(int result, unsigned int a2, float *a3, unsigned int a4);  /* 0x007201b0 */
int __fastcall sub_607206D0(int a1, int a2, int a3);  /* 0x007206d0 */
int __fastcall sub_60720844(int a1, int a2, unsigned int a3, unsigned int a4, void (__fastcall ***a5)(_DWORD, int));  /* 0x00720844 */
int __fastcall sub_60720B98(int result, unsigned int a2, _DWORD *a3, unsigned int a4);  /* 0x00720b98 */
int __fastcall sub_6072100C(int a1, _DWORD *a2);  /* 0x0072100c */
int __fastcall sub_607211C8(_DWORD *a1);  /* 0x007211c8 */
int __fastcall sub_607211EC(_DWORD *a1);  /* 0x007211ec */
int __fastcall sub_60721204(_DWORD *a1);  /* 0x00721204 */
int __fastcall sub_60721310(struct sead_IDisposer *a1);  /* 0x00721310 */
int __fastcall sub_60721380(int a1);  /* 0x00721380 */
int __fastcall sub_607214B0(int a1);  /* 0x007214b0 */
int __fastcall sub_6072166C(int a1);  /* 0x0072166c */
int __fastcall sub_60721780(int a1, int a2);  /* 0x00721780 */
int __fastcall sub_60722468(int a1);  /* 0x00722468 */
int __fastcall sub_607229E8(int a1, int a2, unsigned int a3, unsigned int a4, unsigned int a5, int a6);  /* 0x007229e8 */
int __fastcall sub_60722C30(int a1, int a2);  /* 0x00722c30 */
int __fastcall sub_60722E08(int a1, int a2, int a3, int a4);  /* 0x00722e08 */
int __fastcall sub_60722E20(int a1, int a2, int a3, int a4);  /* 0x00722e20 */
int __fastcall sub_60722E70(int a1, int a2, int a3, int a4);  /* 0x00722e70 */
int __fastcall sub_60722EC8(int a1, int a2, int a3, int a4);  /* 0x00722ec8 */
int __fastcall sub_60722EF0(int a1, int a2, int a3);  /* 0x00722ef0 */
int __fastcall sub_60722FB4(int a1, unsigned __int16 *a2, int a3);  /* 0x00722fb4 */
unsigned int __fastcall sub_607231A8(int a1, int a2);  /* 0x007231a8 */
int __fastcall TileLayer_getTilePtr(int a1, unsigned int a2, unsigned int a3, unsigned int *a4);  /* 0x007232d4 */
int __fastcall TileMgr_setTileArea_helper(int a1);  /* 0x00723334 */
int __fastcall sub_6072334C(int a1, _WORD *a2, int a3);  /* 0x0072334c */
int __fastcall sub_6072342C(int a1, int a2, int a3);  /* 0x0072342c */
int __fastcall sub_60723478(int a1);  /* 0x00723478 */
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
int __fastcall sub_607267DC(struct sead_IDisposer *a1);  /* 0x007267dc */
int __fastcall sub_60726908(int a1, int a2);  /* 0x00726908 */
int __fastcall sub_60726A40(int a1);  /* 0x00726a40 */
int __fastcall sub_60726B20(int a1);  /* 0x00726b20 */
int __fastcall sub_60726DF4(int a1);  /* 0x00726df4 */
int __fastcall sub_60726E2C(int a1);  /* 0x00726e2c */
int __fastcall sub_60726F28(int a1, int a2);  /* 0x00726f28 */
int __fastcall sub_607271C4(struct sead_IDisposer *a1);  /* 0x007271c4 */
int __fastcall Level_vf1(struct sead_IDisposer *a1);  /* 0x00727258 */
int __fastcall sub_60727340(int *a1, int a2);  /* 0x00727340 */
int __fastcall sub_607276B8(int a1, _BYTE *a2, float *a3);  /* 0x007276b8 */
int __fastcall sub_60727798(int a1, _BYTE *a2, float *a3);  /* 0x00727798 */
int __fastcall sub_60727950(_DWORD *a1, int a2);  /* 0x00727950 */
int __fastcall sub_607279C0(int *a1);  /* 0x007279c0 */
int __fastcall sub_60727C38(int result, int a2, int a3);  /* 0x00727c38 */
int __fastcall Level_getArea(int a1, unsigned int a2);  /* 0x00727c60 */
int __fastcall sub_60727C80(int a1, int a2);  /* 0x00727c80 */
int __fastcall sub_60727D48(int a1, int a2);  /* 0x00727d48 */
int __fastcall sub_60727D84(int a1, _DWORD *a2);  /* 0x00727d84 */
int __fastcall sub_60727E50(int a1);  /* 0x00727e50 */
int __fastcall sub_60727F98(_DWORD *a1);  /* 0x00727f98 */
int __fastcall sub_60728038(int a1);  /* 0x00728038 */
int __fastcall sub_6072815C(int a1, int a2);  /* 0x0072815c */
int __fastcall sub_60728534(_DWORD *a1, _DWORD *a2, int a3, int a4);  /* 0x00728534 */
int __fastcall sub_607287D4(_DWORD *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, int a6, int a7);  /* 0x007287d4 */
int __fastcall sub_60728B94(int result, int a2, int a3, int a4);  /* 0x00728b94 */
int __fastcall sub_60728FD8(_DWORD *a1);  /* 0x00728fd8 */
int __fastcall sub_60728FF0(_DWORD *a1);  /* 0x00728ff0 */
int __fastcall sub_60729014(_DWORD *a1);  /* 0x00729014 */
int __fastcall sub_6072902C(_DWORD *a1);  /* 0x0072902c */
int __fastcall sub_607290A4(struct sead_IDisposer *a1);  /* 0x007290a4 */
int __fastcall sub_60729104(int a1);  /* 0x00729104 */
int __fastcall sub_607291A8(int a1, _DWORD *a2);  /* 0x007291a8 */
int __fastcall sub_607292EC(int a1, char a2, int a3);  /* 0x007292ec */
int __fastcall sub_60729354(unsigned __int8 *a1, unsigned __int8 a2, int a3);  /* 0x00729354 */
int __fastcall sub_607293D4(int result);  /* 0x007293d4 */
int __fastcall sub_607293F0(int a1);  /* 0x007293f0 */
int __fastcall sub_6072962C(int a1);  /* 0x0072962c */
int __fastcall sub_607297EC(int a1, char a2, int a3);  /* 0x007297ec */
int __fastcall sub_607298AC(struct sead_IDisposer *a1);  /* 0x007298ac */
int __fastcall sub_60729980(int result);  /* 0x00729980 */
int __fastcall sub_607299E8(int a1, int a2);  /* 0x007299e8 */
int __fastcall sub_60729CF0(int a1, char a2);  /* 0x00729cf0 */
int __fastcall sub_60729D00(int a1);  /* 0x00729d00 */
int __fastcall sub_60729D40(_BYTE *a1);  /* 0x00729d40 */
int __fastcall sub_6072A0B8(int a1);  /* 0x0072a0b8 */
int __fastcall EventMgr_set(int result, unsigned int a2, int a3, int a4, int a5, int a6, int a7, int a8);  /* 0x0072a4b0 */
int __fastcall sub_6072A66C(int a1, __int64 a2);  /* 0x0072a66c */
int __fastcall sub_6072A6DC(int a1, int a2, int a3);  /* 0x0072a6dc */
int __fastcall sub_6072A748(int a1, unsigned int a2, int a3);  /* 0x0072a748 */
int __fastcall sub_6072A768(int a1);  /* 0x0072a768 */
int __fastcall sub_6072A794(int a1, unsigned int a2, int *a3);  /* 0x0072a794 */
int __fastcall sub_6072A7D4(int a1, unsigned int a2);  /* 0x0072a7d4 */
int __fastcall sub_6072A7EC(int a1, unsigned int a2);  /* 0x0072a7ec */
int __fastcall sub_6072A804(int a1, unsigned int a2);  /* 0x0072a804 */
__int64 __fastcall sub_6072A820(int a1, unsigned int a2);  /* 0x0072a820 */
int __fastcall sub_6072A83C(int a1, unsigned int a2);  /* 0x0072a83c */
int __fastcall mochimakiCannon_ready_ref(int a1);  /* 0x0072a860 */
int __fastcall sub_6072A8F8(_DWORD *a1);  /* 0x0072a8f8 */
int __fastcall sub_6072A954(int result);  /* 0x0072a954 */
int __fastcall SE_MG_CM_CANNON_MOVE_ref(int a1);  /* 0x0072a974 */
int __fastcall sub_6072AC28(int a1);  /* 0x0072ac28 */
int __fastcall sub_6072AF7C(_DWORD *a1);  /* 0x0072af7c */
int __fastcall sub_6072B2F8(int a1);  /* 0x0072b2f8 */
int __fastcall sub_6072B528(int a1);  /* 0x0072b528 */
int __fastcall sub_6072B590(int a1, int a2, int a3, int a4);  /* 0x0072b590 */
unsigned int __fastcall sub_6072B704(int a1);  /* 0x0072b704 */
int __fastcall sub_6072B9B0(_DWORD *a1);  /* 0x0072b9b0 */
int __fastcall sub_6072BBD8(_DWORD *a1);  /* 0x0072bbd8 */
bool __fastcall sub_6072C23C(int a1, int a2);  /* 0x0072c23c */
int __fastcall sub_6072C3B4(Actor *a1);  /* 0x0072c3b4 */
unsigned int __fastcall sub_6072C40C(unsigned int *a1, int a2);  /* 0x0072c40c */
int __fastcall sub_6072C710(int a1);  /* 0x0072c710 */
int __fastcall sub_6072C768(int a1);  /* 0x0072c768 */
int __fastcall sub_6072C864(int a1);  /* 0x0072c864 */
int __fastcall sub_6072C8E4(int a1);  /* 0x0072c8e4 */
bool __fastcall sub_6072C908(int a1, int a2);  /* 0x0072c908 */
float __fastcall sub_6072CDB8(int a1);  /* 0x0072cdb8 */
int __fastcall sub_6072D0AC(int result);  /* 0x0072d0ac */
int __fastcall SE_MG_CM_PANEL_OK_CNT_ref(int a1);  /* 0x0072d0c4 */
int __fastcall sub_6072D128(int result);  /* 0x0072d128 */
int __fastcall mochimakiBall_wait_ref(int a1);  /* 0x0072d1f8 */
int __fastcall sub_6072D268(int a1);  /* 0x0072d268 */
int __fastcall mochimakiBall_fail_ref(int a1);  /* 0x0072d360 */
int __fastcall sub_6072D4EC(int a1);  /* 0x0072d4ec */
int __fastcall sub_6072D610(int a1);  /* 0x0072d610 */
int __fastcall sub_6072D6FC(int a1);  /* 0x0072d6fc */
int __fastcall sub_6072D8EC(int a1);  /* 0x0072d8ec */
int __fastcall sub_6072D910(int a1, int a2, int a3, int a4);  /* 0x0072d910 */
int __fastcall sub_6072DA68(int a1);  /* 0x0072da68 */
bool __fastcall sub_6072DC98(int a1, int a2);  /* 0x0072dc98 */
int __fastcall sub_6072DD9C(Actor *a1);  /* 0x0072dd9c */
int __fastcall sub_6072DDD0(Actor *a1);  /* 0x0072ddd0 */
int __fastcall sub_6072E0A4(_DWORD *a1);  /* 0x0072e0a4 */
int __fastcall sub_6072E2F8(int a1);  /* 0x0072e2f8 */
int __fastcall SE_MG_SH_ITEM_NG_ref(int a1);  /* 0x0072e5c0 */
int __fastcall sub_6072EC58(int a1);  /* 0x0072ec58 */
int __fastcall sub_6072EC7C(int a1);  /* 0x0072ec7c */
int __fastcall sub_6072EC94(int a1);  /* 0x0072ec94 */
int __fastcall sub_6072EFA0(int a1, unsigned int a2);  /* 0x0072efa0 */
bool __fastcall sub_6072F1D8(int a1, int a2);  /* 0x0072f1d8 */
int __fastcall sub_6072F2DC(Actor *a1);  /* 0x0072f2dc */
int __fastcall sub_6072F518(int result);  /* 0x0072f518 */
int __fastcall sub_6072F564(_DWORD *a1);  /* 0x0072f564 */
int __fastcall sub_6072F5BC(int a1);  /* 0x0072f5bc */
int __fastcall sub_6072F5E8(_DWORD *a1);  /* 0x0072f5e8 */
int __fastcall sub_6072F62C(int a1);  /* 0x0072f62c */
int __fastcall sub_6072F67C(_DWORD *a1);  /* 0x0072f67c */
int __fastcall sub_6072F74C(_DWORD *a1);  /* 0x0072f74c */
int __fastcall SE_VOC_KINOPIO_TRAMPLED_ref(int a1);  /* 0x0072f790 */
int __fastcall SE_PLY_LAND_ROCK_ref(int a1);  /* 0x0072f858 */
void __fastcall sub_6072F978(int a1);  /* 0x0072f978 */
int __fastcall sub_6072FB00(int *a1);  /* 0x0072fb00 */
int __fastcall sub_6072FC70(int a1);  /* 0x0072fc70 */
int __fastcall sub_6072FFD0(unsigned __int8 *a1);  /* 0x0072ffd0 */
int __fastcall sub_607305B8(int a1);  /* 0x007305b8 */
int __fastcall sub_607305D0(_DWORD *a1);  /* 0x007305d0 */
int __fastcall sub_60730680(int a1);  /* 0x00730680 */
int __fastcall sub_607306EC(int a1, int a2, int a3);  /* 0x007306ec */
int __fastcall SE_PLY_CRASH_S_ref(int a1, int a2, int a3);  /* 0x007307a8 */
int __fastcall sub_60730A00(int a1, int a2, int *a3);  /* 0x00730a00 */
bool __fastcall sub_60730A04(int a1, int a2);  /* 0x00730a04 */
void __fastcall sub_60730B7C(int a1);  /* 0x00730b7c */
int __fastcall sub_60730C28(int a1);  /* 0x00730c28 */
int __fastcall sub_60730D1C(_DWORD *a1);  /* 0x00730d1c */
int __fastcall sub_60730D2C(int a1, int a2, int *a3);  /* 0x00730d2c */
int __fastcall sub_60730D30(int a1, int a2, int a3, int *a4);  /* 0x00730d30 */
int __fastcall sub_60730D34(int a1, int a2, int a3, int *a4);  /* 0x00730d34 */
void __fastcall sub_60730D38(int a1, int a2, float *a3, int *a4);  /* 0x00730d38 */
int __fastcall sub_60730D78(int a1, int a2, float *a3, int *a4);  /* 0x00730d78 */
int __fastcall sub_607310F0(struct sead_IDisposer *a1);  /* 0x007310f0 */
int __fastcall sub_60731250(_DWORD *a1);  /* 0x00731250 */
int __fastcall sub_60731290(int a1);  /* 0x00731290 */
int __fastcall sub_607312D4(int a1);  /* 0x007312d4 */
int __fastcall sub_607312F4(int a1, _DWORD *a2);  /* 0x007312f4 */
int __fastcall sub_6073131C(int a1, int a2, int a3);  /* 0x0073131c */
int __fastcall sub_60731324(int a1);  /* 0x00731324 */
int __fastcall sub_6073132C(int a1);  /* 0x0073132c */
int __fastcall sub_60731338(int a1);  /* 0x00731338 */
int __fastcall Actor_minigemuManager_build(int a1);  /* 0x00731344 */
int __fastcall sub_607313A8(int a1, int a2);  /* 0x007313a8 */
int __fastcall sub_607313FC(int a1);  /* 0x007313fc */
int __fastcall TalkWindow_KinopioTbox_00_ref(int a1);  /* 0x00731664 */
int __fastcall sub_607317FC(int a1);  /* 0x007317fc */
int __fastcall sub_60732038(int a1);  /* 0x00732038 */
int __fastcall sub_60732688(int a1);  /* 0x00732688 */
int __fastcall sub_60732F4C(int a1);  /* 0x00732f4c */
unsigned int __fastcall sub_60733344(int a1, unsigned int a2);  /* 0x00733344 */
int __fastcall sub_607335A4(int a1);  /* 0x007335a4 */
int __fastcall sub_607337BC(int a1);  /* 0x007337bc */
bool __fastcall sub_607339CC(int a1, int a2);  /* 0x007339cc */
int __fastcall sub_60733B40(_DWORD *a1);  /* 0x00733b40 */
bool __fastcall sub_60733B80(int a1, int a2);  /* 0x00733b80 */
int __fastcall sub_60733D68(_DWORD *a1);  /* 0x00733d68 */
int __fastcall sub_60733D78(int a1, int a2);  /* 0x00733d78 */
int __fastcall sub_60733E9C(int a1);  /* 0x00733e9c */
int __fastcall sub_60733EFC(int a1);  /* 0x00733efc */
int __fastcall shufflePanel_in_ref(int a1);  /* 0x00734064 */
int __fastcall shufflePanel_out_ref(int a1);  /* 0x00734228 */
int __fastcall sub_607343F8(int a1);  /* 0x007343f8 */
int __fastcall sub_60734624(_DWORD *a1);  /* 0x00734624 */
int __fastcall sub_60734748(int a1);  /* 0x00734748 */
int __fastcall sub_60734938(int a1);  /* 0x00734938 */
int __fastcall sub_60734AD8(int a1);  /* 0x00734ad8 */
int __fastcall sub_60734E40(int a1);  /* 0x00734e40 */
int __fastcall sub_6073508C(int a1);  /* 0x0073508c */
int __fastcall sub_607352AC(int a1);  /* 0x007352ac */
int __fastcall sub_607354C4(int a1);  /* 0x007354c4 */
int __fastcall sub_60735694(int a1);  /* 0x00735694 */
int __fastcall sub_607356C4(int a1, int a2, int a3, int a4);  /* 0x007356c4 */
bool __fastcall sub_607358F0(int a1, int a2);  /* 0x007358f0 */
void __fastcall sub_607359F4(_DWORD *a1);  /* 0x007359f4 */
int __fastcall sub_60735AE0(_DWORD *a1);  /* 0x00735ae0 */
int __fastcall sub_60735C20(_DWORD *a1);  /* 0x00735c20 */
int __fastcall sub_60735F68(int a1);  /* 0x00735f68 */
int __fastcall sub_60736510(int a1);  /* 0x00736510 */
int __fastcall sub_60736A74(int a1);  /* 0x00736a74 */
int __fastcall sub_6073722C(int result);  /* 0x0073722c */
int __fastcall sub_60737244(int a1);  /* 0x00737244 */
int __fastcall sub_607372B4(int a1);  /* 0x007372b4 */
int __fastcall sub_6073748C(int a1);  /* 0x0073748c */
int __fastcall sub_6073773C(_DWORD *a1);  /* 0x0073773c */
int __fastcall sub_607377D0(_DWORD *a1);  /* 0x007377d0 */
int __fastcall sub_60737934(int a1, int a2, int a3, int a4);  /* 0x00737934 */
int __fastcall sub_60737A9C(int a1, int a2, int a3, int a4);  /* 0x00737a9c */
int __fastcall sub_60737B28(_DWORD *a1);  /* 0x00737b28 */
int __fastcall sub_60737DC8(int a1, char a2, unsigned int a3);  /* 0x00737dc8 */
int __fastcall sub_60737E14(_BYTE *a1, char a2);  /* 0x00737e14 */
int __fastcall sub_60737E34(int a1);  /* 0x00737e34 */
int __fastcall sub_60739300(int a1);  /* 0x00739300 */
bool __fastcall sub_60739304(int a1, int a2);  /* 0x00739304 */
int __fastcall sub_607397FC(int a1);  /* 0x007397fc */
int __fastcall sub_60739A78(int a1);  /* 0x00739a78 */
int __fastcall sub_60739AF8(int a1);  /* 0x00739af8 */
int __fastcall sub_60739C1C(int a1);  /* 0x00739c1c */
unsigned int __fastcall sub_60739C9C(int a1);  /* 0x00739c9c */
int __fastcall sub_60739F3C(int result);  /* 0x00739f3c */
int __fastcall sub_60739F60(int a1);  /* 0x00739f60 */
int __fastcall sub_6073A1D4(int result);  /* 0x0073a1d4 */
int __fastcall sub_6073A1F8(int a1);  /* 0x0073a1f8 */
int __fastcall sub_6073A624(int result);  /* 0x0073a624 */
int __fastcall sub_6073A638(int result);  /* 0x0073a638 */
unsigned int __fastcall sub_6073A6EC(unsigned __int8 *a1);  /* 0x0073a6ec */
int __fastcall sub_6073A76C(int a1);  /* 0x0073a76c */
int __fastcall sub_6073A810(int a1);  /* 0x0073a810 */
unsigned int __fastcall sub_6073A87C(int a1);  /* 0x0073a87c */
int __fastcall sub_6073AB98(int result);  /* 0x0073ab98 */
int __fastcall sub_6073ABC8(int a1);  /* 0x0073abc8 */
int __fastcall sub_6073AF40(int a1);  /* 0x0073af40 */
int __fastcall sub_6073AF5C(int a1);  /* 0x0073af5c */
int __fastcall sub_6073AF74(int a1);  /* 0x0073af74 */
int __fastcall sub_6073AFA4(int a1, int a2);  /* 0x0073afa4 */
int __fastcall sub_6073B0FC(int a1);  /* 0x0073b0fc */
int __fastcall sub_6073B690(int a1);  /* 0x0073b690 */
int __fastcall sub_6073B6B0(unsigned __int8 *a1);  /* 0x0073b6b0 */
signed int __fastcall sub_6073B8E8(int a1);  /* 0x0073b8e8 */
unsigned int __fastcall sub_6073BA88(int a1);  /* 0x0073ba88 */
bool __fastcall sub_6073BAE0(int a1, int a2);  /* 0x0073bae0 */
int __fastcall sub_6073BBE4(Actor *a1);  /* 0x0073bbe4 */
int __fastcall sub_6073BFC8(int a1);  /* 0x0073bfc8 */
int __fastcall sub_6073C048(int result);  /* 0x0073c048 */
int __fastcall sub_6073C09C(int result);  /* 0x0073c09c */
int __fastcall sub_6073C0B4(int a1);  /* 0x0073c0b4 */
int __fastcall sub_6073C130(int a1);  /* 0x0073c130 */
int __fastcall sub_6073C190(int a1);  /* 0x0073c190 */
int __fastcall sub_6073C244(_DWORD *a1);  /* 0x0073c244 */
void __fastcall sub_6073C3EC(int a1);  /* 0x0073c3ec */
int __fastcall sub_6073C49C(int a1);  /* 0x0073c49c */
int __fastcall sub_6073C500(int a1);  /* 0x0073c500 */
int __fastcall sub_6073C7A8(int a1);  /* 0x0073c7a8 */
int __fastcall sub_6073C80C(int a1, int a2, int a3, int a4);  /* 0x0073c80c */
int __fastcall sub_6073C8A8(int a1);  /* 0x0073c8a8 */
int __fastcall SE_MG_YS_OSAMARU_ref(int a1);  /* 0x0073cb88 */
int __fastcall sub_6073CC08(int result);  /* 0x0073cc08 */
int __fastcall sub_6073CC30(int a1);  /* 0x0073cc30 */
int __fastcall SE_MG_YS_PANEL_HAKU_ref(int a1);  /* 0x0073cd30 */
int __fastcall sub_6073CF4C(int result);  /* 0x0073cf4c */
int __fastcall sub_6073CF5C(int result);  /* 0x0073cf5c */
int __fastcall sub_6073CFB8(int result);  /* 0x0073cfb8 */
int __fastcall sub_6073CFC8(int result);  /* 0x0073cfc8 */
int __fastcall Actor_surotochibiyoshi_build(_DWORD *a1);  /* 0x0073d024 */
int __fastcall sub_6073D120(int a1);  /* 0x0073d120 */
int __fastcall sub_6073D3E0(int a1);  /* 0x0073d3e0 */
int __fastcall sub_6073D8A8(int a1);  /* 0x0073d8a8 */
int __fastcall sub_6073DA34(int a1);  /* 0x0073da34 */
int __fastcall sub_6073DBC0(int a1);  /* 0x0073dbc0 */
int __fastcall sub_6073DDC4(int a1);  /* 0x0073ddc4 */
int __fastcall sub_6073DE5C(int a1);  /* 0x0073de5c */
int __fastcall sub_6073E080(int a1);  /* 0x0073e080 */
int __fastcall sub_6073E0FC(int result);  /* 0x0073e0fc */
int __fastcall sub_6073E10C(int result);  /* 0x0073e10c */
int __fastcall sub_6073E150(int a1);  /* 0x0073e150 */
int __fastcall sub_6073E1FC(int result);  /* 0x0073e1fc */
int __fastcall sub_6073E218(int result);  /* 0x0073e218 */
int __fastcall sub_6073E24C(int a1, int a2, int a3);  /* 0x0073e24c */
int __fastcall sub_6073E298(int result, int a2, _DWORD *a3);  /* 0x0073e298 */
bool __fastcall sub_6073ECD8(int a1);  /* 0x0073ecd8 */
int __fastcall sub_6073EDF4(int a1, int a2);  /* 0x0073edf4 */
bool __fastcall sub_6073EF00(int a1, int a2);  /* 0x0073ef00 */
void __fastcall sub_6073F004(int a1);  /* 0x0073f004 */
int __fastcall sub_6073F0DC(int a1);  /* 0x0073f0dc */
int __fastcall sub_6073F1D0(int a1);  /* 0x0073f1d0 */
int __fastcall slotPanel_wait_ref(int a1);  /* 0x0073f784 */
int __fastcall sub_6073F7F4(int result);  /* 0x0073f7f4 */
int __fastcall sub_6073F8BC(int a1);  /* 0x0073f8bc */
int __fastcall slotPanel_win_ref(int a1);  /* 0x0073fa1c */
int __fastcall slotPanel_wait_checked_ref(int a1);  /* 0x0073fa80 */
int __fastcall sub_6073FC84(int a1);  /* 0x0073fc84 */
int __fastcall sub_6073FD10(int a1);  /* 0x0073fd10 */
int __fastcall sub_6073FF2C(_DWORD *a1);  /* 0x0073ff2c */
int __fastcall sub_607400D8(int a1);  /* 0x007400d8 */
int __fastcall sub_607402C4(int a1);  /* 0x007402c4 */
int __fastcall sub_607403D4(int a1);  /* 0x007403d4 */
int __fastcall sub_60740438(int a1);  /* 0x00740438 */
int __fastcall sub_60740668(float *a1);  /* 0x00740668 */
int __fastcall sub_60740698(_DWORD *a1);  /* 0x00740698 */
bool __fastcall sub_607406C0(int a1, int a2);  /* 0x007406c0 */
void __fastcall sub_60740838(int a1);  /* 0x00740838 */
int __fastcall sub_607408D8(int a1);  /* 0x007408d8 */
int __fastcall sub_607409B4(_DWORD *a1);  /* 0x007409b4 */
int __fastcall sub_607409F8(int a1);  /* 0x007409f8 */
int __fastcall sub_60740D88(int result);  /* 0x00740d88 */
int __fastcall sub_60741564(int result);  /* 0x00741564 */
int __fastcall sub_60741590(int a1);  /* 0x00741590 */
int __fastcall sub_6074250C(int a1);  /* 0x0074250c */
int __fastcall sub_60742930(int a1);  /* 0x00742930 */
int __fastcall sub_60742A70(int a1);  /* 0x00742a70 */
int __fastcall sub_6074359C(int a1);  /* 0x0074359c */
int __fastcall sub_607435D4(int a1);  /* 0x007435d4 */
int __fastcall sub_60743778(int a1);  /* 0x00743778 */
int __fastcall sub_60743894(unsigned __int8 *a1);  /* 0x00743894 */
int __fastcall sub_60743BCC(unsigned __int8 *a1);  /* 0x00743bcc */
bool __fastcall sub_60743F04(int a1, int a2);  /* 0x00743f04 */
void __fastcall sub_60744008(_DWORD *a1);  /* 0x00744008 */
int __fastcall sub_60744068(_DWORD *a1);  /* 0x00744068 */
int __fastcall sub_607440CC(_DWORD *a1);  /* 0x007440cc */
void __fastcall sub_607442CC(_DWORD *a1);  /* 0x007442cc */
int __fastcall sub_607444C4(_DWORD *a1);  /* 0x007444c4 */
int __fastcall Actor_koinshin_StaffRoll_build(_DWORD *a1);  /* 0x00744900 */
int __fastcall sub_60744AFC(int a1);  /* 0x00744afc */
int __fastcall sub_60744C14(int a1);  /* 0x00744c14 */
int __fastcall sub_60744DBC(int a1);  /* 0x00744dbc */
int __fastcall sub_60745114(int a1);  /* 0x00745114 */
int __fastcall sub_60745174(int a1);  /* 0x00745174 */
int __fastcall sub_60745404(int a1, int a2);  /* 0x00745404 */
int __fastcall sub_60745580(float *a1);  /* 0x00745580 */
int __fastcall sub_60745974(int a1);  /* 0x00745974 */
int __fastcall sub_60745A24(_DWORD *a1);  /* 0x00745a24 */
int __fastcall sub_60745BF8(int a1, int a2, int a3, int a4);  /* 0x00745bf8 */
int __fastcall sub_60745C58(int a1);  /* 0x00745c58 */
int __fastcall sub_60745C7C(int a1, int a2, int a3);  /* 0x00745c7c */
int __fastcall sub_60745C88(int a1, int a2, int a3);  /* 0x00745c88 */
int __fastcall sub_60745DF4(int a1, int a2, int a3, int a4);  /* 0x00745df4 */
int __fastcall sub_60745F5C(int a1, int a2);  /* 0x00745f5c */
bool __fastcall sub_60745FAC(int a1, int a2);  /* 0x00745fac */
int __fastcall sub_60746198(Actor *a1);  /* 0x00746198 */
int __fastcall sub_607461C0(int a1, int a2);  /* 0x007461c0 */
int __fastcall sub_607461F8(int a1, _DWORD *a2);  /* 0x007461f8 */
int __fastcall sub_6074623C(int a1, int a2);  /* 0x0074623c */
int __fastcall sub_60746248(int result, _DWORD *a2);  /* 0x00746248 */
int __fastcall sub_60746258(int a1, int a2);  /* 0x00746258 */
int __fastcall sub_60746280(int a1);  /* 0x00746280 */
int __fastcall sub_60746288(int a1);  /* 0x00746288 */
int __fastcall Actor_arufabetoshin_StaffRoll_build(int *a1);  /* 0x007462b0 */
int __fastcall sub_607463EC(int result);  /* 0x007463ec */
int __fastcall sub_60746400(int result);  /* 0x00746400 */
int __fastcall sub_60746410(int a1);  /* 0x00746410 */
int __fastcall sub_60746530(int a1);  /* 0x00746530 */
int __fastcall sub_607466B4(int *a1);  /* 0x007466b4 */
int __fastcall sub_60746778(int result);  /* 0x00746778 */
int __fastcall sub_607467B8(int a1);  /* 0x007467b8 */
int __fastcall sub_607467E0(int a1);  /* 0x007467e0 */
int __fastcall sub_60746A24(int a1);  /* 0x00746a24 */
int __fastcall sub_60746ADC(int a1);  /* 0x00746adc */
int __fastcall sub_60746E10(int a1, int a2, int a3, int a4);  /* 0x00746e10 */
int __fastcall sub_60746E38(int a1, int a2, int a3, int a4, int a5);  /* 0x00746e38 */
int __fastcall sub_60746F3C(int a1, int a2);  /* 0x00746f3c */
int __fastcall sub_60746FA0(int a1);  /* 0x00746fa0 */
bool __fastcall sub_60747124(int a1);  /* 0x00747124 */
int __fastcall sub_60747148(int a1, float *a2, int a3);  /* 0x00747148 */
bool __fastcall sub_607471DC(int a1, int a2);  /* 0x007471dc */
int __fastcall sub_607473C8(Actor *a1);  /* 0x007473c8 */
int __fastcall sub_607473F0(int a1, int a2);  /* 0x007473f0 */
int __fastcall sub_60747428(int a1, _DWORD *a2);  /* 0x00747428 */
int __fastcall sub_6074746C(int a1, int a2);  /* 0x0074746c */
int __fastcall sub_60747478(int result, _DWORD *a2);  /* 0x00747478 */
int __fastcall sub_60747488(int a1, int a2);  /* 0x00747488 */
int __fastcall sub_607474B0(int a1);  /* 0x007474b0 */
int __fastcall sub_607474B8(int a1);  /* 0x007474b8 */
int __fastcall sub_607477B0(int result);  /* 0x007477b0 */
int __fastcall sub_6074780C(int a1);  /* 0x0074780c */
int __fastcall sub_60747BE4(_DWORD *a1);  /* 0x00747be4 */
int __fastcall sub_60747C8C(int a1);  /* 0x00747c8c */
int __fastcall sub_60747F9C(int a1);  /* 0x00747f9c */
int __fastcall sub_60748124(int a1);  /* 0x00748124 */
int __fastcall sub_607481DC(int a1);  /* 0x007481dc */
int __fastcall sub_60748238(int a1);  /* 0x00748238 */
int __fastcall sub_60748268(_DWORD *a1);  /* 0x00748268 */
int __fastcall sub_607482BC(int a1, float *a2);  /* 0x007482bc */
int __fastcall sub_60748588(Actor *a1);  /* 0x00748588 */
int __fastcall sub_60748780(int a1, int a2);  /* 0x00748780 */
int __fastcall sub_60748820(int a1);  /* 0x00748820 */
int __fastcall sub_60748A00(int a1);  /* 0x00748a00 */
int __fastcall sub_60748A1C(int a1, _DWORD *a2, int a3);  /* 0x00748a1c */
int __fastcall sub_60748BBC(int a1);  /* 0x00748bbc */
int __fastcall sub_60748CB8(int result);  /* 0x00748cb8 */
int __fastcall sub_60748D78(int a1);  /* 0x00748d78 */
int __fastcall sub_60748EF4(int a1);  /* 0x00748ef4 */
int __fastcall sub_60748F80(int result, float *a2);  /* 0x00748f80 */
int __fastcall sub_60748FA0(int a1, int a2);  /* 0x00748fa0 */
int __fastcall sub_60748FB0(int result);  /* 0x00748fb0 */
int __fastcall sub_60748FBC(int result);  /* 0x00748fbc */
int __fastcall sub_60748FCC(int a1);  /* 0x00748fcc */
int __fastcall sub_60748FE8(int a1);  /* 0x00748fe8 */
int __fastcall sub_60749010(int a1);  /* 0x00749010 */
int __fastcall sub_60749028(int a1);  /* 0x00749028 */
int __fastcall sub_60749064(int a1);  /* 0x00749064 */
int __fastcall sub_60749078(int result);  /* 0x00749078 */
int __fastcall sub_6074908C(int a1, float *a2);  /* 0x0074908c */
bool __fastcall sub_607491B4(int a1, int a2);  /* 0x007491b4 */
int __fastcall sub_6074939C(Actor *a1);  /* 0x0074939c */
int __fastcall sub_607493B8(int a1);  /* 0x007493b8 */
int __fastcall sub_607493F0(int a1, int a2);  /* 0x007493f0 */
int __fastcall sub_60749428(int a1, _DWORD *a2);  /* 0x00749428 */
int __fastcall sub_6074946C(int a1, int a2);  /* 0x0074946c */
int __fastcall sub_60749478(int result, _DWORD *a2);  /* 0x00749478 */
int __fastcall sub_60749488(int a1, int a2);  /* 0x00749488 */
int __fastcall sub_607494B0(int a1);  /* 0x007494b0 */
int __fastcall sub_607494B8(int a1);  /* 0x007494b8 */
int __fastcall Actor_chibiyoshi_StaffRoll_build(_DWORD *a1);  /* 0x007496a4 */
int __fastcall sub_607496E0(int a1);  /* 0x007496e0 */
int __fastcall sub_60749710(int result);  /* 0x00749710 */
int __fastcall sub_60749740(int a1);  /* 0x00749740 */
int __fastcall sub_6074975C(_DWORD *a1);  /* 0x0074975c */
int __fastcall sub_6074981C(int a1);  /* 0x0074981c */
int __fastcall sub_607498A0(int a1, char a2);  /* 0x007498a0 */
int __fastcall sub_60749958(int a1);  /* 0x00749958 */
int __fastcall sub_607499B0(int a1, float *a2);  /* 0x007499b0 */
int __fastcall sub_60749A78(int a1, float *a2);  /* 0x00749a78 */
int __fastcall sub_60749B8C(int a1);  /* 0x00749b8c */
int __fastcall sub_60749BB8(int result);  /* 0x00749bb8 */
int __fastcall sub_60749C54(Actor *a1);  /* 0x00749c54 */
int __fastcall sub_60749E54(int a1);  /* 0x00749e54 */
int __fastcall sub_6074A004(int a1);  /* 0x0074a004 */
int __fastcall sub_6074A02C(int *a1, int a2, int a3, int a4);  /* 0x0074a02c */
int __fastcall sub_6074A094(int a1);  /* 0x0074a094 */
int __fastcall sub_6074A148(int a1);  /* 0x0074a148 */
int __fastcall sub_6074A180(int a1);  /* 0x0074a180 */
int __fastcall sub_6074A1B0(_DWORD *a1);  /* 0x0074a1b0 */
int __fastcall sub_6074A208(int a1);  /* 0x0074a208 */
int __fastcall sub_6074A220(int result);  /* 0x0074a220 */
int __fastcall sub_6074A300(int a1);  /* 0x0074a300 */
int __fastcall sub_6074A32C(int result);  /* 0x0074a32c */
int __fastcall sub_6074A34C(int a1);  /* 0x0074a34c */
int __fastcall sub_6074A37C(int *a1);  /* 0x0074a37c */
int __fastcall sub_6074A468(Actor *a1);  /* 0x0074a468 */
int __fastcall sub_6074A664(int a1);  /* 0x0074a664 */
int __fastcall Actor_StaffRoll_Manager_build(int a1);  /* 0x0074a900 */
int __fastcall sub_6074AAD8(int a1);  /* 0x0074aad8 */
int __fastcall sub_6074AAE4(int a1);  /* 0x0074aae4 */
int __fastcall sub_6074AB1C(_DWORD *a1);  /* 0x0074ab1c */
int __fastcall sub_6074AB74(_DWORD *a1);  /* 0x0074ab74 */
int __fastcall sub_6074ACD0(int result);  /* 0x0074acd0 */
int __fastcall sub_6074AD24(int a1);  /* 0x0074ad24 */
int __fastcall sub_6074B0D0(int a1, int a2);  /* 0x0074b0d0 */
int __fastcall sub_6074B298(int a1);  /* 0x0074b298 */
int __fastcall sub_6074B2F0(int a1);  /* 0x0074b2f0 */
int __fastcall sub_6074B488(int a1, int a2);  /* 0x0074b488 */
int __fastcall sub_6074B5F8(int a1, int a2, float *a3);  /* 0x0074b5f8 */
int __fastcall sub_6074B6DC(int a1, int a2, float *a3);  /* 0x0074b6dc */
int __fastcall sub_6074BCA0(int a1, int a2, int a3, int a4);  /* 0x0074bca0 */
int __fastcall sub_6074BCD4(int a1);  /* 0x0074bcd4 */
int __fastcall sub_6074BF00(int result);  /* 0x0074bf00 */
int __fastcall sub_6074C0B8(_DWORD *a1);  /* 0x0074c0b8 */
int __fastcall sub_6074C1C8(int a1, int a2, int a3, int a4);  /* 0x0074c1c8 */
int __fastcall sub_6074C3EC(unsigned int a1);  /* 0x0074c3ec */
int __fastcall sub_6074C538(int a1, int a2, int *a3, int a4);  /* 0x0074c538 */
int __fastcall sub_6074C694(_DWORD *a1, _DWORD *a2);  /* 0x0074c694 */
int __fastcall sub_6074C894(int a1);  /* 0x0074c894 */
int __fastcall sub_6074CA64(int result);  /* 0x0074ca64 */
int __fastcall sub_6074CA7C(int result);  /* 0x0074ca7c */
bool __fastcall sub_6074CA94(int a1, int a2);  /* 0x0074ca94 */
int __fastcall sub_6074CC80(Actor *a1);  /* 0x0074cc80 */
int __fastcall sub_6074CCA8(int a1, int a2);  /* 0x0074cca8 */
int __fastcall sub_6074CCE0(int a1, _DWORD *a2);  /* 0x0074cce0 */
int __fastcall sub_6074CD24(int a1, int a2);  /* 0x0074cd24 */
int __fastcall sub_6074CD30(int result, _DWORD *a2);  /* 0x0074cd30 */
int __fastcall sub_6074CD40(int a1, int a2);  /* 0x0074cd40 */
int __fastcall sub_6074CD68(int a1);  /* 0x0074cd68 */
int __fastcall sub_6074CD70(int a1);  /* 0x0074cd70 */
int __fastcall sub_6074CFB8(int a1, int a2);  /* 0x0074cfb8 */
bool __fastcall sub_6074D130(int a1, int a2);  /* 0x0074d130 */
int __fastcall sub_6074D3A4(int a1, int a2);  /* 0x0074d3a4 */
int __fastcall Actor_toten_StaffRoll_build(int a1);  /* 0x0074d4c0 */
int __fastcall sub_6074D610(int a1);  /* 0x0074d610 */
int __fastcall sub_6074D664(int a1);  /* 0x0074d664 */
int __fastcall sub_6074D76C(int result);  /* 0x0074d76c */
int __fastcall sub_6074D778(int a1);  /* 0x0074d778 */
int __fastcall sub_6074D820(int a1);  /* 0x0074d820 */
int __fastcall sub_6074D8B8(int a1);  /* 0x0074d8b8 */
int __fastcall sub_6074DBCC(int a1);  /* 0x0074dbcc */
int __fastcall sub_6074DDBC(int a1);  /* 0x0074ddbc */
int __fastcall sub_6074DEC0(int a1);  /* 0x0074dec0 */
int __fastcall sub_6074DF4C(int a1, float *a2);  /* 0x0074df4c */
bool __fastcall sub_6074E0B8(int a1, int a2);  /* 0x0074e0b8 */
int __fastcall sub_6074E2A4(Actor *a1);  /* 0x0074e2a4 */
int __fastcall sub_6074E2CC(int a1, int a2);  /* 0x0074e2cc */
int __fastcall sub_6074E304(int a1, _DWORD *a2);  /* 0x0074e304 */
int __fastcall sub_6074E348(int a1, int a2);  /* 0x0074e348 */
int __fastcall sub_6074E354(int result, _DWORD *a2);  /* 0x0074e354 */
int __fastcall sub_6074E364(int a1, int a2);  /* 0x0074e364 */
int __fastcall sub_6074E38C(int a1);  /* 0x0074e38c */
int __fastcall sub_6074E394(int a1);  /* 0x0074e394 */
int __fastcall sub_6074E59C(int result);  /* 0x0074e59c */
int __fastcall sub_6074E5B0(int result);  /* 0x0074e5b0 */
int __fastcall sub_6074E5C4(int result);  /* 0x0074e5c4 */
int __fastcall sub_6074E5D8(int result);  /* 0x0074e5d8 */
int __fastcall sub_6074E5EC(int result);  /* 0x0074e5ec */
int __fastcall sub_6074E600(int result);  /* 0x0074e600 */
int __fastcall sub_6074E614(int result);  /* 0x0074e614 */
int __fastcall sub_6074E628(int result);  /* 0x0074e628 */
int __fastcall sub_6074E63C(int result);  /* 0x0074e63c */
int __fastcall sub_6074E650(int result);  /* 0x0074e650 */
int __fastcall sub_6074E72C(struct sead_IDisposer *a1);  /* 0x0074e72c */
int __fastcall sub_6074E7F8(int a1);  /* 0x0074e7f8 */
int __fastcall sub_6074E888(int a1, int a2, int a3);  /* 0x0074e888 */
bool __fastcall sub_6074E918(int a1, _DWORD *a2);  /* 0x0074e918 */
bool __fastcall sub_6074EC10(int a1, const char **a2, unsigned int a3);  /* 0x0074ec10 */
bool __fastcall sub_6074EC70(int a1);  /* 0x0074ec70 */
int __fastcall sub_6074ECFC(int a1, _DWORD *a2);  /* 0x0074ecfc */
int __fastcall sub_6074EDCC(int a1, _DWORD *a2);  /* 0x0074edcc */
int __fastcall sub_6074EE98(int result);  /* 0x0074ee98 */
int __fastcall sub_6074EED0(int a1);  /* 0x0074eed0 */
int __fastcall sub_6074F074(int result, int a2, int a3);  /* 0x0074f074 */
bool __fastcall sub_6074F0C4(int a1);  /* 0x0074f0c4 */
int __fastcall sub_6074F344(int a1);  /* 0x0074f344 */
int __fastcall sub_6074F358(int *a1, int a2, int a3, int a4);  /* 0x0074f358 */
int __fastcall sub_6074F3D4(int a1);  /* 0x0074f3d4 */
int __fastcall sub_6074F3FC(int a1, int a2, int a3, int a4);  /* 0x0074f3fc */
int __fastcall sub_6074F4D4(_DWORD *a1);  /* 0x0074f4d4 */
int __fastcall sub_6074F718(int a1);  /* 0x0074f718 */
int __fastcall sub_6074F944(_DWORD *a1);  /* 0x0074f944 */
int __fastcall sub_6074F9F4(int a1);  /* 0x0074f9f4 */
int __fastcall sub_6074FA4C(int a1);  /* 0x0074fa4c */
int __fastcall sub_6074FA6C(int a1);  /* 0x0074fa6c */
int __fastcall sub_6074FAE8(int a1);  /* 0x0074fae8 */
int __fastcall sub_6074FB10(int a1);  /* 0x0074fb10 */
bool __fastcall sub_6074FBB8(int a1, int a2);  /* 0x0074fbb8 */
void __fastcall sub_6074FDA0(_DWORD *a1);  /* 0x0074fda0 */
int __fastcall sub_6074FE28(_DWORD *a1);  /* 0x0074fe28 */
int __fastcall sub_6074FECC(int a1, int a2);  /* 0x0074fecc */
int __fastcall sub_6074FF04(int a1, _DWORD *a2);  /* 0x0074ff04 */
int __fastcall sub_6074FF48(int a1, int a2);  /* 0x0074ff48 */
int __fastcall sub_6074FF54(int result, _DWORD *a2);  /* 0x0074ff54 */
int __fastcall sub_6074FF64(int a1, int a2);  /* 0x0074ff64 */
int __fastcall sub_6074FF8C(int a1);  /* 0x0074ff8c */
int __fastcall sub_6074FF94(int a1);  /* 0x0074ff94 */
int __fastcall PlayerBase_ctor_helper_7501D0(int result);  /* 0x007501d0 */
int __fastcall sub_607501F0(int **a1);  /* 0x007501f0 */
int __fastcall sub_607503C0(int *a1);  /* 0x007503c0 */
int __fastcall sub_60750560(int **a1, int a2, int a3, int a4, int a5);  /* 0x00750560 */
int __fastcall sub_607505EC(int *a1, int *a2);  /* 0x007505ec */
int __fastcall sub_60751808(int a1, int a2, int a3, int a4, int a5);  /* 0x00751808 */
int __fastcall sub_60751BD0(_DWORD *a1);  /* 0x00751bd0 */
int __fastcall sub_60751BF0(int a1);  /* 0x00751bf0 */
int __fastcall sub_60751C3C(int a1);  /* 0x00751c3c */
int __fastcall sub_60752268(int a1);  /* 0x00752268 */
unsigned int __fastcall sub_6075227C(int *a1, int a2, int a3);  /* 0x0075227c */
int __fastcall sub_607523D0(int a1, int a2);  /* 0x007523d0 */
int __fastcall sub_607523E4(int a1, int a2);  /* 0x007523e4 */
int __fastcall sub_60753720(int a1, int a2, _DWORD *a3, int a4, int a5, int a6);  /* 0x00753720 */
int __fastcall sub_60755C38(int a1, _DWORD *a2, int a3, int a4);  /* 0x00755c38 */
int __fastcall CH_Metamorphose_ref(int a1, int a2);  /* 0x00756308 */
int __fastcall sub_60756A6C(int a1, unsigned int a2);  /* 0x00756a6c */
int __fastcall sub_60756A80(int a1, unsigned int a2);  /* 0x00756a80 */
int __fastcall sub_60756A94(_DWORD *a1);  /* 0x00756a94 */
int __fastcall PB_star_color_ref(int a1);  /* 0x00756b98 */
int __fastcall sub_60756C20(_DWORD *a1);  /* 0x00756c20 */
int __fastcall sub_60756D58(int a1);  /* 0x00756d58 */
int __fastcall sub_60756E50(int a1);  /* 0x00756e50 */
int __fastcall sub_60756E58(int a1);  /* 0x00756e58 */
int __fastcall sub_60756F3C(struct sead_IDisposer *a1);  /* 0x00756f3c */
bool __fastcall sub_60756F8C(int a1, int a2);  /* 0x00756f8c */
int __fastcall sub_60757174(int a1);  /* 0x00757174 */
int __fastcall sub_6075717C(int a1);  /* 0x0075717c */
int __fastcall sub_60757184(int a1);  /* 0x00757184 */
int __fastcall sub_6075718C(int a1);  /* 0x0075718c */
int __fastcall sub_607571A4(int result, int a2);  /* 0x007571a4 */
int __fastcall sub_607571B8(int a1, int a2);  /* 0x007571b8 */
int __fastcall sub_60757250(int a1, int a2);  /* 0x00757250 */
int __fastcall sub_607572EC(int a1, _DWORD *a2);  /* 0x007572ec */
int __fastcall sub_607573BC(int a1, _DWORD *a2);  /* 0x007573bc */
bool __fastcall sub_60757488(float *a1, float *a2);  /* 0x00757488 */
int __fastcall sub_607578C8(int a1, int a2, int a3, int a4, int a5);  /* 0x007578c8 */
int __fastcall sub_60757B24(_DWORD *a1);  /* 0x00757b24 */
int __fastcall sub_60757B58(int a1, int a2, int a3);  /* 0x00757b58 */
int __fastcall sub_60757CF0(int a1, int a2);  /* 0x00757cf0 */
int __fastcall sub_60758544(_DWORD *a1, int a2, _DWORD *a3, int a4, int a5, int a6);  /* 0x00758544 */
int __fastcall KB_Rgoal_puton_cap_ref(_DWORD *a1, _DWORD *a2, int a3, int a4);  /* 0x00759708 */
int __fastcall sub_60759880(int a1, unsigned int a2);  /* 0x00759880 */
int __fastcall sub_60759894(int a1, unsigned int a2);  /* 0x00759894 */
int __fastcall sub_607598A8(_DWORD *a1);  /* 0x007598a8 */
int __fastcall sub_607599BC(struct sead_IDisposer *a1);  /* 0x007599bc */
bool __fastcall sub_607599F0(int a1, int a2);  /* 0x007599f0 */
int __fastcall sub_6075A088(int a1, int a2, int a3, int a4, int a5);  /* 0x0075a088 */
int __fastcall sub_6075A3A4(int a1, int a2, int a3);  /* 0x0075a3a4 */
int __fastcall sub_6075A3EC(int a1, int *a2);  /* 0x0075a3ec */
int __fastcall sub_6075A528(_DWORD *a1);  /* 0x0075a528 */
int __fastcall sub_6075A558(int a1);  /* 0x0075a558 */
int __fastcall sub_6075A668(int a1, int a2, int a3, int a4, int a5);  /* 0x0075a668 */
int __fastcall sub_6075A6B0(int a1);  /* 0x0075a6b0 */
int __fastcall sub_6075A6D0(int result, int a2);  /* 0x0075a6d0 */
unsigned int __fastcall PC_switch_ref(int *a1, int a2, int a3);  /* 0x0075a6e4 */
int __fastcall sub_6075A8DC(int result, int a2);  /* 0x0075a8dc */
int __fastcall sub_6075A8E0(_DWORD *a1, int a2, _DWORD *a3, int a4, int a5, int a6);  /* 0x0075a8e0 */
int __fastcall sub_6075B210(int a1);  /* 0x0075b210 */
int __fastcall sub_6075B25C(_DWORD *a1);  /* 0x0075b25c */
int __fastcall sub_6075B3C0(struct sead_IDisposer *a1);  /* 0x0075b3c0 */
bool __fastcall sub_6075B3F4(int a1, int a2);  /* 0x0075b3f4 */
int __fastcall sub_6075B5DC(int a1, unsigned int a2);  /* 0x0075b5dc */
int __fastcall sub_6075B5F0(int a1, unsigned int a2);  /* 0x0075b5f0 */
int __fastcall sub_6075B8E4(int a1, int a2);  /* 0x0075b8e4 */
int __fastcall sub_6075BB60(struct sead_IDisposer *a1);  /* 0x0075bb60 */
bool __fastcall sub_6075BB70(int a1, int a2);  /* 0x0075bb70 */
int __fastcall sub_6075C02C(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10);  /* 0x0075c02c */
int __fastcall sub_6075C23C(_DWORD *a1);  /* 0x0075c23c */
int __fastcall sub_6075C304(int a1, int a2);  /* 0x0075c304 */
int __fastcall sub_6075C4E0(int a1, int a2, int *a3, int a4);  /* 0x0075c4e0 */
int __fastcall sub_6075C75C(int a1, int a2, int a3);  /* 0x0075c75c */
int __fastcall sub_6075C86C(int a1, int a2);  /* 0x0075c86c */
int __fastcall sub_6075CA28(_DWORD *a1);  /* 0x0075ca28 */
int __fastcall sub_6075CAD4(int a1);  /* 0x0075cad4 */
int __fastcall sub_6075CBC4(_DWORD *a1);  /* 0x0075cbc4 */
int __fastcall sub_6075CD88(int a1);  /* 0x0075cd88 */
int __fastcall sub_6075D048(int a1, int a2, int a3, int a4, int a5);  /* 0x0075d048 */
int __fastcall sub_6075D0C0(int a1, int a2);  /* 0x0075d0c0 */
unsigned int __fastcall sub_6075D160(int a1);  /* 0x0075d160 */
unsigned int __fastcall sub_6075D1B4(int a1);  /* 0x0075d1b4 */
unsigned int __fastcall sub_6075D2B0(_DWORD *a1);  /* 0x0075d2b0 */
unsigned int __fastcall sub_6075D31C(_DWORD *a1);  /* 0x0075d31c */
int __fastcall sub_6075D3AC(int a1, int a2, int a3);  /* 0x0075d3ac */
int __fastcall sub_6075D518(_DWORD *a1, int a2);  /* 0x0075d518 */
int __fastcall sub_6075D540(_DWORD *a1, int a2);  /* 0x0075d540 */
int __fastcall sub_6075D574(_DWORD *a1, int a2, _DWORD *a3, int a4, int a5, int a6);  /* 0x0075d574 */
int __fastcall MiiB_Rgoal_puton_cap_ref(_DWORD *a1, _DWORD *a2, int a3, int a4);  /* 0x0075d884 */
int __fastcall sub_6075DA50(struct sead_IDisposer *a1);  /* 0x0075da50 */
bool __fastcall sub_6075DAA8(int a1, int a2);  /* 0x0075daa8 */
int __fastcall sub_6075DC94(int result, char a2);  /* 0x0075dc94 */
int __fastcall sub_6075DC9C(int a1);  /* 0x0075dc9c */
int __fastcall sub_6075DCA4(int a1, unsigned int a2);  /* 0x0075dca4 */
int __fastcall sub_6075DD30(struct sead_IDisposer *a1);  /* 0x0075dd30 */
int __fastcall PlayerBase_ctor(int a1, int a2);  /* 0x0075defc */
void __fastcall sub_6075E5C0(int a1);  /* 0x0075e5c0 */
int __fastcall PlayerBase_vf3(int a1);  /* 0x0075e75c */
int __fastcall sub_6075E76C(int a1);  /* 0x0075e76c */
int __fastcall sub_6075E8F8(int a1);  /* 0x0075e8f8 */
int __fastcall PlayerBase_vf8(int *a1);  /* 0x0075ea1c */
int __fastcall sub_6075EAFC(int a1, unsigned int a2);  /* 0x0075eafc */
int __fastcall sub_6075EC74(int a1);  /* 0x0075ec74 */
int __fastcall sub_6075ED80(Actor *a1);  /* 0x0075ed80 */
int __fastcall sub_6075EDB0(int a1);  /* 0x0075edb0 */
int __fastcall sub_6075EDBC(int a1);  /* 0x0075edbc */
int __fastcall sub_6075EDC8(int a1);  /* 0x0075edc8 */
int __fastcall sub_6075EDD4(int a1);  /* 0x0075edd4 */
bool __fastcall sub_6075EDE0(int a1);  /* 0x0075ede0 */
bool __fastcall sub_6075EDF8(int a1);  /* 0x0075edf8 */
bool __fastcall sub_6075EE0C(int a1);  /* 0x0075ee0c */
int __fastcall sub_6075EEA0(int a1);  /* 0x0075eea0 */
int __fastcall sub_6075F36C(int a1, float *a2);  /* 0x0075f36c */
int __fastcall sub_6075F54C(int result);  /* 0x0075f54c */
int __fastcall sub_6075F5EC(int a1, float *a2);  /* 0x0075f5ec */
bool __fastcall sub_6075F914(_DWORD *a1);  /* 0x0075f914 */
int __fastcall sub_6075F950(int a1);  /* 0x0075f950 */
int __fastcall sub_6075F960(int a1);  /* 0x0075f960 */
int __fastcall sub_6075F970(int result, int a2);  /* 0x0075f970 */
int __fastcall sub_6075F980(int result, float *a2);  /* 0x0075f980 */
bool __fastcall sub_6075FA34(int a1);  /* 0x0075fa34 */
bool __fastcall sub_6075FA7C(int a1);  /* 0x0075fa7c */
int __fastcall sub_6075FB84(int a1, char a2, int a3);  /* 0x0075fb84 */
bool __fastcall sub_6075FC38(int a1);  /* 0x0075fc38 */
int __fastcall sub_6075FD24(_DWORD *a1);  /* 0x0075fd24 */
int __fastcall sub_6075FEE4(int a1, int a2);  /* 0x0075fee4 */
int __fastcall sub_6075FF9C(int a1);  /* 0x0075ff9c */
int __fastcall sub_6075FFC4(int a1, int a2);  /* 0x0075ffc4 */
int __fastcall sub_6075FFE4(int a1, int a2);  /* 0x0075ffe4 */
bool __fastcall sub_60760004(int a1, int a2);  /* 0x00760004 */
int __fastcall sub_60760034(int a1, int a2);  /* 0x00760034 */
int __fastcall sub_6076006C(int a1);  /* 0x0076006c */
int __fastcall sub_60760110(int result);  /* 0x00760110 */
int __fastcall sub_60760184(int a1);  /* 0x00760184 */
int __fastcall sub_607601D4(int result, int a2);  /* 0x007601d4 */
int __fastcall sub_607604BC(int a1);  /* 0x007604bc */
bool __fastcall PlayerBase_vf0(int a1, int a2);  /* 0x00760564 */
int __fastcall PlayerBase_vf20(int a1);  /* 0x0076074c */
int __fastcall sub_60760754(int a1);  /* 0x00760754 */
int __fastcall sub_607607C4(int a1);  /* 0x007607c4 */
int __fastcall sub_607607F8(int result);  /* 0x007607f8 */
int __fastcall sub_60760818(int a1, int a2);  /* 0x00760818 */
int __fastcall sub_60760850(int a1, _DWORD *a2);  /* 0x00760850 */
int __fastcall sub_60760894(int a1, int a2);  /* 0x00760894 */
int __fastcall sub_607608A0(int result, _DWORD *a2);  /* 0x007608a0 */
int __fastcall sub_607608B0(int a1, int a2);  /* 0x007608b0 */
int __fastcall sub_607608D8(int a1);  /* 0x007608d8 */
int __fastcall sub_607608E0(int a1);  /* 0x007608e0 */
int __fastcall sub_60760908(int a1);  /* 0x00760908 */
int __fastcall sub_60760B5C(int a1, float *a2);  /* 0x00760b5c */
int __fastcall sub_60760D74(int a1, int a2, char a3, int a4);  /* 0x00760d74 */
int __fastcall sub_6076107C(int a1);  /* 0x0076107c */
int __fastcall sub_607611C0(int a1, unsigned int a2);  /* 0x007611c0 */
int __fastcall sub_607611E0(int a1, int a2);  /* 0x007611e0 */
int __fastcall sub_6076125C(int a1);  /* 0x0076125c */
int __fastcall sub_607612CC(int a1, int a2);  /* 0x007612cc */
int __fastcall sub_60761474(int a1);  /* 0x00761474 */
int __fastcall sub_607620B4(int a1);  /* 0x007620b4 */
int __fastcall sub_60762374(int a1);  /* 0x00762374 */
int __fastcall sub_607624B4(int a1);  /* 0x007624b4 */
int __fastcall sub_60762584(int result);  /* 0x00762584 */
int __fastcall sub_60762598(int a1);  /* 0x00762598 */
int __fastcall sub_60762900(int a1);  /* 0x00762900 */
int __fastcall sub_60762B3C(int a1);  /* 0x00762b3c */
bool __fastcall sub_60762E40(int a1);  /* 0x00762e40 */
bool __fastcall sub_60762E88(int a1, int a2);  /* 0x00762e88 */
unsigned int __fastcall sub_60762EC0(int a1, _DWORD *a2);  /* 0x00762ec0 */
int __fastcall sub_60763400(int result);  /* 0x00763400 */
int __fastcall sub_607634A4(int a1);  /* 0x007634a4 */
int __fastcall sub_607634CC(int a1, int a2);  /* 0x007634cc */
int __fastcall sub_607634E8(int a1, int a2);  /* 0x007634e8 */
int __fastcall sub_6076357C(int a1);  /* 0x0076357c */
unsigned int __fastcall sub_6076370C(int a1);  /* 0x0076370c */
int __fastcall sub_607637D4(int a1);  /* 0x007637d4 */
int __fastcall sub_60763AD0(int a1);  /* 0x00763ad0 */
int __fastcall sub_60763CF8(int a1);  /* 0x00763cf8 */
int __fastcall sub_60763E28(float *a1);  /* 0x00763e28 */
bool __fastcall sub_60763F08(_DWORD *a1);  /* 0x00763f08 */
int __fastcall sub_6076402C(int a1);  /* 0x0076402c */
int __fastcall sub_607641D8(int result);  /* 0x007641d8 */
int __fastcall sub_60764200(_DWORD *a1, int a2, int a3, int a4);  /* 0x00764200 */
int __fastcall sub_60764270(char *a1, int a2);  /* 0x00764270 */
bool __fastcall sub_60764308(int a1);  /* 0x00764308 */
int __fastcall sub_60764338(int result);  /* 0x00764338 */
int __fastcall sub_6076438C(int result);  /* 0x0076438c */
int __fastcall sub_6076444C(int result, int a2, int a3);  /* 0x0076444c */
int __fastcall sub_6076445C(int result);  /* 0x0076445c */
int __fastcall sub_60764488(int a1);  /* 0x00764488 */
int __fastcall sub_6076454C(int a1, int a2);  /* 0x0076454c */
int __fastcall sub_607646DC(int a1, int *a2, int *a3, int *a4, int *a5);  /* 0x007646dc */
int __fastcall sub_607647C0(_DWORD *a1);  /* 0x007647c0 */
void __fastcall sub_60764A94(_DWORD *a1);  /* 0x00764a94 */
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
int __fastcall sub_60765948(int result, int a2, int a3);  /* 0x00765948 */
int __fastcall sub_60765960(int result);  /* 0x00765960 */
int __fastcall sub_6076598C(int a1, int a2, int a3);  /* 0x0076598c */
int __fastcall sub_60765BFC(int a1, int a2, int a3);  /* 0x00765bfc */
int __fastcall sub_60765DD0(float *a1, int a2);  /* 0x00765dd0 */
int __fastcall sub_60765E4C(int a1);  /* 0x00765e4c */
int __fastcall sub_60765E78(int a1, int a2);  /* 0x00765e78 */
int __fastcall sub_60765F88(int a1);  /* 0x00765f88 */
int __fastcall sub_60766074(int a1);  /* 0x00766074 */
int __fastcall sub_6076611C(int result, int a2, int a3);  /* 0x0076611c */
int __fastcall sub_60766160(int result);  /* 0x00766160 */
int __fastcall sub_6076617C(int result);  /* 0x0076617c */
int __fastcall sub_607662BC(int a1, int a2);  /* 0x007662bc */
int __fastcall sub_60766314(int a1, int a2, int a3);  /* 0x00766314 */
int __fastcall sub_607663F4(int result);  /* 0x007663f4 */
int __fastcall sub_6076645C(_DWORD *a1);  /* 0x0076645c */
int __fastcall sub_607666C8(int result);  /* 0x007666c8 */
bool __fastcall sub_607666D8(int a1);  /* 0x007666d8 */
bool __fastcall sub_607666EC(int a1, char a2);  /* 0x007666ec */
int __fastcall sub_60766708(int a1);  /* 0x00766708 */
bool __fastcall sub_60766714(int a1);  /* 0x00766714 */
int __fastcall sub_60766764(int a1);  /* 0x00766764 */
int __fastcall sub_60766958(int a1);  /* 0x00766958 */
int __fastcall sub_60766A4C(_DWORD *a1);  /* 0x00766a4c */
int __fastcall sub_60766A78(_BYTE *a1);  /* 0x00766a78 */
bool __fastcall sub_60766AA0(int a1);  /* 0x00766aa0 */
int __fastcall sub_60766B08(_DWORD *a1, int a2);  /* 0x00766b08 */
unsigned int __fastcall sub_60766BE8(int a1);  /* 0x00766be8 */
int __fastcall sub_60766CD4(int a1);  /* 0x00766cd4 */
int __fastcall sub_60766EF0(int a1);  /* 0x00766ef0 */
int __fastcall sub_60766EFC(int a1);  /* 0x00766efc */
int __fastcall sub_60767080(_DWORD *a1);  /* 0x00767080 */
int __fastcall sub_60767194(int a1);  /* 0x00767194 */
int __fastcall sub_60767234(int a1, int a2, int a3, int a4, int a5);  /* 0x00767234 */
int __fastcall sub_60767464(int a1);  /* 0x00767464 */
unsigned int __fastcall sub_607674FC(int a1);  /* 0x007674fc */
int __fastcall sub_6076781C(int a1);  /* 0x0076781c */
int __fastcall sub_60767E04(int *a1, int a2, int a3);  /* 0x00767e04 */
int __fastcall sub_60767E68(int a1);  /* 0x00767e68 */
int __fastcall sub_60767F80(StageActor *a1, _DWORD *a2, int a3);  /* 0x00767f80 */
int __fastcall sub_60768030(_DWORD *a1);  /* 0x00768030 */
unsigned int __fastcall sub_607680A8(int a1);  /* 0x007680a8 */
int __fastcall sub_607680DC(int a1);  /* 0x007680dc */
int __fastcall sub_607681C8(int a1);  /* 0x007681c8 */
int __fastcall sub_60768208(int result, int a2);  /* 0x00768208 */
int __fastcall sub_6076830C(int a1);  /* 0x0076830c */
int __fastcall sub_60768348(int a1);  /* 0x00768348 */
int __fastcall sub_60768384(_DWORD *a1);  /* 0x00768384 */
int __fastcall sub_607683D8(int a1);  /* 0x007683d8 */
unsigned int __fastcall sub_607683EC(int a1);  /* 0x007683ec */
int __fastcall sub_60768484(int a1);  /* 0x00768484 */
unsigned int __fastcall sub_60768540(_DWORD *a1);  /* 0x00768540 */
int __fastcall sub_607685A0(int a1);  /* 0x007685a0 */
int __fastcall sub_607685AC(int a1);  /* 0x007685ac */
int __fastcall sub_60768738(_DWORD *a1);  /* 0x00768738 */
unsigned int __fastcall sub_607687EC(_DWORD *a1);  /* 0x007687ec */
int __fastcall sub_60768838(int a1);  /* 0x00768838 */
int __fastcall sub_607689EC(int a1, int a2);  /* 0x007689ec */
int __fastcall sub_60768A5C(int a1);  /* 0x00768a5c */
int __fastcall sub_60768AE8(int a1);  /* 0x00768ae8 */
int __fastcall sub_60768C20(int a1, _DWORD *a2);  /* 0x00768c20 */
int __fastcall sub_60768D14(int a1, int a2);  /* 0x00768d14 */
int __fastcall sub_60768DA4(int a1);  /* 0x00768da4 */
bool __fastcall sub_60768E24(int a1);  /* 0x00768e24 */
int __fastcall sub_60768E4C(int a1);  /* 0x00768e4c */
bool __fastcall sub_60768EFC(int a1);  /* 0x00768efc */
int __fastcall sub_60768F28(int a1, int a2, int a3);  /* 0x00768f28 */
int __fastcall sub_60768F98(int result, int a2);  /* 0x00768f98 */
bool __fastcall sub_60768FC4(int a1, int a2);  /* 0x00768fc4 */
int __fastcall sub_6076906C(int *a1);  /* 0x0076906c */
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
int __fastcall sub_6076B204(int a1, int a2);  /* 0x0076b204 */
int __fastcall sub_6076B244(int a1);  /* 0x0076b244 */
int __fastcall sub_6076B300(int a1);  /* 0x0076b300 */
int __fastcall sub_6076B374(int a1);  /* 0x0076b374 */
int __fastcall sub_6076B378(int a1);  /* 0x0076b378 */
int __fastcall sub_6076B42C(int a1);  /* 0x0076b42c */
int __fastcall sub_6076B4A0(int a1);  /* 0x0076b4a0 */
int __fastcall sub_6076B4A4(_DWORD *a1);  /* 0x0076b4a4 */
int __fastcall sub_6076B4FC(int a1);  /* 0x0076b4fc */
int __fastcall sub_6076B570(int a1);  /* 0x0076b570 */
int __fastcall sub_6076B574(_DWORD *a1);  /* 0x0076b574 */
int __fastcall sub_6076B5CC(int a1);  /* 0x0076b5cc */
int __fastcall sub_6076B640(int a1);  /* 0x0076b640 */
int __fastcall sub_6076B644(_DWORD *a1);  /* 0x0076b644 */
int __fastcall sub_6076B6FC(int a1);  /* 0x0076b6fc */
int __fastcall sub_6076BA40(int a1);  /* 0x0076ba40 */
int __fastcall sub_6076BB58(int a1);  /* 0x0076bb58 */
int __fastcall sub_6076BB5C(int a1);  /* 0x0076bb5c */
int __fastcall sub_6076BC88(int a1);  /* 0x0076bc88 */
int __fastcall sub_6076BC8C(int a1, int a2);  /* 0x0076bc8c */
int __fastcall sub_6076BE1C(unsigned __int8 *a1);  /* 0x0076be1c */
int __fastcall sub_6076C168(int a1);  /* 0x0076c168 */
int __fastcall sub_6076C1A4(unsigned __int8 *a1);  /* 0x0076c1a4 */
int __fastcall sub_6076C1A8(int a1);  /* 0x0076c1a8 */
int __fastcall sub_6076C1E4(unsigned __int8 *a1);  /* 0x0076c1e4 */
int __fastcall sub_6076C45C(int a1);  /* 0x0076c45c */
unsigned int __fastcall sub_6076CC74(int a1, int a2);  /* 0x0076cc74 */
int __fastcall sub_6076CCA4(int *a1);  /* 0x0076cca4 */
int __fastcall sub_6076CD74(unsigned __int8 *a1);  /* 0x0076cd74 */
int __fastcall sub_6076CE2C(int a1);  /* 0x0076ce2c */
bool __fastcall sub_6076CE68(int a1);  /* 0x0076ce68 */
int __fastcall sub_6076CE90(int a1, float *a2, char a3);  /* 0x0076ce90 */
int __fastcall sub_6076D180(int result, int a2, int a3);  /* 0x0076d180 */
int __fastcall sub_6076D194(_DWORD *a1);  /* 0x0076d194 */
int __fastcall sub_6076D264(int result);  /* 0x0076d264 */
int __fastcall sub_6076D288(int *a1);  /* 0x0076d288 */
int __fastcall sub_6076D3D0(int a1);  /* 0x0076d3d0 */
int __fastcall sub_6076D814(int a1);  /* 0x0076d814 */
int __fastcall sub_6076DADC(int a1);  /* 0x0076dadc */
int __fastcall sub_6076DC50(int result);  /* 0x0076dc50 */
int __fastcall sub_6076DC6C(int a1, int a2);  /* 0x0076dc6c */
int __fastcall sub_6076DD38(int a1);  /* 0x0076dd38 */
int __fastcall sub_6076DD50(_BYTE *a1);  /* 0x0076dd50 */
int __fastcall sub_6076DDA8(int a1);  /* 0x0076dda8 */
bool __fastcall sub_6076DE14(_BYTE *a1);  /* 0x0076de14 */
int __fastcall PlayerBase_ctor_helper_76DE28(int a1, int a2);  /* 0x0076de28 */
int __fastcall sub_6076DE34(int a1);  /* 0x0076de34 */
bool __fastcall sub_6076DEAC(int a1);  /* 0x0076deac */
int __fastcall sub_6076DF24(int a1);  /* 0x0076df24 */
int __fastcall sub_6076DF8C(int a1);  /* 0x0076df8c */
int __fastcall sub_6076E2A4(int result);  /* 0x0076e2a4 */
int __fastcall sub_6076E2B8(int a1);  /* 0x0076e2b8 */
int __fastcall sub_6076E35C(int a1);  /* 0x0076e35c */
int __fastcall sub_6076E408(int a1);  /* 0x0076e408 */
int __fastcall sub_6076E428(int a1);  /* 0x0076e428 */
int __fastcall sub_6076E510(int result);  /* 0x0076e510 */
int __fastcall sub_6076E520(int result);  /* 0x0076e520 */
int __fastcall sub_6076E594(int a1);  /* 0x0076e594 */
int __fastcall sub_6076E5CC(int result);  /* 0x0076e5cc */
int __fastcall sub_6076E5DC(int a1);  /* 0x0076e5dc */
int __fastcall sub_6076E644(_DWORD *a1);  /* 0x0076e644 */
int __fastcall sub_6076E680(int result);  /* 0x0076e680 */
int __fastcall sub_6076E690(int a1, int a2, int a3, int a4);  /* 0x0076e690 */
int __fastcall sub_6076E7C8(int result);  /* 0x0076e7c8 */
int __fastcall sub_6076E7D8(int result);  /* 0x0076e7d8 */
int __fastcall sub_6076E9D8(int a1);  /* 0x0076e9d8 */
int __fastcall sub_6076EA78(int32x4_t *a1);  /* 0x0076ea78 */
int __fastcall sub_6076EAB8(int a1);  /* 0x0076eab8 */
int __fastcall sub_6076EB30(char *a1);  /* 0x0076eb30 */
int __fastcall sub_6076EB7C(int a1);  /* 0x0076eb7c */
int __fastcall sub_6076EC64(int a1, int a2);  /* 0x0076ec64 */
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
int __fastcall sub_6076F4A8(_DWORD *a1);  /* 0x0076f4a8 */
int __fastcall sub_6076F4D8(_DWORD *a1);  /* 0x0076f4d8 */
int __fastcall sub_6076F7F0(int a1);  /* 0x0076f7f0 */
int __fastcall sub_6076F8CC(int a1);  /* 0x0076f8cc */
int __fastcall sub_6076F988(int a1);  /* 0x0076f988 */
int __fastcall sub_6076FB40(int a1);  /* 0x0076fb40 */
int __fastcall sub_6076FBBC(int a1);  /* 0x0076fbbc */
int __fastcall sub_6076FC00(int *a1);  /* 0x0076fc00 */
int __fastcall sub_6076FCC0(int a1);  /* 0x0076fcc0 */
int __fastcall sub_6076FDD8(int32x4_t *a1);  /* 0x0076fdd8 */
int __fastcall sub_6076FE18(_DWORD *a1);  /* 0x0076fe18 */
int __fastcall sub_6076FE38(int result);  /* 0x0076fe38 */
int __fastcall sub_6076FEC8(int a1);  /* 0x0076fec8 */
int __fastcall sub_6076FF58(int a1);  /* 0x0076ff58 */
int __fastcall sub_60770018(_DWORD *a1);  /* 0x00770018 */
int __fastcall sub_607700D0(int *a1);  /* 0x007700d0 */
int __fastcall sub_6077019C(int result);  /* 0x0077019c */
int __fastcall sub_607701BC(int a1);  /* 0x007701bc */
int __fastcall sub_60770234(int *a1);  /* 0x00770234 */
int __fastcall sub_6077027C(int a1);  /* 0x0077027c */
int __fastcall sub_60770294(float *a1);  /* 0x00770294 */
int __fastcall sub_607702EC(int a1);  /* 0x007702ec */
int __fastcall sub_60770334(int a1);  /* 0x00770334 */
int __fastcall sub_607703DC(_DWORD *a1);  /* 0x007703dc */
int __fastcall sub_6077040C(_DWORD *a1, int a2, int a3, int a4);  /* 0x0077040c */
int __fastcall sub_60770484(int a1, int a2);  /* 0x00770484 */
int __fastcall sub_6077059C(int a1);  /* 0x0077059c */
int __fastcall SE_VOC_YS_STOMPED_ref(int a1);  /* 0x007707a0 */
int __fastcall sub_60770A84(int result);  /* 0x00770a84 */
int __fastcall sub_60770F74(int a1);  /* 0x00770f74 */
int __fastcall sub_607711C8(int a1, int a2, int a3);  /* 0x007711c8 */
int __fastcall sub_60771250(int a1, int a2, int a3);  /* 0x00771250 */
int __fastcall sub_607712BC(int result);  /* 0x007712bc */
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
int __fastcall sub_60773F18(int a1);  /* 0x00773f18 */
int __fastcall sub_60773F3C(int a1, int a2);  /* 0x00773f3c */
int __fastcall sub_60773F4C(int a1, int a2, int a3, int a4);  /* 0x00773f4c */
int __fastcall sub_60773F88(int a1, _DWORD *a2);  /* 0x00773f88 */
int __fastcall sub_60773FCC(int a1, int a2);  /* 0x00773fcc */
int __fastcall sub_60774040(int a1, int a2, int a3, int a4);  /* 0x00774040 */
int __fastcall sub_607740E8(int a1);  /* 0x007740e8 */
int __fastcall sub_607740F4(int a1);  /* 0x007740f4 */
int __fastcall sub_607742E8(int a1);  /* 0x007742e8 */
unsigned int __fastcall sub_60774360(int a1);  /* 0x00774360 */
int __fastcall sub_607743D8(int result);  /* 0x007743d8 */
int __fastcall sub_607743E8(int a1);  /* 0x007743e8 */
int __fastcall sub_607745DC(int a1);  /* 0x007745dc */
int __fastcall sub_607746B4(int a1);  /* 0x007746b4 */
int __fastcall sub_60774778(int a1);  /* 0x00774778 */
int __fastcall sub_607747EC(int result);  /* 0x007747ec */
int __fastcall sub_60774840(float *a1);  /* 0x00774840 */
int __fastcall sub_60774984(int a1);  /* 0x00774984 */
int __fastcall sub_60774A4C(int a1);  /* 0x00774a4c */
int __fastcall sub_60774AEC(int a1, int a2);  /* 0x00774aec */
int __fastcall sub_60774C10(int a1);  /* 0x00774c10 */
int __fastcall sub_60774C88(_DWORD *a1);  /* 0x00774c88 */
int __fastcall sub_60774D2C(int a1);  /* 0x00774d2c */
int __fastcall sub_60774DD8(_DWORD *a1);  /* 0x00774dd8 */
int __fastcall sub_60775188(int a1);  /* 0x00775188 */
int __fastcall sub_60775238(int result);  /* 0x00775238 */
int __fastcall sub_6077524C(int a1, int a2);  /* 0x0077524c */
int __fastcall sub_60775394(int a1, int a2);  /* 0x00775394 */
int __fastcall sub_607753D8(int a1);  /* 0x007753d8 */
int __fastcall sub_607755EC(_DWORD *a1);  /* 0x007755ec */
int __fastcall sub_60775620(int result);  /* 0x00775620 */
int __fastcall sub_60775AE8(struct sead_IDisposer *a1);  /* 0x00775ae8 */
int __fastcall sub_60775B48(int a1);  /* 0x00775b48 */
int __fastcall sub_60775BD0(int a1);  /* 0x00775bd0 */
int __fastcall sub_60775CF4(int a1);  /* 0x00775cf4 */
int __fastcall sub_60776070(int a1);  /* 0x00776070 */
int __fastcall sub_60777368(int a1);  /* 0x00777368 */
int __fastcall sub_607773A0(_DWORD *a1);  /* 0x007773a0 */
int __fastcall sub_6077743C(int a1);  /* 0x0077743c */
int __fastcall sub_60777478(int a1);  /* 0x00777478 */
int __fastcall sub_60777540(int a1);  /* 0x00777540 */
int __fastcall sub_6077777C(int a1);  /* 0x0077777c */
int __fastcall sub_607778BC(_DWORD *a1, int a2, int a3, int a4);  /* 0x007778bc */
int __fastcall sub_60777B74(_DWORD *a1);  /* 0x00777b74 */
int __fastcall sub_60777B9C(int a1);  /* 0x00777b9c */
bool __fastcall sub_60777BE4(int a1);  /* 0x00777be4 */
int __fastcall sub_60777C18(int a1);  /* 0x00777c18 */
int __fastcall sub_60777C68(int a1);  /* 0x00777c68 */
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
int __fastcall sub_6077832C(int a1);  /* 0x0077832c */
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
int __fastcall sub_60779FD8(int a1, unsigned int a2);  /* 0x00779fd8 */
int __fastcall sub_6077A004(int a1, unsigned int a2);  /* 0x0077a004 */
int __fastcall sub_6077A064(int a1, int a2);  /* 0x0077a064 */
int __fastcall sub_6077A260(int a1);  /* 0x0077a260 */
int __fastcall sub_6077A268(int a1);  /* 0x0077a268 */
int __fastcall sub_6077A420(int a1, unsigned int a2);  /* 0x0077a420 */
int __fastcall sub_6077A740(int a1, int a2);  /* 0x0077a740 */
int __fastcall sub_6077A918(_DWORD *a1, int a2);  /* 0x0077a918 */
int __fastcall sub_6077AA70(int a1, int a2);  /* 0x0077aa70 */
int __fastcall sub_6077AAA8(int a1, _DWORD *a2);  /* 0x0077aaa8 */
int __fastcall sub_6077AAEC(int a1, int a2);  /* 0x0077aaec */
int __fastcall sub_6077AAF8(int result, _DWORD *a2);  /* 0x0077aaf8 */
int __fastcall sub_6077AB08(int a1, int a2);  /* 0x0077ab08 */
int __fastcall sub_6077AB30(int a1);  /* 0x0077ab30 */
int __fastcall sub_6077AB38(int a1);  /* 0x0077ab38 */
int __fastcall sub_6077AED4(struct sead_IDisposer *a1);  /* 0x0077aed4 */
int __fastcall sub_6077AFBC(int result);  /* 0x0077afbc */
int __fastcall sub_6077AFCC(int a1);  /* 0x0077afcc */
int __fastcall sub_6077B090(unsigned int *a1);  /* 0x0077b090 */
int __fastcall sub_6077B520(int a1, float *a2);  /* 0x0077b520 */
bool __fastcall sub_6077B760(int a1, int a2);  /* 0x0077b760 */
bool __fastcall sub_6077B798(int a1, int a2);  /* 0x0077b798 */
int __fastcall sub_6077B8B0(int a1, int (__fastcall ***a2)(_DWORD, int));  /* 0x0077b8b0 */
int __fastcall sub_6077BA14(int a1, int (__fastcall ***a2)(_DWORD, int));  /* 0x0077ba14 */
int __fastcall sub_6077BB78(int a1, int (__fastcall ***a2)(_DWORD, int));  /* 0x0077bb78 */
int __fastcall sub_6077BCDC(int a1, int (__fastcall ***a2)(_DWORD, int));  /* 0x0077bcdc */
int __fastcall sub_6077BE40(int a1, int (__fastcall ***a2)(_DWORD, int));  /* 0x0077be40 */

/* ---- core.c ---- */
int __fastcall sub_600005D4(int a1, int *a2);  /* 0x000005d4 */
int __fastcall sub_600009FC(int a1);  /* 0x000009fc */
int __fastcall sub_60000A18(int a1);  /* 0x00000a18 */
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
int __fastcall sub_600027AC(int a1, int a2);  /* 0x000027ac */
bool __fastcall sub_60002844(int a1, int a2);  /* 0x00002844 */
int __fastcall sub_60002858(int a1, int a2);  /* 0x00002858 */
int __fastcall sub_600028F0(int a1, int a2);  /* 0x000028f0 */
int __fastcall sub_60002988(int a1, int a2);  /* 0x00002988 */
int __fastcall sub_60002A20(int a1, int a2);  /* 0x00002a20 */
int __fastcall sub_60002AB8(int a1, int a2);  /* 0x00002ab8 */
int __fastcall sub_60002B50(int a1);  /* 0x00002b50 */
int __fastcall sub_60002B6C(int result);  /* 0x00002b6c */
int __fastcall sub_60002B90(unsigned int a1);  /* 0x00002b90 */
int __fastcall sub_60002BC0(unsigned int a1, int *a2);  /* 0x00002bc0 */
int __fastcall sub_60003160(_BYTE *a1);  /* 0x00003160 */
int __fastcall sub_60003460(int a1);  /* 0x00003460 */
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
int __fastcall sub_60004110(struct sead_IDisposer *a1);  /* 0x00004110 */
int __fastcall sub_60004170(int a1);  /* 0x00004170 */
int __fastcall sub_600042A8(int a1);  /* 0x000042a8 */
int __fastcall sub_60004BAC(int a1, int *a2, char a3);  /* 0x00004bac */
int __fastcall sub_60004D1C(int a1, int *a2, char a3);  /* 0x00004d1c */
int __fastcall sub_60005160(int a1);  /* 0x00005160 */
int __fastcall sub_600053F8(unsigned __int8 *a1, unsigned int a2);  /* 0x000053f8 */
int __fastcall sub_6000588C(unsigned int a1);  /* 0x0000588c */
int __fastcall sub_60005B98(int a1);  /* 0x00005b98 */
int __fastcall sub_60005E40(int *a1, _BYTE *a2, unsigned __int16 *a3, int *a4, int a5);  /* 0x00005e40 */
int __fastcall Actor_editokoinakutarange_Tag_build_helper(int result, char a2);  /* 0x00006070 */
bool __fastcall sub_60006098(int *a1, int a2, int a3, int a4);  /* 0x00006098 */
int __fastcall sub_6000614C(int a1, int a2, int a3);  /* 0x0000614c */
int __fastcall sub_60006500(int a1, int a2);  /* 0x00006500 */
int __fastcall sub_6000683C(int *a1);  /* 0x0000683c */
int __fastcall sub_60006CD8(unsigned __int8 *a1, int a2);  /* 0x00006cd8 */
int __fastcall sub_60007160(int result);  /* 0x00007160 */
int __fastcall sub_60007178(int result);  /* 0x00007178 */
int __fastcall sub_600071A8(int result);  /* 0x000071a8 */
int __fastcall sub_600071D8(int result);  /* 0x000071d8 */
bool __fastcall sub_60007208(float *a1, float *a2);  /* 0x00007208 */
bool __fastcall sub_600072A0(float *a1);  /* 0x000072a0 */
bool __fastcall sub_60007318(float *a1);  /* 0x00007318 */
bool __fastcall sub_600073CC(int a1, int a2);  /* 0x000073cc */
bool __fastcall sub_600073F4(int a1, int a2);  /* 0x000073f4 */
int __fastcall sub_6000747C(struct sead_IDisposer *a1);  /* 0x0000747c */
int __fastcall sub_600074EC(int a1);  /* 0x000074ec */
int __fastcall sub_60007858(int a1, int a2);  /* 0x00007858 */
int __fastcall sub_60007B5C(int a1, int a2);  /* 0x00007b5c */
int __fastcall sub_60007BF0(int result, int *a2);  /* 0x00007bf0 */
int __fastcall ActorMgr_unk(int a1, int *a2);  /* 0x00007c5c */
int __fastcall sub_60007C88(_DWORD *a1);  /* 0x00007c88 */
int __fastcall sub_60007DB0(int a1);  /* 0x00007db0 */
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
bool __fastcall sub_6000941C(int a1, int a2);  /* 0x0000941c */
void __fastcall sub_60009520(Actor *a1);  /* 0x00009520 */
int __fastcall sub_60009550(Actor *a1);  /* 0x00009550 */
int __fastcall sub_6000970C(int a1, int a2);  /* 0x0000970c */
int __fastcall sub_60009744(int a1, _DWORD *a2);  /* 0x00009744 */
int __fastcall sub_60009788(int a1, int a2);  /* 0x00009788 */
int __fastcall sub_60009794(int result, _DWORD *a2);  /* 0x00009794 */
int __fastcall sub_600097A4(int a1, int a2);  /* 0x000097a4 */
int __fastcall sub_600097CC(int a1);  /* 0x000097cc */
int __fastcall sub_600097D4(int a1);  /* 0x000097d4 */
int __fastcall sub_60009814(int a1, int a2);  /* 0x00009814 */
int __fastcall sub_6000984C(int a1, _DWORD *a2);  /* 0x0000984c */
int __fastcall sub_60009890(int a1, int a2);  /* 0x00009890 */
int __fastcall sub_6000989C(int result, _DWORD *a2);  /* 0x0000989c */
int __fastcall sub_600098AC(int a1, int a2);  /* 0x000098ac */
int __fastcall sub_600098D4(int a1);  /* 0x000098d4 */
int __fastcall sub_600098DC(int a1);  /* 0x000098dc */
bool __fastcall sub_60009904(int a1);  /* 0x00009904 */
int __fastcall sub_60009ACC(struct sead_IDisposer *a1);  /* 0x00009acc */
int __fastcall sub_60009B2C(int a1);  /* 0x00009b2c */
int __fastcall sub_60009BA4(int a1);  /* 0x00009ba4 */
int __fastcall sub_60009D74(int a1);  /* 0x00009d74 */
int __fastcall sub_60009EC0(_DWORD *a1);  /* 0x00009ec0 */
int __fastcall sub_6000A2E8(int a1, unsigned int a2);  /* 0x0000a2e8 */
int __fastcall sub_6000A3C4(int result);  /* 0x0000a3c4 */
int __fastcall BigBoo_onCreate_helper(int result);  /* 0x0000a3f8 */
int __fastcall sub_6000A42C(int result);  /* 0x0000a42c */
int __fastcall sub_6000A454(int a1);  /* 0x0000a454 */
int __fastcall sub_6000A488(_BYTE *a1);  /* 0x0000a488 */
int __fastcall sub_6000A53C(_BYTE *a1);  /* 0x0000a53c */
int __fastcall sub_6000A5F0(int a1);  /* 0x0000a5f0 */
int __fastcall sub_6000A650(_BYTE *a1);  /* 0x0000a650 */
int __fastcall sub_6000A9AC(int a1, int a2);  /* 0x0000a9ac */
int __fastcall distanceToPLayer(float *a1, float *a2);  /* 0x0000aa44 */
bool __fastcall sub_6000ADDC(int a1, int a2);  /* 0x0000addc */
bool __fastcall sub_6000AED0(int a1, int a2);  /* 0x0000aed0 */
bool __fastcall sub_6000B0F8(_DWORD *a1);  /* 0x0000b0f8 */
bool __fastcall sub_6000B1CC(int a1, int a2);  /* 0x0000b1cc */
void __fastcall sub_6000B29C(struct sead_IDisposer *a1);  /* 0x0000b29c */
int __fastcall PlayerLookTarget_vf1(struct sead_IDisposer *a1);  /* 0x0000b2e4 */
int __fastcall sub_6000B3A4(struct sead_IDisposer *a1);  /* 0x0000b3a4 */
int __fastcall PlayerLookTargetList_add(int a1, int a2);  /* 0x0000b4d4 */
int __fastcall sub_6000B538(int a1, int a2, float *a3);  /* 0x0000b538 */
int __fastcall sub_6000B690(unsigned int *a1, int a2);  /* 0x0000b690 */
int __fastcall sub_6000B768(int a1, int (__fastcall ***a2)(_DWORD, int));  /* 0x0000b768 */
int __fastcall sub_6000B914(int a1, int a2);  /* 0x0000b914 */
int __fastcall sub_6000BB08(unsigned int *a1);  /* 0x0000bb08 */
int __fastcall sub_6000BBD4(int a1, int (__fastcall ***a2)(_DWORD, int));  /* 0x0000bbd4 */
int __fastcall sub_6000BD90(int a1, int a2);  /* 0x0000bd90 */
int __fastcall sub_6000BE68(int a1, int a2);  /* 0x0000be68 */
int __fastcall sub_6000BF78(int a1, int (__fastcall ***a2)(_DWORD, int));  /* 0x0000bf78 */
int __fastcall sub_6000C0F4(unsigned int *a1);  /* 0x0000c0f4 */
int __fastcall sub_6000C1D4(int a1, int a2);  /* 0x0000c1d4 */
int __fastcall sub_6000C3A4(int a1);  /* 0x0000c3a4 */
int __fastcall sub_6000C400(int result);  /* 0x0000c400 */
unsigned int __fastcall sub_6000C480(int a1);  /* 0x0000c480 */
int __fastcall sub_6000C654(int result);  /* 0x0000c654 */
unsigned int __fastcall sub_6000C6CC(int a1);  /* 0x0000c6cc */
int __fastcall sub_6000C8A4(int result);  /* 0x0000c8a4 */
int __fastcall sub_6000C91C(int a1);  /* 0x0000c91c */
__int64 __fastcall sub_6000CC2C(__int64 result);  /* 0x0000cc2c */
unsigned int __fastcall sub_6000CC80(int a1);  /* 0x0000cc80 */
__int64 __fastcall sub_6000CE28(__int64 result);  /* 0x0000ce28 */
unsigned int __fastcall sub_6000CE7C(int a1);  /* 0x0000ce7c */
int __fastcall sub_6000D030(int result);  /* 0x0000d030 */
unsigned int __fastcall sub_6000D0A8(int a1);  /* 0x0000d0a8 */
int __fastcall sub_6000D258(int result);  /* 0x0000d258 */
unsigned int __fastcall sub_6000D2E0(int a1);  /* 0x0000d2e0 */
int __fastcall sub_6000D54C(int result);  /* 0x0000d54c */
unsigned int __fastcall sub_6000D5D4(int a1);  /* 0x0000d5d4 */
int __fastcall sub_6000D848(int result);  /* 0x0000d848 */
unsigned int __fastcall sub_6000D8C8(int a1);  /* 0x0000d8c8 */
int __fastcall sub_6000DB40(int result);  /* 0x0000db40 */
unsigned int __fastcall sub_6000DBC8(int a1);  /* 0x0000dbc8 */
int __fastcall sub_6000DE48(int result);  /* 0x0000de48 */
unsigned int __fastcall sub_6000DEB0(int a1);  /* 0x0000deb0 */
int __fastcall sub_6000E110(int result);  /* 0x0000e110 */
unsigned int __fastcall sub_6000E178(int a1);  /* 0x0000e178 */
int __fastcall sub_6000E3E0(int result);  /* 0x0000e3e0 */
unsigned int __fastcall sub_6000E448(int a1);  /* 0x0000e448 */
int __fastcall sub_6000E6B8(int result);  /* 0x0000e6b8 */
unsigned int __fastcall sub_6000E718(int a1);  /* 0x0000e718 */
int __fastcall sub_6000E978(int result);  /* 0x0000e978 */
unsigned int __fastcall sub_6000EA00(int a1);  /* 0x0000ea00 */
int __fastcall sub_6000EBE0(int result);  /* 0x0000ebe0 */
int __fastcall sub_6000EC68(int a1);  /* 0x0000ec68 */
int __fastcall sub_6000EC7C(int result);  /* 0x0000ec7c */
int __fastcall sub_6000ED0C(int a1);  /* 0x0000ed0c */
int __fastcall sub_6000ED20(int result);  /* 0x0000ed20 */
int __fastcall sub_6000EDAC(int a1);  /* 0x0000edac */
int __fastcall sub_6000EDC0(int result);  /* 0x0000edc0 */
int __fastcall sub_6000EE4C(int a1);  /* 0x0000ee4c */
int __fastcall sub_6000EE60(int result);  /* 0x0000ee60 */
int __fastcall sub_6000EEF8(int a1);  /* 0x0000eef8 */
int __fastcall sub_6000EF10(int result);  /* 0x0000ef10 */
int __fastcall sub_6000EFA0(int a1);  /* 0x0000efa0 */
int __fastcall sub_6000EFB8(int result);  /* 0x0000efb8 */
int __fastcall sub_6000F048(int a1);  /* 0x0000f048 */
int __fastcall sub_6000F060(int result);  /* 0x0000f060 */
int __fastcall sub_6000F0F0(int a1);  /* 0x0000f0f0 */
int __fastcall LineFollower_init(int a1, float *a2, char a3, char a4, int a5);  /* 0x0000f198 */
int __fastcall sub_6000F338(int result);  /* 0x0000f338 */
int __fastcall sub_6000F350(int a1);  /* 0x0000f350 */
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
int __fastcall sub_60013DD0(int a1, int a2);  /* 0x00013dd0 */
int __fastcall sub_60013E08(int a1, _DWORD *a2);  /* 0x00013e08 */
int __fastcall sub_60013E4C(int a1, int a2);  /* 0x00013e4c */
int __fastcall sub_60013E58(int result, _DWORD *a2);  /* 0x00013e58 */
int __fastcall sub_60013E68(int a1, int a2);  /* 0x00013e68 */
int __fastcall sub_60013E90(int a1);  /* 0x00013e90 */
int __fastcall sub_60013E98(int a1);  /* 0x00013e98 */
int __fastcall Profile_loadResources(int result, int a2);  /* 0x00017fcc */
int __fastcall Profile_unsetResourcesLoaded(int result);  /* 0x00018238 */
int __fastcall sub_600182CC(int a1, _DWORD *a2);  /* 0x000182cc */
int __fastcall Profile_getPriority(unsigned int a1);  /* 0x0001839c */
int __fastcall Profile_getHasResources(unsigned int a1);  /* 0x000183c8 */
int __fastcall Profile_getResourceCountById(unsigned int a1);  /* 0x000183f0 */
int __fastcall Profile_getResourceListById(unsigned int a1);  /* 0x00020ff0 */
int __fastcall sub_60021018(int a1);  /* 0x00021018 */
int __fastcall sub_600210C8(int result, int a2);  /* 0x000210c8 */
int __fastcall sub_60021148(int a1, int a2, int a3, int a4);  /* 0x00021148 */
int __fastcall sub_600213C4(int a1, _DWORD *a2);  /* 0x000213c4 */
int __fastcall sub_60021460(int a1, int a2);  /* 0x00021460 */
bool __fastcall sub_6002155C(int a1, int a2);  /* 0x0002155c */
int __fastcall sub_60021570(int result, int a2);  /* 0x00021570 */
int __fastcall sub_6002160C(_DWORD *a1);  /* 0x0002160c */
int __fastcall sub_600216BC(struct sead_IDisposer *a1);  /* 0x000216bc */
bool __fastcall sub_600216F0(int a1, int a2);  /* 0x000216f0 */
int __fastcall EffectWrapper_dtorFree(struct sead_IDisposer *a1);  /* 0x00021864 */
bool __fastcall EffectWrapper_checkRTTI(int a1, int a2);  /* 0x00021898 */
int __fastcall sub_60021990(int a1, int a2);  /* 0x00021990 */
int __fastcall sub_60021A7C(struct sead_IDisposer *a1);  /* 0x00021a7c */
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
int __fastcall sub_60022B80(unsigned __int8 *a1);  /* 0x00022b80 */
int __fastcall sub_60022BA0(int a1);  /* 0x00022ba0 */
int __fastcall BootScene_create(int a1);  /* 0x00022c68 */
int __fastcall sub_60022C94(int a1);  /* 0x00022c94 */
int __fastcall sub_60022CC0(int a1, int *a2, int a3);  /* 0x00022cc0 */
int __fastcall AreaTask_create(int a1);  /* 0x00022dcc */
int __fastcall sub_60022DF8(int a1, int *a2);  /* 0x00022df8 */
int __fastcall sub_60022E9C(int a1);  /* 0x00022e9c */
int __fastcall sub_60023294(int a1);  /* 0x00023294 */
int __fastcall sub_6002336C(int result, int a2);  /* 0x0002336c */
int __fastcall sub_60023390(int a1);  /* 0x00023390 */
int __fastcall sub_60023650(int a1);  /* 0x00023650 */
int __fastcall sub_600236D8(int a1, int a2);  /* 0x000236d8 */
unsigned int __fastcall sub_60023A34(unsigned int a1, float *a2);  /* 0x00023a34 */
int __fastcall sub_60023CB0(int *a1);  /* 0x00023cb0 */
int __fastcall sub_60023F2C(int *a1);  /* 0x00023f2c */
int __fastcall sub_60023F84(int a1);  /* 0x00023f84 */
int __fastcall sub_60023FA8(int a1);  /* 0x00023fa8 */
int __fastcall sub_60024054(int a1);  /* 0x00024054 */
int __fastcall sub_60024074(unsigned int a1, char a2);  /* 0x00024074 */
bool __fastcall sub_60024090(int a1);  /* 0x00024090 */
int __fastcall sub_60024240(int result);  /* 0x00024240 */
int __fastcall sub_6002426C(int result);  /* 0x0002426c */
int __fastcall sub_600242D8(_WORD *a1, _BYTE *a2, _BYTE *a3, _BYTE *a4, __int16 a5);  /* 0x000242d8 */
int __fastcall sub_600243A0(int a1);  /* 0x000243a0 */
int __fastcall sub_6002442C(_DWORD *a1, int a2);  /* 0x0002442c */
int __fastcall sub_60024460(_DWORD *a1, int a2);  /* 0x00024460 */
int __fastcall sub_60024494(_DWORD *a1);  /* 0x00024494 */
int __fastcall BasicSoundActor1_vf1(_DWORD *a1);  /* 0x0002452c */
int __fastcall BasicSoundActor1_vf10(int a1, int a2, float *a3, int a4, int a5);  /* 0x0002459c */
int __fastcall BasicSoundActor2_vf1(_DWORD *a1);  /* 0x00024604 */
int __fastcall BasicSoundActor2_vf10(int a1, int a2, float *a3, int a4, int a5);  /* 0x00024674 */
int __fastcall sub_600246DC(struct nn_atk_SoundActor *a1);  /* 0x000246dc */
int __fastcall sub_600246EC(struct nn_atk_SoundActor *a1);  /* 0x000246ec */
int __fastcall sub_600246FC(int a1);  /* 0x000246fc */
int __fastcall TitleScene_create(int a1);  /* 0x00024728 */
int __fastcall GameSetupScene_create(int a1);  /* 0x00024808 */
int __fastcall sub_600248BC(int a1);  /* 0x000248bc */
int __fastcall CourseSelectTask_create(int a1);  /* 0x000248e8 */
int __fastcall sub_60024914(int a1, int a2);  /* 0x00024914 */
void __fastcall sub_60025AF4(int a1, int a2, int a3, unsigned int a4);  /* 0x00025af4 */
void __fastcall sub_60025B84(int a1, int a2, int a3, unsigned int a4);  /* 0x00025b84 */
int __fastcall sub_60025C14(int a1, int a2, int a3, int a4);  /* 0x00025c14 */
int __fastcall sub_60026BFC(_DWORD *a1);  /* 0x00026bfc */
int __fastcall sub_60026CC4(_DWORD *a1);  /* 0x00026cc4 */
int __fastcall sub_60026CE4(int a1, int a2, float *a3, int a4);  /* 0x00026ce4 */
int __fastcall MovingSoundActorHandle_dtorFree(int *a1);  /* 0x00026d94 */
bool __fastcall sub_60026DC8(int a1);  /* 0x00026dc8 */
int __fastcall sub_60026FB4(int a1);  /* 0x00026fb4 */
int __fastcall sub_600271FC(_DWORD *a1);  /* 0x000271fc */
int __fastcall sub_6002726C(int a1);  /* 0x0002726c */
int __fastcall sub_6002736C(int a1);  /* 0x0002736c */
int __fastcall sub_60027390(_DWORD *a1);  /* 0x00027390 */
int __fastcall sub_60027634(_DWORD *a1);  /* 0x00027634 */
int __fastcall sub_600276A8(_DWORD *a1);  /* 0x000276a8 */
int __fastcall sub_600276AC(int a1);  /* 0x000276ac */
int __fastcall sub_60027798(int a1);  /* 0x00027798 */
int __fastcall sub_60027938(int a1);  /* 0x00027938 */
int __fastcall sub_60027A7C(_DWORD *a1);  /* 0x00027a7c */
int __fastcall sub_60027AE4(int result);  /* 0x00027ae4 */
int __fastcall sub_60027B6C(int a1);  /* 0x00027b6c */
bool __fastcall sub_60027E38(int a1, int a2);  /* 0x00027e38 */
int __fastcall sub_60027F3C(Actor *a1);  /* 0x00027f3c */
int __fastcall sub_60027F78(int a1);  /* 0x00027f78 */
bool __fastcall sub_60027FB0(int a1);  /* 0x00027fb0 */
int __fastcall sub_6002819C(int a1);  /* 0x0002819c */
int __fastcall sub_60029108(int a1);  /* 0x00029108 */
int __fastcall sub_60029394(int a1);  /* 0x00029394 */
int __fastcall sub_6002976C(int result);  /* 0x0002976c */
int __fastcall sub_6002977C(int a1);  /* 0x0002977c */
int __fastcall sub_60029C54(float *a1);  /* 0x00029c54 */
int __fastcall sub_60029C94(int a1);  /* 0x00029c94 */
int __fastcall sub_6002A5A0(int a1);  /* 0x0002a5a0 */
int __fastcall sub_6002A680(_BYTE *a1);  /* 0x0002a680 */
int __fastcall sub_6002A758(int a1);  /* 0x0002a758 */
int __fastcall sub_6002A80C(int a1);  /* 0x0002a80c */
int __fastcall sub_6002A888(int a1);  /* 0x0002a888 */
int __fastcall sub_6002A9F0(int a1);  /* 0x0002a9f0 */
int __fastcall sub_6002AF20(int result);  /* 0x0002af20 */
int __fastcall sub_6002B314(_BYTE *a1);  /* 0x0002b314 */
int __fastcall sub_6002BA10(int a1);  /* 0x0002ba10 */
int __fastcall sub_6002BE04(int a1);  /* 0x0002be04 */
int __fastcall sub_6002BFD4(int a1);  /* 0x0002bfd4 */
int __fastcall sub_6002C718(int result);  /* 0x0002c718 */
int __fastcall sub_6002C728(int a1);  /* 0x0002c728 */
int __fastcall sub_6002C8D0(int a1);  /* 0x0002c8d0 */
int __fastcall sub_6002CB38(int a1);  /* 0x0002cb38 */
int __fastcall sub_6002CC74(int a1);  /* 0x0002cc74 */
int __fastcall sub_6002CD5C(int a1);  /* 0x0002cd5c */
int __fastcall sub_6002CD78(int a1);  /* 0x0002cd78 */
int __fastcall sub_6002CF6C(int a1);  /* 0x0002cf6c */
int __fastcall sub_6002D03C(int a1);  /* 0x0002d03c */
int __fastcall sub_6002D514(int a1);  /* 0x0002d514 */
int __fastcall sub_6002D7E4(int a1);  /* 0x0002d7e4 */
int __fastcall sub_6002D974(int a1);  /* 0x0002d974 */
int __fastcall sub_6002DD8C(int a1);  /* 0x0002dd8c */
int __fastcall sub_6002DDA8(int a1);  /* 0x0002dda8 */
int __fastcall sub_6002DE4C(int a1);  /* 0x0002de4c */
int __fastcall sub_6002DF48(int a1);  /* 0x0002df48 */
int __fastcall sub_6002DFBC(int a1);  /* 0x0002dfbc */
int __fastcall sub_6002E09C(int a1);  /* 0x0002e09c */
int __fastcall sub_6002E16C(int result);  /* 0x0002e16c */
int __fastcall SE_VOC_BKK_JUMP_ref(int a1);  /* 0x0002e24c */
int __fastcall sub_6002EA54(int a1);  /* 0x0002ea54 */
int __fastcall sub_6002EB24(int a1);  /* 0x0002eb24 */
int __fastcall sub_6002EBD8(int a1);  /* 0x0002ebd8 */
int __fastcall sub_6002F08C(int result);  /* 0x0002f08c */
int __fastcall sub_6002F09C(int a1);  /* 0x0002f09c */
int __fastcall sub_6002F5B0(int a1);  /* 0x0002f5b0 */
int __fastcall sub_6002F720(int a1, float *a2, int a3);  /* 0x0002f720 */
int __fastcall sub_6002F978(int a1);  /* 0x0002f978 */
int __fastcall sub_6002FAA0(unsigned __int8 *a1);  /* 0x0002faa0 */
bool __fastcall sub_60030530(int a1, int a2);  /* 0x00030530 */
unsigned int __fastcall sub_600305E0(unsigned int result, int a2);  /* 0x000305e0 */
bool __fastcall sub_60032268(int a1);  /* 0x00032268 */
int __fastcall sub_600323E0(int a1, int a2);  /* 0x000323e0 */
int __fastcall sub_60032478(int a1, int a2);  /* 0x00032478 */
int __fastcall sub_60032518(int a1);  /* 0x00032518 */
int __fastcall sub_60032540(int a1, int a2);  /* 0x00032540 */
int __fastcall sub_60032608(int result);  /* 0x00032608 */
int __fastcall sub_60032668(int a1);  /* 0x00032668 */
int __fastcall sub_60032690(int a1);  /* 0x00032690 */
bool __fastcall sub_60032694(int a1, int a2);  /* 0x00032694 */
int __fastcall sub_6003280C(Actor *a1);  /* 0x0003280c */
int __fastcall sub_60032848(int a1, int a2);  /* 0x00032848 */
int __fastcall sub_600328E4(int a1);  /* 0x000328e4 */
int __fastcall sub_60032A58(int a1);  /* 0x00032a58 */
bool __fastcall sub_60032AC4(int a1, int a2);  /* 0x00032ac4 */
void __fastcall sub_60032CB0(_BYTE *a1);  /* 0x00032cb0 */
int __fastcall sub_60032D4C(_BYTE *a1);  /* 0x00032d4c */
int __fastcall power_up(int a1);  /* 0x00032ecc */
int __fastcall sub_60033168(int a1);  /* 0x00033168 */
int __fastcall demo_scale_up_ref(int a1);  /* 0x00033208 */
int __fastcall sub_6003331C(int *a1);  /* 0x0003331c */
int __fastcall sub_60033374(int *a1);  /* 0x00033374 */
int __fastcall sub_60033498(int a1);  /* 0x00033498 */
int __fastcall sub_60033650(int a1);  /* 0x00033650 */
int __fastcall sub_60033674(int a1, int a2, int a3, int a4);  /* 0x00033674 */
bool __fastcall sub_6003369C(int a1, int a2);  /* 0x0003369c */
int __fastcall sub_60033864(Actor *a1);  /* 0x00033864 */
int __fastcall sub_60033B44(int result);  /* 0x00033b44 */
int __fastcall SE_OBJ_BOSS_KK_THUNDER_L_ref(int a1);  /* 0x00033b54 */
int __fastcall sub_60033C14(int a1);  /* 0x00033c14 */
int __fastcall SE_OBJ_BOSS_KK_THUNDER_SEPARATE_ref(_DWORD *a1);  /* 0x00033ce4 */
int __fastcall sub_60033D2C(int result);  /* 0x00033d2c */
int __fastcall SE_OBJ_BOSS(_DWORD *a1);  /* 0x00033d4c */
int __fastcall sub_60033EA4(int a1);  /* 0x00033ea4 */
int __fastcall sub_60033EF4(int a1);  /* 0x00033ef4 */
int __fastcall SE_OBJ_BOSS_KK_THUNDER_ref_2(int a1);  /* 0x00033f90 */
int __fastcall sub_600341D8(int a1);  /* 0x000341d8 */
int __fastcall sub_600342EC(int a1, int a2);  /* 0x000342ec */
bool __fastcall sub_6003433C(int a1, int a2, int a3);  /* 0x0003433c */
int __fastcall sub_60034384(int a1, int a2, int a3);  /* 0x00034384 */
int __fastcall sub_600343B4(int a1, int a2, int a3);  /* 0x000343b4 */
int __fastcall sub_600343E4(int a1, int a2, int a3);  /* 0x000343e4 */
int __fastcall sub_60034418(int a1, int a2, int a3);  /* 0x00034418 */
int __fastcall sub_6003444C(int a1, int a2);  /* 0x0003444c */
int __fastcall sub_60034474(int a1);  /* 0x00034474 */
int __fastcall sub_60034488(float *a1);  /* 0x00034488 */
int __fastcall sub_60034524(int a1, int a2);  /* 0x00034524 */
int __fastcall SE_OBJ_CMN_TOUCH_THUNDER_ref(int a1, int a2, int a3);  /* 0x0003454c */
bool __fastcall sub_60034590(int a1, int a2);  /* 0x00034590 */
void __fastcall sub_60034694(_DWORD *a1);  /* 0x00034694 */
int __fastcall sub_60034728(_DWORD *a1);  /* 0x00034728 */
int __fastcall sub_600347C0(int a1);  /* 0x000347c0 */
void __fastcall sub_60034830(int a1);  /* 0x00034830 */
int __fastcall sub_600348D0(int a1);  /* 0x000348d0 */
int __fastcall sub_60034BE0(int a1);  /* 0x00034be0 */
int __fastcall sub_60034C10(int a1);  /* 0x00034c10 */
int __fastcall jcb_demo_battleA_ref(int a1);  /* 0x00034c20 */
int __fastcall sub_60034D14(int a1);  /* 0x00034d14 */
int __fastcall sub_60034F8C(int a1);  /* 0x00034f8c */
int __fastcall sub_60034FD0(_DWORD *a1);  /* 0x00034fd0 */
int __fastcall sub_60035038(int a1);  /* 0x00035038 */
int __fastcall sub_60035178(int a1);  /* 0x00035178 */
int __fastcall jcb_attack_ed_ref(int a1);  /* 0x00035260 */
int __fastcall SE_VOC_JR_PUNCH_GO_ref(int a1);  /* 0x00035390 */
int __fastcall sub_600354A0(int a1);  /* 0x000354a0 */
int __fastcall sub_600354B8(int a1);  /* 0x000354b8 */
int __fastcall sub_600354C8(int a1);  /* 0x000354c8 */
int __fastcall sub_60035598(int a1, int a2, int a3, int a4);  /* 0x00035598 */
int __fastcall sub_60035DB0(int result);  /* 0x00035db0 */
int __fastcall sub_60035DC0(int a1);  /* 0x00035dc0 */
int __fastcall sub_60035EFC(int a1, int a2, int a3, int a4);  /* 0x00035efc */
int __fastcall sub_600363E4(int a1);  /* 0x000363e4 */
int __fastcall sub_60036428(_DWORD *a1);  /* 0x00036428 */
int __fastcall sub_600364B0(int a1);  /* 0x000364b0 */
int __fastcall sub_60036500(int a1);  /* 0x00036500 */
int __fastcall sub_60036528(int a1);  /* 0x00036528 */
int __fastcall SE_VOC_JR_READY_ref(int a1);  /* 0x0003656c */
int __fastcall sub_600367E8(_DWORD *a1);  /* 0x000367e8 */
int __fastcall sub_60036924(_DWORD *a1);  /* 0x00036924 */
int __fastcall sub_600369F0(_DWORD *a1);  /* 0x000369f0 */
int __fastcall sub_60036BF0(int a1);  /* 0x00036bf0 */
int __fastcall sub_60036DD0(int a1);  /* 0x00036dd0 */
int __fastcall sub_60036FB0(int a1);  /* 0x00036fb0 */
int __fastcall sub_60037090(_DWORD *a1, int a2, int a3);  /* 0x00037090 */
int __fastcall sub_60037108(_DWORD *a1);  /* 0x00037108 */
int __fastcall sub_60037A58(int a1);  /* 0x00037a58 */
int __fastcall sub_60037BB0(int a1, int a2, int a3);  /* 0x00037bb0 */
int __fastcall sub_60038634(int a1);  /* 0x00038634 */
int __fastcall sub_60038650(int a1);  /* 0x00038650 */
int __fastcall sub_60038670(int a1);  /* 0x00038670 */
int __fastcall sub_6003868C(int a1);  /* 0x0003868c */
int __fastcall sub_600386A8(int a1);  /* 0x000386a8 */
int __fastcall sub_600386C8(int a1);  /* 0x000386c8 */
int __fastcall sub_600386E4(int a1);  /* 0x000386e4 */
int __fastcall sub_60038700(int a1);  /* 0x00038700 */
int __fastcall sub_6003871C(int a1);  /* 0x0003871c */
int __fastcall sub_6003873C(int a1);  /* 0x0003873c */
int __fastcall sub_60038758(int a1);  /* 0x00038758 */
int __fastcall sub_60038774(int a1);  /* 0x00038774 */
int __fastcall sub_60038790(int a1);  /* 0x00038790 */
int __fastcall sub_600387AC(int a1);  /* 0x000387ac */
void __fastcall sub_600387CC(int a1, int a2, int a3);  /* 0x000387cc */
int __fastcall sub_60038B10(int a1);  /* 0x00038b10 */
int __fastcall sub_60038C3C(int a1);  /* 0x00038c3c */
int __fastcall sub_60038CA8(_DWORD *a1);  /* 0x00038ca8 */
int __fastcall jcb_damage_ref(int a1);  /* 0x00038d9c */
int __fastcall jcb_squat_ref(int a1);  /* 0x00038f0c */
int __fastcall jcb_damage_up_ref(int a1);  /* 0x00038ff8 */
int __fastcall sub_600390DC(int a1);  /* 0x000390dc */
int __fastcall sub_60039114(int a1);  /* 0x00039114 */
int __fastcall sub_600391F8(int a1);  /* 0x000391f8 */
void __fastcall sub_6003936C(int a1);  /* 0x0003936c */
int __fastcall sub_60039454(int a1);  /* 0x00039454 */
int __fastcall sub_600396C8(int a1);  /* 0x000396c8 */
int __fastcall sub_600396E4(int a1);  /* 0x000396e4 */
bool __fastcall sub_60039BB4(int a1);  /* 0x00039bb4 */
int __fastcall sub_60039CA0(int a1);  /* 0x00039ca0 */
int __fastcall sub_60039D1C(int a1);  /* 0x00039d1c */
bool __fastcall sub_60039D28(int a1);  /* 0x00039d28 */
bool __fastcall sub_60039D74(int a1);  /* 0x00039d74 */
int __fastcall sub_60039F60(int a1, int a2);  /* 0x00039f60 */
int __fastcall sub_60039FFC(int a1, int a2);  /* 0x00039ffc */
int __fastcall sub_6003A094(int a1, int a2);  /* 0x0003a094 */
int __fastcall sub_6003A7A8(int a1);  /* 0x0003a7a8 */
int __fastcall sub_6003A7C4(int a1);  /* 0x0003a7c4 */
int __fastcall sub_6003A7CC(int a1);  /* 0x0003a7cc */
int __fastcall SE_BOSS_JR_CLOWN_ref(_DWORD *a1);  /* 0x0003a894 */
int __fastcall sub_6003AA94(int result);  /* 0x0003aa94 */
int __fastcall sub_6003AAA4(int a1);  /* 0x0003aaa4 */
int __fastcall sub_6003AB08(int a1);  /* 0x0003ab08 */
int __fastcall sub_6003AC58(int a1);  /* 0x0003ac58 */
int __fastcall SE_BOSS_JR_CLOWN_JAB_ref(int a1);  /* 0x0003ad74 */
int __fastcall SE_BOSS_JR_CLOWN_JAB_ref_2(int a1);  /* 0x0003ae78 */
int __fastcall jcb_jab_ref(int a1);  /* 0x0003b284 */
int __fastcall sub_6003B5E0(int a1);  /* 0x0003b5e0 */
int __fastcall sub_6003B74C(int a1, int a2, int a3, int a4);  /* 0x0003b74c */
int __fastcall sub_6003BEF0(int a1);  /* 0x0003bef0 */
int __fastcall sub_6003BF94(int a1);  /* 0x0003bf94 */
int __fastcall sub_6003C458(int result);  /* 0x0003c458 */
int __fastcall jcb_sphere_st_ref(int a1);  /* 0x0003c48c */
int __fastcall sub_6003C858(int result);  /* 0x0003c858 */
int __fastcall jcb_sphere_ed_ref(int a1);  /* 0x0003c868 */
int __fastcall sub_6003C8CC(int result);  /* 0x0003c8cc */
int __fastcall sub_6003C934(int a1);  /* 0x0003c934 */
int __fastcall SE_BOSS_JR_CLOWN_POSE_ref(int a1, int a2, int a3, int a4);  /* 0x0003c990 */
int __fastcall sub_6003CC84(_DWORD *a1);  /* 0x0003cc84 */
int __fastcall sub_6003CCD4(int a1);  /* 0x0003ccd4 */
int __fastcall sub_6003D180(int a1);  /* 0x0003d180 */
int __fastcall sub_6003E1EC(int a1);  /* 0x0003e1ec */
int __fastcall SE_BOSS_JR_CLOWN_PUNCH_REVERSE_ref(int a1);  /* 0x0003e668 */
int __fastcall sub_6003F398(_BYTE *a1);  /* 0x0003f398 */
int __fastcall sub_6003F638(int a1);  /* 0x0003f638 */
int __fastcall sub_6003F97C(_DWORD *a1);  /* 0x0003f97c */
int __fastcall sub_6003F9DC(int a1);  /* 0x0003f9dc */
int __fastcall sub_6003F9E4(int result);  /* 0x0003f9e4 */
int __fastcall sub_6003FA5C(int a1);  /* 0x0003fa5c */
int __fastcall jc_demo_W7_excite_ref(int a1);  /* 0x0003fd44 */
int __fastcall jc_demo_W7_shock_ref(int a1);  /* 0x0003fdc8 */
int __fastcall sub_6003FFBC(_DWORD *a1);  /* 0x0003ffbc */
int __fastcall jc_demo_W7_panic_ref(int a1);  /* 0x00040058 */
int __fastcall sub_600404E0(int a1);  /* 0x000404e0 */
int __fastcall sub_60040A94(int a1);  /* 0x00040a94 */
int __fastcall sub_60040F08(int a1);  /* 0x00040f08 */
int __fastcall sub_60041050(int a1, int a2, int a3, int a4);  /* 0x00041050 */
int __fastcall sub_60041198(int a1);  /* 0x00041198 */
int __fastcall sub_60041660(int a1);  /* 0x00041660 */
int __fastcall sub_60041AF4(int a1);  /* 0x00041af4 */
int __fastcall sub_60041FC0(int a1, int a2, int a3, int a4);  /* 0x00041fc0 */
int __fastcall sub_60042034(int a1, int a2);  /* 0x00042034 */
int __fastcall sub_600424E0(int a1);  /* 0x000424e0 */
int __fastcall sub_600425AC(int a1, int a2, int a3);  /* 0x000425ac */
void __fastcall sub_600427E0(int a1, int a2, int a3);  /* 0x000427e0 */
bool __fastcall sub_60042CE4(int a1, int a2, int a3);  /* 0x00042ce4 */
int __fastcall sub_60043190(int a1, int a2, int a3);  /* 0x00043190 */
int __fastcall sub_600434F4(int *a1);  /* 0x000434f4 */
int __fastcall sub_6004398C(int a1);  /* 0x0004398c */
int __fastcall sub_60043D90(int a1, int a2);  /* 0x00043d90 */
int __fastcall sub_60044328(int a1);  /* 0x00044328 */
int __fastcall sub_60044830(int a1);  /* 0x00044830 */
int __fastcall sub_60045948(int a1);  /* 0x00045948 */
int __fastcall sub_60045B70(int a1);  /* 0x00045b70 */
int __fastcall sub_60045DB4(int a1, int a2, int a3, int a4);  /* 0x00045db4 */
int __fastcall sub_60047464(int a1, unsigned int a2, int a3, int a4);  /* 0x00047464 */
int __fastcall sub_600475E4(int a1, int a2);  /* 0x000475e4 */
int __fastcall sub_600476D0(int a1);  /* 0x000476d0 */
int __fastcall sub_60047910(int a1);  /* 0x00047910 */
int __fastcall sub_6004798C(int a1, float *a2);  /* 0x0004798c */
bool __fastcall sub_60047BDC(int a1);  /* 0x00047bdc */
int __fastcall sub_60047D84(int a1, float *a2);  /* 0x00047d84 */
int __fastcall sub_6004816C(int a1);  /* 0x0004816c */
int __fastcall sub_60048374(int a1);  /* 0x00048374 */
int __fastcall sub_60048388(int a1);  /* 0x00048388 */
int __fastcall sub_60048550(int a1);  /* 0x00048550 */
int __fastcall sub_60048594(_DWORD *a1);  /* 0x00048594 */
int __fastcall sub_600485D8(_DWORD *a1);  /* 0x000485d8 */
int __fastcall sub_60048AF0(int a1);  /* 0x00048af0 */
int __fastcall sub_60048E04(int a1);  /* 0x00048e04 */
int __fastcall SE_BOSS_JR_CLOWN_DAMAGE_ref(int a1, int a2, int a3, int a4);  /* 0x00048e20 */
int __fastcall SE_BOSS_JR_CLOWN_COME_BOXER_ref(int a1);  /* 0x00049898 */
void __fastcall sub_60049938(int a1);  /* 0x00049938 */
int __fastcall SE_BOSS_JR_CLOWN_PUNCH_ref(int a1);  /* 0x00049a28 */
int __fastcall sub_60049CFC(_DWORD *a1);  /* 0x00049cfc */
int __fastcall sub_60049F58(int a1);  /* 0x00049f58 */
int __fastcall sub_6004A000(int a1, int a2, int32x4_t **a3);  /* 0x0004a000 */
bool __fastcall sub_6004B0C0(int a1, int a2);  /* 0x0004b0c0 */
bool __fastcall sub_6004B120(int a1, int a2);  /* 0x0004b120 */
void __fastcall sub_6004B30C(_BYTE *a1);  /* 0x0004b30c */
int __fastcall sub_6004B408(_BYTE *a1);  /* 0x0004b408 */
int __fastcall sub_6004B550(int a1);  /* 0x0004b550 */
int __fastcall sub_6004B55C(int a1);  /* 0x0004b55c */
int __fastcall sub_6004B5A8(int a1, int a2);  /* 0x0004b5a8 */
int __fastcall sub_6004B5E8(_DWORD *a1);  /* 0x0004b5e8 */
bool __fastcall sub_6004B63C(int a1);  /* 0x0004b63c */
int __fastcall sub_6004B700(int a1);  /* 0x0004b700 */
int __fastcall sub_6004B89C(struct sead_IDisposer *a1);  /* 0x0004b89c */
bool __fastcall sub_6004B8AC(int a1, int a2);  /* 0x0004b8ac */
bool __fastcall ColliderBase_vf10(int a1, int a2, char a3);  /* 0x0004b9b0 */
int __fastcall ColliderBase_vf14(int a1, int a2);  /* 0x0004b9e8 */
int __fastcall RectCollider_dtorFree(int a1);  /* 0x0004ba1c */
bool __fastcall RectCollider_checkRTTI(int a1, int a2);  /* 0x0004ba2c */
bool __fastcall sub_6004BAA8(int a1);  /* 0x0004baa8 */
int __fastcall sub_6004BC90(int a1, int a2);  /* 0x0004bc90 */
int __fastcall sub_6004BD28(int a1, int a2);  /* 0x0004bd28 */
int __fastcall sub_6004BDC0(int a1, int a2);  /* 0x0004bdc0 */
int __fastcall sub_6004BE58(int a1, int a2);  /* 0x0004be58 */
int __fastcall sub_6004BEF8(int a1);  /* 0x0004bef8 */
int __fastcall sub_6004BF20(struct sead_IDisposer *a1);  /* 0x0004bf20 */
bool __fastcall sub_6004BF30(int a1, int a2);  /* 0x0004bf30 */
int __fastcall sub_6004C128(int a1, int a2);  /* 0x0004c128 */
int __fastcall sub_6004C1C0(int a1, int a2);  /* 0x0004c1c0 */
int __fastcall sub_6004C258(int a1, int a2);  /* 0x0004c258 */
int __fastcall sub_6004C2F0(int a1, int a2);  /* 0x0004c2f0 */
int __fastcall sub_6004C388(int a1, int a2);  /* 0x0004c388 */
int __fastcall sub_6004C420(int a1, float *a2, float *a3);  /* 0x0004c420 */
int __fastcall sub_6004C5C4(int a1);  /* 0x0004c5c4 */
int __fastcall sub_6004D634(int *a1);  /* 0x0004d634 */
int __fastcall sub_6004D7B4(unsigned __int8 *a1);  /* 0x0004d7b4 */
int __fastcall sub_6004D884(int a1);  /* 0x0004d884 */
int __fastcall sub_6004E178(int a1);  /* 0x0004e178 */
bool __fastcall sub_6004F7C8(int a1);  /* 0x0004f7c8 */
int __fastcall sub_6004F9B4(int a1, int a2);  /* 0x0004f9b4 */
int __fastcall sub_6004FB44(int a1);  /* 0x0004fb44 */
int __fastcall sub_6004FE50(_DWORD *a1);  /* 0x0004fe50 */
int __fastcall sub_6004FE6C(int a1);  /* 0x0004fe6c */
int __fastcall sub_6004FEB0(int a1);  /* 0x0004feb0 */
int __fastcall sub_6004FF68(int a1);  /* 0x0004ff68 */
int __fastcall sub_6004FFD8(int a1);  /* 0x0004ffd8 */
int __fastcall sub_6005027C(_DWORD *a1);  /* 0x0005027c */
int __fastcall sub_60050304(float *a1);  /* 0x00050304 */
int __fastcall sub_6005036C(_DWORD *a1);  /* 0x0005036c */
int __fastcall sub_6005045C(float *a1);  /* 0x0005045c */
int __fastcall sub_600504C8(int a1);  /* 0x000504c8 */
int __fastcall sub_60050570(int a1);  /* 0x00050570 */
int __fastcall sub_6005057C(int a1);  /* 0x0005057c */
int __fastcall sub_60050624(_DWORD *a1);  /* 0x00050624 */
int __fastcall sub_600506C4(int a1);  /* 0x000506c4 */
int __fastcall sub_60050750(int a1);  /* 0x00050750 */
int __fastcall sub_60051780(int a1, int a2, int a3);  /* 0x00051780 */
int __fastcall sub_60051794(int a1, int a2, int a3);  /* 0x00051794 */
int __fastcall sub_600517F4(int a1, int a2, int a3);  /* 0x000517f4 */
int __fastcall sub_6005186C(int a1, int a2, int a3);  /* 0x0005186c */
int __fastcall sub_600518E4(int a1, _DWORD *a2);  /* 0x000518e4 */
int __fastcall sub_60051970(int a1);  /* 0x00051970 */
int __fastcall sub_6005251C(int a1);  /* 0x0005251c */
int __fastcall sub_600525EC(_DWORD *a1, int a2, int a3, int a4);  /* 0x000525ec */
int __fastcall sub_60052630(_DWORD *a1, int a2, int a3, int a4);  /* 0x00052630 */
int __fastcall sub_600539E0(int a1);  /* 0x000539e0 */
int __fastcall sub_60054100(int a1);  /* 0x00054100 */
int __fastcall sub_60054294(int a1);  /* 0x00054294 */
int __fastcall sub_60054298(int a1);  /* 0x00054298 */
int __fastcall sub_60054340(int a1);  /* 0x00054340 */
bool __fastcall sub_60054344(int a1, int a2);  /* 0x00054344 */
int __fastcall sub_600544BC(Actor *a1);  /* 0x000544bc */
int __fastcall sub_600544FC(int a1);  /* 0x000544fc */
int __fastcall sub_600546D0(int a1);  /* 0x000546d0 */
int __fastcall sub_600547E0(int a1);  /* 0x000547e0 */
int __fastcall sub_600549F8(int a1);  /* 0x000549f8 */
int __fastcall SE_EMY_KAMECK_FLY_MAGIC_ref(int a1);  /* 0x00054b64 */
int __fastcall sub_60054DC0(int a1);  /* 0x00054dc0 */
int __fastcall sub_60055188(int a1);  /* 0x00055188 */
int __fastcall sub_600551CC(int a1, int a2, int a3, int a4);  /* 0x000551cc */
bool __fastcall sub_600551F4(int a1, int a2);  /* 0x000551f4 */
int __fastcall sub_6005536C(_BYTE *a1);  /* 0x0005536c */
int __fastcall sub_60055844(int a1);  /* 0x00055844 */
int __fastcall sub_60055A70(int result);  /* 0x00055a70 */
int __fastcall sub_60055BC8(int a1, unsigned int a2);  /* 0x00055bc8 */
int __fastcall sub_60055BF4(int a1);  /* 0x00055bf4 */
int __fastcall sub_60055C04(int a1, int a2);  /* 0x00055c04 */
int __fastcall sub_60055DF8(int a1);  /* 0x00055df8 */
int __fastcall demo_spin_jump_ref(int a1);  /* 0x00055f40 */
int __fastcall sub_6005600C(int a1);  /* 0x0005600c */
int __fastcall sub_60056028(int *a1);  /* 0x00056028 */
int __fastcall sub_600562E4(int a1);  /* 0x000562e4 */
int __fastcall sub_6005636C(int a1);  /* 0x0005636c */
int __fastcall sub_600563D0(int a1);  /* 0x000563d0 */
int __fastcall sub_60056434(int a1);  /* 0x00056434 */
int __fastcall sub_60056568(int result);  /* 0x00056568 */
int __fastcall sub_60056578(int a1);  /* 0x00056578 */
int __fastcall sub_60056BEC(int a1);  /* 0x00056bec */
int __fastcall sub_60056D34(int a1);  /* 0x00056d34 */
bool __fastcall sub_60056EA0(int a1, int a2);  /* 0x00056ea0 */
void __fastcall sub_60057018(_DWORD *a1);  /* 0x00057018 */
int __fastcall sub_600571CC(_DWORD *a1);  /* 0x000571cc */
int __fastcall sub_600571DC(int a1);  /* 0x000571dc */
int __fastcall sub_60057240(int a1, int a2);  /* 0x00057240 */
int __fastcall sub_600572DC(int a1);  /* 0x000572dc */
int __fastcall sub_60057870(int a1);  /* 0x00057870 */
int __fastcall sub_60057AF8(float *a1);  /* 0x00057af8 */
int __fastcall sub_60057D38(_DWORD *a1);  /* 0x00057d38 */
int __fastcall sub_60057D54(int a1);  /* 0x00057d54 */
int __fastcall demo_jump_ref(int a1);  /* 0x0005802c */
int __fastcall sub_600580E8(int a1);  /* 0x000580e8 */
int __fastcall sub_60058104(int *a1);  /* 0x00058104 */
int __fastcall sub_6005830C(int a1);  /* 0x0005830c */
int __fastcall sub_60058370(int a1);  /* 0x00058370 */
int __fastcall sub_600583F0(_DWORD *a1);  /* 0x000583f0 */
int __fastcall sub_60058464(int a1);  /* 0x00058464 */
int __fastcall sub_6005850C(int a1);  /* 0x0005850c */
int __fastcall sub_6005861C(float *a1);  /* 0x0005861c */
int __fastcall sub_60058704(_DWORD *a1);  /* 0x00058704 */
int __fastcall sub_6005879C(int a1);  /* 0x0005879c */
int __fastcall sub_60058894(int result);  /* 0x00058894 */
int __fastcall sub_600588AC(int result);  /* 0x000588ac */
bool __fastcall sub_600588B4(int a1, int a2);  /* 0x000588b4 */
int __fastcall sub_60058AA0(_DWORD *a1);  /* 0x00058aa0 */
int __fastcall sub_60058AB0(int a1);  /* 0x00058ab0 */
int __fastcall sub_60058B58(int a1);  /* 0x00058b58 */
int __fastcall sub_60058B94(int a1, int a2);  /* 0x00058b94 */
int __fastcall sub_60058C30(int a1);  /* 0x00058c30 */
int __fastcall sub_600591C8(float *a1);  /* 0x000591c8 */
int __fastcall sub_600594F0(int a1);  /* 0x000594f0 */
bool __fastcall sub_600596B0(int a1, int a2);  /* 0x000596b0 */
int __fastcall sub_6005989C(_DWORD *a1);  /* 0x0005989c */
int __fastcall sub_600598AC(int a1);  /* 0x000598ac */
int __fastcall sub_6005997C(int a1);  /* 0x0005997c */
int __fastcall sub_60059BDC(_DWORD *a1);  /* 0x00059bdc */
int __fastcall sub_60059C9C(int a1);  /* 0x00059c9c */
int __fastcall sub_60059D9C(int a1);  /* 0x00059d9c */
int __fastcall sub_6005A2DC(float *a1);  /* 0x0005a2dc */
int __fastcall sub_6005A32C(float *a1);  /* 0x0005a32c */
int __fastcall sub_6005A37C(int a1);  /* 0x0005a37c */
int __fastcall sub_6005A3C4(int a1);  /* 0x0005a3c4 */
int __fastcall larry_all_root_ref(int a1, int a2);  /* 0x0005a514 */
int __fastcall sub_6005A5FC(int a1);  /* 0x0005a5fc */
int __fastcall sub_6005A640(int a1);  /* 0x0005a640 */
int __fastcall sub_6005A684(int a1);  /* 0x0005a684 */
int __fastcall sub_6005A6D0(int a1);  /* 0x0005a6d0 */
int __fastcall sub_6005A6E8(int a1);  /* 0x0005a6e8 */
int __fastcall sub_6005A94C(int a1);  /* 0x0005a94c */
int __fastcall SE_EMY_BUNBUN_W5_BECOME_BIG_ref(_DWORD *a1);  /* 0x0005a968 */
int __fastcall sub_6005AB7C(int a1);  /* 0x0005ab7c */
int __fastcall sub_6005AB80(int result);  /* 0x0005ab80 */
int __fastcall sub_6005ACF8(int a1);  /* 0x0005acf8 */
int __fastcall sub_6005AD94(int a1);  /* 0x0005ad94 */
int __fastcall sub_6005AE40(int a1);  /* 0x0005ae40 */
void __fastcall sub_6005AEC0(_DWORD *a1);  /* 0x0005aec0 */
int __fastcall sub_6005AEF4(_DWORD *a1);  /* 0x0005aef4 */
int __fastcall sub_6005AF2C(int a1);  /* 0x0005af2c */
bool __fastcall sub_6005B3E8(int a1);  /* 0x0005b3e8 */
int __fastcall sub_6005B5D4(int a1, int a2);  /* 0x0005b5d4 */
int __fastcall sub_6005B670(int a1);  /* 0x0005b670 */
int __fastcall sub_6005BA70(float *a1);  /* 0x0005ba70 */
int __fastcall sub_6005BC84(int a1);  /* 0x0005bc84 */
int __fastcall sub_6005C11C(int a1);  /* 0x0005c11c */
int __fastcall sub_6005C724(int a1);  /* 0x0005c724 */
int __fastcall sub_6005C8D8(int a1);  /* 0x0005c8d8 */
int __fastcall sub_6005CAEC(int a1);  /* 0x0005caec */
int __fastcall sub_6005CEB4(int a1);  /* 0x0005ceb4 */
int __fastcall sub_6005D150(unsigned __int8 *a1);  /* 0x0005d150 */
float __fastcall sub_6005D4A4(int a1);  /* 0x0005d4a4 */
int __fastcall sub_6005D69C(int a1);  /* 0x0005d69c */
int __fastcall sub_6005D90C(int a1);  /* 0x0005d90c */
int __fastcall sub_6005DB78(int a1);  /* 0x0005db78 */
int __fastcall sub_6005E060(int a1);  /* 0x0005e060 */
int __fastcall sub_6005E160(int a1);  /* 0x0005e160 */
int __fastcall sub_6005E408(int a1, int a2, int a3, int a4);  /* 0x0005e408 */
int __fastcall bunbun_wing_ref(int *a1);  /* 0x0005e448 */
int __fastcall sub_6005E57C(int a1);  /* 0x0005e57c */
int __fastcall sub_6005E8EC(int a1);  /* 0x0005e8ec */
int __fastcall sub_6005EAFC(int a1, int a2, int a3, int a4);  /* 0x0005eafc */
int __fastcall sub_6005EBE4(_BYTE *a1);  /* 0x0005ebe4 */
int __fastcall sub_6005EE4C(int a1);  /* 0x0005ee4c */
int __fastcall sub_6005EE68(int a1);  /* 0x0005ee68 */
int __fastcall sub_6005EFB0(int a1);  /* 0x0005efb0 */
int __fastcall sub_6005F0F0(int a1);  /* 0x0005f0f0 */
int __fastcall sub_6005F1E0(int a1);  /* 0x0005f1e0 */
int __fastcall sub_6005F36C(int a1);  /* 0x0005f36c */
int __fastcall sub_6005F6A4(int result);  /* 0x0005f6a4 */
int __fastcall sub_6005F6D4(int a1);  /* 0x0005f6d4 */
int __fastcall sub_6005F760(_DWORD *a1);  /* 0x0005f760 */
bool __fastcall sub_6005FF98(int a1, int a2);  /* 0x0005ff98 */
int __fastcall sub_6006009C(int a1);  /* 0x0006009c */
int __fastcall sub_60060194(_DWORD *a1);  /* 0x00060194 */
int __fastcall sub_6006023C(int a1);  /* 0x0006023c */
int __fastcall sub_600602A8(_DWORD *a1);  /* 0x000602a8 */
int __fastcall sub_6006034C(int a1);  /* 0x0006034c */
int __fastcall sub_6006046C(int a1);  /* 0x0006046c */
int __fastcall sub_6006058C(int a1);  /* 0x0006058c */
int __fastcall sub_600606C0(int a1);  /* 0x000606c0 */
int __fastcall sub_600607E0(int a1);  /* 0x000607e0 */
int __fastcall sub_60060808(int a1);  /* 0x00060808 */
int __fastcall sub_60060ED8(int a1);  /* 0x00060ed8 */
int __fastcall sub_60061084(int a1);  /* 0x00061084 */
int __fastcall sub_600610EC(int a1);  /* 0x000610ec */
int __fastcall sub_600610FC(int a1, int a2, int a3, int a4);  /* 0x000610fc */
int __fastcall sub_6006110C(int a1);  /* 0x0006110c */
int __fastcall sub_600611AC(int a1);  /* 0x000611ac */
int __fastcall sub_600612E8(int a1);  /* 0x000612e8 */
int __fastcall sub_6006143C(int a1, _DWORD *a2);  /* 0x0006143c */
int __fastcall sub_60061458(_DWORD *a1);  /* 0x00061458 */
int __fastcall sub_600616F4(int a1);  /* 0x000616f4 */
int __fastcall sub_60061C24(int a1);  /* 0x00061c24 */
int __fastcall SE_BOSS_ref(int *a1);  /* 0x00061e0c */
int __fastcall sub_60062270(int a1);  /* 0x00062270 */
int __fastcall SE_EMY_KAMECK_FLY_MAGIC_ref_2(int a1);  /* 0x00062330 */
int __fastcall sub_60062568(int a1);  /* 0x00062568 */
int __fastcall SE_AMB_KP_EARTHQUAKE_ref(int a1);  /* 0x000625c4 */
int __fastcall sub_600628E4(int a1);  /* 0x000628e4 */
int __fastcall sub_600628E8(_DWORD *a1, _DWORD *a2);  /* 0x000628e8 */
int __fastcall sub_60062910(_DWORD *a1);  /* 0x00062910 */
int __fastcall sub_60062960(int a1);  /* 0x00062960 */
int __fastcall sub_60062BC4(int a1);  /* 0x00062bc4 */
bool __fastcall sub_60063164(int a1, int a2);  /* 0x00063164 */
void __fastcall sub_60063350(int a1);  /* 0x00063350 */
int __fastcall sub_600633DC(int a1);  /* 0x000633dc */
int __fastcall sub_6006347C(int a1);  /* 0x0006347c */
int __fastcall sub_6006375C(int result);  /* 0x0006375c */
int __fastcall sub_60063774(int a1);  /* 0x00063774 */
int __fastcall sub_600637D4(int a1);  /* 0x000637d4 */
int __fastcall sub_60063814(int a1);  /* 0x00063814 */
int __fastcall sub_600639DC(int a1, int a2);  /* 0x000639dc */
int __fastcall sub_60063AA0(int a1, _DWORD *a2);  /* 0x00063aa0 */
int __fastcall sub_60063B8C(int a1, int a2);  /* 0x00063b8c */
int __fastcall sub_60063C5C(int result, int a2);  /* 0x00063c5c */
int __fastcall sub_60063CC8(int a1, int a2);  /* 0x00063cc8 */
int __fastcall sub_60063DDC(int a1, int a2, int a3);  /* 0x00063ddc */
int __fastcall sub_60063F60(int a1, int a2, int a3);  /* 0x00063f60 */
void __fastcall BobOmb_vf2(_BYTE *a1);  /* 0x000640cc */
int __fastcall sub_60064178(_BYTE *a1);  /* 0x00064178 */
int __fastcall sub_60064464(int a1, int a2);  /* 0x00064464 */
int __fastcall sub_60064500(int a1, int a2);  /* 0x00064500 */
int __fastcall lkp_help_me_wait1_ref(int a1);  /* 0x0006477c */
int __fastcall sub_6006485C(int a1);  /* 0x0006485c */
int __fastcall sub_60064894(int a1);  /* 0x00064894 */
int __fastcall SE_VOC_PCH_NOTICE_ref(_DWORD *a1);  /* 0x00064dec */
int __fastcall sub_60064F7C(int a1);  /* 0x00064f7c */
int __fastcall sub_60065298(int a1);  /* 0x00065298 */
int __fastcall SE_VOC_PCH_SURPRISE_ref(int a1);  /* 0x00065390 */
int __fastcall sub_60065494(int a1);  /* 0x00065494 */
int __fastcall sub_600655E0(int a1);  /* 0x000655e0 */
int __fastcall sub_600656E8(int a1);  /* 0x000656e8 */
int __fastcall sub_600657C8(int a1);  /* 0x000657c8 */
int __fastcall sub_60065800(_DWORD *a1);  /* 0x00065800 */
int __fastcall sub_60065858(int a1);  /* 0x00065858 */
int __fastcall sub_60065A78(int a1);  /* 0x00065a78 */
int __fastcall sub_60065D68(int a1);  /* 0x00065d68 */
int __fastcall sub_60065D8C(int a1);  /* 0x00065d8c */
bool __fastcall sub_60065E50(int a1, int a2);  /* 0x00065e50 */
int __fastcall sub_60065F54(Actor *a1);  /* 0x00065f54 */
int __fastcall sub_600662E4(int a1);  /* 0x000662e4 */
int __fastcall sub_60066378(int a1);  /* 0x00066378 */
int __fastcall SE_OBJ_WINDOW_FALL_ref(int a1);  /* 0x00066438 */
int __fastcall sub_6006661C(int a1);  /* 0x0006661c */
int __fastcall sub_6006677C(int a1);  /* 0x0006677c */
int __fastcall sub_600668C4(float *a1);  /* 0x000668c4 */
int __fastcall sub_60066A98(int a1);  /* 0x00066a98 */
int __fastcall sub_60066ABC(int a1);  /* 0x00066abc */
bool __fastcall sub_60066B48(int a1, int a2);  /* 0x00066b48 */
int __fastcall sub_60066C4C(Actor *a1);  /* 0x00066c4c */
int __fastcall sub_60066E90(int a1);  /* 0x00066e90 */
int __fastcall lkp_jump_ref(int a1);  /* 0x00067020 */
int __fastcall sub_600671B8(int a1);  /* 0x000671b8 */
int __fastcall sub_60067424(int a1);  /* 0x00067424 */
int __fastcall sub_600676F8(int a1);  /* 0x000676f8 */
int __fastcall lkp_demo_battleA_ref(int a1);  /* 0x00067774 */
int __fastcall sub_60067850(int a1);  /* 0x00067850 */
int __fastcall sub_60067A40(int a1);  /* 0x00067a40 */
int __fastcall sub_60067B08(int a1);  /* 0x00067b08 */
int __fastcall sub_60067B80(int a1);  /* 0x00067b80 */
int __fastcall sub_60067E10(int a1);  /* 0x00067e10 */
int __fastcall sub_6006872C(int a1);  /* 0x0006872c */
int __fastcall lkp_jump_st_ref(int a1);  /* 0x00068d4c */
int __fastcall sub_600694E4(int a1);  /* 0x000694e4 */
int __fastcall lkp_fire1_ref(int *a1);  /* 0x000699f0 */
int __fastcall sub_60069DB8(int result);  /* 0x00069db8 */
int __fastcall sub_60069DC8(_DWORD *a1);  /* 0x00069dc8 */
int __fastcall lkp_fire4_ref(_DWORD *a1);  /* 0x0006a144 */
int __fastcall sub_6006A494(int result);  /* 0x0006a494 */
int __fastcall sub_6006A4A4(int a1);  /* 0x0006a4a4 */
int __fastcall lkp_walk_ref(int a1);  /* 0x0006a800 */
int __fastcall lkp_fire3_ref(int a1);  /* 0x0006aafc */
int __fastcall sub_6006ABF0(int a1);  /* 0x0006abf0 */
int __fastcall sub_6006AF90(int result);  /* 0x0006af90 */
int __fastcall sub_6006AFA0(_WORD *a1);  /* 0x0006afa0 */
int __fastcall sub_6006B1C0(int a1);  /* 0x0006b1c0 */
int __fastcall lkp_fire5_ref(int a1);  /* 0x0006b2a4 */
int __fastcall sub_6006B3E8(_WORD *a1);  /* 0x0006b3e8 */
int __fastcall lkp_tired_ref(_WORD *a1);  /* 0x0006b734 */
int __fastcall sub_6006B9C8(_DWORD *a1);  /* 0x0006b9c8 */
int __fastcall sub_6006BBD8(int a1);  /* 0x0006bbd8 */
int __fastcall sub_6006C388(int a1);  /* 0x0006c388 */
int __fastcall SE_VOC_KP_L_ref(int a1);  /* 0x0006c634 */
void __fastcall sub_6006C9F8(int a1);  /* 0x0006c9f8 */
int __fastcall lkp_damage_s_ref(_DWORD *a1);  /* 0x0006ca50 */
int __fastcall sub_6006CC40(int a1);  /* 0x0006cc40 */
int __fastcall sub_6006CE00(_DWORD *a1);  /* 0x0006ce00 */
int __fastcall sub_6006D134(int a1);  /* 0x0006d134 */
int __fastcall sub_6006D22C(_DWORD *a1);  /* 0x0006d22c */
int __fastcall SE_BOSS_KOOPA_L_SHELL_ref(int a1);  /* 0x0006d2ec */
int __fastcall sub_6006D47C(int a1);  /* 0x0006d47c */
int __fastcall SE_BOSS_KOOPA_L_SHELL_ref_2(int a1);  /* 0x0006d50c */
int __fastcall sub_6006DAB8(int result);  /* 0x0006dab8 */
int __fastcall SE_BOSS_KOOPA_L_SHELL_ROLL_ref(int a1);  /* 0x0006daf8 */
int __fastcall sub_6006DDAC(int a1);  /* 0x0006ddac */
int __fastcall sub_6006DF14(_DWORD *a1);  /* 0x0006df14 */
int __fastcall sub_6006DFDC(int a1);  /* 0x0006dfdc */
int __fastcall sub_6006E1B4(int *a1);  /* 0x0006e1b4 */
int __fastcall lkp_demo_die_fall_ref(int a1);  /* 0x0006e218 */
int __fastcall sub_6006EA78(int a1);  /* 0x0006ea78 */
int __fastcall sub_6006EF5C(int a1);  /* 0x0006ef5c */
int __fastcall sub_6006F4A4(int a1);  /* 0x0006f4a4 */
int __fastcall sub_6006F594(int a1);  /* 0x0006f594 */
int __fastcall sub_6006F6F8(int result);  /* 0x0006f6f8 */
int __fastcall sub_6006FF54(_DWORD *a1);  /* 0x0006ff54 */
int __fastcall sub_60070580(int a1, int a2);  /* 0x00070580 */
int __fastcall sub_60070B60(int a1, int a2);  /* 0x00070b60 */
unsigned int __fastcall sub_60071080(int a1, _DWORD *a2);  /* 0x00071080 */
void __fastcall sub_6007117C(int a1, int a2);  /* 0x0007117c */
unsigned int __fastcall sub_60072754(int a1, int a2);  /* 0x00072754 */
unsigned int __fastcall sub_6007275C(int a1, int a2);  /* 0x0007275c */
unsigned int __fastcall sub_60072C4C(int a1, int a2);  /* 0x00072c4c */
int __fastcall sub_60072C54(int a1);  /* 0x00072c54 */
int __fastcall sub_60072F14(int a1);  /* 0x00072f14 */
int __fastcall sub_600730CC(int a1);  /* 0x000730cc */
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
int __fastcall sub_60079528(struct sead_IDisposer *a1);  /* 0x00079528 */
int __fastcall sub_6007955C(int a1);  /* 0x0007955c */
int __fastcall sub_6007972C(int a1);  /* 0x0007972c */
int __fastcall sub_60079754(int a1, int a2);  /* 0x00079754 */
int __fastcall sub_600797EC(int a1, int a2);  /* 0x000797ec */
int __fastcall sub_60079884(int a1, int a2);  /* 0x00079884 */
int __fastcall sub_6007991C(int a1, int a2);  /* 0x0007991c */
int __fastcall SE_AMB_LAST_BATTLE_ref(int a1);  /* 0x0007a7bc */
bool __fastcall sub_6007A82C(int a1);  /* 0x0007a82c */
int __fastcall sub_6007A978(float *a1);  /* 0x0007a978 */
int __fastcall sub_6007ABE0(_DWORD *a1);  /* 0x0007abe0 */
int __fastcall sub_6007ADA4(int a1);  /* 0x0007ada4 */
int __fastcall sub_6007ADB4(_DWORD *a1);  /* 0x0007adb4 */
int __fastcall sub_6007C5E4(int a1);  /* 0x0007c5e4 */
bool __fastcall sub_6007DA20(int a1, int a2);  /* 0x0007da20 */
int __fastcall sub_6007DB98(Actor *a1);  /* 0x0007db98 */
int __fastcall sub_6007DBD0(int a1);  /* 0x0007dbd0 */
int __fastcall SE_BOSS_KOOPA_L_FIRE_CONTINUE_ref(int a1);  /* 0x0007df1c */
int __fastcall SE_BOSS_KOOPA_L_FIRE_START_ref(int a1);  /* 0x0007e090 */
int __fastcall SE_BOSS_KOOPA_L_FIRE_CONTINUE_ref_2(int a1);  /* 0x0007e154 */
int __fastcall sub_6007E1E8(int result);  /* 0x0007e1e8 */
int __fastcall sub_6007E2CC(int a1);  /* 0x0007e2cc */
int __fastcall sub_6007E31C(int result);  /* 0x0007e31c */
int __fastcall sub_6007E334(int result);  /* 0x0007e334 */
int __fastcall SE_BOSS_KOOPA_L_FIRE_CONTINUE_ref_3(int a1);  /* 0x0007e88c */
int __fastcall sub_6007E924(int a1);  /* 0x0007e924 */
int __fastcall sub_6007E9C4(int a1);  /* 0x0007e9c4 */
int __fastcall sub_6007E9E8(int result);  /* 0x0007e9e8 */
int __fastcall sub_6007EB04(int a1, int a2);  /* 0x0007eb04 */
int __fastcall koopa_fire_shadow_ref(int a1);  /* 0x0007ec48 */
int __fastcall sub_6007F0B0(int a1);  /* 0x0007f0b0 */
int __fastcall sub_6007F524(int a1);  /* 0x0007f524 */
int __fastcall sub_6007F57C(int a1);  /* 0x0007f57c */
void __fastcall sub_6007F624(int a1, int a2);  /* 0x0007f624 */
int __fastcall sub_60080094(int a1);  /* 0x00080094 */
unsigned int __fastcall sub_600802A0(_DWORD *a1);  /* 0x000802a0 */
bool __fastcall sub_60080514(int a1, int a2);  /* 0x00080514 */
void __fastcall sub_60080618(_DWORD *a1);  /* 0x00080618 */
int __fastcall sub_600806B0(_DWORD *a1);  /* 0x000806b0 */
int __fastcall sub_60081C44(int a1);  /* 0x00081c44 */
int __fastcall sub_60081CC0(int result);  /* 0x00081cc0 */
int __fastcall sub_60081CCC(int a1);  /* 0x00081ccc */
int __fastcall sub_60081DA4(int a1);  /* 0x00081da4 */
int __fastcall lkpjc_delight_ref(int a1);  /* 0x00081db4 */
int __fastcall sub_60081E08(int a1);  /* 0x00081e08 */
int __fastcall sub_60081E74(int a1);  /* 0x00081e74 */
int __fastcall sub_60081ED8(_WORD *a1);  /* 0x00081ed8 */
int __fastcall sub_60082130(_WORD *a1);  /* 0x00082130 */
int __fastcall sub_60082188(int result);  /* 0x00082188 */
int __fastcall sub_60082244(float *a1);  /* 0x00082244 */
int __fastcall sub_600822A8(int result);  /* 0x000822a8 */
int __fastcall sub_60082364(_DWORD *a1);  /* 0x00082364 */
int __fastcall sub_60082530(int a1);  /* 0x00082530 */
int __fastcall sub_60082750(int a1);  /* 0x00082750 */
int __fastcall lkp_down_ref(int a1);  /* 0x0008280c */
int __fastcall SE_BOSS_JR_DOWN_ref(int a1);  /* 0x000828e4 */
int __fastcall lkp_return_ref(_DWORD *a1);  /* 0x00082a30 */
int __fastcall SE_BOSS_JR_LAND_ref(int a1);  /* 0x00082aa8 */
int __fastcall sub_60082C28(int a1);  /* 0x00082c28 */
int __fastcall lkp_run_ref(int a1);  /* 0x00082c34 */
int __fastcall lkp_jump_st_ref_2(int a1);  /* 0x000830fc */
int __fastcall sub_6008315C(int a1);  /* 0x0008315c */
int __fastcall sub_60083424(int a1);  /* 0x00083424 */
int __fastcall sub_600837F4(int a1);  /* 0x000837f4 */
int __fastcall sub_60083854(int result);  /* 0x00083854 */
int __fastcall sub_6008386C(int a1);  /* 0x0008386c */
int __fastcall lkp_fire_ref(int a1);  /* 0x0008397c */
int __fastcall mouth_1_ref(int a1);  /* 0x000839e4 */
int __fastcall lkpjc_fire_ref(int a1);  /* 0x00083c38 */
int __fastcall mouth_1_ref_2(int a1);  /* 0x00083c8c */
int __fastcall sub_60083E20(int a1);  /* 0x00083e20 */
int __fastcall sub_60083E84(int a1);  /* 0x00083e84 */
int __fastcall sub_60084028(int a1);  /* 0x00084028 */
int __fastcall lkpjc_throw_enemy2_ed_ref(_DWORD *a1);  /* 0x00084094 */
int __fastcall SE_VOC_JR_BOMB_THROW_ref(_DWORD *a1);  /* 0x000840f4 */
int __fastcall sub_60084280(int a1);  /* 0x00084280 */
int __fastcall lkp_jump_st_ref_3(int a1);  /* 0x00084284 */
int __fastcall sub_600842D8(int a1);  /* 0x000842d8 */
int __fastcall sub_60084408(int a1);  /* 0x00084408 */
int __fastcall sub_60084540(int a1);  /* 0x00084540 */
int __fastcall sub_600845BC(unsigned int *a1);  /* 0x000845bc */
int __fastcall SE_BOSS_JR_SHELL_ROLL_ref(int a1);  /* 0x000846e4 */
int __fastcall sub_600848CC(int a1);  /* 0x000848cc */
int __fastcall sub_60084F00(int result);  /* 0x00084f00 */
int __fastcall SE_BOSS_JR_SHELL_ROLL_ref_2(int a1);  /* 0x00084f88 */
int __fastcall sub_60085704(int result);  /* 0x00085704 */
int __fastcall SE_BOSS_JR_SHELL_ROLL_ref_3(int a1);  /* 0x00085710 */
int __fastcall sub_60085950(int result);  /* 0x00085950 */
int __fastcall sub_60085A60(int a1);  /* 0x00085a60 */
int __fastcall sub_60085F88(int a1);  /* 0x00085f88 */
int __fastcall sub_600864FC(int a1);  /* 0x000864fc */
int __fastcall sub_6008658C(int a1);  /* 0x0008658c */
int __fastcall sub_60086614(int a1);  /* 0x00086614 */
int __fastcall sub_6008678C(int a1);  /* 0x0008678c */
unsigned int __fastcall sub_600867EC(int a1);  /* 0x000867ec */
int __fastcall sub_600868C4(int a1);  /* 0x000868c4 */
int __fastcall sub_60086BD4(_DWORD *a1);  /* 0x00086bd4 */
int __fastcall sub_60086D04(int a1);  /* 0x00086d04 */
int __fastcall sub_6008709C(_DWORD *a1);  /* 0x0008709c */
int __fastcall sub_600872EC(int a1);  /* 0x000872ec */
int __fastcall sub_60087398(_DWORD *a1);  /* 0x00087398 */
int __fastcall lkp_damage_ref(_DWORD *a1);  /* 0x000873cc */
int __fastcall sub_60087458(int a1);  /* 0x00087458 */
int __fastcall lkp_down_ref_2(_DWORD *a1);  /* 0x000874d4 */
int __fastcall sub_60087538(int result);  /* 0x00087538 */
int __fastcall lkp_return_ref_2(int a1);  /* 0x000875b0 */
int __fastcall sub_60087604(int a1);  /* 0x00087604 */
int __fastcall sub_600876D8(_DWORD *a1);  /* 0x000876d8 */
int __fastcall sub_60087788(int a1);  /* 0x00087788 */
int __fastcall lkp_run_ref_2(int a1);  /* 0x00087924 */
int __fastcall sub_60087DCC(int result);  /* 0x00087dcc */
int __fastcall sub_60087DE0(int a1);  /* 0x00087de0 */
int __fastcall sub_60088094(int a1);  /* 0x00088094 */
int __fastcall lkp_demo_battle_end_wait_ref(_DWORD *a1);  /* 0x00088218 */
int __fastcall sub_6008828C(int a1);  /* 0x0008828c */
int __fastcall lkp_demo_battle_end_ref(int a1);  /* 0x00088298 */
int __fastcall sub_60088340(int a1);  /* 0x00088340 */
int __fastcall sub_600885C4(int a1, int a2, float *a3);  /* 0x000885c4 */
int __fastcall sub_60088678(int a1, float *a2);  /* 0x00088678 */
int __fastcall sub_600887B0(int a1);  /* 0x000887b0 */
int __fastcall sub_60088880(int a1, unsigned int a2);  /* 0x00088880 */
int __fastcall sub_600888D4(float *a1);  /* 0x000888d4 */
int __fastcall sub_60088B14(int a1, int a2, int a3, int a4);  /* 0x00088b14 */
int __fastcall sub_60088B68(_DWORD *a1);  /* 0x00088b68 */
int __fastcall sub_60088B8C(_BYTE *a1);  /* 0x00088b8c */
int __fastcall sub_60088BD4(int a1);  /* 0x00088bd4 */
int __fastcall sub_60088C18(float *a1, int a2);  /* 0x00088c18 */
int __fastcall sub_60088CF4(int a1, int a2, char a3);  /* 0x00088cf4 */
int __fastcall sub_60088D58(unsigned __int8 *a1);  /* 0x00088d58 */
int __fastcall sub_60089198(int a1);  /* 0x00089198 */
int __fastcall sub_600891EC(int a1);  /* 0x000891ec */
int __fastcall sub_60089204(int a1);  /* 0x00089204 */
int __fastcall sub_600892B8(int a1);  /* 0x000892b8 */
int __fastcall koopaJr_shell_ref(int *a1);  /* 0x000892f8 */
int __fastcall sub_6008950C(int a1);  /* 0x0008950c */
int __fastcall sub_60089790(int a1);  /* 0x00089790 */
int __fastcall sub_60089C64(int a1, _DWORD *a2);  /* 0x00089c64 */
int __fastcall sub_60089C90(int a1, int a2, int a3);  /* 0x00089c90 */
int __fastcall sub_6008A214(int a1, int a2, int a3);  /* 0x0008a214 */
int __fastcall sub_6008A848(int result, int a2, int a3);  /* 0x0008a848 */
bool __fastcall sub_6008A938(int a1, int a2, int a3);  /* 0x0008a938 */
int __fastcall sub_6008A9F8(_BYTE *a1);  /* 0x0008a9f8 */
int __fastcall sub_6008AA7C(float *a1, int a2, int a3);  /* 0x0008aa7c */
int __fastcall sub_6008ADA4(int a1, int a2, int a3);  /* 0x0008ada4 */
int __fastcall sub_6008B078(_BYTE *a1);  /* 0x0008b078 */
int __fastcall sub_6008B160(int a1, int a2);  /* 0x0008b160 */
int __fastcall sub_6008B334(_DWORD *a1, int a2);  /* 0x0008b334 */
int __fastcall sub_6008B39C(int *a1, int a2);  /* 0x0008b39c */
int __fastcall sub_6008B3EC(int a1);  /* 0x0008b3ec */
int __fastcall sub_6008B4F4(int a1);  /* 0x0008b4f4 */
int __fastcall sub_6008B50C(int a1);  /* 0x0008b50c */
int __fastcall sub_6008B570(_DWORD *a1, float *a2);  /* 0x0008b570 */
int __fastcall sub_6008B650(int a1);  /* 0x0008b650 */
int __fastcall sub_6008B6B0(_DWORD *a1);  /* 0x0008b6b0 */
int __fastcall sub_6008B88C(_DWORD *a1);  /* 0x0008b88c */
int __fastcall sub_6008B9E4(int a1);  /* 0x0008b9e4 */
int __fastcall sub_6008BC88(int a1);  /* 0x0008bc88 */
int __fastcall sub_6008BE60(int a1);  /* 0x0008be60 */
int __fastcall sub_6008C064(int a1);  /* 0x0008c064 */
int __fastcall sub_6008C250(int a1);  /* 0x0008c250 */
int __fastcall sub_6008C2D4(int a1);  /* 0x0008c2d4 */
int __fastcall sub_6008C308(int a1);  /* 0x0008c308 */
int __fastcall sub_6008C314(_DWORD *a1);  /* 0x0008c314 */
int __fastcall sub_6008C5D8(int result);  /* 0x0008c5d8 */
bool __fastcall sub_6008C6A0(int a1, int a2);  /* 0x0008c6a0 */
void __fastcall sub_6008C7A4(_DWORD *a1);  /* 0x0008c7a4 */
int __fastcall sub_6008C8E0(_DWORD *a1);  /* 0x0008c8e0 */
bool __fastcall sub_6008C8F0(int a1);  /* 0x0008c8f0 */
int __fastcall sub_6008C93C(_DWORD *a1, int a2);  /* 0x0008c93c */
bool __fastcall sub_6008CA20(int a1);  /* 0x0008ca20 */
bool __fastcall sub_6008CAFC(int a1);  /* 0x0008cafc */
bool __fastcall sub_6008CBD8(int a1);  /* 0x0008cbd8 */
int __fastcall sub_6008CDCC(int a1);  /* 0x0008cdcc */
int __fastcall sub_6008CDF4(int a1, int a2);  /* 0x0008cdf4 */
int __fastcall sub_6008CEA8(int a1);  /* 0x0008cea8 */
int __fastcall sub_6008CF14(int a1);  /* 0x0008cf14 */
int __fastcall sub_6008CF70(_BYTE *a1);  /* 0x0008cf70 */
int __fastcall sub_6008CF84(int a1);  /* 0x0008cf84 */
unsigned int __fastcall sub_6008D0C0(int a1);  /* 0x0008d0c0 */
int __fastcall sub_6008D24C(_DWORD *a1);  /* 0x0008d24c */
unsigned int __fastcall sub_6008D2F8(int a1);  /* 0x0008d2f8 */
int __fastcall sub_6008D364(int a1);  /* 0x0008d364 */
unsigned int __fastcall sub_6008D580(int a1);  /* 0x0008d580 */
int __fastcall sub_6008D610(int result);  /* 0x0008d610 */
unsigned int __fastcall sub_6008D620(int a1);  /* 0x0008d620 */
int __fastcall sub_6008D68C(_DWORD *a1);  /* 0x0008d68c */
int __fastcall sub_6008D724(int a1);  /* 0x0008d724 */
int __fastcall sub_6008D728(int a1);  /* 0x0008d728 */
int __fastcall sub_6008D738(int a1);  /* 0x0008d738 */
int __fastcall sub_6008D808(int a1);  /* 0x0008d808 */
int __fastcall sub_6008DAAC(int *a1);  /* 0x0008daac */
int __fastcall sub_6008DB1C(int a1);  /* 0x0008db1c */
int __fastcall SE_PLY_CROWN_RISE_ref(int a1);  /* 0x0008dbe0 */
int __fastcall jc_wait_mario_ref(int a1);  /* 0x0008dd1c */
int __fastcall sub_6008DE70(int a1);  /* 0x0008de70 */
int __fastcall sub_6008E554(int a1);  /* 0x0008e554 */
int __fastcall sub_6008E5F0(_DWORD *a1);  /* 0x0008e5f0 */
int __fastcall sub_6008E684(int a1, int a2, int a3, int a4);  /* 0x0008e684 */
int __fastcall sub_6008E710(int result);  /* 0x0008e710 */
int __fastcall sub_6008E71C(int result);  /* 0x0008e71c */
int __fastcall sub_6008E778(_DWORD *a1);  /* 0x0008e778 */
int __fastcall SE_PLY_CROWN_LETDOWN_FAST_ref(int a1);  /* 0x0008e820 */
int __fastcall sub_6008E914(int a1);  /* 0x0008e914 */
int __fastcall sub_6008E964(int a1);  /* 0x0008e964 */
int __fastcall sub_6008EA1C(int a1);  /* 0x0008ea1c */
int __fastcall SE_PLY_GET_OFF_CLOWN_ref(int a1);  /* 0x0008ea64 */
int __fastcall sub_6008ECD0(int a1);  /* 0x0008ecd0 */
int __fastcall sub_6008ED78(int result);  /* 0x0008ed78 */
int __fastcall sub_6008ED88(int a1);  /* 0x0008ed88 */
int __fastcall sub_6008EE3C(int a1);  /* 0x0008ee3c */
int __fastcall SE_PLY_GET_OFF_CLOWN_ref_2(int a1);  /* 0x0008ee8c */
int __fastcall sub_6008F100(int a1);  /* 0x0008f100 */
int __fastcall sub_6008F188(int result);  /* 0x0008f188 */
int __fastcall SE_PLY_GET_OFF_CLOWN_ref_3(float *a1);  /* 0x0008f198 */
int __fastcall sub_6008F3D0(int a1);  /* 0x0008f3d0 */
int __fastcall sub_6008F458(int result);  /* 0x0008f458 */
int __fastcall sub_6008F468(int a1);  /* 0x0008f468 */
int __fastcall sub_6008F7C0(int a1);  /* 0x0008f7c0 */
int __fastcall sub_6008F890(int a1);  /* 0x0008f890 */
int __fastcall jc_return_ref(_DWORD *a1);  /* 0x0008f8f8 */
int __fastcall sub_6008F964(int *a1);  /* 0x0008f964 */
int __fastcall sub_6008FACC(int *a1);  /* 0x0008facc */
int __fastcall sub_6008FBF8(int result);  /* 0x0008fbf8 */
int __fastcall sub_6008FC08(int a1);  /* 0x0008fc08 */
int __fastcall sub_6008FE18(int a1);  /* 0x0008fe18 */
int __fastcall sub_6009003C(int a1);  /* 0x0009003c */
int __fastcall SE_BOSS_JR_CROWN_HAKERU_ref(int a1);  /* 0x0009010c */
int __fastcall sub_600901B8(_DWORD *a1);  /* 0x000901b8 */
int __fastcall sub_600901E4(int a1);  /* 0x000901e4 */
unsigned int __fastcall sub_600903B4(int a1);  /* 0x000903b4 */
int __fastcall sub_60090490(int a1, int a2, float *a3);  /* 0x00090490 */
int __fastcall sub_60090694(int a1);  /* 0x00090694 */
int __fastcall sub_600908FC(int a1, int a2, int a3, int a4);  /* 0x000908fc */
int __fastcall sub_60090950(int a1);  /* 0x00090950 */
int __fastcall sub_60090990(int a1);  /* 0x00090990 */
bool __fastcall sub_60090A40(int a1);  /* 0x00090a40 */
int __fastcall sub_60090AA0(int a1, int a2);  /* 0x00090aa0 */
unsigned int __fastcall sub_60090FE8(int a1, int a2);  /* 0x00090fe8 */
unsigned int __fastcall sub_60091144(int a1, int a2);  /* 0x00091144 */
bool __fastcall sub_6009219C(int a1);  /* 0x0009219c */
int __fastcall sub_60092308(int a1, int a2);  /* 0x00092308 */
bool __fastcall sub_60092860(int a1);  /* 0x00092860 */
int __fastcall sub_6009293C(int a1, int a2);  /* 0x0009293c */
bool __fastcall sub_60092A2C(int a1);  /* 0x00092a2c */
int __fastcall sub_60092AFC(int a1);  /* 0x00092afc */
int __fastcall sub_60092F60(_DWORD *a1);  /* 0x00092f60 */
int __fastcall sub_60093838(int a1);  /* 0x00093838 */
int __fastcall sub_6009398C(int a1);  /* 0x0009398c */
int __fastcall sub_60093CB8(int a1);  /* 0x00093cb8 */
int __fastcall sub_60094540(_DWORD *a1);  /* 0x00094540 */
int __fastcall sub_60094798(int a1);  /* 0x00094798 */
int __fastcall sub_600949D0(float *a1);  /* 0x000949d0 */
int __fastcall sub_60094B08(_DWORD *a1);  /* 0x00094b08 */
int __fastcall sub_60094CC8(int a1);  /* 0x00094cc8 */
int __fastcall sub_6009514C(int a1);  /* 0x0009514c */
int __fastcall sub_60095164(int a1);  /* 0x00095164 */
int __fastcall sub_600951A4(int a1);  /* 0x000951a4 */
int __fastcall sub_60095218(int a1);  /* 0x00095218 */
int __fastcall sub_60095344(int a1);  /* 0x00095344 */
int __fastcall sub_60095468(_DWORD *a1);  /* 0x00095468 */
bool __fastcall sub_60095658(int a1);  /* 0x00095658 */
int __fastcall jc_getin_ref(_DWORD *a1);  /* 0x000957f8 */
int __fastcall sub_600958B0(int a1);  /* 0x000958b0 */
void __fastcall sub_600959E8(int a1);  /* 0x000959e8 */
int __fastcall sub_60095B18(int a1);  /* 0x00095b18 */
int __fastcall sub_60095C50(int result, float *a2);  /* 0x00095c50 */
int __fastcall sub_60095D18(int a1, int a2, int a3);  /* 0x00095d18 */
int __fastcall sub_60096A64(float *a1);  /* 0x00096a64 */
int __fastcall sub_60096AE4(int a1);  /* 0x00096ae4 */
int __fastcall sub_60096B84(int a1, int a2);  /* 0x00096b84 */
int __fastcall sub_60097040(int a1);  /* 0x00097040 */
int __fastcall sub_60097204(_BYTE *a1);  /* 0x00097204 */
int __fastcall sub_6009723C(int a1);  /* 0x0009723c */
int __fastcall sub_60097394(int a1);  /* 0x00097394 */
int __fastcall sub_600973A8(int a1);  /* 0x000973a8 */
bool __fastcall sub_600973BC(int a1, int a2);  /* 0x000973bc */
void __fastcall sub_60097534(int a1);  /* 0x00097534 */
int __fastcall sub_600975DC(int a1);  /* 0x000975dc */
int __fastcall sub_60097688(int a1);  /* 0x00097688 */
int __fastcall sub_60097694(int a1);  /* 0x00097694 */
int __fastcall sub_600976A0(int a1);  /* 0x000976a0 */
int __fastcall sub_600976AC(int a1);  /* 0x000976ac */
int __fastcall sub_600976B8(int result);  /* 0x000976b8 */
int __fastcall sub_600976DC(_DWORD *a1, _DWORD *a2);  /* 0x000976dc */
int __fastcall sub_60097700(_DWORD *a1, _DWORD *a2, int a3);  /* 0x00097700 */
int __fastcall sub_6009772C(_DWORD *a1, int a2);  /* 0x0009772c */
int __fastcall sub_60097740(int a1);  /* 0x00097740 */
int __fastcall sub_6009774C(int result, int a2);  /* 0x0009774c */
int __fastcall sub_60097780(int a1);  /* 0x00097780 */
int __fastcall sub_60097854(int a1, int a2);  /* 0x00097854 */
int __fastcall sub_600978EC(int a1, int a2);  /* 0x000978ec */
int __fastcall sub_60097C24(int a1);  /* 0x00097c24 */
int __fastcall sub_60097DDC(int32x4_t *a1);  /* 0x00097ddc */
int __fastcall sub_60098268(int32x4_t *a1);  /* 0x00098268 */
int __fastcall SE_BOSS_IGGY_DOKAN_OUT_ref(int32x4_t *a1);  /* 0x00098674 */
int __fastcall SE_BOSS_IGGY_DOKAN_IN_ref(int32x4_t *a1);  /* 0x00098a48 */
int __fastcall sub_60098CA8(_DWORD *a1);  /* 0x00098ca8 */
int __fastcall sub_60098D2C(int a1);  /* 0x00098d2c */
int __fastcall sub_60098E6C(int a1);  /* 0x00098e6c */
int __fastcall sub_60098F60(int a1);  /* 0x00098f60 */
unsigned int __fastcall SE_BOSS_CMN_MAGIC_SHOT_ref(int a1);  /* 0x00099314 */
int __fastcall sub_600993B4(int a1);  /* 0x000993b4 */
int __fastcall sub_60099418(_DWORD *a1);  /* 0x00099418 */
int __fastcall sub_600994C8(int a1);  /* 0x000994c8 */
int __fastcall sub_60099504(int a1);  /* 0x00099504 */
int __fastcall sub_60099584(int *a1);  /* 0x00099584 */
int __fastcall sub_60099714(int a1);  /* 0x00099714 */
int __fastcall sub_60099F84(int a1);  /* 0x00099f84 */
int __fastcall sub_6009A264(int a1);  /* 0x0009a264 */
int __fastcall sub_6009A2B4(int a1);  /* 0x0009a2b4 */
int __fastcall sub_6009A348(int a1);  /* 0x0009a348 */
int __fastcall SE_BOSS_IGGY_DOKAN_OUT_ref_2(int32x4_t *a1);  /* 0x0009a59c */
int __fastcall sub_6009A8A0(int a1);  /* 0x0009a8a0 */
int __fastcall sub_6009AA60(int32x4_t *a1);  /* 0x0009aa60 */
unsigned int __fastcall sub_6009AE00(int a1);  /* 0x0009ae00 */
int __fastcall sub_6009AF6C(int32x4_t *a1);  /* 0x0009af6c */
int __fastcall sub_6009B6DC(int32x4_t *a1);  /* 0x0009b6dc */
int __fastcall SE_BOSS_IGGY_DOKAN_IN_ref_2(int32x4_t *a1);  /* 0x0009bbc4 */
int __fastcall sub_6009BE30(int result);  /* 0x0009be30 */
int __fastcall sub_6009C05C(int result);  /* 0x0009c05c */
int __fastcall SE_BOSS_IGGY_JUMP_ref(int a1);  /* 0x0009c06c */
int __fastcall sub_6009C15C(int *a1);  /* 0x0009c15c */
int __fastcall sub_6009C218(_WORD *a1);  /* 0x0009c218 */
int __fastcall sub_6009C278(int a1);  /* 0x0009c278 */
int __fastcall sub_6009C340(int a1);  /* 0x0009c340 */
int __fastcall sub_6009C34C(int result);  /* 0x0009c34c */
int __fastcall sub_6009C494(int result);  /* 0x0009c494 */
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
int __fastcall sub_600A1714(int a1, int a2);  /* 0x000a1714 */
int __fastcall sub_600A18F8(int a1);  /* 0x000a18f8 */
int __fastcall sub_600A1924(int a1, int a2);  /* 0x000a1924 */
int __fastcall sub_600A2958(int a1);  /* 0x000a2958 */
int __fastcall SE_BOSS_IGGY_MAGIC_DISAPPEAR_ref(int a1);  /* 0x000a29a4 */
int __fastcall sub_600A2BE0(int a1, int a2);  /* 0x000a2be0 */
int __fastcall sub_600A2EC8(int a1);  /* 0x000a2ec8 */
bool __fastcall sub_600A3428(int a1);  /* 0x000a3428 */
bool __fastcall sub_600A3464(int a1, int a2);  /* 0x000a3464 */
void __fastcall sub_600A35DC(_DWORD *a1);  /* 0x000a35dc */
int __fastcall sub_600A36B8(_DWORD *a1);  /* 0x000a36b8 */
int __fastcall Actor_Iggy_room_build(int a1);  /* 0x000a38c8 */
int __fastcall sub_600A39EC(float *a1);  /* 0x000a39ec */
int __fastcall sub_600A3C08(int a1);  /* 0x000a3c08 */
int __fastcall sub_600A3D1C(int a1);  /* 0x000a3d1c */
int __fastcall sub_600A3E84(int a1);  /* 0x000a3e84 */
int __fastcall sub_600A3FB0(int a1, int a2, int a3, int a4);  /* 0x000a3fb0 */
int __fastcall sub_600A3FD4(int a1);  /* 0x000a3fd4 */
int __fastcall sub_600A4024(int a1);  /* 0x000a4024 */
bool __fastcall sub_600A4074(int a1, int a2);  /* 0x000a4074 */
void __fastcall sub_600A425C(int a1);  /* 0x000a425c */
int __fastcall sub_600A42AC(int a1);  /* 0x000a42ac */
int __fastcall sub_600A4434(struct sead_IDisposer *a1);  /* 0x000a4434 */
bool __fastcall sub_600A4444(int a1, int a2);  /* 0x000a4444 */
int __fastcall SolidOnTopColliderWrapper_dtorFree(struct sead_IDisposer *a1);  /* 0x000a462c */
bool __fastcall SolidOnTopColliderWrapper_checkRTTI(int a1, int a2);  /* 0x000a463c */
int __fastcall Actor_Kamek_2_build(int a1);  /* 0x000a48ec */
int __fastcall fly_magic_ref_2(int a1);  /* 0x000a4960 */
int __fastcall sub_600A4B74(int a1);  /* 0x000a4b74 */
int __fastcall sub_600A4EEC(int a1);  /* 0x000a4eec */
int __fastcall sub_600A4F3C(int a1);  /* 0x000a4f3c */
int __fastcall sub_600A4FEC(int32x4_t *a1);  /* 0x000a4fec */
int __fastcall fly_appear_ref(int32x4_t *a1);  /* 0x000a50b0 */
int __fastcall sub_600A51C0(int32x4_t *a1);  /* 0x000a51c0 */
int __fastcall sub_600A5368(int result);  /* 0x000a5368 */
int __fastcall sub_600A5378(int a1);  /* 0x000a5378 */
int __fastcall fly_disappear_ref(int32x4_t *a1);  /* 0x000a53e8 */
int __fastcall sub_600A54F8(int32x4_t *a1);  /* 0x000a54f8 */
int __fastcall sub_600A567C(int a1);  /* 0x000a567c */
int __fastcall SE_BOSS_KAMECK_MAGIC_ref(int a1);  /* 0x000a56e4 */
int __fastcall sub_600A5920(int result);  /* 0x000a5920 */
int __fastcall fly_st_ref(int a1);  /* 0x000a5930 */
int __fastcall sub_600A5998(unsigned __int8 *a1);  /* 0x000a5998 */
int __fastcall SE_EMY_KAMECK_FLY_START_ref(int a1);  /* 0x000a5a98 */
int __fastcall sub_600A5CD0(int a1);  /* 0x000a5cd0 */
int __fastcall sub_600A5D1C(int a1);  /* 0x000a5d1c */
int __fastcall fly_disappear_ref_2(int32x4_t *a1);  /* 0x000a5d94 */
int __fastcall sub_600A5F08(int32x4_t *a1);  /* 0x000a5f08 */
int __fastcall sub_600A608C(int a1);  /* 0x000a608c */
unsigned int __fastcall sub_600A61B8(int32x4_t *a1);  /* 0x000a61b8 */
int __fastcall fly_appear_ref_2(int32x4_t *a1);  /* 0x000a6238 */
int __fastcall sub_600A630C(int32x4_t *a1);  /* 0x000a630c */
int __fastcall fly_throw3_ref(_DWORD *a1);  /* 0x000a6528 */
int __fastcall sub_600A67EC(_DWORD *a1);  /* 0x000a67ec */
int __fastcall sub_600A6970(int a1);  /* 0x000a6970 */
int __fastcall sub_600A69C0(int result);  /* 0x000a69c0 */
int __fastcall sub_600A69D0(int a1);  /* 0x000a69d0 */
int __fastcall sub_600A6A90(int a1);  /* 0x000a6a90 */
int __fastcall sub_600A6CBC(_DWORD *a1);  /* 0x000a6cbc */
int __fastcall sub_600A70F8(int a1);  /* 0x000a70f8 */
int __fastcall fly_throw2_wait_ref(int a1);  /* 0x000a7148 */
int __fastcall sub_600A71B0(int a1);  /* 0x000a71b0 */
int __fastcall sub_600A724C(int a1);  /* 0x000a724c */
int __fastcall sub_600A7614(int a1);  /* 0x000a7614 */
int __fastcall sub_600A7890(int a1);  /* 0x000a7890 */
int __fastcall sub_600A7D00(int a1);  /* 0x000a7d00 */
int __fastcall Skl_root_ref(int a1);  /* 0x000a7d18 */
int __fastcall sub_600A7F7C(_DWORD *a1);  /* 0x000a7f7c */
int __fastcall sub_600A83C0(int a1);  /* 0x000a83c0 */
int __fastcall sub_600A86C4(int *a1);  /* 0x000a86c4 */
int __fastcall sub_600A887C(int a1);  /* 0x000a887c */
int __fastcall sub_600A8914(int a1);  /* 0x000a8914 */
int __fastcall sub_600A8A80(int a1);  /* 0x000a8a80 */
int __fastcall sub_600A8DD4(int a1, int a2, int a3, int a4, int a5);  /* 0x000a8dd4 */
int __fastcall sub_600A8E78(int a1);  /* 0x000a8e78 */
int __fastcall sub_600A8F84(_DWORD **a1, float *a2);  /* 0x000a8f84 */
int __fastcall sub_600A9140(int *a1);  /* 0x000a9140 */
int __fastcall sub_600A9198(int a1, int a2, int a3);  /* 0x000a9198 */
int __fastcall sub_600A967C(int a1, _DWORD *a2);  /* 0x000a967c */
int __fastcall sub_600A96A0(int a1);  /* 0x000a96a0 */
int __fastcall sub_600A96C0(float *a1);  /* 0x000a96c0 */
int __fastcall sub_600A9C78(float *a1, float *a2);  /* 0x000a9c78 */
unsigned int __fastcall sub_600A9C90(_DWORD *a1);  /* 0x000a9c90 */
int __fastcall sub_600A9F20(int a1, _DWORD *a2, _DWORD *a3, int a4);  /* 0x000a9f20 */
int __fastcall sub_600AA114(int a1);  /* 0x000aa114 */
int __fastcall sub_600AA38C(int a1);  /* 0x000aa38c */
int __fastcall sub_600AA678(_DWORD *a1);  /* 0x000aa678 */
int __fastcall sub_600AA6F8(int result);  /* 0x000aa6f8 */
int __fastcall sub_600AA708(int a1);  /* 0x000aa708 */
int __fastcall sub_600AA860(int result);  /* 0x000aa860 */
int __fastcall sub_600AA8B0(int result);  /* 0x000aa8b0 */
int __fastcall sub_600AA980(int a1);  /* 0x000aa980 */
int __fastcall sub_600AAA30(_DWORD *a1);  /* 0x000aaa30 */
int __fastcall sub_600AAAFC(int *a1);  /* 0x000aaafc */
int __fastcall sub_600AAB2C(_DWORD *a1);  /* 0x000aab2c */
int __fastcall sub_600AABCC(int *a1);  /* 0x000aabcc */
int __fastcall sub_600AABEC(int a1);  /* 0x000aabec */
int __fastcall sub_600AAEF8(int a1);  /* 0x000aaef8 */
bool __fastcall sub_600AAF54(int *a1);  /* 0x000aaf54 */
int __fastcall sub_600AAF94(int a1);  /* 0x000aaf94 */
int __fastcall sub_600AAFA0(int a1);  /* 0x000aafa0 */
int __fastcall sub_600AB120(int a1);  /* 0x000ab120 */
int __fastcall sub_600AB160(int a1);  /* 0x000ab160 */
int __fastcall sub_600AB180(int a1);  /* 0x000ab180 */
int __fastcall sub_600AB1A0(int a1);  /* 0x000ab1a0 */
int __fastcall SE_BOSS_KAMECK_DOWN_BOUND_ref(int a1);  /* 0x000ab34c */
bool __fastcall sub_600AB4C8(int a1, int a2);  /* 0x000ab4c8 */
void __fastcall sub_600AB5CC(_DWORD *a1);  /* 0x000ab5cc */
int __fastcall sub_600AB658(_DWORD *a1);  /* 0x000ab658 */
int __fastcall sub_600AB6E8(int a1);  /* 0x000ab6e8 */
int __fastcall sub_600AB71C(int a1);  /* 0x000ab71c */
int __fastcall sub_600AB734(int result);  /* 0x000ab734 */
int __fastcall wand_model_root_ref(int a1);  /* 0x000ab744 */
bool __fastcall sub_600AB868(int a1, int a2);  /* 0x000ab868 */
int __fastcall sub_600AB9DC(_DWORD *a1);  /* 0x000ab9dc */
bool __fastcall sub_600AB9EC(int a1, int a2);  /* 0x000ab9ec */
int __fastcall sub_600ABB60(_DWORD *a1);  /* 0x000abb60 */
int __fastcall sub_600ABB74(int a1);  /* 0x000abb74 */
int __fastcall sub_600ABBA0(int *a1, int *a2);  /* 0x000abba0 */
bool __fastcall sub_600AC960(int a1, int a2);  /* 0x000ac960 */
int __fastcall sub_600ACB4C(Actor *a1);  /* 0x000acb4c */
int __fastcall sub_600ACBA0(int a1, int a2);  /* 0x000acba0 */
int __fastcall sub_600ACD9C(int a1);  /* 0x000acd9c */
int __fastcall sub_600AD290(int a1);  /* 0x000ad290 */
int __fastcall sub_600AD330(int result);  /* 0x000ad330 */
int __fastcall sub_600AD340(int a1);  /* 0x000ad340 */
int __fastcall sub_600AD464(int a1);  /* 0x000ad464 */
int __fastcall sub_600AD550(_DWORD *a1);  /* 0x000ad550 */
int __fastcall sub_600AD5C4(int a1);  /* 0x000ad5c4 */
int __fastcall sub_600AD6AC(int a1, int a2);  /* 0x000ad6ac */
int __fastcall sub_600AD8C0(_DWORD *a1);  /* 0x000ad8c0 */
int __fastcall sub_600ADB30(int a1);  /* 0x000adb30 */
int __fastcall sub_600ADC18(int a1, int a2, int a3);  /* 0x000adc18 */
int __fastcall sub_600AE0B4(int a1, int a2);  /* 0x000ae0b4 */
int __fastcall sub_600AE514(int a1);  /* 0x000ae514 */
int __fastcall sub_600AE6A8(int32x4_t *a1);  /* 0x000ae6a8 */
int __fastcall sub_600AE72C(int a1, int a2, int a3, int a4);  /* 0x000ae72c */
int __fastcall sub_600AE7A8(int a1);  /* 0x000ae7a8 */
int __fastcall sub_600AE874(int result);  /* 0x000ae874 */
int __fastcall sub_600AE93C(int a1, int a2);  /* 0x000ae93c */
int __fastcall sub_600AEAC4(int a1);  /* 0x000aeac4 */
int __fastcall sub_600AF29C(int a1);  /* 0x000af29c */
int __fastcall sub_600AF434(int a1);  /* 0x000af434 */
bool __fastcall sub_600AF474(int a1);  /* 0x000af474 */
int __fastcall sub_600AF528(int a1, int a2);  /* 0x000af528 */
int __fastcall sub_600AFC3C(int a1, int a2);  /* 0x000afc3c */
bool __fastcall sub_600AFE28(int a1, int a2);  /* 0x000afe28 */
void __fastcall sub_600AFF2C(int a1);  /* 0x000aff2c */
int __fastcall sub_600AFFA0(int a1);  /* 0x000affa0 */
int __fastcall sub_600B0024(int a1, int a2);  /* 0x000b0024 */
int __fastcall sub_600B00BC(int a1, int a2);  /* 0x000b00bc */
int __fastcall sub_600B0154(int a1, int a2);  /* 0x000b0154 */
int __fastcall sub_600B04D4(int a1);  /* 0x000b04d4 */
int __fastcall sub_600B056C(int a1);  /* 0x000b056c */
int __fastcall sub_600B0668(int a1, int a2);  /* 0x000b0668 */
int __fastcall sub_600B0964(int a1);  /* 0x000b0964 */
int __fastcall sub_600B0C54(int32x4_t *a1);  /* 0x000b0c54 */
int __fastcall sub_600B0C88(_DWORD *a1);  /* 0x000b0c88 */
int __fastcall sub_600B0DF4(int a1);  /* 0x000b0df4 */
int __fastcall sub_600B0E08(int a1);  /* 0x000b0e08 */
bool __fastcall sub_600B0E1C(int a1, int a2);  /* 0x000b0e1c */
int __fastcall sub_600B0F94(int a1);  /* 0x000b0f94 */
int __fastcall sub_600B183C(int a1);  /* 0x000b183c */
int __fastcall sub_600B189C(int a1);  /* 0x000b189c */
int __fastcall sub_600B2D20(_DWORD *a1);  /* 0x000b2d20 */
bool __fastcall sub_600B2DF0(int a1);  /* 0x000b2df0 */
int __fastcall sub_600B2EF8(int a1, int a2);  /* 0x000b2ef8 */
int __fastcall sub_600B2FD4(int a1, int a2, __int16 a3);  /* 0x000b2fd4 */
int __fastcall sub_600B330C(_DWORD *a1);  /* 0x000b330c */
int __fastcall sub_600B3340(_DWORD *a1);  /* 0x000b3340 */
bool __fastcall sub_600B33DC(_DWORD *a1, int a2);  /* 0x000b33dc */
bool __fastcall sub_600B3E14(_DWORD *a1);  /* 0x000b3e14 */
int __fastcall sub_600B7F20(int a1);  /* 0x000b7f20 */
int __fastcall sub_600B86B0(int result);  /* 0x000b86b0 */
int __fastcall sub_600B86C4(int a1);  /* 0x000b86c4 */
int __fastcall sub_600B886C(int a1);  /* 0x000b886c */
int __fastcall sub_600B8958(_DWORD *a1);  /* 0x000b8958 */
int __fastcall sub_600B8C30(int a1);  /* 0x000b8c30 */
int __fastcall sub_600B8D60(_DWORD *a1);  /* 0x000b8d60 */
bool __fastcall sub_600B8D64(int a1, int a2);  /* 0x000b8d64 */
int __fastcall sub_600B8EDC(Actor *a1);  /* 0x000b8edc */
int __fastcall sub_600B8F2C(int a1);  /* 0x000b8f2c */
int __fastcall sub_600B918C(int a1, int a2);  /* 0x000b918c */
int __fastcall sub_600B91A8(int a1);  /* 0x000b91a8 */
int __fastcall sub_600B9294(float *a1);  /* 0x000b9294 */
int __fastcall sub_600B9564(int a1);  /* 0x000b9564 */
int __fastcall sub_600B968C(Actor *a1);  /* 0x000b968c */
int __fastcall sub_600B96FC(int a1);  /* 0x000b96fc */
int __fastcall sub_600B9930(int a1);  /* 0x000b9930 */
int __fastcall SE_BOSS_CMN_MAGIC_EXTINCT_ref(int a1, int a2);  /* 0x000b9d94 */
int __fastcall sub_600BA0E0(int a1);  /* 0x000ba0e0 */
int __fastcall sub_600BA158(int a1);  /* 0x000ba158 */
bool __fastcall sub_600BA204(int a1);  /* 0x000ba204 */
int __fastcall sub_600BA244(_DWORD *a1);  /* 0x000ba244 */
int __fastcall sub_600BA31C(int result, unsigned int a2);  /* 0x000ba31c */
int __fastcall sub_600BA330(_DWORD *a1);  /* 0x000ba330 */
int __fastcall sub_600BA4F8(int a1);  /* 0x000ba4f8 */
int __fastcall sub_600BA524(int a1);  /* 0x000ba524 */
int __fastcall sub_600BA568(_DWORD *a1);  /* 0x000ba568 */
int __fastcall sub_600BA664(_DWORD *a1);  /* 0x000ba664 */
int __fastcall sub_600BA734(int a1);  /* 0x000ba734 */
int __fastcall sub_600BA9FC(int a1);  /* 0x000ba9fc */
unsigned int __fastcall sub_600BABB8(int a1);  /* 0x000babb8 */
int __fastcall sub_600BAE24(_BYTE *a1);  /* 0x000bae24 */
int __fastcall sub_600BAE60(_BYTE *a1);  /* 0x000bae60 */
bool __fastcall sub_600BAE94(int a1, int a2);  /* 0x000bae94 */
int __fastcall sub_600BAF98(int a1);  /* 0x000baf98 */
int __fastcall sub_600BB044(int a1, int a2);  /* 0x000bb044 */
int __fastcall sub_600BB0E0(int a1);  /* 0x000bb0e0 */
int __fastcall sub_600BB2D4(int *a1);  /* 0x000bb2d4 */
int __fastcall sub_600BB354(int a1);  /* 0x000bb354 */
int __fastcall sub_600BB38C(int result);  /* 0x000bb38c */
int __fastcall sub_600BB574(int result);  /* 0x000bb574 */
int __fastcall sub_600BB614(int a1);  /* 0x000bb614 */
int __fastcall sub_600BB738(int a1);  /* 0x000bb738 */
int __fastcall sub_600BB804(int result);  /* 0x000bb804 */
int __fastcall sub_600BB8EC(float *a1);  /* 0x000bb8ec */
int __fastcall sub_600BBA44(float *a1);  /* 0x000bba44 */
int __fastcall sub_600BBB94(int a1);  /* 0x000bbb94 */
int __fastcall sub_600BBC5C(int a1);  /* 0x000bbc5c */
int __fastcall sub_600BBD0C(int a1, float *a2, int a3);  /* 0x000bbd0c */
int __fastcall sub_600BBE20(int a1, int a2);  /* 0x000bbe20 */
bool __fastcall sub_600BBF50(int a1, int a2);  /* 0x000bbf50 */
void __fastcall sub_600BC054(Actor *a1);  /* 0x000bc054 */
int __fastcall sub_600BC084(Actor *a1);  /* 0x000bc084 */
int __fastcall sub_600BC310(int result);  /* 0x000bc310 */
int __fastcall sub_600BC3F0(int a1);  /* 0x000bc3f0 */
int __fastcall sub_600BC3F4(int a1);  /* 0x000bc3f4 */
int __fastcall sub_600BC4C8(int result);  /* 0x000bc4c8 */
int __fastcall sub_600BC4F4(int a1);  /* 0x000bc4f4 */
bool __fastcall sub_600BC504(int a1, int a2);  /* 0x000bc504 */
int __fastcall sub_600BC67C(Actor *a1);  /* 0x000bc67c */
int __fastcall sub_600BC6B0(int a1, int a2);  /* 0x000bc6b0 */
int __fastcall sub_600BC968(int result);  /* 0x000bc968 */
int __fastcall sub_600BCA48(int a1);  /* 0x000bca48 */
int __fastcall sub_600BCA4C(int a1);  /* 0x000bca4c */
int __fastcall sub_600BCB20(int result);  /* 0x000bcb20 */
int __fastcall sub_600BCB4C(int a1);  /* 0x000bcb4c */
bool __fastcall sub_600BCB5C(int a1, int a2);  /* 0x000bcb5c */
int __fastcall sub_600BCCD4(Actor *a1);  /* 0x000bccd4 */
int __fastcall sub_600BCF20(int result);  /* 0x000bcf20 */
int __fastcall sub_600BCFFC(int a1);  /* 0x000bcffc */
int __fastcall sub_600BD000(int a1);  /* 0x000bd000 */
int __fastcall sub_600BD0D4(int result);  /* 0x000bd0d4 */
int __fastcall sub_600BD100(int a1);  /* 0x000bd100 */
bool __fastcall sub_600BD110(int a1, int a2);  /* 0x000bd110 */
int __fastcall sub_600BD288(Actor *a1);  /* 0x000bd288 */
int __fastcall sub_600BD4DC(int result);  /* 0x000bd4dc */
int __fastcall sub_600BD5BC(int a1);  /* 0x000bd5bc */
int __fastcall sub_600BD5C0(int a1);  /* 0x000bd5c0 */
int __fastcall sub_600BD694(int result);  /* 0x000bd694 */
int __fastcall sub_600BD6C0(int a1);  /* 0x000bd6c0 */
bool __fastcall sub_600BD6D0(int a1, int a2);  /* 0x000bd6d0 */
int __fastcall sub_600BD848(Actor *a1);  /* 0x000bd848 */
int __fastcall sub_600BDA9C(int result);  /* 0x000bda9c */
int __fastcall sub_600BDB7C(int a1);  /* 0x000bdb7c */
int __fastcall sub_600BDB80(int a1);  /* 0x000bdb80 */
int __fastcall sub_600BDC54(int result);  /* 0x000bdc54 */
int __fastcall sub_600BDC80(int a1);  /* 0x000bdc80 */
bool __fastcall sub_600BDC90(int a1, int a2);  /* 0x000bdc90 */
int __fastcall sub_600BDE08(Actor *a1);  /* 0x000bde08 */
int __fastcall sub_600BE05C(int result);  /* 0x000be05c */
int __fastcall sub_600BE13C(int a1);  /* 0x000be13c */
int __fastcall sub_600BE140(int a1);  /* 0x000be140 */
int __fastcall sub_600BE214(int result);  /* 0x000be214 */
int __fastcall sub_600BE240(int a1);  /* 0x000be240 */
bool __fastcall sub_600BE250(int a1, int a2);  /* 0x000be250 */
int __fastcall sub_600BE3C8(Actor *a1);  /* 0x000be3c8 */
int __fastcall sub_600BE630(int result);  /* 0x000be630 */
int __fastcall sub_600BE640(int result);  /* 0x000be640 */
int __fastcall sub_600BE858(int a1, int a2, int a3, int a4);  /* 0x000be858 */
int __fastcall sub_600BE9A8(int result);  /* 0x000be9a8 */
int __fastcall sub_600BE9B8(int a1);  /* 0x000be9b8 */
int __fastcall ef_boss_cannon_ref(int a1);  /* 0x000be9f0 */
int __fastcall sub_600BECD0(_DWORD *a1);  /* 0x000becd0 */
int __fastcall sub_600BEE20(int a1);  /* 0x000bee20 */
int __fastcall sub_600BF5F8(_DWORD *a1);  /* 0x000bf5f8 */
int __fastcall sub_600BF77C(int a1);  /* 0x000bf77c */
int __fastcall sub_600BF87C(int a1, int a2);  /* 0x000bf87c */
int __fastcall sub_600BFBE4(int a1);  /* 0x000bfbe4 */
int __fastcall sub_600BFED4(int a1);  /* 0x000bfed4 */
int __fastcall sub_600BFF04(int a1, int a2, int a3, int a4);  /* 0x000bff04 */
bool __fastcall sub_600BFF2C(_DWORD *a1);  /* 0x000bff2c */
int __fastcall sub_600C0214(int result, unsigned int a2);  /* 0x000c0214 */
bool __fastcall sub_600C04CC(int a1, int a2);  /* 0x000c04cc */
void __fastcall sub_600C05D0(int a1);  /* 0x000c05d0 */
int __fastcall sub_600C0630(int a1);  /* 0x000c0630 */
int __fastcall sub_600C0B7C(int result);  /* 0x000c0b7c */
int __fastcall sub_600C0C5C(int a1);  /* 0x000c0c5c */
int __fastcall sub_600C0C60(int a1);  /* 0x000c0c60 */
int __fastcall sub_600C0D34(int result);  /* 0x000c0d34 */
int __fastcall sub_600C0D60(int a1);  /* 0x000c0d60 */
bool __fastcall sub_600C0D70(int a1, int a2);  /* 0x000c0d70 */
int __fastcall sub_600C0EE8(Actor *a1);  /* 0x000c0ee8 */
int __fastcall sub_600C1038(_DWORD *a1);  /* 0x000c1038 */
int __fastcall sub_600C1150(int a1);  /* 0x000c1150 */
int __fastcall sub_600C1230(_DWORD *a1);  /* 0x000c1230 */
int __fastcall sub_600C1394(int a1);  /* 0x000c1394 */
int __fastcall sub_600C1480(int a1);  /* 0x000c1480 */
int __fastcall sub_600C1678(int a1);  /* 0x000c1678 */
int __fastcall sub_600C1760(_DWORD *a1);  /* 0x000c1760 */
int __fastcall sub_600C18E0(int a1);  /* 0x000c18e0 */
int __fastcall sub_600C1CDC(_DWORD *a1);  /* 0x000c1cdc */
int __fastcall sub_600C2174(_DWORD *a1);  /* 0x000c2174 */
int __fastcall sub_600C2854(int *a1);  /* 0x000c2854 */
int __fastcall sub_600C2974(int a1);  /* 0x000c2974 */
int __fastcall sub_600C2C8C(int a1);  /* 0x000c2c8c */
int __fastcall sub_600C2CB0(_DWORD *a1);  /* 0x000c2cb0 */
int __fastcall sub_600C2DB8(int a1);  /* 0x000c2db8 */
int __fastcall SE_VOC_KP_SHOUT_ref(int a1);  /* 0x000c2f28 */
int __fastcall sub_600C30EC(_DWORD *a1);  /* 0x000c30ec */
int __fastcall sub_600C3214(int a1);  /* 0x000c3214 */
unsigned int __fastcall sub_600C32F4(int a1);  /* 0x000c32f4 */
unsigned int __fastcall sub_600C341C(_DWORD *a1);  /* 0x000c341c */
int __fastcall sub_600C353C(int a1);  /* 0x000c353c */
int __fastcall sub_600C3554(int a1);  /* 0x000c3554 */
int __fastcall sub_600C4A80(_DWORD *a1);  /* 0x000c4a80 */
int __fastcall sub_600C569C(int result, unsigned int a2);  /* 0x000c569c */
int __fastcall sub_600C593C(_DWORD *a1);  /* 0x000c593c */
int __fastcall sub_600C5A70(int a1, int a2, unsigned int a3, int *a4);  /* 0x000c5a70 */
int __fastcall sub_600C5D7C(int a1, int a2);  /* 0x000c5d7c */
int __fastcall sub_600C661C(int a1);  /* 0x000c661c */
int __fastcall sub_600C6764(int a1);  /* 0x000c6764 */
int __fastcall sub_600C69CC(_DWORD *a1);  /* 0x000c69cc */
int __fastcall sub_600C6BF4(int a1);  /* 0x000c6bf4 */
int __fastcall sub_600C78B4(int a1);  /* 0x000c78b4 */
int __fastcall sub_600C7A6C(unsigned int *a1);  /* 0x000c7a6c */
int __fastcall sub_600C7C00(_DWORD *a1);  /* 0x000c7c00 */
int __fastcall sub_600C806C(_DWORD *a1);  /* 0x000c806c */
int __fastcall sub_600C8100(int a1);  /* 0x000c8100 */
int __fastcall sub_600C8254(_DWORD *a1);  /* 0x000c8254 */
int __fastcall sub_600C8298(_DWORD *a1);  /* 0x000c8298 */
int __fastcall sub_600C8524(_DWORD *a1);  /* 0x000c8524 */
int __fastcall sub_600C8610(int a1);  /* 0x000c8610 */
int __fastcall sub_600C8890(int result);  /* 0x000c8890 */
int __fastcall sub_600C88A4(_DWORD *a1);  /* 0x000c88a4 */
int __fastcall sub_600C88A8(_DWORD *a1);  /* 0x000c88a8 */
int __fastcall sub_600C8964(_DWORD *a1);  /* 0x000c8964 */
int __fastcall sub_600C9368(_BYTE *a1);  /* 0x000c9368 */
int __fastcall sub_600C94B4(int a1);  /* 0x000c94b4 */
int __fastcall sub_600C94FC(int a1);  /* 0x000c94fc */
int __fastcall sub_600C9940(int a1);  /* 0x000c9940 */
int __fastcall sub_600C99A0(int a1);  /* 0x000c99a0 */
int __fastcall sub_600C9A1C(_DWORD *a1);  /* 0x000c9a1c */
int __fastcall sub_600CA2A8(_DWORD *a1);  /* 0x000ca2a8 */
int __fastcall sub_600CA420(int a1);  /* 0x000ca420 */
int __fastcall sub_600CA47C(_DWORD *a1);  /* 0x000ca47c */
int __fastcall sub_600CA584(int a1);  /* 0x000ca584 */
int __fastcall sub_600CA5C8(int a1);  /* 0x000ca5c8 */
bool __fastcall sub_600CAAEC(int a1, int a2);  /* 0x000caaec */
void __fastcall sub_600CAC64(Actor *a1);  /* 0x000cac64 */
int __fastcall sub_600CAC94(Actor *a1);  /* 0x000cac94 */
int __fastcall sub_600CACD4(int a1);  /* 0x000cacd4 */
int __fastcall sub_600CAD0C(int a1, int a2);  /* 0x000cad0c */
int __fastcall sub_600CAD44(int a1, _DWORD *a2);  /* 0x000cad44 */
int __fastcall sub_600CAD88(int a1, int a2);  /* 0x000cad88 */
int __fastcall sub_600CAD94(int result, _DWORD *a2);  /* 0x000cad94 */
int __fastcall sub_600CADA4(int a1, int a2);  /* 0x000cada4 */
int __fastcall sub_600CADCC(int a1);  /* 0x000cadcc */
int __fastcall sub_600CADD4(int a1);  /* 0x000cadd4 */
int __fastcall sub_600CB3B0(int a1);  /* 0x000cb3b0 */
int __fastcall sub_600CB4D0(int a1);  /* 0x000cb4d0 */
int __fastcall sub_600CB54C(int a1);  /* 0x000cb54c */
int __fastcall sub_600CB5EC(int a1);  /* 0x000cb5ec */
int __fastcall sub_600CB6D4(int a1);  /* 0x000cb6d4 */
int __fastcall sub_600CB874(_DWORD *a1);  /* 0x000cb874 */
int __fastcall sub_600CB944(int a1, int a2, int a3, int a4);  /* 0x000cb944 */
bool __fastcall sub_600CB96C(int a1, int a2);  /* 0x000cb96c */
void __fastcall sub_600CBAE4(_BYTE *a1);  /* 0x000cbae4 */
int __fastcall sub_600CBB74(_BYTE *a1);  /* 0x000cbb74 */
int __fastcall sub_600CBDC8(int a1, int a2);  /* 0x000cbdc8 */
int __fastcall sub_600CBF0C(int a1, int a2, int a3, int a4);  /* 0x000cbf0c */
int __fastcall sub_600CC038(int result);  /* 0x000cc038 */
int __fastcall SE_BOSS_KOOPA_FIRE_SHOT_ref(int a1);  /* 0x000cc0a8 */
int __fastcall sub_600CC28C(int result);  /* 0x000cc28c */
int __fastcall sub_600CC2F8(int a1);  /* 0x000cc2f8 */
int __fastcall sub_600CC43C(int a1);  /* 0x000cc43c */
int __fastcall sub_600CC5E4(_DWORD *a1);  /* 0x000cc5e4 */
int __fastcall sub_600CC680(int result, _DWORD *a2);  /* 0x000cc680 */
int __fastcall sub_600CC8AC(int a1, int a2, int a3, int a4);  /* 0x000cc8ac */
bool __fastcall sub_600CC9F0(int a1, int a2);  /* 0x000cc9f0 */
void __fastcall sub_600CCAF4(int a1);  /* 0x000ccaf4 */
int __fastcall sub_600CCB70(int a1);  /* 0x000ccb70 */
int __fastcall sub_600CCEEC(int a1);  /* 0x000cceec */
float __fastcall sub_600CD070(_DWORD *a1);  /* 0x000cd070 */
int __fastcall sub_600CD0AC(int a1);  /* 0x000cd0ac */
int __fastcall sub_600CD10C(int a1);  /* 0x000cd10c */
int __fastcall sub_600CD34C(int *a1);  /* 0x000cd34c */
int __fastcall sub_600CD484(_DWORD *a1);  /* 0x000cd484 */
int __fastcall sub_600CD604(int a1);  /* 0x000cd604 */
int __fastcall sub_600CD6C8(int a1, int a2, int a3, int a4);  /* 0x000cd6c8 */
int __fastcall sub_600CD6FC(int a1, int a2);  /* 0x000cd6fc */
int __fastcall sub_600CD8F0(int a1, int a2, int a3);  /* 0x000cd8f0 */
bool __fastcall sub_600CDE9C(int a1, int a2);  /* 0x000cde9c */
void __fastcall sub_600CE014(_BYTE *a1);  /* 0x000ce014 */
int __fastcall sub_600CE084(_BYTE *a1);  /* 0x000ce084 */
int __fastcall sub_600CE584(int a1, int a2, int a3, int a4);  /* 0x000ce584 */
int __fastcall sub_600CE6A4(int a1);  /* 0x000ce6a4 */
int __fastcall sub_600CE78C(int a1);  /* 0x000ce78c */
int __fastcall sub_600CEA24(int a1);  /* 0x000cea24 */
int __fastcall sub_600CEB84(int a1, int a2);  /* 0x000ceb84 */
void __fastcall sub_600CEEEC(int a1, int a2);  /* 0x000ceeec */
void __fastcall sub_600CEF58(int a1, int a2);  /* 0x000cef58 */
int __fastcall sub_600CFFA4(int a1);  /* 0x000cffa4 */
int __fastcall sub_600D0154(int a1);  /* 0x000d0154 */
int __fastcall sub_600D02F8(_DWORD *a1);  /* 0x000d02f8 */
int __fastcall sub_600D0408(int a1);  /* 0x000d0408 */
int __fastcall sub_600D04B4(int a1);  /* 0x000d04b4 */
int __fastcall sub_600D0500(_DWORD *a1);  /* 0x000d0500 */
int __fastcall sub_600D061C(int *a1);  /* 0x000d061c */
int __fastcall sub_600D0798(int a1);  /* 0x000d0798 */
int __fastcall sub_600D0B10(int a1);  /* 0x000d0b10 */
int __fastcall sub_600D0BB4(float *a1);  /* 0x000d0bb4 */
int __fastcall sub_600D0C44(int a1);  /* 0x000d0c44 */
int __fastcall sub_600D0CEC(int a1, float *a2);  /* 0x000d0cec */
int __fastcall sub_600D0D58(int a1);  /* 0x000d0d58 */
int __fastcall sub_600D0DBC(int a1, int a2, int a3, int a4);  /* 0x000d0dbc */
int __fastcall sub_600D0E78(int a1, int a2);  /* 0x000d0e78 */
void __fastcall sub_600D1670(int a1, float *a2);  /* 0x000d1670 */
int __fastcall sub_600D17D0(int a1);  /* 0x000d17d0 */
int __fastcall sub_600D17F4(int a1);  /* 0x000d17f4 */
int __fastcall sub_600D186C(_DWORD *a1, int a2);  /* 0x000d186c */
int __fastcall sub_600D188C(int *a1, int a2);  /* 0x000d188c */
int __fastcall sub_600D18C8(int a1, int a2);  /* 0x000d18c8 */
int __fastcall sub_600D1AC8(int a1);  /* 0x000d1ac8 */
int __fastcall sub_600D1B74(int *a1, int a2);  /* 0x000d1b74 */
int __fastcall sub_600D1BB0(int result);  /* 0x000d1bb0 */
int __fastcall sub_600D1BC0(float *a1);  /* 0x000d1bc0 */
int __fastcall sub_600D1D60(int a1);  /* 0x000d1d60 */
int __fastcall sub_600D1DE0(int a1);  /* 0x000d1de0 */
int __fastcall sub_600D1E3C(int a1);  /* 0x000d1e3c */
int __fastcall sub_600D1EBC(float *a1);  /* 0x000d1ebc */
int __fastcall sub_600D2128(int a1, int a2);  /* 0x000d2128 */
int __fastcall sub_600D2150(_DWORD *a1);  /* 0x000d2150 */
bool __fastcall sub_600D2180(int a1, int a2);  /* 0x000d2180 */
int __fastcall sub_600D22F8(int a1);  /* 0x000d22f8 */
int __fastcall sub_600D2394(int a1);  /* 0x000d2394 */
int __fastcall sub_600D26EC(int a1);  /* 0x000d26ec */
int __fastcall sub_600D2768(int a1);  /* 0x000d2768 */
int __fastcall SE_AMB_ref(int a1);  /* 0x000d28d4 */
int __fastcall sub_600D2980(int a1);  /* 0x000d2980 */
int __fastcall sub_600D2AD8(int a1);  /* 0x000d2ad8 */
int __fastcall sub_600D2CB0(int a1);  /* 0x000d2cb0 */
int __fastcall sub_600D33F8(int a1);  /* 0x000d33f8 */
int __fastcall sub_600D37A4(int a1, int a2);  /* 0x000d37a4 */
int __fastcall sub_600D3F2C(int a1);  /* 0x000d3f2c */
int __fastcall sub_600D404C(int a1);  /* 0x000d404c */
int __fastcall sub_600D4410(int a1);  /* 0x000d4410 */
int __fastcall sub_600D44C0(int a1);  /* 0x000d44c0 */
bool __fastcall sub_600D4DA4(int a1, int a2);  /* 0x000d4da4 */
int __fastcall sub_600D4F1C(Actor *a1);  /* 0x000d4f1c */
int __fastcall sub_600D4F5C(int a1);  /* 0x000d4f5c */
int __fastcall sub_600D51B4(int a1);  /* 0x000d51b4 */
int __fastcall sub_600D52E8(int a1);  /* 0x000d52e8 */
int __fastcall sub_600D5330(_DWORD *a1);  /* 0x000d5330 */
int __fastcall sub_600D538C(int result);  /* 0x000d538c */
int __fastcall sub_600D53B0(int *a1);  /* 0x000d53b0 */
int __fastcall sub_600D552C(int *a1);  /* 0x000d552c */
int __fastcall sub_600D5664(_DWORD *a1);  /* 0x000d5664 */
int __fastcall sub_600D57F4(_DWORD *a1);  /* 0x000d57f4 */
int __fastcall sub_600D5818(int a1, int a2, int a3, int a4);  /* 0x000d5818 */
unsigned int __fastcall sub_600D584C(int a1, int a2);  /* 0x000d584c */
int __fastcall sub_600D5A94(int a1);  /* 0x000d5a94 */
int __fastcall sub_600D5B84(int a1, int a2, int a3);  /* 0x000d5b84 */
int __fastcall sub_600D5CB4(int a1);  /* 0x000d5cb4 */
int __fastcall sub_600D5D78(int a1);  /* 0x000d5d78 */
bool __fastcall sub_600D5EA0(int a1, int a2);  /* 0x000d5ea0 */
int __fastcall sub_600D5FA4(Actor *a1);  /* 0x000d5fa4 */
int __fastcall SE_AMB_BROOM_W8_ref(int a1);  /* 0x000d6260 */
int __fastcall SE_OBJ_KROOM_SHUTTER_CLOSE_ref(int a1);  /* 0x000d62f8 */
void __fastcall sub_600D63B0(int a1);  /* 0x000d63b0 */
int __fastcall sub_600D645C(int result);  /* 0x000d645c */
int __fastcall sub_600D64FC(int result);  /* 0x000d64fc */
int __fastcall sub_600D6760(int a1);  /* 0x000d6760 */
int __fastcall sub_600D68F0(int a1);  /* 0x000d68f0 */
int __fastcall sub_600D6920(int a1);  /* 0x000d6920 */
int __fastcall sub_600D694C(int a1, int a2, int a3, int a4);  /* 0x000d694c */
bool __fastcall sub_600D6978(int a1, int a2);  /* 0x000d6978 */
void __fastcall sub_600D6B60(Actor *a1);  /* 0x000d6b60 */
int __fastcall sub_600D6BA0(Actor *a1);  /* 0x000d6ba0 */
int __fastcall sub_600D6BFC(int a1, int a2);  /* 0x000d6bfc */
int __fastcall sub_600D6C34(int a1, _DWORD *a2);  /* 0x000d6c34 */
int __fastcall sub_600D6C78(int a1, int a2);  /* 0x000d6c78 */
int __fastcall sub_600D6C84(int result, _DWORD *a2);  /* 0x000d6c84 */
int __fastcall sub_600D6C94(int a1, int a2);  /* 0x000d6c94 */
int __fastcall sub_600D6CBC(int a1);  /* 0x000d6cbc */
int __fastcall sub_600D6CC4(int a1);  /* 0x000d6cc4 */
int __fastcall sub_600D6EC4(int a1);  /* 0x000d6ec4 */
int __fastcall sub_600D6F7C(int a1);  /* 0x000d6f7c */
int __fastcall SE_VOC_LAR_INTO_WATERPILLAR_ref(int a1);  /* 0x000d728c */
int __fastcall Object_invokeSlot37(int *a1);  /* 0x000d7390 */
int __fastcall sub_600D73E4(int a1);  /* 0x000d73e4 */
int __fastcall sub_600D74C8(int a1);  /* 0x000d74c8 */
int __fastcall sub_600D7530(int *a1);  /* 0x000d7530 */
int __fastcall sub_600D7614(int a1);  /* 0x000d7614 */
int __fastcall sub_600D77B8(int result);  /* 0x000d77b8 */
int __fastcall sub_600D78F8(int a1, _DWORD *a2);  /* 0x000d78f8 */
int __fastcall sub_600D79A8(int result);  /* 0x000d79a8 */
int __fastcall Object_invokeSlot37_b(int a1);  /* 0x000d79c4 */
int __fastcall sub_600D7B30(int *a1);  /* 0x000d7b30 */
int __fastcall sub_600D7D34(int *a1);  /* 0x000d7d34 */
int __fastcall larry_magic_wand_root_ref(int a1);  /* 0x000d8000 */
int __fastcall sub_600D83A4(int a1);  /* 0x000d83a4 */
int __fastcall sub_600D8610(int a1, int a2, int a3, int a4, int a5);  /* 0x000d8610 */
int __fastcall sub_600D862C(int a1, int a2, int a3, int a4, int a5);  /* 0x000d862c */
int __fastcall sub_600D8648(int a1);  /* 0x000d8648 */
int __fastcall sub_600D8684(int a1);  /* 0x000d8684 */
int __fastcall sub_600D8770(_DWORD *a1);  /* 0x000d8770 */
int __fastcall sub_600D87F8(int result);  /* 0x000d87f8 */
int __fastcall sub_600D88F8(_DWORD *a1, int a2, __int16 a3);  /* 0x000d88f8 */
int __fastcall sub_600D8A48(int result);  /* 0x000d8a48 */
int __fastcall sub_600D8B78(_DWORD *a1);  /* 0x000d8b78 */
int __fastcall sub_600D8C28(int a1);  /* 0x000d8c28 */
int __fastcall sub_600D8CE0(int result);  /* 0x000d8ce0 */
int __fastcall sub_600D8D24(int a1);  /* 0x000d8d24 */
int __fastcall sub_600D8D70(int a1);  /* 0x000d8d70 */
int __fastcall sub_600D8DB4(int result);  /* 0x000d8db4 */
int __fastcall sub_600D8DD0(int a1);  /* 0x000d8dd0 */
int __fastcall sub_600D8E0C(int a1, _DWORD *a2);  /* 0x000d8e0c */
int __fastcall sub_600D8F00(int a1);  /* 0x000d8f00 */
int __fastcall sub_600D8F9C(int a1);  /* 0x000d8f9c */
int __fastcall sub_600D90EC(_DWORD *a1);  /* 0x000d90ec */
int __fastcall sub_600D919C(int a1);  /* 0x000d919c */
int __fastcall sub_600D9320(int a1);  /* 0x000d9320 */
int __fastcall sub_600D94B4(int a1);  /* 0x000d94b4 */
int __fastcall sub_600D9790(int a1);  /* 0x000d9790 */
int __fastcall sub_600D9CB0(_DWORD *a1);  /* 0x000d9cb0 */
int __fastcall sub_600D9CD0(_DWORD *a1);  /* 0x000d9cd0 */
int __fastcall sub_600D9CE8(int *a1);  /* 0x000d9ce8 */
int __fastcall sub_600D9DBC(int a1);  /* 0x000d9dbc */
int __fastcall sub_600D9E20(int a1);  /* 0x000d9e20 */
int __fastcall sub_600D9EA4(int a1);  /* 0x000d9ea4 */
int __fastcall throw_st_wait_f_ref(int a1);  /* 0x000d9f38 */
int __fastcall sub_600DA19C(int *a1);  /* 0x000da19c */
int __fastcall sub_600DA258(int a1);  /* 0x000da258 */
int __fastcall sub_600DA278(_DWORD *a1);  /* 0x000da278 */
int __fastcall sub_600DA298(int a1);  /* 0x000da298 */
int __fastcall sub_600DA2F4(int a1);  /* 0x000da2f4 */
int __fastcall sub_600DA348(_BYTE *a1);  /* 0x000da348 */
int __fastcall sub_600DA384(_DWORD *a1);  /* 0x000da384 */
int __fastcall sub_600DA450(_DWORD *a1);  /* 0x000da450 */
int __fastcall sub_600DA45C(int a1);  /* 0x000da45c */
int __fastcall SE_BOSS_LARRY_DOWN_LAND1_ref(int a1);  /* 0x000da624 */
int __fastcall sub_600DA900(_BYTE *a1);  /* 0x000da900 */
int __fastcall sub_600DA948(int *a1);  /* 0x000da948 */
int __fastcall sub_600DAA9C(int *a1);  /* 0x000daa9c */
int __fastcall sub_600DAB24(int a1);  /* 0x000dab24 */
int __fastcall sub_600DAB78(int *a1);  /* 0x000dab78 */
int __fastcall sub_600DAB98(int a1);  /* 0x000dab98 */
int __fastcall sub_600DACD8(int result);  /* 0x000dacd8 */
int __fastcall sub_600DAD6C(_DWORD *a1);  /* 0x000dad6c */
int __fastcall sub_600DAE30(int a1, int *a2);  /* 0x000dae30 */
bool __fastcall sub_600DAE5C(int a1, int a2);  /* 0x000dae5c */
void __fastcall sub_600DAF60(_DWORD *a1);  /* 0x000daf60 */
int __fastcall sub_600DAFB4(_DWORD *a1);  /* 0x000dafb4 */
int __fastcall sub_600DB00C(int result);  /* 0x000db00c */
int __fastcall sub_600DB01C(int a1);  /* 0x000db01c */
int __fastcall sub_600DB0D0(int a1);  /* 0x000db0d0 */
int __fastcall sub_600DB168(int a1);  /* 0x000db168 */
int __fastcall sub_600DB21C(int a1);  /* 0x000db21c */
int __fastcall sub_600DBC58(_DWORD *a1);  /* 0x000dbc58 */
int __fastcall SE_BOSS_LEMMY_ref(float *a1);  /* 0x000dc040 */
__int64 __fastcall sub_600DC344(int a1);  /* 0x000dc344 */
int __fastcall SE_BOSS_LEMMY_ref_2(unsigned int *a1);  /* 0x000dc3dc */
int __fastcall sub_600DC6FC(int a1, int a2, __int16 a3);  /* 0x000dc6fc */
int __fastcall wait_ball_ref(int a1);  /* 0x000dcb2c */
int __fastcall sub_600DCCB4(int a1);  /* 0x000dccb4 */
int __fastcall sub_600DCE9C(int result);  /* 0x000dce9c */
int __fastcall sub_600DCFE0(int a1);  /* 0x000dcfe0 */
int __fastcall sub_600DD250(int a1);  /* 0x000dd250 */
int __fastcall sub_600DD710(unsigned int *a1);  /* 0x000dd710 */
int __fastcall sub_600DD80C(int *a1);  /* 0x000dd80c */
int __fastcall sub_600DD90C(int a1);  /* 0x000dd90c */
int __fastcall sub_600DD9A4(int *a1);  /* 0x000dd9a4 */
int __fastcall sub_600DDBD0(int a1);  /* 0x000ddbd0 */
int __fastcall MtxTranslateGetItFromHere(int a1);  /* 0x000ddef0 */
int __fastcall sub_600DE138(int a1, int a2, int a3, int a4, int a5);  /* 0x000de138 */
int __fastcall sub_600DE154(int a1, int a2, int a3, int a4, int a5);  /* 0x000de154 */
int __fastcall sub_600DE170(int a1);  /* 0x000de170 */
int __fastcall sub_600DE1EC(int a1, int a2, int a3);  /* 0x000de1ec */
int __fastcall sub_600DE2B8(int a1, int a2, int a3);  /* 0x000de2b8 */
int __fastcall sub_600DE384(int a1);  /* 0x000de384 */
int __fastcall sub_600DE62C(int a1);  /* 0x000de62c */
int __fastcall sub_600DE710(int a1);  /* 0x000de710 */
int __fastcall sub_600DE844(int a1);  /* 0x000de844 */
int __fastcall sub_600DEBC8(_DWORD *a1);  /* 0x000debc8 */
int __fastcall sub_600DEC28(_DWORD *a1);  /* 0x000dec28 */
int __fastcall sub_600DEDBC(int a1);  /* 0x000dedbc */
int __fastcall sub_600DEE08(int a1);  /* 0x000dee08 */
int __fastcall sub_600DEE2C(int a1, _DWORD *a2);  /* 0x000dee2c */
int __fastcall wait_ball_ref_2(int a1);  /* 0x000dee50 */
int __fastcall demo_battleA_ball_st_ref(int a1);  /* 0x000def74 */
int __fastcall sub_600DF080(_DWORD *a1);  /* 0x000df080 */
int __fastcall demo_battleA_ball_st_wait_ref(int a1);  /* 0x000df0fc */
int __fastcall demo_battleA_ball_ref(int a1);  /* 0x000df20c */
int __fastcall SE_BOSS_LEMMY_RAMP_LAND_ref(_DWORD *a1);  /* 0x000df314 */
int __fastcall demo_battleA_ball_wait_ref(int a1);  /* 0x000df3b8 */
int __fastcall throw_ball_st_wait_ref(int a1);  /* 0x000df72c */
int __fastcall SE_BOSS_LEMMY_MAGIC_MAKE_ref(int a1);  /* 0x000df834 */
int __fastcall throw_ball_ed_ref(_DWORD *a1);  /* 0x000df888 */
int __fastcall SE_BOSS_LEMMY_ref_4(int a1);  /* 0x000dfa48 */
int __fastcall throw_ball_ed_wait_ref(int a1);  /* 0x000dfc5c */
int __fastcall sub_600DFD64(int a1);  /* 0x000dfd64 */
int __fastcall sub_600DFE54(int a1);  /* 0x000dfe54 */
int __fastcall sub_600DFFC8(int a1);  /* 0x000dffc8 */
int __fastcall sub_600E026C(int a1);  /* 0x000e026c */
int __fastcall sub_600E0338(unsigned int *a1);  /* 0x000e0338 */
int __fastcall SE_BOSS_LEMMY_DOWN_LAND1_ref(int a1);  /* 0x000e0958 */
bool __fastcall sub_600E0A98(int a1, int a2);  /* 0x000e0a98 */
int __fastcall sub_600E0B9C(_DWORD *a1);  /* 0x000e0b9c */
int __fastcall sub_600E0BAC(int a1);  /* 0x000e0bac */
int __fastcall sub_600E0BC4(int a1);  /* 0x000e0bc4 */
int __fastcall sub_600E0BDC(int a1);  /* 0x000e0bdc */
int __fastcall sub_600E0BE8(int a1);  /* 0x000e0be8 */
int __fastcall sub_600E0C68(int a1);  /* 0x000e0c68 */
int __fastcall sub_600E0C94(int a1, int a2);  /* 0x000e0c94 */
int __fastcall sub_600E17FC(int result);  /* 0x000e17fc */
int __fastcall sub_600E180C(int a1);  /* 0x000e180c */
int __fastcall shell_ball_out_ref(int a1);  /* 0x000e1948 */
int __fastcall sub_600E1BD0(int a1);  /* 0x000e1bd0 */
int __fastcall sub_600E1D04(int a1);  /* 0x000e1d04 */
int __fastcall sub_600E1D58(int a1, int a2);  /* 0x000e1d58 */
int __fastcall sub_600E1E98(int a1);  /* 0x000e1e98 */
int __fastcall sub_600E200C(int32x4_t *a1);  /* 0x000e200c */
int __fastcall sub_600E2170(int a1);  /* 0x000e2170 */
int __fastcall sub_600E21F0(int a1, int a2);  /* 0x000e21f0 */
int __fastcall sub_600E228C(int a1);  /* 0x000e228c */
int __fastcall sub_600E237C(int a1);  /* 0x000e237c */
int __fastcall sub_600E2398(int32x4_t *a1);  /* 0x000e2398 */
bool __fastcall sub_600E240C(int a1, int a2);  /* 0x000e240c */
void __fastcall sub_600E2584(_DWORD *a1);  /* 0x000e2584 */
int __fastcall sub_600E2640(_DWORD *a1);  /* 0x000e2640 */
int __fastcall SE_BOSS_LEMMY_BALL_HIT_PLY_ref(int result);  /* 0x000e2708 */
int __fastcall sub_600E2950(int a1);  /* 0x000e2950 */
int __fastcall sub_600E29D0(int a1);  /* 0x000e29d0 */
int __fastcall sub_600E2D20(int a1, int a2);  /* 0x000e2d20 */
int __fastcall sub_600E2F44(int a1, int a2);  /* 0x000e2f44 */
int __fastcall sub_600E310C(int a1, int a2);  /* 0x000e310c */
int __fastcall sub_600E341C(int a1, int a2, int a3, int a4);  /* 0x000e341c */
int __fastcall sub_600E3458(_DWORD *a1);  /* 0x000e3458 */
int __fastcall sub_600E35E0(int a1);  /* 0x000e35e0 */
int __fastcall sub_600E36A4(int a1, int a2, int a3);  /* 0x000e36a4 */
int __fastcall sub_600E371C(int a1, char a2);  /* 0x000e371c */
int __fastcall sub_600E3840(float *a1);  /* 0x000e3840 */
int __fastcall sub_600E3888(int a1, int a2);  /* 0x000e3888 */
bool __fastcall sub_600E3938(int a1, int a2);  /* 0x000e3938 */
void __fastcall sub_600E3A3C(int a1);  /* 0x000e3a3c */
int __fastcall sub_600E3A8C(int a1);  /* 0x000e3a8c */
int __fastcall sub_600E3CC4(int a1);  /* 0x000e3cc4 */
int __fastcall sub_600E3D20(int a1);  /* 0x000e3d20 */
int __fastcall SE_BOSS_LEMMY_MAGIC_SHOT_ref(int a1);  /* 0x000e3ed4 */
int __fastcall sub_600E40DC(int a1);  /* 0x000e40dc */
int __fastcall SE_BOSS_JR_BOMB_BURST_ref(int a1);  /* 0x000e46e8 */
int __fastcall sub_600E49AC(float *a1);  /* 0x000e49ac */
int __fastcall sub_600E4A48(int a1);  /* 0x000e4a48 */
int __fastcall sub_600E4AD0(int a1, int a2);  /* 0x000e4ad0 */
int __fastcall sub_600E4BC8(int a1);  /* 0x000e4bc8 */
int __fastcall sub_600E4E3C(int a1);  /* 0x000e4e3c */
int __fastcall sub_600E4F14(int a1, int a2);  /* 0x000e4f14 */
int __fastcall sub_600E5168(int a1, int a2);  /* 0x000e5168 */
int __fastcall sub_600E53BC(int a1, int a2, int a3);  /* 0x000e53bc */
int __fastcall sub_600E5614(int a1);  /* 0x000e5614 */
int __fastcall sub_600E56C8(int a1);  /* 0x000e56c8 */
int __fastcall sub_600E5760(int a1);  /* 0x000e5760 */
unsigned int __fastcall sub_600E5824(int a1);  /* 0x000e5824 */
int __fastcall sub_600E5AFC(int a1);  /* 0x000e5afc */
int __fastcall SE_BOSS_LEMMY_ref_6(int result);  /* 0x000e5b1c */
bool __fastcall sub_600E5BE0(int a1, int a2);  /* 0x000e5be0 */
void __fastcall sub_600E5D58(int a1);  /* 0x000e5d58 */
int __fastcall sub_600E5E04(int a1);  /* 0x000e5e04 */
int __fastcall SE_BOSS_LUDWIG_MOVE_ref(int a1);  /* 0x000e60d4 */
int __fastcall sub_600E64C8(int a1);  /* 0x000e64c8 */
int __fastcall sub_600E6624(int a1);  /* 0x000e6624 */
int __fastcall sub_600E66F8(int *a1);  /* 0x000e66f8 */
int __fastcall sub_600E6790(int a1);  /* 0x000e6790 */
int __fastcall sub_600E6998(int a1);  /* 0x000e6998 */
int __fastcall sub_600E6AA4(int result);  /* 0x000e6aa4 */
int __fastcall sub_600E6ABC(_DWORD *a1);  /* 0x000e6abc */
int __fastcall sub_600E6B40(int *a1);  /* 0x000e6b40 */
int __fastcall sub_600E6C1C(int result);  /* 0x000e6c1c */
int __fastcall sub_600E6C34(int a1);  /* 0x000e6c34 */
int __fastcall sub_600E6ED8(int result);  /* 0x000e6ed8 */
int __fastcall sub_600E6EE8(_BYTE *a1);  /* 0x000e6ee8 */
int __fastcall sub_600E6FD4(int a1);  /* 0x000e6fd4 */
int __fastcall sub_600E710C(_DWORD *a1);  /* 0x000e710c */
int __fastcall sub_600E71B4(int *a1);  /* 0x000e71b4 */
int __fastcall sub_600E7484(int a1);  /* 0x000e7484 */
int __fastcall sub_600E74F8(int a1);  /* 0x000e74f8 */
int __fastcall sub_600E78A0(int a1);  /* 0x000e78a0 */
int __fastcall sub_600E7984(_BYTE *a1);  /* 0x000e7984 */
int __fastcall SE_AMB_BROOM_W7_ref(int a1);  /* 0x000e79b8 */
int __fastcall sub_600E7A0C(int *a1);  /* 0x000e7a0c */
int __fastcall sub_600E7A1C(_DWORD *a1);  /* 0x000e7a1c */
int __fastcall sub_600E7C10(int a1);  /* 0x000e7c10 */
int __fastcall sub_600E7EF4(int a1);  /* 0x000e7ef4 */
signed int __fastcall sub_600E822C(int a1);  /* 0x000e822c */
int __fastcall sub_600E82D0(int a1);  /* 0x000e82d0 */
int __fastcall sub_600E853C(int a1, int a2, int a3, int a4, int a5);  /* 0x000e853c */
int __fastcall sub_600E8558(int a1, int a2, int a3, int a4, int a5);  /* 0x000e8558 */
int __fastcall sub_600E8574(int a1);  /* 0x000e8574 */
int __fastcall sub_600E85F0(int a1);  /* 0x000e85f0 */
int __fastcall sub_600E8678(int a1);  /* 0x000e8678 */
int __fastcall sub_600E8820(int result);  /* 0x000e8820 */
int __fastcall sub_600E8920(int a1);  /* 0x000e8920 */
int __fastcall sub_600E8C14(_DWORD *a1);  /* 0x000e8c14 */
int __fastcall sub_600E8CC8(_DWORD *a1);  /* 0x000e8cc8 */
int __fastcall sub_600E8D80(int result);  /* 0x000e8d80 */
int __fastcall sub_600E8DC4(int a1);  /* 0x000e8dc4 */
int __fastcall sub_600E8E40(int a1);  /* 0x000e8e40 */
int __fastcall sub_600E8EA8(int result);  /* 0x000e8ea8 */
int __fastcall sub_600E8EBC(int a1);  /* 0x000e8ebc */
int __fastcall sub_600E8F10(int a1, _DWORD *a2);  /* 0x000e8f10 */
int __fastcall sub_600E8FA4(int a1);  /* 0x000e8fa4 */
int __fastcall sub_600E903C(int a1);  /* 0x000e903c */
int __fastcall sub_600E9114(int a1);  /* 0x000e9114 */
int __fastcall sub_600E91EC(int a1);  /* 0x000e91ec */
int __fastcall sub_600E978C(int a1);  /* 0x000e978c */
int __fastcall sub_600EA13C(_DWORD *a1);  /* 0x000ea13c */
int __fastcall sub_600EA370(_BYTE *a1, unsigned int a2);  /* 0x000ea370 */
int __fastcall sub_600EA4EC(_BYTE *a1);  /* 0x000ea4ec */
int __fastcall fly_throw_st2_ref(int a1);  /* 0x000ea6a8 */
int __fastcall sub_600EA7E8(int a1);  /* 0x000ea7e8 */
bool __fastcall sub_600EA9B8(int a1);  /* 0x000ea9b8 */
int __fastcall sub_600EAED4(_DWORD *a1);  /* 0x000eaed4 */
int __fastcall sub_600EAF3C(int **a1);  /* 0x000eaf3c */
int __fastcall sub_600EB144(int a1);  /* 0x000eb144 */
int __fastcall sub_600EB204(int a1);  /* 0x000eb204 */
int __fastcall sub_600EB248(int a1);  /* 0x000eb248 */
int __fastcall sub_600EB30C(int a1);  /* 0x000eb30c */
int __fastcall sub_600EB770(int a1);  /* 0x000eb770 */
int __fastcall sub_600EBB30(int a1);  /* 0x000ebb30 */
int __fastcall sub_600EBBFC(int a1);  /* 0x000ebbfc */
int __fastcall sub_600EBE88(int a1);  /* 0x000ebe88 */
int __fastcall sub_600EC0B0(int result);  /* 0x000ec0b0 */
int __fastcall sub_600EC0D4(int result);  /* 0x000ec0d4 */
unsigned int __fastcall sub_600EC210(float *a1, int a2, int a3);  /* 0x000ec210 */
int __fastcall sub_600EC430(int a1);  /* 0x000ec430 */
int __fastcall sub_600EC784(_BYTE *a1);  /* 0x000ec784 */
int __fastcall sub_600EC8D8(int a1);  /* 0x000ec8d8 */
int __fastcall SE_BOSS_LARRY_DOWN_LAND1_ref_2(int a1);  /* 0x000ecac0 */
int __fastcall sub_600ECCE0(int a1);  /* 0x000ecce0 */
int __fastcall sub_600ED03C(int a1, int a2, int a3, int a4);  /* 0x000ed03c */
int __fastcall SE_BOSS_LUDWIG_DISAPPEAR_ref(int a1);  /* 0x000ed078 */
int __fastcall sub_600ED0BC(unsigned __int8 *a1);  /* 0x000ed0bc */
int __fastcall sub_600ED2A0(int a1);  /* 0x000ed2a0 */
unsigned int __fastcall sub_600ED464(float *a1, int a2, int a3);  /* 0x000ed464 */
int __fastcall sub_600ED650(_DWORD *a1, int a2, int a3);  /* 0x000ed650 */
int __fastcall sub_600ED7AC(int *a1);  /* 0x000ed7ac */
int __fastcall sub_600ED8C0(int *a1);  /* 0x000ed8c0 */
int __fastcall sub_600ED938(_DWORD *a1);  /* 0x000ed938 */
int __fastcall sub_600ED97C(int a1);  /* 0x000ed97c */
int __fastcall sub_600ED9EC(int *a1);  /* 0x000ed9ec */
int __fastcall sub_600EDA5C(int a1);  /* 0x000eda5c */
int __fastcall sub_600EDAC4(int a1);  /* 0x000edac4 */
bool __fastcall sub_600EDAF0(int a1, int a2);  /* 0x000edaf0 */
void __fastcall sub_600EDBF4(_DWORD *a1);  /* 0x000edbf4 */
int __fastcall sub_600EDC28(_DWORD *a1);  /* 0x000edc28 */
int __fastcall sub_600EDC68(int a1);  /* 0x000edc68 */
int __fastcall sub_600EDC80(int a1);  /* 0x000edc80 */
int __fastcall sub_600EDD0C(int a1);  /* 0x000edd0c */
bool __fastcall sub_600EDD70(int a1, int a2);  /* 0x000edd70 */
int __fastcall sub_600EDEE8(_DWORD *a1);  /* 0x000edee8 */
int __fastcall sub_600EDF20(unsigned __int8 *a1);  /* 0x000edf20 */
int __fastcall sub_600EDFA8(int a1);  /* 0x000edfa8 */
int __fastcall sub_600EDFC0(int a1);  /* 0x000edfc0 */
int __fastcall sub_600EDFD8(int a1);  /* 0x000edfd8 */
int __fastcall sub_600EDFF0(int a1);  /* 0x000edff0 */
int __fastcall sub_600EE008(int a1);  /* 0x000ee008 */
int __fastcall sub_600EE028(int a1);  /* 0x000ee028 */
int __fastcall sub_600EE034(int a1);  /* 0x000ee034 */
int __fastcall sub_600EE04C(int a1);  /* 0x000ee04c */
bool __fastcall sub_600EE058(int a1, int a2);  /* 0x000ee058 */
int __fastcall sub_600EE1D0(_DWORD *a1);  /* 0x000ee1d0 */
int __fastcall sub_600EE208(int a1);  /* 0x000ee208 */
int __fastcall sub_600EE2B8(int a1);  /* 0x000ee2b8 */
int __fastcall sub_600EE2D8(int a1);  /* 0x000ee2d8 */
int __fastcall sub_600EE304(int a1);  /* 0x000ee304 */
int __fastcall sub_600EEF94(int result);  /* 0x000eef94 */
int __fastcall sub_600EEFA4(int result);  /* 0x000eefa4 */
int __fastcall sub_600EEFEC(int result);  /* 0x000eefec */
int __fastcall jump_quake2_ref(_DWORD *a1);  /* 0x000ef028 */
int __fastcall sub_600EF0B4(int a1);  /* 0x000ef0b4 */
int __fastcall sub_600EF114(_DWORD *a1);  /* 0x000ef114 */
int __fastcall sub_600EF148(int a1);  /* 0x000ef148 */
int __fastcall sub_600EF34C(int a1);  /* 0x000ef34c */
int __fastcall sub_600EF3F0(int result);  /* 0x000ef3f0 */
int __fastcall sub_600EF570(int a1);  /* 0x000ef570 */
void __fastcall sub_600EFCA8(int a1, int a2);  /* 0x000efca8 */
int __fastcall sub_600EFDB0(int a1);  /* 0x000efdb0 */

