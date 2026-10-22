/* NSMBU Deluxe (Switch) v1.0.0 -- actors subsystem prototypes
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

/* ---- actor_construction.c ---- */
int __fastcall sub_600F00AC(int a1);  /* 0x000f00ac */
int __fastcall sub_600F00CC(_BYTE *a1);  /* 0x000f00cc */
int __fastcall sub_600F03EC(int a1);  /* 0x000f03ec */
int __fastcall sub_600F074C(int a1);  /* 0x000f074c */
int __fastcall sub_600F07E4(int a1);  /* 0x000f07e4 */
int __fastcall sub_600F0AC0(int a1);  /* 0x000f0ac0 */
int __fastcall sub_600F0D34(int a1);  /* 0x000f0d34 */
int __fastcall sub_600F0F84(int a1, int a2, int a3, int a4, int a5);  /* 0x000f0f84 */
int __fastcall sub_600F0FD8(int a1, int a2, int a3, int a4, int a5);  /* 0x000f0fd8 */
int __fastcall sub_600F0FF4(int a1);  /* 0x000f0ff4 */
int __fastcall sub_600F127C(int result);  /* 0x000f127c */
int __fastcall sub_600F128C(int a1);  /* 0x000f128c */
int __fastcall sub_600F1304(_DWORD *a1);  /* 0x000f1304 */
int __fastcall sub_600F1408(int a1);  /* 0x000f1408 */
int __fastcall sub_600F14C8(int a1, _DWORD *a2);  /* 0x000f14c8 */
int __fastcall sub_600F14EC(unsigned __int8 *a1);  /* 0x000f14ec */
int __fastcall sub_600F17C0(float *a1);  /* 0x000f17c0 */
int __fastcall sub_600F19B4(_DWORD *a1);  /* 0x000f19b4 */
int __fastcall sub_600F1A84(int a1);  /* 0x000f1a84 */
int __fastcall sub_600F1AF4(int a1, int a2);  /* 0x000f1af4 */
int __fastcall sub_600F2848(_DWORD *a1);  /* 0x000f2848 */
int __fastcall SE_BOSS_MORTON_STAMP_ref(int a1);  /* 0x000f28cc */
int __fastcall sub_600F2ABC(_DWORD *a1);  /* 0x000f2abc */
int __fastcall sub_600F2B30(int *a1);  /* 0x000f2b30 */
int __fastcall sub_600F2BB0(int a1);  /* 0x000f2bb0 */
int __fastcall sub_600F2C40(_DWORD *a1);  /* 0x000f2c40 */
int __fastcall jump_quake1_ref(int *a1);  /* 0x000f2cb4 */
int __fastcall sub_600F2E20(int a1);  /* 0x000f2e20 */
int __fastcall sub_600F2F60(int *a1);  /* 0x000f2f60 */
int __fastcall sub_600F3080(_DWORD *a1);  /* 0x000f3080 */
int __fastcall sub_600F31B0(int a1);  /* 0x000f31b0 */
int __fastcall sub_600F3210(int *a1);  /* 0x000f3210 */
int __fastcall sub_600F3354(int *a1);  /* 0x000f3354 */
int __fastcall sub_600F3490(int *a1);  /* 0x000f3490 */
int __fastcall sub_600F3640(int *a1);  /* 0x000f3640 */
int __fastcall sub_600F3944(_DWORD *a1);  /* 0x000f3944 */
int __fastcall sub_600F3D58(int a1);  /* 0x000f3d58 */
int __fastcall sub_600F3E94(int a1);  /* 0x000f3e94 */
int __fastcall SE_BOSS_MORTON_DOWN_LAND1_ref(int a1);  /* 0x000f42c8 */
bool __fastcall sub_600F4440(int a1, int a2);  /* 0x000f4440 */
void __fastcall sub_600F4544(_DWORD *a1);  /* 0x000f4544 */
int __fastcall sub_600F45C4(_DWORD *a1);  /* 0x000f45c4 */
int __fastcall sub_600F4648(int a1);  /* 0x000f4648 */
int __fastcall sub_600F4660(int a1);  /* 0x000f4660 */
int __fastcall sub_600F4760(int a1);  /* 0x000f4760 */
int __fastcall sub_600F48D0(int a1);  /* 0x000f48d0 */
int __fastcall sub_600F4BBC(_DWORD **a1);  /* 0x000f4bbc */
int __fastcall sub_600F4C4C(int result);  /* 0x000f4c4c */
int __fastcall sub_600F4C68(int a1);  /* 0x000f4c68 */
int __fastcall sub_600F4D28(int a1);  /* 0x000f4d28 */
int __fastcall sub_600F4E08(int a1);  /* 0x000f4e08 */
int __fastcall sub_600F4F14(int a1);  /* 0x000f4f14 */
int __fastcall sub_600F4FB8(int a1, int a2);  /* 0x000f4fb8 */
int __fastcall sub_600F50A4(int a1);  /* 0x000f50a4 */
int __fastcall sub_600F5200(_DWORD *a1);  /* 0x000f5200 */
int __fastcall sub_600F53E8(int a1);  /* 0x000f53e8 */
int __fastcall sub_600F55AC(int a1, int a2, int a3, int a4);  /* 0x000f55ac */
int __fastcall sub_600F55E8(int a1);  /* 0x000f55e8 */
int __fastcall sub_600F589C(int a1, int a2, int a3);  /* 0x000f589c */
int __fastcall sub_600F5B30(int result);  /* 0x000f5b30 */
int __fastcall sub_600F5B48(int result);  /* 0x000f5b48 */
int __fastcall sub_600F5B54(int a1);  /* 0x000f5b54 */
void __fastcall sub_600F5D84(int a1);  /* 0x000f5d84 */
int __fastcall sub_600F5E44(int a1);  /* 0x000f5e44 */
int __fastcall sub_600F5E6C(int a1);  /* 0x000f5e6c */
int __fastcall sub_600F6120(int a1);  /* 0x000f6120 */
int __fastcall SE_BOSS_SANBO_CRASH_ref(int a1);  /* 0x000f6214 */
int __fastcall sub_600F6398(int a1);  /* 0x000f6398 */
int __fastcall SE_BOSS_SANBO_CRASH_ref_2(int a1);  /* 0x000f64a4 */
int __fastcall sub_600F67B8(int a1);  /* 0x000f67b8 */
int __fastcall sub_600F698C(int a1);  /* 0x000f698c */
int __fastcall sub_600F6C80(int a1);  /* 0x000f6c80 */
int __fastcall sub_600F6DD0(int a1);  /* 0x000f6dd0 */
int __fastcall sub_600F6F80(int a1);  /* 0x000f6f80 */
int __fastcall sub_600F6FA4(int a1, int a2, int a3, int a4);  /* 0x000f6fa4 */
int __fastcall sub_600F6FCC(_DWORD *a1);  /* 0x000f6fcc */
int __fastcall sub_600F7000(int a1, int a2, int a3);  /* 0x000f7000 */
bool __fastcall sub_600F72DC(int a1, int a2);  /* 0x000f72dc */
void __fastcall sub_600F7454(_BYTE *a1);  /* 0x000f7454 */
int __fastcall sub_600F74C4(_BYTE *a1);  /* 0x000f74c4 */
int __fastcall sub_600F7550(int a1, int a2, int a3);  /* 0x000f7550 */
int __fastcall sub_600F75B4(int a1, int a2, int a3);  /* 0x000f75b4 */
bool __fastcall sub_600F75C8(int a1, int a2);  /* 0x000f75c8 */
int __fastcall sub_600F7740(Actor *a1);  /* 0x000f7740 */
int __fastcall sub_600F7E34(int a1);  /* 0x000f7e34 */
int __fastcall happy_end1_ref(int a1);  /* 0x000f8034 */
int __fastcall happy_end_wait_ref(int a1);  /* 0x000f87c4 */
int __fastcall sub_600F891C(_DWORD *a1);  /* 0x000f891c */
int __fastcall sub_600F8998(int a1);  /* 0x000f8998 */
int __fastcall sub_600F8D24(int a1);  /* 0x000f8d24 */
int __fastcall sub_600F8D48(int a1, int a2, int a3, int a4);  /* 0x000f8d48 */
bool __fastcall sub_600F8D70(int a1, int a2);  /* 0x000f8d70 */
int __fastcall sub_600F8E74(Actor *a1);  /* 0x000f8e74 */
int __fastcall sub_600F91D8(int a1);  /* 0x000f91d8 */
int __fastcall sub_600F9FB0(int a1);  /* 0x000f9fb0 */
int __fastcall sub_600FA540(int a1);  /* 0x000fa540 */
int __fastcall sub_600FA6D8(int a1);  /* 0x000fa6d8 */
int __fastcall sub_600FA870(int a1);  /* 0x000fa870 */
int __fastcall sub_600FA988(int a1);  /* 0x000fa988 */
int __fastcall sub_600FA9C4(int result);  /* 0x000fa9c4 */
bool __fastcall sub_600FAAE0(int a1);  /* 0x000faae0 */
int __fastcall sub_600FABEC(int a1);  /* 0x000fabec */
int __fastcall sub_600FAD44(int result, unsigned int a2);  /* 0x000fad44 */
int __fastcall sub_600FAE18(int a1);  /* 0x000fae18 */
int __fastcall sub_600FAFA4(int a1, int a2, int a3, int a4);  /* 0x000fafa4 */
bool __fastcall sub_600FB214(int a1, int a2);  /* 0x000fb214 */
int __fastcall sub_600FB318(Actor *a1);  /* 0x000fb318 */
int __fastcall sub_600FB6C8(int a1);  /* 0x000fb6c8 */
int __fastcall sub_600FB704(int a1);  /* 0x000fb704 */
int __fastcall sub_600FB714(int a1, int a2, int a3, int a4);  /* 0x000fb714 */
int __fastcall sub_600FB724(int a1);  /* 0x000fb724 */
int __fastcall sub_600FB7DC(_DWORD *a1);  /* 0x000fb7dc */
int __fastcall sub_600FB974(float32x2_t *a1);  /* 0x000fb974 */
int __fastcall sub_600FBDC4(int a1, _DWORD *a2);  /* 0x000fbdc4 */
int __fastcall sub_600FBDE0(int result);  /* 0x000fbde0 */
int __fastcall sub_600FBEB8(_DWORD *a1);  /* 0x000fbeb8 */
int __fastcall sub_600FC0A8(int a1);  /* 0x000fc0a8 */
int __fastcall sub_600FC164(int a1);  /* 0x000fc164 */
bool __fastcall sub_600FC208(int a1);  /* 0x000fc208 */
int __fastcall sub_600FC334(int a1);  /* 0x000fc334 */
int __fastcall sub_600FC3AC(int a1);  /* 0x000fc3ac */
int __fastcall jc_squat_ref(int a1);  /* 0x000fc458 */
int __fastcall jc_damage_up_ref(int a1);  /* 0x000fc4b4 */
int __fastcall sub_600FC508(int result);  /* 0x000fc508 */
bool __fastcall sub_600FC51C(int a1, int a2);  /* 0x000fc51c */
int __fastcall sub_600FC598(int a1);  /* 0x000fc598 */
int __fastcall sub_600FC6E0(int a1);  /* 0x000fc6e0 */
int __fastcall sub_600FC8AC(_DWORD *a1);  /* 0x000fc8ac */
int __fastcall sub_600FC8F4(float *a1);  /* 0x000fc8f4 */
int __fastcall sub_600FCC1C(int a1);  /* 0x000fcc1c */
int __fastcall sub_600FCD74(int a1, int a2, int a3, int a4);  /* 0x000fcd74 */
int __fastcall jc_quake_st_ref_2(int a1);  /* 0x000fce24 */
int __fastcall sub_600FCF50(int a1);  /* 0x000fcf50 */
int __fastcall sub_600FCFFC(int result);  /* 0x000fcffc */
int __fastcall sub_600FD014(int a1);  /* 0x000fd014 */
void __fastcall sub_600FD0A0(_DWORD *a1);  /* 0x000fd0a0 */
int __fastcall sub_600FD240(int a1);  /* 0x000fd240 */
int __fastcall sub_600FD328(_DWORD *a1);  /* 0x000fd328 */
int __fastcall SE_BOSS_JR_CROWN_LAND_ref(int a1);  /* 0x000fd440 */
int __fastcall sub_600FD6CC(int a1);  /* 0x000fd6cc */
int __fastcall sub_600FD71C(int a1);  /* 0x000fd71c */
int __fastcall sub_600FD910(int a1);  /* 0x000fd910 */
int __fastcall sub_600FD9E4(int result);  /* 0x000fd9e4 */
int __fastcall sub_600FD9F4(int a1);  /* 0x000fd9f4 */
int __fastcall sub_600FDB54(int result);  /* 0x000fdb54 */
int __fastcall sub_600FDB80(_DWORD *a1);  /* 0x000fdb80 */
int __fastcall sub_600FDF78(int a1);  /* 0x000fdf78 */
int __fastcall sub_600FE024(int result);  /* 0x000fe024 */
int __fastcall sub_600FE03C(int a1);  /* 0x000fe03c */
void __fastcall sub_600FE0C8(_DWORD *a1);  /* 0x000fe0c8 */
int __fastcall sub_600FE268(int a1);  /* 0x000fe268 */
int __fastcall sub_600FE4D4(_DWORD *a1);  /* 0x000fe4d4 */
int __fastcall sub_600FE96C(int a1);  /* 0x000fe96c */
int __fastcall sub_600FEA54(int a1);  /* 0x000fea54 */
int __fastcall sub_600FED2C(float *a1);  /* 0x000fed2c */
int __fastcall sub_600FEEF4(_DWORD *a1);  /* 0x000feef4 */
int __fastcall sub_600FF1FC(int a1);  /* 0x000ff1fc */
int __fastcall sub_600FF6F8(_DWORD *a1);  /* 0x000ff6f8 */
int __fastcall sub_600FF7F0(int a1);  /* 0x000ff7f0 */
int __fastcall sub_600FF984(int a1, int a2, int a3, int a4);  /* 0x000ff984 */
int __fastcall sub_600FF9B4(int a1, int a2);  /* 0x000ff9b4 */
int __fastcall sub_600FFBD0(int a1, int a2);  /* 0x000ffbd0 */
int __fastcall sub_600FFD78(int a1, int a2);  /* 0x000ffd78 */
int __fastcall sub_600FFFEC(int a1);  /* 0x000fffec */
int __fastcall sub_6010005C(int result, unsigned int a2);  /* 0x0010005c */
int __fastcall sub_60100090(int a1);  /* 0x00100090 */
unsigned int __fastcall sub_601005C0(int a1);  /* 0x001005c0 */
int __fastcall sub_60100828(_DWORD *a1);  /* 0x00100828 */
int __fastcall sub_601008C8(int a1);  /* 0x001008c8 */
int __fastcall koopaJr_clown_shadow_ref_2(int a1);  /* 0x001009dc */
int __fastcall sub_60100D08(int a1);  /* 0x00100d08 */
int __fastcall sub_601014CC(int a1);  /* 0x001014cc */
int __fastcall sub_60101528(int a1);  /* 0x00101528 */
int __fastcall sub_601015AC(int result);  /* 0x001015ac */
int __fastcall sub_60101654(int a1);  /* 0x00101654 */
int __fastcall sub_60101694(int a1);  /* 0x00101694 */
unsigned int __fastcall sub_60101718(int a1);  /* 0x00101718 */
bool __fastcall sub_601017CC(float *a1);  /* 0x001017cc */
int __fastcall sub_60101A6C(_DWORD *a1);  /* 0x00101a6c */
int __fastcall sub_60101ABC(int a1);  /* 0x00101abc */
int __fastcall sub_60101B14(int a1);  /* 0x00101b14 */
int __fastcall sub_60101B68(int a1);  /* 0x00101b68 */
int __fastcall sub_60101E4C(int a1);  /* 0x00101e4c */
int __fastcall sub_6010205C(int a1);  /* 0x0010205c */
int __fastcall SE_BOSS_JR_CLOWN_DAMAGE_ref_2(int *a1);  /* 0x00102060 */
void __fastcall sub_60102888(int a1);  /* 0x00102888 */
int __fastcall sub_60102978(int *a1);  /* 0x00102978 */
bool __fastcall sub_60102AB4(int a1, int a2);  /* 0x00102ab4 */
void __fastcall sub_60102CA0(int a1);  /* 0x00102ca0 */
int __fastcall sub_60102DAC(int a1);  /* 0x00102dac */
bool __fastcall sub_60102EBC(int a1);  /* 0x00102ebc */
int __fastcall sub_60102F88(int a1);  /* 0x00102f88 */
int __fastcall sub_601038B8(_DWORD *a1);  /* 0x001038b8 */
bool __fastcall sub_60103A20(int a1, int a2);  /* 0x00103a20 */
int __fastcall sub_60103B98(Actor *a1);  /* 0x00103b98 */
int __fastcall Actor_W8course_BowserJr_for_tarihorizontal_move_Lift_build(int a1);  /* 0x00103ce8 */
int __fastcall sub_60103F18(_DWORD *a1);  /* 0x00103f18 */
int __fastcall sub_60103FA4(int result);  /* 0x00103fa4 */
int __fastcall sub_60103FE0(_DWORD *a1);  /* 0x00103fe0 */
int __fastcall sub_6010401C(_DWORD *a1);  /* 0x0010401c */
bool __fastcall sub_60104054(int a1);  /* 0x00104054 */
int __fastcall sub_601040E0(float *a1);  /* 0x001040e0 */
int __fastcall sub_60104150(int a1);  /* 0x00104150 */
int __fastcall sub_60104208(int result);  /* 0x00104208 */
unsigned int __fastcall sub_60104314(int a1);  /* 0x00104314 */
int __fastcall sub_60104354(int result);  /* 0x00104354 */
int __fastcall sub_6010438C(int a1);  /* 0x0010438c */
int __fastcall sub_601049A0(int a1);  /* 0x001049a0 */
int __fastcall sub_60104BF4(int a1);  /* 0x00104bf4 */
int __fastcall sub_60105168(_DWORD *a1);  /* 0x00105168 */
int __fastcall sub_601051C4(int a1, int a2, int a3, int a4);  /* 0x001051c4 */
bool __fastcall sub_60105268(int a1, int a2);  /* 0x00105268 */
void __fastcall sub_6010536C(int a1);  /* 0x0010536c */
int __fastcall sub_601053BC(int a1);  /* 0x001053bc */
int __fastcall sub_60105410(int a1, int a2);  /* 0x00105410 */
int __fastcall sub_6010577C(_DWORD *a1);  /* 0x0010577c */
int __fastcall sub_60105850(_DWORD *a1);  /* 0x00105850 */
int __fastcall sub_601058A0(int a1);  /* 0x001058a0 */
int __fastcall sub_601058A8(int a1);  /* 0x001058a8 */
int __fastcall sub_60105960(int result);  /* 0x00105960 */
unsigned int __fastcall sub_60105A68(int a1);  /* 0x00105a68 */
int __fastcall sub_60105AA8(int result);  /* 0x00105aa8 */
int __fastcall sub_60105AE0(int a1);  /* 0x00105ae0 */
int __fastcall Actor_W8course_BowserJr_for_atarimove_Lift_parentchild_obuje_build(int a1);  /* 0x00105e60 */
int __fastcall sub_601060A4(int a1);  /* 0x001060a4 */
int __fastcall sub_601062B4(int result, int a2);  /* 0x001062b4 */
int __fastcall sub_601064B8(_DWORD *a1);  /* 0x001064b8 */
int __fastcall sub_6010672C(int a1);  /* 0x0010672c */
int __fastcall sub_60106A4C(int a1);  /* 0x00106a4c */
int __fastcall sub_60106BA8(_DWORD *a1);  /* 0x00106ba8 */
int __fastcall sub_60106C04(int a1, int a2, int a3, int a4);  /* 0x00106c04 */
int __fastcall sub_60106C90(int a1, int a2, float *a3, int a4);  /* 0x00106c90 */
bool __fastcall sub_60106E68(int a1, int a2);  /* 0x00106e68 */
void __fastcall sub_60106F6C(int a1);  /* 0x00106f6c */
int __fastcall sub_60106FBC(int a1);  /* 0x00106fbc */
int __fastcall Actor_W8course_BowserJr_for_tarivertical_move_Lift_build(int a1);  /* 0x0010728c */
int __fastcall sub_601074BC(_DWORD *a1);  /* 0x001074bc */
int __fastcall sub_60107548(int result);  /* 0x00107548 */
int __fastcall sub_60107584(int a1);  /* 0x00107584 */
int __fastcall sub_601075C4(_DWORD *a1);  /* 0x001075c4 */
bool __fastcall sub_601075FC(int a1);  /* 0x001075fc */
int __fastcall sub_60107684(float *a1);  /* 0x00107684 */
int __fastcall sub_601076EC(int a1);  /* 0x001076ec */
int __fastcall sub_601077A4(int result);  /* 0x001077a4 */
unsigned int __fastcall sub_601078B0(int a1);  /* 0x001078b0 */
int __fastcall sub_601078F0(int result);  /* 0x001078f0 */
int __fastcall sub_60107928(int a1);  /* 0x00107928 */
int __fastcall sub_60107F40(int a1);  /* 0x00107f40 */
int __fastcall sub_60108194(int a1);  /* 0x00108194 */
int __fastcall sub_60108708(_DWORD *a1);  /* 0x00108708 */
int __fastcall sub_60108764(int a1, int a2, int a3, int a4);  /* 0x00108764 */
bool __fastcall sub_60108808(int a1, int a2);  /* 0x00108808 */
void __fastcall sub_6010890C(int a1);  /* 0x0010890c */
int __fastcall sub_6010895C(int a1);  /* 0x0010895c */
int __fastcall jump_quake1_ref_2(int a1);  /* 0x00108dfc */
int __fastcall sub_60108E70(int a1);  /* 0x00108e70 */
int __fastcall sub_60108F00(int result);  /* 0x00108f00 */
int __fastcall jump_quake2_ref_2(_DWORD *a1);  /* 0x00108f3c */
int __fastcall sub_60108FD8(int a1);  /* 0x00108fd8 */
int __fastcall sub_60109030(_DWORD *a1);  /* 0x00109030 */
int __fastcall sub_60109064(int a1);  /* 0x00109064 */
int __fastcall sub_60109748(int result);  /* 0x00109748 */
int __fastcall sub_60109760(int a1);  /* 0x00109760 */
int __fastcall sub_6010976C(float *a1);  /* 0x0010976c */
int __fastcall sub_60109990(int a1);  /* 0x00109990 */
int __fastcall sub_60109A24(int result);  /* 0x00109a24 */
int __fastcall sub_60109A60(int a1);  /* 0x00109a60 */
int __fastcall sub_60109D68(int a1);  /* 0x00109d68 */
int __fastcall jump_shot_ed_ref(_DWORD *a1);  /* 0x00109f78 */
int __fastcall sub_6010A008(int *a1);  /* 0x0010a008 */
int __fastcall sub_6010A060(int result);  /* 0x0010a060 */
int __fastcall sub_6010A1A4(int a1);  /* 0x0010a1a4 */
int __fastcall sub_6010A3C4(int a1);  /* 0x0010a3c4 */
int __fastcall sub_6010A77C(int a1);  /* 0x0010a77c */
int __fastcall sub_6010AD44(int a1);  /* 0x0010ad44 */
int __fastcall sub_6010ADBC(int a1);  /* 0x0010adbc */
int __fastcall sub_6010AE54(int a1);  /* 0x0010ae54 */
int __fastcall sub_6010AEDC(int a1);  /* 0x0010aedc */
int __fastcall roy_shell_ref(int *a1);  /* 0x0010b170 */
int __fastcall sub_6010B39C(int a1);  /* 0x0010b39c */
int __fastcall sub_6010B610(int a1);  /* 0x0010b610 */
int __fastcall sub_6010B860(int a1, int a2, int a3, int a4, int a5);  /* 0x0010b860 */
int __fastcall sub_6010B87C(int a1, int a2, int a3, int a4, int a5);  /* 0x0010b87c */
int __fastcall sub_6010B898(int a1);  /* 0x0010b898 */
int __fastcall sub_6010BB28(int result);  /* 0x0010bb28 */
int __fastcall sub_6010BB54(int a1, _DWORD *a2);  /* 0x0010bb54 */
int __fastcall sub_6010BB78(float *a1, unsigned int a2, unsigned int a3);  /* 0x0010bb78 */
int __fastcall sub_6010BDF4(int a1, unsigned int a2);  /* 0x0010bdf4 */
int __fastcall sub_6010C040(int a1, unsigned int a2);  /* 0x0010c040 */
int __fastcall sub_6010C1FC(int result, unsigned int a2);  /* 0x0010c1fc */
int __fastcall sub_6010C31C(int a1);  /* 0x0010c31c */
int __fastcall sub_6010C95C(int a1);  /* 0x0010c95c */
int __fastcall sub_6010C9F8(int a1);  /* 0x0010c9f8 */
int __fastcall sub_6010CA28(int a1);  /* 0x0010ca28 */
int __fastcall sub_6010CA70(_DWORD *a1);  /* 0x0010ca70 */
int __fastcall sub_6010CAF8(int a1);  /* 0x0010caf8 */
int __fastcall sub_6010CB84(int a1);  /* 0x0010cb84 */
int __fastcall sub_6010CC88(_DWORD *a1);  /* 0x0010cc88 */
int __fastcall sub_6010CCFC(_DWORD *a1);  /* 0x0010ccfc */
int __fastcall sub_6010CEA8(_DWORD *a1);  /* 0x0010cea8 */
int __fastcall sub_6010CEC8(int a1);  /* 0x0010cec8 */
int __fastcall sub_6010CF4C(float *a1);  /* 0x0010cf4c */
int __fastcall SE_BOSS_ROY_STEP_ref(int a1);  /* 0x0010d204 */
int __fastcall sub_6010D304(int a1);  /* 0x0010d304 */
int __fastcall sub_6010D3F8(int *a1);  /* 0x0010d3f8 */
int __fastcall sub_6010D5C0(int result);  /* 0x0010d5c0 */
int __fastcall sub_6010D5CC(int a1);  /* 0x0010d5cc */
int __fastcall sub_6010DBC4(_DWORD *a1);  /* 0x0010dbc4 */
int __fastcall sub_6010DC38(float *a1);  /* 0x0010dc38 */
int __fastcall sub_6010DE04(int a1);  /* 0x0010de04 */
int __fastcall sub_6010DEA4(float *a1);  /* 0x0010dea4 */
int __fastcall sub_6010DFFC(int a1);  /* 0x0010dffc */
int __fastcall sub_6010E134(int a1);  /* 0x0010e134 */
int __fastcall sub_6010E440(int *a1);  /* 0x0010e440 */
int __fastcall sub_6010E5E0(int a1);  /* 0x0010e5e0 */
int __fastcall SE_BOSS_ROY_DOWN_LAND1_ref(int a1);  /* 0x0010e788 */
bool __fastcall sub_6010E9D4(int a1, int a2);  /* 0x0010e9d4 */
void __fastcall sub_6010EAD8(_DWORD *a1);  /* 0x0010ead8 */
int __fastcall sub_6010EB48(_DWORD *a1);  /* 0x0010eb48 */
int __fastcall sub_6010EBBC(int a1);  /* 0x0010ebbc */
int __fastcall sub_6010EBD4(int *a1, int a2);  /* 0x0010ebd4 */
int __fastcall sub_6010EC0C(float *a1, int a2);  /* 0x0010ec0c */
int __fastcall sub_6010EC44(_DWORD *a1, int a2);  /* 0x0010ec44 */
int __fastcall sub_6010EC7C(int a1, int a2);  /* 0x0010ec7c */
int __fastcall sub_6010ECB4(int a1, int a2);  /* 0x0010ecb4 */
int __fastcall sub_6010ECF4(int a1, int a2);  /* 0x0010ecf4 */
int __fastcall sub_6010ED50(int a1);  /* 0x0010ed50 */
int __fastcall sub_6010ED94(int *a1, int a2);  /* 0x0010ed94 */
int __fastcall sub_6010EDCC(float *a1, int a2);  /* 0x0010edcc */
int __fastcall sub_6010EE04(int *a1);  /* 0x0010ee04 */
int __fastcall sub_6010EE34(int *a1);  /* 0x0010ee34 */
int __fastcall sub_6010EE68(int a1);  /* 0x0010ee68 */
int __fastcall sub_6010EE6C(int a1);  /* 0x0010ee6c */
int __fastcall sub_6010EF4C(int a1);  /* 0x0010ef4c */
int __fastcall sub_6010EF78(int a1, int a2);  /* 0x0010ef78 */
int __fastcall Actor_Roy_for_kishiLift_build(int a1);  /* 0x0010fcc4 */
int __fastcall sub_6010FD24(int a1);  /* 0x0010fd24 */
int __fastcall sub_6010FEB4(int a1);  /* 0x0010feb4 */
int __fastcall sub_6011013C(int a1);  /* 0x0011013c */
int __fastcall sub_60110240(int a1);  /* 0x00110240 */
int __fastcall sub_60110438(int result);  /* 0x00110438 */
int __fastcall sub_60110490(int result);  /* 0x00110490 */
bool __fastcall sub_60110588(int a1, int a2);  /* 0x00110588 */
int __fastcall sub_60110770(Actor *a1);  /* 0x00110770 */
int __fastcall Actor_Roy_for_kishiLift_sutepu_build(int a1);  /* 0x00110804 */
int __fastcall sub_601109B0(int a1);  /* 0x001109b0 */
void __fastcall sub_60110AC0(int a1);  /* 0x00110ac0 */
int __fastcall sub_60110B24(int a1);  /* 0x00110b24 */
int __fastcall sub_60110D6C(int a1);  /* 0x00110d6c */
int __fastcall sub_6011104C(int a1);  /* 0x0011104c */
int __fastcall sub_60111680(int a1);  /* 0x00111680 */
int __fastcall sub_60111800(int a1, int a2, int a3, int a4);  /* 0x00111800 */
int __fastcall sub_601118C0(int a1);  /* 0x001118c0 */
int __fastcall sub_601118E8(int a1);  /* 0x001118e8 */
int __fastcall sub_601118F4(int a1);  /* 0x001118f4 */
bool __fastcall sub_60111934(int a1, int a2);  /* 0x00111934 */
void __fastcall sub_60111A38(int a1);  /* 0x00111a38 */
int __fastcall sub_60111A88(int a1);  /* 0x00111a88 */
int __fastcall sub_60111C80(int a1);  /* 0x00111c80 */
int __fastcall sub_60111CF4(int a1);  /* 0x00111cf4 */
bool __fastcall sub_60111E1C(float *a1);  /* 0x00111e1c */
bool __fastcall sub_601122B8(int a1, int a2);  /* 0x001122b8 */
int __fastcall sub_601124A0(Actor *a1);  /* 0x001124a0 */
int __fastcall sub_601125D8(int a1);  /* 0x001125d8 */
int __fastcall sub_601126B8(int a1);  /* 0x001126b8 */
int __fastcall jcm_demo_battleA_ref(int a1);  /* 0x001126c8 */
int __fastcall SE_VOC_JR_ref_3(int a1);  /* 0x0011284c */
int __fastcall sub_60112A64(int a1);  /* 0x00112a64 */
int __fastcall sub_60112C84(int a1);  /* 0x00112c84 */
int __fastcall sub_60112FA0(int a1);  /* 0x00112fa0 */
int __fastcall jcm_shot_st_wait_ref(int a1);  /* 0x001130d0 */
int __fastcall jcm_shot_ref(int a1);  /* 0x001132d4 */
int __fastcall sub_601133B4(int a1);  /* 0x001133b4 */
int __fastcall sub_601134BC(int result);  /* 0x001134bc */
int __fastcall sub_601134CC(int a1);  /* 0x001134cc */
int __fastcall sub_601135AC(_DWORD *a1);  /* 0x001135ac */
int __fastcall jcm_special_ref(int a1);  /* 0x0011362c */
int __fastcall sub_6011370C(int a1);  /* 0x0011370c */
int __fastcall jcm_damage_s_ref(_DWORD *a1);  /* 0x0011386c */
int __fastcall jcm_damage_ref(int a1);  /* 0x0011395c */
int __fastcall sub_60113BA0(int a1);  /* 0x00113ba0 */
int __fastcall SE_AMB_WATER_SURFACE_DOWN_ref(int a1);  /* 0x00113e90 */
int __fastcall sub_601140F4(int a1);  /* 0x001140f4 */
int __fastcall sub_601142E0(_DWORD *a1);  /* 0x001142e0 */
int __fastcall sub_60114CF8(int a1);  /* 0x00114cf8 */
int __fastcall sub_60114E10(_DWORD *a1);  /* 0x00114e10 */
int __fastcall sub_60114F48(int a1);  /* 0x00114f48 */
int __fastcall sub_60115390(_DWORD *a1);  /* 0x00115390 */
signed int __fastcall sub_60115AA8(int a1);  /* 0x00115aa8 */
int __fastcall sub_60115DC4(int *a1);  /* 0x00115dc4 */
int __fastcall sub_60115EF8(int a1);  /* 0x00115ef8 */
int __fastcall sub_60116088(int a1);  /* 0x00116088 */
int __fastcall sub_601162D4(int a1);  /* 0x001162d4 */
int __fastcall sub_60116388(int *a1, float *a2);  /* 0x00116388 */
int __fastcall sub_601164E8(int *a1);  /* 0x001164e8 */
int __fastcall sub_601165A8(int a1);  /* 0x001165a8 */
int __fastcall jcm_squat_ref(int a1);  /* 0x00116680 */
int __fastcall jcm_damage_up_ref(int a1);  /* 0x00116758 */
int __fastcall jcm_death_ref(int a1);  /* 0x00116844 */
int __fastcall sub_601169CC(unsigned __int8 *a1);  /* 0x001169cc */
int __fastcall sub_60116AA8(int a1);  /* 0x00116aa8 */
int __fastcall sub_60116BC4(int a1);  /* 0x00116bc4 */
bool __fastcall sub_60116BD0(int a1);  /* 0x00116bd0 */
int __fastcall sub_60116E0C(int a1, int a2);  /* 0x00116e0c */
int __fastcall sub_60117590(int a1, int a2);  /* 0x00117590 */
int __fastcall sub_6011776C(int a1);  /* 0x0011776c */
int __fastcall sub_60117904(int a1);  /* 0x00117904 */
int __fastcall jcm_demo_battleA_ref_2(int a1);  /* 0x0011790c */
int __fastcall sub_60117ABC(_DWORD *a1);  /* 0x00117abc */
int __fastcall sub_60117BE4(int a1);  /* 0x00117be4 */
int __fastcall sub_60117D40(_BYTE *a1);  /* 0x00117d40 */
int __fastcall sub_60117F94(int a1);  /* 0x00117f94 */
int __fastcall sub_601180E8(_BYTE *a1);  /* 0x001180e8 */
int __fastcall SE_BOSS_JR_CLOWN_OPEN_ref(int a1);  /* 0x00118fec */
int __fastcall sub_60119004(int a1);  /* 0x00119004 */
int __fastcall sub_60119168(int a1);  /* 0x00119168 */
int __fastcall sub_60119338(int result);  /* 0x00119338 */
int __fastcall sub_6011941C(int a1, int a2, int a3, int a4);  /* 0x0011941c */
int __fastcall sub_60119E54(int a1);  /* 0x00119e54 */
int __fastcall sub_6011A0FC(int a1);  /* 0x0011a0fc */
int __fastcall sub_6011A174(int a1);  /* 0x0011a174 */
int __fastcall sub_6011A360(int a1);  /* 0x0011a360 */
int __fastcall sub_6011A57C(_DWORD *a1);  /* 0x0011a57c */
int __fastcall jc_demo_W5_appear_ref(int a1);  /* 0x0011a9e0 */
int __fastcall sub_6011ABA0(int result);  /* 0x0011aba0 */
int __fastcall sub_6011ABDC(int a1);  /* 0x0011abdc */
int __fastcall sub_6011ACC0(int a1);  /* 0x0011acc0 */
int __fastcall sub_6011B35C(int a1);  /* 0x0011b35c */
int __fastcall sub_6011BF50(int a1);  /* 0x0011bf50 */
int __fastcall sub_6011C230(int a1);  /* 0x0011c230 */
bool __fastcall sub_6011C4B0(int a1);  /* 0x0011c4b0 */
int __fastcall sub_6011C5AC(int a1);  /* 0x0011c5ac */
int __fastcall sub_6011C688(int *a1);  /* 0x0011c688 */
int __fastcall sub_6011CAD8(int a1);  /* 0x0011cad8 */
int __fastcall sub_6011CB70(int a1);  /* 0x0011cb70 */
int __fastcall sub_6011D788(int a1);  /* 0x0011d788 */
int __fastcall koopaJr_clown_m_ref(_DWORD *a1, int a2);  /* 0x0011dc88 */
int __fastcall sub_6011DDB8(int a1);  /* 0x0011ddb8 */
int __fastcall sub_6011DE08(int a1);  /* 0x0011de08 */
int __fastcall sub_6011DE58(float *a1, float *a2);  /* 0x0011de58 */
int __fastcall sub_6011DEE8(int a1);  /* 0x0011dee8 */
int __fastcall sub_6011E190(int a1);  /* 0x0011e190 */
int __fastcall sub_6011E504(float *a1, unsigned int a2, float *a3);  /* 0x0011e504 */
int __fastcall sub_6011EFC8(int a1, float *a2);  /* 0x0011efc8 */
float __fastcall sub_6011F2B4(int a1, int a2);  /* 0x0011f2b4 */
int __fastcall sub_6011FBCC(int a1);  /* 0x0011fbcc */
int __fastcall sub_60120120(int a1);  /* 0x00120120 */
int __fastcall sub_601206F4(int a1);  /* 0x001206f4 */
int __fastcall sub_601207E4(int a1);  /* 0x001207e4 */
int __fastcall sub_601208B4(int a1);  /* 0x001208b4 */
int __fastcall sub_601209A4(int a1);  /* 0x001209a4 */
int __fastcall sub_60120AF8(float *a1, float *a2);  /* 0x00120af8 */
int __fastcall sub_60120BC0(_DWORD *a1);  /* 0x00120bc0 */
int __fastcall sub_60120C04(_DWORD *a1);  /* 0x00120c04 */
int __fastcall sub_60120C5C(int *a1);  /* 0x00120c5c */
int __fastcall sub_60121034(int a1);  /* 0x00121034 */
int __fastcall sub_60121AF0(int a1);  /* 0x00121af0 */
int __fastcall SE_BOSS_JR_ref(int a1, int a2, int a3, int a4);  /* 0x00121af4 */
int __fastcall sub_60122278(int a1);  /* 0x00122278 */
int __fastcall sub_60122684(int a1);  /* 0x00122684 */
int __fastcall jcm_death_ref_2(_DWORD *a1);  /* 0x00122c7c */
int __fastcall sub_601230DC(int a1);  /* 0x001230dc */
int __fastcall sub_60123128(int *a1);  /* 0x00123128 */
bool __fastcall sub_60123A70(int a1, int a2);  /* 0x00123a70 */
void __fastcall sub_60123C5C(int a1);  /* 0x00123c5c */
int __fastcall sub_60123D58(int a1);  /* 0x00123d58 */
int __fastcall sub_60123E60(int a1);  /* 0x00123e60 */
bool __fastcall sub_60123E6C(int a1);  /* 0x00123e6c */
int __fastcall sub_60123F4C(int a1);  /* 0x00123f4c */
int __fastcall Actor_underwater_BowserJr_retreat_pos_build(int a1);  /* 0x001245c0 */
int __fastcall sub_60124600(int a1);  /* 0x00124600 */
bool __fastcall sub_6012462C(int a1, int a2);  /* 0x0012462c */
int __fastcall sub_60124814(Actor *a1);  /* 0x00124814 */
int __fastcall sub_60124E5C(float *a1);  /* 0x00124e5c */
int __fastcall sub_60124F88(int a1);  /* 0x00124f88 */
__int16 __fastcall sub_60125694(float *a1);  /* 0x00125694 */
int __fastcall sub_6012584C(int a1);  /* 0x0012584c */
int __fastcall sub_6012598C(_DWORD *a1);  /* 0x0012598c */
int __fastcall sub_60125A80(int a1);  /* 0x00125a80 */
int __fastcall spin_st_wait_ref(int a1);  /* 0x00125c9c */
int __fastcall sub_60125D0C(int a1);  /* 0x00125d0c */
int __fastcall spin_jump_ed_ref_2(int a1);  /* 0x00125ecc */
int __fastcall sub_60125F38(int32x4_t *a1);  /* 0x00125f38 */
int __fastcall spin_jump_ref_2(int a1);  /* 0x001261d0 */
int __fastcall sub_601262DC(int32x4_t *a1);  /* 0x001262dc */
int __fastcall spin_jump_ed_ref_3(int a1);  /* 0x0012654c */
int __fastcall sub_601265D8(int32x4_t *a1);  /* 0x001265d8 */
int __fastcall sub_60126744(int a1);  /* 0x00126744 */
int __fastcall sub_601267A8(int a1);  /* 0x001267a8 */
int __fastcall sub_60126A14(int32x4_t *a1);  /* 0x00126a14 */
int __fastcall spin_2_ref(_WORD *a1);  /* 0x00126d6c */
int __fastcall spin_ed_ref(int a1);  /* 0x00127144 */
int __fastcall SE_BOSS_WENDY_MAGIC_JUMP_ref(int32x4_t *a1);  /* 0x001271b0 */
int __fastcall sub_601274CC(int a1);  /* 0x001274cc */
int __fastcall sub_6012765C(int result);  /* 0x0012765c */
int __fastcall sub_601277AC(int32x4_t *a1);  /* 0x001277ac */
int __fastcall sub_60127AC0(int a1);  /* 0x00127ac0 */
int __fastcall sub_60127DF8(int a1);  /* 0x00127df8 */
int __fastcall sub_60127E20(int a1);  /* 0x00127e20 */
int __fastcall sub_6012802C(int *a1);  /* 0x0012802c */
int __fastcall sub_60128094(int a1);  /* 0x00128094 */
int __fastcall sub_6012812C(int *a1);  /* 0x0012812c */
int __fastcall sub_60128358(int a1);  /* 0x00128358 */
int __fastcall sub_60128674(int a1);  /* 0x00128674 */
int __fastcall sub_601288BC(int a1, int a2, int a3, int a4, int a5);  /* 0x001288bc */
int __fastcall sub_601288D8(int a1, int a2, int a3, int a4, int a5);  /* 0x001288d8 */
int __fastcall sub_601288F4(int a1);  /* 0x001288f4 */
int __fastcall sub_60128970(int a1);  /* 0x00128970 */
int __fastcall sub_60128C04(int a1);  /* 0x00128c04 */
int __fastcall sub_60128DE4(int a1, _DWORD *a2);  /* 0x00128de4 */
int __fastcall sub_60128E08(_DWORD *a1);  /* 0x00128e08 */
int __fastcall sub_60128F34(unsigned int *a1);  /* 0x00128f34 */
unsigned int __fastcall sub_60129174(_DWORD *a1);  /* 0x00129174 */
int __fastcall sub_60129290(int a1);  /* 0x00129290 */
int __fastcall sub_6012937C(_DWORD *a1);  /* 0x0012937c */
int __fastcall sub_601293F4(int32x4_t *a1);  /* 0x001293f4 */
int __fastcall SE_VOC_WEN_POSE_ref(int *a1);  /* 0x00129434 */
int __fastcall spin_jump_ref_3(int a1);  /* 0x001295d4 */
int __fastcall sub_601296E8(int32x4_t *a1);  /* 0x001296e8 */
int __fastcall sub_60129A04(int a1);  /* 0x00129a04 */
int __fastcall sub_60129B78(int a1);  /* 0x00129b78 */
int __fastcall sub_60129ECC(int a1);  /* 0x00129ecc */
int __fastcall SE_BOSS_WENDY_DOWN_LAND1_ref(int a1);  /* 0x0012a12c */
bool __fastcall sub_6012A2C8(int a1, int a2);  /* 0x0012a2c8 */
void __fastcall sub_6012A3CC(_DWORD *a1);  /* 0x0012a3cc */
int __fastcall sub_6012A458(_DWORD *a1);  /* 0x0012a458 */
int __fastcall sub_6012A4E8(int result);  /* 0x0012a4e8 */
int __fastcall sub_6012A4F8(int a1);  /* 0x0012a4f8 */
int __fastcall sub_6012A508(int a1);  /* 0x0012a508 */
int __fastcall sub_6012A518(_DWORD *a1);  /* 0x0012a518 */
int __fastcall sub_6012A558(int a1);  /* 0x0012a558 */
int __fastcall sub_6012A6AC(int a1);  /* 0x0012a6ac */
int __fastcall WendyFloor_onCreate(int a1);  /* 0x0012b40c */
int __fastcall sub_6012B514(int a1);  /* 0x0012b514 */
int __fastcall WendyFloor_updateModel(int a1);  /* 0x0012b63c */
int __fastcall WendyFloor_onExecute(int a1);  /* 0x0012b7a4 */
int __fastcall WendyFloor_onDraw(int a1, int a2, int a3, int a4);  /* 0x0012b7cc */
bool __fastcall sub_6012B7F0(int a1, int a2);  /* 0x0012b7f0 */
void __fastcall sub_6012B9D8(int a1);  /* 0x0012b9d8 */
int __fastcall sub_6012BA08(int a1);  /* 0x0012ba08 */
int __fastcall sub_6012BA3C(struct sead_IDisposer *a1);  /* 0x0012ba3c */
bool __fastcall sub_6012BA4C(int a1, int a2);  /* 0x0012ba4c */
int __fastcall sub_6012BD5C(_DWORD *a1);  /* 0x0012bd5c */
void __fastcall sub_6012BDE8(int a1);  /* 0x0012bde8 */
int __fastcall sub_6012C0B4(int a1);  /* 0x0012c0b4 */
void __fastcall sub_6012C204(int a1);  /* 0x0012c204 */
int __fastcall sub_6012C25C(int a1);  /* 0x0012c25c */
int __fastcall gura_anim_S_ref(int a1);  /* 0x0012c274 */
int __fastcall rakka_anim_S_ref(_DWORD *a1);  /* 0x0012c4dc */
int __fastcall sub_6012C56C(int a1);  /* 0x0012c56c */
int __fastcall sub_6012C68C(int a1, int a2);  /* 0x0012c68c */
int __fastcall sub_6012C808(int a1);  /* 0x0012c808 */
int __fastcall sub_6012CB54(int a1);  /* 0x0012cb54 */
int __fastcall sub_6012CC68(_DWORD *a1);  /* 0x0012cc68 */
int __fastcall sub_6012CDF0(_DWORD *a1);  /* 0x0012cdf0 */
int __fastcall sub_6012CE2C(int a1, int a2, int a3, int a4);  /* 0x0012ce2c */
int __fastcall sub_6012CE5C(int a1);  /* 0x0012ce5c */
int __fastcall sub_6012CFD4(int a1, int a2);  /* 0x0012cfd4 */
int __fastcall sub_6012D024(int a1, int a2, int a3);  /* 0x0012d024 */
bool __fastcall sub_6012D14C(int a1, int a2);  /* 0x0012d14c */
void __fastcall sub_6012D2C4(_BYTE *a1);  /* 0x0012d2c4 */
int __fastcall sub_6012D34C(_BYTE *a1);  /* 0x0012d34c */
int __fastcall sub_6012D3E0(float *a1);  /* 0x0012d3e0 */
int __fastcall sub_6012D4D8(float *a1);  /* 0x0012d4d8 */
int __fastcall sub_6012D5C0(int a1, int a2, int a3);  /* 0x0012d5c0 */
int __fastcall sub_6012D624(int a1, int a2, int a3);  /* 0x0012d624 */
int __fastcall sub_6012D98C(int result);  /* 0x0012d98c */
int __fastcall sub_6012D9B8(int a1);  /* 0x0012d9b8 */
unsigned int __fastcall SE_BOSS_WENDY_RING_BOUND_ref(int a1);  /* 0x0012dcb0 */
int __fastcall sub_6012E268(int a1, int a2);  /* 0x0012e268 */
int __fastcall wendy_ring_ref(int a1);  /* 0x0012e324 */
int __fastcall sub_6012E47C(_DWORD *a1);  /* 0x0012e47c */
int __fastcall sub_6012E604(_DWORD *a1);  /* 0x0012e604 */
int __fastcall sub_6012E628(int a1);  /* 0x0012e628 */
int __fastcall sub_6012E6D0(int a1);  /* 0x0012e6d0 */
float __fastcall sub_6012E784(int a1, float *a2);  /* 0x0012e784 */
float __fastcall sub_6012E978(float result, _DWORD *a2);  /* 0x0012e978 */
bool __fastcall sub_6012EE30(int a1, int a2);  /* 0x0012ee30 */
void __fastcall sub_6012EF34(int a1);  /* 0x0012ef34 */
int __fastcall sub_6012EFCC(int a1);  /* 0x0012efcc */
int __fastcall sub_6012F32C(int result);  /* 0x0012f32c */
int __fastcall sub_6012F33C(_DWORD *a1);  /* 0x0012f33c */
int __fastcall SE_BOSS_WOOGAN_YOKAN_ref(_DWORD *a1, int a2, int a3, int a4);  /* 0x0012f374 */
int __fastcall sub_6012FDFC(int a1);  /* 0x0012fdfc */
int __fastcall sub_6012FEF4(int *a1);  /* 0x0012fef4 */
int __fastcall sub_60130024(int *a1);  /* 0x00130024 */
int __fastcall sub_601300E0(int a1);  /* 0x001300e0 */
int __fastcall sub_60130538(int a1);  /* 0x00130538 */
int __fastcall sub_601305CC(_DWORD *a1);  /* 0x001305cc */
int __fastcall sub_60130694(int a1);  /* 0x00130694 */
int __fastcall sub_601306CC(int a1);  /* 0x001306cc */
int __fastcall sub_60130754(int a1, int a2);  /* 0x00130754 */
int __fastcall sub_6013084C(int a1);  /* 0x0013084c */
int __fastcall sub_60130AAC(int a1);  /* 0x00130aac */
int __fastcall sub_60130BE0(int a1);  /* 0x00130be0 */
int __fastcall sub_60130EA8(_BYTE *a1);  /* 0x00130ea8 */
int __fastcall sub_60130EF8(int a1);  /* 0x00130ef8 */
int __fastcall sub_601312EC(int a1);  /* 0x001312ec */
int __fastcall sub_60131370(int a1, _DWORD *a2);  /* 0x00131370 */
int __fastcall sub_6013166C(int a1);  /* 0x0013166c */
int __fastcall sub_60131858(int a1);  /* 0x00131858 */
int __fastcall sub_60131874(int a1);  /* 0x00131874 */
bool __fastcall sub_60131914(int a1, int a2);  /* 0x00131914 */
void __fastcall sub_60131A18(int a1);  /* 0x00131a18 */
int __fastcall sub_60131AA4(int a1);  /* 0x00131aa4 */
int __fastcall sub_60131B34(int a1);  /* 0x00131b34 */
int __fastcall sub_60131F18(int a1);  /* 0x00131f18 */
int __fastcall sub_601320D8(int a1);  /* 0x001320d8 */
int __fastcall sub_601321AC(int a1);  /* 0x001321ac */
int __fastcall sub_60132478(int result);  /* 0x00132478 */
int __fastcall sub_601324AC(int a1);  /* 0x001324ac */
int __fastcall sub_6013287C(int result);  /* 0x0013287c */
int __fastcall sub_601328D4(int a1);  /* 0x001328d4 */
int __fastcall sub_60132A50(int result);  /* 0x00132a50 */
int __fastcall sub_60132A88(int a1);  /* 0x00132a88 */
int __fastcall sub_60132C2C(int a1);  /* 0x00132c2c */
int __fastcall sub_60132CD0(_DWORD *a1);  /* 0x00132cd0 */
int __fastcall sub_60132D14(int a1, int a2);  /* 0x00132d14 */
unsigned int __fastcall sub_601330F8(unsigned int result, _DWORD *a2);  /* 0x001330f8 */
int __fastcall sub_6013335C(int a1);  /* 0x0013335c */
int __fastcall bros_boomerang_ref(int a1);  /* 0x00133588 */
int __fastcall sub_60133648(int a1);  /* 0x00133648 */
int __fastcall sub_60133694(int a1, int a2, int a3, int a4);  /* 0x00133694 */
int __fastcall sub_601336C0(_DWORD *a1);  /* 0x001336c0 */
int __fastcall sub_60133798(int a1);  /* 0x00133798 */
int __fastcall bros_boomerang_model_ref(int a1);  /* 0x001337cc */
int __fastcall sub_60133920(int a1);  /* 0x00133920 */
int __fastcall sub_60133A1C(int a1, int a2);  /* 0x00133a1c */
int __fastcall sub_60133B10(int a1);  /* 0x00133b10 */
bool __fastcall sub_60133B3C(int a1, int a2);  /* 0x00133b3c */
void __fastcall sub_60133CB4(int a1);  /* 0x00133cb4 */
int __fastcall sub_60133D24(int a1);  /* 0x00133d24 */
int __fastcall sub_60133DA0(int result);  /* 0x00133da0 */
int __fastcall sub_60133DB0(float *a1);  /* 0x00133db0 */
int __fastcall sub_60133E58(int a1, int a2);  /* 0x00133e58 */
int __fastcall sub_60133EF0(int a1);  /* 0x00133ef0 */
int __fastcall sub_60134120(int a1, int a2);  /* 0x00134120 */
int __fastcall sub_60134480(int a1);  /* 0x00134480 */
int __fastcall sub_601344BC(_DWORD *a1, int a2);  /* 0x001344bc */
int __fastcall sub_60134594(int result, int a2);  /* 0x00134594 */
int __fastcall sub_60134610(int a1, int a2);  /* 0x00134610 */
int __fastcall sub_60134748(_DWORD *a1);  /* 0x00134748 */
int __fastcall sub_6013480C(int a1);  /* 0x0013480c */
int __fastcall sub_60134818(int a1);  /* 0x00134818 */
int __fastcall sub_6013483C(_DWORD *a1);  /* 0x0013483c */
int __fastcall sub_60134914(int a1);  /* 0x00134914 */
unsigned int __fastcall sub_601349FC(int a1, _DWORD *a2);  /* 0x001349fc */
int __fastcall sub_60134DD4(int a1, int a2);  /* 0x00134dd4 */
int __fastcall sub_60134EF4(_DWORD *a1, int a2);  /* 0x00134ef4 */
int __fastcall SE_EMY_DOWN_NO_SCORE_ref_3(int a1, int a2);  /* 0x00135010 */
int __fastcall sub_6013512C(_DWORD *a1);  /* 0x0013512c */
int __fastcall sub_60135238(_DWORD *a1);  /* 0x00135238 */
int __fastcall sub_601352B4(_DWORD *a1);  /* 0x001352b4 */
int __fastcall sub_601353B0(float *a1);  /* 0x001353b0 */
int __fastcall sub_60135408(int a1);  /* 0x00135408 */
int __fastcall sub_60135438(int a1);  /* 0x00135438 */
int __fastcall sub_60135478(int a1);  /* 0x00135478 */
int __fastcall sub_601354B8(int a1);  /* 0x001354b8 */
int __fastcall sub_601354F8(int a1);  /* 0x001354f8 */
int __fastcall sub_60135530(int a1, int a2);  /* 0x00135530 */
int __fastcall sub_601355DC(int a1);  /* 0x001355dc */
int __fastcall sub_60135608(int a1);  /* 0x00135608 */
int __fastcall sub_6013567C(int a1, int a2);  /* 0x0013567c */
void __fastcall sub_60135780(int a1);  /* 0x00135780 */
int __fastcall sub_601357D0(int a1);  /* 0x001357d0 */
int __fastcall sub_60135830(int a1);  /* 0x00135830 */
int __fastcall sub_60135844(int a1);  /* 0x00135844 */
int __fastcall FireballBase_ctor(int a1);  /* 0x00135a90 */
int __fastcall FireballBase_onCreate(int a1);  /* 0x00135bd8 */
int __fastcall FireballBase_beforeExecute(int a1);  /* 0x00135db0 */
int __fastcall FireballBase_onExecute(int *a1);  /* 0x00135e48 */
int __fastcall FireballBase_onDraw(int a1);  /* 0x0013616c */
int __fastcall FireballBase_onDelete(_BYTE *a1);  /* 0x00136184 */
int __fastcall FireballBase_removeActiveColliders(int a1);  /* 0x001361b0 */
int __fastcall FireballBase_addActiveColliders(int a1);  /* 0x001361fc */
int __fastcall sub_6013625C(int a1);  /* 0x0013625c */
int __fastcall sub_601362A0(int a1);  /* 0x001362a0 */
bool __fastcall FireballBase_vf67(int a1);  /* 0x00136318 */
int __fastcall SE_OBJ_EMY_FIRE_SPLASH_ref(int a1);  /* 0x001363a8 */
int __fastcall SE_OBJ_EMY_FIRE_SPLASH_ref_2(int a1, float *a2);  /* 0x00136490 */
int __fastcall sub_6013657C(int a1);  /* 0x0013657c */
int __fastcall PlantFireball_vf70(int a1);  /* 0x00136624 */
int __fastcall PlantFireball_vf71(int a1);  /* 0x001366cc */
int __fastcall PlantFireball_vf55(int result);  /* 0x001367c8 */
int __fastcall sub_601367FC(_DWORD *a1);  /* 0x001367fc */
int __fastcall PlantFireball_vf52(int result);  /* 0x00136874 */
int __fastcall sub_60136894(int a1);  /* 0x00136894 */
int __fastcall sub_60136948(int a1);  /* 0x00136948 */
int __fastcall sub_60136A34(int a1);  /* 0x00136a34 */
int __fastcall sub_60136B2C(int a1);  /* 0x00136b2c */
int __fastcall sub_60136C70(unsigned int *a1, int a2);  /* 0x00136c70 */
int __fastcall sub_60136D6C(int a1, int a2);  /* 0x00136d6c */
bool __fastcall FireballBase_checkRTTI(int a1, int a2);  /* 0x00136e60 */
void __fastcall FireballBase_dtor(int a1);  /* 0x00136f64 */
int __fastcall FireballBase_dtorFree(int a1);  /* 0x00136ff0 */
int __fastcall PlantFireball_vf61(int a1);  /* 0x001370dc */
int __fastcall sub_601371E8(int a1);  /* 0x001371e8 */
int __fastcall sub_601373B0(int result, _DWORD *a2);  /* 0x001373b0 */
int __fastcall sub_6013752C(int a1);  /* 0x0013752c */
int __fastcall sub_601375C0(int a1);  /* 0x001375c0 */
bool __fastcall sub_60137630(int a1);  /* 0x00137630 */
int __fastcall SE_EMY_FIRE_BROS_FIRE_ref(int a1);  /* 0x001376e0 */
int __fastcall sub_60137738(int a1);  /* 0x00137738 */
int __fastcall SE_EMY_FIRE_BROS_FIRE_ref_2(_DWORD *a1);  /* 0x001379b0 */
int __fastcall sub_601379E4(int a1);  /* 0x001379e4 */
bool __fastcall sub_60137A4C(int a1, int a2);  /* 0x00137a4c */
void __fastcall sub_60137BC4(_DWORD *a1);  /* 0x00137bc4 */
int __fastcall sub_60137C74(_DWORD *a1);  /* 0x00137c74 */
int __fastcall sub_60137D28(int a1);  /* 0x00137d28 */
int __fastcall sub_60137D50(int a1);  /* 0x00137d50 */
int __fastcall sub_60137FCC(int a1, int a2, float *a3);  /* 0x00137fcc */
int __fastcall sub_60138104(int a1, float *a2);  /* 0x00138104 */
int __fastcall sub_6013818C(int a1, int a2, int a3);  /* 0x0013818c */
int __fastcall sub_60138278(int a1);  /* 0x00138278 */
int __fastcall sub_60138350(int a1);  /* 0x00138350 */
int __fastcall sub_60138440(_DWORD *a1);  /* 0x00138440 */
int __fastcall sub_601385B4(int a1);  /* 0x001385b4 */
int __fastcall sub_6013865C(int a1);  /* 0x0013865c */
int __fastcall sub_6013872C(int a1);  /* 0x0013872c */
int __fastcall sub_6013891C(int a1);  /* 0x0013891c */
int __fastcall sub_60138A08(int a1);  /* 0x00138a08 */
int __fastcall sub_60138B94(int a1);  /* 0x00138b94 */
int __fastcall sub_60138BA8(int a1, float *a2);  /* 0x00138ba8 */
bool __fastcall sub_60138E18(int a1, int a2);  /* 0x00138e18 */
void __fastcall sub_60138F1C(int a1);  /* 0x00138f1c */
int __fastcall sub_60138FA8(int a1);  /* 0x00138fa8 */
int __fastcall sub_60139038(int a1);  /* 0x00139038 */
int __fastcall sub_60139054(int a1);  /* 0x00139054 */
int __fastcall sub_601392B0(int a1);  /* 0x001392b0 */
int __fastcall sub_6013935C(int result);  /* 0x0013935c */
int __fastcall sub_60139420(int a1);  /* 0x00139420 */
int __fastcall sub_60139434(int result);  /* 0x00139434 */
int __fastcall sub_60139450(int a1);  /* 0x00139450 */
int __fastcall sub_6013946C(int a1);  /* 0x0013946c */
int __fastcall sub_60139478(int a1);  /* 0x00139478 */
bool __fastcall sub_60139488(int a1, int a2);  /* 0x00139488 */
int __fastcall sub_60139600(int a1);  /* 0x00139600 */
int __fastcall sub_60139690(int a1, int a2);  /* 0x00139690 */
int __fastcall sub_6013972C(int a1);  /* 0x0013972c */
int __fastcall sub_60139988(int a1, _DWORD *a2);  /* 0x00139988 */
int __fastcall PlantFireball_vf62(int a1);  /* 0x00139d28 */
int __fastcall PlantFireball_vf65(_DWORD *a1);  /* 0x00139fd8 */
int __fastcall PlantFireball_vf66(int result);  /* 0x0013a050 */
int __fastcall sub_6013A07C(int a1);  /* 0x0013a07c */
bool __fastcall PlantFireball_vf67(int a1);  /* 0x0013a104 */
int __fastcall PlantFireball_vf72(int a1);  /* 0x0013a1c4 */
int __fastcall PlantFireball_vf48(int a1);  /* 0x0013a214 */
int __fastcall PlantFireball_vf49(int a1);  /* 0x0013a234 */
bool __fastcall PlantFireball_vf0(int a1, int a2);  /* 0x0013a374 */
int __fastcall PlantFireball_vf3(int a1);  /* 0x0013a4ec */
int __fastcall sub_6013A580(int a1);  /* 0x0013a580 */
int __fastcall PlayerFireball_ctor(int a1);  /* 0x0013a7a4 */
int __fastcall sub_6013A7FC(int a1);  /* 0x0013a7fc */
int __fastcall sub_6013A8F4(int a1);  /* 0x0013a8f4 */
int __fastcall sub_6013A98C(int a1);  /* 0x0013a98c */
int __fastcall sub_6013AA08(int a1, unsigned int a2);  /* 0x0013aa08 */
int __fastcall sub_6013ADBC(int result, int a2);  /* 0x0013adbc */
void __fastcall sub_6013B0A8(int a1);  /* 0x0013b0a8 */
int __fastcall sub_6013B138(int a1);  /* 0x0013b138 */
int __fastcall SE_OBJ_FIREBALL_SPLASH_ref(int a1);  /* 0x0013b428 */
int __fastcall SE_OBJ_FIREBALL_SPLASH_ref_2(int a1, float *a2);  /* 0x0013b470 */
int __fastcall sub_6013B53C(int a1);  /* 0x0013b53c */
int __fastcall sub_6013B584(int a1);  /* 0x0013b584 */
int __fastcall sub_6013B5CC(int a1);  /* 0x0013b5cc */
bool __fastcall sub_6013B690(int a1, int a2);  /* 0x0013b690 */
int __fastcall sub_6013B808(int a1);  /* 0x0013b808 */
int __fastcall sub_6013B898(int a1);  /* 0x0013b898 */
int __fastcall sub_6013B920(int a1);  /* 0x0013b920 */
int __fastcall sub_6013BAA8(int a1);  /* 0x0013baa8 */
int __fastcall sub_6013C05C(int a1);  /* 0x0013c05c */
int __fastcall sub_6013C27C(int a1);  /* 0x0013c27c */
int __fastcall sub_6013C290(_DWORD *a1);  /* 0x0013c290 */
int __fastcall sub_6013C304(int *a1);  /* 0x0013c304 */
int __fastcall sub_6013C490(int result);  /* 0x0013c490 */
bool __fastcall sub_6013C51C(int a1, int a2);  /* 0x0013c51c */
void __fastcall sub_6013C708(_BYTE *a1);  /* 0x0013c708 */
int __fastcall sub_6013C7B4(_BYTE *a1);  /* 0x0013c7b4 */
int __fastcall sub_6013C864(int result);  /* 0x0013c864 */
int __fastcall sub_6013C874(int result);  /* 0x0013c874 */
int __fastcall sub_6013C89C(int a1);  /* 0x0013c89c */
int __fastcall sub_6013C8A8(int a1);  /* 0x0013c8a8 */
int __fastcall sub_6013C8B4(float *a1);  /* 0x0013c8b4 */
int __fastcall sub_6013C8CC(int a1);  /* 0x0013c8cc */
int __fastcall sub_6013C8E4(int a1);  /* 0x0013c8e4 */
int __fastcall sub_6013C8F0(int a1, _DWORD *a2);  /* 0x0013c8f0 */
int __fastcall sub_6013C918(_DWORD *a1);  /* 0x0013c918 */
int __fastcall sub_6013C948(int a1);  /* 0x0013c948 */
int __fastcall sub_6013C978(int a1, int a2);  /* 0x0013c978 */
int __fastcall sub_6013CC28(_BYTE *a1);  /* 0x0013cc28 */
int __fastcall sub_6013CF8C(int a1);  /* 0x0013cf8c */
int __fastcall sub_6013D100(_DWORD *a1);  /* 0x0013d100 */
int __fastcall sub_6013D138(int a1);  /* 0x0013d138 */
int __fastcall sub_6013D1A0(int a1);  /* 0x0013d1a0 */
int __fastcall sub_6013D220(int a1);  /* 0x0013d220 */
int __fastcall sub_6013D2F0(_DWORD *a1);  /* 0x0013d2f0 */
int __fastcall sub_6013D308(int a1);  /* 0x0013d308 */
int __fastcall sub_6013D370(int a1, int a2);  /* 0x0013d370 */
int __fastcall sub_6013D428(int a1, int a2, int a3);  /* 0x0013d428 */
int __fastcall sub_6013D46C(int a1);  /* 0x0013d46c */
int __fastcall sub_6013D524(_DWORD *a1);  /* 0x0013d524 */
int __fastcall sub_6013D608(int a1);  /* 0x0013d608 */
int __fastcall sub_6013D710(int a1);  /* 0x0013d710 */
int __fastcall sub_6013D77C(int a1);  /* 0x0013d77c */
int __fastcall sub_6013D794(int a1);  /* 0x0013d794 */
int __fastcall sub_6013D830(int a1);  /* 0x0013d830 */
int __fastcall sub_6013DB60(int a1);  /* 0x0013db60 */
void __fastcall sub_6013DBDC(int a1);  /* 0x0013dbdc */
int __fastcall sub_6013DC88(int a1, int a2, int a3);  /* 0x0013dc88 */
int __fastcall sub_6013DD40(float *a1, int a2, int a3);  /* 0x0013dd40 */
int __fastcall sub_6013DE24(int a1, int a2, int a3);  /* 0x0013de24 */
int __fastcall sub_6013E0C8(float *a1);  /* 0x0013e0c8 */
int __fastcall sub_6013E1A0(int a1, int a2, int a3);  /* 0x0013e1a0 */
int __fastcall sub_6013E288(int a1, int a2);  /* 0x0013e288 */
int __fastcall sub_6013E41C(_DWORD *a1, int a2, int a3);  /* 0x0013e41c */
int __fastcall sub_6013E5CC(int a1, int a2);  /* 0x0013e5cc */
int __fastcall sub_6013E640(int a1, int a2);  /* 0x0013e640 */
int __fastcall sub_6013E6CC(int a1);  /* 0x0013e6cc */
int __fastcall sub_6013E748(_DWORD *a1, int a2);  /* 0x0013e748 */
int __fastcall sub_6013E7E0(int a1);  /* 0x0013e7e0 */
int __fastcall sub_6013E8B4(int a1, int a2);  /* 0x0013e8b4 */
int __fastcall sub_6013E980(int a1);  /* 0x0013e980 */
int __fastcall sub_6013EA98(int a1);  /* 0x0013ea98 */
int __fastcall sub_6013EAE0(int a1, int a2);  /* 0x0013eae0 */
bool __fastcall sub_6013EBD8(int a1, int a2);  /* 0x0013ebd8 */
int __fastcall sub_6013ED50(_BYTE *a1);  /* 0x0013ed50 */
int __fastcall sub_6013F02C(int a1);  /* 0x0013f02c */
int __fastcall sub_6013F04C(int a1, int a2);  /* 0x0013f04c */
int __fastcall sub_6013F128(int a1, int a2);  /* 0x0013f128 */
int __fastcall sub_6013F218(int a1);  /* 0x0013f218 */
int __fastcall sub_6013F3D8(int a1);  /* 0x0013f3d8 */
int __fastcall sub_6013F96C(int a1);  /* 0x0013f96c */
int __fastcall sub_6013F9F4(int a1);  /* 0x0013f9f4 */
int __fastcall sub_6013FB0C(int a1);  /* 0x0013fb0c */
int __fastcall HammerActor_setupModel(int a1);  /* 0x0013fcd4 */
int __fastcall sub_6013FD94(int a1);  /* 0x0013fd94 */
int __fastcall sub_6013FDC0(int a1);  /* 0x0013fdc0 */
int __fastcall sub_6013FFC0(int a1);  /* 0x0013ffc0 */
int __fastcall bros_hammer_model_ref(int a1);  /* 0x0013fffc */
int __fastcall sub_60140150(int a1);  /* 0x00140150 */
int __fastcall sub_601401E8(int a1, int a2);  /* 0x001401e8 */
int __fastcall sub_601402DC(int a1);  /* 0x001402dc */
int __fastcall sub_601402FC(int a1, int a2);  /* 0x001402fc */
void __fastcall sub_60140474(StageActor *a1);  /* 0x00140474 */
int __fastcall sub_601404E4(StageActor *a1);  /* 0x001404e4 */
int __fastcall sub_60140558(int result);  /* 0x00140558 */
int __fastcall SE_EMY_HAMMER_BROS_HAMMER_ref(float *a1);  /* 0x001405f4 */
int __fastcall sub_6014065C(int a1);  /* 0x0014065c */
int __fastcall sub_60140A14(int a1);  /* 0x00140a14 */
int __fastcall sub_60140BA8(int a1);  /* 0x00140ba8 */
int __fastcall sub_60140D24(int a1);  /* 0x00140d24 */
int __fastcall sub_60140F90(int a1, unsigned int a2);  /* 0x00140f90 */
int __fastcall sub_60141274(int a1);  /* 0x00141274 */
int __fastcall sub_60141330(int result, int a2);  /* 0x00141330 */
int __fastcall sub_601414BC(int result);  /* 0x001414bc */
int __fastcall sub_60141500(int a1);  /* 0x00141500 */
bool __fastcall sub_60141890(_DWORD *a1);  /* 0x00141890 */
int __fastcall sub_601419E0(int a1);  /* 0x001419e0 */
bool __fastcall sub_60141C08(int a1, int a2);  /* 0x00141c08 */
void __fastcall sub_60141D80(int a1);  /* 0x00141d80 */
int __fastcall sub_60141E0C(int a1);  /* 0x00141e0c */
int __fastcall sub_60141EA4(int a1);  /* 0x00141ea4 */
int __fastcall sub_60141EF0(int a1);  /* 0x00141ef0 */
int __fastcall sub_601420D4(int a1, int a2);  /* 0x001420d4 */
int __fastcall sub_601421C4(int a1, int (__fastcall ***a2)(_DWORD, int));  /* 0x001421c4 */
int __fastcall sub_60142290(int a1);  /* 0x00142290 */
int __fastcall sub_601423C4(unsigned int *a1, int a2);  /* 0x001423c4 */
int __fastcall sub_601425DC(_DWORD *a1);  /* 0x001425dc */
int __fastcall sub_60142720(int a1);  /* 0x00142720 */
int __fastcall sub_601428E4(int a1);  /* 0x001428e4 */
int __fastcall sub_60142904(int a1);  /* 0x00142904 */
void __fastcall sub_60142950(int a1);  /* 0x00142950 */
bool __fastcall sub_601429B0(int a1);  /* 0x001429b0 */
int __fastcall sub_60142A48(_DWORD *a1);  /* 0x00142a48 */
int __fastcall sub_60142A90(int a1);  /* 0x00142a90 */
int __fastcall sub_60142AD4(int a1);  /* 0x00142ad4 */
int __fastcall sub_60142AE0(int a1);  /* 0x00142ae0 */
int __fastcall sub_60142B14(_DWORD *a1);  /* 0x00142b14 */
int __fastcall sub_60142B8C(int result);  /* 0x00142b8c */
int __fastcall sub_60142BB0(int result);  /* 0x00142bb0 */
bool __fastcall sub_60142BEC(int a1, int a2);  /* 0x00142bec */
int __fastcall sub_60142CF0(int a1);  /* 0x00142cf0 */
int __fastcall sub_60142D80(int a1);  /* 0x00142d80 */
int __fastcall sub_60142E24(int a1);  /* 0x00142e24 */
int __fastcall SE_OBJ_EMY_ICEBALL_DISAPP_ref(int a1, _DWORD *a2);  /* 0x00142fe0 */
int __fastcall sub_601431CC(int a1);  /* 0x001431cc */
int __fastcall SE_EMY_ICE_BROS_ICE_ref(float *a1);  /* 0x00143330 */
int __fastcall SE_OBJ_EMY_ICEBALL_DISAPP_ref_2(int a1);  /* 0x00143394 */
int __fastcall SE_EMY_ICE_BROS_ICE_ref_2(_DWORD *a1);  /* 0x00143480 */
int __fastcall sub_601434AC(int result);  /* 0x001434ac */
bool __fastcall sub_601434B4(int a1, int a2);  /* 0x001434b4 */
void __fastcall sub_6014362C(_DWORD *a1);  /* 0x0014362c */
int __fastcall sub_601436DC(_DWORD *a1);  /* 0x001436dc */
int __fastcall sub_60143794(int a1);  /* 0x00143794 */
int __fastcall sub_601437CC(int a1);  /* 0x001437cc */
int __fastcall sub_60143990(int a1, _DWORD *a2);  /* 0x00143990 */
int __fastcall sub_60143DB0(int a1);  /* 0x00143db0 */
int __fastcall sub_60143EFC(int a1);  /* 0x00143efc */
int __fastcall sub_60143FB0(int a1);  /* 0x00143fb0 */
int __fastcall sub_6014419C(int a1);  /* 0x0014419c */
int __fastcall sub_601441D4(int result);  /* 0x001441d4 */
int __fastcall sub_601441F4(int a1);  /* 0x001441f4 */
int __fastcall sub_601442C4(int result);  /* 0x001442c4 */
bool __fastcall sub_60144370(int a1, int a2);  /* 0x00144370 */
int __fastcall sub_601444E8(int a1);  /* 0x001444e8 */
int __fastcall sub_6014457C(int a1);  /* 0x0014457c */
int __fastcall sub_601447C4(int a1, int a2);  /* 0x001447c4 */
int __fastcall sub_60144890(int a1, int a2);  /* 0x00144890 */
int __fastcall sub_60144970(int a1, int (__fastcall ***a2)(_DWORD, int));  /* 0x00144970 */
int __fastcall sub_60144CFC(int a1);  /* 0x00144cfc */
void __fastcall sub_60144E40(int a1);  /* 0x00144e40 */
int __fastcall sub_60145180(int a1);  /* 0x00145180 */
int __fastcall sub_601451FC(int a1);  /* 0x001451fc */
int __fastcall sub_60145224(_DWORD **a1);  /* 0x00145224 */
int __fastcall sub_60145258(_DWORD *a1);  /* 0x00145258 */
int __fastcall sub_60145320(int a1);  /* 0x00145320 */
int __fastcall sub_6014538C(int a1, int a2, int a3, int a4);  /* 0x0014538c */
int __fastcall mega_hammer_ref(int a1);  /* 0x001453b8 */
int __fastcall sub_60145478(int a1);  /* 0x00145478 */
int __fastcall sub_601454C8(int a1);  /* 0x001454c8 */
int __fastcall sub_60145684(int a1, int *a2);  /* 0x00145684 */
int __fastcall sub_601456E8(int a1);  /* 0x001456e8 */
int __fastcall sub_60145780(int a1, int a2);  /* 0x00145780 */
int __fastcall sub_60145874(int a1);  /* 0x00145874 */
bool __fastcall sub_60145894(int a1, int a2);  /* 0x00145894 */
void __fastcall sub_60145A0C(int a1);  /* 0x00145a0c */
int __fastcall sub_60145A7C(int a1);  /* 0x00145a7c */
int __fastcall sub_60145AF0(int result);  /* 0x00145af0 */
int __fastcall sub_60145B04(int result);  /* 0x00145b04 */
int __fastcall sub_60145D7C(_DWORD *a1);  /* 0x00145d7c */
int __fastcall SE_OBJ_ROCK_LAND_ref_2(int a1);  /* 0x00145dfc */
int __fastcall sub_60145F6C(int a1);  /* 0x00145f6c */
int __fastcall sub_6014618C(int a1);  /* 0x0014618c */
int __fastcall sub_601461A0(_DWORD *a1);  /* 0x001461a0 */
int __fastcall sub_6014621C(int *a1);  /* 0x0014621c */
int __fastcall sub_601463A8(int result);  /* 0x001463a8 */
bool __fastcall sub_60146434(int a1, int a2);  /* 0x00146434 */
int __fastcall sub_60146620(_BYTE *a1);  /* 0x00146620 */
int __fastcall sub_601466D0(int a1);  /* 0x001466d0 */
int __fastcall sub_601469D8(int a1);  /* 0x001469d8 */
int __fastcall sub_60146C28(int a1);  /* 0x00146c28 */
int __fastcall sub_60146C94(float *a1);  /* 0x00146c94 */
int __fastcall SE_OBJ_SNOWBALL_GROUND_ref(int a1);  /* 0x00146d04 */
int __fastcall sub_60147150(_DWORD *a1);  /* 0x00147150 */
int __fastcall sub_60147188(_DWORD *a1);  /* 0x00147188 */
int __fastcall sub_601471B8(int a1, int a2, int a3, int a4);  /* 0x001471b8 */
int __fastcall sub_601472B0(int a1);  /* 0x001472b0 */
int __fastcall sub_60147450(int a1, int a2);  /* 0x00147450 */
int __fastcall sub_60147570(int a1);  /* 0x00147570 */
int __fastcall sub_60147654(_DWORD *a1);  /* 0x00147654 */
int __fastcall sub_601477E0(int a1);  /* 0x001477e0 */
int __fastcall sub_60147AC0(int a1);  /* 0x00147ac0 */
int __fastcall sub_60147B2C(int a1);  /* 0x00147b2c */
int __fastcall sub_60147BB0(int a1);  /* 0x00147bb0 */
int __fastcall sub_60147CA4(int a1);  /* 0x00147ca4 */
void __fastcall sub_60147CF0(int a1);  /* 0x00147cf0 */
int __fastcall sub_60147D50(float *a1, int a2, int a3);  /* 0x00147d50 */
int __fastcall sub_60147E30(int a1);  /* 0x00147e30 */
void __fastcall sub_60147E3C(int a1, int a2, int a3);  /* 0x00147e3c */
int __fastcall sub_60147EC8(int a1, int a2);  /* 0x00147ec8 */
int __fastcall sub_60147F80(int a1, int a2);  /* 0x00147f80 */
int __fastcall sub_60147FA0(int a1, int a2);  /* 0x00147fa0 */
int __fastcall sub_60148098(int a1, int a2);  /* 0x00148098 */
int __fastcall sub_601481BC(float *a1);  /* 0x001481bc */
int __fastcall sub_60148250(_DWORD *a1, int a2);  /* 0x00148250 */
int __fastcall sub_601482E8(int a1);  /* 0x001482e8 */
int __fastcall ball_model_ref(int a1);  /* 0x001484bc */
int __fastcall sub_60148904(int a1);  /* 0x00148904 */
int __fastcall sub_60148944(int a1);  /* 0x00148944 */
void __fastcall sub_6014897C(int a1);  /* 0x0014897c */
bool __fastcall sub_601489FC(int a1, int a2);  /* 0x001489fc */
void __fastcall sub_60148B74(_BYTE *a1);  /* 0x00148b74 */
int __fastcall sub_60148C10(_BYTE *a1);  /* 0x00148c10 */
int __fastcall sub_60148CB0(int result);  /* 0x00148cb0 */
int __fastcall sub_60148CC0(int result);  /* 0x00148cc0 */
int __fastcall sub_60148CDC(int a1);  /* 0x00148cdc */
int __fastcall sub_60148CE8(int a1);  /* 0x00148ce8 */
int __fastcall sub_60148CF4(int a1);  /* 0x00148cf4 */
int __fastcall sub_60148D04(int a1);  /* 0x00148d04 */
int __fastcall sub_60148D14(int a1);  /* 0x00148d14 */
int __fastcall sub_60148D24(int a1);  /* 0x00148d24 */
int __fastcall sub_60148D3C(int a1);  /* 0x00148d3c */
int __fastcall sub_60148D4C(int a1);  /* 0x00148d4c */
int __fastcall sub_60148D5C(int a1, _DWORD *a2);  /* 0x00148d5c */
int __fastcall sub_60148D84(int a1);  /* 0x00148d84 */
int __fastcall sub_6014914C(int a1);  /* 0x0014914c */
int __fastcall sub_60149250(int a1);  /* 0x00149250 */
int __fastcall SE_EMY_CHOROPU_M_SPANNER_ref(int a1);  /* 0x00149320 */
int __fastcall sub_601495DC(int a1);  /* 0x001495dc */
void __fastcall sub_60149648(int a1);  /* 0x00149648 */
int __fastcall sub_601496B4(int a1);  /* 0x001496b4 */
int __fastcall sub_60149928(int a1);  /* 0x00149928 */
int __fastcall sub_60149A24(int a1, int a2, int a3, int a4);  /* 0x00149a24 */
int __fastcall sub_60149A4C(_DWORD *a1);  /* 0x00149a4c */
int __fastcall sub_60149B2C(int a1);  /* 0x00149b2c */
int __fastcall sub_60149BEC(int a1, int a2);  /* 0x00149bec */
int __fastcall sub_60149CE0(int a1, int a2);  /* 0x00149ce0 */
bool __fastcall sub_60149DD8(int a1, int a2);  /* 0x00149dd8 */
void __fastcall sub_60149F50(_DWORD *a1);  /* 0x00149f50 */
int __fastcall sub_60149FF0(_DWORD *a1);  /* 0x00149ff0 */
int __fastcall sub_6014A2B8(int a1);  /* 0x0014a2b8 */
int __fastcall sub_6014A2F0(int result, int a2);  /* 0x0014a2f0 */
int __fastcall CollisionMgr_ctor(int a1);  /* 0x0014a310 */
int __fastcall CollisionMgr_vf14(int a1);  /* 0x0014b310 */
int __fastcall sub_6014B69C(int a1);  /* 0x0014b69c */
int __fastcall sub_6014B6F8(int a1);  /* 0x0014b6f8 */
int __fastcall sub_6014B758(int a1, int a2);  /* 0x0014b758 */
int __fastcall CollisionMgr_dtor(int a1);  /* 0x0014b840 */
int __fastcall CollisionMgr_dtorFree(int a1);  /* 0x0014b9d8 */
int __fastcall CollisionMgr_init(int result, int a2, int *a3, int *a4, float *a5);  /* 0x0014b9e8 */
int __fastcall CollisionMgr_vf18(_BYTE *a1);  /* 0x0014bbc8 */
int __fastcall sub_6014BF68(int a1);  /* 0x0014bf68 */
int __fastcall sub_6014C390(int a1);  /* 0x0014c390 */
int __fastcall sub_6014C3BC(int a1);  /* 0x0014c3bc */
int __fastcall sub_6014C3EC(int a1, int a2);  /* 0x0014c3ec */
int __fastcall sub_6014C474(int result, _WORD *a2, int a3);  /* 0x0014c474 */
int __fastcall sub_6014C4A4(int a1);  /* 0x0014c4a4 */
int __fastcall sub_6014C4D4(int a1);  /* 0x0014c4d4 */
int __fastcall sub_6014C508(int a1, int a2);  /* 0x0014c508 */
bool __fastcall sub_6014C540(int a1);  /* 0x0014c540 */
int __fastcall sub_6014C57C(int a1, int a2);  /* 0x0014c57c */
unsigned int __fastcall sub_6014C5E8(int a1);  /* 0x0014c5e8 */
int __fastcall sub_6014C61C(int a1, int a2);  /* 0x0014c61c */
int __fastcall sub_6014C658(int a1, int a2);  /* 0x0014c658 */
int __fastcall CollisionMgr_process(unsigned __int8 *a1);  /* 0x0014c6e4 */
int __fastcall sub_6014D020(int a1);  /* 0x0014d020 */
int __fastcall sub_6014D680(int a1);  /* 0x0014d680 */
int __fastcall sub_6014D97C(int a1);  /* 0x0014d97c */
int __fastcall sub_6014DDD0(int a1);  /* 0x0014ddd0 */
int __fastcall sub_6014DEE4(int a1, int a2);  /* 0x0014dee4 */
int __fastcall sub_6014E8B8(_DWORD *a1, int a2);  /* 0x0014e8b8 */
int __fastcall sub_6014EB4C(int a1, int a2, int a3);  /* 0x0014eb4c */
int __fastcall sub_6014F61C(int a1);  /* 0x0014f61c */
int __fastcall sub_6014F6C8(int a1, int a2, int a3);  /* 0x0014f6c8 */
int __fastcall sub_6014FBD0(int a1, int a2);  /* 0x0014fbd0 */
int __fastcall sub_6014FD40(int a1, int a2, int a3);  /* 0x0014fd40 */
int __fastcall sub_60150BDC(_DWORD *a1, unsigned int a2);  /* 0x00150bdc */
int __fastcall sub_60150CD0(int a1, int a2);  /* 0x00150cd0 */
bool __fastcall sub_60150D70(int a1, int a2, int a3);  /* 0x00150d70 */
bool __fastcall sub_60150EE8(int a1, int a2, int a3);  /* 0x00150ee8 */
bool __fastcall sub_60151114(int a1, _DWORD *a2, int a3);  /* 0x00151114 */
int __fastcall sub_601518D4(int a1, float *a2);  /* 0x001518d4 */
int __fastcall sub_60151960(int a1, float *a2, int a3);  /* 0x00151960 */
int __fastcall sub_60151A7C(int a1, float *a2, float *a3);  /* 0x00151a7c */
int __fastcall checkWaveCollision(_DWORD *a1, float *a2);  /* 0x00151d34 */
int __fastcall checkLiquidCollisions(int *a1, float *a2, float *a3, int a4);  /* 0x00151ed8 */
int __fastcall physics_21893E8(int *a1, float *a2, _BYTE *a3, float *a4, int a5);  /* 0x001522f8 */
int __fastcall sub_601529D0(_DWORD *a1, float *a2, char a3);  /* 0x001529d0 */
int __fastcall sub_60152B40(char a1);  /* 0x00152b40 */
int __fastcall CollisionMgr_vf28(int a1);  /* 0x00152c18 */
int __fastcall sub_60152FF4(int a1, int a2);  /* 0x00152ff4 */
bool __fastcall CollisionMgr_checkRTTI(int a1, int a2);  /* 0x0015303c */
int __fastcall sub_60153134(int a1, int a2);  /* 0x00153134 */
int __fastcall sub_60153190(int result, int a2);  /* 0x00153190 */
bool __fastcall sub_601531E8(int a1, int a2);  /* 0x001531e8 */
int __fastcall sub_6015335C(int a1);  /* 0x0015335c */
int __fastcall sub_6015336C(int a1);  /* 0x0015336c */
int __fastcall sub_60153374(int a1);  /* 0x00153374 */
int __fastcall sub_6015337C(int a1);  /* 0x0015337c */
int __fastcall sub_60153384(int a1, int a2);  /* 0x00153384 */
int __fastcall ColliderMgr_dtorFree(struct sead_IDisposer *a1);  /* 0x00153470 */
int __fastcall ColliderMgr_add(_DWORD *a1, _DWORD *a2);  /* 0x001535ac */
bool __fastcall sub_601536B0(int a1, int a2);  /* 0x001536b0 */
int __fastcall ColliderMgr_removeRelated1(_DWORD *a1, _DWORD *a2);  /* 0x001536e8 */
int __fastcall ColliderMgr_removeFromList1(int result, int a2);  /* 0x001537f0 */
int __fastcall ColliderMgr_removeFromList3(int result, int a2);  /* 0x00153828 */
int __fastcall ColliderMgr_removeFromList2(int result, int a2);  /* 0x00153860 */
int __fastcall sub_60153898(_DWORD *a1, _DWORD *a2, __int64 *a3, __int64 *a4);  /* 0x00153898 */
int __fastcall sub_60153A98(int result, int a2);  /* 0x00153a98 */
int __fastcall ColliderMgr_removeFromList4(int result, int a2);  /* 0x00153ad0 */
int __fastcall ColliderMgr_removeFromList5(_DWORD *a1, int a2);  /* 0x00153b08 */
int __fastcall ColliderList_insertBack(int result, int a2);  /* 0x00153bcc */
int __fastcall ColliderMgr_removeRelated2(int result, int a2);  /* 0x00153c00 */
int __fastcall ColliderList_remove(int result, int a2);  /* 0x00153c94 */
int __fastcall sub_60153D08(int result);  /* 0x00153d08 */
int __fastcall sub_60153D8C(_DWORD *a1, float *a2);  /* 0x00153d8c */
int __fastcall ColliderList_insertFront(int result, int a2);  /* 0x001540c0 */
int __fastcall ColliderList_clear(int result);  /* 0x001540f4 */
bool __fastcall ActorCollisionMgr_checkRTTI(int a1, int a2);  /* 0x00154140 */
int __fastcall ActorCollisionMgr_dtorFree(int a1);  /* 0x001542b4 */
int __fastcall ActorCollisionMgr_vf1C(int a1);  /* 0x001542c4 */
int __fastcall ActorCollisionMgr_vf20(int a1);  /* 0x001542cc */
int __fastcall ActorCollisionMgr_vf24(int a1);  /* 0x001542d4 */
int __fastcall sub_601542DC(int a1);  /* 0x001542dc */
int __fastcall sub_60154380(_DWORD *a1);  /* 0x00154380 */
int __fastcall sub_60154420(int a1, int a2);  /* 0x00154420 */
int __fastcall sub_601544AC(_DWORD *a1);  /* 0x001544ac */
int __fastcall sub_60154550(int a1);  /* 0x00154550 */
int __fastcall sub_60154628(int a1, int a2);  /* 0x00154628 */
int __fastcall sub_601549C4(int a1);  /* 0x001549c4 */
int __fastcall sub_60154A5C(int a1);  /* 0x00154a5c */
int __fastcall sub_60154C70(int a1);  /* 0x00154c70 */
int __fastcall sub_60154D7C(int a1, int a2, int a3);  /* 0x00154d7c */
int __fastcall sub_60154F48(int a1, int a2, int a3);  /* 0x00154f48 */
int __fastcall sub_60155120(int a1, int a2, int a3, int a4, float *a5);  /* 0x00155120 */
bool __fastcall sub_60155324(int a1);  /* 0x00155324 */
bool __fastcall sub_60155344(int a1);  /* 0x00155344 */
int __fastcall sub_60155374(int a1, float *a2);  /* 0x00155374 */
int __fastcall sub_601557EC(int a1, float *a2);  /* 0x001557ec */
int __fastcall sub_601559B8(int a1, int a2, int a3);  /* 0x001559b8 */
int __fastcall sub_60155A60(int a1, int a2, float *a3, int a4);  /* 0x00155a60 */
int __fastcall sub_60155B0C(int a1, float *a2, _DWORD *a3, int a4);  /* 0x00155b0c */
int __fastcall sub_60155C38(int a1, int a2, _DWORD *a3, int a4);  /* 0x00155c38 */
int __fastcall sub_60155D68(int a1, float *a2, float *a3, int a4, _DWORD *a5);  /* 0x00155d68 */
int __fastcall sub_60155E34(int a1, int a2);  /* 0x00155e34 */
int __fastcall sub_60155E54(int a1, int a2);  /* 0x00155e54 */
int __fastcall sub_60155E7C(int a1, float *a2, _DWORD *a3);  /* 0x00155e7c */
bool __fastcall sub_60155F54(int a1, int a2);  /* 0x00155f54 */
int __fastcall sub_60155F6C(int a1, float *a2, _DWORD *a3);  /* 0x00155f6c */
bool __fastcall sub_60156030(int a1, int a2);  /* 0x00156030 */
int __fastcall sub_60156048(int a1, int a2, _DWORD *a3, float *a4);  /* 0x00156048 */
int __fastcall sub_601560F0(int a1);  /* 0x001560f0 */
int __fastcall sub_60156144(int a1);  /* 0x00156144 */
int __fastcall sub_601561AC(int a1, int a2, int a3);  /* 0x001561ac */
bool __fastcall sub_60156220(int a1, int a2);  /* 0x00156220 */
int __fastcall sub_60156394(int a1, int a2, int a3);  /* 0x00156394 */
bool __fastcall sub_60157050(int a1, int a2);  /* 0x00157050 */
int __fastcall CircularCollider_init(int a1, int a2);  /* 0x001571b0 */
int __fastcall CircularCollider_initImpl(int a1, _DWORD *a2, int a3);  /* 0x00157200 */
int __fastcall sub_601573D4(_DWORD *a1, int a2, int a3, int a4, int a5);  /* 0x001573d4 */
int __fastcall CircularCollider_vf18(int a1);  /* 0x00157444 */
int __fastcall CircularCollider_execute(int a1);  /* 0x00157450 */
int __fastcall CircularCollider_vf20(int a1, int a2, _BYTE *a3, _DWORD *a4, int a5, int a6);  /* 0x001575e8 */
bool __fastcall CircularCollider_vf24(_DWORD *a1, _BYTE *a2, float *a3, float *a4, unsigned int a5, _DWORD *a6);  /* 0x00157944 */
int __fastcall sub_60157A48(int a1, int a2, float *a3, float *a4, int a5, int a6);  /* 0x00157a48 */
int __fastcall sub_60157D3C(int a1, int a2, int a3, float *a4, int a5, int a6);  /* 0x00157d3c */
bool __fastcall CircularCollider_vf28(int a1, bool *a2, float *a3);  /* 0x00157f64 */
int __fastcall CircularCollider_vf2C(int a1, _DWORD *a2);  /* 0x00158088 */
int __fastcall CircularCollider_vf30(_DWORD *a1);  /* 0x0015809c */
int __fastcall CircularCollider_vf34(int result);  /* 0x001580d4 */
bool __fastcall CircularCollider_vf3C(int a1, float *a2);  /* 0x001581f8 */
int __fastcall sub_601582D8(int result, int a2, unsigned int a3);  /* 0x001582d8 */
int __fastcall CircularCollider_dtorFree(struct sead_IDisposer *a1);  /* 0x001585dc */
bool __fastcall CircularCollider_checkRTTI(int a1, int a2);  /* 0x001585ec */
bool __fastcall CircularCollider_vf10(int a1, int a2, char a3);  /* 0x00158760 */
int __fastcall CircularCollider_vf14(int a1, int a2);  /* 0x00158798 */
bool __fastcall sub_601587D0(int a1, unsigned __int16 *a2);  /* 0x001587d0 */
bool __fastcall sub_601587E4(int a1, int a2);  /* 0x001587e4 */
int __fastcall sub_601587F8(int a1, int a2);  /* 0x001587f8 */
unsigned int __fastcall sub_60158808(int a1, int a2);  /* 0x00158808 */
int __fastcall sub_60158830(int a1, int a2);  /* 0x00158830 */
int __fastcall sub_60158858(int a1, int a2);  /* 0x00158858 */
int __fastcall sub_60158880(int a1, int a2);  /* 0x00158880 */
int __fastcall ActiveCollider_ctor(int a1);  /* 0x00158c7c */
void __fastcall ActiveCollider_dtor(struct sead_IDisposer *a1);  /* 0x00158cf8 */
int __fastcall ActiveCollider_dtorFree(struct sead_IDisposer *a1);  /* 0x00158d54 */
void __fastcall ActiveCollider_reset(_DWORD *a1);  /* 0x00158db4 */
int __fastcall ActiveCollider_init2(int a1, int a2, int *a3, unsigned __int8 *a4, int a5);  /* 0x00158ebc */
int __fastcall ActiveCollider_init3(int a1, int a2, int *a3, _BYTE *a4, int a5, int a6);  /* 0x00158edc */
int __fastcall sub_60158F04(int a1, int a2);  /* 0x00158f04 */
int __fastcall sub_60158FA8(int a1, int a2);  /* 0x00158fa8 */
int __fastcall sub_6015907C(int a1, int a2);  /* 0x0015907c */
int __fastcall sub_6015913C(int a1, int a2);  /* 0x0015913c */
bool __fastcall ActiveCollider_check5C(int a1, int a2);  /* 0x001591fc */
int __fastcall sub_601592A4(int a1, float *a2);  /* 0x001592a4 */
bool __fastcall sub_60159438(int a1, float *a2);  /* 0x00159438 */
bool __fastcall ActiveCollider_doOverlapMaybe(int a1, int a2);  /* 0x001597e8 */
int __fastcall sub_60159A34(int a1, int a2, float *a3);  /* 0x00159a34 */
int __fastcall sub_60159C30(int a1, int a2, float *a3);  /* 0x00159c30 */
unsigned int __fastcall sub_60159E78(int a1, int a2, float *a3);  /* 0x00159e78 */
int __fastcall sub_6015A300(int a1, int a2, float *a3);  /* 0x0015a300 */
int __fastcall sub_6015A5E8(int a1, int a2, float *a3);  /* 0x0015a5e8 */
bool __fastcall sub_6015A8D0(int *a1, _DWORD *a2, _DWORD *a3, char a4);  /* 0x0015a8d0 */
int __fastcall sub_6015A964(int *a1, _DWORD *a2, int *a3);  /* 0x0015a964 */
bool __fastcall sub_6015A9BC(_DWORD *a1, int a2);  /* 0x0015a9bc */
bool __fastcall sub_6015A9F4(float *a1, float *a2);  /* 0x0015a9f4 */
int __fastcall sub_6015AB38(float *a1);  /* 0x0015ab38 */
bool __fastcall sub_6015ABF4(float *a1, float *a2);  /* 0x0015abf4 */
int __fastcall sub_6015AD30(float *a1);  /* 0x0015ad30 */
int __fastcall sub_6015AE28(struct sead_IDisposer *a1);  /* 0x0015ae28 */
int __fastcall ActiveColldierMgr_removeFromCreateList(int result, int a2);  /* 0x0015b0e4 */
bool __fastcall ActiveColliderMgr_isInActiveList(int a1, int a2);  /* 0x0015b178 */
int __fastcall ActiveColliderMgr_inserBack(int result, int a2);  /* 0x0015b1fc */
int __fastcall ActiveColliderMgr_remove(int result, int a2);  /* 0x0015b37c */
void __fastcall ActiveColliderMgr_addToCreateList(int a1, int a2);  /* 0x0015b3f0 */
bool __fastcall ActiveColliderMgr_isInCreateList(int a1, int a2);  /* 0x0015b454 */
int __fastcall ActiveColldierMgr_removeFromList3(int result, int a2);  /* 0x0015b48c */
int __fastcall sub_6015B918(_DWORD *a1, float *a2);  /* 0x0015b918 */
int __fastcall ActiveColliderMgr_insertFront(int result, int a2);  /* 0x0015bb4c */
int __fastcall ActiveColliderMgr_vf10(int result);  /* 0x0015bb80 */
int __fastcall sub_6015BBD4(int a1, int a2, int a3);  /* 0x0015bbd4 */
int __fastcall sub_6015BC8C(int a1, int a2, int a3);  /* 0x0015bc8c */
int __fastcall sub_6015BD44(int a1, int a2, int a3);  /* 0x0015bd44 */
int __fastcall sub_6015BD60(int a1, int a2, int a3);  /* 0x0015bd60 */
int __fastcall sub_6015BDB8(int a1, int a2);  /* 0x0015bdb8 */
int __fastcall sub_6015BE08(int a1, _DWORD *a2, int a3);  /* 0x0015be08 */
int __fastcall sub_6015BFD8(int a1);  /* 0x0015bfd8 */
int __fastcall sub_6015BFE4(float *a1, int a2, int a3, int a4);  /* 0x0015bfe4 */
int __fastcall sub_6015C120(int a1, int a2, _BYTE *a3, int a4, float *a5, int a6);  /* 0x0015c120 */
int __fastcall sub_6015C588(int result, float *a2, float *a3);  /* 0x0015c588 */
int __fastcall sub_6015C6B0(int a1, bool *a2, float *a3);  /* 0x0015c6b0 */
int __fastcall sub_6015C74C(int a1, _DWORD *a2);  /* 0x0015c74c */
int __fastcall sub_6015C760(_DWORD *a1);  /* 0x0015c760 */
int __fastcall sub_6015C790(int result);  /* 0x0015c790 */
bool __fastcall sub_6015C8BC(int a1, float *a2);  /* 0x0015c8bc */
int __fastcall sub_6015C948(struct sead_IDisposer *a1);  /* 0x0015c948 */
bool __fastcall sub_6015C958(int a1, int a2);  /* 0x0015c958 */
bool __fastcall sub_6015CACC(int a1, int a2, char a3);  /* 0x0015cacc */
int __fastcall sub_6015CB04(int a1, int a2);  /* 0x0015cb04 */
int __fastcall sub_6015CB58(int a1, unsigned __int16 *a2);  /* 0x0015cb58 */
int __fastcall sub_6015CB9C(int a1, int a2, _BYTE *a3, __int64 *a4);  /* 0x0015cb9c */
int __fastcall sub_6015CD5C(int a1, int a2, int a3, int a4);  /* 0x0015cd5c */
int __fastcall sub_6015CEA0(int a1, int a2);  /* 0x0015cea0 */
int __fastcall sub_6015CEE4(int a1, int a2);  /* 0x0015cee4 */
int __fastcall sub_6015CF7C(int a1, int a2);  /* 0x0015cf7c */
int __fastcall sub_6015D014(int a1, int a2);  /* 0x0015d014 */
int __fastcall sub_6015D0AC(int result);  /* 0x0015d0ac */
int __fastcall TileCheck_ctor(int result, int a2);  /* 0x0015d0ec */
int __fastcall sub_6015D144(int result, int a2);  /* 0x0015d144 */
int __fastcall sub_6015D180(int a1, int a2);  /* 0x0015d180 */
int __fastcall sub_6015D2DC(int a1, int a2, float *a3, float *a4, int a5);  /* 0x0015d2dc */
int __fastcall sub_6015D6F0(int a1, int a2, float *a3, float *a4, int a5);  /* 0x0015d6f0 */
int __fastcall TileCheck_check(int a1, int a2, float *a3, float *a4, int a5);  /* 0x0015da30 */
int __fastcall sub_6015DBD8(int a1, _DWORD *a2, float *a3);  /* 0x0015dbd8 */
int __fastcall sub_6015DD58(int a1, _DWORD *a2, float *a3);  /* 0x0015dd58 */
int __fastcall sub_6015DF58(int a1, int a2, int a3);  /* 0x0015df58 */
int __fastcall ColliderNode_ctor(int a1);  /* 0x0015df90 */
int __fastcall sub_6015DFC0(int a1);  /* 0x0015dfc0 */
void __fastcall SolidOnTopCollider_dtor(struct sead_IDisposer *a1);  /* 0x0015e124 */
int __fastcall SolidOnTopCollider_dtorFree(struct sead_IDisposer *a1);  /* 0x0015e128 */
int __fastcall SolidOnTopCollider_init2(_DWORD *a1, int a2, int a3, signed int a4, int a5);  /* 0x0015e138 */
int __fastcall SolidOnTopCollider_init(int a1, int a2, int a3);  /* 0x0015e3a0 */
int __fastcall SolidOnTopCollider_initImpl(_DWORD *a1, _DWORD *a2, _DWORD *a3);  /* 0x0015e3f0 */
int __fastcall sub_6015E4F0(int a1);  /* 0x0015e4f0 */
int __fastcall SolidOnTopCollider_vf18(int a1);  /* 0x0015e824 */
int __fastcall SolidOnTopCollider_vf30(_DWORD *a1);  /* 0x0015e830 */
int __fastcall SolidOnTopCollider_vf38(int result, _QWORD *a2);  /* 0x0015ea70 */
int __fastcall SolidOnTopCollider_execute(int a1);  /* 0x0015eab4 */
int __fastcall SolidOnTopCollider_vf20(int a1, int a2, int a3, float *a4, float *a5, unsigned __int8 a6);  /* 0x0015eb28 */
bool __fastcall sub_6015EE3C(int a1, float *a2, float *a3, int a4, int a5);  /* 0x0015ee3c */
unsigned int __fastcall sub_6015F088(int a1, float *a2, int a3);  /* 0x0015f088 */
unsigned int __fastcall sub_6015F1FC(int a1, float *a2, int a3);  /* 0x0015f1fc */
bool __fastcall SolidOnTopCollider_vf24(_DWORD *a1, int a2, float *a3, float *a4, unsigned int a5, int a6);  /* 0x0015f904 */
int __fastcall SolidOnTopCollider_vf2C(int a1, _DWORD *a2);  /* 0x0015fbd0 */
int __fastcall sub_6015FBE4(int result, int a2, unsigned int a3);  /* 0x0015fbe4 */
bool __fastcall SolidOnTopCollider_checkRTTI(int a1, int a2);  /* 0x0015fe58 */
void __fastcall ColliderBase_dtor(struct sead_IDisposer *a1);  /* 0x001600e4 */
int __fastcall sub_601601B8(_DWORD *a1);  /* 0x001601b8 */
int __fastcall ColliderBase_dtorFree(struct sead_IDisposer *a1);  /* 0x00160200 */
int __fastcall sub_60160210(int result, int a2);  /* 0x00160210 */
int __fastcall sub_6016024C(int result, int a2);  /* 0x0016024c */
int __fastcall sub_60160288(int result, int a2);  /* 0x00160288 */
int __fastcall sub_601602C0(int result, int a2);  /* 0x001602c0 */
int __fastcall sub_601602F8(int result, int a2);  /* 0x001602f8 */
int __fastcall sub_60160334(int result, int a2);  /* 0x00160334 */
int __fastcall sub_60160370(int result, int a2);  /* 0x00160370 */
int __fastcall sub_601603AC(int result, int a2);  /* 0x001603ac */
int __fastcall sub_601603E8(int result);  /* 0x001603e8 */
bool __fastcall sub_60160434(int a1, float *a2, float *a3);  /* 0x00160434 */
int __fastcall ColliderBase_setType(__int64 *a1, int a2);  /* 0x00160490 */
__int64 __fastcall sub_601604FC(int a1, __int64 *a2);  /* 0x001604fc */
int __fastcall ColliderBase_setSolidity(__int64 *a1, int a2);  /* 0x00160548 */
int __fastcall ColliderBase_setSurfaceType(__int64 *a1, int a2);  /* 0x001605bc */
int __fastcall sub_60160630(__int64 *a1, int a2);  /* 0x00160630 */
int __fastcall sub_601606A4(__int64 *a1, int a2);  /* 0x001606a4 */
int __fastcall sub_60160718(int result, float *a2);  /* 0x00160718 */
int __fastcall sub_601607F0(int result, float *a2);  /* 0x001607f0 */
int __fastcall sub_60160948(_DWORD *a1);  /* 0x00160948 */
int __fastcall sub_601609C4(int a1, _DWORD *a2, unsigned int a3);  /* 0x001609c4 */
int __fastcall sub_60160BD8(int a1, int a2, int a3, int a4);  /* 0x00160bd8 */
int __fastcall sub_60160F58(int a1, float *a2, int a3, char a4);  /* 0x00160f58 */
int __fastcall sub_6016107C(int a1, _DWORD *a2, int a3);  /* 0x0016107c */
int __fastcall sub_6016118C(int a1, _DWORD *a2, int a3);  /* 0x0016118c */
int __fastcall sub_60161340(int a1, _DWORD *a2, int a3);  /* 0x00161340 */
int __fastcall sub_601614BC(int a1);  /* 0x001614bc */
int __fastcall sub_601615A0(int a1, int a2, int a3);  /* 0x001615a0 */
int __fastcall sub_601616E8(int a1, float *a2);  /* 0x001616e8 */
bool __fastcall ColliderBase_checkRTTI(int a1, int a2);  /* 0x0016188c */
int __fastcall sub_601619C8(int result, int a2);  /* 0x001619c8 */
int __fastcall sub_60161A3C(int result, int a2);  /* 0x00161a3c */
int __fastcall sub_60161A70(int result, int a2);  /* 0x00161a70 */
int __fastcall sub_60161AA4(int result);  /* 0x00161aa4 */
void __fastcall ShapedCollider_dtor(struct sead_IDisposer *a1);  /* 0x00161bd8 */
int __fastcall ShapedCollider_dtorFree(struct sead_IDisposer *a1);  /* 0x00161bdc */
int __fastcall sub_60161BEC(_DWORD *a1, int a2, int a3, signed int a4, int a5);  /* 0x00161bec */
int __fastcall sub_60161E18(int a1, int a2, int a3, int a4);  /* 0x00161e18 */
int __fastcall sub_60161E68(int a1, _DWORD *a2, _DWORD *a3, int a4);  /* 0x00161e68 */
int __fastcall ShapedCollider_vf18(int a1);  /* 0x00161f5c */
int __fastcall ShapedCollider_vf30(_DWORD *a1);  /* 0x00161f68 */
int __fastcall ShapedCollider_vf34(int a1);  /* 0x00161ff8 */
unsigned int __fastcall ShapedCollider_vf40(int a1);  /* 0x00162170 */
int __fastcall ShapedCollider_vf38(int result, _QWORD *a2);  /* 0x001624ac */
int __fastcall ShapedCollider_vf3C(int a1, float *a2);  /* 0x001624f0 */
int __fastcall ShapedCollider_execute(_DWORD *a1, int a2, int a3, int a4);  /* 0x00162638 */
int __fastcall ShapedCollider_vf20(int a1, int a2, _BYTE *a3, int a4, float *a5, unsigned __int8 a6);  /* 0x001626b8 */
bool __fastcall ShapedCollider_vf24(int a1, int a2, float *a3, int a4, unsigned int a5, _DWORD *a6);  /* 0x00162a98 */
int __fastcall sub_60162BF0(int a1, int a2, float *a3, float *a4, int a5, int a6);  /* 0x00162bf0 */
int __fastcall sub_60163440(int a1, int a2, int a3, _DWORD *a4, int a5, int a6);  /* 0x00163440 */
int __fastcall sub_6016377C(int a1, int a2, int a3, int a4);  /* 0x0016377c */
int __fastcall sub_601638EC(int a1, int a2, float *a3, float *a4, int a5, float *a6);  /* 0x001638ec */
int __fastcall sub_601644C4(int a1, int a2, int a3, float *a4, int a5, int a6);  /* 0x001644c4 */
int __fastcall ShapedCollider_vf28(int a1, _BYTE *a2, float *a3);  /* 0x00164c1c */
int __fastcall ShapedCollider_vf2C(int a1, _DWORD *a2);  /* 0x00164ddc */
int __fastcall sub_60164DF0(int result, int a2, unsigned int a3);  /* 0x00164df0 */
bool __fastcall ShapedCollider_checkRTTI(int a1, int a2);  /* 0x001650b8 */
int __fastcall ShapedCollider_init(int a1, int a2, _DWORD *a3);  /* 0x0016522c */
void __fastcall SwingingCollider_dtor(struct sead_IDisposer *a1);  /* 0x001653ec */
int __fastcall SwingingCollider_dtorFree(struct sead_IDisposer *a1);  /* 0x00165424 */
int __fastcall sub_60165460(_DWORD *a1, int a2, int a3, signed int a4, int a5);  /* 0x00165460 */
int __fastcall sub_60165590(_DWORD *a1, _DWORD *a2, _DWORD *a3, int a4);  /* 0x00165590 */
int __fastcall sub_601656B0(int result);  /* 0x001656b0 */
int __fastcall sub_601658F0(int result, int a2);  /* 0x001658f0 */
int __fastcall sub_60165934(int result, int a2);  /* 0x00165934 */
int __fastcall SwingingCollider_vf18(int a1);  /* 0x00165978 */
int __fastcall SwingingCollider_vf30(_DWORD *a1);  /* 0x00165984 */
int __fastcall SwingingCollider_vf34(int result);  /* 0x001659e4 */
int __fastcall SwingingCollider_vf3C(int a1, float *a2);  /* 0x00165be0 */
int __fastcall SwingingCollider_execute(_DWORD *a1, int a2, int a3, int a4);  /* 0x00165cc4 */
int __fastcall sub_60165D48(int result);  /* 0x00165d48 */
int __fastcall SwingingCollider_vf24(int a1, int a2, int a3, float *a4, int a5, float *a6);  /* 0x00165f80 */
int __fastcall SwingingCollider_vf28(int a1, _BYTE *a2, float *a3);  /* 0x00166490 */
int __fastcall SwingingCollider_vf2C(int a1, _DWORD *a2);  /* 0x0016660c */
bool __fastcall SwingingCollider_checkRTTI(int a1, int a2);  /* 0x00166620 */
int __fastcall sub_601667EC(int result, int a2);  /* 0x001667ec */
int __fastcall sub_60166860(int result, int a2);  /* 0x00166860 */
int __fastcall sub_60166894(int result, int a2);  /* 0x00166894 */
int __fastcall sub_601668C8(int result);  /* 0x001668c8 */
bool __fastcall sub_601668F4(int a1, _DWORD *a2);  /* 0x001668f4 */
bool __fastcall sub_60166914(int a1, int a2);  /* 0x00166914 */
int __fastcall sub_60166AE0(float *a1, float *a2, int *a3, int *a4);  /* 0x00166ae0 */
int __fastcall sub_60166BF0(float *a1, float *a2, float *a3);  /* 0x00166bf0 */
int __fastcall sub_60166CF0(float *a1, float *a2, float *a3);  /* 0x00166cf0 */
int __fastcall sub_60166DF0(float *a1, float *a2, int a3);  /* 0x00166df0 */
unsigned int __fastcall sub_60166E60(unsigned int result, float *a2, int a3, int a4, int a5);  /* 0x00166e60 */
bool __fastcall sub_6016717C(float *a1, float *a2);  /* 0x0016717c */
int __fastcall sub_60167218(float *a1, float *a2, float *a3);  /* 0x00167218 */
int __fastcall RectCollider_vf28(int a1, _BYTE *a2, float *a3);  /* 0x001672fc */
int __fastcall sub_6016753C(struct sead_IDisposer *a1);  /* 0x0016753c */
int __fastcall sub_601675C0(int a1);  /* 0x001675c0 */
int __fastcall sub_60167638(int a1);  /* 0x00167638 */
int __fastcall sub_601679DC(int a1, float *a2, int a3, _BYTE *a4);  /* 0x001679dc */
int __fastcall sub_60167C94(int a1, float *a2, int a3, _BYTE *a4);  /* 0x00167c94 */
int __fastcall sub_60167E8C(int a1, float *a2, int a3, _BYTE *a4);  /* 0x00167e8c */
int __fastcall sub_6016800C(struct sead_IDisposer *a1);  /* 0x0016800c */
bool __fastcall sub_6016801C(int a1, int a2);  /* 0x0016801c */
bool __fastcall sub_60168120(int a1);  /* 0x00168120 */
int __fastcall sub_60168308(int a1, int a2);  /* 0x00168308 */
int __fastcall sub_601683A0(struct sead_IDisposer *a1);  /* 0x001683a0 */
bool __fastcall sub_601683B0(int a1, int a2);  /* 0x001683b0 */
int __fastcall sub_601684B4(_DWORD *a1);  /* 0x001684b4 */
int __fastcall sub_60168574(int result);  /* 0x00168574 */
bool __fastcall sub_601685E4(int a1, _DWORD *a2);  /* 0x001685e4 */
bool __fastcall sub_6016860C(int a1, int a2);  /* 0x0016860c */
int __fastcall sub_60168634(int a1, _DWORD *a2);  /* 0x00168634 */
int __fastcall sub_601686E4(int a1);  /* 0x001686e4 */
bool __fastcall sub_601687A8(Actor *a1);  /* 0x001687a8 */
int __fastcall sub_601687DC(int result, int a2, int a3);  /* 0x001687dc */
int __fastcall sub_601687F4(float *a1, float *a2, float *a3);  /* 0x001687f4 */
int __fastcall sub_60168910(float *a1, float *a2, float *a3);  /* 0x00168910 */
int __fastcall sub_601689FC(int a1, float *a2, float *a3, int a4);  /* 0x001689fc */
unsigned int __fastcall sub_60168B8C(int a1, int a2, int a3);  /* 0x00168b8c */
unsigned int __fastcall sub_60168C9C(int a1, _DWORD *a2, int a3);  /* 0x00168c9c */
int __fastcall sub_60168D04(int a1);  /* 0x00168d04 */
int __fastcall sub_60168DF8(int result);  /* 0x00168df8 */
int __fastcall sub_60168EA0(int result);  /* 0x00168ea0 */
int __fastcall sub_60169030(int a1, float *a2, float *a3, unsigned int a4);  /* 0x00169030 */
int __fastcall sub_601691B0(int result);  /* 0x001691b0 */
int __fastcall sub_601691C0(int a1);  /* 0x001691c0 */
bool __fastcall sub_6016921C(int a1, int a2);  /* 0x0016921c */
int __fastcall sub_60169390(_DWORD *a1);  /* 0x00169390 */
int __fastcall sub_601693A0(int a1);  /* 0x001693a0 */
int __fastcall sub_601693C0(int a1);  /* 0x001693c0 */
int __fastcall sub_601693DC(int a1, int a2, int a3, int a4);  /* 0x001693dc */
int __fastcall sub_60169544(_DWORD *a1);  /* 0x00169544 */
int __fastcall sub_601698C4(int a1, _DWORD *a2);  /* 0x001698c4 */
int __fastcall sub_60169A30(_DWORD *a1);  /* 0x00169a30 */
int __fastcall sub_60169CDC(int a1, _DWORD *a2);  /* 0x00169cdc */
int __fastcall sub_60169DA8(int a1, int a2);  /* 0x00169da8 */
int __fastcall sub_60169E40(int a1, int a2);  /* 0x00169e40 */
int __fastcall sub_60169ED8(int a1, int a2);  /* 0x00169ed8 */
int __fastcall sub_60169FC4(struct sead_IDisposer *a1);  /* 0x00169fc4 */
int __fastcall sub_6016A024(int a1);  /* 0x0016a024 */
int __fastcall sub_6016A15C(_DWORD *a1, int a2);  /* 0x0016a15c */
int __fastcall sub_6016A300(_DWORD *a1);  /* 0x0016a300 */
int __fastcall sub_6016AB38(int a1);  /* 0x0016ab38 */
int __fastcall sub_6016AD7C(_DWORD *a1, unsigned int a2);  /* 0x0016ad7c */
int __fastcall sub_6016B024(int a1, int a2);  /* 0x0016b024 */
int __fastcall sub_6016B0A0(int a1);  /* 0x0016b0a0 */
int __fastcall sub_6016B0C8(int a1, _DWORD *a2);  /* 0x0016b0c8 */
int __fastcall sub_6016B19C(int a1, _DWORD *a2);  /* 0x0016b19c */
int __fastcall sub_6016B4B8(int a1, _DWORD *a2);  /* 0x0016b4b8 */
int __fastcall sub_6016B588(int a1, _DWORD *a2);  /* 0x0016b588 */
int __fastcall sub_6016B670(int a1);  /* 0x0016b670 */
int __fastcall sub_6016BB6C(int result, int a2, _DWORD *a3, int a4, char a5, int a6);  /* 0x0016bb6c */
int __fastcall sub_6016BCB8(_DWORD *a1);  /* 0x0016bcb8 */
int __fastcall sub_6016BD0C(int a1);  /* 0x0016bd0c */
int __fastcall sub_6016C320(int a1);  /* 0x0016c320 */
int __fastcall sub_6016C608(_DWORD *a1);  /* 0x0016c608 */
int __fastcall sub_6016C7D4(int a1);  /* 0x0016c7d4 */
int __fastcall sub_6016C978(int a1, int a2, int a3);  /* 0x0016c978 */
int __fastcall sub_6016CC0C(int a1, int a2, int a3);  /* 0x0016cc0c */
int __fastcall sub_6016CDA0(int a1, int a2, int a3);  /* 0x0016cda0 */
int __fastcall sub_6016CF90(int a1, int a2, int a3);  /* 0x0016cf90 */
int __fastcall sub_6016D3EC(int a1, int a2, int a3);  /* 0x0016d3ec */
int __fastcall sub_6016D574(int a1, int a2, int a3);  /* 0x0016d574 */
int __fastcall sub_6016D6F0(int a1, int a2, int a3);  /* 0x0016d6f0 */
int __fastcall sub_6016D938(int a1, int a2, int a3);  /* 0x0016d938 */
int __fastcall sub_6016DB58(int a1, int a2, int a3);  /* 0x0016db58 */
int __fastcall sub_6016DCF4(int a1, int a2, int a3);  /* 0x0016dcf4 */
int __fastcall sub_6016DE7C(int a1);  /* 0x0016de7c */
int __fastcall sub_6016E18C(int a1);  /* 0x0016e18c */
int __fastcall sub_6016E33C(int a1);  /* 0x0016e33c */
int __fastcall sub_6016E514(int a1);  /* 0x0016e514 */
int __fastcall sub_6016E884(_DWORD *a1);  /* 0x0016e884 */
int __fastcall sub_6016E8EC(int result);  /* 0x0016e8ec */
int __fastcall sub_6016E8F8(int result);  /* 0x0016e8f8 */
int __fastcall sub_6016E918(int a1);  /* 0x0016e918 */
int __fastcall sub_6016ED9C(_DWORD *a1);  /* 0x0016ed9c */
int __fastcall sub_6016EE24(int result, int a2, int a3);  /* 0x0016ee24 */
int __fastcall sub_6016EE30(int a1, int a2, int a3);  /* 0x0016ee30 */
int __fastcall sub_6016EE88(_DWORD *a1);  /* 0x0016ee88 */
int __fastcall sub_6016EEE8(int result, _DWORD *a2, int a3);  /* 0x0016eee8 */
int __fastcall sub_6016EF74(int result);  /* 0x0016ef74 */
int __fastcall sub_6016EFD0(int result, _DWORD *a2, int a3, int a4, char a5);  /* 0x0016efd0 */
int __fastcall sub_6016F038(int result, _DWORD *a2, _DWORD *a3, int a4);  /* 0x0016f038 */
int __fastcall sub_6016F0B8(int result, float *a2, int a3);  /* 0x0016f0b8 */
int __fastcall sub_6016F160(int result);  /* 0x0016f160 */
int __fastcall sub_6016F204(int result, int a2, int a3, int a4);  /* 0x0016f204 */
int __fastcall sub_6016F2A0(int result, int a2);  /* 0x0016f2a0 */
int __fastcall sub_6016F2B8(int result, int a2);  /* 0x0016f2b8 */
int __fastcall sub_6016F31C(int a1);  /* 0x0016f31c */
int __fastcall sub_6016F614(int a1);  /* 0x0016f614 */
int __fastcall sub_6016F760(int a1);  /* 0x0016f760 */
int __fastcall sub_6016FF38(int a1);  /* 0x0016ff38 */
int __fastcall sub_60170034(int a1);  /* 0x00170034 */
int __fastcall sub_601705D8(int a1);  /* 0x001705d8 */
int __fastcall sub_601705E0(int result);  /* 0x001705e0 */
int __fastcall sub_601709B4(int a1, int a2);  /* 0x001709b4 */
int __fastcall sub_60170AB4(_DWORD *a1);  /* 0x00170ab4 */
int __fastcall sub_60170B5C(unsigned __int8 *a1);  /* 0x00170b5c */
int __fastcall sub_60170BC0(int result, int a2, int a3);  /* 0x00170bc0 */
int __fastcall sub_60170BD8(int a1, unsigned int *a2);  /* 0x00170bd8 */
int __fastcall sub_6017113C(int a1, _DWORD *a2, unsigned int *a3);  /* 0x0017113c */
int __fastcall sub_601719B8(int a1, _DWORD *a2);  /* 0x001719b8 */
int __fastcall sub_60171B7C(int a1, _DWORD *a2, unsigned int *a3);  /* 0x00171b7c */
int __fastcall sub_601721F0(int result);  /* 0x001721f0 */
int __fastcall sub_601721FC(int a1);  /* 0x001721fc */
int __fastcall sub_60172250(int a1);  /* 0x00172250 */
int __fastcall sub_6017226C(int a1, _DWORD *a2);  /* 0x0017226c */
unsigned int __fastcall sub_601723B8(int a1);  /* 0x001723b8 */
int __fastcall sub_60172994(int result);  /* 0x00172994 */
int __fastcall sub_601729E8(int a1);  /* 0x001729e8 */
int __fastcall sub_601729F4(int a1);  /* 0x001729f4 */
int __fastcall sub_60172A00(int *a1);  /* 0x00172a00 */
int __fastcall sub_60172B24(struct sead_IDisposer *a1);  /* 0x00172b24 */
int __fastcall sub_60172FB8(int a1);  /* 0x00172fb8 */
float __fastcall sub_6017311C(float *a1);  /* 0x0017311c */
int __fastcall sub_60173408(int a1, float *a2, float *a3);  /* 0x00173408 */
int __fastcall sub_6017345C(int a1, int a2);  /* 0x0017345c */
int __fastcall sub_60173634(_DWORD *a1, unsigned int *a2);  /* 0x00173634 */
int __fastcall Actor_CourseSelectocastle_build(int a1);  /* 0x001737e0 */
int __fastcall sub_6017381C(int a1);  /* 0x0017381c */
int __fastcall sub_60174204(int a1);  /* 0x00174204 */
int __fastcall sub_6017438C(int a1);  /* 0x0017438c */
int __fastcall sub_601743BC(int a1, int a2, int a3, int a4);  /* 0x001743bc */
int __fastcall sub_601743E0(int a1);  /* 0x001743e0 */
bool __fastcall sub_60174730(int a1, int a2);  /* 0x00174730 */
int __fastcall sub_60174834(_DWORD *a1);  /* 0x00174834 */
bool __fastcall sub_60174850(int a1);  /* 0x00174850 */
int __fastcall sub_60174A38(int a1, int a2);  /* 0x00174a38 */
int __fastcall sub_60174BE4(int result);  /* 0x00174be4 */
int __fastcall sub_60174BFC(_DWORD *a1);  /* 0x00174bfc */
int __fastcall sub_60174C98(int a1);  /* 0x00174c98 */
int __fastcall sub_60174F3C(int a1);  /* 0x00174f3c */
int __fastcall sub_60174F74(int result);  /* 0x00174f74 */
int __fastcall sub_60174FBC(int a1);  /* 0x00174fbc */
int __fastcall sub_60175228(int result);  /* 0x00175228 */
int __fastcall sub_60175294(int result);  /* 0x00175294 */
int __fastcall sub_6017531C(int a1);  /* 0x0017531c */
int __fastcall sub_60175320(int result);  /* 0x00175320 */
int __fastcall sub_60175328(_BYTE *a1);  /* 0x00175328 */
int __fastcall sub_601753B4(int a1);  /* 0x001753b4 */
int __fastcall sub_601753F4(int result);  /* 0x001753f4 */
int __fastcall sub_60175408(_DWORD *a1);  /* 0x00175408 */
int __fastcall sub_601755F4(_DWORD *a1);  /* 0x001755f4 */
int __fastcall sub_6017563C(_DWORD *a1);  /* 0x0017563c */
int __fastcall sub_60175660(int a1);  /* 0x00175660 */
int __fastcall sub_601756D0(_DWORD *a1);  /* 0x001756d0 */
int __fastcall sub_60175700(int result);  /* 0x00175700 */
int __fastcall sub_60175720(int a1);  /* 0x00175720 */
int __fastcall sub_6017574C(_DWORD *a1);  /* 0x0017574c */
int __fastcall sub_6017577C(int result);  /* 0x0017577c */
int __fastcall sub_60175788(_DWORD *a1);  /* 0x00175788 */
int __fastcall sub_60175808(int result);  /* 0x00175808 */
int __fastcall sub_601758E8(_BYTE *a1);  /* 0x001758e8 */
int __fastcall sub_60175900(int a1);  /* 0x00175900 */
int __fastcall sub_601759F4(_DWORD *a1);  /* 0x001759f4 */
int __fastcall sub_60175C54(int a1);  /* 0x00175c54 */
int __fastcall sub_60175EDC(int a1);  /* 0x00175edc */
int __fastcall sub_601760B0(int a1, int a2, int a3, int a4);  /* 0x001760b0 */
int __fastcall sub_60176120(int result);  /* 0x00176120 */
int __fastcall sub_60176434(int a1);  /* 0x00176434 */
unsigned int __fastcall sub_601764DC(int a1);  /* 0x001764dc */
int __fastcall sub_6017653C(int a1);  /* 0x0017653c */
bool __fastcall sub_60176548(int a1, int a2);  /* 0x00176548 */
int __fastcall sub_601766B8(_DWORD *a1);  /* 0x001766b8 */
int __fastcall sub_6017672C(int a1);  /* 0x0017672c */
int __fastcall sub_60176750(int a1, int a2);  /* 0x00176750 */
int __fastcall sub_6017677C(int result);  /* 0x0017677c */
int __fastcall sub_60176788(int a1);  /* 0x00176788 */
int __fastcall sub_60176790(int a1);  /* 0x00176790 */
int __fastcall sub_60176798(int a1);  /* 0x00176798 */
int __fastcall sub_601767BC(int a1);  /* 0x001767bc */
bool __fastcall sub_601767E8(int a1);  /* 0x001767e8 */
int __fastcall sub_601769D0(int a1, int a2);  /* 0x001769d0 */
int __fastcall sub_601770A4(struct sead_IDisposer *a1);  /* 0x001770a4 */
int __fastcall sub_60177104(int a1);  /* 0x00177104 */
int __fastcall sub_601774C8(int a1, int a2);  /* 0x001774c8 */
int __fastcall sub_60177510(_DWORD *a1);  /* 0x00177510 */
int __fastcall sub_601779DC(struct sead_IDisposer *a1);  /* 0x001779dc */
int __fastcall sub_60177B88(int a1, int a2, int a3, int a4);  /* 0x00177b88 */
int __fastcall sub_60177E70(int a1, int a2, int a3, int a4);  /* 0x00177e70 */
int __fastcall sub_60177F44(int a1, int a2);  /* 0x00177f44 */
int __fastcall sub_6017833C(int a1, int a2);  /* 0x0017833c */
int __fastcall sub_60178480(int a1, _DWORD *a2);  /* 0x00178480 */
int __fastcall sub_60178558(int a1, unsigned int a2, unsigned int a3);  /* 0x00178558 */
int __fastcall sub_60178694(int a1, unsigned int a2);  /* 0x00178694 */
int __fastcall sub_60178780(int a1, unsigned int a2);  /* 0x00178780 */
int __fastcall sub_60178798(int a1, _DWORD *a2);  /* 0x00178798 */
int __fastcall sub_601788E8(int a1, _DWORD *a2);  /* 0x001788e8 */
int __fastcall sub_601789B8(int a1, _DWORD *a2);  /* 0x001789b8 */
int __fastcall sub_60178CC8(int a1);  /* 0x00178cc8 */
int __fastcall sub_60178CF0(int a1);  /* 0x00178cf0 */
int __fastcall sub_6017A3E0(int a1);  /* 0x0017a3e0 */
int __fastcall sub_6017A600(int a1);  /* 0x0017a600 */
int __fastcall sub_6017A688(int a1, int a2, int a3, int a4);  /* 0x0017a688 */
int __fastcall sub_6017A89C(int a1);  /* 0x0017a89c */
int __fastcall sub_6017B05C(int a1);  /* 0x0017b05c */
bool __fastcall sub_6017B614(int a1, int a2);  /* 0x0017b614 */
int __fastcall sub_6017B71C(_DWORD *a1);  /* 0x0017b71c */
int __fastcall sub_6017B7A0(struct sead_IDisposer *a1);  /* 0x0017b7a0 */
int __fastcall sub_6017B818(int a1);  /* 0x0017b818 */
unsigned int __fastcall sub_6017BE7C(_DWORD *a1, int a2, int a3);  /* 0x0017be7c */
unsigned int __fastcall sub_6017BE9C(int a1);  /* 0x0017be9c */
int __fastcall sub_6017D65C(int a1, _DWORD *a2, int *a3);  /* 0x0017d65c */
int __fastcall sub_6017E728(int a1, _DWORD *a2, int *a3, unsigned int a4);  /* 0x0017e728 */
int __fastcall sub_6017F25C(int a1, _DWORD *a2, int *a3, unsigned int a4);  /* 0x0017f25c */
int __fastcall sub_6018018C(int a1, _DWORD *a2, int *a3, unsigned int a4);  /* 0x0018018c */
int __fastcall sub_60180C24(int a1, int a2, _DWORD *a3);  /* 0x00180c24 */
int __fastcall sub_60180FE8(int a1, int a2, _DWORD *a3);  /* 0x00180fe8 */
int __fastcall sub_60181410(_DWORD *a1, _DWORD *a2, int a3);  /* 0x00181410 */
int __fastcall sub_6018194C(int a1, _DWORD *a2);  /* 0x0018194c */
int __fastcall sub_60181AB4(int a1, _DWORD *a2);  /* 0x00181ab4 */
int __fastcall sub_60181BE0(int a1, _DWORD *a2, int a3);  /* 0x00181be0 */
int __fastcall sub_60181E90(int a1, int a2);  /* 0x00181e90 */
int __fastcall sub_60181FC0(int a1, int a2, _DWORD *a3, _DWORD *a4);  /* 0x00181fc0 */
int __fastcall sub_60182C0C(int a1, int a2, int a3, int a4);  /* 0x00182c0c */
int __fastcall sub_60182E38(int a1, unsigned int a2);  /* 0x00182e38 */
int __fastcall sub_60182E50(int a1, unsigned int a2);  /* 0x00182e50 */
int __fastcall sub_60182E68(int a1, unsigned int a2, unsigned int a3, unsigned int a4);  /* 0x00182e68 */
int __fastcall sub_60182EA8(int a1, unsigned int a2, unsigned int a3);  /* 0x00182ea8 */
int __fastcall sub_60182ED0(int a1, unsigned int a2, unsigned int a3, unsigned int a4);  /* 0x00182ed0 */
int __fastcall sub_60182F10(int a1, int a2, int a3);  /* 0x00182f10 */
int __fastcall sub_60182F24(int a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5);  /* 0x00182f24 */
int __fastcall sub_6018301C(int a1, unsigned int a2, int a3);  /* 0x0018301c */
int __fastcall sub_60183038(int a1, unsigned int a2, int a3);  /* 0x00183038 */
int __fastcall sub_60183054(int a1, unsigned int a2, int a3);  /* 0x00183054 */
int __fastcall sub_60183070(int a1, unsigned int a2, int a3);  /* 0x00183070 */
int __fastcall sub_6018308C(int a1, unsigned int a2);  /* 0x0018308c */
int __fastcall sub_601830AC(int a1, _DWORD *a2, _DWORD *a3);  /* 0x001830ac */
int __fastcall sub_60183600(int a1, unsigned int a2, unsigned int a3);  /* 0x00183600 */
int __fastcall sub_60183634(int a1, unsigned int a2);  /* 0x00183634 */
int __fastcall sub_60183650(int a1, unsigned int a2);  /* 0x00183650 */
int __fastcall sub_60183670(int a1, unsigned int a2, unsigned int a3);  /* 0x00183670 */
int __fastcall sub_60183698(int a1, unsigned int a2, unsigned int a3, unsigned int a4);  /* 0x00183698 */
int __fastcall sub_60183B1C(int a1, _DWORD *a2);  /* 0x00183b1c */
int __fastcall sub_60183BE8(unsigned int a1);  /* 0x00183be8 */
int __fastcall sub_60183E00(int a1, _DWORD *a2);  /* 0x00183e00 */
int __fastcall sub_60183ED0(int a1, _DWORD *a2);  /* 0x00183ed0 */
int __fastcall sub_60183F9C(unsigned int a1);  /* 0x00183f9c */
int __fastcall sub_601841B4(int a1, _DWORD *a2);  /* 0x001841b4 */
int __fastcall sub_60184284(int a1, _DWORD *a2);  /* 0x00184284 */
int __fastcall sub_60184350(unsigned int a1);  /* 0x00184350 */
int __fastcall sub_60184568(int a1, _DWORD *a2);  /* 0x00184568 */
int __fastcall sub_60184638(int a1, _DWORD *a2);  /* 0x00184638 */
int __fastcall sub_60184704(unsigned int a1);  /* 0x00184704 */
int __fastcall sub_6018491C(int a1, _DWORD *a2);  /* 0x0018491c */
int __fastcall sub_601849EC(int a1, _DWORD *a2);  /* 0x001849ec */
int __fastcall sub_60184AC0(int a1, _DWORD *a2);  /* 0x00184ac0 */
int __fastcall sub_60184B90(int a1, _DWORD *a2);  /* 0x00184b90 */
int __fastcall sub_60184C60(int a1, _DWORD *a2);  /* 0x00184c60 */
int __fastcall sub_60184D30(int a1, _DWORD *a2);  /* 0x00184d30 */
int __fastcall sub_60184E00(int a1, _DWORD *a2);  /* 0x00184e00 */
int __fastcall sub_60184ED0(int a1, _DWORD *a2);  /* 0x00184ed0 */
int __fastcall sub_60184FA0(int a1, _DWORD *a2);  /* 0x00184fa0 */
int __fastcall sub_6018506C(_DWORD *a1, _DWORD *a2);  /* 0x0018506c */
int __fastcall sub_601854B8(float *a1, float *a2);  /* 0x001854b8 */
int __fastcall sub_601855F4(int a1);  /* 0x001855f4 */
int __fastcall sub_60185834(int a1, int a2, int a3, int a4);  /* 0x00185834 */
int __fastcall sub_601858A8(int a1, int a2, int a3, int a4);  /* 0x001858a8 */
int __fastcall sub_60185A90(int a1, int a2, int a3, int a4);  /* 0x00185a90 */
bool __fastcall sub_60185AB4(int a1, int a2);  /* 0x00185ab4 */
int __fastcall sub_60185BB8(_DWORD *a1);  /* 0x00185bb8 */
int __fastcall sub_60185C70(int a1, int a2);  /* 0x00185c70 */
int __fastcall sub_60185CD8(int a1);  /* 0x00185cd8 */
bool __fastcall sub_60185D04(Actor *a1);  /* 0x00185d04 */
bool __fastcall sub_60185D08(Actor *a1);  /* 0x00185d08 */
bool __fastcall sub_60185EA8(int a1);  /* 0x00185ea8 */
int __fastcall sub_60185EFC(int result, int a2);  /* 0x00185efc */
int __fastcall sub_60185F3C(float *a1);  /* 0x00185f3c */
unsigned int __fastcall sub_60185F9C(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x00185f9c */
unsigned int __fastcall sub_60186008(int a1, _DWORD *a2, int a3, int a4, int a5, int a6);  /* 0x00186008 */
unsigned int __fastcall sub_60186074(int a1, int a2, float *a3);  /* 0x00186074 */
int __fastcall sub_601860F8(int a1);  /* 0x001860f8 */
void __fastcall sub_6018617C(int a1, int a2, int a3);  /* 0x0018617c */
int __fastcall sub_601861EC(Actor *a1);  /* 0x001861ec */
unsigned int __fastcall sub_601862E0(int a1);  /* 0x001862e0 */
int __fastcall sub_601863B8(int a1, int a2, int a3);  /* 0x001863b8 */
int __fastcall sub_6018642C(int a1, int a2, int a3, int a4);  /* 0x0018642c */
bool __fastcall sub_60186494(int a1, int a2);  /* 0x00186494 */
int __fastcall sub_6018667C(_DWORD *a1);  /* 0x0018667c */
int __fastcall sub_6018668C(int a1, int a2);  /* 0x0018668c */
int __fastcall sub_601867D0(int a1, _DWORD *a2);  /* 0x001867d0 */
int __fastcall sub_6018691C(int a1);  /* 0x0018691c */
int __fastcall sub_60186924(int a1);  /* 0x00186924 */
unsigned int __fastcall sub_60186930(int a1, int a2, int a3);  /* 0x00186930 */
int __fastcall sub_6018697C(int a1, int a2);  /* 0x0018697c */
int __fastcall sub_60186A24(int a1);  /* 0x00186a24 */
int __fastcall sub_60186A7C(int a1, int a2);  /* 0x00186a7c */
int __fastcall sub_60186B14(int result, int a2);  /* 0x00186b14 */
int __fastcall sub_60186B24(_DWORD *a1);  /* 0x00186b24 */
int __fastcall sub_60186BC8(float *a1);  /* 0x00186bc8 */
bool __fastcall sub_60186C1C(int a1, int a2);  /* 0x00186c1c */
int __fastcall sub_60186CC8(_DWORD *a1);  /* 0x00186cc8 */
int __fastcall sub_60186D14(int a1, int a2);  /* 0x00186d14 */
int __fastcall sub_60186D4C(int a1, _DWORD *a2);  /* 0x00186d4c */
int __fastcall sub_60186D90(int a1, int a2);  /* 0x00186d90 */
int __fastcall sub_60186D9C(int result, _DWORD *a2);  /* 0x00186d9c */
int __fastcall sub_60186DAC(int a1, int a2);  /* 0x00186dac */
int __fastcall sub_60186DD4(int a1);  /* 0x00186dd4 */
int __fastcall sub_60186DDC(int a1);  /* 0x00186ddc */
int __fastcall sub_60186EA8(int a1);  /* 0x00186ea8 */
int __fastcall sub_60186FEC(int a1, unsigned int a2, unsigned int a3);  /* 0x00186fec */
int __fastcall sub_60187014(int result);  /* 0x00187014 */
int __fastcall sub_60187054(int a1, unsigned int a2, unsigned int a3);  /* 0x00187054 */
int __fastcall sub_60187078(int a1, int a2);  /* 0x00187078 */
int __fastcall sub_60187130(int a1, int a2);  /* 0x00187130 */
int __fastcall sub_601873B8(Actor *a1);  /* 0x001873b8 */
int __fastcall sub_601873D0(int a1);  /* 0x001873d0 */
int __fastcall sub_6018D208(int a1, int a2, int a3);  /* 0x0018d208 */
int __fastcall sub_6018D250(int a1);  /* 0x0018d250 */
int __fastcall sub_6018D27C(float *a1, _DWORD *a2, unsigned int a3, unsigned int a4, int a5, int a6);  /* 0x0018d27c */
int __fastcall sub_6018D514(int a1);  /* 0x0018d514 */
int __fastcall sub_6018D7E0(int a1);  /* 0x0018d7e0 */
int __fastcall sub_6018D7EC(int a1);  /* 0x0018d7ec */
unsigned int __fastcall sub_6018D7F8(int a1, int a2);  /* 0x0018d7f8 */
int __fastcall sub_6018D8A0(_DWORD *a1, int a2, unsigned int a3);  /* 0x0018d8a0 */
int __fastcall sub_6018DB70(int a1, _DWORD *a2, int a3);  /* 0x0018db70 */
int __fastcall sub_6018DC68(int a1, _DWORD *a2, const char **a3);  /* 0x0018dc68 */
int __fastcall sub_6018DD18(int a1, _DWORD *a2, int a3);  /* 0x0018dd18 */
int __fastcall sub_6018E528(int a1);  /* 0x0018e528 */
int __fastcall sub_6018EA14(int a1);  /* 0x0018ea14 */
bool __fastcall sub_6018EBB0(int a1);  /* 0x0018ebb0 */
int __fastcall sub_6018EC04(int a1, _DWORD *a2);  /* 0x0018ec04 */
int __fastcall sub_6018EDF4(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5);  /* 0x0018edf4 */
int __fastcall sub_6018F98C(float *a1, _DWORD *a2, unsigned int a3, unsigned int a4, int a5, int a6);  /* 0x0018f98c */
int __fastcall sub_6018F9B0(int a1);  /* 0x0018f9b0 */
int __fastcall sub_6018FAAC(_DWORD *a1);  /* 0x0018faac */
int __fastcall sub_6018FABC(_BYTE *a1);  /* 0x0018fabc */
int __fastcall sub_6018FE34(int a1, _DWORD *a2);  /* 0x0018fe34 */
int __fastcall sub_6018FF04(int a1);  /* 0x0018ff04 */
int __fastcall sub_6018FF38(int a1, int a2);  /* 0x0018ff38 */
int __fastcall sub_6018FF70(int a1, _DWORD *a2);  /* 0x0018ff70 */
int __fastcall sub_6018FFB4(int a1, int a2);  /* 0x0018ffb4 */
int __fastcall sub_6018FFC0(int result, _DWORD *a2);  /* 0x0018ffc0 */
int __fastcall sub_6018FFD0(int a1, int a2);  /* 0x0018ffd0 */
int __fastcall sub_6018FFF8(int a1);  /* 0x0018fff8 */
int __fastcall sub_60190000(int a1);  /* 0x00190000 */
int __fastcall sub_6019002C(int a1, _DWORD *a2);  /* 0x0019002c */
int __fastcall sub_60190100(int a1, _DWORD *a2);  /* 0x00190100 */
int __fastcall sub_601901CC(int a1, int a2);  /* 0x001901cc */
int __fastcall sub_60190264(int a1, int a2);  /* 0x00190264 */
int __fastcall sub_60190350(struct sead_IDisposer *a1);  /* 0x00190350 */
int __fastcall sub_601903B0(int a1);  /* 0x001903b0 */
int __fastcall sub_60190428(int result);  /* 0x00190428 */
int __fastcall sub_60190644(int a1);  /* 0x00190644 */
int __fastcall sub_601906A4(_DWORD *a1);  /* 0x001906a4 */
bool __fastcall sub_60190968(int a1);  /* 0x00190968 */
int __fastcall sub_60190978(int a1);  /* 0x00190978 */
int __fastcall sub_60190994(int a1);  /* 0x00190994 */
int __fastcall sub_60190CEC(int a1);  /* 0x00190cec */
int __fastcall sub_6019112C(int a1);  /* 0x0019112c */
int __fastcall sub_60191160(_DWORD *a1, _DWORD *a2);  /* 0x00191160 */
bool __fastcall sub_60191698(int a1);  /* 0x00191698 */
int __fastcall sub_601916EC(int a1);  /* 0x001916ec */
int __fastcall sub_601916F4(int a1);  /* 0x001916f4 */
int __fastcall sub_6019172C(int a1);  /* 0x0019172c */
int __fastcall sub_6019180C(int a1);  /* 0x0019180c */
int __fastcall sub_601918EC(int a1);  /* 0x001918ec */
int __fastcall sub_601919B0(_DWORD *a1, int a2);  /* 0x001919b0 */
bool __fastcall sub_60191B00(_DWORD *a1);  /* 0x00191b00 */
int __fastcall sub_60191BD0(int a1, _DWORD *a2);  /* 0x00191bd0 */
int __fastcall Actor_PeachCastle_flag_build(int a1);  /* 0x00191dd4 */
int __fastcall sub_60191E28(int a1);  /* 0x00191e28 */
int __fastcall sub_601921DC(int a1);  /* 0x001921dc */
int __fastcall sub_60192310(Actor *a1);  /* 0x00192310 */
int __fastcall sub_6019232C(int a1, int a2, int a3, int a4);  /* 0x0019232c */
int __fastcall sub_60192368(int a1);  /* 0x00192368 */
bool __fastcall sub_601926D8(int a1, int a2);  /* 0x001926d8 */
int __fastcall sub_601927DC(_DWORD *a1);  /* 0x001927dc */
int __fastcall sub_601927EC(int result, float *a2, unsigned int *a3, _DWORD *a4);  /* 0x001927ec */
int __fastcall Actor_CourseSelectoke_build(int a1);  /* 0x00192a00 */
int __fastcall sub_60192B80(int a1);  /* 0x00192b80 */
int __fastcall sub_60192FB8(int a1);  /* 0x00192fb8 */
int __fastcall sub_60193140(int a1);  /* 0x00193140 */
int __fastcall sub_60193170(int a1, int a2, int a3, int a4);  /* 0x00193170 */
int __fastcall sub_60193194(int a1);  /* 0x00193194 */
bool __fastcall sub_601933C8(int a1, int a2);  /* 0x001933c8 */
int __fastcall sub_601934CC(_DWORD *a1);  /* 0x001934cc */
int __fastcall sub_601934DC(int result);  /* 0x001934dc */
int __fastcall sub_60193518(int result);  /* 0x00193518 */
int __fastcall sub_60193558(int a1);  /* 0x00193558 */
int __fastcall sub_6019364C(int *a1);  /* 0x0019364c */
int __fastcall sub_6019384C(int a1);  /* 0x0019384c */
bool __fastcall sub_6019385C(int a1, int a2);  /* 0x0019385c */
int __fastcall sub_601939D4(_DWORD *a1);  /* 0x001939d4 */
int __fastcall sub_601939E4(int a1, int a2);  /* 0x001939e4 */
int __fastcall sub_60193B54(int a1);  /* 0x00193b54 */
int __fastcall sub_60193BDC(int a1);  /* 0x00193bdc */
int __fastcall sub_60193D64(int a1);  /* 0x00193d64 */
int __fastcall sub_60193D9C(int a1, int a2, int a3, int a4);  /* 0x00193d9c */
int __fastcall sub_60193DC4(_DWORD *a1);  /* 0x00193dc4 */
int __fastcall sub_60193EE4(_DWORD *a1, int a2);  /* 0x00193ee4 */
bool __fastcall sub_60193F7C(int a1, int a2);  /* 0x00193f7c */
int __fastcall sub_60194080(_DWORD *a1);  /* 0x00194080 */
int __fastcall sub_6019419C(int a1);  /* 0x0019419c */
int __fastcall sub_60194404(int a1);  /* 0x00194404 */
int __fastcall sub_6019458C(int a1);  /* 0x0019458c */
int __fastcall sub_601945E4(_DWORD *a1);  /* 0x001945e4 */
int __fastcall sub_601946F4(int a1);  /* 0x001946f4 */
int __fastcall sub_60194774(int a1);  /* 0x00194774 */
int __fastcall sub_601948D4(int a1);  /* 0x001948d4 */
bool __fastcall sub_601949A8(int a1, int a2);  /* 0x001949a8 */
int __fastcall sub_60194B24(_DWORD *a1);  /* 0x00194b24 */
int __fastcall sub_60194B3C(int a1);  /* 0x00194b3c */
int __fastcall sub_60194B74(int a1, int a2);  /* 0x00194b74 */
int __fastcall sub_60194BAC(int a1, _DWORD *a2);  /* 0x00194bac */
int __fastcall sub_60194BF0(int a1, int a2);  /* 0x00194bf0 */
int __fastcall sub_60194BFC(int result, _DWORD *a2);  /* 0x00194bfc */
int __fastcall sub_60194C0C(int a1, int a2);  /* 0x00194c0c */
int __fastcall sub_60194C34(int a1);  /* 0x00194c34 */
int __fastcall sub_60194C3C(int a1);  /* 0x00194c3c */
int __fastcall sub_60194E54(int *a1);  /* 0x00194e54 */
int __fastcall sub_60195054(int a1);  /* 0x00195054 */
bool __fastcall sub_60195064(int a1, int a2);  /* 0x00195064 */
int __fastcall sub_601951DC(_DWORD *a1);  /* 0x001951dc */
int __fastcall Actor_CourseSelectBowserJr_build(int a1);  /* 0x00195724 */
int __fastcall sub_601958D4(int a1);  /* 0x001958d4 */
int __fastcall sub_60195B90(int a1);  /* 0x00195b90 */
int __fastcall sub_60195D60(int a1);  /* 0x00195d60 */
int __fastcall sub_60195E38(int a1);  /* 0x00195e38 */
int __fastcall sub_60196010(int a1);  /* 0x00196010 */
int __fastcall sub_60196600(int a1);  /* 0x00196600 */
int __fastcall sub_60196AE8(int a1);  /* 0x00196ae8 */
int __fastcall sub_60196E38(int result);  /* 0x00196e38 */
unsigned int __fastcall sub_60196E44(int a1);  /* 0x00196e44 */
int __fastcall sub_60197380(int result);  /* 0x00197380 */
int __fastcall sub_60197394(int a1);  /* 0x00197394 */
int __fastcall sub_6019774C(_DWORD *a1);  /* 0x0019774c */
int __fastcall sub_60197820(_DWORD *a1);  /* 0x00197820 */
int __fastcall sub_60197CE4(int a1);  /* 0x00197ce4 */
int __fastcall sub_6019809C(Actor *a1);  /* 0x0019809c */
int __fastcall sub_601981AC(_DWORD **a1, int a2, int a3, int a4);  /* 0x001981ac */
int __fastcall sub_601981EC(int a1, int a2);  /* 0x001981ec */
int __fastcall sub_601983B4(int a1, int a2);  /* 0x001983b4 */
bool __fastcall sub_60198DC0(int a1, int a2);  /* 0x00198dc0 */
int __fastcall sub_60198DFC(int a1);  /* 0x00198dfc */
int __fastcall sub_601991E8(_DWORD *a1);  /* 0x001991e8 */
int __fastcall sub_601993F8(int a1, int a2);  /* 0x001993f8 */
int __fastcall sub_60199430(int a1, _DWORD *a2);  /* 0x00199430 */
int __fastcall sub_60199474(int a1, int a2);  /* 0x00199474 */
int __fastcall sub_60199480(int result, _DWORD *a2);  /* 0x00199480 */
int __fastcall sub_60199490(int a1, int a2);  /* 0x00199490 */
int __fastcall sub_601994B8(int a1);  /* 0x001994b8 */
int __fastcall sub_601994C0(int a1);  /* 0x001994c0 */
int __fastcall sub_601994E8(int a1);  /* 0x001994e8 */
int __fastcall sub_60199880(struct sead_IDisposer *a1);  /* 0x00199880 */
bool __fastcall sub_60199890(int a1, int a2);  /* 0x00199890 */
int __fastcall sub_60199A0C(_DWORD *a1, int a2, int a3);  /* 0x00199a0c */
void __fastcall sub_60199B6C(_DWORD *a1, int a2, int a3);  /* 0x00199b6c */
void __fastcall sub_60199C48(_DWORD *a1, int a2, int a3);  /* 0x00199c48 */
int __fastcall sub_60199D24(_DWORD *a1, const void **a2, const void **a3);  /* 0x00199d24 */
int __fastcall sub_60199FD4(int a1, int a2, _DWORD *a3);  /* 0x00199fd4 */
int __fastcall sub_6019A120(int a1);  /* 0x0019a120 */
int __fastcall sub_6019A214(_DWORD *a1);  /* 0x0019a214 */
int __fastcall sub_6019A5F8(int a1, int a2, unsigned int a3, int a4);  /* 0x0019a5f8 */
int __fastcall sub_6019A628(unsigned __int8 a1, unsigned __int8 a2);  /* 0x0019a628 */
int __fastcall sub_6019A808(int a1, int a2, unsigned __int8 a3);  /* 0x0019a808 */
bool __fastcall sub_6019AB84(unsigned __int8 a1, unsigned __int8 a2);  /* 0x0019ab84 */
int __fastcall sub_6019AE00(unsigned __int8 a1, unsigned __int8 a2);  /* 0x0019ae00 */
int __fastcall sub_6019AE80(unsigned __int8 a1, unsigned __int8 a2);  /* 0x0019ae80 */
int __fastcall sub_6019AF00(unsigned __int8 a1, unsigned __int8 a2);  /* 0x0019af00 */
int __fastcall sub_6019AF60(unsigned __int8 a1, unsigned __int8 a2);  /* 0x0019af60 */
int __fastcall sub_6019B054(unsigned __int8 a1, unsigned __int8 a2);  /* 0x0019b054 */
int __fastcall sub_6019B0D4(unsigned __int8 a1, unsigned __int8 a2);  /* 0x0019b0d4 */
int __fastcall sub_6019B154(unsigned __int8 a1, unsigned __int8 a2);  /* 0x0019b154 */
bool __fastcall sub_6019B238(char a1);  /* 0x0019b238 */
int __fastcall sub_6019B268(unsigned __int8 a1);  /* 0x0019b268 */
unsigned int __fastcall sub_6019B348(int a1, int a2);  /* 0x0019b348 */
int __fastcall sub_6019B574(unsigned __int8 a1, unsigned __int8 a2);  /* 0x0019b574 */
int __fastcall sub_6019B64C(float *a1, float *a2);  /* 0x0019b64c */
unsigned int __fastcall sub_6019B6EC(int a1);  /* 0x0019b6ec */
int __fastcall sub_6019B73C(int a1, int a2);  /* 0x0019b73c */
int __fastcall sub_6019B824(int a1);  /* 0x0019b824 */
int __fastcall sub_6019B874(int a1, int a2);  /* 0x0019b874 */
int __fastcall Actor_CSbone_kosuta_build(int a1);  /* 0x0019bb74 */
int __fastcall sub_6019BD04(int a1);  /* 0x0019bd04 */
int __fastcall sub_6019BD4C(int a1);  /* 0x0019bd4c */
int __fastcall sub_6019BF20(int a1);  /* 0x0019bf20 */
int __fastcall sub_6019C9BC(int a1);  /* 0x0019c9bc */
int __fastcall sub_6019CA3C(int a1);  /* 0x0019ca3c */
int __fastcall sub_6019CB4C(_DWORD *a1);  /* 0x0019cb4c */
signed int __fastcall sub_6019D04C(int a1);  /* 0x0019d04c */
int __fastcall sub_6019D4E0(int a1);  /* 0x0019d4e0 */
int __fastcall sub_6019D570(Actor *a1);  /* 0x0019d570 */
int __fastcall sub_6019D63C(int a1, int a2, int a3, int a4);  /* 0x0019d63c */
unsigned int __fastcall sub_6019D6B4(int a1);  /* 0x0019d6b4 */
int __fastcall sub_6019D834(int a1);  /* 0x0019d834 */
int __fastcall sub_6019D8CC(int a1);  /* 0x0019d8cc */
int __fastcall sub_6019D9FC(int a1);  /* 0x0019d9fc */
unsigned int __fastcall sub_6019DAB4(int a1);  /* 0x0019dab4 */
unsigned int __fastcall sub_6019DE18(int a1);  /* 0x0019de18 */
bool __fastcall sub_6019DF30(int a1, int a2);  /* 0x0019df30 */
int __fastcall sub_6019E1C0(int a1, int a2);  /* 0x0019e1c0 */
int __fastcall sub_6019E1F8(int a1, _DWORD *a2);  /* 0x0019e1f8 */
int __fastcall sub_6019E23C(int a1, int a2);  /* 0x0019e23c */
int __fastcall sub_6019E248(int result, _DWORD *a2);  /* 0x0019e248 */
int __fastcall sub_6019E258(int a1, int a2);  /* 0x0019e258 */
int __fastcall sub_6019E280(int a1);  /* 0x0019e280 */
int __fastcall sub_6019E288(int a1);  /* 0x0019e288 */
int __fastcall sub_6019E304(struct sead_IDisposer *a1);  /* 0x0019e304 */
int __fastcall sub_6019E658(int a1);  /* 0x0019e658 */
int __fastcall sub_6019E7D8(int a1);  /* 0x0019e7d8 */
int __fastcall sub_6019E9D4(int a1);  /* 0x0019e9d4 */
int __fastcall sub_6019EBD0(int a1);  /* 0x0019ebd0 */
int __fastcall sub_6019EBE8(int a1);  /* 0x0019ebe8 */
int __fastcall sub_6019ECF4(struct sead_IDisposer *a1);  /* 0x0019ecf4 */
int __fastcall sub_6019ED68(int a1);  /* 0x0019ed68 */
int __fastcall sub_6019F1BC(int a1, int a2, int a3);  /* 0x0019f1bc */
int __fastcall sub_6019F2F0(int a1);  /* 0x0019f2f0 */
int __fastcall sub_6019F708(int a1);  /* 0x0019f708 */
int __fastcall sub_601A0134(int a1);  /* 0x001a0134 */
int __fastcall sub_601A0204(int a1, int a2);  /* 0x001a0204 */
int __fastcall sub_601A02B0(int a1, _DWORD *a2, int a3, int a4, int a5);  /* 0x001a02b0 */
int __fastcall sub_601A02F8(int a1, unsigned int a2, int a3);  /* 0x001a02f8 */
int __fastcall sub_601A044C(int a1);  /* 0x001a044c */
int __fastcall sub_601A0554(int a1, unsigned int a2, _DWORD *a3);  /* 0x001a0554 */
int __fastcall sub_601A0878(int a1, unsigned int a2, _DWORD *a3);  /* 0x001a0878 */
int __fastcall sub_601A0B9C(int a1, unsigned int a2, _DWORD *a3);  /* 0x001a0b9c */
int __fastcall sub_601A0EC0(int a1, unsigned int a2, _DWORD *a3);  /* 0x001a0ec0 */
int __fastcall sub_601A11E4(int a1, unsigned int a2, const char **a3, int a4);  /* 0x001a11e4 */
int __fastcall sub_601A12E0(int a1);  /* 0x001a12e0 */
int __fastcall sub_601A14F0(int a1, unsigned int a2, int a3, int a4, _QWORD *a5);  /* 0x001a14f0 */
int __fastcall sub_601A172C(int a1, unsigned int a2);  /* 0x001a172c */
int __fastcall sub_601A177C(_DWORD *a1, int a2);  /* 0x001a177c */
int __fastcall sub_601A1818(struct sead_IDisposer *a1);  /* 0x001a1818 */
int __fastcall sub_601A1890(int a1);  /* 0x001a1890 */
int __fastcall sub_601A1954(int a1);  /* 0x001a1954 */
int __fastcall sub_601A1A04(int a1);  /* 0x001a1a04 */
int __fastcall sub_601A1A68(int a1);  /* 0x001a1a68 */
int __fastcall sub_601A1AC8(int result);  /* 0x001a1ac8 */
int __fastcall sub_601A1B30(int result);  /* 0x001a1b30 */
int __fastcall sub_601A1B44(int a1);  /* 0x001a1b44 */
int __fastcall sub_601A1B9C(int result);  /* 0x001a1b9c */
int __fastcall sub_601A1BD0(int result);  /* 0x001a1bd0 */
int __fastcall sub_601A1C00(int a1);  /* 0x001a1c00 */
int __fastcall sub_601A1D18(int result);  /* 0x001a1d18 */
int __fastcall sub_601A1D6C(int a1);  /* 0x001a1d6c */
int __fastcall sub_601A1DCC(int result);  /* 0x001a1dcc */
int __fastcall sub_601A1E00(int result);  /* 0x001a1e00 */
int __fastcall sub_601A1E30(int a1);  /* 0x001a1e30 */
int __fastcall sub_601A1F30(int a1);  /* 0x001a1f30 */
int __fastcall sub_601A1F90(int result);  /* 0x001a1f90 */
int __fastcall sub_601A2034(int a1);  /* 0x001a2034 */
int __fastcall sub_601A20BC(int result);  /* 0x001a20bc */
int __fastcall sub_601A20F0(int result);  /* 0x001a20f0 */
int __fastcall sub_601A2104(int result);  /* 0x001a2104 */
int __fastcall sub_601A2160(int a1);  /* 0x001a2160 */
int __fastcall sub_601A21C8(int a1);  /* 0x001a21c8 */
int __fastcall sub_601A2258(int result);  /* 0x001a2258 */
int __fastcall sub_601A22D8(int a1);  /* 0x001a22d8 */
int __fastcall sub_601A2334(int a1);  /* 0x001a2334 */
int __fastcall sub_601A298C(_DWORD *a1);  /* 0x001a298c */
int __fastcall sub_601A299C(int a1);  /* 0x001a299c */
int __fastcall sub_601A29FC(int a1);  /* 0x001a29fc */
int __fastcall sub_601A2AEC(int a1);  /* 0x001a2aec */
int __fastcall sub_601A2CD8(int a1, int a2);  /* 0x001a2cd8 */
int __fastcall sub_601A2D98(int a1, int a2);  /* 0x001a2d98 */
int __fastcall sub_601A2DF4(int a1);  /* 0x001a2df4 */
int __fastcall sub_601A2E00(int a1, _DWORD *a2);  /* 0x001a2e00 */
int __fastcall sub_601A2F94(int a1);  /* 0x001a2f94 */
int __fastcall sub_601A3024(int a1);  /* 0x001a3024 */
int __fastcall sub_601A33F8(int a1, unsigned int a2);  /* 0x001a33f8 */
int __fastcall sub_601A3B4C(int a1, int a2, unsigned int a3, unsigned int a4);  /* 0x001a3b4c */
int __fastcall sub_601A3C64(int a1);  /* 0x001a3c64 */
int __fastcall sub_601A443C(int a1, int a2, int a3);  /* 0x001a443c */
int __fastcall sub_601A4454(int a1, int a2, int a3);  /* 0x001a4454 */
int __fastcall sub_601A446C(int a1);  /* 0x001a446c */
int __fastcall sub_601A450C(int result);  /* 0x001a450c */
int __fastcall sub_601A47DC(int a1, int a2, int a3, int a4);  /* 0x001a47dc */
int __fastcall sub_601A4868(int a1, int a2);  /* 0x001a4868 */
int __fastcall sub_601A48A0(int a1, _DWORD *a2);  /* 0x001a48a0 */
int __fastcall sub_601A48E4(int a1, int a2);  /* 0x001a48e4 */
int __fastcall sub_601A48F0(int result, _DWORD *a2);  /* 0x001a48f0 */
int __fastcall sub_601A4900(int a1, int a2);  /* 0x001a4900 */
int __fastcall sub_601A4928(int a1);  /* 0x001a4928 */
int __fastcall sub_601A4930(int a1);  /* 0x001a4930 */
int __fastcall Actor_CourseSelect_Miibarun_build(int a1);  /* 0x001a4f88 */
int __fastcall sub_601A5044(int a1);  /* 0x001a5044 */
int __fastcall sub_601A5060(int a1);  /* 0x001a5060 */
int __fastcall sub_601A50C8(int a1);  /* 0x001a50c8 */
int __fastcall sub_601A50E4(int a1);  /* 0x001a50e4 */
int __fastcall sub_601A5154(int a1);  /* 0x001a5154 */
int __fastcall sub_601A5170(int a1);  /* 0x001a5170 */
int __fastcall sub_601A51E0(int a1);  /* 0x001a51e0 */
int __fastcall sub_601A51FC(int a1);  /* 0x001a51fc */
int __fastcall sub_601A52A0(int a1);  /* 0x001a52a0 */
int __fastcall sub_601A5468(int a1);  /* 0x001a5468 */
int __fastcall sub_601A5930(int a1);  /* 0x001a5930 */
int __fastcall sub_601A5950(int a1);  /* 0x001a5950 */
int __fastcall sub_601A5A4C(_DWORD *a1);  /* 0x001a5a4c */
int __fastcall sub_601A5C5C(int a1, int a2);  /* 0x001a5c5c */
int __fastcall sub_601A5C94(int a1, _DWORD *a2);  /* 0x001a5c94 */
int __fastcall sub_601A5CD8(int a1, int a2);  /* 0x001a5cd8 */
int __fastcall sub_601A5CE4(int result, _DWORD *a2);  /* 0x001a5ce4 */
int __fastcall sub_601A5CF4(int a1, int a2);  /* 0x001a5cf4 */
int __fastcall sub_601A5D1C(int a1);  /* 0x001a5d1c */
int __fastcall sub_601A5D24(int a1);  /* 0x001a5d24 */
int __fastcall sub_601A5DA4(int a1);  /* 0x001a5da4 */
int __fastcall sub_601A5E30(int a1);  /* 0x001a5e30 */
int __fastcall roll_tate_ref(int a1);  /* 0x001a5ef8 */
int __fastcall sub_601A602C(int a1);  /* 0x001a602c */
int __fastcall sub_601A6328(int result);  /* 0x001a6328 */
int __fastcall sub_601A6348(_DWORD *a1);  /* 0x001a6348 */
int __fastcall sub_601A639C(int result);  /* 0x001a639c */
int __fastcall sub_601A655C(int a1);  /* 0x001a655c */
int __fastcall sub_601A65B0(_DWORD *a1);  /* 0x001a65b0 */
int __fastcall sub_601A65EC(int a1);  /* 0x001a65ec */
int __fastcall sub_601A6644(int a1);  /* 0x001a6644 */
int __fastcall sub_601A6850(int a1);  /* 0x001a6850 */
int __fastcall sub_601A68FC(_DWORD *a1, int a2);  /* 0x001a68fc */
int __fastcall sub_601A6A20(Actor *a1);  /* 0x001a6a20 */
int __fastcall sub_601A6B78(int a1, int a2, int a3, int a4);  /* 0x001a6b78 */
float __fastcall sub_601A6B9C(float *a1);  /* 0x001a6b9c */
int __fastcall sub_601A6C4C(_DWORD *a1);  /* 0x001a6c4c */
int __fastcall sub_601A6C78(int a1);  /* 0x001a6c78 */
int __fastcall sub_601A6E78(int a1);  /* 0x001a6e78 */
bool __fastcall sub_601A6FAC(int a1, int a2);  /* 0x001a6fac */
int __fastcall sub_601A7124(_DWORD *a1);  /* 0x001a7124 */
bool __fastcall sub_601A7158(int a1);  /* 0x001a7158 */
int __fastcall sub_601A71A0(int a1);  /* 0x001a71a0 */
int __fastcall sub_601A71B0(int a1, int a2);  /* 0x001a71b0 */
int __fastcall sub_601A7250(int a1);  /* 0x001a7250 */
int __fastcall sub_601A7618(int *a1);  /* 0x001a7618 */
int __fastcall sub_601A762C(int a1);  /* 0x001a762c */
int __fastcall sub_601A763C(int a1);  /* 0x001a763c */
int __fastcall sub_601A764C(int a1);  /* 0x001a764c */
int __fastcall sub_601A765C(int a1);  /* 0x001a765c */
bool __fastcall sub_601A766C(int a1, int a2);  /* 0x001a766c */
int __fastcall sub_601A76E8(_DWORD *a1);  /* 0x001a76e8 */
int __fastcall Actor_CourseSelectopuninguKamek_build(int a1);  /* 0x001a76f8 */
int __fastcall fly_csdm_ref(int a1);  /* 0x001a7b10 */
int __fastcall sub_601A7C90(int a1);  /* 0x001a7c90 */
int __fastcall sub_601A7F38(Actor *a1);  /* 0x001a7f38 */
int __fastcall sub_601A7F5C(int a1, int a2, int a3, int a4);  /* 0x001a7f5c */
int __fastcall sub_601A7F80(int a1);  /* 0x001a7f80 */
int __fastcall sub_601A83F8(int result);  /* 0x001a83f8 */
int __fastcall sub_601A8410(int a1);  /* 0x001a8410 */
int __fastcall sub_601A85F0(int a1);  /* 0x001a85f0 */
int __fastcall sub_601A8A64(int a1);  /* 0x001a8a64 */
int __fastcall sub_601A8D18(int result);  /* 0x001a8d18 */
int __fastcall fly_magic_ref_3(_DWORD *a1);  /* 0x001a8d60 */
int __fastcall sub_601A8E3C(int a1);  /* 0x001a8e3c */
int __fastcall fly_csdm_ref_2(int a1);  /* 0x001a8e68 */
int __fastcall sub_601A8F98(int a1);  /* 0x001a8f98 */
bool __fastcall sub_601A9010(int a1, int a2);  /* 0x001a9010 */
int __fastcall sub_601A9164(_DWORD *a1);  /* 0x001a9164 */
int __fastcall sub_601A91C4(int a1);  /* 0x001a91c4 */
int __fastcall sub_601A91F8(int a1, int a2);  /* 0x001a91f8 */
int __fastcall sub_601A9230(int a1, _DWORD *a2);  /* 0x001a9230 */
int __fastcall sub_601A9274(int a1, int a2);  /* 0x001a9274 */
int __fastcall sub_601A9280(int result, _DWORD *a2);  /* 0x001a9280 */
int __fastcall sub_601A9290(int a1, int a2);  /* 0x001a9290 */
int __fastcall sub_601A92B8(int a1);  /* 0x001a92b8 */
int __fastcall sub_601A92C0(int a1);  /* 0x001a92c0 */
int __fastcall Actor_CSPiranha_build(int a1);  /* 0x001a96e0 */
int __fastcall sub_601A975C(int result);  /* 0x001a975c */
int __fastcall sub_601A9770(int result);  /* 0x001a9770 */
int __fastcall sub_601A9798(int result);  /* 0x001a9798 */
int __fastcall sub_601A97A4(int result);  /* 0x001a97a4 */
int __fastcall sub_601A97C8(int result);  /* 0x001a97c8 */
int __fastcall sub_601A9830(int result);  /* 0x001a9830 */
int __fastcall sub_601A983C(int result);  /* 0x001a983c */
int __fastcall sub_601A9868(int result);  /* 0x001a9868 */
int __fastcall sub_601A9890(int result);  /* 0x001a9890 */
int __fastcall sub_601A98EC(_DWORD *a1);  /* 0x001a98ec */
int __fastcall sub_601A993C(int a1);  /* 0x001a993c */
int __fastcall sub_601A9950(_DWORD *a1);  /* 0x001a9950 */
int __fastcall sub_601A9AD4(int a1);  /* 0x001a9ad4 */
int __fastcall sub_601A9AF4(int a1);  /* 0x001a9af4 */
int __fastcall sub_601A9BD0(int a1);  /* 0x001a9bd0 */
int __fastcall sub_601A9BF8(_DWORD *a1);  /* 0x001a9bf8 */
int __fastcall sub_601A9C9C(int a1);  /* 0x001a9c9c */
int __fastcall sub_601A9E34(int a1);  /* 0x001a9e34 */
int __fastcall sub_601A9F94(Actor *a1);  /* 0x001a9f94 */
int __fastcall sub_601AA070(int a1, int a2, int a3, int a4);  /* 0x001aa070 */
int __fastcall sub_601AA0A4(int a1);  /* 0x001aa0a4 */
unsigned int __fastcall sub_601AA4EC(float *a1);  /* 0x001aa4ec */
int __fastcall sub_601AA570(int a1);  /* 0x001aa570 */
bool __fastcall sub_601AA578(int a1, int a2);  /* 0x001aa578 */
int __fastcall sub_601AA67C(_DWORD *a1);  /* 0x001aa67c */
int __fastcall sub_601AA6B0(int a1);  /* 0x001aa6b0 */
int __fastcall sub_601AA700(int *a1);  /* 0x001aa700 */
int __fastcall sub_601AA83C(int a1);  /* 0x001aa83c */
int __fastcall mouth_lower_ref(int a1, int a2, int a3, int a4);  /* 0x001aa9b8 */
int __fastcall sub_601AAB54(int a1, int a2, int a3, int a4);  /* 0x001aab54 */
bool __fastcall sub_601AAB78(int a1, int a2);  /* 0x001aab78 */
int __fastcall sub_601AAC7C(_DWORD *a1);  /* 0x001aac7c */
int __fastcall sub_601AAE08(_DWORD *a1);  /* 0x001aae08 */
int __fastcall sub_601AAE7C(_DWORD *a1, int a2);  /* 0x001aae7c */
int __fastcall sub_601AB178(int result, int a2, int a3);  /* 0x001ab178 */
int __fastcall sub_601AB228(int result);  /* 0x001ab228 */
int __fastcall sub_601AB238(_DWORD *a1);  /* 0x001ab238 */
int __fastcall sub_601AB2E0(int result);  /* 0x001ab2e0 */
int __fastcall Actor_CourseSelectPeach_build(int a1);  /* 0x001ab5b0 */
int __fastcall sub_601AB6B4(int a1);  /* 0x001ab6b4 */
int __fastcall sub_601AB740(int a1);  /* 0x001ab740 */
int __fastcall sub_601ABAD4(int a1);  /* 0x001abad4 */
int __fastcall sub_601ABC5C(int a1);  /* 0x001abc5c */
int __fastcall sub_601ABE24(int a1);  /* 0x001abe24 */
int __fastcall sub_601ABE84(int a1, int a2, int a3, int a4);  /* 0x001abe84 */
int __fastcall sub_601ABED0(_DWORD *a1);  /* 0x001abed0 */
int __fastcall sub_601AC05C(int result);  /* 0x001ac05c */
int __fastcall sub_601AC068(_DWORD *a1);  /* 0x001ac068 */
bool __fastcall sub_601AC190(int a1, int a2);  /* 0x001ac190 */
int __fastcall sub_601AC298(_DWORD *a1);  /* 0x001ac298 */
int __fastcall sub_601AC2B4(int a1);  /* 0x001ac2b4 */
int __fastcall sub_601AC2E8(int a1, int a2);  /* 0x001ac2e8 */
int __fastcall sub_601AC320(int a1, _DWORD *a2);  /* 0x001ac320 */
int __fastcall sub_601AC364(int a1, int a2);  /* 0x001ac364 */
int __fastcall sub_601AC370(int result, _DWORD *a2);  /* 0x001ac370 */
int __fastcall sub_601AC380(int a1, int a2);  /* 0x001ac380 */
int __fastcall sub_601AC3A8(int a1);  /* 0x001ac3a8 */
int __fastcall sub_601AC3B0(int a1);  /* 0x001ac3b0 */
int __fastcall Actor_PeachCastle_1door_build(int a1);  /* 0x001ac3d8 */
int __fastcall cobPeachGates1st_open_ref(int a1);  /* 0x001ac414 */
int __fastcall sub_601AC72C(int a1);  /* 0x001ac72c */
int __fastcall sub_601AC8B4(int a1);  /* 0x001ac8b4 */
int __fastcall sub_601AC8E4(int a1, int a2, int a3, int a4);  /* 0x001ac8e4 */
int __fastcall cobPeachGates1st_ref(int a1);  /* 0x001ac908 */
bool __fastcall sub_601ACC50(int a1, int a2);  /* 0x001acc50 */
int __fastcall sub_601ACD54(_DWORD *a1);  /* 0x001acd54 */
int __fastcall Actor_PeachCastle_2door_build(int a1);  /* 0x001ace04 */
int __fastcall cobPeachGates2nd_open_ref(int a1);  /* 0x001ace40 */
int __fastcall sub_601AD23C(int a1);  /* 0x001ad23c */
int __fastcall sub_601AD3C4(int a1);  /* 0x001ad3c4 */
int __fastcall sub_601AD3F4(int a1, int a2, int a3, int a4);  /* 0x001ad3f4 */
int __fastcall cobPeachGates2nd_ref(int a1);  /* 0x001ad418 */
bool __fastcall sub_601AD6C8(int a1, int a2);  /* 0x001ad6c8 */
int __fastcall sub_601AD7CC(_DWORD *a1);  /* 0x001ad7cc */
int __fastcall Actor_CSpentaro_build(_DWORD *a1);  /* 0x001ade30 */
int __fastcall sub_601ADED4(int result);  /* 0x001aded4 */
int __fastcall sub_601ADF00(int result);  /* 0x001adf00 */
int __fastcall sub_601AE100(_DWORD *a1);  /* 0x001ae100 */
int __fastcall sub_601AE134(float *a1);  /* 0x001ae134 */
int __fastcall sub_601AEA70(int a1);  /* 0x001aea70 */
int __fastcall sub_601AEF14(_DWORD *a1);  /* 0x001aef14 */
int __fastcall sub_601AF1CC(int a1);  /* 0x001af1cc */
int __fastcall sub_601AF26C(int a1);  /* 0x001af26c */
int __fastcall sub_601AF4F8(_DWORD *a1);  /* 0x001af4f8 */
int __fastcall sub_601AF6BC(int a1);  /* 0x001af6bc */
int __fastcall sub_601AF754(int *a1);  /* 0x001af754 */
int __fastcall sub_601AF8AC(_DWORD *a1);  /* 0x001af8ac */
int __fastcall sub_601AF8E0(_DWORD *a1);  /* 0x001af8e0 */
int __fastcall sub_601AFAA0(_DWORD *a1);  /* 0x001afaa0 */
int __fastcall sub_601AFB18(unsigned int *a1);  /* 0x001afb18 */
int __fastcall sub_601AFB5C(_DWORD *a1);  /* 0x001afb5c */
int __fastcall sub_601AFB94(_DWORD *a1);  /* 0x001afb94 */
int __fastcall sub_601AFBC4(_DWORD *a1);  /* 0x001afbc4 */
int __fastcall sub_601AFC18(unsigned int *a1);  /* 0x001afc18 */
int __fastcall sub_601AFCB4(int a1);  /* 0x001afcb4 */
int __fastcall sub_601B0098(_DWORD *a1);  /* 0x001b0098 */
int __fastcall sub_601B0294(Actor *a1);  /* 0x001b0294 */
int __fastcall sub_601B0374(int a1, int a2, int a3, int a4);  /* 0x001b0374 */
int __fastcall sub_601B03A8(int a1);  /* 0x001b03a8 */
int __fastcall sub_601B04A4(int a1);  /* 0x001b04a4 */
unsigned int __fastcall sub_601B079C(int a1);  /* 0x001b079c */
int __fastcall sub_601B0800(int a1);  /* 0x001b0800 */
bool __fastcall sub_601B080C(int a1, int a2);  /* 0x001b080c */
int __fastcall sub_601B097C(_DWORD *a1);  /* 0x001b097c */
int __fastcall sub_601B09EC(int a1);  /* 0x001b09ec */
int __fastcall sub_601B0A58(struct sead_IDisposer *a1);  /* 0x001b0a58 */
int __fastcall sub_601B0AB8(int a1);  /* 0x001b0ab8 */
int __fastcall sub_601B0B88(int a1);  /* 0x001b0b88 */
int __fastcall sub_601B0D38(int a1);  /* 0x001b0d38 */
int __fastcall sub_601B0F0C(int a1);  /* 0x001b0f0c */
int __fastcall sub_601B126C(int a1, unsigned int a2);  /* 0x001b126c */
int __fastcall sub_601B13BC(int a1, int a2);  /* 0x001b13bc */
int __fastcall sub_601B16CC(int a1);  /* 0x001b16cc */
int __fastcall sub_601B1AA4(_DWORD *a1);  /* 0x001b1aa4 */
int __fastcall sub_601B1B5C(int a1);  /* 0x001b1b5c */
int __fastcall sub_601B1FA4(int a1, int a2);  /* 0x001b1fa4 */
int __fastcall sub_601B200C(int a1);  /* 0x001b200c */
int __fastcall sub_601B28C4(_DWORD *a1);  /* 0x001b28c4 */
int __fastcall sub_601B2A1C(int a1);  /* 0x001b2a1c */
int __fastcall sub_601B2B94(int a1);  /* 0x001b2b94 */
int __fastcall sub_601B2BB0(int a1);  /* 0x001b2bb0 */
int __fastcall sub_601B2CB8(int a1);  /* 0x001b2cb8 */
int __fastcall sub_601B2E44(int a1);  /* 0x001b2e44 */
int __fastcall sub_601B2EF0(int a1, int *a2);  /* 0x001b2ef0 */
int __fastcall sub_601B2F78(int a1);  /* 0x001b2f78 */
bool __fastcall sub_601B32DC(int a1, int a2);  /* 0x001b32dc */
int __fastcall sub_601B32F0(_DWORD *a1);  /* 0x001b32f0 */
int __fastcall sub_601B3AB0(int a1, int a2);  /* 0x001b3ab0 */
unsigned int __fastcall sub_601B3ACC(int a1);  /* 0x001b3acc */
int __fastcall sub_601B3B44(int a1);  /* 0x001b3b44 */
int __fastcall sub_601B3F54(int a1);  /* 0x001b3f54 */
unsigned int __fastcall sub_601B3FFC(int a1);  /* 0x001b3ffc */
int __fastcall sub_601B4194(int a1);  /* 0x001b4194 */
int __fastcall sub_601B4280(int result);  /* 0x001b4280 */
int __fastcall sub_601B4294(_DWORD *a1);  /* 0x001b4294 */
int __fastcall sub_601B4548(int a1, int a2, int a3);  /* 0x001b4548 */
int __fastcall sub_601B4788(int a1, unsigned int a2);  /* 0x001b4788 */
int __fastcall sub_601B47F0(int a1);  /* 0x001b47f0 */
int __fastcall sub_601B488C(int a1, int a2);  /* 0x001b488c */
bool __fastcall sub_601B49AC(int a1, int a2);  /* 0x001b49ac */
int __fastcall sub_601B49C0(_DWORD *a1, int a2, int a3);  /* 0x001b49c0 */
int __fastcall sub_601B4B9C(int a1, float *a2);  /* 0x001b4b9c */
int __fastcall sub_601B5110(_DWORD *a1, int a2, int a3, int a4);  /* 0x001b5110 */
int __fastcall sub_601B519C(int result);  /* 0x001b519c */
int __fastcall sub_601B51B8(int a1);  /* 0x001b51b8 */
int __fastcall sub_601B51EC(int a1);  /* 0x001b51ec */
bool __fastcall sub_601B5200(int a1, int a2);  /* 0x001b5200 */
int __fastcall sub_601B5310(int result, int a2);  /* 0x001b5310 */
bool __fastcall sub_601B5318(int a1);  /* 0x001b5318 */
int __fastcall sub_601B5368(int result, int a2);  /* 0x001b5368 */
bool __fastcall sub_601B5370(int a1, int a2);  /* 0x001b5370 */
int __fastcall sub_601B5484(_DWORD *a1);  /* 0x001b5484 */
bool __fastcall sub_601B553C(int a1);  /* 0x001b553c */
int __fastcall sub_601B5728(int a1);  /* 0x001b5728 */
int __fastcall sub_601B5760(int a1, int a2);  /* 0x001b5760 */
int __fastcall sub_601B5798(int a1, _DWORD *a2);  /* 0x001b5798 */
int __fastcall sub_601B57DC(int a1, int a2);  /* 0x001b57dc */
int __fastcall sub_601B57E8(int result, _DWORD *a2);  /* 0x001b57e8 */
int __fastcall sub_601B57F8(int a1, int a2);  /* 0x001b57f8 */
int __fastcall sub_601B5820(int a1);  /* 0x001b5820 */
int __fastcall sub_601B5828(int a1);  /* 0x001b5828 */
int __fastcall sub_601B5850(int result, float *a2, _DWORD *a3, _DWORD *a4);  /* 0x001b5850 */
int __fastcall sub_601B59CC(float *a1, float *a2);  /* 0x001b59cc */
int __fastcall sub_601B64A8(int a1);  /* 0x001b64a8 */
int __fastcall sub_601B69E0(int a1);  /* 0x001b69e0 */
int __fastcall sub_601B69F4(int a1, int a2);  /* 0x001b69f4 */
int __fastcall sub_601B6A6C(int a1);  /* 0x001b6a6c */
int __fastcall sub_601B6F24(_DWORD *a1);  /* 0x001b6f24 */
int __fastcall sub_601B6F60(int result);  /* 0x001b6f60 */
int __fastcall sub_601B6F80(int a1);  /* 0x001b6f80 */
unsigned int __fastcall sub_601B788C(int a1);  /* 0x001b788c */
int __fastcall sub_601B78CC(int a1);  /* 0x001b78cc */
int __fastcall sub_601B7E54(int a1);  /* 0x001b7e54 */
int __fastcall sub_601B7E90(_DWORD *a1);  /* 0x001b7e90 */
int __fastcall sub_601B8068(__int64 a1);  /* 0x001b8068 */
int __fastcall sub_601B82FC(float *a1);  /* 0x001b82fc */
int __fastcall sub_601B83F8(int a1, int a2);  /* 0x001b83f8 */
unsigned int __fastcall sub_601B86B0(_DWORD *a1);  /* 0x001b86b0 */
int __fastcall sub_601B8758(int result);  /* 0x001b8758 */
int __fastcall sub_601B8768(int a1);  /* 0x001b8768 */
int __fastcall sub_601B8BE8(int a1);  /* 0x001b8be8 */
int __fastcall sub_601B9108(float *a1, float *a2, float *a3);  /* 0x001b9108 */
int __fastcall sub_601B92AC(int a1);  /* 0x001b92ac */
int __fastcall sub_601B95B0(int a1);  /* 0x001b95b0 */
int __fastcall sub_601B99C8(int a1);  /* 0x001b99c8 */
int __fastcall sub_601B9C88(int a1);  /* 0x001b9c88 */
int __fastcall sub_601BA0F8(int a1, int a2);  /* 0x001ba0f8 */
unsigned int __fastcall sub_601BA280(_DWORD *a1);  /* 0x001ba280 */
int __fastcall sub_601BA304(int result);  /* 0x001ba304 */
int __fastcall sub_601BA4DC(int a1);  /* 0x001ba4dc */
int __fastcall sub_601BA56C(int a1, int a2, int a3);  /* 0x001ba56c */
int __fastcall sub_601BA708(int result);  /* 0x001ba708 */
unsigned int __fastcall sub_601BAA8C(int a1);  /* 0x001baa8c */
int __fastcall sub_601BAC64(int a1, float *a2, float *a3, float *a4);  /* 0x001bac64 */
int __fastcall sub_601BB050(int a1);  /* 0x001bb050 */
int __fastcall sub_601BB568(int result);  /* 0x001bb568 */
int __fastcall sub_601BB580(int result);  /* 0x001bb580 */
int __fastcall sub_601BB584(int a1);  /* 0x001bb584 */
int __fastcall sub_601BB5F0(int result);  /* 0x001bb5f0 */
int __fastcall sub_601BB600(int a1);  /* 0x001bb600 */
int __fastcall sub_601BBC60(_DWORD *a1);  /* 0x001bbc60 */
int __fastcall sub_601BBEB4(int a1);  /* 0x001bbeb4 */
int __fastcall sub_601BBEE4(_DWORD *a1);  /* 0x001bbee4 */
int __fastcall sub_601BC1DC(int a1, int *a2);  /* 0x001bc1dc */
int __fastcall sub_601BC2F0(int result, int a2);  /* 0x001bc2f0 */
unsigned int __fastcall sub_601BC2F8(int a1);  /* 0x001bc2f8 */
int __fastcall sub_601BC868(int a1);  /* 0x001bc868 */
int __fastcall sub_601BCA68(int *a1);  /* 0x001bca68 */
int __fastcall sub_601BCAD8(int a1);  /* 0x001bcad8 */
int __fastcall sub_601BCD10(int a1);  /* 0x001bcd10 */
int __fastcall sub_601BCEF4(int a1, int a2, int *a3);  /* 0x001bcef4 */
int __fastcall sub_601BD068(_DWORD *a1, _DWORD *a2);  /* 0x001bd068 */
int __fastcall sub_601BD0E8(_DWORD *a1);  /* 0x001bd0e8 */
bool __fastcall sub_601BD120(int a1, int a2);  /* 0x001bd120 */
int __fastcall sub_601BD2BC(_DWORD *a1);  /* 0x001bd2bc */
int __fastcall sub_601BD358(int a1);  /* 0x001bd358 */
bool __fastcall sub_601BD364(int a1);  /* 0x001bd364 */
int __fastcall sub_601BD3AC(int result);  /* 0x001bd3ac */
int __fastcall sub_601BD3BC(int result);  /* 0x001bd3bc */
int __fastcall sub_601BD3D4(int a1);  /* 0x001bd3d4 */
int __fastcall sub_601BD40C(int a1, int a2);  /* 0x001bd40c */
int __fastcall sub_601BD444(int a1, _DWORD *a2);  /* 0x001bd444 */
int __fastcall sub_601BD488(int a1, int a2);  /* 0x001bd488 */
int __fastcall sub_601BD494(int result, _DWORD *a2);  /* 0x001bd494 */
int __fastcall sub_601BD4A4(int a1, int a2);  /* 0x001bd4a4 */
int __fastcall sub_601BD4CC(int a1);  /* 0x001bd4cc */
int __fastcall sub_601BD4D4(int a1);  /* 0x001bd4d4 */
unsigned int __fastcall sub_601BD8C8(int a1);  /* 0x001bd8c8 */
int __fastcall sub_601BDA4C(int a1);  /* 0x001bda4c */
int __fastcall sub_601BDB3C(int a1);  /* 0x001bdb3c */
int __fastcall sub_601BDBE0(_DWORD *a1);  /* 0x001bdbe0 */
int __fastcall sub_601BDE14(int a1);  /* 0x001bde14 */
int __fastcall sub_601BDEAC(int result);  /* 0x001bdeac */
int __fastcall sub_601BDEB8(int a1);  /* 0x001bdeb8 */
int __fastcall sub_601BE028(int result);  /* 0x001be028 */
int __fastcall sub_601BE04C(_DWORD *a1);  /* 0x001be04c */
int __fastcall sub_601BE13C(int a1);  /* 0x001be13c */
int __fastcall sub_601BE1F4(int a1);  /* 0x001be1f4 */
int __fastcall sub_601BE438(_DWORD *a1);  /* 0x001be438 */
int __fastcall sub_601BE520(int a1);  /* 0x001be520 */
int __fastcall sub_601C0478(int a1);  /* 0x001c0478 */
int __fastcall sub_601C062C(_DWORD *a1);  /* 0x001c062c */
unsigned int __fastcall sub_601C0908(_DWORD *a1);  /* 0x001c0908 */
unsigned int __fastcall sub_601C09F0(_DWORD *a1);  /* 0x001c09f0 */
unsigned int __fastcall sub_601C0ABC(_DWORD *a1);  /* 0x001c0abc */
int __fastcall sub_601C0C88(int *a1);  /* 0x001c0c88 */
int __fastcall sub_601C0E8C(int a1);  /* 0x001c0e8c */
int __fastcall sub_601C100C(_DWORD *a1);  /* 0x001c100c */
int __fastcall sub_601C1174(_DWORD *a1);  /* 0x001c1174 */
int __fastcall sub_601C1228(int a1);  /* 0x001c1228 */
int __fastcall sub_601C16F0(int a1);  /* 0x001c16f0 */
int __fastcall sub_601C182C(_DWORD *a1);  /* 0x001c182c */
int __fastcall sub_601C19BC(_DWORD *a1);  /* 0x001c19bc */
int __fastcall sub_601C1AAC(int a1);  /* 0x001c1aac */
int __fastcall sub_601C1CE0(int a1);  /* 0x001c1ce0 */
int __fastcall sub_601C1EB4(int a1);  /* 0x001c1eb4 */
int __fastcall sub_601C22D4(int a1);  /* 0x001c22d4 */
int __fastcall sub_601C2634(_DWORD *a1);  /* 0x001c2634 */
int __fastcall sub_601C29D8(_DWORD *a1);  /* 0x001c29d8 */
int __fastcall sub_601C2A9C(int a1, int a2);  /* 0x001c2a9c */
int __fastcall sub_601C2BE0(int a1, int a2);  /* 0x001c2be0 */
int __fastcall sub_601C2CF8(_DWORD *a1);  /* 0x001c2cf8 */
int __fastcall sub_601C2E1C(int a1, int a2);  /* 0x001c2e1c */
int __fastcall sub_601C2E3C(int a1);  /* 0x001c2e3c */
int __fastcall sub_601C2E5C(int a1);  /* 0x001c2e5c */
unsigned int __fastcall sub_601C2E80(_DWORD *a1);  /* 0x001c2e80 */
int __fastcall sub_601C2F98(int a1);  /* 0x001c2f98 */
int __fastcall sub_601C310C(int *a1);  /* 0x001c310c */
int __fastcall sub_601C341C(int result);  /* 0x001c341c */
int __fastcall sub_601C384C(int result);  /* 0x001c384c */
int __fastcall sub_601C3860(_DWORD *a1);  /* 0x001c3860 */
int __fastcall sub_601C38BC(int a1);  /* 0x001c38bc */
int __fastcall sub_601C38F0(int a1);  /* 0x001c38f0 */
int __fastcall sub_601C3B08(int result);  /* 0x001c3b08 */
int __fastcall sub_601C3B14(int a1);  /* 0x001c3b14 */
int __fastcall sub_601C3E34(_DWORD *a1);  /* 0x001c3e34 */
int __fastcall sub_601C3FC0(int a1, unsigned __int8 *a2);  /* 0x001c3fc0 */
int __fastcall sub_601C4110(float *a1, float *a2, int a3);  /* 0x001c4110 */
bool __fastcall sub_601C4270(int a1, int a2);  /* 0x001c4270 */
int __fastcall sub_601C4284(float *a1, float *a2, float *a3);  /* 0x001c4284 */
int __fastcall sub_601C42A8(_DWORD *a1);  /* 0x001c42a8 */
unsigned int __fastcall sub_601C43E0(int a1, int a2);  /* 0x001c43e0 */
bool __fastcall sub_601C4404(_DWORD *a1);  /* 0x001c4404 */
int __fastcall sub_601C46E4(int a1);  /* 0x001c46e4 */
int __fastcall sub_601C4708(int a1, int a2, int a3);  /* 0x001c4708 */
bool __fastcall sub_601C4774(int a1);  /* 0x001c4774 */
unsigned int __fastcall sub_601C4814(int a1, float *a2, int a3, int a4);  /* 0x001c4814 */
int __fastcall sub_601C4960(int a1, float *a2, int a3, int a4);  /* 0x001c4960 */
int __fastcall sub_601C4A1C(int a1, float *a2, int a3, int a4, int a5);  /* 0x001c4a1c */
int __fastcall sub_601C4B8C(int a1, float *a2, float *a3, int a4);  /* 0x001c4b8c */
int __fastcall sub_601C4CFC(int a1);  /* 0x001c4cfc */
bool __fastcall sub_601C5024(int a1);  /* 0x001c5024 */
int __fastcall sub_601C5338(int a1, int a2);  /* 0x001c5338 */
int __fastcall sub_601C5354(_DWORD *a1);  /* 0x001c5354 */
int __fastcall sub_601C543C(_DWORD *a1);  /* 0x001c543c */
int __fastcall sub_601C5484(int a1);  /* 0x001c5484 */
int __fastcall sub_601C5718(int a1);  /* 0x001c5718 */
int __fastcall sub_601C581C(int a1);  /* 0x001c581c */
int __fastcall sub_601C5900(int a1);  /* 0x001c5900 */
int __fastcall sub_601C59E4(_DWORD *a1);  /* 0x001c59e4 */
int __fastcall sub_601C5B4C(int result, unsigned int a2);  /* 0x001c5b4c */
int __fastcall sub_601C5B74(int a1);  /* 0x001c5b74 */
int __fastcall sub_601C5EEC(_DWORD *a1);  /* 0x001c5eec */
int __fastcall sub_601C5F50(_DWORD *a1);  /* 0x001c5f50 */
int __fastcall sub_601C6044(int a1, _DWORD *a2);  /* 0x001c6044 */
signed int __fastcall sub_601C6268(int a1);  /* 0x001c6268 */
int __fastcall sub_601C6708(int a1, int a2);  /* 0x001c6708 */
int __fastcall sub_601C676C(int a1, int a2, int a3);  /* 0x001c676c */
int __fastcall sub_601C68A8(int a1, int a2, int a3);  /* 0x001c68a8 */
int __fastcall sub_601C6974(int a1);  /* 0x001c6974 */
int __fastcall sub_601C697C(int a1, int a2, int a3);  /* 0x001c697c */
int __fastcall sub_601C69B0(int result);  /* 0x001c69b0 */
int __fastcall sub_601C69E4(int a1);  /* 0x001c69e4 */
__int64 __fastcall sub_601C6A74(__int64 result);  /* 0x001c6a74 */
bool __fastcall sub_601C6AA0(int a1);  /* 0x001c6aa0 */
int __fastcall sub_601C6BC0(int a1, int a2);  /* 0x001c6bc0 */
int __fastcall sub_601C6BF0(int a1);  /* 0x001c6bf0 */
int __fastcall sub_601C6C14(_DWORD *a1, int a2, int a3);  /* 0x001c6c14 */
int __fastcall sub_601C6D90(int a1, _DWORD *a2);  /* 0x001c6d90 */
int __fastcall sub_601C6F70(int result);  /* 0x001c6f70 */
int __fastcall sub_601C6F7C(int a1);  /* 0x001c6f7c */
int __fastcall sub_601C7300(int a1);  /* 0x001c7300 */
int __fastcall sub_601C7324(int a1);  /* 0x001c7324 */
float __fastcall sub_601C7334(int a1);  /* 0x001c7334 */
int __fastcall sub_601C77CC(_DWORD *a1);  /* 0x001c77cc */
int __fastcall sub_601C7824(int a1, unsigned int a2, _DWORD *a3);  /* 0x001c7824 */
int __fastcall sub_601C7BE4(_DWORD *a1);  /* 0x001c7be4 */
unsigned int __fastcall sub_601C7C84(_DWORD *a1);  /* 0x001c7c84 */
int __fastcall sub_601C7D78(int a1);  /* 0x001c7d78 */
unsigned int __fastcall sub_601C7E04(_DWORD *a1);  /* 0x001c7e04 */
int __fastcall sub_601C7F14(_DWORD *a1);  /* 0x001c7f14 */
int __fastcall sub_601C7FD4(int a1);  /* 0x001c7fd4 */
int __fastcall sub_601C8120(int a1);  /* 0x001c8120 */
int __fastcall sub_601C8380(int a1);  /* 0x001c8380 */
int __fastcall sub_601C8640(_DWORD *a1);  /* 0x001c8640 */
int __fastcall sub_601C86D0(_DWORD *a1);  /* 0x001c86d0 */
int __fastcall sub_601C87E0(int a1);  /* 0x001c87e0 */
int __fastcall sub_601C90C8(int a1);  /* 0x001c90c8 */
int __fastcall sub_601C91C0(int a1);  /* 0x001c91c0 */
int __fastcall sub_601C93D8(int a1, int a2);  /* 0x001c93d8 */
int __fastcall sub_601C9630(_DWORD *a1);  /* 0x001c9630 */
int __fastcall sub_601C9680(_DWORD *a1);  /* 0x001c9680 */
int __fastcall sub_601C976C(int a1);  /* 0x001c976c */
int __fastcall sub_601C9830(int result);  /* 0x001c9830 */
int __fastcall sub_601C983C(int a1);  /* 0x001c983c */
int __fastcall sub_601C9AC0(int a1);  /* 0x001c9ac0 */
int __fastcall sub_601C9B80(int a1);  /* 0x001c9b80 */
int __fastcall sub_601C9F00(int result);  /* 0x001c9f00 */
int __fastcall sub_601C9F10(int a1);  /* 0x001c9f10 */
int __fastcall sub_601CA03C(_DWORD *a1);  /* 0x001ca03c */
int __fastcall sub_601CCD14(int a1, int a2);  /* 0x001ccd14 */
int __fastcall sub_601CCD78(int *a1);  /* 0x001ccd78 */
int __fastcall sub_601CCFA4(_DWORD *a1);  /* 0x001ccfa4 */
int __fastcall sub_601CD0DC(_DWORD *a1);  /* 0x001cd0dc */
int __fastcall sub_601CD204(_DWORD *a1);  /* 0x001cd204 */
int __fastcall sub_601CD450(_DWORD *a1);  /* 0x001cd450 */
int __fastcall sub_601CD574(int a1);  /* 0x001cd574 */
int __fastcall sub_601CD8F8(int a1);  /* 0x001cd8f8 */
int __fastcall sub_601CE14C(int a1);  /* 0x001ce14c */
int __fastcall sub_601CE270(_DWORD *a1);  /* 0x001ce270 */
int __fastcall sub_601CE37C(int a1);  /* 0x001ce37c */
int __fastcall sub_601CE558(int a1);  /* 0x001ce558 */
int __fastcall sub_601CE954(int a1, int a2);  /* 0x001ce954 */
int __fastcall sub_601CE978(int a1, int a2, int a3);  /* 0x001ce978 */
int __fastcall sub_601CEAA8(_DWORD *a1);  /* 0x001ceaa8 */
int __fastcall sub_601CEBD0(int a1);  /* 0x001cebd0 */
int __fastcall sub_601CEBEC(int a1);  /* 0x001cebec */
unsigned int __fastcall sub_601CEC00(_DWORD *a1);  /* 0x001cec00 */
int __fastcall sub_601CED18(int a1, int a2);  /* 0x001ced18 */
int __fastcall sub_601CED7C(int a1, int a2);  /* 0x001ced7c */
int __fastcall sub_601CEEE4(int a1, _DWORD *a2);  /* 0x001ceee4 */
int __fastcall sub_601CF160(struct sead_IDisposer *a1);  /* 0x001cf160 */
int __fastcall sub_601CF2A4(_DWORD *a1);  /* 0x001cf2a4 */
int __fastcall sub_601CF80C(int a1);  /* 0x001cf80c */
int __fastcall sub_601CF9C0(int a1);  /* 0x001cf9c0 */
int __fastcall sub_601CFA84(int a1);  /* 0x001cfa84 */
int __fastcall sub_601CFB8C(int a1, _DWORD *a2, int a3);  /* 0x001cfb8c */
int __fastcall sub_601CFCDC(int a1, int a2);  /* 0x001cfcdc */
bool __fastcall sub_601CFD30(int a1, int a2);  /* 0x001cfd30 */
bool __fastcall sub_601CFD88(int a1, int a2);  /* 0x001cfd88 */
int __fastcall sub_601CFDE0(int a1);  /* 0x001cfde0 */
int __fastcall sub_601CFE3C(int a1);  /* 0x001cfe3c */
int __fastcall sub_601CFF2C(int a1, int a2);  /* 0x001cff2c */
int __fastcall sub_601CFFEC(int a1, int a2);  /* 0x001cffec */
int __fastcall sub_601D013C(int a1);  /* 0x001d013c */
int __fastcall sub_601D0230(int a1, int a2, int a3);  /* 0x001d0230 */
int __fastcall sub_601D0330(unsigned int *a1, int a2);  /* 0x001d0330 */
int __fastcall sub_601D05D4(int a1);  /* 0x001d05d4 */
int __fastcall sub_601D06BC(int a1);  /* 0x001d06bc */
int __fastcall sub_601D07C8(int a1);  /* 0x001d07c8 */
int __fastcall sub_601D0948(int a1);  /* 0x001d0948 */
int __fastcall sub_601D0B54(int a1);  /* 0x001d0b54 */
int __fastcall sub_601D0B7C(int a1);  /* 0x001d0b7c */
int __fastcall sub_601D0D88(int a1);  /* 0x001d0d88 */
int __fastcall sub_601D0DB0(int a1);  /* 0x001d0db0 */
int __fastcall sub_601D0DC0(int a1, int a2);  /* 0x001d0dc0 */
int __fastcall sub_601D10C8(int a1);  /* 0x001d10c8 */
int __fastcall sub_601D1204(int a1);  /* 0x001d1204 */
int __fastcall sub_601D1228(int a1, int a2);  /* 0x001d1228 */
int __fastcall sub_601D1238(int result);  /* 0x001d1238 */
bool __fastcall sub_601D1248(int a1, int a2, _DWORD *a3);  /* 0x001d1248 */
int __fastcall sub_601D12C0(int a1, int a2);  /* 0x001d12c0 */
int __fastcall sub_601D1400(int a1, int a2);  /* 0x001d1400 */
int __fastcall sub_601D1724(int a1);  /* 0x001d1724 */
int __fastcall sub_601D1A14(int a1);  /* 0x001d1a14 */
int __fastcall sub_601D1C5C(int a1, int a2);  /* 0x001d1c5c */
int __fastcall sub_601D1E48(int a1);  /* 0x001d1e48 */
int __fastcall sub_601D22F8(int a1);  /* 0x001d22f8 */
int __fastcall sub_601D27A8(int a1, int a2);  /* 0x001d27a8 */
int __fastcall sub_601D2814(int a1, int a2);  /* 0x001d2814 */
int __fastcall sub_601D28AC(__int64 a1);  /* 0x001d28ac */
int __fastcall sub_601D291C(int result);  /* 0x001d291c */
int __fastcall sub_601D3B8C(int a1);  /* 0x001d3b8c */
int __fastcall sub_601D413C(_DWORD *a1);  /* 0x001d413c */
int __fastcall sub_601D42EC(int a1);  /* 0x001d42ec */
unsigned int __fastcall sub_601D43F8(int a1);  /* 0x001d43f8 */
int __fastcall sub_601D462C(int a1, int a2);  /* 0x001d462c */
int __fastcall sub_601D4E6C(int a1);  /* 0x001d4e6c */
int __fastcall sub_601D532C(int a1);  /* 0x001d532c */
void __fastcall sub_601D54BC(_DWORD *a1);  /* 0x001d54bc */
int __fastcall sub_601D55A4(int a1, int a2, int a3, _DWORD *a4);  /* 0x001d55a4 */
int __fastcall sub_601D5BDC(int result);  /* 0x001d5bdc */
int __fastcall sub_601D5CBC(int a1);  /* 0x001d5cbc */
int __fastcall sub_601D5E34(int result);  /* 0x001d5e34 */
void __fastcall sub_601D5E38(int a1);  /* 0x001d5e38 */
int __fastcall sub_601D63C4(int a1);  /* 0x001d63c4 */
int __fastcall sub_601D6648(_DWORD *a1, int a2);  /* 0x001d6648 */
int __fastcall sub_601D6754(_DWORD *a1);  /* 0x001d6754 */
unsigned int __fastcall sub_601D6DF8(_BYTE *a1);  /* 0x001d6df8 */
int __fastcall sub_601D6E48(int a1);  /* 0x001d6e48 */
unsigned int __fastcall sub_601D6E54(int a1);  /* 0x001d6e54 */
int __fastcall sub_601D6EB0(int result);  /* 0x001d6eb0 */
int __fastcall sub_601D6EBC(int a1);  /* 0x001d6ebc */
int __fastcall sub_601D6EC8(int a1);  /* 0x001d6ec8 */
int __fastcall sub_601D6F50(int a1);  /* 0x001d6f50 */
int __fastcall sub_601D6F74(int a1);  /* 0x001d6f74 */
int __fastcall sub_601D6FB4(int result);  /* 0x001d6fb4 */
int __fastcall sub_601D6FB8(int a1);  /* 0x001d6fb8 */
int __fastcall sub_601D7024(int a1);  /* 0x001d7024 */
int __fastcall sub_601D7414(int a1, int a2);  /* 0x001d7414 */
int __fastcall sub_601D7438(_DWORD *a1);  /* 0x001d7438 */
int __fastcall sub_601D74B8(_DWORD *a1);  /* 0x001d74b8 */
int __fastcall sub_601D7568(int a1);  /* 0x001d7568 */
int __fastcall sub_601D75F4(int a1);  /* 0x001d75f4 */
int __fastcall sub_601D76E0(int a1);  /* 0x001d76e0 */
int __fastcall sub_601D7EF4(_DWORD *a1, int *a2, float *a3, int a4);  /* 0x001d7ef4 */
int __fastcall sub_601D8094(_DWORD *a1);  /* 0x001d8094 */
int __fastcall sub_601D8284(int a1);  /* 0x001d8284 */
int __fastcall sub_601D8424(int a1, unsigned int a2);  /* 0x001d8424 */
int __fastcall sub_601D844C(int a1);  /* 0x001d844c */
int __fastcall sub_601D84A4(int a1, _DWORD *a2);  /* 0x001d84a4 */
int __fastcall sub_601D84D4(int a1, int a2, int a3, _DWORD *a4);  /* 0x001d84d4 */
bool __fastcall sub_601D86E4(int a1, int a2, _BOOL4 a3);  /* 0x001d86e4 */
int __fastcall sub_601D8938(int a1, int a2, int a3);  /* 0x001d8938 */
int __fastcall sub_601D8AE4(_DWORD *a1, int *a2, int a3);  /* 0x001d8ae4 */
unsigned int __fastcall sub_601D8C88(int a1, int a2, int a3);  /* 0x001d8c88 */
int __fastcall sub_601D8D24(int a1);  /* 0x001d8d24 */
int __fastcall sub_601D8D88(int a1);  /* 0x001d8d88 */
int __fastcall sub_601D8DEC(int a1);  /* 0x001d8dec */
int __fastcall sub_601D956C(_DWORD *a1);  /* 0x001d956c */
unsigned int __fastcall sub_601D9980(int a1, int a2);  /* 0x001d9980 */
bool __fastcall sub_601D99A8(int a1, int a2);  /* 0x001d99a8 */
unsigned int __fastcall sub_601D99BC(int a1, int a2);  /* 0x001d99bc */
int __fastcall sub_601D99E4(int a1, _DWORD *a2);  /* 0x001d99e4 */
int __fastcall sub_601D9AEC(int a1, int a2);  /* 0x001d9aec */
int __fastcall sub_601D9B20(int a1);  /* 0x001d9b20 */
int __fastcall sub_601D9B54(int result);  /* 0x001d9b54 */
int __fastcall sub_601D9B88(int a1);  /* 0x001d9b88 */
int __fastcall sub_601D9D10(int a1);  /* 0x001d9d10 */
bool __fastcall sub_601D9D1C(_DWORD *a1);  /* 0x001d9d1c */
int __fastcall sub_601D9D54(_DWORD *a1);  /* 0x001d9d54 */
bool __fastcall sub_601D9D84(_DWORD *a1);  /* 0x001d9d84 */
bool __fastcall sub_601D9E28(_DWORD *a1);  /* 0x001d9e28 */
bool __fastcall sub_601D9E90(_DWORD *a1);  /* 0x001d9e90 */
bool __fastcall sub_601D9EC8(_DWORD *a1);  /* 0x001d9ec8 */
int __fastcall sub_601D9F00(_DWORD *a1, int a2);  /* 0x001d9f00 */
bool __fastcall sub_601D9F8C(_DWORD *a1);  /* 0x001d9f8c */
bool __fastcall sub_601D9FC4(_DWORD *a1);  /* 0x001d9fc4 */
bool __fastcall sub_601DA01C(_DWORD *a1);  /* 0x001da01c */
bool __fastcall sub_601DA074(_DWORD *a1);  /* 0x001da074 */
bool __fastcall sub_601DA0DC(_DWORD *a1);  /* 0x001da0dc */
bool __fastcall sub_601DA114(_DWORD *a1);  /* 0x001da114 */
bool __fastcall sub_601DA1D8(_DWORD *a1);  /* 0x001da1d8 */
bool __fastcall sub_601DA210(_DWORD *a1);  /* 0x001da210 */
bool __fastcall sub_601DA248(_DWORD *a1);  /* 0x001da248 */
bool __fastcall sub_601DA280(_DWORD *a1);  /* 0x001da280 */
bool __fastcall sub_601DA2B8(_DWORD *a1);  /* 0x001da2b8 */
int __fastcall sub_601DA2F0(_DWORD *a1);  /* 0x001da2f0 */
bool __fastcall sub_601DA484(_DWORD *a1);  /* 0x001da484 */
bool __fastcall sub_601DA4BC(_DWORD *a1);  /* 0x001da4bc */
bool __fastcall sub_601DA4F4(_DWORD *a1);  /* 0x001da4f4 */
bool __fastcall sub_601DA52C(_DWORD *a1);  /* 0x001da52c */
bool __fastcall sub_601DA5B8(_DWORD *a1);  /* 0x001da5b8 */
int __fastcall sub_601DA5F0(_DWORD *a1);  /* 0x001da5f0 */
bool __fastcall sub_601DA650(_DWORD *a1);  /* 0x001da650 */
bool __fastcall sub_601DA6F0(unsigned int *a1, _DWORD *a2);  /* 0x001da6f0 */
int __fastcall sub_601DA824(_DWORD *a1);  /* 0x001da824 */
bool __fastcall sub_601DA8A8(_DWORD *a1);  /* 0x001da8a8 */
bool __fastcall sub_601DA8E0(_DWORD *a1);  /* 0x001da8e0 */
int __fastcall sub_601DA918(_DWORD *a1);  /* 0x001da918 */
int __fastcall sub_601DA98C(int a1);  /* 0x001da98c */
bool __fastcall sub_601DAABC(_DWORD *a1);  /* 0x001daabc */
bool __fastcall sub_601DAAF4(_DWORD *a1);  /* 0x001daaf4 */
bool __fastcall sub_601DAB2C(_DWORD *a1);  /* 0x001dab2c */
bool __fastcall sub_601DABF0(_DWORD *a1);  /* 0x001dabf0 */
bool __fastcall sub_601DAC28(_DWORD *a1);  /* 0x001dac28 */
bool __fastcall sub_601DACFC(_DWORD *a1);  /* 0x001dacfc */
bool __fastcall sub_601DAD34(_DWORD *a1);  /* 0x001dad34 */
bool __fastcall sub_601DAD6C(_DWORD *a1);  /* 0x001dad6c */
bool __fastcall sub_601DADA4(_DWORD *a1);  /* 0x001dada4 */
bool __fastcall sub_601DADDC(_DWORD *a1);  /* 0x001daddc */
bool __fastcall sub_601DAE14(_DWORD *a1);  /* 0x001dae14 */
bool __fastcall sub_601DAE4C(_DWORD *a1, int a2);  /* 0x001dae4c */
int __fastcall sub_601DAE88(_DWORD *a1);  /* 0x001dae88 */
int __fastcall sub_601DAEF0(_DWORD *a1);  /* 0x001daef0 */
int __fastcall sub_601DAF58(int *a1, unsigned int a2);  /* 0x001daf58 */
int __fastcall sub_601DB9B8(_DWORD *a1);  /* 0x001db9b8 */
int __fastcall sub_601DBA74(_DWORD *a1);  /* 0x001dba74 */
int __fastcall sub_601DBB50(int a1);  /* 0x001dbb50 */
int __fastcall sub_601DBB64(int32x4_t *a1);  /* 0x001dbb64 */
int __fastcall sub_601DF7DC(int result);  /* 0x001df7dc */
int __fastcall sub_601DF818(int a1, int a2, int a3, int a4);  /* 0x001df818 */
bool __fastcall sub_601DFA40(int a1, int a2);  /* 0x001dfa40 */
int __fastcall sub_601DFB48(_DWORD *a1);  /* 0x001dfb48 */
int __fastcall sub_601DFB60(int a1);  /* 0x001dfb60 */
int __fastcall sub_601DFB98(int a1, int a2);  /* 0x001dfb98 */
int __fastcall sub_601DFBD0(int a1, _DWORD *a2);  /* 0x001dfbd0 */
int __fastcall sub_601DFC14(int a1, int a2);  /* 0x001dfc14 */
int __fastcall sub_601DFC20(int result, _DWORD *a2);  /* 0x001dfc20 */
int __fastcall sub_601DFC30(int a1, int a2);  /* 0x001dfc30 */
int __fastcall sub_601DFC58(int a1);  /* 0x001dfc58 */
int __fastcall sub_601DFC60(int a1);  /* 0x001dfc60 */
int __fastcall sub_601DFE10(int a1);  /* 0x001dfe10 */
int __fastcall sub_601DFE2C(int a1);  /* 0x001dfe2c */
int __fastcall sub_601DFF20(int result, int a2, int a3, int a4);  /* 0x001dff20 */
int __fastcall sub_601DFFE4(int a1);  /* 0x001dffe4 */
int __fastcall sub_601E0010(int a1);  /* 0x001e0010 */
int __fastcall sub_601E0040(int a1);  /* 0x001e0040 */
int __fastcall sub_601E0070(_DWORD *a1, _DWORD *a2);  /* 0x001e0070 */
int __fastcall sub_601E0194(_DWORD *a1);  /* 0x001e0194 */
int __fastcall sub_601E0240(_DWORD *a1, _DWORD *a2);  /* 0x001e0240 */
int __fastcall sub_601E028C(_DWORD *a1);  /* 0x001e028c */
int __fastcall sub_601E02C4(_DWORD *a1);  /* 0x001e02c4 */
int __fastcall sub_601E02F8(_DWORD *a1);  /* 0x001e02f8 */
int __fastcall sub_601E032C(_DWORD *a1, int a2, _DWORD *a3);  /* 0x001e032c */
int __fastcall sub_601E039C(_DWORD *a1, int a2);  /* 0x001e039c */
int __fastcall sub_601E04F4(_DWORD *a1, _DWORD *a2);  /* 0x001e04f4 */
int __fastcall sub_601E0644(_DWORD *a1);  /* 0x001e0644 */
int __fastcall sub_601E06F0(int a1, _DWORD *a2);  /* 0x001e06f0 */
int __fastcall sub_601E08C8(int *a1);  /* 0x001e08c8 */
int __fastcall sub_601E0954(int *a1);  /* 0x001e0954 */
int __fastcall sub_601E0A30(_DWORD *a1);  /* 0x001e0a30 */
int __fastcall sub_601E0AB8(_DWORD *a1);  /* 0x001e0ab8 */
int __fastcall sub_601E0C28(int a1);  /* 0x001e0c28 */
int __fastcall sub_601E0E04(_DWORD *a1, _DWORD *a2);  /* 0x001e0e04 */
int __fastcall sub_601E1000(int a1, _DWORD *a2);  /* 0x001e1000 */
bool __fastcall sub_601E1158(_DWORD *a1);  /* 0x001e1158 */
int __fastcall sub_601E1308(int a1);  /* 0x001e1308 */
int __fastcall sub_601E131C(int a1);  /* 0x001e131c */
int __fastcall sub_601E1330(_DWORD *a1, unsigned int a2);  /* 0x001e1330 */
int __fastcall sub_601E1370(int a1);  /* 0x001e1370 */
int __fastcall sub_601E1384(int a1);  /* 0x001e1384 */
int __fastcall sub_601E1398(_DWORD *a1);  /* 0x001e1398 */
int __fastcall sub_601E14F8(_DWORD *a1, int a2, int *a3);  /* 0x001e14f8 */
int __fastcall sub_601E17C0(_DWORD *a1, int a2, _DWORD *a3, int a4);  /* 0x001e17c0 */
int __fastcall sub_601E1A20(_DWORD *a1, _DWORD *a2, int *a3);  /* 0x001e1a20 */
int __fastcall sub_601E1AB0(int a1);  /* 0x001e1ab0 */
bool __fastcall sub_601E1B80(int a1);  /* 0x001e1b80 */
int __fastcall sub_601E1BE4(_DWORD *a1);  /* 0x001e1be4 */
int __fastcall sub_601E1CF4(int a1);  /* 0x001e1cf4 */
int __fastcall sub_601E1D9C(int a1);  /* 0x001e1d9c */
int __fastcall sub_601E2420(_DWORD *a1);  /* 0x001e2420 */
int __fastcall sub_601E24AC(int a1);  /* 0x001e24ac */
int __fastcall sub_601E24BC(int a1);  /* 0x001e24bc */
int __fastcall sub_601E25CC(int a1);  /* 0x001e25cc */
int __fastcall sub_601E26AC(int a1);  /* 0x001e26ac */
int __fastcall sub_601E26E8(int a1);  /* 0x001e26e8 */
int __fastcall sub_601E2730(_DWORD *a1);  /* 0x001e2730 */
int __fastcall sub_601E27B4(int a1);  /* 0x001e27b4 */
int __fastcall sub_601E290C(int a1);  /* 0x001e290c */
int __fastcall sub_601E2910(int a1);  /* 0x001e2910 */
int __fastcall SE_PLY_ref_2_helper_helper_1E2F00(int a1, unsigned int a2);  /* 0x001e2f00 */
int __fastcall sub_601E2F20(int a1);  /* 0x001e2f20 */
int __fastcall sub_601E322C(_DWORD *a1, unsigned int a2);  /* 0x001e322c */
int __fastcall sub_601E4A74(int result, unsigned int a2, unsigned int a3, int a4);  /* 0x001e4a74 */
int __fastcall sub_601E4BD4(int a1, int a2, int a3, int a4, int a5);  /* 0x001e4bd4 */
int __fastcall sub_601E4C88(_DWORD *a1, int a2, _DWORD *a3);  /* 0x001e4c88 */
int __fastcall sub_601E4DEC(int a1, int a2);  /* 0x001e4dec */
int __fastcall sub_601E4EA4(int a1, int a2, int a3, int a4, int a5);  /* 0x001e4ea4 */
int __fastcall sub_601E4F60(int a1, unsigned int a2);  /* 0x001e4f60 */
int __fastcall sub_601E4F7C(int a1, int a2);  /* 0x001e4f7c */
int __fastcall sub_601E4FB4(int a1, int a2);  /* 0x001e4fb4 */
int __fastcall sub_601E4FF0(_DWORD *a1);  /* 0x001e4ff0 */
int __fastcall sub_601E5000(int a1, int a2, int *a3);  /* 0x001e5000 */
int __fastcall sub_601E5004(int a1, int a2, int *a3);  /* 0x001e5004 */
int __fastcall sub_601E5008(int a1, int a2, int a3, int *a4);  /* 0x001e5008 */
int __fastcall sub_601E500C(int a1, int a2, int a3, int *a4);  /* 0x001e500c */
void __fastcall sub_601E5010(int a1, int a2, int a3, int *a4);  /* 0x001e5010 */
int __fastcall sub_601E5050(int a1, int a2, int a3, int *a4);  /* 0x001e5050 */
int __fastcall sub_601E5090(_DWORD *a1);  /* 0x001e5090 */
int __fastcall sub_601E50B0(int a1, int a2, int a3, int a4);  /* 0x001e50b0 */
int __fastcall sub_601E5130(_DWORD *a1);  /* 0x001e5130 */
int __fastcall sub_601E5180(int a1, int a2, int a3, int a4, int a5);  /* 0x001e5180 */
int __fastcall sub_601E51C8(_DWORD *a1);  /* 0x001e51c8 */
int __fastcall sub_601E5218(int a1, int a2, int a3, int a4, int a5);  /* 0x001e5218 */
int __fastcall sub_601E52CC(struct sead_IDisposer *a1);  /* 0x001e52cc */
int __fastcall sub_601E5344(int a1);  /* 0x001e5344 */
int __fastcall sub_601E5468(int a1);  /* 0x001e5468 */
int __fastcall sub_601E5AB0(int a1);  /* 0x001e5ab0 */
int __fastcall sub_601E6414(int a1);  /* 0x001e6414 */
int __fastcall sub_601E6C04(int a1);  /* 0x001e6c04 */
int __fastcall sub_601E6EA8(_BYTE *a1);  /* 0x001e6ea8 */
int __fastcall sub_601E73A4(int a1);  /* 0x001e73a4 */
int __fastcall sub_601E74A4(int a1);  /* 0x001e74a4 */
int __fastcall sub_601E80B8(int a1);  /* 0x001e80b8 */
int __fastcall sub_601E80C8(int a1);  /* 0x001e80c8 */
int __fastcall sub_601E811C(int a1);  /* 0x001e811c */
int __fastcall sub_601E81AC(int a1, int *a2, int a3);  /* 0x001e81ac */
int __fastcall sub_601E8A94(int a1, int a2);  /* 0x001e8a94 */
int __fastcall sub_601E9B10(int a1);  /* 0x001e9b10 */
int __fastcall sub_601E9B18(int a1, int a2);  /* 0x001e9b18 */
int __fastcall sub_601EA3C4(int a1, int a2);  /* 0x001ea3c4 */
bool __fastcall sub_601EAA9C(int a1, int a2);  /* 0x001eaa9c */
int __fastcall sub_601EAB4C(int a1, int a2);  /* 0x001eab4c */
bool __fastcall sub_601EABD0(int a1);  /* 0x001eabd0 */
int __fastcall sub_601EACE4(int a1);  /* 0x001eace4 */
int __fastcall sub_601EAD20(int a1, int a2);  /* 0x001ead20 */
int __fastcall sub_601EAD58(int a1, _DWORD *a2);  /* 0x001ead58 */
int __fastcall sub_601EAD9C(int a1, int a2);  /* 0x001ead9c */
int __fastcall sub_601EADA8(int result, _DWORD *a2);  /* 0x001eada8 */
int __fastcall sub_601EADB8(int a1, int a2);  /* 0x001eadb8 */
int __fastcall sub_601EADE0(int a1);  /* 0x001eade0 */
int __fastcall sub_601EADE8(int a1);  /* 0x001eade8 */
int __fastcall Actor_CSshadouaikon_build(int a1);  /* 0x001eaf00 */
int __fastcall balloon_shadowkun_ref(int a1);  /* 0x001eaf3c */
int __fastcall sub_601EB40C(int a1);  /* 0x001eb40c */
int __fastcall sub_601EB614(int a1, int a2, int a3, int a4);  /* 0x001eb614 */
int __fastcall sub_601EB66C(int a1);  /* 0x001eb66c */
int __fastcall sub_601EBA20(_DWORD *a1);  /* 0x001eba20 */
int __fastcall Actor_shadoukun_build(int a1);  /* 0x001ec418 */
int __fastcall sub_601EC580(_DWORD *a1);  /* 0x001ec580 */
int __fastcall sub_601EC704(int a1);  /* 0x001ec704 */
int __fastcall sub_601ECA7C(_DWORD *a1, int *a2);  /* 0x001eca7c */
int __fastcall sub_601ECBA0(int32x4_t *a1);  /* 0x001ecba0 */
int __fastcall sub_601ECCEC(int a1, int a2, int a3, int a4);  /* 0x001eccec */
int __fastcall sub_601ECD14(_DWORD *a1, int a2);  /* 0x001ecd14 */
int __fastcall sub_601ECDD8(int a1);  /* 0x001ecdd8 */
int __fastcall sub_601ECFB0(int a1);  /* 0x001ecfb0 */
int __fastcall sub_601ED458(int a1);  /* 0x001ed458 */
int __fastcall sub_601ED54C(_DWORD *a1);  /* 0x001ed54c */
int __fastcall sub_601ED5E0(int *a1, int a2, int a3, int a4);  /* 0x001ed5e0 */
int __fastcall sub_601ED658(int result);  /* 0x001ed658 */
int __fastcall sub_601ED664(int result);  /* 0x001ed664 */
int __fastcall sub_601ED690(int32x4_t *a1);  /* 0x001ed690 */
int __fastcall sub_601ED6F8(int a1, int a2, int a3, int a4);  /* 0x001ed6f8 */
int __fastcall sub_601EDECC(_DWORD *a1);  /* 0x001edecc */
int __fastcall sub_601EDF24(_DWORD *a1);  /* 0x001edf24 */
int __fastcall sub_601EE184(_DWORD *a1);  /* 0x001ee184 */
int __fastcall sub_601EE20C(int32x4_t *a1);  /* 0x001ee20c */
int __fastcall sub_601EE3C4(int a1, int a2, int a3, int a4);  /* 0x001ee3c4 */
int __fastcall sub_601EE974(_DWORD *a1);  /* 0x001ee974 */
int __fastcall sub_601EE9C8(int result);  /* 0x001ee9c8 */
int __fastcall sub_601EEA18(_DWORD *a1);  /* 0x001eea18 */
unsigned int __fastcall sub_601EEAF4(int a1);  /* 0x001eeaf4 */
int __fastcall sub_601EEB9C(_DWORD *a1);  /* 0x001eeb9c */
int __fastcall sub_601EEC94(int result);  /* 0x001eec94 */
int __fastcall sub_601EECC4(int a1);  /* 0x001eecc4 */
int __fastcall sub_601EEDD0(int a1);  /* 0x001eedd0 */
int __fastcall sub_601EEF14(int a1);  /* 0x001eef14 */
int __fastcall sub_601EEFC8(int a1);  /* 0x001eefc8 */
int __fastcall sub_601EF0BC(int a1);  /* 0x001ef0bc */
int __fastcall sub_601EF38C(int *a1, int a2, int a3, int a4);  /* 0x001ef38c */
int __fastcall sub_601EF450(int32x4_t *a1);  /* 0x001ef450 */
int __fastcall sub_601EF4E4(int a1, int a2, int a3, int a4);  /* 0x001ef4e4 */
int __fastcall sub_601EF5F8(int a1);  /* 0x001ef5f8 */
int __fastcall sub_601EF634(int a1);  /* 0x001ef634 */
int __fastcall sub_601EF790(_DWORD *a1);  /* 0x001ef790 */
int __fastcall sub_601EF800(_BYTE *a1);  /* 0x001ef800 */
int __fastcall sub_601EF840(_DWORD *a1);  /* 0x001ef840 */
int __fastcall sub_601EF8AC(_DWORD *a1);  /* 0x001ef8ac */
bool __fastcall sub_601EFA14(int a1, int a2);  /* 0x001efa14 */
int __fastcall sub_601EFB1C(_DWORD *a1);  /* 0x001efb1c */
int __fastcall sub_601EFB38(int a1);  /* 0x001efb38 */
int __fastcall sub_601EFB6C(int a1, int a2);  /* 0x001efb6c */
int __fastcall sub_601EFBA4(int a1, _DWORD *a2);  /* 0x001efba4 */
int __fastcall sub_601EFBE8(int a1, int a2);  /* 0x001efbe8 */
int __fastcall sub_601EFBF4(int result, _DWORD *a2);  /* 0x001efbf4 */
int __fastcall sub_601EFC04(int a1, int a2);  /* 0x001efc04 */
int __fastcall sub_601EFC2C(int a1);  /* 0x001efc2c */
int __fastcall sub_601EFC34(int a1);  /* 0x001efc34 */
int __fastcall sub_601F0180(int a1, _DWORD *a2);  /* 0x001f0180 */
int __fastcall sub_601F0304(int a1);  /* 0x001f0304 */
int __fastcall sub_601F03B8(int a1);  /* 0x001f03b8 */
int __fastcall sub_601F0850(_DWORD *a1);  /* 0x001f0850 */
int __fastcall sub_601F08F4(int a1, int a2, int a3, int a4);  /* 0x001f08f4 */
int __fastcall sub_601F0918(int a1);  /* 0x001f0918 */
int __fastcall sub_601F0970(int a1);  /* 0x001f0970 */
int __fastcall sub_601F0988(float *a1);  /* 0x001f0988 */
int __fastcall sub_601F115C(int a1);  /* 0x001f115c */
int __fastcall sub_601F134C(int a1);  /* 0x001f134c */
int __fastcall sub_601F1434(int a1);  /* 0x001f1434 */
int __fastcall sub_601F1718(int a1);  /* 0x001f1718 */
int __fastcall sub_601F17B0(float *a1);  /* 0x001f17b0 */
int __fastcall sub_601F1BD8(int a1, int a2, int a3, int a4);  /* 0x001f1bd8 */
int __fastcall sub_601F1C88(int a1);  /* 0x001f1c88 */
int __fastcall sub_601F1CE4(_BYTE *a1);  /* 0x001f1ce4 */
int __fastcall sub_601F1D0C(int result);  /* 0x001f1d0c */
int __fastcall sub_601F1D3C(_DWORD *a1);  /* 0x001f1d3c */
int __fastcall sub_601F1D6C(int result);  /* 0x001f1d6c */
int __fastcall sub_601F1E10(int a1);  /* 0x001f1e10 */
int __fastcall sub_601F1FA0(_DWORD *a1);  /* 0x001f1fa0 */
int __fastcall sub_601F2320(_DWORD *a1);  /* 0x001f2320 */
int __fastcall sub_601F2354(_DWORD *a1);  /* 0x001f2354 */
int __fastcall sub_601F2388(_DWORD *a1);  /* 0x001f2388 */
int __fastcall sub_601F23BC(_DWORD *a1);  /* 0x001f23bc */
int __fastcall sub_601F240C(_DWORD *a1);  /* 0x001f240c */
int __fastcall sub_601F2440(_DWORD *a1);  /* 0x001f2440 */
int __fastcall sub_601F2474(_DWORD *a1);  /* 0x001f2474 */
int __fastcall sub_601F24A4(int result, int a2);  /* 0x001f24a4 */
int __fastcall sub_601F24C4(int a1);  /* 0x001f24c4 */
int __fastcall sub_601F258C(int a1, int a2);  /* 0x001f258c */
int __fastcall sub_601F2664(int a1);  /* 0x001f2664 */
int __fastcall sub_601F2688(int a1, int a2, int a3, int a4);  /* 0x001f2688 */
int __fastcall sub_601F275C(Actor *a1);  /* 0x001f275c */
bool __fastcall sub_601F27AC(int a1, int a2);  /* 0x001f27ac */
int __fastcall sub_601F28F8(int a1, int a2);  /* 0x001f28f8 */
int __fastcall sub_601F2968(int a1);  /* 0x001f2968 */
int __fastcall sub_601F2A28(int a1);  /* 0x001f2a28 */
int __fastcall sub_601F2ADC(int a1);  /* 0x001f2adc */
int __fastcall sub_601F2C0C(int a1);  /* 0x001f2c0c */
int __fastcall sub_601F2C4C(int result);  /* 0x001f2c4c */
bool __fastcall sub_601F2C6C(int a1, int a2);  /* 0x001f2c6c */
int __fastcall sub_601F2DC0(_DWORD *a1);  /* 0x001f2dc0 */
int __fastcall sub_601F2E54(int a1);  /* 0x001f2e54 */
int __fastcall sub_601F2E88(int a1, int a2);  /* 0x001f2e88 */
int __fastcall sub_601F2EC0(int a1, _DWORD *a2);  /* 0x001f2ec0 */
int __fastcall sub_601F2F04(int a1, int a2);  /* 0x001f2f04 */
int __fastcall sub_601F2F10(int result, _DWORD *a2);  /* 0x001f2f10 */
int __fastcall sub_601F2F20(int a1, int a2);  /* 0x001f2f20 */
int __fastcall sub_601F2F48(int a1);  /* 0x001f2f48 */
int __fastcall sub_601F2F50(int a1);  /* 0x001f2f50 */
int __fastcall sub_601F3048(int result);  /* 0x001f3048 */
int __fastcall sub_601F3060(int result);  /* 0x001f3060 */
int __fastcall sub_601F3140(int a1);  /* 0x001f3140 */
int __fastcall sub_601F33CC(Actor *a1);  /* 0x001f33cc */
int __fastcall sub_601F3480(int a1, int a2, int a3, int a4);  /* 0x001f3480 */
int __fastcall sub_601F34B4(int a1);  /* 0x001f34b4 */
bool __fastcall sub_601F35D4(int a1, int a2);  /* 0x001f35d4 */
int __fastcall sub_601F36DC(_DWORD *a1);  /* 0x001f36dc */
int __fastcall sub_601F3704(int a1, int a2);  /* 0x001f3704 */
int __fastcall sub_601F373C(int a1, _DWORD *a2);  /* 0x001f373c */
int __fastcall sub_601F3780(int a1, int a2);  /* 0x001f3780 */
int __fastcall sub_601F378C(int result, _DWORD *a2);  /* 0x001f378c */
int __fastcall sub_601F379C(int a1, int a2);  /* 0x001f379c */
int __fastcall sub_601F37C4(int a1);  /* 0x001f37c4 */
int __fastcall sub_601F37CC(int a1);  /* 0x001f37cc */
int __fastcall sub_601F3C10(int a1);  /* 0x001f3c10 */
int __fastcall sub_601F3CF8(_DWORD *a1);  /* 0x001f3cf8 */
bool __fastcall sub_601F3D38(int a1, int a2);  /* 0x001f3d38 */
int __fastcall sub_601F3EB0(_DWORD *a1);  /* 0x001f3eb0 */
int __fastcall Actor_CourseSelectairship_BowserJr_build(_DWORD *a1);  /* 0x001f464c */
int __fastcall sub_601F466C(_DWORD *a1);  /* 0x001f466c */
int __fastcall sub_601F471C(int a1);  /* 0x001f471c */
int __fastcall W7_cs_appear00_ref(int a1);  /* 0x001f4eb0 */
int __fastcall sub_601F56CC(int a1);  /* 0x001f56cc */
int __fastcall sub_601F57C0(_DWORD *a1);  /* 0x001f57c0 */
int __fastcall sub_601F5E84(int result);  /* 0x001f5e84 */
unsigned int __fastcall sub_601F5E90(int a1);  /* 0x001f5e90 */
int __fastcall sub_601F64B0(int result);  /* 0x001f64b0 */
int __fastcall sub_601F64BC(int a1);  /* 0x001f64bc */
int __fastcall sub_601F6548(int result);  /* 0x001f6548 */
int __fastcall sub_601F655C(_DWORD *a1);  /* 0x001f655c */
int __fastcall sub_601F65D0(_DWORD *a1);  /* 0x001f65d0 */
int __fastcall sub_601F664C(int a1, _DWORD *a2);  /* 0x001f664c */
int __fastcall sub_601F67C4(int a1);  /* 0x001f67c4 */
int __fastcall sub_601F6A84(_DWORD *a1);  /* 0x001f6a84 */
int __fastcall sub_601F6A94(int a1, int a2, int a3, int a4);  /* 0x001f6a94 */
int __fastcall sub_601F6AEC(int a1);  /* 0x001f6aec */
int __fastcall sub_601F6B54(int a1);  /* 0x001f6b54 */
int __fastcall sub_601F6B6C(int a1);  /* 0x001f6b6c */
int __fastcall sub_601F74B4(int a1);  /* 0x001f74b4 */
int __fastcall sub_601F7674(_DWORD *a1);  /* 0x001f7674 */
int __fastcall sub_601F76A8(_DWORD *a1);  /* 0x001f76a8 */
int __fastcall sub_601F76D8(int result);  /* 0x001f76d8 */
int __fastcall sub_601F76E4(int a1);  /* 0x001f76e4 */
int __fastcall W7_cs_wait00_ref(int a1);  /* 0x001f77ec */
int __fastcall sub_601F7984(int result);  /* 0x001f7984 */
unsigned int __fastcall sub_601F7998(_DWORD *a1);  /* 0x001f7998 */
int __fastcall sub_601F7A38(int result);  /* 0x001f7a38 */
int __fastcall sub_601F7A44(_DWORD *a1);  /* 0x001f7a44 */
int __fastcall sub_601F7AB4(_DWORD *a1);  /* 0x001f7ab4 */
int __fastcall sub_601F7AE4(int a1);  /* 0x001f7ae4 */
int __fastcall sub_601F7C94(__int64 a1);  /* 0x001f7c94 */
bool __fastcall sub_601F7E84(int a1, int a2);  /* 0x001f7e84 */
int __fastcall sub_601F8124(Actor *a1);  /* 0x001f8124 */
int __fastcall sub_601F8174(int a1);  /* 0x001f8174 */
int __fastcall sub_601F8318(int a1);  /* 0x001f8318 */
int __fastcall sub_601F834C(int a1);  /* 0x001f834c */
int __fastcall sub_601F837C(int a1);  /* 0x001f837c */
bool __fastcall sub_601F83BC(int a1, int a2);  /* 0x001f83bc */
int __fastcall sub_601F85C0(_DWORD *a1);  /* 0x001f85c0 */
int __fastcall sub_601F8654(int a1);  /* 0x001f8654 */
int __fastcall sub_601F8890(int a1);  /* 0x001f8890 */
int __fastcall sub_601F8978(_DWORD *a1);  /* 0x001f8978 */
bool __fastcall sub_601F89B8(int a1, int a2);  /* 0x001f89b8 */
int __fastcall sub_601F8B30(_DWORD *a1);  /* 0x001f8b30 */
int __fastcall Actor_CourseSelectairship_Lemmy_build(_DWORD *a1);  /* 0x001f8ebc */
int __fastcall sub_601F8F5C(int *a1);  /* 0x001f8f5c */
int __fastcall sub_601F90A8(int a1);  /* 0x001f90a8 */
int __fastcall sub_601F9190(_DWORD *a1);  /* 0x001f9190 */
int __fastcall sub_601F91A0(int a1);  /* 0x001f91a0 */
int __fastcall sub_601F9208(int a1);  /* 0x001f9208 */
int __fastcall sub_601F921C(int a1);  /* 0x001f921c */
bool __fastcall sub_601F96C8(int a1, int a2);  /* 0x001f96c8 */
int __fastcall sub_601F9840(_DWORD *a1);  /* 0x001f9840 */
int __fastcall sub_601F9898(int a1);  /* 0x001f9898 */
int __fastcall sub_601F9AE4(int a1);  /* 0x001f9ae4 */
int __fastcall sub_601F9BAC(_DWORD *a1);  /* 0x001f9bac */
bool __fastcall sub_601F9BEC(int a1, int a2);  /* 0x001f9bec */
int __fastcall sub_601F9D64(_DWORD *a1);  /* 0x001f9d64 */
int __fastcall sub_601F9E0C(struct sead_IDisposer *a1);  /* 0x001f9e0c */
int __fastcall sub_601FA238(int a1, _DWORD *a2, int a3, int a4);  /* 0x001fa238 */
bool __fastcall sub_601FA2CC(int a1, int a2);  /* 0x001fa2cc */
int __fastcall sub_601FA428(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4);  /* 0x001fa428 */
int __fastcall sub_601FA4F8(int result);  /* 0x001fa4f8 */
int __fastcall sub_601FA700(int a1);  /* 0x001fa700 */
int __fastcall sub_601FA7E8(_DWORD *a1);  /* 0x001fa7e8 */
bool __fastcall sub_601FA828(int a1, int a2);  /* 0x001fa828 */
int __fastcall sub_601FA9A0(_DWORD *a1);  /* 0x001fa9a0 */
int __fastcall sub_601FABE4(int a1);  /* 0x001fabe4 */
int __fastcall sub_601FACCC(_DWORD *a1);  /* 0x001faccc */
bool __fastcall sub_601FAD0C(int a1, int a2);  /* 0x001fad0c */
int __fastcall sub_601FAE84(_DWORD *a1);  /* 0x001fae84 */
int __fastcall sub_601FB0C0(int a1);  /* 0x001fb0c0 */
int __fastcall sub_601FB1A8(_DWORD *a1);  /* 0x001fb1a8 */
bool __fastcall sub_601FB1E8(int a1, int a2);  /* 0x001fb1e8 */
int __fastcall sub_601FB360(_DWORD *a1);  /* 0x001fb360 */
int __fastcall Actor_CSW9sutageto_build(int a1);  /* 0x001fb3b4 */
int __fastcall sub_601FB434(int a1);  /* 0x001fb434 */
int __fastcall sub_601FB64C(int a1);  /* 0x001fb64c */
int __fastcall sub_601FB7D4(int a1);  /* 0x001fb7d4 */
int __fastcall sub_601FB9DC(int a1, int a2, int a3, int a4);  /* 0x001fb9dc */
int __fastcall sub_601FBA00(int a1);  /* 0x001fba00 */
int __fastcall sub_601FBE34(int a1);  /* 0x001fbe34 */
bool __fastcall sub_601FBFE4(int a1, int a2);  /* 0x001fbfe4 */
int __fastcall sub_601FC138(_DWORD *a1);  /* 0x001fc138 */
int __fastcall Actor_flag_build(int a1);  /* 0x001fc198 */
int __fastcall sub_601FC1E0(int a1);  /* 0x001fc1e0 */
int __fastcall sub_601FC3BC(float *a1);  /* 0x001fc3bc */
int __fastcall sub_601FC414(int a1);  /* 0x001fc414 */
int __fastcall sub_601FC5D0(int a1, int a2, int a3, int a4);  /* 0x001fc5d0 */
int __fastcall sub_601FC5F4(int a1);  /* 0x001fc5f4 */
bool __fastcall sub_601FC748(int a1, int a2);  /* 0x001fc748 */
int __fastcall sub_601FC84C(_DWORD *a1);  /* 0x001fc84c */
int __fastcall Actor_CourseSelectsuichiA_build(int a1);  /* 0x001fc918 */
int __fastcall sub_601FC974(int a1);  /* 0x001fc974 */
int __fastcall sub_601FCB08(int a1);  /* 0x001fcb08 */
int __fastcall sub_601FCC90(int a1);  /* 0x001fcc90 */
int __fastcall sub_601FCCC0(int a1, int a2, int a3, int a4);  /* 0x001fccc0 */
int __fastcall sub_601FCCE8(int a1);  /* 0x001fcce8 */
bool __fastcall sub_601FCE30(int a1, int a2);  /* 0x001fce30 */
int __fastcall sub_601FCF34(_DWORD *a1);  /* 0x001fcf34 */
int __fastcall Actor_CourseSelectsuichiB_build(int a1);  /* 0x001fcfe4 */
int __fastcall sub_601FD040(int a1);  /* 0x001fd040 */
int __fastcall sub_601FD1D4(int a1);  /* 0x001fd1d4 */
int __fastcall sub_601FD35C(int a1);  /* 0x001fd35c */
int __fastcall sub_601FD38C(int a1, int a2, int a3, int a4);  /* 0x001fd38c */
int __fastcall sub_601FD3B4(int a1);  /* 0x001fd3b4 */
bool __fastcall sub_601FD4FC(int a1, int a2);  /* 0x001fd4fc */
int __fastcall sub_601FD600(_DWORD *a1);  /* 0x001fd600 */
int __fastcall sub_601FD6B0(int result);  /* 0x001fd6b0 */
int __fastcall CourseSelectTask_ctor(int a1, int a2);  /* 0x001fd6e4 */
void __fastcall sub_601FD9E0(struct sead_CalculateTask *a1);  /* 0x001fd9e0 */
int __fastcall sub_601FDAC4(struct sead_CalculateTask *a1);  /* 0x001fdac4 */
int __fastcall sub_601FDAD4(int a1);  /* 0x001fdad4 */
int __fastcall sub_601FDB5C(struct sead_TaskBase *a1);  /* 0x001fdb5c */
int __fastcall sub_601FDB60(int a1);  /* 0x001fdb60 */
int __fastcall sub_601FE064(int a1);  /* 0x001fe064 */
int __fastcall sub_601FEA2C(int a1, int a2);  /* 0x001fea2c */
int __fastcall sub_601FEC64(int a1, int *a2);  /* 0x001fec64 */
int __fastcall sub_601FEC8C(int a1, int a2);  /* 0x001fec8c */
int __fastcall sub_601FEDB4(int result, _DWORD *a2);  /* 0x001fedb4 */
int __fastcall sub_601FEDE8(int a1, int *a2);  /* 0x001fede8 */
int __fastcall sub_601FEE08(int a1, int *a2);  /* 0x001fee08 */
int __fastcall sub_601FEE28(int a1);  /* 0x001fee28 */
int __fastcall sub_601FEEEC(int a1);  /* 0x001feeec */
int __fastcall sub_601FF05C(int a1, char a2);  /* 0x001ff05c */
int __fastcall sub_601FF340(int a1, unsigned int a2);  /* 0x001ff340 */
int __fastcall sub_601FF59C(int a1);  /* 0x001ff59c */
int __fastcall sub_601FF5A8(int result, char a2);  /* 0x001ff5a8 */
int __fastcall sub_601FF5B4(int result);  /* 0x001ff5b4 */
int __fastcall sub_601FF5C0(_DWORD *a1);  /* 0x001ff5c0 */
int __fastcall sub_601FF634(int a1);  /* 0x001ff634 */
int __fastcall sub_601FF75C(int a1);  /* 0x001ff75c */
int __fastcall sub_601FF878(int a1, int a2, int a3, int a4);  /* 0x001ff878 */
bool __fastcall sub_601FF9D4(int a1, int a2);  /* 0x001ff9d4 */
int __fastcall sub_601FFC5C(int a1, int a2);  /* 0x001ffc5c */
int __fastcall sub_601FFCF4(int a1, int a2);  /* 0x001ffcf4 */
int __fastcall sub_601FFD90(int a1);  /* 0x001ffd90 */
int __fastcall sub_601FFDCC(int a1, int a2);  /* 0x001ffdcc */
int __fastcall sub_601FFE04(int a1, _DWORD *a2);  /* 0x001ffe04 */
int __fastcall sub_601FFE48(int a1, int a2);  /* 0x001ffe48 */
int __fastcall sub_601FFE54(int result, _DWORD *a2);  /* 0x001ffe54 */
int __fastcall sub_601FFE64(int a1, int a2);  /* 0x001ffe64 */
int __fastcall sub_601FFE8C(int a1);  /* 0x001ffe8c */
int __fastcall sub_601FFE94(int a1);  /* 0x001ffe94 */
int __fastcall sub_601FFFD4(int a1, int a2);  /* 0x001fffd4 */

/* ---- actors_a.c ---- */
int __fastcall sub_6020006C(int a1, int a2);  /* 0x0020006c */
int __fastcall Actor_CourseSelectBoo_build(int a1);  /* 0x00200210 */
int __fastcall sub_60200320(int *a1);  /* 0x00200320 */
int __fastcall sub_60200918(Actor *a1);  /* 0x00200918 */
int __fastcall sub_60200954(int a1);  /* 0x00200954 */
int __fastcall sub_60200B2C(int a1, int a2, int a3, int a4);  /* 0x00200b2c */
int __fastcall sub_60200B60(int a1);  /* 0x00200b60 */
int __fastcall sub_60200CE4(int a1);  /* 0x00200ce4 */
int __fastcall sub_60200DF0(int result);  /* 0x00200df0 */
int __fastcall sub_60200E2C(int a1);  /* 0x00200e2c */
int __fastcall sub_602010B0(int result);  /* 0x002010b0 */
int __fastcall sub_602010C4(int a1);  /* 0x002010c4 */
int __fastcall sub_60201418(int a1);  /* 0x00201418 */
int __fastcall sub_602014CC(int a1);  /* 0x002014cc */
int __fastcall sub_602016E8(int result);  /* 0x002016e8 */
int __fastcall sub_60201744(int a1);  /* 0x00201744 */
int __fastcall sub_60201984(int a1);  /* 0x00201984 */
int __fastcall sub_60201A60(int a1);  /* 0x00201a60 */
bool __fastcall sub_60201A6C(int a1, int a2);  /* 0x00201a6c */
int __fastcall sub_60201B74(_DWORD *a1);  /* 0x00201b74 */
int __fastcall sub_60201B8C(int a1);  /* 0x00201b8c */
int __fastcall sub_60201BC4(int a1, int a2);  /* 0x00201bc4 */
int __fastcall sub_60201BFC(int a1, _DWORD *a2);  /* 0x00201bfc */
int __fastcall sub_60201C40(int a1, int a2);  /* 0x00201c40 */
int __fastcall sub_60201C4C(int result, _DWORD *a2);  /* 0x00201c4c */
int __fastcall sub_60201C5C(int a1, int a2);  /* 0x00201c5c */
int __fastcall sub_60201C84(int a1);  /* 0x00201c84 */
int __fastcall sub_60201C8C(int a1);  /* 0x00201c8c */
int __fastcall Actor_CSpuku_build(_DWORD *a1);  /* 0x00201cb4 */
int __fastcall sub_60201D8C(int result);  /* 0x00201d8c */
int __fastcall sub_60201DB8(int a1);  /* 0x00201db8 */
int __fastcall sub_60201E5C(int a1);  /* 0x00201e5c */
int __fastcall sub_60201F90(int a1);  /* 0x00201f90 */
int __fastcall sub_6020201C(int a1);  /* 0x0020201c */
int __fastcall sub_60202590(int a1);  /* 0x00202590 */
int __fastcall sub_602025A8(int a1);  /* 0x002025a8 */
int __fastcall sub_6020260C(int a1);  /* 0x0020260c */
int __fastcall sub_602026B4(int a1);  /* 0x002026b4 */
int __fastcall sub_602027C8(_DWORD *a1);  /* 0x002027c8 */
int __fastcall sub_60202938(_DWORD *a1);  /* 0x00202938 */
int __fastcall sub_60202964(int *a1);  /* 0x00202964 */
bool __fastcall sub_60202B00(int a1);  /* 0x00202b00 */
int __fastcall sub_60202BBC(_DWORD *a1);  /* 0x00202bbc */
int __fastcall sub_60202D88(_DWORD *a1);  /* 0x00202d88 */
int __fastcall sub_60202DD8(int a1);  /* 0x00202dd8 */
int __fastcall sub_60202DE8(int a1);  /* 0x00202de8 */
int __fastcall sub_60202E38(int a1);  /* 0x00202e38 */
int __fastcall sub_60202E98(_DWORD *a1);  /* 0x00202e98 */
int __fastcall sub_60202EC8(int a1);  /* 0x00202ec8 */
int __fastcall sub_60202F04(_DWORD *a1);  /* 0x00202f04 */
int __fastcall sub_60202F84(int a1);  /* 0x00202f84 */
int __fastcall sub_60203138(int a1);  /* 0x00203138 */
int __fastcall sub_60203254(Actor *a1);  /* 0x00203254 */
int __fastcall sub_60203378(int a1, int a2, int a3, int a4);  /* 0x00203378 */
int __fastcall sub_6020339C(int a1);  /* 0x0020339c */
int __fastcall sub_602034B8(int a1);  /* 0x002034b8 */
unsigned int __fastcall sub_60203660(int a1);  /* 0x00203660 */
int __fastcall sub_602036C4(int a1);  /* 0x002036c4 */
bool __fastcall sub_602036D0(int a1, int a2);  /* 0x002036d0 */
int __fastcall sub_60203840(_DWORD *a1);  /* 0x00203840 */
int __fastcall sub_602038B0(int a1);  /* 0x002038b0 */
int __fastcall sub_602038C4(int a1);  /* 0x002038c4 */
int __fastcall sub_60203EE0(struct sead_IDisposer *a1);  /* 0x00203ee0 */
int __fastcall sub_60203F40(int a1);  /* 0x00203f40 */
int __fastcall sub_60203FF0(int *a1);  /* 0x00203ff0 */
int __fastcall sub_602040E4(_WORD *a1);  /* 0x002040e4 */
int __fastcall sub_60204314(int a1, unsigned int a2);  /* 0x00204314 */
int __fastcall Actor_CSo_build(int a1);  /* 0x002046f8 */
int __fastcall sub_60204758(int a1);  /* 0x00204758 */
int __fastcall sub_60204858(int a1);  /* 0x00204858 */
int __fastcall sub_602049E0(int a1);  /* 0x002049e0 */
int __fastcall sub_60204CEC(int a1, int a2, int a3, int a4);  /* 0x00204cec */
bool __fastcall sub_60204DD8(int a1, int a2);  /* 0x00204dd8 */
int __fastcall sub_60204EDC(_DWORD *a1);  /* 0x00204edc */
int __fastcall Actor_CourseSelectfort_build(int a1);  /* 0x00204eec */
int __fastcall sub_60204F34(int a1);  /* 0x00204f34 */
int __fastcall sub_60205728(int a1);  /* 0x00205728 */
int __fastcall sub_602058B0(int a1);  /* 0x002058b0 */
int __fastcall sub_602058E0(int a1, int a2, int a3, int a4);  /* 0x002058e0 */
int __fastcall sub_60205904(int a1);  /* 0x00205904 */
bool __fastcall sub_60205C74(int a1, int a2);  /* 0x00205c74 */
int __fastcall sub_60205D78(_DWORD *a1);  /* 0x00205d78 */
int __fastcall Actor_CourseSelectfort_bosu_build(int a1);  /* 0x00205e28 */
int __fastcall sub_60206274(int a1);  /* 0x00206274 */
int __fastcall sub_60206700(int a1);  /* 0x00206700 */
int __fastcall sub_60206B00(Actor *a1);  /* 0x00206b00 */
int __fastcall sub_60206B24(int a1, int a2, int a3, int a4);  /* 0x00206b24 */
int __fastcall sub_60206B4C(int a1);  /* 0x00206b4c */
int __fastcall sub_60206F08(int result);  /* 0x00206f08 */
int __fastcall sub_60206F20(int a1);  /* 0x00206f20 */
int __fastcall sub_60206FDC(int a1);  /* 0x00206fdc */
int __fastcall sub_60207224(_DWORD *a1);  /* 0x00207224 */
int __fastcall sub_602074A0(int a1);  /* 0x002074a0 */
int __fastcall sub_6020762C(_DWORD *a1);  /* 0x0020762c */
int __fastcall sub_602076B8(int a1);  /* 0x002076b8 */
int __fastcall sub_60207794(int result);  /* 0x00207794 */
int __fastcall sub_602077A0(int result);  /* 0x002077a0 */
int __fastcall sub_602077C8(int result);  /* 0x002077c8 */
signed int __fastcall sub_602077DC(_DWORD *a1);  /* 0x002077dc */
int __fastcall demo_jump_ref_2(_DWORD *a1);  /* 0x00207bb8 */
int __fastcall sub_60207C5C(int a1);  /* 0x00207c5c */
int __fastcall demo_jump_ref_3(_DWORD *a1);  /* 0x00207d60 */
int __fastcall sub_60207E24(_DWORD *a1);  /* 0x00207e24 */
int __fastcall sub_60207EC0(int result);  /* 0x00207ec0 */
int __fastcall sub_60207ED4(_DWORD *a1);  /* 0x00207ed4 */
int __fastcall sub_602080F4(int result);  /* 0x002080f4 */
bool __fastcall sub_60208124(int a1, int a2);  /* 0x00208124 */
int __fastcall sub_6020822C(_DWORD *a1);  /* 0x0020822c */
int __fastcall sub_60208244(int a1);  /* 0x00208244 */
int __fastcall sub_6020827C(int a1, int a2);  /* 0x0020827c */
int __fastcall sub_602082B4(int a1, _DWORD *a2);  /* 0x002082b4 */
int __fastcall sub_602082F8(int a1, int a2);  /* 0x002082f8 */
int __fastcall sub_60208304(int result, _DWORD *a2);  /* 0x00208304 */
int __fastcall sub_60208314(int a1, int a2);  /* 0x00208314 */
int __fastcall sub_6020833C(int a1);  /* 0x0020833c */
int __fastcall sub_60208344(int a1);  /* 0x00208344 */
int __fastcall sub_602083C0(int a1);  /* 0x002083c0 */
int __fastcall sub_60208454(int result);  /* 0x00208454 */
int __fastcall sub_60208460(_DWORD *a1);  /* 0x00208460 */
int __fastcall sub_6020849C(int a1);  /* 0x0020849c */
int __fastcall sub_602084F4(int a1);  /* 0x002084f4 */
int __fastcall sub_60208714(int result);  /* 0x00208714 */
int __fastcall sub_6020872C(int a1);  /* 0x0020872c */
int __fastcall sub_60208888(_DWORD *a1, int a2);  /* 0x00208888 */
int __fastcall sub_6020899C(Actor *a1);  /* 0x0020899c */
int __fastcall sub_60208B10(int a1, int a2, int a3, int a4);  /* 0x00208b10 */
int __fastcall sub_60208B44(int a1);  /* 0x00208b44 */
int __fastcall sub_60208D50(int a1);  /* 0x00208d50 */
bool __fastcall sub_60208E84(int a1, int a2);  /* 0x00208e84 */
int __fastcall sub_60208F88(_DWORD *a1);  /* 0x00208f88 */
int __fastcall Actor_W2Hammer_burosu_build(int a1);  /* 0x002092a8 */
int __fastcall sub_6020932C(int *a1);  /* 0x0020932c */
int __fastcall sub_602094F4(int *a1);  /* 0x002094f4 */
int __fastcall sub_60209598(int *a1);  /* 0x00209598 */
int __fastcall sub_602096C8(int a1, int a2, int a3, int a4);  /* 0x002096c8 */
int __fastcall sub_602096EC(int a1);  /* 0x002096ec */
int __fastcall sub_602098F0(int result);  /* 0x002098f0 */
int __fastcall sub_60209904(int a1);  /* 0x00209904 */
int __fastcall sub_602099F4(int a1);  /* 0x002099f4 */
int __fastcall sub_60209A30(int a1);  /* 0x00209a30 */
int __fastcall sub_60209AAC(int a1);  /* 0x00209aac */
int __fastcall sub_60209E98(int result);  /* 0x00209e98 */
int __fastcall sub_60209EA8(int result);  /* 0x00209ea8 */
int __fastcall sub_60209ED4(_DWORD *a1);  /* 0x00209ed4 */
int __fastcall sub_60209F28(int a1);  /* 0x00209f28 */
int __fastcall sub_60209F34(int *a1);  /* 0x00209f34 */
int __fastcall sub_60209FF8(int *a1);  /* 0x00209ff8 */
int __fastcall sub_6020A124(int a1);  /* 0x0020a124 */
int __fastcall sub_6020A1A8(_DWORD *a1);  /* 0x0020a1a8 */
int __fastcall sub_6020A1AC(int a1);  /* 0x0020a1ac */
int __fastcall sub_6020A1D8(_DWORD *a1);  /* 0x0020a1d8 */
int __fastcall sub_6020A254(_DWORD *a1);  /* 0x0020a254 */
int __fastcall sub_6020A34C(_DWORD *a1);  /* 0x0020a34c */
unsigned int __fastcall sub_6020A540(int a1);  /* 0x0020a540 */
int __fastcall sub_6020A5A4(int a1);  /* 0x0020a5a4 */
bool __fastcall sub_6020A5B0(int a1, int a2);  /* 0x0020a5b0 */
int __fastcall sub_6020A794(_DWORD *a1);  /* 0x0020a794 */
int __fastcall sub_6020A804(int a1);  /* 0x0020a804 */
bool __fastcall sub_6020A818(int a1);  /* 0x0020a818 */
int __fastcall sub_6020A860(int a1);  /* 0x0020a860 */
int __fastcall sub_6020A86C(int a1);  /* 0x0020a86c */
bool __fastcall sub_6020ABBC(int a1);  /* 0x0020abbc */
int __fastcall sub_6020ABE8(_DWORD *a1);  /* 0x0020abe8 */
int __fastcall sub_6020AE5C(int a1);  /* 0x0020ae5c */
int __fastcall sub_6020AE7C(int a1);  /* 0x0020ae7c */
bool __fastcall sub_6020AEB0(int a1, int a2);  /* 0x0020aeb0 */
int __fastcall sub_6020AFB4(_DWORD *a1);  /* 0x0020afb4 */
int __fastcall sub_6020AFEC(int a1);  /* 0x0020afec */
int __fastcall Actor_CSW2Goomba_build(int a1);  /* 0x0020b0a8 */
int __fastcall sub_6020B138(int a1);  /* 0x0020b138 */
int __fastcall sub_6020B200(int a1);  /* 0x0020b200 */
int __fastcall sub_6020B23C(int32x4_t *a1);  /* 0x0020b23c */
int __fastcall sub_6020B650(int a1);  /* 0x0020b650 */
int __fastcall sub_6020B6CC(int result);  /* 0x0020b6cc */
int __fastcall sub_6020B6D8(int result);  /* 0x0020b6d8 */
int __fastcall sub_6020B8CC(int a1);  /* 0x0020b8cc */
int __fastcall sub_6020B918(int *a1);  /* 0x0020b918 */
int __fastcall sub_6020BA44(_DWORD *a1);  /* 0x0020ba44 */
int __fastcall sub_6020BA94(int a1);  /* 0x0020ba94 */
int __fastcall sub_6020BAA4(int a1);  /* 0x0020baa4 */
int __fastcall sub_6020BACC(_DWORD *a1);  /* 0x0020bacc */
int __fastcall sub_6020BB4C(_DWORD *a1);  /* 0x0020bb4c */
int __fastcall sub_6020BBE8(_DWORD *a1);  /* 0x0020bbe8 */
int __fastcall sub_6020BD18(Actor *a1);  /* 0x0020bd18 */
int __fastcall sub_6020BDBC(Actor *a1);  /* 0x0020bdbc */
int __fastcall sub_6020BE7C(int a1, int a2, int a3, int a4);  /* 0x0020be7c */
bool __fastcall sub_6020BEA0(int a1);  /* 0x0020bea0 */
int __fastcall sub_6020BF28(_DWORD *a1);  /* 0x0020bf28 */
int __fastcall sub_6020C020(_DWORD *a1);  /* 0x0020c020 */
int __fastcall sub_6020C04C(int a1);  /* 0x0020c04c */
unsigned int __fastcall sub_6020C248(int a1);  /* 0x0020c248 */
int __fastcall sub_6020C2AC(int a1);  /* 0x0020c2ac */
bool __fastcall sub_6020C2B8(int a1, int a2);  /* 0x0020c2b8 */
int __fastcall sub_6020C49C(_DWORD *a1);  /* 0x0020c49c */
int __fastcall sub_6020C50C(int a1);  /* 0x0020c50c */
bool __fastcall sub_6020C520(int a1);  /* 0x0020c520 */
int __fastcall sub_6020C568(int a1);  /* 0x0020c568 */
int __fastcall sub_6020C578(int a1);  /* 0x0020c578 */
int __fastcall Actor_CSW4_Item_build(int a1);  /* 0x0020ce10 */
int __fastcall sub_6020CE80(int result);  /* 0x0020ce80 */
int __fastcall sub_6020CEAC(int result);  /* 0x0020ceac */
int __fastcall sub_6020CF24(int a1);  /* 0x0020cf24 */
int __fastcall sub_6020CF60(int result);  /* 0x0020cf60 */
int __fastcall sub_6020D15C(int a1);  /* 0x0020d15c */
int __fastcall sub_6020D1A0(_DWORD *a1);  /* 0x0020d1a0 */
int __fastcall sub_6020D284(int result);  /* 0x0020d284 */
unsigned int __fastcall sub_6020D4EC(int a1);  /* 0x0020d4ec */
int __fastcall sub_6020D5BC(int a1);  /* 0x0020d5bc */
int __fastcall sub_6020D600(int a1);  /* 0x0020d600 */
int __fastcall sub_6020D658(int a1);  /* 0x0020d658 */
int __fastcall sub_6020D878(int a1);  /* 0x0020d878 */
int __fastcall sub_6020DC50(_DWORD *a1, int a2);  /* 0x0020dc50 */
int __fastcall sub_6020DD54(Actor *a1);  /* 0x0020dd54 */
int __fastcall sub_6020DE98(int a1, int a2, int a3, int a4);  /* 0x0020de98 */
int __fastcall sub_6020DEBC(int a1);  /* 0x0020debc */
int __fastcall sub_6020E0F4(int a1);  /* 0x0020e0f4 */
bool __fastcall sub_6020E228(int a1, int a2);  /* 0x0020e228 */
int __fastcall sub_6020E32C(_DWORD *a1);  /* 0x0020e32c */
int __fastcall Actor_CSW5Boo_build(int a1);  /* 0x0020e36c */
int __fastcall sub_6020E460(int a1);  /* 0x0020e460 */
int __fastcall sub_6020EC74(Actor *a1);  /* 0x0020ec74 */
int __fastcall sub_6020ED60(int a1, int a2, int a3, int a4);  /* 0x0020ed60 */
int __fastcall sub_6020ED94(int a1);  /* 0x0020ed94 */
int __fastcall sub_6020EDB4(int a1);  /* 0x0020edb4 */
int __fastcall sub_6020F0D0(int result);  /* 0x0020f0d0 */
int __fastcall sub_6020F0E8(int a1);  /* 0x0020f0e8 */
int __fastcall sub_6020F1D0(int a1);  /* 0x0020f1d0 */
int __fastcall sub_6020F4BC(int a1);  /* 0x0020f4bc */
int __fastcall sub_6020F4E0(int a1);  /* 0x0020f4e0 */
int __fastcall sub_6020F68C(_DWORD *a1);  /* 0x0020f68c */
bool __fastcall sub_6020F78C(int a1);  /* 0x0020f78c */
int __fastcall sub_6021007C(_DWORD *a1);  /* 0x0021007c */
int __fastcall sub_6021019C(int a1);  /* 0x0021019c */
int __fastcall sub_602101E8(int a1);  /* 0x002101e8 */
int __fastcall sub_602101F4(int a1);  /* 0x002101f4 */
int __fastcall sub_60210220(int *a1);  /* 0x00210220 */
int __fastcall sub_60210298(_DWORD *a1);  /* 0x00210298 */
int __fastcall sub_602102D8(int a1);  /* 0x002102d8 */
int __fastcall sub_60210394(_BYTE *a1);  /* 0x00210394 */
int __fastcall sub_602103D0(_DWORD *a1);  /* 0x002103d0 */
int __fastcall sub_6021044C(int a1);  /* 0x0021044c */
int __fastcall sub_602104B4(int a1);  /* 0x002104b4 */
int __fastcall sub_602105FC(int a1);  /* 0x002105fc */
int __fastcall sub_6021065C(int a1);  /* 0x0021065c */
int __fastcall sub_602107C8(int result);  /* 0x002107c8 */
int __fastcall sub_602107E0(int a1);  /* 0x002107e0 */
int __fastcall sub_60210958(int a1);  /* 0x00210958 */
int __fastcall sub_602109A8(int a1);  /* 0x002109a8 */
unsigned int __fastcall sub_602109CC(int a1);  /* 0x002109cc */
int __fastcall sub_60210A30(int a1);  /* 0x00210a30 */
float __fastcall sub_60210A38(int a1, int a2);  /* 0x00210a38 */
int __fastcall sub_60210E88(int a1);  /* 0x00210e88 */
bool __fastcall sub_60210FD4(int a1, int a2);  /* 0x00210fd4 */
int __fastcall sub_602110D8(_DWORD *a1);  /* 0x002110d8 */
int __fastcall sub_60211110(int a1);  /* 0x00211110 */
int __fastcall Actor_CSW7_build(int a1);  /* 0x00211138 */
int __fastcall sub_60211194(int a1);  /* 0x00211194 */
bool __fastcall sub_60211530(int a1);  /* 0x00211530 */
int __fastcall sub_602118F0(_DWORD *a1, int a2);  /* 0x002118f0 */
int __fastcall sub_60211AF4(int a1);  /* 0x00211af4 */
int __fastcall sub_60211D2C(int a1, int a2, int a3, int a4);  /* 0x00211d2c */
int __fastcall sub_60211D50(int a1);  /* 0x00211d50 */
bool __fastcall sub_602120D8(int a1, int a2, int a3);  /* 0x002120d8 */
int __fastcall sub_60213380(int a1);  /* 0x00213380 */
int __fastcall sub_60213504(int result, char a2);  /* 0x00213504 */
bool __fastcall sub_60213514(int a1, int a2);  /* 0x00213514 */
int __fastcall sub_60213618(_DWORD *a1);  /* 0x00213618 */
int __fastcall Actor_CourseSelect_W7_Item_build(int a1);  /* 0x00213628 */
int __fastcall sub_60213688(int result);  /* 0x00213688 */
int __fastcall sub_602136A0(int a1);  /* 0x002136a0 */
int __fastcall sub_60213750(int a1);  /* 0x00213750 */
int __fastcall sub_6021388C(int a1);  /* 0x0021388c */
int __fastcall sub_602138C4(int a1);  /* 0x002138c4 */
int __fastcall sub_60213AC8(int result);  /* 0x00213ac8 */
int __fastcall sub_60213B14(int result);  /* 0x00213b14 */
int __fastcall sub_60213B9C(int a1);  /* 0x00213b9c */
int __fastcall sub_60213CC8(_BYTE *a1);  /* 0x00213cc8 */
int __fastcall sub_60213CE0(int result);  /* 0x00213ce0 */
int __fastcall sub_60213CFC(int result);  /* 0x00213cfc */
int __fastcall sub_60213D08(int result);  /* 0x00213d08 */
int __fastcall sub_60213D18(int result);  /* 0x00213d18 */
int __fastcall sub_60213D70(int result);  /* 0x00213d70 */
int __fastcall sub_60213DDC(_DWORD *a1);  /* 0x00213ddc */
int __fastcall sub_60213F10(int a1);  /* 0x00213f10 */
int __fastcall sub_60213F7C(_DWORD *a1);  /* 0x00213f7c */
int __fastcall sub_60213FC4(int result);  /* 0x00213fc4 */
int __fastcall sub_60214004(int a1);  /* 0x00214004 */
int __fastcall sub_602140D0(int a1);  /* 0x002140d0 */
int __fastcall sub_602142F4(int result);  /* 0x002142f4 */
int __fastcall sub_60214314(int a1);  /* 0x00214314 */
int __fastcall sub_6021433C(int result);  /* 0x0021433c */
int __fastcall sub_6021441C(_BYTE *a1);  /* 0x0021441c */
int __fastcall sub_60214434(int a1);  /* 0x00214434 */
int __fastcall sub_6021454C(_DWORD *a1, int a2);  /* 0x0021454c */
int __fastcall sub_6021483C(int a1);  /* 0x0021483c */
int __fastcall sub_60214DC8(int a1);  /* 0x00214dc8 */
int __fastcall sub_6021501C(int a1, int a2, int a3, int a4);  /* 0x0021501c */
int __fastcall sub_6021508C(int result);  /* 0x0021508c */
int __fastcall sub_602153A0(int a1);  /* 0x002153a0 */
bool __fastcall sub_60215448(int a1, int a2);  /* 0x00215448 */
int __fastcall sub_6021554C(_DWORD *a1);  /* 0x0021554c */
bool __fastcall sub_60215580(int a1);  /* 0x00215580 */
int __fastcall CS_W8a_DarkCloud_ref(_DWORD *a1);  /* 0x00215b9c */
int __fastcall sub_60216340(int a1, int a2);  /* 0x00216340 */
int __fastcall sub_6021666C(int a1);  /* 0x0021666c */
int __fastcall sub_602166AC(int a1, int a2, int a3, int a4);  /* 0x002166ac */
int __fastcall sub_602166DC(_DWORD *a1);  /* 0x002166dc */
bool __fastcall sub_602169EC(int a1, int a2);  /* 0x002169ec */
int __fastcall sub_60216AF0(_DWORD *a1);  /* 0x00216af0 */
int __fastcall sub_60216CF0(int a1);  /* 0x00216cf0 */
int __fastcall sub_60217114(int a1);  /* 0x00217114 */
int __fastcall sub_6021729C(int a1);  /* 0x0021729c */
int __fastcall sub_602173C4(int a1, int a2, int a3, int a4);  /* 0x002173c4 */
int __fastcall sub_602173E8(int *a1);  /* 0x002173e8 */
int __fastcall sub_60217DD8(int a1, _DWORD *a2);  /* 0x00217dd8 */
bool __fastcall sub_60217EBC(int a1, int a2);  /* 0x00217ebc */
int __fastcall sub_60217FC4(_DWORD *a1);  /* 0x00217fc4 */
int __fastcall Actor_CSgeyser_build(int a1);  /* 0x00217fd4 */
int __fastcall sub_602180D8(int a1);  /* 0x002180d8 */
int __fastcall sub_6021828C(int a1);  /* 0x0021828c */
int __fastcall sub_602183B4(int a1, int a2, int a3, int a4);  /* 0x002183b4 */
int __fastcall sub_602183F8(int a1);  /* 0x002183f8 */
int __fastcall sub_6021844C(int a1);  /* 0x0021844c */
int __fastcall sub_602184A4(int a1, int a2);  /* 0x002184a4 */
int __fastcall sub_60218650(int a1);  /* 0x00218650 */
int __fastcall sub_602186C4(int a1);  /* 0x002186c4 */
int __fastcall sub_602186F0(int a1);  /* 0x002186f0 */
int __fastcall sub_60218758(int a1);  /* 0x00218758 */
int __fastcall sub_60218784(int result);  /* 0x00218784 */
int __fastcall sub_602187C8(int result);  /* 0x002187c8 */
int __fastcall sub_602187D4(int result);  /* 0x002187d4 */
int __fastcall sub_602187E0(int a1);  /* 0x002187e0 */
bool __fastcall sub_602189F0(int a1, int a2);  /* 0x002189f0 */
int __fastcall sub_60218B5C(_DWORD *a1);  /* 0x00218b5c */
int __fastcall sub_60218BD4(int a1);  /* 0x00218bd4 */
int __fastcall sub_60218C08(int a1, int a2);  /* 0x00218c08 */
int __fastcall sub_60218C40(int a1, _DWORD *a2);  /* 0x00218c40 */
int __fastcall sub_60218C84(int a1, int a2);  /* 0x00218c84 */
int __fastcall sub_60218C90(int result, _DWORD *a2);  /* 0x00218c90 */
int __fastcall sub_60218CA0(int a1, int a2);  /* 0x00218ca0 */
int __fastcall sub_60218CC8(int a1);  /* 0x00218cc8 */
int __fastcall sub_60218CD0(int a1);  /* 0x00218cd0 */
int __fastcall sub_60218D4C(struct sead_IDisposer *a1);  /* 0x00218d4c */
int __fastcall sub_60218EB0(_DWORD *a1);  /* 0x00218eb0 */
int __fastcall sub_6021927C(_DWORD *a1);  /* 0x0021927c */
int __fastcall sub_60219568(int a1);  /* 0x00219568 */
int __fastcall sub_6021962C(struct sead_IDisposer *a1);  /* 0x0021962c */
int __fastcall sub_602196D8(int a1);  /* 0x002196d8 */
int __fastcall sub_60219858(int a1);  /* 0x00219858 */
int __fastcall sub_60219E1C(int a1);  /* 0x00219e1c */
int __fastcall sub_6021A000(float *a1);  /* 0x0021a000 */
int __fastcall sub_6021A0EC(int a1);  /* 0x0021a0ec */
int __fastcall sub_6021A420(int a1, int a2);  /* 0x0021a420 */
int __fastcall sub_6021A728(int result, int a2);  /* 0x0021a728 */
int __fastcall sub_6021A78C(int a1);  /* 0x0021a78c */
int __fastcall sub_6021AA74(int a1);  /* 0x0021aa74 */
int __fastcall sub_6021B11C(int a1);  /* 0x0021b11c */
int __fastcall sub_6021B528(int result);  /* 0x0021b528 */
void __fastcall sub_6021B54C(int a1);  /* 0x0021b54c */
int __fastcall sub_6021B578(int a1);  /* 0x0021b578 */
int __fastcall sub_6021BC64(int result, char a2);  /* 0x0021bc64 */
int __fastcall sub_6021BD48(int a1);  /* 0x0021bd48 */
int __fastcall sub_6021BF88(int a1, int *a2, int a3);  /* 0x0021bf88 */
int __fastcall sub_6021C520(int result);  /* 0x0021c520 */
void __fastcall sub_6021C548(_BYTE *a1);  /* 0x0021c548 */
void __fastcall sub_6021C56C(int a1, int a2);  /* 0x0021c56c */
int __fastcall sub_6021C5B8(int a1, int a2, int a3);  /* 0x0021c5b8 */
int __fastcall sub_6021C610(int a1);  /* 0x0021c610 */
int __fastcall sub_6021C6F8(int result);  /* 0x0021c6f8 */
int __fastcall sub_6021C710(_DWORD *a1, _DWORD *a2, _DWORD *a3);  /* 0x0021c710 */
int __fastcall sub_6021C7D4(int a1);  /* 0x0021c7d4 */
int __fastcall sub_6021CC78(int a1);  /* 0x0021cc78 */
int __fastcall sub_6021CE80(_DWORD *a1);  /* 0x0021ce80 */
int __fastcall sub_6021CEF4(int a1);  /* 0x0021cef4 */
int __fastcall sub_6021D034(int a1);  /* 0x0021d034 */
int __fastcall sub_6021D2C4(int a1, int a2);  /* 0x0021d2c4 */
bool __fastcall sub_6021D400(int a1);  /* 0x0021d400 */
int __fastcall sub_6021D508(int result);  /* 0x0021d508 */
int __fastcall sub_6021D520(int a1);  /* 0x0021d520 */
int __fastcall sub_6021DA98(struct sead_IDisposer *a1);  /* 0x0021da98 */
int __fastcall sub_6021DAF8(int a1);  /* 0x0021daf8 */
int __fastcall sub_6021DBC8(_DWORD *a1);  /* 0x0021dbc8 */
int __fastcall sub_6021E054(_DWORD *a1);  /* 0x0021e054 */
int __fastcall sub_6021E8AC(_BYTE *a1);  /* 0x0021e8ac */
int __fastcall sub_6021EDAC(int a1);  /* 0x0021edac */
int __fastcall sub_6021EE50(int a1, int a2);  /* 0x0021ee50 */
int __fastcall sub_6021F50C(int a1, int a2, int a3, int a4);  /* 0x0021f50c */
int __fastcall sub_6021F6E0(int a1, _DWORD *a2, _DWORD *a3, int a4);  /* 0x0021f6e0 */
int __fastcall sub_6021F784(_DWORD *a1, _DWORD *a2, _DWORD *a3, unsigned int a4);  /* 0x0021f784 */
int __fastcall sub_6021FA6C(int a1);  /* 0x0021fa6c */
int __fastcall sub_6021FF4C(unsigned int a1, unsigned int a2);  /* 0x0021ff4c */
int __fastcall sub_6021FF78(int a1, int *a2, int a3, _DWORD *a4);  /* 0x0021ff78 */
bool __fastcall sub_602200B4(int a1, int *a2, _DWORD *a3);  /* 0x002200b4 */
int __fastcall sub_6022036C(int a1, int a2, int a3);  /* 0x0022036c */
int __fastcall sub_60220790(int a1);  /* 0x00220790 */
int __fastcall sub_602207C8(int a1);  /* 0x002207c8 */
int __fastcall sub_60220C68(int a1);  /* 0x00220c68 */
int __fastcall sub_60220C7C(int a1);  /* 0x00220c7c */
int __fastcall sub_60220C90(int a1, unsigned int a2);  /* 0x00220c90 */
int __fastcall sub_60220CDC(int a1, int a2, int a3, _DWORD *a4, int a5);  /* 0x00220cdc */
int __fastcall sub_60220E48(int a1);  /* 0x00220e48 */
int __fastcall sub_60220E54(int a1);  /* 0x00220e54 */
int __fastcall sub_60220E60(_DWORD *a1);  /* 0x00220e60 */
bool __fastcall sub_60220EF0(int a1, int a2);  /* 0x00220ef0 */
bool __fastcall sub_60220FF0(int a1, int a2);  /* 0x00220ff0 */
int __fastcall sub_60221164(int a1);  /* 0x00221164 */
int __fastcall sub_60221170(int a1);  /* 0x00221170 */
int __fastcall sub_60221178(int a1, int a2, _DWORD *a3);  /* 0x00221178 */
int __fastcall sub_6022135C(int *a1);  /* 0x0022135c */
int __fastcall sub_60221D3C(int *a1);  /* 0x00221d3c */
int __fastcall sub_60221D44(_DWORD **a1, int a2, int a3, int a4, int a5);  /* 0x00221d44 */
int __fastcall sub_60221D5C(int a1, int a2);  /* 0x00221d5c */
int __fastcall sub_60221EB8(int a1, _DWORD *a2);  /* 0x00221eb8 */
int __fastcall sub_602221C8(_DWORD *a1, int a2, int a3);  /* 0x002221c8 */
int __fastcall sub_602227E8(int a1);  /* 0x002227e8 */
int __fastcall sub_60222950(_DWORD *a1, _DWORD *a2);  /* 0x00222950 */
int __fastcall sub_60222DC8(int a1);  /* 0x00222dc8 */
int __fastcall sub_60223718(int a1);  /* 0x00223718 */
int __fastcall sub_6022392C(int a1);  /* 0x0022392c */
int __fastcall sub_60223B9C(_DWORD *a1, _DWORD *a2);  /* 0x00223b9c */
int __fastcall sub_60223D00(_DWORD *a1);  /* 0x00223d00 */
int __fastcall sub_60223D58(_DWORD *a1);  /* 0x00223d58 */
int __fastcall sub_602241C0(int a1);  /* 0x002241c0 */
int __fastcall sub_60224724(int a1);  /* 0x00224724 */
int __fastcall sub_60224A04(_DWORD *a1, int a2, int a3);  /* 0x00224a04 */
int __fastcall sub_60224B54(_DWORD *a1, int a2, unsigned __int8 *a3, int a4);  /* 0x00224b54 */
int __fastcall sub_60224CC8(int a1, int a2);  /* 0x00224cc8 */
int __fastcall sub_60224DCC(int a1, int a2);  /* 0x00224dcc */
int __fastcall sub_60224ED0(int a1, int a2);  /* 0x00224ed0 */
int __fastcall sub_60224FD4(int a1, _DWORD *a2);  /* 0x00224fd4 */
int __fastcall sub_60225174(int a1, int a2, const char **a3);  /* 0x00225174 */
int __fastcall sub_6022534C(int a1, int a2, int a3);  /* 0x0022534c */
int __fastcall sub_60225484(int a1, int a2, int a3);  /* 0x00225484 */
int __fastcall sub_602255BC(int a1, int a2, int a3);  /* 0x002255bc */
int __fastcall sub_602256F4(int a1, const char **a2, int a3);  /* 0x002256f4 */
int __fastcall sub_60225C6C(int a1);  /* 0x00225c6c */
int __fastcall sub_602265DC(int a1, _DWORD *a2);  /* 0x002265dc */
int __fastcall sub_60226700(int a1, int a2);  /* 0x00226700 */
int __fastcall sub_602268CC(_DWORD *a1, unsigned __int8 **a2);  /* 0x002268cc */
int __fastcall sub_60226A80(int a1, int a2, int a3);  /* 0x00226a80 */
bool __fastcall sub_60226D30(int a1, int a2);  /* 0x00226d30 */
int __fastcall sub_60226F74(_DWORD *a1);  /* 0x00226f74 */
int __fastcall sub_60227944(int a1, int a2);  /* 0x00227944 */
int __fastcall sub_60227A9C(_DWORD *a1);  /* 0x00227a9c */
int __fastcall sub_60227D34(int a1, _DWORD *a2);  /* 0x00227d34 */
int __fastcall sub_60227E00(int a1, int a2);  /* 0x00227e00 */
int __fastcall sub_60227E9C(int a1, _DWORD *a2);  /* 0x00227e9c */
int __fastcall sub_60227F68(int a1);  /* 0x00227f68 */
int __fastcall sub_60229DE0(int a1, int a2, int a3);  /* 0x00229de0 */
int __fastcall sub_60229EAC(int a1, _DWORD *a2);  /* 0x00229eac */
bool __fastcall sub_6022A1D0(int a1);  /* 0x0022a1d0 */
int __fastcall sub_6022A2C8(_DWORD *a1);  /* 0x0022a2c8 */
int __fastcall sub_6022A3E8(int result);  /* 0x0022a3e8 */
bool __fastcall sub_6022A408(int a1);  /* 0x0022a408 */
bool __fastcall sub_6022A490(int a1);  /* 0x0022a490 */
int __fastcall sub_6022A4D8(int a1);  /* 0x0022a4d8 */
int __fastcall sub_6022A51C(int a1);  /* 0x0022a51c */
int __fastcall sub_6022A570(int *a1);  /* 0x0022a570 */
bool __fastcall sub_6022A5C0(int a1, _DWORD *a2);  /* 0x0022a5c0 */
bool __fastcall sub_6022A670(int a1, int a2);  /* 0x0022a670 */
int __fastcall sub_6022A7E4(int (__fastcall ****a1)(_DWORD, int), int a2);  /* 0x0022a7e4 */
int __fastcall sub_6022A8B4(_BYTE *a1);  /* 0x0022a8b4 */
bool __fastcall sub_6022A900(int a1);  /* 0x0022a900 */
int __fastcall sub_6022A99C(struct sead_IDisposer *a1);  /* 0x0022a99c */
int __fastcall sub_6022A9FC(int a1);  /* 0x0022a9fc */
int __fastcall sub_6022AA74(int a1);  /* 0x0022aa74 */
int __fastcall sub_6022AC6C(_BYTE *a1, int a2);  /* 0x0022ac6c */
int __fastcall sub_6022ADB4(int a1);  /* 0x0022adb4 */
int __fastcall sub_6022AE5C(int a1, int *a2, int a3, int a4);  /* 0x0022ae5c */
int __fastcall sub_6022B648(int a1, int a2);  /* 0x0022b648 */
int __fastcall sub_6022B68C(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, int a5);  /* 0x0022b68c */
int __fastcall sub_6022C144(int a1, int a2);  /* 0x0022c144 */
int __fastcall sub_6022C228(int a1, int a2, int a3);  /* 0x0022c228 */
int __fastcall sub_6022C360(int a1, _DWORD *a2);  /* 0x0022c360 */
int __fastcall sub_6022CBE8(int a1, int a2, int a3);  /* 0x0022cbe8 */
bool __fastcall sub_6022CC88(int a1, int a2, int a3);  /* 0x0022cc88 */
int __fastcall sub_6022CD28(int a1, _DWORD *a2, int a3);  /* 0x0022cd28 */
int __fastcall sub_6022D06C(int result, int *a2, char a3);  /* 0x0022d06c */
int __fastcall sub_6022D0D0(int a1, int a2);  /* 0x0022d0d0 */
bool __fastcall sub_6022DC58(int a1, unsigned int a2);  /* 0x0022dc58 */
int __fastcall sub_6022DD20(int a1, int *a2);  /* 0x0022dd20 */
int __fastcall sub_6022DD38(int a1, int a2);  /* 0x0022dd38 */
int __fastcall sub_6022E638(int a1);  /* 0x0022e638 */
int __fastcall sub_6022E6A0(int a1);  /* 0x0022e6a0 */
int __fastcall sub_6022E6D0(int a1);  /* 0x0022e6d0 */
int __fastcall sub_6022E6F4(int a1);  /* 0x0022e6f4 */
int __fastcall sub_6022E718(int a1);  /* 0x0022e718 */
int __fastcall sub_6022E73C(int a1);  /* 0x0022e73c */
bool __fastcall sub_6022E760(int a1);  /* 0x0022e760 */
bool __fastcall sub_6022E79C(int a1);  /* 0x0022e79c */
int __fastcall sub_6022E7D8(int a1);  /* 0x0022e7d8 */
int __fastcall sub_6022E81C(int a1);  /* 0x0022e81c */
int __fastcall sub_6022E8B8(int a1, int *a2);  /* 0x0022e8b8 */
int __fastcall sub_6022EAB8(int a1, _DWORD *a2);  /* 0x0022eab8 */
int __fastcall sub_6022EC2C(int *a1);  /* 0x0022ec2c */
int __fastcall sub_6022F22C(int *a1);  /* 0x0022f22c */
bool __fastcall sub_6022F258(int a1, int a2);  /* 0x0022f258 */
bool __fastcall sub_6022F35C(int a1, int a2);  /* 0x0022f35c */
bool __fastcall sub_6022F460(int a1);  /* 0x0022f460 */
int __fastcall sub_6022F644(int a1);  /* 0x0022f644 */
int __fastcall sub_6022FC48(int a1);  /* 0x0022fc48 */
int __fastcall sub_6022FCB0(int a1);  /* 0x0022fcb0 */
int __fastcall sub_6022FCE0(int a1);  /* 0x0022fce0 */
int __fastcall sub_6022FD04(int a1);  /* 0x0022fd04 */
int __fastcall sub_6022FD28(int a1);  /* 0x0022fd28 */
int __fastcall sub_6022FD4C(int a1);  /* 0x0022fd4c */
bool __fastcall sub_6022FD70(int a1);  /* 0x0022fd70 */
bool __fastcall sub_6022FDAC(int a1);  /* 0x0022fdac */
int __fastcall sub_6022FDE8(int a1);  /* 0x0022fde8 */
int __fastcall sub_6022FE2C(int a1);  /* 0x0022fe2c */
int __fastcall sub_6022FEC8(int a1, int *a2);  /* 0x0022fec8 */
int __fastcall sub_602300C8(int a1, _DWORD *a2);  /* 0x002300c8 */
int __fastcall sub_6023018C(int *a1);  /* 0x0023018c */
int __fastcall sub_602301B8(int a1);  /* 0x002301b8 */
bool __fastcall sub_602301DC(int a1, int a2);  /* 0x002301dc */
int __fastcall sub_60230578(int a1);  /* 0x00230578 */
int __fastcall sub_602311BC(struct sead_IDisposer *a1);  /* 0x002311bc */
int __fastcall sub_602311CC(int result);  /* 0x002311cc */
void __fastcall sub_60231264(struct sead_IDisposer *a1);  /* 0x00231264 */
int __fastcall sub_60231328(struct sead_IDisposer *a1);  /* 0x00231328 */
int __fastcall sub_60231338(int a1);  /* 0x00231338 */
int __fastcall sub_602313B0(int a1);  /* 0x002313b0 */
int __fastcall sub_6023160C(int a1, int a2, int a3, float *a4);  /* 0x0023160c */
int __fastcall sub_60232B58(int a1);  /* 0x00232b58 */
int __fastcall sub_60232E10(int a1);  /* 0x00232e10 */
int __fastcall sub_60232E78(int a1);  /* 0x00232e78 */
int __fastcall sub_60232E8C(int a1);  /* 0x00232e8c */
int __fastcall sub_60232EAC(int a1);  /* 0x00232eac */
int __fastcall sub_60233038(int a1, _DWORD *a2);  /* 0x00233038 */
int __fastcall sub_60233054(int result, int a2);  /* 0x00233054 */
int __fastcall sub_602330FC(int a1);  /* 0x002330fc */
int __fastcall sub_602331F8(int a1);  /* 0x002331f8 */
int __fastcall sub_602333E0(int a1, int a2);  /* 0x002333e0 */
int __fastcall sub_60233444(int a1, int a2);  /* 0x00233444 */
int __fastcall sub_60233464(int a1, int a2);  /* 0x00233464 */
int __fastcall sub_6023349C(int a1, int a2);  /* 0x0023349c */
int __fastcall sub_6023351C(int a1);  /* 0x0023351c */
int __fastcall sub_60233544(int a1);  /* 0x00233544 */
int __fastcall sub_60233568(int a1, int (__fastcall ***a2)(_DWORD, int));  /* 0x00233568 */
int __fastcall sub_602335F0(int a1, int a2);  /* 0x002335f0 */
int __fastcall sub_60233690(int a1, _DWORD *a2);  /* 0x00233690 */
int __fastcall sub_60233760(int a1, _DWORD *a2);  /* 0x00233760 */
int __fastcall sub_602338CC(int a1, int a2, int a3, int a4, _DWORD *a5, int a6, int a7, int a8);  /* 0x002338cc */
int __fastcall sub_60234268(int *a1);  /* 0x00234268 */
int __fastcall sub_602342AC(int a1, int a2, int a3, int a4);  /* 0x002342ac */
int __fastcall sub_60234378(int result, int a2);  /* 0x00234378 */
int __fastcall sub_602343CC(int result, int a2);  /* 0x002343cc */
int __fastcall sub_60234420(int result);  /* 0x00234420 */
int __fastcall sub_6023446C(int a1);  /* 0x0023446c */
int __fastcall sub_602346C0(int a1);  /* 0x002346c0 */
int __fastcall sub_6023473C(int result, int a2, char a3);  /* 0x0023473c */
int __fastcall sub_60234748(_DWORD *a1, int a2, int a3, int a4);  /* 0x00234748 */
int __fastcall sub_60234958(int a1, int a2);  /* 0x00234958 */
int __fastcall sub_60234B78(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x00234b78 */
unsigned int __fastcall sub_60234DE0(int a1);  /* 0x00234de0 */
int __fastcall sub_60234F80(int a1, int a2);  /* 0x00234f80 */
int __fastcall sub_60234FE0(int a1, int a2);  /* 0x00234fe0 */
int __fastcall sub_602350B0(int a1);  /* 0x002350b0 */
int __fastcall sub_602354FC(int a1, int a2);  /* 0x002354fc */
int __fastcall sub_602355CC(_DWORD *a1);  /* 0x002355cc */
int __fastcall sub_6023563C(_DWORD *a1);  /* 0x0023563c */
int __fastcall sub_6023564C(_DWORD *a1);  /* 0x0023564c */
int __fastcall sub_6023565C(_DWORD *a1);  /* 0x0023565c */
int __fastcall sub_6023566C(int result, int a2, int a3);  /* 0x0023566c */
int __fastcall sub_602356B4(int a1, int a2);  /* 0x002356b4 */
int __fastcall sub_60235850(int result);  /* 0x00235850 */
int __fastcall sub_6023586C(float *a1, _DWORD *a2, _DWORD *a3);  /* 0x0023586c */
int __fastcall sub_602359B0(int a1);  /* 0x002359b0 */
int __fastcall EffectData_ctor(int result);  /* 0x00235dd0 */
int __fastcall sub_60235E50(int a1);  /* 0x00235e50 */
int __fastcall EffectData_setEffectId(int a1, int a2);  /* 0x00235ea0 */
int __fastcall EffectData_init(int a1);  /* 0x0023601c */
int __fastcall sub_60236074(int a1);  /* 0x00236074 */
int __fastcall sub_602360C0(int a1);  /* 0x002360c0 */
int __fastcall sub_6023611C(int a1);  /* 0x0023611c */
int __fastcall sub_6023615C(int a1, __int64 *a2);  /* 0x0023615c */
int __fastcall sub_602361D4(int a1);  /* 0x002361d4 */
int __fastcall sub_60236238(int a1);  /* 0x00236238 */
int __fastcall sub_60236290(int a1, int a2);  /* 0x00236290 */
int __fastcall sub_6023636C(int a1, _QWORD *a2);  /* 0x0023636c */
int __fastcall sub_602363D0(int a1, int a2);  /* 0x002363d0 */
int __fastcall EffectData_update(int32x4_t *a1, float *a2, unsigned int *a3, float *a4);  /* 0x00236430 */
int __fastcall sub_60236A80(int a1, __int64 *a2, char a3);  /* 0x00236a80 */
int __fastcall sub_60236D10(int a1, char a2);  /* 0x00236d10 */
int __fastcall sub_60236D5C(int a1, int a2, int a3);  /* 0x00236d5c */
int __fastcall EffectData_create(int a1, int a2, int a3, int a4);  /* 0x00236da0 */
int __fastcall sub_60236DF4(int a1, int a2, int a3);  /* 0x00236df4 */
int __fastcall sub_60236E40(unsigned int a1, int a2, int a3, int a4, int a5);  /* 0x00236e40 */
int __fastcall sub_60236EC4(unsigned int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x00236ec4 */
int __fastcall sub_60236F24(unsigned int a1, int a2, int a3, int a4, int a5);  /* 0x00236f24 */
int __fastcall sub_60236F74(unsigned int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x00236f74 */
bool __fastcall sub_60236FD4(float *a1);  /* 0x00236fd4 */
int __fastcall EffectWrapper_update(int32x4_t *a1, int a2, float *a3, unsigned int *a4, float *a5);  /* 0x00237088 */
int __fastcall sub_60237208(int32x4_t *a1, float *a2, unsigned int *a3, float *a4);  /* 0x00237208 */
int __fastcall sub_602372C0(int a1, int a2, int a3, char a4);  /* 0x002372c0 */
int __fastcall sub_60237454(int a1, __int64 *a2, char a3);  /* 0x00237454 */
int __fastcall EffectWrapper_ctor(int a1);  /* 0x0023750c */
int __fastcall sub_60237560(int a1);  /* 0x00237560 */
int __fastcall sub_602375C4(int32x4_t *a1, int a2, float *a3, unsigned int *a4, float *a5);  /* 0x002375c4 */
int __fastcall sub_60237610(int a1, int a2, int a3, char a4);  /* 0x00237610 */
int __fastcall sub_602378EC(_DWORD *a1, int a2);  /* 0x002378ec */
int __fastcall sub_60237B20(int a1, int a2, int a3);  /* 0x00237b20 */
int __fastcall sub_60237B90(struct sead_IDisposer *a1);  /* 0x00237b90 */
int __fastcall sub_60237BA0(unsigned int a1);  /* 0x00237ba0 */
int __fastcall sub_60237CA4(unsigned int a1);  /* 0x00237ca4 */
int __fastcall sub_60237CAC(unsigned int a1, unsigned int a2);  /* 0x00237cac */
int __fastcall sub_60237CE0(unsigned int a1);  /* 0x00237ce0 */
int __fastcall sub_60237DA0(__int16 a1);  /* 0x00237da0 */
int __fastcall sub_60237E34(struct sead_IDisposer *a1);  /* 0x00237e34 */
int __fastcall sub_60237EA4(int a1);  /* 0x00237ea4 */
int __fastcall sub_60237FD0(int a1);  /* 0x00237fd0 */
int __fastcall sub_6023816C(_DWORD *a1, const char *a2);  /* 0x0023816c */
int __fastcall sub_602384C8(int a1, _DWORD *a2);  /* 0x002384c8 */
bool __fastcall sub_60238714(_QWORD *a1, int a2);  /* 0x00238714 */
bool __fastcall sub_6023875C(int *a1, int a2);  /* 0x0023875c */
int __fastcall sub_60238794(int *a1);  /* 0x00238794 */
int __fastcall sub_602387AC(int *a1);  /* 0x002387ac */
int __fastcall sub_602387C8(_DWORD *a1);  /* 0x002387c8 */
int __fastcall sub_60238950(int result);  /* 0x00238950 */
int __fastcall sub_6023895C(int a1);  /* 0x0023895c */
int __fastcall sub_60238A94(int a1, int a2);  /* 0x00238a94 */
int __fastcall sub_60238B54(int a1);  /* 0x00238b54 */
int __fastcall sub_60238B84(int a1, int a2);  /* 0x00238b84 */
int __fastcall sub_60238D98(_DWORD *a1);  /* 0x00238d98 */
int __fastcall sub_60239158(int a1, _DWORD *a2, int a3, int a4);  /* 0x00239158 */
int __fastcall sub_60239458(int a1, int a2, int a3, int a4, __int64 *a5);  /* 0x00239458 */
int __fastcall sub_602396F8(int a1, int a2, int a3, int *a4);  /* 0x002396f8 */
int __fastcall sub_60239B9C(int result, _DWORD *a2, int a3, int a4);  /* 0x00239b9c */
int __fastcall EffectData_setEffectId_helper(int a1, unsigned int a2);  /* 0x00239bdc */
int __fastcall sub_60239BF4(_DWORD *a1, _DWORD *a2, int a3, unsigned int a4);  /* 0x00239bf4 */
int __fastcall sub_60239E08(int a1, int a2);  /* 0x00239e08 */
int __fastcall sub_60239E88(int a1);  /* 0x00239e88 */
int __fastcall sub_60239E98(int a1);  /* 0x00239e98 */
int __fastcall sub_60239EB0(int a1);  /* 0x00239eb0 */
int __fastcall sub_6023A560(_DWORD *a1);  /* 0x0023a560 */
int __fastcall sub_6023A594(_DWORD *a1);  /* 0x0023a594 */
int __fastcall sub_6023AA6C(int a1, _DWORD *a2);  /* 0x0023aa6c */
int __fastcall sub_6023AB38(float *a1);  /* 0x0023ab38 */
int __fastcall sub_6023AEE0(int32x4_t *a1, int32x4_t *a2);  /* 0x0023aee0 */
int __fastcall sub_6023AF94(int a1, int a2);  /* 0x0023af94 */
unsigned int __fastcall sub_6023B03C(_DWORD *a1, int a2);  /* 0x0023b03c */
int __fastcall sub_6023B10C(_DWORD *a1, int a2);  /* 0x0023b10c */
int __fastcall sub_6023B26C(int a1);  /* 0x0023b26c */
int __fastcall sub_6023B648(_DWORD *a1);  /* 0x0023b648 */
int __fastcall sub_6023B874(_DWORD *a1);  /* 0x0023b874 */
int __fastcall sub_6023BB44(int a1);  /* 0x0023bb44 */
int __fastcall sub_6023C1A0(int result);  /* 0x0023c1a0 */
int __fastcall sub_6023C1B0(int a1);  /* 0x0023c1b0 */
int __fastcall sub_6023C434(int a1);  /* 0x0023c434 */
int __fastcall sub_6023C438(int a1);  /* 0x0023c438 */
int __fastcall sub_6023C600(int a1);  /* 0x0023c600 */
int __fastcall sub_6023CB40(int a1);  /* 0x0023cb40 */
int __fastcall sub_6023D01C(int a1);  /* 0x0023d01c */
int __fastcall sub_6023D250(int a1);  /* 0x0023d250 */
int __fastcall sub_6023D3B4(int a1, int a2, int a3, int a4);  /* 0x0023d3b4 */
int __fastcall sub_6023D3DC(int a1);  /* 0x0023d3dc */
int __fastcall sub_6023D424(int a1);  /* 0x0023d424 */
int __fastcall sub_6023D4FC(int a1);  /* 0x0023d4fc */
int __fastcall sub_6023D5D4(int a1);  /* 0x0023d5d4 */
int __fastcall sub_6023D6B4(int a1);  /* 0x0023d6b4 */
int __fastcall sub_6023D790(int a1);  /* 0x0023d790 */
unsigned int __fastcall sub_6023D870(int a1, int a2, int a3);  /* 0x0023d870 */
int __fastcall sub_6023DADC(int a1, int a2, int a3);  /* 0x0023dadc */
int __fastcall sub_6023DC54(int a1, int a2, int a3, int a4);  /* 0x0023dc54 */
int __fastcall sub_6023DCDC(int a1, int a2, int a3, int a4);  /* 0x0023dcdc */
int __fastcall sub_6023DD64(int a1, float *a2);  /* 0x0023dd64 */
int __fastcall sub_6023DF38(int a1);  /* 0x0023df38 */
int __fastcall sub_6023DFDC(int a1, int a2);  /* 0x0023dfdc */
int __fastcall sub_6023E194(float *a1, int a2);  /* 0x0023e194 */
int __fastcall sub_6023E2A0(int a1);  /* 0x0023e2a0 */
int __fastcall sub_6023EA08(int a1, unsigned __int8 *a2);  /* 0x0023ea08 */
int __fastcall sub_6023ECEC(int a1);  /* 0x0023ecec */
bool __fastcall sub_6023F1A8(int a1, _BYTE *a2);  /* 0x0023f1a8 */
int __fastcall sub_6023F32C(int a1);  /* 0x0023f32c */
int __fastcall sub_6023F538(int a1);  /* 0x0023f538 */
int __fastcall sub_6023F9A0(_DWORD *a1);  /* 0x0023f9a0 */
int __fastcall sub_6023FA9C(int a1);  /* 0x0023fa9c */
int __fastcall sub_6023FEE4(int a1, int a2);  /* 0x0023fee4 */
bool __fastcall sub_6023FF90(int a1, int a2);  /* 0x0023ff90 */
void __fastcall sub_60240108(_BYTE *a1);  /* 0x00240108 */
int __fastcall sub_602401DC(_BYTE *a1);  /* 0x002401dc */
void __fastcall sub_602402B4(int a1);  /* 0x002402b4 */
int __fastcall sub_602403A8(int a1, int a2, int a3);  /* 0x002403a8 */
int __fastcall sub_602403C4(int a1);  /* 0x002403c4 */
int __fastcall sub_6024071C(int a1);  /* 0x0024071c */
int __fastcall sub_602409FC(int result);  /* 0x002409fc */
int __fastcall sub_60240FCC(int a1);  /* 0x00240fcc */
int __fastcall sub_602415F8(int a1);  /* 0x002415f8 */
int __fastcall sub_6024164C(int a1);  /* 0x0024164c */
int __fastcall sub_60241A7C(int a1);  /* 0x00241a7c */
int __fastcall sub_60241CD8(int a1);  /* 0x00241cd8 */
int __fastcall sub_60242140(int result);  /* 0x00242140 */
int __fastcall sub_60242150(int a1);  /* 0x00242150 */
int __fastcall sub_602424F8(int result);  /* 0x002424f8 */
int __fastcall sub_6024252C(int a1);  /* 0x0024252c */
int __fastcall sub_60242C78(int a1, int a2);  /* 0x00242c78 */
bool __fastcall sub_60242F84(int a1);  /* 0x00242f84 */
int __fastcall sub_60242FCC(int a1, _DWORD *a2);  /* 0x00242fcc */
int __fastcall sub_6024313C(int a1);  /* 0x0024313c */
int __fastcall sub_60243658(int *a1);  /* 0x00243658 */
int __fastcall sub_60243E64(int a1);  /* 0x00243e64 */
int __fastcall sub_60243FD0(int a1);  /* 0x00243fd0 */
int __fastcall sub_60244BDC(int a1);  /* 0x00244bdc */
int __fastcall sub_602451DC(int result);  /* 0x002451dc */
int __fastcall sub_602452CC(int a1, int a2, int a3, int a4);  /* 0x002452cc */
int __fastcall sub_602453A0(int *a1, int a2);  /* 0x002453a0 */
int __fastcall sub_6024585C(int a1);  /* 0x0024585c */
int __fastcall sub_60245940(int a1, int a2);  /* 0x00245940 */
int __fastcall sub_60245BC8(int a1);  /* 0x00245bc8 */
int __fastcall sub_60245C6C(int a1);  /* 0x00245c6c */
int __fastcall sub_60245D78(int a1);  /* 0x00245d78 */
bool __fastcall sub_60246030(int a1, _BYTE *a2);  /* 0x00246030 */
int __fastcall sub_602461EC(int a1);  /* 0x002461ec */
int __fastcall sub_60246374(int a1, int a2);  /* 0x00246374 */
unsigned int __fastcall sub_602465B8(float *a1);  /* 0x002465b8 */
unsigned int __fastcall sub_6024679C(int a1, int a2);  /* 0x0024679c */
bool __fastcall sub_60246AD8(int a1);  /* 0x00246ad8 */
int __fastcall sub_60246DE8(int a1);  /* 0x00246de8 */
int __fastcall sub_60246F50(int a1, int a2);  /* 0x00246f50 */
int __fastcall sub_60247198(int a1, int a2);  /* 0x00247198 */
int __fastcall sub_60247340(int a1);  /* 0x00247340 */
int __fastcall sub_6024756C(int a1);  /* 0x0024756c */
int __fastcall sub_6024778C(int a1, int a2, _BYTE *a3);  /* 0x0024778c */
int __fastcall sub_60247984(int a1, _DWORD *a2, int a3);  /* 0x00247984 */
int __fastcall sub_60247BF0(int a1, int a2, int a3);  /* 0x00247bf0 */
int __fastcall sub_60247DFC(int a1, int a2, int a3);  /* 0x00247dfc */
int __fastcall sub_602481EC(int a1, int a2, int a3);  /* 0x002481ec */
int __fastcall sub_602484C8(int a1, int a2, int a3);  /* 0x002484c8 */
int __fastcall sub_602486D8(int a1, int a2, int a3);  /* 0x002486d8 */
int __fastcall sub_60248868(int a1, int a2, int a3);  /* 0x00248868 */
int __fastcall sub_60248A14(int a1, int a2, int a3);  /* 0x00248a14 */
bool __fastcall sub_60248B20(int a1, int a2);  /* 0x00248b20 */
void __fastcall sub_60248C98(Actor *a1);  /* 0x00248c98 */
int __fastcall sub_60248CE8(Actor *a1);  /* 0x00248ce8 */
bool __fastcall sub_60248D48(int a1, int a2, int a3);  /* 0x00248d48 */
bool __fastcall sub_60248D90(int a1, _BYTE *a2, int a3);  /* 0x00248d90 */
bool __fastcall sub_60248DD8(int a1, int a2, int a3);  /* 0x00248dd8 */
bool __fastcall sub_60248E20(int a1, int a2, int a3);  /* 0x00248e20 */
int __fastcall sub_60248E68(int a1, int a2, int a3);  /* 0x00248e68 */
int __fastcall sub_60248E78(int a1, int a2, int a3);  /* 0x00248e78 */
int __fastcall sub_60248E88(int a1, int a2, int a3);  /* 0x00248e88 */
int __fastcall sub_60248EA0(int a1, int a2, int a3);  /* 0x00248ea0 */
int __fastcall sub_60248EB0(int a1, int a2, int a3);  /* 0x00248eb0 */
int __fastcall sub_60248F30(int a1);  /* 0x00248f30 */
int __fastcall sub_60248FA4(int a1);  /* 0x00248fa4 */
int __fastcall sub_6024919C(int a1);  /* 0x0024919c */
int __fastcall sub_60249288(int result);  /* 0x00249288 */
int __fastcall sub_60249298(int a1);  /* 0x00249298 */
int __fastcall sub_602495A4(_DWORD *a1);  /* 0x002495a4 */
int __fastcall sub_602499B4(int a1);  /* 0x002499b4 */
int __fastcall sub_602499E4(int a1, int a2, int a3, int a4);  /* 0x002499e4 */
int __fastcall sub_60249A0C(float *a1, int a2, int a3);  /* 0x00249a0c */
int __fastcall sub_60249A64(float *a1, int a2, int a3);  /* 0x00249a64 */
int __fastcall sub_60249ABC(int a1);  /* 0x00249abc */
int __fastcall sub_60249AD4(int a1, int a2, int a3);  /* 0x00249ad4 */
int __fastcall sub_60249B34(int a1, int a2, int a3);  /* 0x00249b34 */
int __fastcall sub_60249B94(int a1, int a2, int a3);  /* 0x00249b94 */
int __fastcall SE_EMY_YOSHI_HPDP_ref(_DWORD *a1, int a2, int a3);  /* 0x00249c78 */
int __fastcall sub_60249D70(int a1, int a2, int a3);  /* 0x00249d70 */
int __fastcall sub_60249E74(int a1, int a2, int a3);  /* 0x00249e74 */
int __fastcall sub_60249EE8(int a1, int a2, int a3);  /* 0x00249ee8 */
int __fastcall sub_60249EF8(int a1, int a2, int a3);  /* 0x00249ef8 */
int __fastcall sub_60249F58(int a1, int a2, int a3);  /* 0x00249f58 */
int __fastcall sub_60249F68(int a1, int a2, int a3);  /* 0x00249f68 */
int __fastcall sub_6024A018(float *a1, float *a2);  /* 0x0024a018 */
int __fastcall sub_6024A0CC(int a1, _DWORD *a2);  /* 0x0024a0cc */
int __fastcall sub_6024A0E8(int a1);  /* 0x0024a0e8 */
int __fastcall sub_6024A154(int result);  /* 0x0024a154 */
int __fastcall sub_6024A160(int a1, int a2);  /* 0x0024a160 */
bool __fastcall sub_6024A26C(int a1, int a2);  /* 0x0024a26c */
int __fastcall sub_6024A3E4(Actor *a1);  /* 0x0024a3e4 */
int __fastcall sub_6024A448(int a1);  /* 0x0024a448 */
int __fastcall sub_6024ADA8(int a1);  /* 0x0024ada8 */
int __fastcall sub_6024AFB4(int a1);  /* 0x0024afb4 */
int __fastcall sub_6024B130(_DWORD *a1);  /* 0x0024b130 */
int __fastcall sub_6024B4D0(int a1);  /* 0x0024b4d0 */
int __fastcall sub_6024B62C(unsigned int *a1);  /* 0x0024b62c */
int __fastcall sub_6024B96C(int a1);  /* 0x0024b96c */
int __fastcall sub_6024BB04(int a1);  /* 0x0024bb04 */
int __fastcall sub_6024BC38(_DWORD *a1, int a2, char a3, int a4);  /* 0x0024bc38 */
int __fastcall sub_6024C10C(int a1);  /* 0x0024c10c */
int __fastcall sub_6024C230(int a1);  /* 0x0024c230 */
int __fastcall sub_6024C354(int a1, int a2, int a3);  /* 0x0024c354 */
int __fastcall sub_6024C464(int a1, int a2, int a3);  /* 0x0024c464 */
int __fastcall sub_6024C574(int result);  /* 0x0024c574 */
int __fastcall sub_6024C5FC(int a1);  /* 0x0024c5fc */
int __fastcall sub_6024C7BC(_DWORD *a1);  /* 0x0024c7bc */
bool __fastcall sub_6024C81C(int a1, int a2);  /* 0x0024c81c */
void __fastcall sub_6024CA08(_BYTE *a1);  /* 0x0024ca08 */
int __fastcall sub_6024CAB4(_BYTE *a1);  /* 0x0024cab4 */
int __fastcall sub_6024CB64(_DWORD *a1);  /* 0x0024cb64 */
int __fastcall sub_6024CC10(int a1);  /* 0x0024cc10 */
int __fastcall sub_6024CD34(int a1);  /* 0x0024cd34 */
int __fastcall sub_6024CE64(int a1);  /* 0x0024ce64 */
bool __fastcall sub_6024CE68(int a1);  /* 0x0024ce68 */
int __fastcall sub_6024CE84(int result);  /* 0x0024ce84 */
int __fastcall sub_6024CE94(int a1, int a2);  /* 0x0024ce94 */
int __fastcall sub_6024CF30(int a1);  /* 0x0024cf30 */
int __fastcall sub_6024D1F0(int a1);  /* 0x0024d1f0 */
int __fastcall sub_6024D3C4(int a1);  /* 0x0024d3c4 */
int __fastcall sub_6024D71C(int a1);  /* 0x0024d71c */
int __fastcall sub_6024D9C8(int a1);  /* 0x0024d9c8 */
int __fastcall sub_6024DBD4(int a1);  /* 0x0024dbd4 */
int __fastcall sub_6024DE64(int a1);  /* 0x0024de64 */
int __fastcall sub_6024E50C(int a1);  /* 0x0024e50c */
int __fastcall sub_6024E6BC(int result);  /* 0x0024e6bc */
int __fastcall sub_6024E6D0(int a1);  /* 0x0024e6d0 */
int __fastcall eye_wait_ref_2(int *a1);  /* 0x0024e73c */
int __fastcall sub_6024E908(float *a1);  /* 0x0024e908 */
int __fastcall sub_6024EB20(int a1);  /* 0x0024eb20 */
int __fastcall sub_6024EE5C(int a1);  /* 0x0024ee5c */
int __fastcall sub_6024F1F8(int a1);  /* 0x0024f1f8 */
int __fastcall sub_6024F4A8(int a1);  /* 0x0024f4a8 */
int __fastcall sub_6024F660(int a1);  /* 0x0024f660 */
int __fastcall sub_6024F818(int a1);  /* 0x0024f818 */
int __fastcall sub_6024F994(_BYTE *a1);  /* 0x0024f994 */
int __fastcall sub_6024F9C0(int a1);  /* 0x0024f9c0 */
int __fastcall sub_6024FA6C(int a1);  /* 0x0024fa6c */
int __fastcall sub_6024FBEC(int a1);  /* 0x0024fbec */
int __fastcall sub_6024FD2C(int a1);  /* 0x0024fd2c */
bool __fastcall sub_6024FED4(int a1);  /* 0x0024fed4 */
int __fastcall sub_6024FF20(float *a1, int a2, int a3);  /* 0x0024ff20 */
int __fastcall sub_6024FF90(float *a1, int a2, int a3);  /* 0x0024ff90 */
int __fastcall sub_6024FFE0(int a1, int a2);  /* 0x0024ffe0 */
bool __fastcall sub_6025000C(int a1, int a2, int a3);  /* 0x0025000c */
int __fastcall sub_602500EC(int a1);  /* 0x002500ec */
int __fastcall eye_fly_ref(int *a1);  /* 0x00250164 */
int __fastcall sub_602502E4(int a1);  /* 0x002502e4 */
int __fastcall sub_60250368(int a1);  /* 0x00250368 */
int __fastcall sub_60250484(int a1);  /* 0x00250484 */
int __fastcall sub_60250658(float *a1);  /* 0x00250658 */
void __fastcall sub_602506AC(int a1);  /* 0x002506ac */
int __fastcall sub_60250784(int a1);  /* 0x00250784 */
int __fastcall sub_60250848(int *a1);  /* 0x00250848 */
int __fastcall sub_60250910(int a1);  /* 0x00250910 */
int __fastcall sub_60250998(int *a1);  /* 0x00250998 */
int __fastcall sub_60250A7C(int a1);  /* 0x00250a7c */
int __fastcall sub_60250B34(int a1, int a2);  /* 0x00250b34 */
int __fastcall sub_60250B48(int a1);  /* 0x00250b48 */
bool __fastcall sub_60250CD4(int a1, int a2);  /* 0x00250cd4 */
void __fastcall sub_60250E4C(_BYTE *a1);  /* 0x00250e4c */
int __fastcall sub_60250ECC(_BYTE *a1);  /* 0x00250ecc */
bool __fastcall sub_60250F50(int a1);  /* 0x00250f50 */
int __fastcall sub_60251054(int a1);  /* 0x00251054 */
int __fastcall sub_602516B4(int a1);  /* 0x002516b4 */
int __fastcall sub_60251838(int a1);  /* 0x00251838 */
int __fastcall sub_602518C0(int a1);  /* 0x002518c0 */
int __fastcall SE_EMY_MAMEKURIBO_CLING_ref(int a1);  /* 0x00251ab0 */
int __fastcall sub_60251ECC(int result);  /* 0x00251ecc */
int __fastcall sub_60251F20(int a1);  /* 0x00251f20 */
int __fastcall sub_602520F0(int result);  /* 0x002520f0 */
int __fastcall sub_60252114(int a1);  /* 0x00252114 */
int __fastcall sub_60252184(int a1);  /* 0x00252184 */
int __fastcall sub_6025224C(int a1);  /* 0x0025224c */
int __fastcall sub_6025250C(int *a1);  /* 0x0025250c */
int __fastcall sub_6025261C(int a1);  /* 0x0025261c */
int __fastcall sub_602527EC(int a1);  /* 0x002527ec */
int __fastcall sub_60252864(int a1, int a2, int a3, int a4);  /* 0x00252864 */
int __fastcall sub_60252890(int a1);  /* 0x00252890 */
int __fastcall sub_602528C8(int a1);  /* 0x002528c8 */
int __fastcall sub_602528CC(int a1, int a2, int a3);  /* 0x002528cc */
int __fastcall sub_60252AD4(float *a1, int a2, int a3);  /* 0x00252ad4 */
int __fastcall sub_60252BD0(_DWORD *a1, int a2);  /* 0x00252bd0 */
int __fastcall sub_60252C6C(int *a1, int a2, int a3);  /* 0x00252c6c */
int __fastcall sub_60252DA4(int a1);  /* 0x00252da4 */
int __fastcall sub_60252EC8(float *a1, int a2);  /* 0x00252ec8 */
int __fastcall sub_60252F50(float *a1, int a2);  /* 0x00252f50 */
int __fastcall sub_60252FD8(float *a1, int a2);  /* 0x00252fd8 */
int __fastcall sub_602530BC(int a1, int *a2);  /* 0x002530bc */
int __fastcall sub_602530E8(int a1, int *a2);  /* 0x002530e8 */
int __fastcall sub_60253114(int a1);  /* 0x00253114 */
int __fastcall sub_60253194(int a1, int a2);  /* 0x00253194 */
int __fastcall sub_60253344(int a1, int a2);  /* 0x00253344 */
void __fastcall sub_602534F4(int a1);  /* 0x002534f4 */
int __fastcall sub_60253554(int a1);  /* 0x00253554 */
int __fastcall sub_602535A0(int a1);  /* 0x002535a0 */
int __fastcall sub_602537B0(int a1, int a2);  /* 0x002537b0 */
bool __fastcall sub_602537C4(int a1, int a2);  /* 0x002537c4 */
void __fastcall sub_6025393C(_BYTE *a1);  /* 0x0025393c */
int __fastcall sub_602539AC(_BYTE *a1);  /* 0x002539ac */
int __fastcall sub_60253A20(int a1);  /* 0x00253a20 */
bool __fastcall sub_60253A2C(int a1);  /* 0x00253a2c */
int __fastcall sub_60253A4C(int a1);  /* 0x00253a4c */
int __fastcall sub_60253A58(int a1);  /* 0x00253a58 */
int __fastcall sub_60253A6C(int a1);  /* 0x00253a6c */
int __fastcall sub_60253DBC(struct sead_IDisposer *a1);  /* 0x00253dbc */
int __fastcall sub_60253E2C(int a1);  /* 0x00253e2c */
int __fastcall sub_60253F94(int a1, int a2, char a3);  /* 0x00253f94 */
int __fastcall sub_60254000(int a1, int a2, int a3, int a4, int a5);  /* 0x00254000 */
int __fastcall sub_602540E8(int a1, unsigned int a2);  /* 0x002540e8 */
int __fastcall sub_6025412C(int result);  /* 0x0025412c */
int __fastcall sub_60254138(_DWORD *a1);  /* 0x00254138 */
int __fastcall hanachan_big_head_ref(_DWORD *a1, int a2);  /* 0x002546b8 */
int __fastcall sub_602547A4(_DWORD *a1, _DWORD *a2);  /* 0x002547a4 */
int __fastcall sub_602547D8(int result);  /* 0x002547d8 */
int __fastcall sub_60254A28(int a1);  /* 0x00254a28 */
int __fastcall hanachan_big_ref(_DWORD *a1, int a2);  /* 0x00254d6c */
int __fastcall sub_60255064(_DWORD *a1, int *a2);  /* 0x00255064 */
int __fastcall sub_602551E8(int a1);  /* 0x002551e8 */
int __fastcall GiantWiggler_onCreate(int a1);  /* 0x002554cc */
int __fastcall sub_602559BC(int a1);  /* 0x002559bc */
void __fastcall sub_60255B24(int a1);  /* 0x00255b24 */
int __fastcall GiantWiggler_vf8(int a1);  /* 0x00255f24 */
int __fastcall sub_602561CC(int a1, _DWORD *a2);  /* 0x002561cc */
int __fastcall GiantWiggler_vf12(int a1);  /* 0x0025638c */
int __fastcall GiantWiggler_vf15(int a1);  /* 0x002563d8 */
int __fastcall sub_602563F0(int a1);  /* 0x002563f0 */
int __fastcall sub_6025663C(int a1);  /* 0x0025663c */
int __fastcall GiantWiggler_vf18(int a1);  /* 0x002567a4 */
void __fastcall GiantWiggler_vf19(int a1);  /* 0x0025699c */
int __fastcall GiantWiggler_vf93(int a1, _DWORD *a2);  /* 0x00256ca8 */
int __fastcall GiantWiggler_vf95(int a1, _DWORD *a2);  /* 0x00256cf0 */
bool __fastcall sub_60256CFC(int a1, int a2, float *a3);  /* 0x00256cfc */
int __fastcall GiantWiggler_vf66(float *a1, int a2, int a3);  /* 0x00256ee4 */
int __fastcall GiantWiggler_vf67(float *a1, int a2, int a3);  /* 0x00257160 */
int __fastcall GiantWiggler_vf73(int a1, int a2, int a3);  /* 0x0025739c */
int __fastcall GiantWiggler_vf71(int a1);  /* 0x002574b4 */
int __fastcall GiantWiggler_vf79(int a1, int a2, int a3);  /* 0x002574c0 */
int __fastcall GiantWiggler_vf80(int a1, int a2, int a3);  /* 0x00257524 */
int __fastcall sub_60257538(int a1, int a2);  /* 0x00257538 */
int __fastcall sub_60257688(_DWORD *a1);  /* 0x00257688 */
int __fastcall sub_60257704(int a1, int a2);  /* 0x00257704 */
int __fastcall sub_60257718(_DWORD *a1);  /* 0x00257718 */
int __fastcall sub_60257794(int a1, int *a2);  /* 0x00257794 */
bool __fastcall GiantWiggler_vf0(int a1, int a2);  /* 0x002577b0 */
void __fastcall sub_60257928(_DWORD *a1);  /* 0x00257928 */
int __fastcall GiantWiggler_vf3(_DWORD *a1);  /* 0x00257a4c */
int __fastcall GiantWiggler_vf56(int a1);  /* 0x00257a60 */
int __fastcall sub_60257AE8(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x00257ae8 */
int __fastcall sub_60257BD0(int a1, int a2, int a3, int a4, int a5);  /* 0x00257bd0 */
int __fastcall sub_60257BE8(_DWORD ***a1);  /* 0x00257be8 */
int __fastcall sub_60257E24(int a1);  /* 0x00257e24 */
int __fastcall sub_60257E48(int a1);  /* 0x00257e48 */
int __fastcall sub_60257E50(int a1);  /* 0x00257e50 */
int __fastcall sub_60258174(int result);  /* 0x00258174 */
int __fastcall sub_60258188(int result);  /* 0x00258188 */
int __fastcall sub_602581D8(_DWORD *a1);  /* 0x002581d8 */
int __fastcall sub_6025834C(int a1);  /* 0x0025834c */
int __fastcall sub_60258428(int a1);  /* 0x00258428 */
int __fastcall body_stop_ref(int a1);  /* 0x00258470 */
int __fastcall sub_60258518(int a1);  /* 0x00258518 */
int __fastcall sub_602585C0(int *a1);  /* 0x002585c0 */
int __fastcall sub_602586D8(int *a1);  /* 0x002586d8 */
int __fastcall sub_60258A64(int a1);  /* 0x00258a64 */
int __fastcall sub_60258C1C(int a1);  /* 0x00258c1c */
int __fastcall sub_602597BC(int a1, int a2);  /* 0x002597bc */
int __fastcall sub_6025985C(int a1);  /* 0x0025985c */
int __fastcall sub_60259964(int a1, int a2);  /* 0x00259964 */
int __fastcall sub_60259D4C(int a1);  /* 0x00259d4c */
bool __fastcall sub_60259F90(int a1, int a2);  /* 0x00259f90 */
int __fastcall SE_EMY_TOUCH_BH_HIBANA_ref(int result, int a2, int a3);  /* 0x00259fb8 */
int __fastcall sub_6025A030(int a1);  /* 0x0025a030 */
int __fastcall sub_6025A2DC(int result);  /* 0x0025a2dc */
int __fastcall sub_6025A2F4(int a1);  /* 0x0025a2f4 */
int __fastcall sub_6025A430(_DWORD *a1);  /* 0x0025a430 */
int __fastcall sub_6025A658(int a1);  /* 0x0025a658 */
int __fastcall sub_6025A6AC(int a1);  /* 0x0025a6ac */
int __fastcall sub_6025A764(int a1);  /* 0x0025a764 */
int __fastcall sub_6025AC44(_BYTE *a1);  /* 0x0025ac44 */
int __fastcall sub_6025AD84(int a1);  /* 0x0025ad84 */
int __fastcall sub_6025B1A8(_DWORD *a1);  /* 0x0025b1a8 */
int __fastcall sub_6025B990(int result);  /* 0x0025b990 */
int __fastcall sub_6025B9D4(_DWORD *a1);  /* 0x0025b9d4 */
int __fastcall sub_6025C02C(int result);  /* 0x0025c02c */
int __fastcall SE_EMY_KAME_KERU_ref(int a1);  /* 0x0025c070 */
int __fastcall sub_6025C194(int a1);  /* 0x0025c194 */
int __fastcall sub_6025C3F0(_DWORD *a1);  /* 0x0025c3f0 */
int __fastcall sub_6025C400(int result);  /* 0x0025c400 */
int __fastcall sub_6025C6F0(int a1);  /* 0x0025c6f0 */
void __fastcall sub_6025C7C0(int a1);  /* 0x0025c7c0 */
int __fastcall BobOmb_ctor(int a1);  /* 0x0025cebc */
int __fastcall BobOmb_onCreate(int a1);  /* 0x0025d0d8 */
int __fastcall BobOmb_setupModel(_DWORD *a1);  /* 0x0025d3c8 */
int __fastcall BobOmb_decideFirstState(int a1);  /* 0x0025d528 */
int __fastcall sub_6025D704(int a1);  /* 0x0025d704 */
int __fastcall BobOmb_onExecute(_DWORD *a1);  /* 0x0025db1c */
int __fastcall sub_6025DE4C(int a1);  /* 0x0025de4c */
int __fastcall sub_6025DEB0(int a1);  /* 0x0025deb0 */
int __fastcall BobOmb_onDraw(int a1);  /* 0x0025dfc4 */
int __fastcall BobOmb_onDelete(int a1);  /* 0x0025e020 */
int __fastcall sub_6025E104(int a1, int a2);  /* 0x0025e104 */
int __fastcall sub_6025E2A8(int a1);  /* 0x0025e2a8 */
int __fastcall sub_6025E398(int a1, int a2);  /* 0x0025e398 */
int __fastcall BobOmb_vf158(int a1, int a2);  /* 0x0025e874 */
void __fastcall BobOmb_vf94(int a1, int a2);  /* 0x0025e91c */
int __fastcall BobOmb_vf159(int a1, int a2, int a3);  /* 0x0025e9ec */
int __fastcall BobOmb_vf67(int a1, int a2, int a3);  /* 0x0025ec94 */
int __fastcall BobOmb_vf73(int a1, int a2, int a3);  /* 0x0025ee10 */
int __fastcall BobOmb_vf74(_DWORD *a1, int a2, int a3);  /* 0x0025ef5c */
int __fastcall BobOmb_vf79(int *a1, int a2, int a3);  /* 0x0025efc4 */
int __fastcall BobOmb_vf82(int a1, int a2, int a3);  /* 0x0025f188 */
int __fastcall sub_6025F29C(int a1, int a2, int a3);  /* 0x0025f29c */
int __fastcall BobOmb_vf71(int a1);  /* 0x0025f32c */
int __fastcall sub_6025F338(int a1, int a2, int a3);  /* 0x0025f338 */
int __fastcall BobOmb_vf52(int a1);  /* 0x0025f6cc */
int __fastcall BobOmb_vf55(_BYTE *a1);  /* 0x0025f7b8 */
int __fastcall BobOmb_vf32(int a1);  /* 0x0025f7d8 */
int __fastcall BobOmb_vf162(int a1, int a2, int a3);  /* 0x0025f9bc */
int __fastcall sub_6025FA10(int a1, int a2, int a3);  /* 0x0025fa10 */
unsigned int __fastcall sub_6025FA54(int a1, int a2);  /* 0x0025fa54 */
bool __fastcall sub_6025FB2C(int a1);  /* 0x0025fb2c */
int __fastcall sub_6025FC2C(int a1);  /* 0x0025fc2c */
int __fastcall sub_6025FFE4(int a1, int a2);  /* 0x0025ffe4 */
int __fastcall sub_602600B0(int result);  /* 0x002600b0 */
int __fastcall sub_602600E4(int a1);  /* 0x002600e4 */
int __fastcall BobOmb_vf168(int a1);  /* 0x002602e8 */
int __fastcall BobOmb_vf170(int result);  /* 0x00260418 */
int __fastcall BobOmb_vf169(int a1);  /* 0x00260428 */
int __fastcall sub_602605EC(int a1);  /* 0x002605ec */
int __fastcall BobOmb_vf165(int a1);  /* 0x00260684 */
int __fastcall BobOmb_vf167(int a1);  /* 0x00260724 */
int __fastcall BobOmb_vf166(int a1);  /* 0x0026074c */
int __fastcall BobOmb_vf171(int a1);  /* 0x00260844 */
int __fastcall BobOmb_vf173(_DWORD *a1);  /* 0x00260964 */
int __fastcall BobOmb_vf172(int a1);  /* 0x0026097c */
int __fastcall sub_60260BAC(int a1);  /* 0x00260bac */
int __fastcall BobOmb_vf153(_BYTE *a1);  /* 0x00260c10 */
int __fastcall BobOmb_vf155(int a1);  /* 0x00260c28 */
int __fastcall BobOmb_vf154(_BYTE *a1);  /* 0x00260c4c */
int __fastcall BobOmb_vf114(int a1);  /* 0x00260c50 */
int __fastcall BobOmb_vf26(float *a1);  /* 0x00260c84 */
int __fastcall BobOmb_vf27(int a1, int *a2);  /* 0x00260cd0 */
int __fastcall BobOmb_vf28(int a1, int *a2);  /* 0x00260cfc */
int __fastcall BobOmb_vf30(int a1, int *a2);  /* 0x00260d28 */
int __fastcall sub_60260D54(int a1, int a2, float *a3);  /* 0x00260d54 */
bool __fastcall BobOmb_vf46(int a1);  /* 0x00261000 */
int __fastcall BobOmb_vf49(int a1);  /* 0x00261020 */
int __fastcall BobOmb_vf163(int a1);  /* 0x002610e4 */
int __fastcall BobOmb_vf164(int a1);  /* 0x002610fc */
bool __fastcall BobOmb_vf0(int a1, int a2);  /* 0x00261114 */
int __fastcall BobOmb_vf3(_BYTE *a1);  /* 0x00261300 */
bool __fastcall sub_602613B0(int a1, int a2);  /* 0x002613b0 */
bool __fastcall sub_602613D4(int a1, int a2);  /* 0x002613d4 */
int __fastcall sub_60261400(int a1);  /* 0x00261400 */
int __fastcall Actor_parabomu_RDash_build(_DWORD *a1);  /* 0x00261428 */
int __fastcall sub_602614F8(int a1);  /* 0x002614f8 */
int __fastcall sub_60261664(int result);  /* 0x00261664 */
int __fastcall para_receive_ref(int a1);  /* 0x0026167c */
int __fastcall sub_60261720(int a1);  /* 0x00261720 */
int __fastcall sub_6026179C(int result);  /* 0x0026179c */
int __fastcall sub_602617AC(int a1);  /* 0x002617ac */
int __fastcall sub_602617EC(int a1);  /* 0x002617ec */
int __fastcall sub_602617F0(int result);  /* 0x002617f0 */
int __fastcall root_parachute_ref(int *a1);  /* 0x00261800 */
int __fastcall sub_602618E8(int *a1);  /* 0x002618e8 */
int __fastcall root_parachute_ref_2(int a1);  /* 0x00261a08 */
int __fastcall sub_60261ADC(int a1);  /* 0x00261adc */
int __fastcall sub_60261BA0(int a1, int a2, int a3);  /* 0x00261ba0 */
int __fastcall sub_60261FBC(int a1, int a2, float *a3);  /* 0x00261fbc */
bool __fastcall sub_60261FF4(int a1, int a2);  /* 0x00261ff4 */
bool __fastcall BoomerangBro_vf181(int a1);  /* 0x00262570 */
int __fastcall BoomerangBro_vf180(int result);  /* 0x00262618 */
int __fastcall BoomerangBro_vf189(int a1);  /* 0x002626ac */
int __fastcall BoomerangBro_vf186(int a1);  /* 0x00262704 */
int __fastcall BoomerangBro_vf55(int *a1);  /* 0x002629fc */
int __fastcall BoomerangBro_vf188(int a1);  /* 0x00262a48 */
int __fastcall BoomerangBro_vf202(int result);  /* 0x00262d44 */
bool __fastcall BoomerangBro_vf0(int a1, int a2);  /* 0x00262e1c */
int __fastcall BoomerangBro_vf3(_BYTE *a1);  /* 0x002630b4 */
int __fastcall BoomerangBro_vf190(int result);  /* 0x0026316c */
int __fastcall BrosBase_ctor(int a1);  /* 0x002632f0 */
int __fastcall sub_60263858(int a1);  /* 0x00263858 */
int __fastcall sub_60263968(int a1);  /* 0x00263968 */
int __fastcall sub_60263B68(_DWORD *a1);  /* 0x00263b68 */
int __fastcall sub_60263E44(int a1);  /* 0x00263e44 */
bool __fastcall sub_60263FA4(int a1);  /* 0x00263fa4 */
int __fastcall sub_602640A0(int a1);  /* 0x002640a0 */
int __fastcall sub_60264900(int a1, const char *a2, int a3);  /* 0x00264900 */
int __fastcall sub_6026508C(int result);  /* 0x0026508c */
bool __fastcall sub_60266410(int a1);  /* 0x00266410 */
int __fastcall sub_60266ED4(int a1, int a2);  /* 0x00266ed4 */
int __fastcall sub_602671E4(int a1, int a2);  /* 0x002671e4 */
int __fastcall StateVirtual_BroBase_vf2(int a1);  /* 0x002675a8 */
int __fastcall sub_602675D0(int a1, int a2);  /* 0x002675d0 */
int __fastcall sub_60267A60(unsigned __int16 *a1);  /* 0x00267a60 */
int __fastcall sub_60267A98(int result);  /* 0x00267a98 */
int __fastcall sub_6026819C(int a1);  /* 0x0026819c */
bool __fastcall sub_602682F0(int a1);  /* 0x002682f0 */
int __fastcall sub_6026831C(int a1);  /* 0x0026831c */
int __fastcall sub_602685FC(int *a1);  /* 0x002685fc */
int __fastcall sub_60268E04(int a1);  /* 0x00268e04 */
int __fastcall sub_60269418(int a1);  /* 0x00269418 */
int __fastcall sub_602694F8(int a1, int a2, int a3, int a4);  /* 0x002694f8 */
int __fastcall sub_60269548(int a1);  /* 0x00269548 */
int __fastcall sub_6026975C(int a1);  /* 0x0026975c */
int __fastcall sub_6026979C(int a1, int a2, int a3);  /* 0x0026979c */
int __fastcall sub_60269860(int a1, int a2, int a3);  /* 0x00269860 */
int __fastcall sub_60269918(int a1, int a2, int a3);  /* 0x00269918 */
int __fastcall sub_602699E0(int a1, int a2, int a3);  /* 0x002699e0 */
int __fastcall sub_60269A9C(int a1, int a2, int a3);  /* 0x00269a9c */
int __fastcall sub_60269BC8(_DWORD *a1, int a2, int a3);  /* 0x00269bc8 */
int __fastcall sub_60269D58(int a1);  /* 0x00269d58 */
int __fastcall sub_60269DF8(int a1, float *a2);  /* 0x00269df8 */
int __fastcall sub_60269EA0(int a1);  /* 0x00269ea0 */
int __fastcall sub_60269F18(int a1, int a2);  /* 0x00269f18 */
int __fastcall sub_60269F70(int a1, int a2);  /* 0x00269f70 */
int __fastcall sub_6026A048(int result);  /* 0x0026a048 */
bool __fastcall sub_6026A054(int a1, int a2);  /* 0x0026a054 */
void __fastcall sub_6026A1CC(_BYTE *a1);  /* 0x0026a1cc */
int __fastcall sub_6026A278(_BYTE *a1);  /* 0x0026a278 */
int __fastcall sub_6026A32C(int a1, unsigned int a2);  /* 0x0026a32c */
int __fastcall sub_6026A33C(int a1);  /* 0x0026a33c */
bool __fastcall sub_6026A5F4(int a1);  /* 0x0026a5f4 */
bool __fastcall sub_6026A620(int a1, int a2);  /* 0x0026a620 */
int __fastcall sub_6026A80C(_BYTE *a1);  /* 0x0026a80c */
int __fastcall sub_6026A8BC(int a1, __int16 a2);  /* 0x0026a8bc */
int __fastcall sub_6026A8C4(int a1, int a2);  /* 0x0026a8c4 */
int __fastcall sub_6026AA50(int result);  /* 0x0026aa50 */
int __fastcall sub_6026AE7C(int a1, int a2);  /* 0x0026ae7c */
int __fastcall sub_6026AE98(int a1, int a2);  /* 0x0026ae98 */
int __fastcall sub_6026AF0C(int a1);  /* 0x0026af0c */
int __fastcall houdai_ball_ref(int a1);  /* 0x0026af40 */
int __fastcall sub_6026B310(int a1);  /* 0x0026b310 */
int __fastcall sub_6026B55C(_DWORD *a1);  /* 0x0026b55c */
int __fastcall sub_6026B6E4(int a1, int a2, int a3, int a4);  /* 0x0026b6e4 */
int __fastcall sub_6026B70C(_DWORD *a1, _DWORD *a2, int a3);  /* 0x0026b70c */
int __fastcall sub_6026BA90(_DWORD *a1, _DWORD *a2, int a3);  /* 0x0026ba90 */
int __fastcall sub_6026BDC0(int a1);  /* 0x0026bdc0 */
int __fastcall sub_6026BDEC(int a1, int a2);  /* 0x0026bdec */
int __fastcall sub_6026BE14(int a1, int a2);  /* 0x0026be14 */
int __fastcall sub_6026BE3C(int a1, int a2);  /* 0x0026be3c */
bool __fastcall sub_6026BE64(int a1, int a2);  /* 0x0026be64 */
void __fastcall sub_6026BFDC(Actor *a1);  /* 0x0026bfdc */
int __fastcall sub_6026C04C(Actor *a1);  /* 0x0026c04c */
int __fastcall sub_6026C0C0(int a1, int a2, int a3);  /* 0x0026c0c0 */
int __fastcall sub_6026C124(int a1, int a2, int a3);  /* 0x0026c124 */
int __fastcall sub_6026C250(int result);  /* 0x0026c250 */
int __fastcall sub_6026C260(int result);  /* 0x0026c260 */
int __fastcall sub_6026C424(int a1);  /* 0x0026c424 */
int __fastcall sub_6026C7DC(int *a1);  /* 0x0026c7dc */
int __fastcall sub_6026C9AC(int a1);  /* 0x0026c9ac */
int __fastcall sub_6026CF10(int a1);  /* 0x0026cf10 */
int __fastcall sub_6026CF48(int result);  /* 0x0026cf48 */
int __fastcall sub_6026D188(_DWORD **a1, int a2, int a3, int a4);  /* 0x0026d188 */
int __fastcall sub_6026D1D4(int a1);  /* 0x0026d1d4 */
int __fastcall sub_6026D1FC(int a1);  /* 0x0026d1fc */
bool __fastcall sub_6026D41C(int a1, int a2);  /* 0x0026d41c */
void __fastcall sub_6026D520(int a1);  /* 0x0026d520 */
int __fastcall sub_6026D570(int a1);  /* 0x0026d570 */
int __fastcall sub_6026D6D8(int result);  /* 0x0026d6d8 */
int __fastcall sub_6026D6E8(int a1);  /* 0x0026d6e8 */
unsigned int __fastcall sub_6026D938(unsigned int *a1);  /* 0x0026d938 */
int __fastcall sub_6026DB20(float *a1);  /* 0x0026db20 */
int __fastcall sub_6026DDE8(_DWORD *a1);  /* 0x0026dde8 */
int __fastcall sub_6026DEB0(_DWORD *a1);  /* 0x0026deb0 */
int __fastcall sub_6026DFA4(int a1);  /* 0x0026dfa4 */
int __fastcall sub_6026E29C(int a1, int a2, int a3, int a4);  /* 0x0026e29c */
int __fastcall sub_6026E2C4(_DWORD *a1);  /* 0x0026e2c4 */
int __fastcall houdai_rot_ref(int a1);  /* 0x0026e984 */
int __fastcall sub_6026EA44(_DWORD *a1);  /* 0x0026ea44 */
int __fastcall sub_6026ECD8(int a1);  /* 0x0026ecd8 */
bool __fastcall sub_6026EEFC(int a1, int a2);  /* 0x0026eefc */
void __fastcall sub_6026F000(int a1);  /* 0x0026f000 */
int __fastcall sub_6026F07C(int a1);  /* 0x0026f07c */
int __fastcall sub_6026F3C4(int a1);  /* 0x0026f3c4 */
int __fastcall sub_6026F608(_DWORD *a1);  /* 0x0026f608 */
int __fastcall sub_6026FD48(int a1, int a2, int a3, int a4);  /* 0x0026fd48 */
int __fastcall houdai_rot_large_B_ref(int a1);  /* 0x0026fd70 */
int __fastcall sub_6026FE30(int a1);  /* 0x0026fe30 */
int __fastcall sub_60270170(int a1);  /* 0x00270170 */
bool __fastcall sub_60270410(int a1, int a2);  /* 0x00270410 */
int __fastcall sub_60270588(int a1);  /* 0x00270588 */
int __fastcall sub_60270618(int a1, int a2);  /* 0x00270618 */
int __fastcall sub_602707F8(int result);  /* 0x002707f8 */
int __fastcall sub_60270808(int result);  /* 0x00270808 */
int __fastcall sub_602708E8(int result);  /* 0x002708e8 */
int __fastcall sub_602709D4(int result);  /* 0x002709d4 */
int __fastcall sub_602709F0(int *a1);  /* 0x002709f0 */
int __fastcall sub_60271094(int a1);  /* 0x00271094 */
int __fastcall sub_602714D0(int a1);  /* 0x002714d0 */
int __fastcall sub_602715E4(int a1, int a2, int a3, int a4);  /* 0x002715e4 */
int __fastcall sub_6027160C(int a1);  /* 0x0027160c */
int __fastcall sub_60271648(int a1);  /* 0x00271648 */
int __fastcall sub_602717D4(int a1);  /* 0x002717d4 */
bool __fastcall sub_60271978(int a1, int a2);  /* 0x00271978 */
void __fastcall sub_60271A7C(int a1);  /* 0x00271a7c */
int __fastcall sub_60271ADC(int a1);  /* 0x00271adc */
int __fastcall sub_60271E38(int a1);  /* 0x00271e38 */
int __fastcall sub_60271E94(int a1);  /* 0x00271e94 */
int __fastcall sub_60271EC4(int a1);  /* 0x00271ec4 */
int __fastcall sub_60271EF4(int a1, int a2);  /* 0x00271ef4 */
int __fastcall sub_602720FC(int a1, float *a2);  /* 0x002720fc */
int __fastcall sub_602723A8(int a1, int a2, int a3);  /* 0x002723a8 */
int __fastcall sub_602724B0(int a1);  /* 0x002724b0 */
unsigned int __fastcall sub_60272510(int a1);  /* 0x00272510 */
bool __fastcall sub_60272570(int a1, int a2);  /* 0x00272570 */
int __fastcall sub_602726F8(int a1, int a2, int a3);  /* 0x002726f8 */
int __fastcall sub_60273034(int result, float *a2, _DWORD *a3);  /* 0x00273034 */
int __fastcall sub_6027326C(int result, float *a2, int a3);  /* 0x0027326c */
bool __fastcall sub_60273514(int a1);  /* 0x00273514 */
int __fastcall sub_602737D0(int a1);  /* 0x002737d0 */
int __fastcall sub_60273940(int a1, int a2);  /* 0x00273940 */
int __fastcall sub_60273B70(_DWORD *a1);  /* 0x00273b70 */
int __fastcall sub_60273C10(int result);  /* 0x00273c10 */
int __fastcall sub_60273C5C(int a1);  /* 0x00273c5c */
int __fastcall sub_60273D94(int result);  /* 0x00273d94 */
int __fastcall sub_60273EA8(int a1);  /* 0x00273ea8 */
int __fastcall sub_602740AC(int a1);  /* 0x002740ac */
int __fastcall sub_60274390(int a1);  /* 0x00274390 */
int __fastcall sub_60274740(int a1);  /* 0x00274740 */
bool __fastcall sub_60274A5C(int a1);  /* 0x00274a5c */
int __fastcall sub_60274B5C(int a1, int a2, int a3, int a4);  /* 0x00274b5c */
int __fastcall sub_60274BB4(float *a1, int a2, int a3);  /* 0x00274bb4 */
int __fastcall sub_60274BF0(int a1);  /* 0x00274bf0 */
int __fastcall sub_60274C18(int a1);  /* 0x00274c18 */
int __fastcall sub_60274C88(_DWORD *a1);  /* 0x00274c88 */
int __fastcall sub_60274D2C(int a1);  /* 0x00274d2c */
bool __fastcall sub_60274D98(int a1, int a2);  /* 0x00274d98 */
void __fastcall sub_60274F10(_BYTE *a1);  /* 0x00274f10 */
int __fastcall sub_60274FBC(_BYTE *a1);  /* 0x00274fbc */
int __fastcall sub_6027506C(int a1);  /* 0x0027506c */
int __fastcall sub_60275078(int a1);  /* 0x00275078 */
int __fastcall sub_602755A0(int result);  /* 0x002755a0 */
int __fastcall sub_602755B0(int a1);  /* 0x002755b0 */
int __fastcall sub_60275818(int *a1);  /* 0x00275818 */
int __fastcall sub_60275A48(int a1);  /* 0x00275a48 */
int __fastcall sub_60275CB8(int *a1);  /* 0x00275cb8 */
int __fastcall sub_60275CBC(int a1);  /* 0x00275cbc */
int __fastcall sub_60275CCC(int a1);  /* 0x00275ccc */
int __fastcall sub_60275DAC(int a1);  /* 0x00275dac */
int __fastcall sub_60275F48(int a1);  /* 0x00275f48 */
int __fastcall sub_60276228(int a1);  /* 0x00276228 */
int __fastcall sub_60276278(int a1);  /* 0x00276278 */
int __fastcall Fuzzy_setupModel(int *a1);  /* 0x00276d00 */
bool __fastcall sub_60276E10(int a1);  /* 0x00276e10 */
int __fastcall sub_60276FBC(float a1);  /* 0x00276fbc */
int __fastcall sub_60277540(int a1);  /* 0x00277540 */
int __fastcall sub_602778D0(int a1);  /* 0x002778d0 */
int __fastcall sub_60278058(int a1);  /* 0x00278058 */
int __fastcall sub_60278648(int a1, int a2, int a3);  /* 0x00278648 */
int __fastcall sub_60278B4C(int a1);  /* 0x00278b4c */
int __fastcall choropoo_hole_ref(int *a1);  /* 0x00278fe8 */
int __fastcall sub_602790B8(int a1);  /* 0x002790b8 */
int __fastcall sub_6027922C(int a1);  /* 0x0027922c */
int __fastcall sub_60279250(int a1, int a2, int a3, int a4);  /* 0x00279250 */
int __fastcall sub_60279278(Actor *a1);  /* 0x00279278 */
int __fastcall sub_602793C0(_DWORD *a1);  /* 0x002793c0 */
int __fastcall sub_60279468(int a1);  /* 0x00279468 */
int __fastcall SE_EMY_CHOROPU_APP_ref(int a1);  /* 0x00279884 */
int __fastcall sub_60279EC8(int a1);  /* 0x00279ec8 */
int __fastcall go_out_ed_ref(int *a1);  /* 0x00279f28 */
int __fastcall sub_60279FF4(int a1);  /* 0x00279ff4 */
int __fastcall sub_6027A1C4(int a1);  /* 0x0027a1c4 */
int __fastcall sub_6027A278(int a1);  /* 0x0027a278 */
int __fastcall sub_6027A6F0(int a1);  /* 0x0027a6f0 */
int __fastcall sub_6027A808(int result);  /* 0x0027a808 */
int __fastcall sub_6027A854(int a1);  /* 0x0027a854 */
int __fastcall sub_6027A990(int result);  /* 0x0027a990 */
int __fastcall sub_6027B084(int a1);  /* 0x0027b084 */
void __fastcall sub_6027B180(int a1);  /* 0x0027b180 */
int __fastcall sub_6027B224(int a1);  /* 0x0027b224 */
int __fastcall sub_6027B2D0(int a1);  /* 0x0027b2d0 */
int __fastcall sub_6027B330(int a1);  /* 0x0027b330 */
int __fastcall sub_6027B530(int a1);  /* 0x0027b530 */
int __fastcall sub_6027B714(int a1);  /* 0x0027b714 */
int __fastcall sub_6027B814(_DWORD *a1);  /* 0x0027b814 */
int __fastcall sub_6027B9BC(int a1);  /* 0x0027b9bc */
bool __fastcall sub_6027BB88(int a1);  /* 0x0027bb88 */
int __fastcall sub_6027BCC4(_DWORD *a1);  /* 0x0027bcc4 */
int __fastcall sub_6027BE4C(int a1, int a2, int a3, int a4);  /* 0x0027be4c */
int __fastcall sub_6027BE78(int a1);  /* 0x0027be78 */
bool __fastcall sub_6027BEF8(Actor *a1);  /* 0x0027bef8 */
int __fastcall sub_6027BF2C(int a1, int a2);  /* 0x0027bf2c */
int __fastcall sub_6027C050(float *a1, int a2, int a3);  /* 0x0027c050 */
int __fastcall sub_6027C0E4(float *a1, int a2, int a3);  /* 0x0027c0e4 */
bool __fastcall sub_6027C218(int a1);  /* 0x0027c218 */
int __fastcall sub_6027C3C4(int a1);  /* 0x0027c3c4 */
int __fastcall sub_6027C554(int a1);  /* 0x0027c554 */
int __fastcall sub_6027C688(int a1);  /* 0x0027c688 */
int __fastcall dead_2_ref(int *a1);  /* 0x0027c79c */
int __fastcall dead_2_ref_2(int *a1);  /* 0x0027c8dc */
int __fastcall sub_6027CA1C(int a1);  /* 0x0027ca1c */
int __fastcall sub_6027CA80(int a1);  /* 0x0027ca80 */
int __fastcall sub_6027CAE4(int a1);  /* 0x0027cae4 */
int __fastcall sub_6027CC08(_DWORD *a1, int a2, int a3);  /* 0x0027cc08 */
void __fastcall sub_6027CCD8(int a1);  /* 0x0027ccd8 */
void __fastcall sub_6027CD4C(int a1);  /* 0x0027cd4c */
int __fastcall sub_6027CDB8(int a1, int a2);  /* 0x0027cdb8 */
int __fastcall sub_6027CE1C(int a1);  /* 0x0027ce1c */
int __fastcall sub_6027D0D4(int a1, int a2);  /* 0x0027d0d4 */
int __fastcall sub_6027D1CC(int a1);  /* 0x0027d1cc */
int __fastcall sub_6027D4A8(float *a1);  /* 0x0027d4a8 */
int __fastcall sub_6027D50C(int a1);  /* 0x0027d50c */
int __fastcall sub_6027D580(_BYTE *a1);  /* 0x0027d580 */
void __fastcall sub_6027D584(int a1);  /* 0x0027d584 */
bool __fastcall sub_6027D5E8(int a1, int a2);  /* 0x0027d5e8 */
void __fastcall sub_6027D760(_BYTE *a1);  /* 0x0027d760 */
int __fastcall sub_6027D818(_BYTE *a1);  /* 0x0027d818 */
int __fastcall sub_6027D8D4(int a1, float *a2);  /* 0x0027d8d4 */
int __fastcall sub_6027D978(int a1);  /* 0x0027d978 */
int __fastcall sub_6027E134(int a1);  /* 0x0027e134 */
int __fastcall sub_6027E140(int a1);  /* 0x0027e140 */
int __fastcall sub_6027E874(int a1);  /* 0x0027e874 */
int __fastcall sub_6027F748(int a1);  /* 0x0027f748 */
int __fastcall sub_60280788(int a1);  /* 0x00280788 */
int __fastcall sub_60281D6C(int a1);  /* 0x00281d6c */
int __fastcall sub_60282BB4(int a1);  /* 0x00282bb4 */
int __fastcall sub_6028332C(int a1);  /* 0x0028332c */
int __fastcall sub_60283438(int a1);  /* 0x00283438 */
bool __fastcall sub_60283458(int a1, int a2);  /* 0x00283458 */
int __fastcall sub_602835D0(Actor *a1);  /* 0x002835d0 */
void __fastcall sub_60283644(Actor *a1);  /* 0x00283644 */
int __fastcall sub_602836B4(Actor *a1);  /* 0x002836b4 */
int __fastcall sub_602839E0(int a1);  /* 0x002839e0 */
int __fastcall sub_60283D2C(int a1);  /* 0x00283d2c */
int __fastcall sub_60284F44(int a1, int a2, int a3, int a4);  /* 0x00284f44 */
int __fastcall sub_602850C8(int a1);  /* 0x002850c8 */
int __fastcall sub_6028514C(int a1);  /* 0x0028514c */
void __fastcall sub_60285268(Actor *a1);  /* 0x00285268 */
int __fastcall sub_602852D8(Actor *a1);  /* 0x002852d8 */
int __fastcall sub_6028534C(int a1);  /* 0x0028534c */
int __fastcall sub_60285364(int a1);  /* 0x00285364 */
int __fastcall sub_60285440(int a1, int a2);  /* 0x00285440 */
int __fastcall sub_60285510(int a1);  /* 0x00285510 */
int __fastcall sub_602855F4(int a1);  /* 0x002855f4 */
int __fastcall sub_602856C4(_DWORD *a1);  /* 0x002856c4 */
int __fastcall sub_602856EC(int *a1, int a2);  /* 0x002856ec */
void __fastcall sub_6028573C(int *a1, int a2, signed int a3, int a4);  /* 0x0028573c */
int __fastcall sub_60285818(int a1);  /* 0x00285818 */
int __fastcall sub_60285824(int a1);  /* 0x00285824 */
int __fastcall sub_602859A8(int a1);  /* 0x002859a8 */
int __fastcall sub_602859BC(int a1);  /* 0x002859bc */
int __fastcall sub_60285C54(int a1);  /* 0x00285c54 */
int __fastcall sub_60285E04(int a1);  /* 0x00285e04 */
int __fastcall sub_60285FA0(int a1);  /* 0x00285fa0 */
int __fastcall sub_60286054(int a1);  /* 0x00286054 */
bool __fastcall sub_602860C0(int a1, int a2);  /* 0x002860c0 */
int __fastcall sub_60286238(Actor *a1);  /* 0x00286238 */
int __fastcall sub_60286AA8(int a1);  /* 0x00286aa8 */
int __fastcall sub_60286EB0(int a1);  /* 0x00286eb0 */
int __fastcall sub_60286F58(int a1);  /* 0x00286f58 */
int __fastcall sub_602870B8(int a1);  /* 0x002870b8 */
int __fastcall sub_602873F0(int a1);  /* 0x002873f0 */
int __fastcall sub_60287B94(int a1);  /* 0x00287b94 */
int __fastcall sub_60287C90(int a1);  /* 0x00287c90 */
int __fastcall sub_60287D7C(int a1);  /* 0x00287d7c */
int __fastcall sub_60287E74(int a1);  /* 0x00287e74 */
int __fastcall sub_60288250(int result);  /* 0x00288250 */
int __fastcall sub_60288260(int a1);  /* 0x00288260 */
int __fastcall sub_602883A8(int a1);  /* 0x002883a8 */
int __fastcall sub_60288668(int a1);  /* 0x00288668 */
int __fastcall sub_60288718(int a1);  /* 0x00288718 */
int __fastcall sub_6028882C(int a1);  /* 0x0028882c */
int __fastcall sub_60288960(int a1);  /* 0x00288960 */
int __fastcall sub_60288BA4(int *a1);  /* 0x00288ba4 */
int __fastcall sub_60288D08(int a1);  /* 0x00288d08 */
int __fastcall sub_60288FB8(int a1);  /* 0x00288fb8 */
int __fastcall sub_602890A0(int a1, int a2, int a3, int a4);  /* 0x002890a0 */
int __fastcall sub_602890D0(int result);  /* 0x002890d0 */
int __fastcall sub_602892A4(int a1);  /* 0x002892a4 */
int __fastcall sub_6028943C(_DWORD *a1);  /* 0x0028943c */
int __fastcall sub_60289598(int a1, int a2, int a3, int a4);  /* 0x00289598 */
int __fastcall sub_60289788(int a1);  /* 0x00289788 */
int __fastcall sub_60289830(int a1);  /* 0x00289830 */
int __fastcall sub_602899D0(int a1);  /* 0x002899d0 */
int __fastcall sub_60289CA4(int a1, int a2, int a3);  /* 0x00289ca4 */
int __fastcall sub_60289DD8(int a1);  /* 0x00289dd8 */
int __fastcall sub_60289FB8(float *a1, int a2, int a3);  /* 0x00289fb8 */
bool __fastcall SE_OBJ_TARU_HIT_ref(int a1, int a2, int a3);  /* 0x0028a100 */
bool __fastcall SE_OBJ_TARU_HIT_ref_2(int a1, int a2, int a3);  /* 0x0028a5dc */
int __fastcall sub_6028A8C0(_DWORD *a1, int a2, int a3);  /* 0x0028a8c0 */
int __fastcall sub_6028A8EC(int a1, int a2, int a3);  /* 0x0028a8ec */
int __fastcall sub_6028AAA4(int a1, int a2, int a3);  /* 0x0028aaa4 */
int __fastcall sub_6028AE90(int a1);  /* 0x0028ae90 */
int __fastcall sub_6028B05C(int a1);  /* 0x0028b05c */
int __fastcall sub_6028B114(int a1);  /* 0x0028b114 */
int __fastcall sub_6028B224(int a1, int *a2);  /* 0x0028b224 */
int __fastcall sub_6028B250(_BYTE *a1);  /* 0x0028b250 */
int __fastcall sub_6028B368(float *a1);  /* 0x0028b368 */
int __fastcall sub_6028B3B8(int a1, int a2);  /* 0x0028b3b8 */
bool __fastcall sub_6028B3D8(int a1, int a2);  /* 0x0028b3d8 */
void __fastcall sub_6028B550(_BYTE *a1);  /* 0x0028b550 */
int __fastcall sub_6028B5E0(_BYTE *a1);  /* 0x0028b5e0 */
int __fastcall sub_6028B674(int a1);  /* 0x0028b674 */
int __fastcall sub_6028B680(int a1);  /* 0x0028b680 */
int __fastcall sub_6028B6A8(int a1, int a2);  /* 0x0028b6a8 */
int __fastcall sub_6028B740(int a1, int a2);  /* 0x0028b740 */
int __fastcall sub_6028B854(int a1);  /* 0x0028b854 */
int __fastcall sub_6028BA7C(int a1);  /* 0x0028ba7c */
int __fastcall sub_6028BE50(int a1);  /* 0x0028be50 */
int __fastcall sub_6028BFDC(int a1);  /* 0x0028bfdc */
int __fastcall sub_6028C52C(int a1);  /* 0x0028c52c */
float __fastcall sub_6028C7C8(int a1);  /* 0x0028c7c8 */
float __fastcall sub_6028CA20(int a1);  /* 0x0028ca20 */
int __fastcall sub_6028CB1C(int a1);  /* 0x0028cb1c */
int __fastcall sub_6028CBEC(int a1);  /* 0x0028cbec */
int __fastcall sub_6028CD24(int a1);  /* 0x0028cd24 */
int __fastcall sub_6028CFF4(int a1);  /* 0x0028cff4 */
int __fastcall sub_6028D098(int a1, int a2, int a3, int a4);  /* 0x0028d098 */
int __fastcall sub_6028D0C0(float *a1, int a2, int a3);  /* 0x0028d0c0 */
int __fastcall sub_6028D2D4(float *a1, int a2, int a3);  /* 0x0028d2d4 */
int __fastcall sub_6028D3D4(int a1);  /* 0x0028d3d4 */
int __fastcall sub_6028D464(int a1);  /* 0x0028d464 */
int __fastcall sub_6028D74C(_DWORD *a1);  /* 0x0028d74c */
int __fastcall sub_6028D8CC(_DWORD *a1);  /* 0x0028d8cc */
bool __fastcall sub_6028DA88(int a1, int a2);  /* 0x0028da88 */
int __fastcall sub_6028DC00(Actor *a1);  /* 0x0028dc00 */
int __fastcall sub_6028DC5C(int a1);  /* 0x0028dc5c */
bool __fastcall sub_6028E014(int a1, int a2);  /* 0x0028e014 */
void __fastcall sub_6028E200(_BYTE *a1);  /* 0x0028e200 */
int __fastcall sub_6028E288(_BYTE *a1);  /* 0x0028e288 */
float __fastcall sub_6028E324(int a1);  /* 0x0028e324 */
int __fastcall sub_6028E330(int a1, int a2);  /* 0x0028e330 */
int __fastcall sub_6028EAF4(_DWORD *a1);  /* 0x0028eaf4 */
int __fastcall sub_6028EBA4(int a1);  /* 0x0028eba4 */
int __fastcall sub_6028ED0C(_DWORD *a1);  /* 0x0028ed0c */
int __fastcall sub_6028EDB8(int a1);  /* 0x0028edb8 */
int __fastcall sub_6028F068(_DWORD *a1);  /* 0x0028f068 */
int __fastcall sub_6028F11C(int a1);  /* 0x0028f11c */
int __fastcall sub_6028F394(_DWORD *a1);  /* 0x0028f394 */
int __fastcall sub_6028F454(int a1);  /* 0x0028f454 */
int __fastcall sub_6028F788(_DWORD *a1);  /* 0x0028f788 */
int __fastcall sub_6028F834(_DWORD *a1);  /* 0x0028f834 */
int __fastcall sub_6028F878(int result);  /* 0x0028f878 */
int __fastcall sub_6028F884(int a1);  /* 0x0028f884 */
int __fastcall sub_6028F974(_DWORD *a1);  /* 0x0028f974 */
int __fastcall sub_6028FA28(_DWORD *a1);  /* 0x0028fa28 */
int __fastcall sub_6028FA6C(_DWORD *a1);  /* 0x0028fa6c */
int __fastcall sub_6028FB20(_DWORD *a1);  /* 0x0028fb20 */
int __fastcall sub_6028FB64(_DWORD *a1);  /* 0x0028fb64 */
int __fastcall sub_6028FC18(int a1);  /* 0x0028fc18 */
int __fastcall sub_6028FCE8(_DWORD *a1);  /* 0x0028fce8 */
int __fastcall sub_6028FD94(int a1);  /* 0x0028fd94 */
int __fastcall sub_6028FDA0(int a1, char a2);  /* 0x0028fda0 */
int __fastcall sub_6028FE94(int a1);  /* 0x0028fe94 */
int __fastcall sub_6028FF68(_DWORD *a1);  /* 0x0028ff68 */
int __fastcall sub_60290130(int a1);  /* 0x00290130 */
int __fastcall PlayerStates_updateModelAndAnims_helper(int a1, int a2);  /* 0x00290228 */
int __fastcall sub_60290248(int a1, int a2, int a3, int a4, int a5);  /* 0x00290248 */
int __fastcall sub_60290260(int a1);  /* 0x00290260 */
int __fastcall sub_602903F8(int a1, int a2);  /* 0x002903f8 */
int __fastcall sub_60290430(int a1, _DWORD *a2);  /* 0x00290430 */
int __fastcall sub_60290474(int a1, int a2);  /* 0x00290474 */
int __fastcall sub_60290480(int result, _DWORD *a2);  /* 0x00290480 */
int __fastcall sub_60290490(int a1, int a2);  /* 0x00290490 */
int __fastcall sub_602904B8(int a1);  /* 0x002904b8 */
int __fastcall sub_602904C0(int a1);  /* 0x002904c0 */
int __fastcall sub_602904E8(int a1);  /* 0x002904e8 */
int __fastcall sub_6029057C(Actor *a1);  /* 0x0029057c */
int __fastcall sub_60290580(int a1, int a2, int a3, int a4);  /* 0x00290580 */
bool __fastcall sub_602905AC(int a1, int a2, int a3);  /* 0x002905ac */
int __fastcall sub_60290840(_DWORD *a1);  /* 0x00290840 */
int __fastcall sub_60290988(int a1);  /* 0x00290988 */
int __fastcall sub_60290A48(int a1, int a2);  /* 0x00290a48 */
int __fastcall sub_60291080(int a1);  /* 0x00291080 */
int __fastcall sub_60291118(int a1);  /* 0x00291118 */
int __fastcall sub_602911C8(int a1);  /* 0x002911c8 */
int __fastcall sub_602912A4(int a1);  /* 0x002912a4 */
int __fastcall sub_60291310(int a1);  /* 0x00291310 */
int __fastcall sub_6029137C(int result);  /* 0x0029137c */
int __fastcall sub_6029138C(_DWORD *a1);  /* 0x0029138c */
int __fastcall sub_60291468(int a1);  /* 0x00291468 */
int __fastcall sub_602914CC(_DWORD *a1);  /* 0x002914cc */
int __fastcall sub_60291560(Actor *a1);  /* 0x00291560 */
int __fastcall sub_60291598(_DWORD *a1);  /* 0x00291598 */
int __fastcall sub_6029159C(int a1);  /* 0x0029159c */
int __fastcall sub_602915F4(int *a1);  /* 0x002915f4 */
int __fastcall sub_6029166C(int a1);  /* 0x0029166c */
int __fastcall sub_602918C0(int a1);  /* 0x002918c0 */
void __fastcall sub_60291A5C(int a1);  /* 0x00291a5c */
int __fastcall sub_60291D6C(int a1);  /* 0x00291d6c */
int __fastcall sub_6029266C(int a1);  /* 0x0029266c */
int __fastcall sub_6029272C(int a1, int a2, int a3, int a4);  /* 0x0029272c */
int __fastcall sub_602928B4(_DWORD *a1);  /* 0x002928b4 */
int __fastcall sub_60292910(int a1);  /* 0x00292910 */
int __fastcall sub_60292ADC(int a1);  /* 0x00292adc */
int __fastcall sub_60292D1C(int a1, int a2, int a3, int a4);  /* 0x00292d1c */
unsigned __int32 __fastcall sub_60292D70(int a1, _DWORD *a2);  /* 0x00292d70 */
int __fastcall sub_60292FB8(int a1);  /* 0x00292fb8 */
int __fastcall sub_6029303C(int a1);  /* 0x0029303c */
int __fastcall dokan_touch_ref(int *a1);  /* 0x002930d8 */
bool __fastcall sub_602931A8(int a1);  /* 0x002931a8 */
bool __fastcall sub_602931DC(int a1, int a2);  /* 0x002931dc */
void __fastcall sub_602933C8(_BYTE *a1);  /* 0x002933c8 */
int __fastcall sub_60293478(_BYTE *a1);  /* 0x00293478 */
int __fastcall sub_6029352C(int a1);  /* 0x0029352c */
void __fastcall sub_60293600(int a1);  /* 0x00293600 */
int __fastcall sub_60293740(int a1);  /* 0x00293740 */
int __fastcall sub_602937C8(int a1);  /* 0x002937c8 */
int __fastcall sub_60293834(int a1);  /* 0x00293834 */
int __fastcall sub_602938A4(int a1, int a2);  /* 0x002938a4 */
int __fastcall sub_60293940(int a1);  /* 0x00293940 */
void __fastcall sub_602939B8(_DWORD *a1);  /* 0x002939b8 */
int __fastcall sub_60293A04(int a1);  /* 0x00293a04 */
int __fastcall sub_60293AB0(int a1);  /* 0x00293ab0 */
bool __fastcall sub_60293AD0(int a1, int a2);  /* 0x00293ad0 */
int __fastcall sub_60293DFC(int a1, int a2);  /* 0x00293dfc */
void __fastcall sub_60293F80(_DWORD *a1);  /* 0x00293f80 */
int __fastcall sub_60293FCC(int a1);  /* 0x00293fcc */
int __fastcall sub_60293FDC(int a1);  /* 0x00293fdc */
int __fastcall sub_60294118(_BYTE *a1);  /* 0x00294118 */
int __fastcall sub_602941CC(int result);  /* 0x002941cc */
bool __fastcall sub_602941DC(int a1);  /* 0x002941dc */
void __fastcall sub_602944B4(_DWORD *a1);  /* 0x002944b4 */
int __fastcall sub_60294500(int a1);  /* 0x00294500 */
int __fastcall sub_60294510(int a1);  /* 0x00294510 */
int __fastcall sub_6029464C(_BYTE *a1);  /* 0x0029464c */
int __fastcall sub_60294700(int result);  /* 0x00294700 */
bool __fastcall sub_60294710(int a1);  /* 0x00294710 */
void __fastcall sub_602949E8(_DWORD *a1);  /* 0x002949e8 */
int __fastcall sub_60294A38(int a1);  /* 0x00294a38 */
int __fastcall sub_60294AEC(int a1);  /* 0x00294aec */
bool __fastcall sub_60294B08(int a1, int a2);  /* 0x00294b08 */
int __fastcall sub_60294F00(int a1, int a2, int a3);  /* 0x00294f00 */
int __fastcall sub_60294F44(int a1, int a2);  /* 0x00294f44 */
int __fastcall sub_60295048(_BYTE *a1);  /* 0x00295048 */
int __fastcall sub_602950FC(int a1, int a2);  /* 0x002950fc */
int __fastcall sub_60295260(int a1, int a2, int a3);  /* 0x00295260 */
bool __fastcall sub_602952A4(int a1, int a2);  /* 0x002952a4 */
int __fastcall sub_602953A8(_BYTE *a1);  /* 0x002953a8 */
int __fastcall sub_6029545C(int a1, int a2);  /* 0x0029545c */
int __fastcall sub_602955C0(int a1, int a2, int a3);  /* 0x002955c0 */
bool __fastcall sub_60295604(int a1, int a2);  /* 0x00295604 */
int __fastcall sub_60295708(_BYTE *a1);  /* 0x00295708 */
int __fastcall sub_602957BC(int a1, int a2);  /* 0x002957bc */
int __fastcall sub_60295920(int a1, int a2, int a3);  /* 0x00295920 */
int __fastcall sub_60295964(int a1, int a2);  /* 0x00295964 */
int __fastcall sub_60295A68(_BYTE *a1);  /* 0x00295a68 */
int __fastcall sub_60295B1C(int a1, int a2);  /* 0x00295b1c */
int __fastcall sub_60295CA0(int a1);  /* 0x00295ca0 */
int __fastcall sub_60295CA8(int a1);  /* 0x00295ca8 */
int __fastcall sub_60295D10(int *a1);  /* 0x00295d10 */
int __fastcall sub_60295D88(int a1);  /* 0x00295d88 */
int __fastcall sub_60296170(int result);  /* 0x00296170 */
int __fastcall sub_602961D0(int a1);  /* 0x002961d0 */
bool __fastcall sub_60296554(int a1, int a2);  /* 0x00296554 */
void __fastcall sub_60296740(_BYTE *a1);  /* 0x00296740 */
int __fastcall sub_602967CC(_BYTE *a1);  /* 0x002967cc */
int __fastcall sub_6029685C(int a1);  /* 0x0029685c */
int __fastcall sub_602968C8(int a1);  /* 0x002968c8 */
int __fastcall sub_602968D0(int a1);  /* 0x002968d0 */
int __fastcall sub_602968EC(int a1);  /* 0x002968ec */
int __fastcall sub_60296944(int a1);  /* 0x00296944 */
int __fastcall sub_60296AF0(int a1);  /* 0x00296af0 */
int __fastcall sub_60296B14(_DWORD *a1);  /* 0x00296b14 */
int __fastcall sub_60296B54(int a1);  /* 0x00296b54 */
int __fastcall sub_60296CEC(int a1, int a2);  /* 0x00296cec */
int __fastcall sub_60296D08(_BYTE *a1);  /* 0x00296d08 */
int __fastcall sub_60296E0C(_DWORD *a1);  /* 0x00296e0c */
int __fastcall sub_602970EC(int a1, int a2);  /* 0x002970ec */
int __fastcall sub_602971C4(int a1, int a2);  /* 0x002971c4 */
int __fastcall sub_60297420(int a1);  /* 0x00297420 */
int __fastcall sub_602975D0(Actor *a1);  /* 0x002975d0 */
int __fastcall sub_602977F8(int a1, unsigned int a2);  /* 0x002977f8 */
bool __fastcall sub_60297828(Actor *a1);  /* 0x00297828 */
int __fastcall sub_6029788C(int a1, int a2, int a3, int a4);  /* 0x0029788c */
int __fastcall sub_602978B8(int a1);  /* 0x002978b8 */
int __fastcall sub_602978C4(_DWORD ***a1);  /* 0x002978c4 */
int __fastcall sub_60297A6C(Actor *a1, float *a2);  /* 0x00297a6c */
int __fastcall sub_60297ED0(int a1);  /* 0x00297ed0 */
bool __fastcall sub_602984F4(int a1);  /* 0x002984f4 */
bool __fastcall sub_6029855C(int a1);  /* 0x0029855c */
int __fastcall sub_6029869C(float *a1, int a2, int a3);  /* 0x0029869c */
int __fastcall sub_602986D0(int a1, int a2, int a3);  /* 0x002986d0 */
int __fastcall sub_60298998(int a1, int a2, int a3);  /* 0x00298998 */
int __fastcall sub_60298D60(int a1, int a2, int a3);  /* 0x00298d60 */
int __fastcall sub_60298FC8(int a1, int a2, int a3);  /* 0x00298fc8 */
int __fastcall sub_60299230(int a1, int a2, int a3);  /* 0x00299230 */
void __fastcall sub_60299338(int a1);  /* 0x00299338 */
int __fastcall sub_60299390(int a1);  /* 0x00299390 */
int __fastcall sub_60299448(int a1, int a2);  /* 0x00299448 */
int __fastcall sub_60299514(int a1);  /* 0x00299514 */
void __fastcall sub_6029951C(int a1);  /* 0x0029951c */
int __fastcall sub_6029970C(int a1);  /* 0x0029970c */
int __fastcall sub_6029972C(int a1);  /* 0x0029972c */
int __fastcall sub_6029979C(_DWORD *a1);  /* 0x0029979c */
int __fastcall sub_60299850(Actor *a1);  /* 0x00299850 */
int __fastcall sub_6029994C(_DWORD *a1);  /* 0x0029994c */
int __fastcall sub_60299994(int a1);  /* 0x00299994 */
int __fastcall sub_602999D4(int a1);  /* 0x002999d4 */
void __fastcall sub_60299A1C(int a1);  /* 0x00299a1c */
int __fastcall sub_60299A50(_DWORD *a1);  /* 0x00299a50 */
int __fastcall sub_60299B20(int a1);  /* 0x00299b20 */
int __fastcall sub_60299D08(int a1);  /* 0x00299d08 */
int __fastcall sub_60299DEC(int a1);  /* 0x00299dec */
int __fastcall sub_60299FD0(int a1, float *a2);  /* 0x00299fd0 */
bool __fastcall sub_6029A3BC(int a1);  /* 0x0029a3bc */
int __fastcall sub_6029A640(int a1);  /* 0x0029a640 */
int __fastcall sub_6029A79C(int a1, int a2, int a3);  /* 0x0029a79c */
int __fastcall dokan_touch_ref_2(int a1);  /* 0x0029a9a8 */
bool __fastcall sub_6029AA50(int a1);  /* 0x0029aa50 */
int __fastcall sub_6029AA94(int a1);  /* 0x0029aa94 */
int __fastcall sub_6029AAC8(int a1);  /* 0x0029aac8 */
int __fastcall sub_6029AB08(int a1);  /* 0x0029ab08 */
bool __fastcall sub_6029AB84(int a1, int a2);  /* 0x0029ab84 */
int __fastcall sub_6029ACFC(_BYTE *a1);  /* 0x0029acfc */
int __fastcall sub_6029AD94(int a1);  /* 0x0029ad94 */
int __fastcall Actor_kapipe_Piranha_furawa_build(int a1);  /* 0x0029adc0 */
int __fastcall sub_6029AE3C(_DWORD *a1);  /* 0x0029ae3c */
void __fastcall sub_6029B030(int a1);  /* 0x0029b030 */
int __fastcall sub_6029B224(int a1, int a2, int a3, int a4);  /* 0x0029b224 */
int __fastcall sub_6029B720(Actor *a1);  /* 0x0029b720 */
int __fastcall sub_6029B768(_DWORD *a1);  /* 0x0029b768 */
int __fastcall sub_6029B76C(int a1, int *a2);  /* 0x0029b76c */
int __fastcall sub_6029B860(_BYTE *a1);  /* 0x0029b860 */
int __fastcall sub_6029B95C(int a1);  /* 0x0029b95c */
int __fastcall sub_6029BB94(int a1, int a2);  /* 0x0029bb94 */
int __fastcall sub_6029BC30(int a1);  /* 0x0029bc30 */
void __fastcall sub_6029BD98(_DWORD *a1);  /* 0x0029bd98 */
int __fastcall sub_6029BDE4(int a1);  /* 0x0029bde4 */
int __fastcall sub_6029BF0C(_BYTE *a1);  /* 0x0029bf0c */
int __fastcall sub_6029BF9C(int result);  /* 0x0029bf9c */
void __fastcall sub_6029C264(_DWORD *a1);  /* 0x0029c264 */
int __fastcall sub_6029C2B0(int a1);  /* 0x0029c2b0 */
int __fastcall sub_6029C3F0(_BYTE *a1);  /* 0x0029c3f0 */
int __fastcall sub_6029C480(int result);  /* 0x0029c480 */
void __fastcall sub_6029C748(_DWORD *a1);  /* 0x0029c748 */
int __fastcall sub_6029C794(int a1);  /* 0x0029c794 */
int __fastcall sub_6029C8D4(_BYTE *a1);  /* 0x0029c8d4 */
int __fastcall sub_6029C964(int result);  /* 0x0029c964 */
void __fastcall sub_6029CC38(_DWORD *a1);  /* 0x0029cc38 */
int __fastcall sub_6029CDD8(_BYTE *a1);  /* 0x0029cdd8 */
int __fastcall sub_6029CE68(int result);  /* 0x0029ce68 */
int __fastcall sub_6029D244(int a1);  /* 0x0029d244 */
int __fastcall sub_6029D328(int a1);  /* 0x0029d328 */
int __fastcall sub_6029D354(int *a1);  /* 0x0029d354 */
int __fastcall sub_6029D3A4(int result);  /* 0x0029d3a4 */
int __fastcall sub_6029D43C(int a1);  /* 0x0029d43c */
int __fastcall sub_6029D468(int *a1);  /* 0x0029d468 */
int __fastcall sub_6029D4B8(int result);  /* 0x0029d4b8 */
int __fastcall SE_EMY_ref(int32x4_t *a1);  /* 0x0029d4c4 */
int __fastcall sub_6029D804(int *a1);  /* 0x0029d804 */
int __fastcall sub_6029D8C8(int a1);  /* 0x0029d8c8 */
int __fastcall sub_6029D94C(int result);  /* 0x0029d94c */
int __fastcall sub_6029D9A4(int a1);  /* 0x0029d9a4 */
int __fastcall sub_6029DA20(int a1);  /* 0x0029da20 */
int __fastcall sub_6029DDD8(int a1);  /* 0x0029ddd8 */
int __fastcall Thwomp_updateModel(float *a1);  /* 0x0029e02c */
bool __fastcall sub_6029E430(int a1);  /* 0x0029e430 */
int __fastcall sub_6029F0DC(int a1);  /* 0x0029f0dc */
int __fastcall sub_6029F204(int result);  /* 0x0029f204 */
int __fastcall sub_6029F248(int a1);  /* 0x0029f248 */
int __fastcall sub_6029F478(int a1);  /* 0x0029f478 */
int __fastcall sub_6029F5DC(_DWORD *a1);  /* 0x0029f5dc */
int __fastcall sub_6029F94C(int a1);  /* 0x0029f94c */
int __fastcall sub_6029FCB8(int a1);  /* 0x0029fcb8 */
int __fastcall sub_6029FD8C(int a1, int a2, int a3, int a4);  /* 0x0029fd8c */
int __fastcall sub_6029FDF4(int a1, int a2, int a3);  /* 0x0029fdf4 */
int __fastcall sub_6029FF10(int a1, int a2, int a3);  /* 0x0029ff10 */
int __fastcall SE_OBJ_CMN_TOUCH_THUNDER_ref_2(int a1, int a2);  /* 0x002a002c */
int __fastcall sub_602A0120(int a1, int a2);  /* 0x002a0120 */
bool __fastcall sub_602A0200(int a1, int a2);  /* 0x002a0200 */
void __fastcall sub_602A0378(_BYTE *a1);  /* 0x002a0378 */
int __fastcall sub_602A0414(_BYTE *a1);  /* 0x002a0414 */
int __fastcall sub_602A0700(int result);  /* 0x002a0700 */
int __fastcall sub_602A0744(int result);  /* 0x002a0744 */
int __fastcall sub_602A0830(int a1);  /* 0x002a0830 */
int __fastcall sub_602A091C(int result);  /* 0x002a091c */
int __fastcall sub_602A096C(int a1);  /* 0x002a096c */
int __fastcall sub_602A09D0(int a1);  /* 0x002a09d0 */
bool __fastcall sub_602A0A00(int a1, int a2);  /* 0x002a0a00 */
int __fastcall sub_602A0B78(Actor *a1);  /* 0x002a0b78 */
int __fastcall sub_602A0BAC(int a1, int a2);  /* 0x002a0bac */
int __fastcall sub_602A0F08(int a1);  /* 0x002a0f08 */
int __fastcall sub_602A10D0(int a1);  /* 0x002a10d0 */
int __fastcall sub_602A1220(int a1);  /* 0x002a1220 */
int __fastcall sub_602A1330(int a1, int a2, int a3);  /* 0x002a1330 */
int __fastcall sub_602A1424(int a1, int a2, int a3);  /* 0x002a1424 */
bool __fastcall sub_602A1540(int a1, int a2);  /* 0x002a1540 */
void __fastcall sub_602A16B8(_BYTE *a1);  /* 0x002a16b8 */
int __fastcall sub_602A1754(_BYTE *a1);  /* 0x002a1754 */
int __fastcall sub_602A1830(int a1, int a2);  /* 0x002a1830 */
int __fastcall sub_602A1868(int a1, _DWORD *a2);  /* 0x002a1868 */
int __fastcall sub_602A18AC(int a1, int a2);  /* 0x002a18ac */
int __fastcall sub_602A18B8(int result, _DWORD *a2);  /* 0x002a18b8 */
int __fastcall sub_602A18C8(int a1, int a2);  /* 0x002a18c8 */
int __fastcall sub_602A18F0(int a1);  /* 0x002a18f0 */
int __fastcall sub_602A18F8(int a1);  /* 0x002a18f8 */
bool __fastcall sub_602A1F74(int a1);  /* 0x002a1f74 */
bool __fastcall sub_602A25C0(int a1);  /* 0x002a25c0 */
int __fastcall sub_602A25F8(int result);  /* 0x002a25f8 */
int __fastcall sub_602A2DA0(int a1);  /* 0x002a2da0 */
int __fastcall sub_602A3124(int a1, int a2);  /* 0x002a3124 */
int __fastcall sub_602A3160(_WORD *a1);  /* 0x002a3160 */
int __fastcall sub_602A3178(_DWORD *a1);  /* 0x002a3178 */
void __fastcall sub_602A3250(int a1, int a2);  /* 0x002a3250 */
int __fastcall sub_602A3358(int a1, int a2);  /* 0x002a3358 */
int __fastcall sub_602A3520(float *a1, int a2, int a3);  /* 0x002a3520 */
int __fastcall sub_602A358C(float *a1, unsigned int a2, int a3, unsigned int a4, int a5);  /* 0x002a358c */
int __fastcall sub_602A38A4(int a1, int *a2);  /* 0x002a38a4 */
int __fastcall ActorScaler_execute(int a1);  /* 0x002a3f10 */
int __fastcall sub_602A3F7C(int a1, int a2);  /* 0x002a3f7c */
int __fastcall ActorScaler_getOwnerScale(int a1);  /* 0x002a3fec */
int __fastcall sub_602A4020(int a1, int a2);  /* 0x002a4020 */
int __fastcall sub_602A4040(int a1, int a2);  /* 0x002a4040 */
int __fastcall sub_602A4060(int a1, int a2);  /* 0x002a4060 */
int __fastcall sub_602A4080(int a1, int a2);  /* 0x002a4080 */
bool __fastcall sub_602A40C0(int a1);  /* 0x002a40c0 */
int __fastcall sub_602A4214(unsigned int *a1, int a2);  /* 0x002a4214 */
int __fastcall sub_602A4304(unsigned int *a1, int a2);  /* 0x002a4304 */
int __fastcall sub_602A4B00(_DWORD *a1);  /* 0x002a4b00 */
int __fastcall sub_602A4BC0(int a1);  /* 0x002a4bc0 */
int __fastcall sub_602A4BD0(_DWORD *a1);  /* 0x002a4bd0 */
int __fastcall sub_602A4D10(int a1);  /* 0x002a4d10 */
int __fastcall sub_602A4D60(int a1);  /* 0x002a4d60 */
int __fastcall sub_602A4D7C(int a1);  /* 0x002a4d7c */
int __fastcall sub_602A4DE8(int a1);  /* 0x002a4de8 */
int __fastcall sub_602A4DF8(int a1);  /* 0x002a4df8 */
int __fastcall sub_602A4ED0(_DWORD *a1);  /* 0x002a4ed0 */
int __fastcall sub_602A5130(int result);  /* 0x002a5130 */
int __fastcall sub_602A5140(int a1);  /* 0x002a5140 */
int __fastcall sub_602A51C8(int a1);  /* 0x002a51c8 */
int __fastcall sub_602A52A0(int *a1);  /* 0x002a52a0 */
unsigned __int64 __fastcall sub_602A546C(int **a1);  /* 0x002a546c */
int __fastcall sub_602A55C8(int a1);  /* 0x002a55c8 */
bool __fastcall sub_602A560C(Actor *a1);  /* 0x002a560c */
int __fastcall sub_602A5640(int a1, int a2, int a3, int a4);  /* 0x002a5640 */
bool __fastcall sub_602A5688(int a1);  /* 0x002a5688 */
bool __fastcall sub_602A56C0(int a1, int a2);  /* 0x002a56c0 */
void __fastcall sub_602A57C4(int a1);  /* 0x002a57c4 */
int __fastcall sub_602A5824(int a1);  /* 0x002a5824 */
int __fastcall sub_602A588C(int a1);  /* 0x002a588c */
int __fastcall sub_602A58B4(int a1, int a2);  /* 0x002a58b4 */
int __fastcall Enemy_killSpin(int a1, int a2);  /* 0x002a5ae8 */
int __fastcall sub_602A5EF4(float *a1, int a2);  /* 0x002a5ef4 */
int __fastcall sub_602A6024(int a1, int a2, char a3, char a4);  /* 0x002a6024 */
int __fastcall sub_602A63E4(int a1, int a2, int a3, char a4, char a5);  /* 0x002a63e4 */
int __fastcall Enemy_killYoshi(int a1, int a2);  /* 0x002a66f8 */
int __fastcall sub_602A6C70(float *a1, float a2, int a3, int a4);  /* 0x002a6c70 */
int __fastcall Enemy_killWithState(int a1, int a2, _DWORD *a3, int a4);  /* 0x002a7164 */
int __fastcall sub_602A74C0(int a1);  /* 0x002a74c0 */
int __fastcall sub_602A75C4(int a1, int a2);  /* 0x002a75c4 */
int __fastcall sub_602A7624(int a1);  /* 0x002a7624 */
int __fastcall sub_602A7BAC(int a1, int a2);  /* 0x002a7bac */
void __fastcall sub_602A7CEC(char *a1);  /* 0x002a7cec */
int __fastcall sub_602A8254(int a1);  /* 0x002a8254 */
int __fastcall StateVirtual_Enemy_dtorFree(int a1);  /* 0x002a82e8 */
int __fastcall StateVirtual_Enemy_getId(int a1);  /* 0x002a82ec */
int __fastcall sub_602A852C(int a1, _DWORD *a2);  /* 0x002a852c */
int __fastcall sub_602A8584(unsigned int *a1);  /* 0x002a8584 */
int __fastcall sub_602A86D0(int a1);  /* 0x002a86d0 */
int __fastcall sub_602A87D0(unsigned int *a1, int a2);  /* 0x002a87d0 */
int __fastcall sub_602A8904(int a1, _DWORD *a2);  /* 0x002a8904 */
int __fastcall sub_602A8B10(int a1, _DWORD *a2);  /* 0x002a8b10 */
int __fastcall sub_602A8BEC(unsigned __int8 *a1);  /* 0x002a8bec */
int __fastcall sub_602A8C68(int a1);  /* 0x002a8c68 */
int __fastcall sub_602A8C74(int a1);  /* 0x002a8c74 */
int __fastcall sub_602A8C84(int a1);  /* 0x002a8c84 */
int __fastcall sub_602A8CDC(unsigned __int8 *a1);  /* 0x002a8cdc */
int __fastcall sub_602A8D94(_BYTE *a1);  /* 0x002a8d94 */
bool __fastcall sub_602A8E6C(Actor *a1);  /* 0x002a8e6c */
int __fastcall sub_602A8E9C(_DWORD *a1);  /* 0x002a8e9c */
int __fastcall sub_602A8ED0(int a1);  /* 0x002a8ed0 */
int __fastcall sub_602A8EE0(int a1);  /* 0x002a8ee0 */
int __fastcall sub_602A8F40(int a1, int *a2, int a3);  /* 0x002a8f40 */
int __fastcall sub_602A8FA4(int a1, int a2);  /* 0x002a8fa4 */
bool __fastcall sub_602A8FDC(int a1, int a2);  /* 0x002a8fdc */
int __fastcall sub_602A9154(Actor *a1);  /* 0x002a9154 */
int __fastcall sub_602A9A1C(int a1, _BYTE *a2);  /* 0x002a9a1c */
int __fastcall sub_602A9A2C(int a1, bool *a2, int a3, int a4);  /* 0x002a9a2c */
int __fastcall sub_602AA2BC(int a1);  /* 0x002aa2bc */
int __fastcall sub_602AA4D0(int a1);  /* 0x002aa4d0 */
int __fastcall sub_602AA630(int *a1);  /* 0x002aa630 */
int __fastcall sub_602AA820(int a1);  /* 0x002aa820 */
int __fastcall sub_602AAAB0(int *a1);  /* 0x002aaab0 */
int __fastcall sub_602AABCC(int a1);  /* 0x002aabcc */
int __fastcall sub_602AAD14(int *a1);  /* 0x002aad14 */
int __fastcall sub_602AAE38(int a1);  /* 0x002aae38 */
int __fastcall sub_602AAF7C(int a1);  /* 0x002aaf7c */
int __fastcall sub_602AB164(int a1);  /* 0x002ab164 */
int __fastcall sub_602AB3EC(int a1);  /* 0x002ab3ec */
int __fastcall sub_602AB4E8(int a1);  /* 0x002ab4e8 */
int __fastcall sub_602AB6A0(int a1);  /* 0x002ab6a0 */
int __fastcall sub_602AB6C8(int a1);  /* 0x002ab6c8 */
int __fastcall sub_602AB780(int a1);  /* 0x002ab780 */
int __fastcall SE_EMY_FIRE_SNAKE_EXTINCT_ref(int a1);  /* 0x002aba70 */
int __fastcall sub_602ABB90(int result);  /* 0x002abb90 */
int __fastcall sub_602ABBB0(int a1);  /* 0x002abbb0 */
int __fastcall sub_602ABCDC(int result);  /* 0x002abcdc */
int __fastcall sub_602ABCF0(int a1, int a2);  /* 0x002abcf0 */
int __fastcall FireSnake_ctor(int a1);  /* 0x002abde8 */
int __fastcall sub_602AC53C(int *a1);  /* 0x002ac53c */
int __fastcall sub_602AC6EC(int a1);  /* 0x002ac6ec */
int __fastcall sub_602ACF44(int a1);  /* 0x002acf44 */
int __fastcall sub_602AD28C(int a1);  /* 0x002ad28c */
int __fastcall sub_602ADA1C(float *a1);  /* 0x002ada1c */
int __fastcall sub_602ADE50(int a1);  /* 0x002ade50 */
int __fastcall sub_602ADF98(int a1);  /* 0x002adf98 */
int __fastcall sub_602AE16C(unsigned int *a1, int a2);  /* 0x002ae16c */
int __fastcall sub_602AEA2C(int a1);  /* 0x002aea2c */
void __fastcall sub_602AEF18(int a1, int a2, int a3);  /* 0x002aef18 */
int __fastcall sub_602AEFE0(int **a1);  /* 0x002aefe0 */
int __fastcall sub_602AF064(int **a1);  /* 0x002af064 */
int __fastcall sub_602AF0E4(int *a1);  /* 0x002af0e4 */
int __fastcall sub_602AF1E0(_DWORD **a1);  /* 0x002af1e0 */
bool __fastcall sub_602AF2BC(int a1, int a2);  /* 0x002af2bc */
int __fastcall sub_602AF2DC(int a1);  /* 0x002af2dc */
int __fastcall sub_602AF428(int a1, int a2, int a3);  /* 0x002af428 */
int __fastcall Actor_fishubon_build(_DWORD *a1);  /* 0x002af438 */
int __fastcall sub_602AF5EC(_DWORD *a1);  /* 0x002af5ec */
int __fastcall sub_602AF8C8(_DWORD *a1);  /* 0x002af8c8 */
int __fastcall sub_602AFB34(int a1);  /* 0x002afb34 */
int __fastcall sub_602AFEE0(int result);  /* 0x002afee0 */
int __fastcall sub_602AFEF0(_DWORD *a1);  /* 0x002afef0 */
int __fastcall sub_602AFFC8(int *a1, int a2, int a3, int a4);  /* 0x002affc8 */
int __fastcall sub_602B04B4(int a1);  /* 0x002b04b4 */
int __fastcall sub_602B06E0(_DWORD *a1);  /* 0x002b06e0 */
int __fastcall sub_602B0F2C(int a1);  /* 0x002b0f2c */
int __fastcall sub_602B10D4(int a1);  /* 0x002b10d4 */
bool __fastcall sub_602B13EC(int a1);  /* 0x002b13ec */
int __fastcall sub_602B14EC(int a1);  /* 0x002b14ec */
int __fastcall sub_602B17D4(int result);  /* 0x002b17d4 */
int __fastcall sub_602B18FC(int a1);  /* 0x002b18fc */
int __fastcall sub_602B19C4(int a1);  /* 0x002b19c4 */
void __fastcall sub_602B1A34(int a1);  /* 0x002b1a34 */
int __fastcall SE_EMY_FISHBONE_BREAK_ref_3(int a1, int a2, int a3);  /* 0x002b1ac8 */
int __fastcall sub_602B1C8C(int a1, int a2, int a3);  /* 0x002b1c8c */
int __fastcall sub_602B1CF0(int a1);  /* 0x002b1cf0 */
__int64 __fastcall sub_602B1D5C(__int64 result);  /* 0x002b1d5c */
int __fastcall sub_602B1EC4(int a1);  /* 0x002b1ec4 */
bool __fastcall sub_602B2444(int a1, int a2);  /* 0x002b2444 */
void __fastcall sub_602B25BC(_BYTE *a1);  /* 0x002b25bc */
int __fastcall sub_602B262C(_BYTE *a1);  /* 0x002b262c */
int __fastcall sub_602B26AC(int a1);  /* 0x002b26ac */
int __fastcall sub_602B28A0(int result);  /* 0x002b28a0 */
int __fastcall sub_602B28F8(int a1);  /* 0x002b28f8 */
int __fastcall sub_602B2F00(int result);  /* 0x002b2f00 */
int __fastcall sub_602B3440(int result);  /* 0x002b3440 */
int __fastcall sub_602B3450(int a1);  /* 0x002b3450 */
int __fastcall sub_602B3758(int result);  /* 0x002b3758 */
int __fastcall sub_602B3CD8(int a1);  /* 0x002b3cd8 */
int __fastcall sub_602B3D24(int a1);  /* 0x002b3d24 */
int __fastcall sub_602B3DF4(int result);  /* 0x002b3df4 */
int __fastcall sub_602B3E08(int a1, int a2);  /* 0x002b3e08 */
int __fastcall sub_602B3E24(int a1);  /* 0x002b3e24 */
int __fastcall pakkun_water_ref(int a1);  /* 0x002b3e84 */
int __fastcall sub_602B413C(float *a1);  /* 0x002b413c */
int __fastcall sub_602B42D4(float *a1);  /* 0x002b42d4 */
bool __fastcall sub_602B45E8(int a1);  /* 0x002b45e8 */
bool __fastcall sub_602B46E4(int a1);  /* 0x002b46e4 */
int __fastcall sub_602B4818(int a1, int a2, int a3, int a4);  /* 0x002b4818 */
int __fastcall sub_602B4840(float *a1, int a2, int a3);  /* 0x002b4840 */
int __fastcall sub_602B4874(int a1);  /* 0x002b4874 */
int __fastcall sub_602B49C4(int a1);  /* 0x002b49c4 */
int __fastcall sub_602B49D8(int a1, int a2, int a3);  /* 0x002b49d8 */
int __fastcall sub_602B4A90(int a1, int a2, int a3);  /* 0x002b4a90 */
bool __fastcall sub_602B4B4C(int a1, int a2, int a3);  /* 0x002b4b4c */
bool __fastcall sub_602B4D14(int a1, int a2);  /* 0x002b4d14 */
void __fastcall sub_602B4E8C(_BYTE *a1);  /* 0x002b4e8c */
int __fastcall sub_602B4F28(_BYTE *a1);  /* 0x002b4f28 */
int __fastcall sub_602B4FC8(int a1);  /* 0x002b4fc8 */
int __fastcall sub_602B503C(int a1, int *a2);  /* 0x002b503c */
int __fastcall sub_602B5068(int a1, int *a2);  /* 0x002b5068 */
int __fastcall sub_602B5094(int a1, int *a2);  /* 0x002b5094 */
int __fastcall sub_602B50E0(float *a1);  /* 0x002b50e0 */
int __fastcall sub_602B5100(int a1, int a2, int a3);  /* 0x002b5100 */
int __fastcall sub_602B5164(int a1, int a2, int a3);  /* 0x002b5164 */
int __fastcall sub_602B551C(int result);  /* 0x002b551c */
int __fastcall sub_602B5778(_DWORD *a1);  /* 0x002b5778 */
int __fastcall sub_602B584C(_DWORD *a1);  /* 0x002b584c */
int __fastcall sub_602B5A20(int a1);  /* 0x002b5a20 */
int __fastcall sub_602B5BBC(int a1);  /* 0x002b5bbc */
int __fastcall sub_602B5BEC(int a1, int a2, int a3, int a4);  /* 0x002b5bec */
int __fastcall sub_602B5C14(int a1, int a2);  /* 0x002b5c14 */
int __fastcall sub_602B5D54(int a1);  /* 0x002b5d54 */
bool __fastcall sub_602B5D6C(int a1, int a2);  /* 0x002b5d6c */
void __fastcall sub_602B5EE4(int a1);  /* 0x002b5ee4 */
int __fastcall sub_602B5F6C(int a1);  /* 0x002b5f6c */
int __fastcall sub_602B612C(int a1, int a2);  /* 0x002b612c */
int __fastcall Actor_kafugumannen_build(int a1);  /* 0x002b62c0 */
int __fastcall sub_602B6460(int a1);  /* 0x002b6460 */
int __fastcall sub_602B6AE8(int a1);  /* 0x002b6ae8 */
int __fastcall sub_602B6F1C(int a1);  /* 0x002b6f1c */
int __fastcall sub_602B75E4(int a1);  /* 0x002b75e4 */
int __fastcall sub_602B79E4(_DWORD *a1);  /* 0x002b79e4 */
int __fastcall sub_602B7AF8(int a1);  /* 0x002b7af8 */
int __fastcall sub_602B7C88(int a1);  /* 0x002b7c88 */
int __fastcall sub_602B80E4(int a1);  /* 0x002b80e4 */
int __fastcall sub_602B8230(int a1, int a2, int a3, int a4);  /* 0x002b8230 */
unsigned int __fastcall sub_602B825C(int a1, int a2, int a3);  /* 0x002b825c */
int __fastcall sub_602B8348(float *a1, int a2, int a3);  /* 0x002b8348 */
int __fastcall sub_602B837C(int a1, _DWORD *a2);  /* 0x002b837c */
int __fastcall sub_602B8390(int a1, int a2, int a3);  /* 0x002b8390 */
int __fastcall sub_602B8654(int a1);  /* 0x002b8654 */
int __fastcall sub_602B86C4(int a1, int *a2, int a3);  /* 0x002b86c4 */
int __fastcall sub_602B8818(int a1, int *a2);  /* 0x002b8818 */
int __fastcall sub_602B89A8(int result);  /* 0x002b89a8 */
bool __fastcall sub_602B89F4(int a1, int a2);  /* 0x002b89f4 */
void __fastcall sub_602B8B6C(_BYTE *a1);  /* 0x002b8b6c */
int __fastcall sub_602B8C28(_BYTE *a1);  /* 0x002b8c28 */
int __fastcall sub_602B8CE8(int a1);  /* 0x002b8ce8 */
int __fastcall sub_602B8CF4(int a1);  /* 0x002b8cf4 */
int __fastcall sub_602B8D00(int a1);  /* 0x002b8d00 */
int __fastcall sub_602B8D58(_DWORD *a1);  /* 0x002b8d58 */
int __fastcall sub_602B8DC8(int a1);  /* 0x002b8dc8 */
int __fastcall sub_602B8EB4(int a1);  /* 0x002b8eb4 */
int __fastcall sub_602B917C(int *a1);  /* 0x002b917c */
int __fastcall sub_602B91E8(int a1);  /* 0x002b91e8 */
bool __fastcall sub_602B92AC(int a1, int a2);  /* 0x002b92ac */
void __fastcall sub_602B9498(_BYTE *a1);  /* 0x002b9498 */
int __fastcall sub_602B9508(_BYTE *a1);  /* 0x002b9508 */
int __fastcall sub_602B957C(int a1);  /* 0x002b957c */
int __fastcall sub_602B95B8(int a1, int a2);  /* 0x002b95b8 */
int __fastcall sub_602B9774(int *a1);  /* 0x002b9774 */
int __fastcall sub_602B986C(int a1);  /* 0x002b986c */
int __fastcall sub_602B9F54(int *a1);  /* 0x002b9f54 */
int __fastcall SE_EMY_GABON_ROCK_ref(unsigned __int8 *a1);  /* 0x002ba02c */
int __fastcall sub_602BA3C4(int a1, int a2);  /* 0x002ba3c4 */
int __fastcall sub_602BA470(_DWORD *a1);  /* 0x002ba470 */
int __fastcall sub_602BA5F0(int a1);  /* 0x002ba5f0 */
int __fastcall sub_602BA73C(int a1);  /* 0x002ba73c */
int __fastcall sub_602BAA18(_DWORD *a1);  /* 0x002baa18 */
int __fastcall sub_602BAB5C(int a1, int a2);  /* 0x002bab5c */
int __fastcall sub_602BAC24(int a1, int a2, int a3, int a4);  /* 0x002bac24 */
int __fastcall sub_602BAC4C(int a1);  /* 0x002bac4c */
int __fastcall sub_602BAC64(float *a1);  /* 0x002bac64 */
int __fastcall sub_602BACB4(int a1);  /* 0x002bacb4 */
void __fastcall sub_602BAD00(int a1);  /* 0x002bad00 */
int __fastcall sub_602BAD60(int a1);  /* 0x002bad60 */
int __fastcall sub_602BAD68(int a1, int a2, int a3);  /* 0x002bad68 */
int __fastcall sub_602BAE34(float *a1, int a2, int a3);  /* 0x002bae34 */
int __fastcall sub_602BAE84(_BYTE *a1, int a2, int a3);  /* 0x002bae84 */
int __fastcall sub_602BAEDC(_DWORD *a1, int a2, int a3);  /* 0x002baedc */
int __fastcall sub_602BAEFC(int a1);  /* 0x002baefc */
int __fastcall sub_602BAFE0(int a1);  /* 0x002bafe0 */
int __fastcall sub_602BB2F8(int a1);  /* 0x002bb2f8 */
int __fastcall sub_602BB404(int a1);  /* 0x002bb404 */
int __fastcall sub_602BB4E0(int a1);  /* 0x002bb4e0 */
int __fastcall sub_602BB5CC(int a1);  /* 0x002bb5cc */
int __fastcall sub_602BB6B8(int a1);  /* 0x002bb6b8 */
int __fastcall sub_602BB814(int a1);  /* 0x002bb814 */
bool __fastcall sub_602BB904(int a1, int a2);  /* 0x002bb904 */
int __fastcall sub_602BBA7C(_BYTE *a1);  /* 0x002bba7c */
int __fastcall sub_602BBB14(int a1);  /* 0x002bbb14 */
int __fastcall sub_602BBD90(int result);  /* 0x002bbd90 */
int __fastcall sub_602BBE98(_BYTE *a1);  /* 0x002bbe98 */
int __fastcall sub_602BC0F8(int a1, int a2);  /* 0x002bc0f8 */
int __fastcall sub_602BC26C(int a1);  /* 0x002bc26c */
int __fastcall sub_602BC2F8(int a1);  /* 0x002bc2f8 */
int __fastcall sub_602BC5C0(int a1);  /* 0x002bc5c0 */
int __fastcall sub_602BC9A8(int a1, _BYTE *a2);  /* 0x002bc9a8 */
int __fastcall sub_602BCE00(int a1);  /* 0x002bce00 */
int __fastcall sub_602BCF50(int a1, int a2, int a3, int a4);  /* 0x002bcf50 */
int __fastcall sub_602BCF78(int a1);  /* 0x002bcf78 */
bool __fastcall sub_602BCFA0(int a1, int a2);  /* 0x002bcfa0 */
void __fastcall sub_602BD118(_BYTE *a1);  /* 0x002bd118 */
int __fastcall sub_602BD188(_BYTE *a1);  /* 0x002bd188 */
int __fastcall sub_602BDDC0(int a1);  /* 0x002bddc0 */
int __fastcall sub_602BDED0(int a1);  /* 0x002bded0 */
int __fastcall sub_602BE340(int a1);  /* 0x002be340 */
int __fastcall sub_602BE5C0(int result);  /* 0x002be5c0 */
int __fastcall sub_602BE5D0(int a1);  /* 0x002be5d0 */
int __fastcall sub_602BE6F0(int a1);  /* 0x002be6f0 */
int __fastcall sub_602BE938(int a1);  /* 0x002be938 */
int __fastcall sub_602BECC0(int a1);  /* 0x002becc0 */
int __fastcall sub_602BED40(int a1);  /* 0x002bed40 */
int __fastcall sub_602BEEF8(int a1);  /* 0x002beef8 */
int __fastcall sub_602BEF88(int a1);  /* 0x002bef88 */
int __fastcall sub_602BF17C(int a1);  /* 0x002bf17c */
unsigned int __fastcall sub_602BF29C(int a1);  /* 0x002bf29c */
int __fastcall sub_602BF4A8(int a1);  /* 0x002bf4a8 */
int __fastcall sub_602BF5B0(int a1);  /* 0x002bf5b0 */
int __fastcall sub_602BF6C4(_DWORD *a1);  /* 0x002bf6c4 */
int __fastcall sub_602BF784(int a1);  /* 0x002bf784 */
int __fastcall sub_602BF834(int a1);  /* 0x002bf834 */
int __fastcall sub_602BFA2C(int a1);  /* 0x002bfa2c */
int __fastcall sub_602BFA38(int a1);  /* 0x002bfa38 */
int __fastcall sub_602BFA98(int a1, int a2, int a3, int a4);  /* 0x002bfa98 */
int __fastcall sub_602BFC2C(int a1);  /* 0x002bfc2c */
int __fastcall sub_602BFC8C(int a1);  /* 0x002bfc8c */
int __fastcall sub_602BFE20(int a1);  /* 0x002bfe20 */
int __fastcall sub_602BFE80(int a1);  /* 0x002bfe80 */
int __fastcall sub_602C0014(int a1);  /* 0x002c0014 */
int __fastcall sub_602C0070(int a1, int a2, int a3, int a4);  /* 0x002c0070 */
int __fastcall sub_602C01C0(int a1);  /* 0x002c01c0 */
int __fastcall sub_602C021C(int a1, int a2, int a3, int a4);  /* 0x002c021c */
int __fastcall sub_602C036C(int a1);  /* 0x002c036c */
int __fastcall sub_602C03C8(int a1, int a2, int a3, int a4);  /* 0x002c03c8 */
int __fastcall sub_602C0518(int a1);  /* 0x002c0518 */
int __fastcall sub_602C0590(int result);  /* 0x002c0590 */
int __fastcall sub_602C060C(_DWORD **a1);  /* 0x002c060c */
int __fastcall sub_602C0660(int a1, int a2, int a3, int a4);  /* 0x002c0660 */
int __fastcall sub_602C06F4(_DWORD *a1);  /* 0x002c06f4 */
int __fastcall sub_602C0948(int a1);  /* 0x002c0948 */
int __fastcall sub_602C0CC0(int a1);  /* 0x002c0cc0 */
int __fastcall sub_602C1470(int a1);  /* 0x002c1470 */
int __fastcall sub_602C1A20(int a1);  /* 0x002c1a20 */
int __fastcall sub_602C1B2C(int a1, int a2, int a3);  /* 0x002c1b2c */
int __fastcall sub_602C1BE0(int a1, int a2);  /* 0x002c1be0 */
int __fastcall sub_602C1E14(_BYTE *a1);  /* 0x002c1e14 */
int __fastcall sub_602C1E44(int a1);  /* 0x002c1e44 */
int __fastcall sub_602C1F6C(int a1);  /* 0x002c1f6c */
int __fastcall sub_602C20EC(int a1, int a2, int a3, int a4);  /* 0x002c20ec */
int __fastcall sub_602C2118(int a1);  /* 0x002c2118 */
int __fastcall sub_602C2130(int result);  /* 0x002c2130 */
int __fastcall sub_602C2178(int a1);  /* 0x002c2178 */
int __fastcall sub_602C22A8(int a1);  /* 0x002c22a8 */
int __fastcall sub_602C2494(int a1);  /* 0x002c2494 */
int __fastcall sub_602C2628(_BYTE *a1);  /* 0x002c2628 */
int __fastcall sub_602C2720(int a1, int a2, int a3);  /* 0x002c2720 */
int __fastcall sub_602C28B0(int a1, int a2, int a3);  /* 0x002c28b0 */
int __fastcall sub_602C29FC(_DWORD *a1, int a2, int a3);  /* 0x002c29fc */
int __fastcall sub_602C2A98(int a1, int a2, int a3);  /* 0x002c2a98 */
bool __fastcall sub_602C2BD4(int a1);  /* 0x002c2bd4 */
int __fastcall sub_602C2E44(int a1);  /* 0x002c2e44 */
int __fastcall sub_602C2F88(_DWORD *a1);  /* 0x002c2f88 */
int __fastcall sub_602C3070(int a1);  /* 0x002c3070 */
int __fastcall sub_602C3178(int a1);  /* 0x002c3178 */
int __fastcall sub_602C32A0(float *a1, float *a2);  /* 0x002c32a0 */
void __fastcall sub_602C33AC(int a1);  /* 0x002c33ac */
int __fastcall sub_602C340C(int a1);  /* 0x002c340c */
int __fastcall sub_602C3460(int result);  /* 0x002c3460 */
int __fastcall sub_602C34A8(int a1);  /* 0x002c34a8 */
void __fastcall sub_602C3620(int a1);  /* 0x002c3620 */
int __fastcall sub_602C36BC(int a1, int a2);  /* 0x002c36bc */
bool __fastcall sub_602C36D0(int a1, int a2);  /* 0x002c36d0 */
int __fastcall sub_602C3848(_BYTE *a1);  /* 0x002c3848 */
int __fastcall sub_602C392C(int a1);  /* 0x002c392c */
int __fastcall sub_602C3B08(int a1);  /* 0x002c3b08 */
int __fastcall sub_602C3BE4(int a1);  /* 0x002c3be4 */
int __fastcall sub_602C3BF8(int a1);  /* 0x002c3bf8 */
int __fastcall sub_602C3C08(int result);  /* 0x002c3c08 */
int __fastcall sub_602C3C80(int result);  /* 0x002c3c80 */
int __fastcall sub_602C3E04(int a1);  /* 0x002c3e04 */
int __fastcall sub_602C409C(int a1);  /* 0x002c409c */
int __fastcall sub_602C4230(int a1);  /* 0x002c4230 */
int __fastcall sub_602C430C(int a1, int a2, int a3, int a4);  /* 0x002c430c */
int __fastcall sub_602C43CC(int result, int a2);  /* 0x002c43cc */
int __fastcall sub_602C4404(int a1);  /* 0x002c4404 */
int __fastcall sub_602C44A4(int a1);  /* 0x002c44a4 */
int __fastcall sub_602C4680(int a1, int a2, int a3);  /* 0x002c4680 */
int __fastcall sub_602C46D4(int a1, int a2, int a3);  /* 0x002c46d4 */
int __fastcall sub_602C4770(int a1);  /* 0x002c4770 */
int __fastcall sub_602C477C(int a1);  /* 0x002c477c */
int __fastcall sub_602C47E0(int a1);  /* 0x002c47e0 */
int __fastcall sub_602C4980(_BYTE *a1);  /* 0x002c4980 */
void __fastcall sub_602C49C0(int a1);  /* 0x002c49c0 */
int __fastcall sub_602C4A34(int a1);  /* 0x002c4a34 */
int __fastcall sub_602C4A80(int a1);  /* 0x002c4a80 */
int __fastcall sub_602C4A84(int a1);  /* 0x002c4a84 */
int __fastcall sub_602C4AA4(int result);  /* 0x002c4aa4 */
int __fastcall sub_602C4AB0(int a1);  /* 0x002c4ab0 */
int __fastcall sub_602C4C10(int a1);  /* 0x002c4c10 */
int __fastcall sub_602C4E8C(int a1, int a2, float *a3);  /* 0x002c4e8c */
bool __fastcall sub_602C4F8C(int a1, int a2);  /* 0x002c4f8c */
void __fastcall sub_602C5104(_BYTE *a1);  /* 0x002c5104 */
int __fastcall sub_602C5174(_BYTE *a1);  /* 0x002c5174 */
int __fastcall sub_602C51E8(int a1, float *a2);  /* 0x002c51e8 */
int __fastcall sub_602C52E8(int a1);  /* 0x002c52e8 */
int __fastcall sub_602C52F8(int a1);  /* 0x002c52f8 */
int __fastcall sub_602C530C(int a1);  /* 0x002c530c */
int __fastcall sub_602C56B8(int a1);  /* 0x002c56b8 */
bool __fastcall sub_602C583C(int a1);  /* 0x002c583c */
int __fastcall sub_602C5954(int a1);  /* 0x002c5954 */
int __fastcall sub_602C59E8(int a1, int *a2);  /* 0x002c59e8 */
int __fastcall sub_602C5A14(int a1);  /* 0x002c5a14 */
int __fastcall sub_602C6120(int a1);  /* 0x002c6120 */
int __fastcall sub_602C6210(int a1);  /* 0x002c6210 */
int __fastcall sub_602C6410(int result);  /* 0x002c6410 */
int __fastcall sub_602C6488(int a1);  /* 0x002c6488 */
int __fastcall sub_602C64D0(int a1, int *a2);  /* 0x002c64d0 */
int __fastcall SE_OBJ_TEKKYU_CRASH_ref(int a1);  /* 0x002c6524 */
int __fastcall sub_602C65E8(float *a1, int a2, int a3);  /* 0x002c65e8 */
int __fastcall sub_602C672C(_DWORD *a1, int a2, int a3);  /* 0x002c672c */
int __fastcall sub_602C6B90(int a1);  /* 0x002c6b90 */
int __fastcall sub_602C6EB0(int result);  /* 0x002c6eb0 */
int __fastcall sub_602C6ECC(int a1);  /* 0x002c6ecc */
void __fastcall sub_602C6F3C(int a1);  /* 0x002c6f3c */
int __fastcall sub_602C6F5C(int a1);  /* 0x002c6f5c */
int __fastcall sub_602C7274(int a1);  /* 0x002c7274 */
int __fastcall sub_602C72E0(int a1);  /* 0x002c72e0 */
int __fastcall sub_602C7304(unsigned __int8 *a1);  /* 0x002c7304 */
int __fastcall sub_602C7388(int result);  /* 0x002c7388 */
int __fastcall sub_602C741C(int a1);  /* 0x002c741c */
bool __fastcall sub_602C7664(int a1, int a2);  /* 0x002c7664 */
void __fastcall sub_602C7850(_BYTE *a1);  /* 0x002c7850 */
int __fastcall sub_602C7938(_BYTE *a1);  /* 0x002c7938 */
int __fastcall sub_602C7A2C(int a1, int a2, int a3);  /* 0x002c7a2c */
int __fastcall sub_602C7A90(int a1, int a2, int a3);  /* 0x002c7a90 */
int __fastcall SE_OBJ_TEKKYU_ROLL_ref(int a1);  /* 0x002c7ab0 */
int __fastcall sub_602C7B28(int a1, int a2);  /* 0x002c7b28 */
int __fastcall sub_602C7BC4(int a1);  /* 0x002c7bc4 */
int __fastcall sub_602C7EA4(int a1);  /* 0x002c7ea4 */
int __fastcall sub_602C7F08(int a1);  /* 0x002c7f08 */
int __fastcall sub_602C8070(int a1);  /* 0x002c8070 */
int __fastcall sub_602C80C8(int a1, int *a2);  /* 0x002c80c8 */
int __fastcall sub_602C80F4(int a1);  /* 0x002c80f4 */
int __fastcall sub_602C858C(int a1);  /* 0x002c858c */
int __fastcall sub_602C868C(int a1);  /* 0x002c868c */
int __fastcall sub_602C8880(float *a1, int a2, int a3);  /* 0x002c8880 */
int __fastcall sub_602C89C4(int a1, int a2, int a3);  /* 0x002c89c4 */
int __fastcall sub_602C8D28(int a1, _DWORD *a2, int a3);  /* 0x002c8d28 */
int __fastcall sub_602C8EC8(int result);  /* 0x002c8ec8 */
int __fastcall sub_602C8F3C(int a1);  /* 0x002c8f3c */
int __fastcall sub_602C8F88(int a1, int *a2);  /* 0x002c8f88 */
int __fastcall SE_OBJ_TEKKYU_L_CRASH_ref(int a1);  /* 0x002c8fc0 */
int __fastcall sub_602C9064(int result);  /* 0x002c9064 */
int __fastcall sub_602C9068(int a1);  /* 0x002c9068 */
bool __fastcall sub_602C940C(int a1, int a2);  /* 0x002c940c */
void __fastcall sub_602C95F8(_BYTE *a1);  /* 0x002c95f8 */
int __fastcall sub_602C96E0(_BYTE *a1);  /* 0x002c96e0 */
int __fastcall SE_OBJ_TEKKYU_L_ROLL_ref(int a1);  /* 0x002c97dc */
int __fastcall sub_602C9858(int a1);  /* 0x002c9858 */
int __fastcall sub_602C9A78(int result);  /* 0x002c9a78 */
__int16 __fastcall sub_602C9A88(int a1);  /* 0x002c9a88 */
int __fastcall sub_602C9C40(int result);  /* 0x002c9c40 */
int __fastcall sub_602C9C4C(float *a1);  /* 0x002c9c4c */
int __fastcall sub_602C9CA0(_DWORD *a1);  /* 0x002c9ca0 */
int __fastcall sub_602C9E9C(int a1);  /* 0x002c9e9c */
int __fastcall sub_602CA078(int a1);  /* 0x002ca078 */
int __fastcall sub_602CA1DC(int a1);  /* 0x002ca1dc */
int __fastcall sub_602CA34C(int a1);  /* 0x002ca34c */
int __fastcall sub_602CA4A4(int a1, int a2, int a3, int a4);  /* 0x002ca4a4 */
int __fastcall sub_602CA4E0(int a1);  /* 0x002ca4e0 */
bool __fastcall sub_602CA508(int a1, int a2);  /* 0x002ca508 */
void __fastcall sub_602CA60C(int a1);  /* 0x002ca60c */
int __fastcall sub_602CA65C(int a1);  /* 0x002ca65c */
int __fastcall sub_602CA988(int result);  /* 0x002ca988 */
int __fastcall sub_602CA9A4(int a1, int a2);  /* 0x002ca9a4 */
int __fastcall sub_602CAA60(_DWORD *a1);  /* 0x002caa60 */
int __fastcall sub_602CAAE4(int a1);  /* 0x002caae4 */
int __fastcall sub_602CAB18(int a1);  /* 0x002cab18 */
int __fastcall sub_602CAB30(int a1);  /* 0x002cab30 */
void __fastcall sub_602CAB3C(int a1);  /* 0x002cab3c */
int __fastcall sub_602CAB50(int a1, int a2, int a3);  /* 0x002cab50 */
int __fastcall sub_602CABB4(int a1, int a2, int a3);  /* 0x002cabb4 */
bool __fastcall sub_602CABC8(int a1, int a2);  /* 0x002cabc8 */
void __fastcall sub_602CAD40(Actor *a1);  /* 0x002cad40 */
int __fastcall sub_602CADB0(Actor *a1);  /* 0x002cadb0 */
int __fastcall sub_602CAE24(int a1);  /* 0x002cae24 */
void __fastcall sub_602CAEE4(int a1);  /* 0x002caee4 */
int __fastcall sub_602CB180(int a1, int a2, unsigned int a3);  /* 0x002cb180 */
int __fastcall sub_602CB34C(int *a1);  /* 0x002cb34c */
int __fastcall sub_602CB818(int result, int a2, int a3, int a4, int a5);  /* 0x002cb818 */
void __fastcall sub_602CB83C(int a1);  /* 0x002cb83c */
int __fastcall sub_602CB904(_DWORD *a1);  /* 0x002cb904 */
unsigned __int32 __fastcall sub_602CB9B0(int a1, int a2, int a3);  /* 0x002cb9b0 */
int __fastcall sub_602CD060(int a1);  /* 0x002cd060 */
int __fastcall sub_602CD22C(int *a1);  /* 0x002cd22c */
int __fastcall sub_602CD244(int a1);  /* 0x002cd244 */
int __fastcall flower_2_ref(int a1);  /* 0x002cd574 */
int __fastcall sub_602CD640(int a1);  /* 0x002cd640 */
int __fastcall sub_602CD78C(int result);  /* 0x002cd78c */
int __fastcall sub_602CD79C(int a1);  /* 0x002cd79c */
int __fastcall sub_602CD884(int result);  /* 0x002cd884 */
int __fastcall sub_602CD89C(int a1);  /* 0x002cd89c */
int __fastcall sub_602CDBF8(int a1);  /* 0x002cdbf8 */
int __fastcall sub_602CDC34(int a1);  /* 0x002cdc34 */
int __fastcall hanachan_head_ref(_DWORD *a1, int a2);  /* 0x002cdf6c */
int __fastcall sub_602CE0B8(int a1, int a2, int a3, int a4);  /* 0x002ce0b8 */
int __fastcall sub_602CE128(int a1);  /* 0x002ce128 */
int __fastcall sub_602CE14C(_DWORD *a1, int a2);  /* 0x002ce14c */
int __fastcall sub_602CE5EC(float *a1, int a2, float *a3);  /* 0x002ce5ec */
int __fastcall sub_602CE7D8(int a1);  /* 0x002ce7d8 */
int __fastcall sub_602CE7FC(int a1);  /* 0x002ce7fc */
int __fastcall sub_602CE894(int a1);  /* 0x002ce894 */
int __fastcall sub_602CEA38(int a1);  /* 0x002cea38 */
void __fastcall sub_602CEEB8(int a1);  /* 0x002ceeb8 */
int __fastcall sub_602CF048(int *a1, int a2, int a3);  /* 0x002cf048 */
int __fastcall sub_602CF1C0(int a1);  /* 0x002cf1c0 */
int __fastcall sub_602CF5A4(int a1, _DWORD *a2);  /* 0x002cf5a4 */
int __fastcall sub_602CF760(int a1);  /* 0x002cf760 */
int __fastcall sub_602CF7AC(int a1);  /* 0x002cf7ac */
int __fastcall sub_602CFADC(int a1);  /* 0x002cfadc */
void __fastcall sub_602CFCD4(int a1);  /* 0x002cfcd4 */
int __fastcall sub_602D00A4(int a1);  /* 0x002d00a4 */
int __fastcall sub_602D025C(int result);  /* 0x002d025c */
int __fastcall sub_602D0278(int a1, float *a2);  /* 0x002d0278 */
int __fastcall sub_602D040C(int a1, int a2, int a3);  /* 0x002d040c */
int __fastcall sub_602D0734(int a1, int a2, int a3);  /* 0x002d0734 */
int __fastcall sub_602D08D0(int a1, int a2, int a3);  /* 0x002d08d0 */
int __fastcall sub_602D0AB4(int a1);  /* 0x002d0ab4 */
int __fastcall sub_602D0AC0(int a1, int a2, int a3);  /* 0x002d0ac0 */
int __fastcall sub_602D0B3C(int a1, int a2, int a3);  /* 0x002d0b3c */
int __fastcall sub_602D0B68(int a1, int a2, int a3);  /* 0x002d0b68 */
int __fastcall sub_602D0DC4(int a1);  /* 0x002d0dc4 */
int __fastcall sub_602D0DDC(int a1);  /* 0x002d0ddc */
int __fastcall sub_602D0EEC(int a1);  /* 0x002d0eec */
int __fastcall sub_602D1074(int a1, int a2);  /* 0x002d1074 */
int __fastcall sub_602D11D8(_DWORD *a1);  /* 0x002d11d8 */
bool __fastcall sub_602D12D8(int a1, int a2);  /* 0x002d12d8 */
void __fastcall sub_602D1450(_DWORD *a1);  /* 0x002d1450 */
int __fastcall sub_602D1574(_DWORD *a1);  /* 0x002d1574 */
int __fastcall sub_602D1584(int a1);  /* 0x002d1584 */
int __fastcall sub_602D15EC(int a1);  /* 0x002d15ec */
int __fastcall sub_602D1614(int a1, int a2, int a3, int a4, int a5);  /* 0x002d1614 */
int __fastcall sub_602D17E0(int a1, float *a2, int *a3);  /* 0x002d17e0 */
int __fastcall sub_602D18F8(int a1, int a2, int a3, int a4, int a5);  /* 0x002d18f8 */
int __fastcall sub_602D1910(int a1, int a2);  /* 0x002d1910 */
int __fastcall sub_602D1B04(int a1);  /* 0x002d1b04 */
int __fastcall sub_602D1D84(int a1, int a2, int a3, int a4);  /* 0x002d1d84 */
int __fastcall sub_602D1DFC(int a1);  /* 0x002d1dfc */
int __fastcall sub_602D1E2C(int a1);  /* 0x002d1e2c */
int __fastcall sub_602D1E50(int a1);  /* 0x002d1e50 */
int __fastcall sub_602D1E58(int a1, int a2);  /* 0x002d1e58 */
int __fastcall sub_602D1F80(int a1);  /* 0x002d1f80 */
int __fastcall sub_602D212C(int a1);  /* 0x002d212c */
int __fastcall sub_602D2210(int a1, int a2, int a3, int a4);  /* 0x002d2210 */
int __fastcall sub_602D2240(int a1, int a2, int a3, int a4);  /* 0x002d2240 */
int __fastcall sub_602D25C0(int a1, int a2, int a3, int a4);  /* 0x002d25c0 */
int __fastcall sub_602D287C(int a1, int a2, int a3);  /* 0x002d287c */
bool __fastcall sub_602D2B38(int a1, int a2);  /* 0x002d2b38 */
int __fastcall sub_602D2D24(_DWORD *a1);  /* 0x002d2d24 */
int __fastcall sub_602D2D34(int a1, int a2);  /* 0x002d2d34 */
int __fastcall sub_602D2E88(int *a1);  /* 0x002d2e88 */
int __fastcall sub_602D2F7C(int a1);  /* 0x002d2f7c */
int __fastcall sub_602D3460(int a1);  /* 0x002d3460 */
int __fastcall sub_602D3564(int a1);  /* 0x002d3564 */
int __fastcall sub_602D3640(int a1);  /* 0x002d3640 */
int __fastcall sub_602D38A4(int *a1);  /* 0x002d38a4 */
int __fastcall sub_602D39A4(int a1);  /* 0x002d39a4 */
int __fastcall sub_602D3C48(int a1);  /* 0x002d3c48 */
int __fastcall sub_602D3D28(int a1);  /* 0x002d3d28 */
int __fastcall jump_attack_ref(int a1);  /* 0x002d3db4 */
int __fastcall sub_602D3EA4(int a1);  /* 0x002d3ea4 */
int __fastcall jump_attack_ed_ref(int a1);  /* 0x002d4188 */
int __fastcall sub_602D4268(int a1);  /* 0x002d4268 */
__int64 __fastcall sub_602D42F4(int a1);  /* 0x002d42f4 */
int __fastcall sub_602D4430(int a1);  /* 0x002d4430 */
__int64 __fastcall sub_602D477C(__int64 result);  /* 0x002d477c */
int __fastcall sub_602D47C0(int a1);  /* 0x002d47c0 */
int __fastcall sub_602D4954(int a1);  /* 0x002d4954 */
int __fastcall sub_602D4A18(int a1);  /* 0x002d4a18 */
int __fastcall sub_602D5200(int result);  /* 0x002d5200 */
int __fastcall SledgeBro_ctor(int a1);  /* 0x002d5210 */
int __fastcall sub_602D5890(int a1);  /* 0x002d5890 */
int __fastcall sub_602D59A8(_DWORD *a1);  /* 0x002d59a8 */
int __fastcall sub_602D5DF0(int a1);  /* 0x002d5df0 */
int __fastcall sub_602D5EF8(int a1);  /* 0x002d5ef8 */
int __fastcall SumoBro_StunPlayers(unsigned __int8 *a1);  /* 0x002d6764 */
int __fastcall sub_602D6DAC(int a1, int a2);  /* 0x002d6dac */
int __fastcall sub_602D7440(int a1, int a2);  /* 0x002d7440 */
int __fastcall sub_602D79A8(int a1);  /* 0x002d79a8 */
bool __fastcall sub_602D7E68(int a1, int a2, int a3);  /* 0x002d7e68 */
int __fastcall sub_602D7E88(int a1, int a2, int a3);  /* 0x002d7e88 */
int __fastcall sub_602D7F50(int a1, int a2, int a3);  /* 0x002d7f50 */
int __fastcall sub_602D7F70(int result);  /* 0x002d7f70 */
int __fastcall sub_602D7FF4(int a1);  /* 0x002d7ff4 */
int __fastcall sub_602D8228(int a1);  /* 0x002d8228 */
int __fastcall sub_602D82CC(int a1);  /* 0x002d82cc */
int __fastcall sub_602D8440(int a1);  /* 0x002d8440 */
int __fastcall SE_EMY_BONE_MET_ref(int a1);  /* 0x002d8540 */
int __fastcall sub_602D89FC(int result);  /* 0x002d89fc */
int __fastcall sub_602D8A0C(int a1);  /* 0x002d8a0c */
int __fastcall sub_602D9154(int a1);  /* 0x002d9154 */
int __fastcall sub_602D9DD0(int result);  /* 0x002d9dd0 */
int __fastcall sub_602DA2D8(int a1);  /* 0x002da2d8 */
int __fastcall sub_602DA884(int a1);  /* 0x002da884 */
int __fastcall sub_602DABE8(_DWORD *a1);  /* 0x002dabe8 */
int __fastcall sub_602DADF4(int a1);  /* 0x002dadf4 */
int __fastcall sub_602DB068(int a1);  /* 0x002db068 */
int __fastcall sub_602DB234(int a1);  /* 0x002db234 */
int __fastcall sub_602DB344(int a1);  /* 0x002db344 */
int __fastcall sub_602DB46C(int a1);  /* 0x002db46c */
int __fastcall sub_602DB7D8(int a1);  /* 0x002db7d8 */
int __fastcall sub_602DB924(float *a1);  /* 0x002db924 */
int __fastcall sub_602DC018(int a1);  /* 0x002dc018 */
void __fastcall sub_602DC08C(int a1);  /* 0x002dc08c */
int __fastcall sub_602DC130(int a1, int a2, int *a3);  /* 0x002dc130 */
int __fastcall sub_602DC200(_DWORD *a1, int a2);  /* 0x002dc200 */
bool __fastcall sub_602DC29C(int a1, int a2, int a3);  /* 0x002dc29c */
bool __fastcall sub_602DC370(int a1);  /* 0x002dc370 */
int __fastcall sub_602DC488(int a1, int a2, int *a3, int a4);  /* 0x002dc488 */
int __fastcall sub_602DC874(int a1, int a2, int a3);  /* 0x002dc874 */
int __fastcall sub_602DC8D8(int a1, int a2, int *a3);  /* 0x002dc8d8 */
int __fastcall sub_602DC95C(int a1, int a2, int *a3);  /* 0x002dc95c */
int __fastcall sub_602DC9E0(int a1, int a2, int *a3);  /* 0x002dc9e0 */
int __fastcall sub_602DCA64(int a1, int a2, int a3);  /* 0x002dca64 */
int __fastcall sub_602DCBFC(float *a1, int a2);  /* 0x002dcbfc */
int __fastcall sub_602DCCB0(float *a1, int a2);  /* 0x002dccb0 */
int __fastcall sub_602DCD64(float *a1, int a2);  /* 0x002dcd64 */
int __fastcall sub_602DCE18(int a1);  /* 0x002dce18 */
int __fastcall sub_602DCE7C(int a1);  /* 0x002dce7c */
int __fastcall sub_602DD578(int a1);  /* 0x002dd578 */
int __fastcall sub_602DD8E0(int a1, int *a2);  /* 0x002dd8e0 */
int __fastcall sub_602DD90C(int a1, int *a2);  /* 0x002dd90c */
int __fastcall sub_602DD938(int result, int a2, int a3);  /* 0x002dd938 */
bool __fastcall sub_602DD96C(int a1, int a2);  /* 0x002dd96c */
void __fastcall sub_602DDAE4(_BYTE *a1);  /* 0x002ddae4 */
int __fastcall sub_602DDB54(_BYTE *a1);  /* 0x002ddb54 */
int __fastcall sub_602DDBD0(int a1);  /* 0x002ddbd0 */
int __fastcall sub_602DDBDC(int a1);  /* 0x002ddbdc */
int __fastcall sub_602DDCF4(int a1);  /* 0x002ddcf4 */
int __fastcall sub_602DE0F8(int result);  /* 0x002de0f8 */
int __fastcall sub_602DE104(int a1);  /* 0x002de104 */
int __fastcall sub_602DE198(int a1);  /* 0x002de198 */
int __fastcall sub_602DE848(int result);  /* 0x002de848 */
int __fastcall sub_602DE85C(int a1, int a2, int a3, int a4);  /* 0x002de85c */
int __fastcall sub_602DEBA4(int result);  /* 0x002deba4 */
int __fastcall sub_602DEC44(int a1);  /* 0x002dec44 */
int __fastcall sub_602DED08(_DWORD *a1);  /* 0x002ded08 */
void __fastcall sub_602DED68(int a1);  /* 0x002ded68 */
int __fastcall sub_602DEDF8(int a1);  /* 0x002dedf8 */
int __fastcall sub_602DF044(int a1);  /* 0x002df044 */
int __fastcall sub_602DF258(int a1);  /* 0x002df258 */
int __fastcall sub_602DF4E0(int a1);  /* 0x002df4e0 */
int __fastcall sub_602DF630(_DWORD *a1);  /* 0x002df630 */
int __fastcall sub_602DF778(int a1);  /* 0x002df778 */
int __fastcall sub_602DFA6C(int a1, int a2, int a3, int a4);  /* 0x002dfa6c */
int __fastcall sub_602DFA98(_DWORD *a1, int a2);  /* 0x002dfa98 */
int __fastcall sub_602DFB00(int result);  /* 0x002dfb00 */
int __fastcall sub_602DFB38(int result);  /* 0x002dfb38 */
int __fastcall sub_602DFC0C(_DWORD *a1, _DWORD *a2, int *a3);  /* 0x002dfc0c */
int __fastcall sub_602DFC80(int *a1, int a2, int a3);  /* 0x002dfc80 */
bool __fastcall sub_602DFD3C(int a1, int a2);  /* 0x002dfd3c */
int __fastcall sub_602DFE40(Actor *a1);  /* 0x002dfe40 */
int __fastcall sub_602E0804(int a1);  /* 0x002e0804 */
int __fastcall sub_602E08B4(int a1);  /* 0x002e08b4 */
int __fastcall sub_602E0B0C(int a1);  /* 0x002e0b0c */
int __fastcall sub_602E10B0(int result);  /* 0x002e10b0 */
int __fastcall sub_602E10C4(int result);  /* 0x002e10c4 */
int __fastcall sub_602E11B4(int a1, int a2);  /* 0x002e11b4 */
int __fastcall sub_602E11DC(int a1, int a2);  /* 0x002e11dc */
int __fastcall sub_602E1204(int a1);  /* 0x002e1204 */
int __fastcall sub_602E1370(int a1);  /* 0x002e1370 */
int __fastcall sub_602E1744(int a1);  /* 0x002e1744 */
int __fastcall sub_602E175C(int a1);  /* 0x002e175c */
int __fastcall sub_602E1B0C(int a1);  /* 0x002e1b0c */
void __fastcall sub_602E209C(int a1);  /* 0x002e209c */
unsigned int __fastcall sub_602E25E4(int a1);  /* 0x002e25e4 */
unsigned __int32 __fastcall sub_602E26AC(_DWORD *a1);  /* 0x002e26ac */
int __fastcall sub_602E2940(int a1);  /* 0x002e2940 */
int __fastcall sub_602E2CE0(int a1);  /* 0x002e2ce0 */
int __fastcall sub_602E2F10(int result);  /* 0x002e2f10 */
bool __fastcall sub_602E3034(int a1);  /* 0x002e3034 */
int __fastcall sub_602E3240(int a1);  /* 0x002e3240 */
int __fastcall sub_602E3258(int a1);  /* 0x002e3258 */
int __fastcall sub_602E3270(int a1, float *a2);  /* 0x002e3270 */
int __fastcall sub_602E3590(int a1, int a2);  /* 0x002e3590 */
int __fastcall sub_602E3714(int a1);  /* 0x002e3714 */
int __fastcall sub_602E3888(int a1);  /* 0x002e3888 */
int __fastcall sub_602E39B4(int a1);  /* 0x002e39b4 */
int __fastcall sub_602E3A8C(int a1);  /* 0x002e3a8c */
int __fastcall sub_602E3B70(int a1);  /* 0x002e3b70 */
int __fastcall sub_602E3C50(int a1);  /* 0x002e3c50 */
int __fastcall sub_602E4250(int a1);  /* 0x002e4250 */
void __fastcall sub_602E4594(int a1);  /* 0x002e4594 */
int __fastcall sub_602E48C8(int a1, int *a2);  /* 0x002e48c8 */
int __fastcall sub_602E4998(int a1, int a2);  /* 0x002e4998 */
int __fastcall sub_602E4BC8(int result, int a2, int a3, int a4);  /* 0x002e4bc8 */
int __fastcall sub_602E4CF4(int a1, int a2);  /* 0x002e4cf4 */
unsigned int __fastcall sub_602E4ED0(int a1, int a2);  /* 0x002e4ed0 */
int __fastcall sub_602E5110(int a1, int a2, int a3);  /* 0x002e5110 */
int __fastcall sub_602E51BC(int a1, int a2, int a3);  /* 0x002e51bc */
int __fastcall sub_602E525C(int a1);  /* 0x002e525c */
int __fastcall sub_602E5268(int *a1, int a2, int a3);  /* 0x002e5268 */
int __fastcall sub_602E527C(int a1, int a2);  /* 0x002e527c */
int __fastcall sub_602E52A4(_DWORD *a1, int a2, int a3);  /* 0x002e52a4 */
int __fastcall sub_602E52CC(float *a1, int a2, int a3);  /* 0x002e52cc */
bool __fastcall sub_602E5344(int a1);  /* 0x002e5344 */
int __fastcall sub_602E5390(int a1);  /* 0x002e5390 */
int __fastcall sub_602E5740(int a1, int a2, int a3);  /* 0x002e5740 */
int __fastcall sub_602E5948(int a1);  /* 0x002e5948 */
int __fastcall sub_602E5960(float *a1);  /* 0x002e5960 */
bool __fastcall sub_602E5A18(int a1, int a2);  /* 0x002e5a18 */
void __fastcall sub_602E5B90(_BYTE *a1);  /* 0x002e5b90 */
int __fastcall sub_602E5C40(_BYTE *a1);  /* 0x002e5c40 */
int __fastcall sub_602E5DE8(int a1, float *a2);  /* 0x002e5de8 */
int __fastcall sub_602E5E18(int result);  /* 0x002e5e18 */
int __fastcall sub_602E5E28(int result);  /* 0x002e5e28 */
void __fastcall sub_602E5E3C(int a1);  /* 0x002e5e3c */
int __fastcall sub_602E5EB0(int a1);  /* 0x002e5eb0 */
int __fastcall sub_602E5FF0(int a1);  /* 0x002e5ff0 */
int __fastcall sub_602E6290(_DWORD *a1, int a2, int a3);  /* 0x002e6290 */
int __fastcall sub_602E642C(int a1);  /* 0x002e642c */
int __fastcall sub_602E6444(_DWORD **a1, float *a2, int a3, float *a4, int a5);  /* 0x002e6444 */
int __fastcall sub_602E6B18(int result);  /* 0x002e6b18 */
int __fastcall sub_602E6CD4(_DWORD *a1);  /* 0x002e6cd4 */
int __fastcall sub_602E6D20(_DWORD *a1);  /* 0x002e6d20 */
int __fastcall sub_602E6DD8(_DWORD **a1, float *a2, int a3, float *a4, int a5);  /* 0x002e6dd8 */
int __fastcall sub_602E6DDC(_DWORD *a1);  /* 0x002e6ddc */
int __fastcall sub_602E6E24(_DWORD *a1, int a2, int a3);  /* 0x002e6e24 */
int __fastcall sub_602E6EF0(_DWORD *a1);  /* 0x002e6ef0 */
int __fastcall sub_602E6F24(_DWORD *a1);  /* 0x002e6f24 */
int __fastcall sub_602E6F54(_DWORD *a1);  /* 0x002e6f54 */
int __fastcall sub_602E6F78(int result);  /* 0x002e6f78 */
int __fastcall sub_602E6F88(int result);  /* 0x002e6f88 */
int __fastcall sub_602E7078(int result, int a2);  /* 0x002e7078 */
void __fastcall sub_602E7334(int a1);  /* 0x002e7334 */
int __fastcall sub_602E7388(int a1);  /* 0x002e7388 */
int __fastcall sub_602E74DC(int result);  /* 0x002e74dc */
int __fastcall sub_602E7530(int result);  /* 0x002e7530 */
int __fastcall sub_602E7540(int a1);  /* 0x002e7540 */
unsigned int __fastcall sub_602E7574(int a1);  /* 0x002e7574 */
int __fastcall sub_602E7674(int a1);  /* 0x002e7674 */
int __fastcall sub_602E7800(int a1);  /* 0x002e7800 */
int __fastcall sub_602E7920(int a1);  /* 0x002e7920 */
int __fastcall sub_602E7A44(int a1);  /* 0x002e7a44 */
unsigned int __fastcall sub_602E7B58(int a1);  /* 0x002e7b58 */
int __fastcall sub_602E7C68(int a1);  /* 0x002e7c68 */
int __fastcall sub_602E8068(int result);  /* 0x002e8068 */
int __fastcall sub_602E80EC(int a1);  /* 0x002e80ec */
unsigned int __fastcall sub_602E8494(int a1);  /* 0x002e8494 */
int __fastcall sub_602E89D0(int result);  /* 0x002e89d0 */
int __fastcall sub_602E8A60(int a1);  /* 0x002e8a60 */
void __fastcall sub_602E8ECC(int a1);  /* 0x002e8ecc */
int __fastcall sub_602E8FC0(int a1, int a2, int a3, int a4);  /* 0x002e8fc0 */
unsigned int __fastcall sub_602E9464(int a1);  /* 0x002e9464 */
int __fastcall sub_602E99F4(int result);  /* 0x002e99f4 */
int __fastcall sub_602E9ECC(int a1);  /* 0x002e9ecc */
int __fastcall sub_602E9F78(int a1);  /* 0x002e9f78 */
int __fastcall sub_602EA0EC(int result);  /* 0x002ea0ec */
int __fastcall sub_602EA12C(_DWORD *a1);  /* 0x002ea12c */
int __fastcall sub_602EA1AC(int result);  /* 0x002ea1ac */
int __fastcall sub_602EA1BC(int a1);  /* 0x002ea1bc */
int __fastcall sub_602EA338(int a1);  /* 0x002ea338 */
int __fastcall sub_602EA94C(int result);  /* 0x002ea94c */
int __fastcall sub_602EA98C(_DWORD *a1);  /* 0x002ea98c */
int __fastcall sub_602EAA6C(int a1);  /* 0x002eaa6c */
int __fastcall sub_602EADA8(int a1);  /* 0x002eada8 */
int __fastcall sub_602EB034(float *a1);  /* 0x002eb034 */
int __fastcall sub_602EB130(int a1);  /* 0x002eb130 */
int __fastcall sub_602EB1E8(int a1);  /* 0x002eb1e8 */
int __fastcall sub_602EB354(int a1);  /* 0x002eb354 */
int __fastcall sub_602EB35C(int a1);  /* 0x002eb35c */
int __fastcall sub_602EB4A0(int a1);  /* 0x002eb4a0 */
unsigned int __fastcall sub_602EB670(int a1);  /* 0x002eb670 */
int __fastcall sub_602EBC58(int a1);  /* 0x002ebc58 */
int __fastcall sub_602EBD40(int result);  /* 0x002ebd40 */
unsigned int __fastcall sub_602EBD78(int a1);  /* 0x002ebd78 */
int __fastcall sub_602EBE3C(int a1);  /* 0x002ebe3c */
int __fastcall sub_602EC628(int result);  /* 0x002ec628 */
unsigned int __fastcall sub_602EC73C(int a1);  /* 0x002ec73c */
int __fastcall sub_602ECC8C(int a1);  /* 0x002ecc8c */
int __fastcall sub_602ECCDC(int result);  /* 0x002eccdc */
int __fastcall sub_602ECD30(int a1);  /* 0x002ecd30 */
int __fastcall sub_602ED390(int a1);  /* 0x002ed390 */
int __fastcall sub_602ED9C4(int a1, float *a2);  /* 0x002ed9c4 */
int __fastcall sub_602EDA9C(int a1);  /* 0x002eda9c */
int __fastcall sub_602EDD20(int a1, float *a2, unsigned int *a3);  /* 0x002edd20 */
int __fastcall sub_602EDE70(int a1);  /* 0x002ede70 */
int __fastcall sub_602EDFD8(int a1);  /* 0x002edfd8 */
int __fastcall sub_602EDFF0(int a1);  /* 0x002edff0 */
bool __fastcall sub_602EE018(int a1);  /* 0x002ee018 */
int __fastcall sub_602EE10C(int a1, int a2);  /* 0x002ee10c */
int __fastcall sub_602EE174(int a1, int *a2);  /* 0x002ee174 */
int __fastcall sub_602EE1A0(int a1, int *a2);  /* 0x002ee1a0 */
int __fastcall sub_602EE1CC(int a1, int *a2);  /* 0x002ee1cc */
int __fastcall sub_602EE1F8(int a1);  /* 0x002ee1f8 */
int __fastcall IceActor_setScale(int a1, float *a2);  /* 0x002ee238 */
int __fastcall sub_602EE480(int a1);  /* 0x002ee480 */
int __fastcall sub_602EE580(int a1);  /* 0x002ee580 */
int __fastcall sub_602EE7B8(int result, int a2, unsigned int a3);  /* 0x002ee7b8 */
int __fastcall sub_602EE7D8(int a1, int a2, unsigned int a3, int a4);  /* 0x002ee7d8 */
bool __fastcall sub_602EE904(int a1);  /* 0x002ee904 */
int __fastcall sub_602EE940(int a1);  /* 0x002ee940 */
int __fastcall sub_602EEA04(int a1, int a2);  /* 0x002eea04 */
int __fastcall sub_602EEF20(int a1, int a2, int a3);  /* 0x002eef20 */
int __fastcall sub_602EEFE4(int a1, int a2);  /* 0x002eefe4 */
bool __fastcall sub_602EF084(int a1);  /* 0x002ef084 */
int __fastcall sub_602EF200(int a1);  /* 0x002ef200 */
int __fastcall sub_602EF2C8(int a1);  /* 0x002ef2c8 */
int __fastcall sub_602EF368(int a1);  /* 0x002ef368 */
int __fastcall sub_602EF61C(int a1, float *a2);  /* 0x002ef61c */
int __fastcall sub_602EF894(int a1, _DWORD *a2);  /* 0x002ef894 */
int __fastcall sub_602EFC88(int a1, _BYTE *a2);  /* 0x002efc88 */
int __fastcall sub_602F023C(int a1, int a2, int a3);  /* 0x002f023c */
int __fastcall sub_602F0518(int a1);  /* 0x002f0518 */
int __fastcall sub_602F05E4(int a1, int a2, int a3);  /* 0x002f05e4 */
int __fastcall sub_602F06BC(int a1, int a2, int a3);  /* 0x002f06bc */
int __fastcall sub_602F07A4(int a1, int a2, int a3);  /* 0x002f07a4 */
int __fastcall sub_602F08CC(int a1, unsigned __int8 *a2);  /* 0x002f08cc */
int __fastcall sub_602F0A90(int a1, int a2, int a3);  /* 0x002f0a90 */
int __fastcall sub_602F0E18(int a1, int a2);  /* 0x002f0e18 */
bool __fastcall sub_602F0E3C(int a1, int a2);  /* 0x002f0e3c */
void __fastcall sub_602F0F40(_DWORD *a1);  /* 0x002f0f40 */
int __fastcall sub_602F0FFC(_DWORD *a1);  /* 0x002f0ffc */
int __fastcall sub_602F1A38(_DWORD *a1);  /* 0x002f1a38 */
int __fastcall sub_602F1AB0(int a1);  /* 0x002f1ab0 */
bool __fastcall IceBro_vf181(int a1);  /* 0x002f1c84 */
int __fastcall IceBro_vf180(int result);  /* 0x002f1c98 */
int __fastcall IceBro_vf189(int a1);  /* 0x002f1cc4 */
int __fastcall IceBro_vf80(int a1, int a2, int a3);  /* 0x002f1d08 */
int __fastcall IceBro_vf194(int result);  /* 0x002f1f6c */
int __fastcall IceBro_vf183(int a1);  /* 0x002f21c4 */
bool __fastcall IceBro_vf203(int a1);  /* 0x002f220c */
bool __fastcall IceBro_vf0(int a1, int a2);  /* 0x002f23b4 */
int __fastcall IceBro_vf3(_BYTE *a1);  /* 0x002f25a0 */
int __fastcall IceBro_vf196(int result);  /* 0x002f2664 */
int __fastcall sub_602F27AC(int result, int a2, int a3);  /* 0x002f27ac */
int __fastcall sub_602F296C(int result, int a2);  /* 0x002f296c */
int __fastcall sub_602F2A78(int a1, int a2);  /* 0x002f2a78 */
int __fastcall sub_602F2ABC(int a1, int a2, int a3, int a4);  /* 0x002f2abc */
int __fastcall sub_602F2AF0(int a1, float *a2, float *a3, int a4);  /* 0x002f2af0 */
int __fastcall sub_602F2BD8(int a1, int a2);  /* 0x002f2bd8 */
int __fastcall sub_602F2BE8(int a1, int a2);  /* 0x002f2be8 */
int __fastcall sub_602F2BF8(int a1, int a2, int a3, int a4, _DWORD *a5);  /* 0x002f2bf8 */
int __fastcall sub_602F2C4C(unsigned __int8 *a1);  /* 0x002f2c4c */
int __fastcall sub_602F2C84(int a1);  /* 0x002f2c84 */
int __fastcall sub_602F2F3C(int a1, char a2, float *a3);  /* 0x002f2f3c */
int __fastcall sub_602F2FD0(int a1, int *a2, int a3);  /* 0x002f2fd0 */
int __fastcall sub_602F31A0(int a1, int *a2, int a3);  /* 0x002f31a0 */
int __fastcall sub_602F322C(int a1, int *a2, unsigned int a3, _DWORD *a4);  /* 0x002f322c */
int __fastcall sub_602F3280(int a1, int *a2);  /* 0x002f3280 */
int __fastcall sub_602F32F8(_BYTE *a1, int *a2, unsigned int a3, _DWORD *a4);  /* 0x002f32f8 */
int __fastcall sub_602F335C(_BYTE *a1, int *a2, unsigned int a3);  /* 0x002f335c */
int __fastcall sub_602F3414(_BYTE *a1, float *a2, float *a3, unsigned int a4);  /* 0x002f3414 */
int __fastcall EnemyFreezeMgr_ctor(int a1, int a2);  /* 0x002f35a4 */
int __fastcall EnemyFreezeMgr_setFlags(int result, char *a2);  /* 0x002f36ac */
int __fastcall sub_602F3750(_BYTE *a1);  /* 0x002f3750 */
int __fastcall sub_602F37B0(int a1);  /* 0x002f37b0 */
int __fastcall sub_602F389C(int a1);  /* 0x002f389c */
int __fastcall sub_602F3978(unsigned __int8 *a1);  /* 0x002f3978 */
int __fastcall sub_602F3BA0(unsigned __int8 *a1);  /* 0x002f3ba0 */
int __fastcall sub_602F3D20(int result);  /* 0x002f3d20 */
int __fastcall EnemyFreezeMgr_freeze(int a1, int a2, unsigned int a3);  /* 0x002f3e4c */
int __fastcall sub_602F4044(int result);  /* 0x002f4044 */
int __fastcall sub_602F4160(int result);  /* 0x002f4160 */
int __fastcall sub_602F43B8(int a1);  /* 0x002f43b8 */
int __fastcall sub_602F4590(unsigned int *a1, int (__fastcall ***a2)(_DWORD, int));  /* 0x002f4590 */
int __fastcall sub_602F46EC(unsigned int *a1);  /* 0x002f46ec */
int __fastcall sub_602F4740(unsigned int *a1, float *a2);  /* 0x002f4740 */
int __fastcall sub_602F49FC(int *a1);  /* 0x002f49fc */
int __fastcall sub_602F4BC8(int a1);  /* 0x002f4bc8 */
int __fastcall SE_EMY_IGAKURIBO_CLOSE_ref(int a1);  /* 0x002f4e74 */
int __fastcall sub_602F4F5C(int *a1);  /* 0x002f4f5c */
int __fastcall sub_602F5208(int a1);  /* 0x002f5208 */
int __fastcall sub_602F5348(int *a1);  /* 0x002f5348 */
int __fastcall sub_602F56AC(int a1);  /* 0x002f56ac */
int __fastcall sub_602F5834(int result);  /* 0x002f5834 */
int __fastcall sub_602F5840(int result);  /* 0x002f5840 */
int __fastcall sub_602F5874(int a1);  /* 0x002f5874 */
int __fastcall sub_602F5A30(int result);  /* 0x002f5a30 */
int __fastcall sub_602F5AC8(_DWORD *a1);  /* 0x002f5ac8 */
int __fastcall sub_602F5B84(int *a1);  /* 0x002f5b84 */
int __fastcall sub_602F5C24(int a1);  /* 0x002f5c24 */
int __fastcall sub_602F5ED8(int a1);  /* 0x002f5ed8 */
int __fastcall sub_602F6080(int a1);  /* 0x002f6080 */
int __fastcall sub_602F6300(int a1);  /* 0x002f6300 */
int __fastcall sub_602F64CC(int a1);  /* 0x002f64cc */
int __fastcall sub_602F66D0(int a1);  /* 0x002f66d0 */
int __fastcall sub_602F672C(int a1, int a2, int a3, int a4);  /* 0x002f672c */
int __fastcall sub_602F6758(int a1);  /* 0x002f6758 */
int __fastcall sub_602F6790(int a1, int a2, int a3);  /* 0x002f6790 */
int __fastcall sub_602F6948(int a1, int a2, int a3);  /* 0x002f6948 */
int __fastcall sub_602F6A34(int a1, int a2, int a3);  /* 0x002f6a34 */
int __fastcall sub_602F6BB8(int a1);  /* 0x002f6bb8 */
int __fastcall sub_602F6BC4(_BYTE *a1, int a2, int a3);  /* 0x002f6bc4 */
int __fastcall sub_602F6CEC(int a1, int a2, int a3);  /* 0x002f6cec */
int __fastcall sub_602F6F40(int a1, int a2, int a3);  /* 0x002f6f40 */
int __fastcall sub_602F6F90(int a1, int a2, int a3);  /* 0x002f6f90 */
int __fastcall sub_602F6FE0(int a1, int a2, int a3);  /* 0x002f6fe0 */
int __fastcall sub_602F7070(int a1, int a2, int a3);  /* 0x002f7070 */
int __fastcall sub_602F7088(unsigned __int8 *a1, int a2, int a3);  /* 0x002f7088 */
int __fastcall sub_602F7208(int *a1);  /* 0x002f7208 */
int __fastcall sub_602F7340(float *a1);  /* 0x002f7340 */
void __fastcall sub_602F7394(int a1);  /* 0x002f7394 */
int __fastcall sub_602F73F4(int a1);  /* 0x002f73f4 */
int __fastcall sub_602F7440(_DWORD *a1);  /* 0x002f7440 */
int __fastcall sub_602F75E8(int result);  /* 0x002f75e8 */
int __fastcall sub_602F761C(int a1, int a2);  /* 0x002f761c */
bool __fastcall sub_602F76F8(int a1, int a2);  /* 0x002f76f8 */
void __fastcall sub_602F7870(_BYTE *a1);  /* 0x002f7870 */
int __fastcall sub_602F790C(_BYTE *a1);  /* 0x002f790c */
int __fastcall sub_602F79B4(int a1);  /* 0x002f79b4 */
int __fastcall sub_602F7D30(int a1, int a2);  /* 0x002f7d30 */
int __fastcall Actor_raitokurage_build(_DWORD *a1);  /* 0x002f7d40 */
int __fastcall sub_602F7D5C(_DWORD *a1);  /* 0x002f7d5c */
int __fastcall sub_602F7E18(int a1);  /* 0x002f7e18 */
int __fastcall sub_602F7F60(int result);  /* 0x002f7f60 */
int __fastcall sub_602F7F70(_DWORD *a1);  /* 0x002f7f70 */
int __fastcall sub_602F8008(int a1);  /* 0x002f8008 */
int __fastcall sub_602F83F0(int result);  /* 0x002f83f0 */
int __fastcall sub_602F8468(int a1);  /* 0x002f8468 */
int __fastcall sub_602F8DB0(int a1, _DWORD *a2);  /* 0x002f8db0 */
int __fastcall sub_602F9024(int a1);  /* 0x002f9024 */
int __fastcall sub_602F91A4(int a1);  /* 0x002f91a4 */
int __fastcall sub_602F94B8(int a1);  /* 0x002f94b8 */
int __fastcall sub_602F9A18(_BYTE *a1);  /* 0x002f9a18 */
int __fastcall sub_602F9A48(int a1);  /* 0x002f9a48 */
int __fastcall sub_602F9CF8(int a1);  /* 0x002f9cf8 */
int __fastcall sub_602FA0D4(int result, int a2);  /* 0x002fa0d4 */
float __fastcall sub_602FA1EC(_DWORD *a1, int a2);  /* 0x002fa1ec */
int __fastcall sub_602FA42C(int a1, int a2, int a3, int a4);  /* 0x002fa42c */
int __fastcall sub_602FA4A4(int a1);  /* 0x002fa4a4 */
int __fastcall eye_anim_ref(int a1);  /* 0x002fa518 */
int __fastcall sub_602FA5DC(_DWORD *a1, int a2);  /* 0x002fa5dc */
int __fastcall sub_602FA774(_BYTE *a1);  /* 0x002fa774 */
int __fastcall eye_anim_ref_2(_DWORD *a1);  /* 0x002fa80c */
int __fastcall sub_602FA954(int a1);  /* 0x002fa954 */
int __fastcall sub_602FAAF0(int a1);  /* 0x002faaf0 */
int __fastcall sub_602FABD8(float *a1, unsigned int a2);  /* 0x002fabd8 */
bool __fastcall sub_602FAEF4(int a1, int a2);  /* 0x002faef4 */
void __fastcall sub_602FB06C(_BYTE *a1);  /* 0x002fb06c */
int __fastcall sub_602FB0EC(_BYTE *a1);  /* 0x002fb0ec */
int __fastcall sub_602FB17C(int a1);  /* 0x002fb17c */
int __fastcall sub_602FB1E4(int result);  /* 0x002fb1e4 */
bool __fastcall sub_602FB1FC(int a1);  /* 0x002fb1fc */
int __fastcall sub_602FB2D8(int a1, int a2, int a3, int a4);  /* 0x002fb2d8 */
int __fastcall sub_602FB560(int a1, int a2, int a3);  /* 0x002fb560 */
int __fastcall sub_602FB628(int a1);  /* 0x002fb628 */
int __fastcall sub_602FB6C4(int a1, int *a2);  /* 0x002fb6c4 */
void __fastcall sub_602FB76C(_BYTE *a1);  /* 0x002fb76c */
int __fastcall sub_602FB82C(_BYTE *a1);  /* 0x002fb82c */
int __fastcall sub_602FB8F0(int a1);  /* 0x002fb8f0 */
void __fastcall sub_602FBA7C(Actor *a1);  /* 0x002fba7c */
int __fastcall sub_602FBDF8(float *a1);  /* 0x002fbdf8 */
int __fastcall sub_602FBE44(int a1);  /* 0x002fbe44 */
bool __fastcall sub_602FBE60(int a1);  /* 0x002fbe60 */
int __fastcall sub_602FC160(int a1, int a2);  /* 0x002fc160 */
int __fastcall sub_602FC1F8(int a1, int a2);  /* 0x002fc1f8 */
int __fastcall sub_602FC36C(int result);  /* 0x002fc36c */
int __fastcall sub_602FC37C(int a1, int a2, int a3, int a4);  /* 0x002fc37c */
int __fastcall sub_602FC5F8(int a1, int a2, int a3);  /* 0x002fc5f8 */
int __fastcall sub_602FC6C0(int a1);  /* 0x002fc6c0 */
int __fastcall sub_602FC75C(int a1, int *a2);  /* 0x002fc75c */
int __fastcall sub_602FC804(_BYTE *a1);  /* 0x002fc804 */
int __fastcall sub_602FCB6C(int a1, int a2);  /* 0x002fcb6c */
int __fastcall sub_602FCCF0(int *a1);  /* 0x002fccf0 */
int __fastcall sub_602FCDBC(int a1);  /* 0x002fcdbc */
bool __fastcall sub_602FCF68(int a1);  /* 0x002fcf68 */
int __fastcall sub_602FD010(_DWORD *a1);  /* 0x002fd010 */
int __fastcall sub_602FD054(float *a1);  /* 0x002fd054 */
int __fastcall sub_602FD10C(int *a1);  /* 0x002fd10c */
bool __fastcall sub_602FD158(int a1, int a2, int a3);  /* 0x002fd158 */
int __fastcall sub_602FD474(int a1);  /* 0x002fd474 */
int __fastcall sub_602FD614(_DWORD *a1);  /* 0x002fd614 */
int __fastcall sub_602FD7A8(int *a1);  /* 0x002fd7a8 */
bool __fastcall sub_602FD7F4(int a1, int a2);  /* 0x002fd7f4 */
int __fastcall sub_602FD9E0(_BYTE *a1);  /* 0x002fd9e0 */
int __fastcall sub_602FDD60(int a1, int a2, int a3);  /* 0x002fdd60 */
bool __fastcall sub_602FDDA4(int a1, int a2);  /* 0x002fdda4 */
int __fastcall sub_602FE1FC(int a1);  /* 0x002fe1fc */
int __fastcall sub_602FE2EC(int a1);  /* 0x002fe2ec */
int __fastcall sub_602FE35C(_DWORD *a1);  /* 0x002fe35c */
int __fastcall sub_602FE440(_DWORD *a1);  /* 0x002fe440 */
int __fastcall sub_602FE478(int a1);  /* 0x002fe478 */
int __fastcall sub_602FE524(int a1);  /* 0x002fe524 */
int __fastcall sub_602FE58C(int a1);  /* 0x002fe58c */
bool __fastcall sub_602FE6D8(int a1, int a2);  /* 0x002fe6d8 */
int __fastcall sub_602FE8C4(_BYTE *a1);  /* 0x002fe8c4 */
int __fastcall sub_602FE9E8(int a1);  /* 0x002fe9e8 */
int __fastcall sub_602FEC14(int a1, int a2);  /* 0x002fec14 */
int __fastcall sub_602FEC30(_DWORD *a1);  /* 0x002fec30 */
int __fastcall sub_602FEC74(int a1);  /* 0x002fec74 */
int __fastcall sub_602FEDDC(int a1);  /* 0x002feddc */
bool __fastcall sub_602FFA84(Actor *a1);  /* 0x002ffa84 */
int __fastcall sub_602FFAD8(int a1);  /* 0x002ffad8 */
int __fastcall fire_wait_up_ref(int a1);  /* 0x002ffcc8 */
int __fastcall sub_602FFE48(int a1);  /* 0x002ffe48 */
int __fastcall sub_602FFFC8(int a1, unsigned int a2);  /* 0x002fffc8 */

/* ---- actors_b.c ---- */
int __fastcall sub_60300000(int a1, int a2, int a3, int a4);  /* 0x00300000 */
int __fastcall sub_6030002C(int a1);  /* 0x0030002c */
unsigned __int32 __fastcall sub_60300044(int a1);  /* 0x00300044 */
int __fastcall sub_603002F0(int a1);  /* 0x003002f0 */
int __fastcall sub_60300338(int a1);  /* 0x00300338 */
int __fastcall sub_603005B0(int a1);  /* 0x003005b0 */
int __fastcall sub_603005F4(int a1, int a2);  /* 0x003005f4 */
int __fastcall sub_60300AA0(int a1);  /* 0x00300aa0 */
int __fastcall sub_60300AE4(int a1, _DWORD *a2);  /* 0x00300ae4 */
int __fastcall sub_60300D18(int a1);  /* 0x00300d18 */
unsigned int __fastcall sub_60300DA0(int a1, _DWORD *a2);  /* 0x00300da0 */
int __fastcall sub_60300F64(int a1, int a2, int a3);  /* 0x00300f64 */
int __fastcall sub_60300FC8(float *a1, int a2, int a3);  /* 0x00300fc8 */
int __fastcall sub_60300FFC(float *a1, int a2, int a3);  /* 0x00300ffc */
int __fastcall sub_60301138(int a1, int a2, int a3);  /* 0x00301138 */
int __fastcall sub_60301164(int a1, int a2, int a3);  /* 0x00301164 */
int __fastcall sub_60301168(int a1, int a2, int a3);  /* 0x00301168 */
int __fastcall sub_60301194(int a1);  /* 0x00301194 */
int __fastcall sub_603011A4(int a1, int a2, int a3);  /* 0x003011a4 */
int __fastcall sub_603011D0(int a1, int a2, int a3);  /* 0x003011d0 */
int __fastcall sub_60301208(int a1);  /* 0x00301208 */
int __fastcall sub_60301220(int a1);  /* 0x00301220 */
int __fastcall sub_603015A0(int *a1);  /* 0x003015a0 */
int __fastcall sub_60301688(int a1);  /* 0x00301688 */
int __fastcall sub_60301A48(int a1);  /* 0x00301a48 */
int __fastcall sub_60301AF4(int a1, int a2);  /* 0x00301af4 */
int __fastcall sub_60301B94(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5);  /* 0x00301b94 */
int __fastcall sub_60301BE4(int a1);  /* 0x00301be4 */
int __fastcall sub_60301CAC(int a1);  /* 0x00301cac */
void __fastcall sub_60301D94(int a1);  /* 0x00301d94 */
int __fastcall sub_60301E54(int a1);  /* 0x00301e54 */
int __fastcall sub_60301EC0(int a1);  /* 0x00301ec0 */
int __fastcall sub_60301F00(int a1);  /* 0x00301f00 */
int __fastcall sub_60301F18(_BYTE *a1);  /* 0x00301f18 */
int __fastcall sub_60301F44(int a1);  /* 0x00301f44 */
int __fastcall sub_60301FE0(int a1);  /* 0x00301fe0 */
int __fastcall sub_60301FF8(int a1);  /* 0x00301ff8 */
int __fastcall sub_60302038(int a1);  /* 0x00302038 */
int __fastcall sub_603020D0(int a1);  /* 0x003020d0 */
int __fastcall sub_6030214C(int a1, int *a2);  /* 0x0030214c */
int __fastcall sub_603021CC(int a1, int *a2);  /* 0x003021cc */
int __fastcall sub_6030224C(int a1, int *a2);  /* 0x0030224c */
int __fastcall sub_603022CC(int a1);  /* 0x003022cc */
int __fastcall sub_603023BC(_BYTE *a1);  /* 0x003023bc */
bool __fastcall sub_6030244C(int a1, int a2);  /* 0x0030244c */
int __fastcall sub_603025C4(_BYTE *a1);  /* 0x003025c4 */
int __fastcall sub_6030268C(int a1);  /* 0x0030268c */
int __fastcall sub_603027A0(int a1);  /* 0x003027a0 */
int __fastcall sub_6030286C(int a1);  /* 0x0030286c */
int __fastcall sub_60302B9C(int a1);  /* 0x00302b9c */
int __fastcall sub_60302C70(int a1);  /* 0x00302c70 */
int __fastcall sub_60302D5C(int a1);  /* 0x00302d5c */
int __fastcall sub_60302F60(_DWORD *a1);  /* 0x00302f60 */
int __fastcall sub_6030309C(int a1);  /* 0x0030309c */
int __fastcall sub_603034D8(int a1);  /* 0x003034d8 */
int __fastcall sub_6030357C(int a1, int a2, int a3, int a4);  /* 0x0030357c */
int __fastcall sub_603035A4(int a1);  /* 0x003035a4 */
int __fastcall sub_603035FC(int a1, int a2, int a3, int a4);  /* 0x003035fc */
int __fastcall sub_60303938(int a1, int a2, int a3);  /* 0x00303938 */
int __fastcall sub_60303940(int a1, int a2, int a3);  /* 0x00303940 */
int __fastcall sub_60303948(int *a1, int a2, int a3);  /* 0x00303948 */
int __fastcall sub_60303A44(_DWORD *a1, int a2, int a3);  /* 0x00303a44 */
int __fastcall sub_60303B40(int a1, int a2, int a3);  /* 0x00303b40 */
int __fastcall sub_60303BD8(float *a1, int a2, int a3);  /* 0x00303bd8 */
int __fastcall sub_60303CE8(int a1, int a2, int a3);  /* 0x00303ce8 */
int __fastcall sub_60303E48(int a1, int a2, int a3);  /* 0x00303e48 */
int __fastcall sub_60303F64(int a1);  /* 0x00303f64 */
int __fastcall sub_603040C0(int a1);  /* 0x003040c0 */
int __fastcall sub_6030413C(int a1);  /* 0x0030413c */
int __fastcall sub_60304350(int a1);  /* 0x00304350 */
int __fastcall sub_6030453C(int a1);  /* 0x0030453c */
int __fastcall sub_60304738(_DWORD *a1);  /* 0x00304738 */
int __fastcall sub_603048F4(_DWORD *a1);  /* 0x003048f4 */
int __fastcall sub_60304AB8(_DWORD *a1);  /* 0x00304ab8 */
int __fastcall sub_60304C74(int a1);  /* 0x00304c74 */
int __fastcall sub_603053A4(int a1);  /* 0x003053a4 */
int __fastcall sub_603058D4(int a1, int a2);  /* 0x003058d4 */
int __fastcall sub_60305A6C(_DWORD *a1);  /* 0x00305a6c */
void __fastcall sub_60305B98(int a1);  /* 0x00305b98 */
int __fastcall sub_60305C10(_DWORD *a1);  /* 0x00305c10 */
void __fastcall sub_60305CFC(_DWORD *a1);  /* 0x00305cfc */
int __fastcall sub_60305DFC(unsigned int *a1);  /* 0x00305dfc */
int __fastcall sub_60305EE8(int a1);  /* 0x00305ee8 */
void __fastcall sub_60305F28(int a1);  /* 0x00305f28 */
bool __fastcall sub_60305F7C(int a1, int a2);  /* 0x00305f7c */
void __fastcall sub_60306168(_BYTE *a1);  /* 0x00306168 */
int __fastcall sub_60306220(_BYTE *a1);  /* 0x00306220 */
int __fastcall sub_60306338(int a1, int a2);  /* 0x00306338 */
int __fastcall sub_603063D8(int a1);  /* 0x003063d8 */
int __fastcall sub_60306400(int a1, int a2);  /* 0x00306400 */
int __fastcall sub_60306810(int a1);  /* 0x00306810 */
int __fastcall SE_EMY_JUGEM_APP_ref_2(int a1);  /* 0x00306d50 */
int __fastcall sub_60307018(int a1);  /* 0x00307018 */
int __fastcall sub_603071CC(int a1);  /* 0x003071cc */
int __fastcall sub_60307678(int result);  /* 0x00307678 */
int __fastcall sub_60307690(int a1);  /* 0x00307690 */
int __fastcall sub_603077AC(int result);  /* 0x003077ac */
int __fastcall sub_60307A50(int a1);  /* 0x00307a50 */
int __fastcall sub_6030859C(int a1);  /* 0x0030859c */
int __fastcall sub_6030871C(int a1);  /* 0x0030871c */
int __fastcall sub_60308B44(_DWORD *a1);  /* 0x00308b44 */
int __fastcall sub_60308F44(int a1);  /* 0x00308f44 */
int __fastcall sub_603090A0(int a1, int a2, int a3, int a4);  /* 0x003090a0 */
int __fastcall sub_603090C8(int a1, int a2, int a3);  /* 0x003090c8 */
int __fastcall sub_60309174(int a1, int a2, int a3);  /* 0x00309174 */
int __fastcall sub_603092E8(int a1, int a2, int a3);  /* 0x003092e8 */
int __fastcall sub_60309394(int a1, int a2, int a3);  /* 0x00309394 */
int __fastcall sub_60309444(int a1, int a2, int a3);  /* 0x00309444 */
int __fastcall sub_603094F4(int a1, _DWORD *a2);  /* 0x003094f4 */
int __fastcall sub_603095A4(int a1);  /* 0x003095a4 */
int __fastcall sub_60309604(_DWORD *a1);  /* 0x00309604 */
bool __fastcall sub_603098E8(int a1, int a2);  /* 0x003098e8 */
int __fastcall sub_60309918(float *a1, _DWORD *a2, _DWORD *a3);  /* 0x00309918 */
int __fastcall sub_603099A0(int a1, int a2);  /* 0x003099a0 */
bool __fastcall sub_60309AF4(int a1, int a2);  /* 0x00309af4 */
int __fastcall sub_60309C6C(_BYTE *a1);  /* 0x00309c6c */
int __fastcall sub_6030A124(int result);  /* 0x0030a124 */
int __fastcall sub_6030A8B0(int a1);  /* 0x0030a8b0 */
int __fastcall pakkun_tane_ref(unsigned int *a1);  /* 0x0030a988 */
int __fastcall sub_6030AC18(int a1);  /* 0x0030ac18 */
int __fastcall sub_6030ADC8(int a1, int a2, int a3, int a4);  /* 0x0030adc8 */
int __fastcall sub_6030ADF0(unsigned int *a1);  /* 0x0030adf0 */
int __fastcall sub_6030AED0(int a1);  /* 0x0030aed0 */
int __fastcall sub_6030AEE8(int a1, int a2, int a3);  /* 0x0030aee8 */
void __fastcall sub_6030AF0C(int a1, int a2);  /* 0x0030af0c */
void __fastcall sub_6030AF38(int a1, int a2);  /* 0x0030af38 */
void __fastcall sub_6030AF64(int a1, int a2);  /* 0x0030af64 */
int __fastcall sub_6030AF90(int a1);  /* 0x0030af90 */
int __fastcall sub_6030AFA4(_DWORD *a1);  /* 0x0030afa4 */
int __fastcall sub_6030B0B8(int a1);  /* 0x0030b0b8 */
int __fastcall sub_6030B11C(int a1);  /* 0x0030b11c */
int __fastcall sub_6030B328(int a1, int a2);  /* 0x0030b328 */
bool __fastcall sub_6030B3D0(int a1, int a2);  /* 0x0030b3d0 */
void __fastcall sub_6030B548(_BYTE *a1);  /* 0x0030b548 */
int __fastcall sub_6030B5B8(_BYTE *a1);  /* 0x0030b5b8 */
int __fastcall sub_6030B62C(int a1);  /* 0x0030b62c */
int __fastcall sub_6030B94C(int a1);  /* 0x0030b94c */
signed int __fastcall sub_6030BECC(int a1);  /* 0x0030becc */
unsigned int __fastcall sub_6030C208(int a1, int a2);  /* 0x0030c208 */
int __fastcall sub_6030C2DC(int result, unsigned int a2);  /* 0x0030c2dc */
int __fastcall sub_6030C3AC(int result, unsigned int a2);  /* 0x0030c3ac */
int __fastcall sub_6030C40C(int a1);  /* 0x0030c40c */
int __fastcall sub_6030C5EC(int a1);  /* 0x0030c5ec */
int __fastcall sub_6030D174(int a1, int a2, int a3, int a4);  /* 0x0030d174 */
int __fastcall sub_6030D1E4(int a1);  /* 0x0030d1e4 */
int __fastcall sub_6030D1EC(int a1, unsigned int a2);  /* 0x0030d1ec */
int __fastcall sub_6030D498(int a1, unsigned int a2);  /* 0x0030d498 */
int __fastcall sub_6030D7A4(int a1, int a2);  /* 0x0030d7a4 */
int __fastcall sub_6030D9D0(int result, unsigned int a2);  /* 0x0030d9d0 */
int __fastcall sub_6030DA0C(int result, unsigned int a2);  /* 0x0030da0c */
int __fastcall sub_6030DC78(int a1, unsigned int a2);  /* 0x0030dc78 */
bool __fastcall sub_6030DE30(int a1, int a2);  /* 0x0030de30 */
void __fastcall sub_6030DFA8(_BYTE *a1);  /* 0x0030dfa8 */
int __fastcall sub_6030E018(_BYTE *a1);  /* 0x0030e018 */
int __fastcall sub_6030E170(int a1, int a2);  /* 0x0030e170 */
int __fastcall sub_6030F9FC(int a1);  /* 0x0030f9fc */
int __fastcall sub_603101A4(int result, int a2, int a3);  /* 0x003101a4 */
int __fastcall sub_603105CC(int a1);  /* 0x003105cc */
int __fastcall sub_603105F4(int a1, int a2);  /* 0x003105f4 */
int __fastcall sub_60311598(int result, int a2);  /* 0x00311598 */
int __fastcall sub_603119A0(int a1);  /* 0x003119a0 */
int __fastcall DryBones_beginState_Walk(int a1);  /* 0x00312034 */
int __fastcall DryBones_executeState_Walk(_BYTE *a1);  /* 0x0031215c */
int __fastcall DryBones_beginState_Turn(int a1);  /* 0x003124f8 */
int __fastcall DryBones_executeState_Turn(int a1);  /* 0x00312618 */
int __fastcall big_stop_ref(int *a1);  /* 0x00312768 */
int __fastcall sub_60312850(int a1);  /* 0x00312850 */
int __fastcall sub_603128EC(int a1);  /* 0x003128ec */
int __fastcall sub_60312DE4(int result);  /* 0x00312de4 */
int __fastcall sub_60312E18(int a1);  /* 0x00312e18 */
int __fastcall sub_60312F70(int a1);  /* 0x00312f70 */
int __fastcall sub_603136DC(int a1);  /* 0x003136dc */
int __fastcall sub_603139EC(int a1);  /* 0x003139ec */
int __fastcall sub_60314424(int a1);  /* 0x00314424 */
int __fastcall sub_6031467C(int a1, _DWORD *a2, int a3);  /* 0x0031467c */
int __fastcall sub_60314EA0(int a1);  /* 0x00314ea0 */
int __fastcall sub_60315140(int a1);  /* 0x00315140 */
int __fastcall sub_603155DC(int a1);  /* 0x003155dc */
int __fastcall sub_60315974(int a1, int a2, int a3);  /* 0x00315974 */
int __fastcall sub_60316180(int a1, int a2, int a3, int a4);  /* 0x00316180 */
int __fastcall DryBones_checkCollapse(int a1);  /* 0x00316e28 */
int __fastcall sub_60316F50(int a1);  /* 0x00316f50 */
int __fastcall sub_603171E8(int a1);  /* 0x003171e8 */
int __fastcall sub_6031776C(int a1);  /* 0x0031776c */
int __fastcall sub_60317E28(int a1, int a2);  /* 0x00317e28 */
int __fastcall sub_603180E0(int a1);  /* 0x003180e0 */
int __fastcall head_anim_ref(int a1);  /* 0x00318654 */
int __fastcall sub_603188A0(_DWORD *a1);  /* 0x003188a0 */
int __fastcall sub_603189E4(int a1);  /* 0x003189e4 */
int __fastcall SE_EMY_BIG_KALON_REVIVAL_HEAD_ref(int a1);  /* 0x00318a38 */
int __fastcall sub_60318B6C(int a1);  /* 0x00318b6c */
int __fastcall SE_EMY_BIG_KALON_REVIVAL_HEAD_ref_2(int a1);  /* 0x00318d24 */
int __fastcall sub_603190E4(int result);  /* 0x003190e4 */
int __fastcall sub_603190FC(int a1);  /* 0x003190fc */
int __fastcall sub_60319300(int a1);  /* 0x00319300 */
int __fastcall sub_60319334(int a1);  /* 0x00319334 */
int __fastcall sub_6031962C(int a1);  /* 0x0031962c */
int __fastcall sub_603197BC(int a1);  /* 0x003197bc */
int __fastcall sub_60319A5C(int a1);  /* 0x00319a5c */
int __fastcall sub_60319CE8(int a1, int a2, int a3, int a4);  /* 0x00319ce8 */
int __fastcall SE_EMY_DOWN_SYNC_1_ref(int a1);  /* 0x00319d24 */
int __fastcall sub_60319E30(int a1);  /* 0x00319e30 */
int __fastcall sub_6031A028(int a1);  /* 0x0031a028 */
int __fastcall sub_6031A1DC(int a1, float *a2);  /* 0x0031a1dc */
int __fastcall sub_6031A54C(int a1);  /* 0x0031a54c */
int __fastcall sub_6031A5A8(int a1, int a2);  /* 0x0031a5a8 */
bool __fastcall sub_6031A5E4(int a1, int a2);  /* 0x0031a5e4 */
void __fastcall sub_6031A75C(_BYTE *a1);  /* 0x0031a75c */
int __fastcall sub_6031A7CC(_BYTE *a1);  /* 0x0031a7cc */
int __fastcall sub_6031A854(int a1);  /* 0x0031a854 */
int __fastcall sub_6031AB9C(unsigned int *a1);  /* 0x0031ab9c */
unsigned int __fastcall sub_6031AC74(int a1, int a2);  /* 0x0031ac74 */
int __fastcall sub_6031B048(unsigned int *a1);  /* 0x0031b048 */
int __fastcall sub_6031B1B4(int a1, int a2);  /* 0x0031b1b4 */
int __fastcall sub_6031B2DC(int a1, int a2);  /* 0x0031b2dc */
int __fastcall sub_6031B374(int a1);  /* 0x0031b374 */
int __fastcall sub_6031B4DC(int a1);  /* 0x0031b4dc */
int __fastcall sub_6031B7A0(int a1);  /* 0x0031b7a0 */
int __fastcall sub_6031B8F4(int a1);  /* 0x0031b8f4 */
int __fastcall sub_6031BA60(_BYTE *a1);  /* 0x0031ba60 */
int __fastcall sub_6031BA80(_DWORD *a1);  /* 0x0031ba80 */
int __fastcall sub_6031BCBC(int a1);  /* 0x0031bcbc */
int __fastcall sub_6031BE44(int a1);  /* 0x0031be44 */
int __fastcall sub_6031BEBC(int a1);  /* 0x0031bebc */
int __fastcall sub_6031BED0(int a1);  /* 0x0031bed0 */
int __fastcall SE_EMY_KERONPA_ALARM_ref(int32x4_t *a1);  /* 0x0031c0d0 */
int __fastcall sub_6031C22C(int a1);  /* 0x0031c22c */
int __fastcall sub_6031C374(int a1);  /* 0x0031c374 */
bool __fastcall sub_6031C45C(int a1);  /* 0x0031c45c */
int __fastcall sub_6031C9A8(_DWORD *a1);  /* 0x0031c9a8 */
unsigned int __fastcall attack_md_ref(int a1);  /* 0x0031ca94 */
int __fastcall sub_6031CC34(int a1);  /* 0x0031cc34 */
int __fastcall sub_6031CD38(int result);  /* 0x0031cd38 */
int __fastcall sub_6031CE28(int a1);  /* 0x0031ce28 */
int __fastcall attack_ed_ref(int a1);  /* 0x0031cf2c */
int __fastcall SE_EMY_KERONPA_FIRE_ref(int a1);  /* 0x0031cfe0 */
int __fastcall sub_6031D3B4(int result);  /* 0x0031d3b4 */
int __fastcall sub_6031D3D0(int32x4_t *a1);  /* 0x0031d3d0 */
int __fastcall sub_6031D5E4(int a1);  /* 0x0031d5e4 */
void __fastcall sub_6031D84C(char *a1);  /* 0x0031d84c */
int __fastcall sub_6031D920(int a1, int a2, int a3);  /* 0x0031d920 */
int __fastcall sub_6031DA28(int a1, int a2, int a3);  /* 0x0031da28 */
int __fastcall sub_6031DB1C(int a1, int a2, int a3);  /* 0x0031db1c */
int __fastcall sub_6031DBA4(int a1);  /* 0x0031dba4 */
int __fastcall sub_6031DCB8(int a1);  /* 0x0031dcb8 */
void __fastcall sub_6031DD04(int a1);  /* 0x0031dd04 */
int __fastcall sub_6031DD64(int a1);  /* 0x0031dd64 */
int __fastcall sub_6031DE34(int a1);  /* 0x0031de34 */
int __fastcall sub_6031DEB0(int a1);  /* 0x0031deb0 */
bool __fastcall sub_6031DF34(int a1, int a2);  /* 0x0031df34 */
void __fastcall sub_6031E0AC(_BYTE *a1);  /* 0x0031e0ac */
int __fastcall sub_6031E164(_BYTE *a1);  /* 0x0031e164 */
int __fastcall sub_6031E220(int a1);  /* 0x0031e220 */
int __fastcall sub_6031E234(int a1);  /* 0x0031e234 */
int __fastcall sub_6031E56C(_BYTE *a1);  /* 0x0031e56c */
int __fastcall sub_6031E624(int result);  /* 0x0031e624 */
int __fastcall sub_6031E63C(_DWORD *a1);  /* 0x0031e63c */
bool __fastcall sub_6031E80C(int a1);  /* 0x0031e80c */
int __fastcall sub_6031E940(int a1);  /* 0x0031e940 */
int __fastcall sub_6031EA54(int a1);  /* 0x0031ea54 */
int __fastcall sub_6031EBF8(int a1);  /* 0x0031ebf8 */
int __fastcall sub_6031EC0C(int a1, int a2, int a3);  /* 0x0031ec0c */
int __fastcall sub_6031ED3C(int a1, int a2, int a3);  /* 0x0031ed3c */
int __fastcall sub_6031EDA4(_DWORD *a1);  /* 0x0031eda4 */
int __fastcall sub_6031EE7C(int a1);  /* 0x0031ee7c */
int __fastcall sub_6031EF30(int *a1);  /* 0x0031ef30 */
int __fastcall attack_md_ref_2(_DWORD *a1);  /* 0x0031ef94 */
int __fastcall sub_6031F058(int *a1);  /* 0x0031f058 */
int __fastcall attack_ed_ref_2(int a1);  /* 0x0031f300 */
int __fastcall sub_6031F490(int a1);  /* 0x0031f490 */
int __fastcall sub_6031F5A8(int a1);  /* 0x0031f5a8 */
int __fastcall sub_6031F764(int result);  /* 0x0031f764 */
int __fastcall sub_6031F774(int32x4_t *a1);  /* 0x0031f774 */
bool __fastcall sub_6031F794(int a1, int a2);  /* 0x0031f794 */
int __fastcall sub_6031F980(_BYTE *a1);  /* 0x0031f980 */
int __fastcall sub_6031FA3C(int a1, int a2);  /* 0x0031fa3c */
int __fastcall sub_6031FAD8(int a1);  /* 0x0031fad8 */
int __fastcall sub_6031FDB8(int a1);  /* 0x0031fdb8 */
int __fastcall SE_EMY_KILLER_CROSS_ref(int32x4_t *a1);  /* 0x0031fe88 */
int __fastcall sub_60320208(int a1);  /* 0x00320208 */
int __fastcall sub_60320290(int a1);  /* 0x00320290 */
int __fastcall sub_60320538(int a1);  /* 0x00320538 */
int __fastcall sub_6032053C(int a1);  /* 0x0032053c */
int __fastcall sub_60320540(_DWORD *a1);  /* 0x00320540 */
int __fastcall sub_603205E0(int a1);  /* 0x003205e0 */
bool __fastcall sub_603206B0(int a1, int a2);  /* 0x003206b0 */
void __fastcall sub_6032089C(_BYTE *a1);  /* 0x0032089c */
int __fastcall sub_60320988(_BYTE *a1);  /* 0x00320988 */
int __fastcall BanzaiBill_vf18(int a1);  /* 0x00320a78 */
void __fastcall BanzaiBill_vf19(int a1);  /* 0x00320b4c */
int __fastcall BanzaiBill_vf56(int a1);  /* 0x00320d1c */
int __fastcall BanzaiBill_vf79(int a1, int a2, int a3);  /* 0x00320d28 */
int __fastcall sub_60320D8C(int a1);  /* 0x00320d8c */
int __fastcall sub_60320EC4(int a1, int a2);  /* 0x00320ec4 */
int __fastcall BanzaiBill_vf42(int a1, float *a2);  /* 0x00320f00 */
void __fastcall sub_60320F40(int a1, int a2);  /* 0x00320f40 */
int __fastcall sub_60321010(int a1);  /* 0x00321010 */
int __fastcall sub_60321050(int a1);  /* 0x00321050 */
int __fastcall BanzaiBill_initColliders(int a1);  /* 0x003212e0 */
void __fastcall sub_6032166C(int a1);  /* 0x0032166c */
int __fastcall sub_60321720(int a1);  /* 0x00321720 */
void __fastcall sub_6032185C(int a1);  /* 0x0032185c */
int __fastcall sub_6032191C(int a1);  /* 0x0032191c */
int __fastcall sub_60321B48(int a1);  /* 0x00321b48 */
int __fastcall sub_60321CD4(int result);  /* 0x00321cd4 */
int __fastcall sub_60321D0C(int result, int a2);  /* 0x00321d0c */
int __fastcall sub_60321DAC(int result);  /* 0x00321dac */
bool __fastcall sub_60321E38(int a1);  /* 0x00321e38 */
int __fastcall sub_60321F58(int a1);  /* 0x00321f58 */
int __fastcall sub_60321FA0(int a1);  /* 0x00321fa0 */
int __fastcall sub_60321FD0(int32x4_t *a1);  /* 0x00321fd0 */
int __fastcall sub_60322150(int32x4_t *a1);  /* 0x00322150 */
int __fastcall BanzaiBill_vf111(int a1);  /* 0x00322180 */
int __fastcall BanzaiBill_vf114(int a1);  /* 0x00322240 */
int __fastcall BanzaiBill_vf138(int result);  /* 0x003222e4 */
int __fastcall sub_6032232C(int a1, int a2, int a3);  /* 0x0032232c */
int __fastcall BanzaiBill_vf67(int a1, int a2, int a3);  /* 0x00322534 */
bool __fastcall BanzaiBill_vf64(int a1, int a2, int a3);  /* 0x00322d28 */
int __fastcall BanzaiBill_vf73(int *a1, int a2, int a3);  /* 0x00322d98 */
int __fastcall BanzaiBill_vf74(int *a1, int a2, int a3);  /* 0x00322dcc */
int __fastcall BanzaiBill_vf71(int *a1, int a2, int a3);  /* 0x00322e00 */
int __fastcall BanzaiBill_vf15(int a1);  /* 0x003231cc */
int __fastcall BanzaiBill_vf54(_DWORD *a1);  /* 0x00323200 */
int __fastcall BanzaiBill_vf53(int a1);  /* 0x00323254 */
int __fastcall BanzaiBill_vf26(int a1);  /* 0x00323280 */
int __fastcall BanzaiBill_vf27(int a1, int *a2);  /* 0x003232e8 */
int __fastcall BanzaiBill_vf28(int a1, int *a2);  /* 0x0032337c */
int __fastcall BanzaiBill_vf30(int a1, int *a2);  /* 0x00323410 */
bool __fastcall BanzaiBill_vf0(int a1, int a2);  /* 0x003234a4 */
int __fastcall sub_6032361C(_BYTE *a1);  /* 0x0032361c */
int __fastcall sub_6032371C(int a1);  /* 0x0032371c */
int __fastcall sub_60323EC4(int a1);  /* 0x00323ec4 */
int __fastcall sub_60323F24(int result);  /* 0x00323f24 */
int __fastcall sub_60323FA0(int a1);  /* 0x00323fa0 */
unsigned int __fastcall sub_60324E48(int a1, int a2);  /* 0x00324e48 */
unsigned int __fastcall sub_60324F2C(int a1, int a2);  /* 0x00324f2c */
int __fastcall sub_603251C8(int a1);  /* 0x003251c8 */
int __fastcall sub_60325724(int a1);  /* 0x00325724 */
int __fastcall BillBlaster_onDraw(int a1);  /* 0x00326148 */
int __fastcall BillBlaster_onDelete(int a1);  /* 0x00326298 */
int __fastcall sub_603262C0(int *a1);  /* 0x003262c0 */
int __fastcall sub_60326550(_DWORD *a1);  /* 0x00326550 */
int __fastcall killer_mag_houdai_ref(int a1);  /* 0x00326754 */
int __fastcall sub_60326850(_DWORD *a1);  /* 0x00326850 */
int __fastcall sub_60326A08(int a1);  /* 0x00326a08 */
int __fastcall sub_60326F6C(int a1);  /* 0x00326f6c */
bool __fastcall BillBlaster_checkRTTI(int a1, int a2);  /* 0x00327264 */
void __fastcall BillBlaster_dtor(int a1);  /* 0x00327368 */
int __fastcall BillBlaster_dtorFree(int a1);  /* 0x003273b8 */
int __fastcall sub_60327410(int result);  /* 0x00327410 */
int __fastcall SE_EMY_KG_KILLER_SHOT_ref(int a1);  /* 0x0032743c */
int __fastcall sub_603274F4(int a1);  /* 0x003274f4 */
bool __fastcall SE_EMY_KG_KILLER_FLY_ref(int32x4_t *a1);  /* 0x00327674 */
int __fastcall sub_60327960(int a1, int a2);  /* 0x00327960 */
int __fastcall sub_6032797C(int a1, int a2);  /* 0x0032797c */
int __fastcall sub_603279F0(int a1);  /* 0x003279f0 */
int __fastcall sub_60327B64(int a1);  /* 0x00327b64 */
int __fastcall sub_60327C20(int a1);  /* 0x00327c20 */
int __fastcall sub_60328098(int a1);  /* 0x00328098 */
int __fastcall sub_60328190(int a1);  /* 0x00328190 */
int __fastcall sub_60328C1C(int a1);  /* 0x00328c1c */
int __fastcall sub_60328FF4(int a1);  /* 0x00328ff4 */
int __fastcall sub_603293D4(_BYTE *a1);  /* 0x003293d4 */
int __fastcall sub_60329400(_DWORD *a1);  /* 0x00329400 */
unsigned int __fastcall sub_6032963C(int a1);  /* 0x0032963c */
int __fastcall sub_60329850(int a1, int a2, int a3, int a4);  /* 0x00329850 */
int __fastcall sub_60329890(int a1);  /* 0x00329890 */
int __fastcall sub_603298D8(int a1, int a2, int a3);  /* 0x003298d8 */
int __fastcall sub_603299B4(_DWORD *a1);  /* 0x003299b4 */
int __fastcall sub_60329AD8(int result);  /* 0x00329ad8 */
int __fastcall sub_60329B94(int a1);  /* 0x00329b94 */
int __fastcall sub_60329B9C(int a1);  /* 0x00329b9c */
bool __fastcall sub_60329BB0(int a1, int a2);  /* 0x00329bb0 */
void __fastcall sub_60329D28(_BYTE *a1);  /* 0x00329d28 */
int __fastcall sub_60329DF8(_BYTE *a1);  /* 0x00329df8 */
int __fastcall sub_60329ECC(int a1);  /* 0x00329ecc */
void __fastcall sub_60329FA0(int a1);  /* 0x00329fa0 */
int __fastcall sub_6032A0E4(int a1, int a2, int a3);  /* 0x0032a0e4 */
int __fastcall sub_6032A148(int a1, int a2, int a3);  /* 0x0032a148 */
int __fastcall sub_6032A15C(int a1);  /* 0x0032a15c */
int __fastcall sub_6032A3B8(_DWORD *a1);  /* 0x0032a3b8 */
int __fastcall sub_6032A4E8(int result);  /* 0x0032a4e8 */
int __fastcall sub_6032A5D0(_BYTE *a1);  /* 0x0032a5d0 */
int __fastcall sub_6032A770(int a1);  /* 0x0032a770 */
int __fastcall SE_EMY_MG_KILLER_FLY_ref(int32x4_t *a1);  /* 0x0032a7f0 */
int __fastcall BanzaiBill_vf161(int a1);  /* 0x0032a938 */
int __fastcall BanzaiBill_onCreate(int a1);  /* 0x0032a9dc */
int __fastcall BanzaiBill_vf8(int a1);  /* 0x0032ac6c */
int __fastcall BanzaiBill_vf12(int a1);  /* 0x0032ac70 */
int __fastcall BanzaiBill_vf157(unsigned int *a1);  /* 0x0032ac74 */
int __fastcall killer_mag_ref(int a1);  /* 0x0032ad28 */
int __fastcall BanzaiBill_vf3(_BYTE *a1);  /* 0x0032adf8 */
int __fastcall BanzaiBill_vf159(int a1);  /* 0x0032aee8 */
int __fastcall sub_6032B144(int a1);  /* 0x0032b144 */
int __fastcall SE_BOSS_ROY_SR_KILLER_COUNTDOWN_ref(int32x4_t *a1);  /* 0x0032b1bc */
int __fastcall sub_6032B68C(int a1);  /* 0x0032b68c */
int __fastcall sub_6032B998(int a1);  /* 0x0032b998 */
int __fastcall sub_6032B9E8(int a1);  /* 0x0032b9e8 */
int __fastcall sub_6032BAB8(_DWORD *a1);  /* 0x0032bab8 */
int __fastcall sub_6032BB60(int a1);  /* 0x0032bb60 */
int __fastcall sub_6032BB6C(int a1);  /* 0x0032bb6c */
int __fastcall sub_6032BEFC(int a1);  /* 0x0032befc */
int __fastcall sub_6032BFF8(int a1);  /* 0x0032bff8 */
int __fastcall sub_6032C050(_DWORD *a1);  /* 0x0032c050 */
unsigned int __fastcall sub_6032C0DC(int a1);  /* 0x0032c0dc */
unsigned int __fastcall sub_6032C26C(int a1, int a2);  /* 0x0032c26c */
int __fastcall sub_6032C46C(int a1);  /* 0x0032c46c */
int __fastcall sub_6032C7D8(int a1);  /* 0x0032c7d8 */
int __fastcall sub_6032CA8C(int a1);  /* 0x0032ca8c */
bool __fastcall sub_6032CAB4(int a1, int a2);  /* 0x0032cab4 */
void __fastcall sub_6032CCA0(int a1);  /* 0x0032cca0 */
int __fastcall sub_6032CCF0(int a1);  /* 0x0032ccf0 */
int __fastcall sub_6032CE1C(int a1);  /* 0x0032ce1c */
int __fastcall sub_6032CEC0(int a1);  /* 0x0032cec0 */
int __fastcall sub_6032D0D0(int a1);  /* 0x0032d0d0 */
int __fastcall SE_EMY_MG_KILLER_FLY_ref_2(int32x4_t *a1);  /* 0x0032d198 */
int __fastcall sub_6032D740(int a1);  /* 0x0032d740 */
int __fastcall sub_6032D85C(int a1);  /* 0x0032d85c */
int __fastcall sub_6032D860(int a1);  /* 0x0032d860 */
int __fastcall sub_6032D864(int a1);  /* 0x0032d864 */
int __fastcall sub_6032D878(_DWORD *a1);  /* 0x0032d878 */
int __fastcall killer_mag_ref_2(_DWORD *a1);  /* 0x0032d918 */
int __fastcall sub_6032DA78(_BYTE *a1);  /* 0x0032da78 */
int __fastcall sub_6032DB68(int a1);  /* 0x0032db68 */
int __fastcall sub_6032DDBC(int a1);  /* 0x0032ddbc */
int __fastcall sub_6032DE78(int a1);  /* 0x0032de78 */
int __fastcall SE_EMY_HUHU_BREATH_IN_ref(int *a1);  /* 0x0032df3c */
int __fastcall sub_6032E0E0(int a1);  /* 0x0032e0e0 */
int __fastcall sub_6032E390(int *a1);  /* 0x0032e390 */
int __fastcall SE_EMY_HUHU_BREATH_OUT_ref(int a1);  /* 0x0032e4c0 */
int __fastcall sub_6032E7AC(int *a1);  /* 0x0032e7ac */
int __fastcall sub_6032E988(int a1);  /* 0x0032e988 */
int __fastcall sub_6032EA68(int a1);  /* 0x0032ea68 */
int __fastcall sub_6032ECAC(int a1);  /* 0x0032ecac */
int __fastcall sub_6032ED40(int a1);  /* 0x0032ed40 */
int __fastcall sub_6032EED0(int a1);  /* 0x0032eed0 */
int __fastcall sub_6032F1DC(int a1);  /* 0x0032f1dc */
int __fastcall sub_6032F460(int a1);  /* 0x0032f460 */
int __fastcall sub_6032F690(int a1);  /* 0x0032f690 */
int __fastcall sub_6032F73C(int a1);  /* 0x0032f73c */
int __fastcall sub_6032FA20(int a1);  /* 0x0032fa20 */
int __fastcall sub_6032FB2C(int a1);  /* 0x0032fb2c */
int __fastcall sub_6032FDB8(int a1);  /* 0x0032fdb8 */
int __fastcall sub_6032FE4C(int a1, int a2, int a3, int a4);  /* 0x0032fe4c */
int __fastcall sub_6032FE84(int a1);  /* 0x0032fe84 */
int __fastcall sub_6032FE88(int a1, int a2, int a3);  /* 0x0032fe88 */
int __fastcall sub_6032FE98(_DWORD *a1);  /* 0x0032fe98 */
int __fastcall sub_6032FEF8(int a1);  /* 0x0032fef8 */
int __fastcall sub_6032FFD0(int *a1);  /* 0x0032ffd0 */
int __fastcall sub_6033033C(int a1, int a2, int a3);  /* 0x0033033c */
int __fastcall sub_6033048C(int a1, int a2);  /* 0x0033048c */
int __fastcall sub_603305B4(float *a1, int a2, int a3);  /* 0x003305b4 */
int __fastcall sub_60330608(float *a1, int a2, int a3);  /* 0x00330608 */
int __fastcall sub_6033065C(int a1, int a2, int a3);  /* 0x0033065c */
int __fastcall sub_603306A0(int a1);  /* 0x003306a0 */
int __fastcall sub_603306B0(int a1);  /* 0x003306b0 */
int __fastcall sub_60330774(int a1);  /* 0x00330774 */
int __fastcall sub_60330820(int a1);  /* 0x00330820 */
int __fastcall sub_60330874(int a1);  /* 0x00330874 */
int __fastcall sub_60330904(int a1);  /* 0x00330904 */
int __fastcall sub_6033094C(int a1, int a2);  /* 0x0033094c */
int __fastcall sub_603309EC(int a1);  /* 0x003309ec */
int __fastcall sub_60330B9C(int a1);  /* 0x00330b9c */
void __fastcall sub_60330C14(int a1);  /* 0x00330c14 */
bool __fastcall sub_60330C78(int a1, int a2);  /* 0x00330c78 */
void __fastcall sub_60330DF0(_BYTE *a1);  /* 0x00330df0 */
int __fastcall sub_60330EC4(_BYTE *a1);  /* 0x00330ec4 */
int __fastcall sub_60330FA8(int a1);  /* 0x00330fa8 */
int __fastcall sub_60331A60(int a1);  /* 0x00331a60 */
int __fastcall sub_60331C20(int a1);  /* 0x00331c20 */
int __fastcall sub_60331E7C(int result);  /* 0x00331e7c */
int __fastcall sub_60331E8C(int a1);  /* 0x00331e8c */
int __fastcall sub_60332278(int a1);  /* 0x00332278 */
int __fastcall SE_EMY_KK_SHIKO_ref(int a1);  /* 0x003323e0 */
int __fastcall sub_60332870(int result);  /* 0x00332870 */
int __fastcall sub_60332888(int a1);  /* 0x00332888 */
int __fastcall sub_60332958(int a1);  /* 0x00332958 */
int __fastcall sub_60332B40(int result);  /* 0x00332b40 */
int __fastcall sub_60332B70(_DWORD *a1);  /* 0x00332b70 */
int __fastcall sub_60332C30(int a1);  /* 0x00332c30 */
int __fastcall sub_60332DC8(int result);  /* 0x00332dc8 */
int __fastcall sub_60332DF8(int a1);  /* 0x00332df8 */
int __fastcall sub_60332EB8(int a1);  /* 0x00332eb8 */
int __fastcall sub_60332FEC(int result);  /* 0x00332fec */
int __fastcall sub_6033301C(int a1);  /* 0x0033301c */
int __fastcall sub_603332B0(int a1);  /* 0x003332b0 */
int __fastcall sub_603334A8(int a1);  /* 0x003334a8 */
int __fastcall sub_603335B0(int a1);  /* 0x003335b0 */
int __fastcall sub_603336A4(int a1);  /* 0x003336a4 */
int __fastcall sub_603337A0(int a1, int a2, int a3, int a4);  /* 0x003337a0 */
int __fastcall sub_603337C8(int a1);  /* 0x003337c8 */
int __fastcall sub_60333938(int a1);  /* 0x00333938 */
int __fastcall sub_60333A98(int a1);  /* 0x00333a98 */
int __fastcall sub_60333B58(int a1);  /* 0x00333b58 */
int __fastcall sub_60333CE8(int a1);  /* 0x00333ce8 */
bool __fastcall sub_60333E80(int a1, int a2);  /* 0x00333e80 */
int __fastcall sub_60333E90(int a1);  /* 0x00333e90 */
int __fastcall sub_60333FE4(int a1);  /* 0x00333fe4 */
unsigned int __fastcall sub_6033410C(unsigned int result, int a2, int a3);  /* 0x0033410c */
unsigned int __fastcall sub_603342D8(unsigned int a1, int a2, int a3);  /* 0x003342d8 */
int __fastcall sub_6033433C(int a1, int a2, int a3);  /* 0x0033433c */
int __fastcall sub_60334528(unsigned int a1, int a2, int a3);  /* 0x00334528 */
int __fastcall sub_603346D4(int a1);  /* 0x003346d4 */
int __fastcall sub_60334740(int result);  /* 0x00334740 */
int __fastcall sub_60334754(int a1, int a2);  /* 0x00334754 */
int __fastcall sub_60334774(int a1, int a2, int a3);  /* 0x00334774 */
int __fastcall sub_603347B8(int a1, int *a2);  /* 0x003347b8 */
bool __fastcall sub_603347E4(int a1, int a2);  /* 0x003347e4 */
void __fastcall sub_6033495C(_BYTE *a1);  /* 0x0033495c */
int __fastcall sub_603349D8(_BYTE *a1);  /* 0x003349d8 */
int __fastcall sub_60334A58(int a1);  /* 0x00334a58 */
void __fastcall sub_60334AC8(int a1);  /* 0x00334ac8 */
int __fastcall sub_60334B68(int a1);  /* 0x00334b68 */
int __fastcall sub_60334B7C(int a1);  /* 0x00334b7c */
int __fastcall SumoBroLightning_executeState_Down(int a1);  /* 0x00334cac */
int __fastcall sub_60334DE0(int a1);  /* 0x00334de0 */
int __fastcall SE_OBJ_KK_THUNDER_SEPARATE_ref(int a1);  /* 0x00334ebc */
int __fastcall sub_60335184(int a1);  /* 0x00335184 */
int __fastcall sub_603351D4(int a1);  /* 0x003351d4 */
int __fastcall SumoBroLightning_onCreate(int a1);  /* 0x00335270 */
int __fastcall SumoBroLightning_vf7(int a1);  /* 0x00335470 */
int __fastcall SumoBroLightning_vf8(int a1);  /* 0x00335484 */
bool __fastcall SumoBroLightning_vf49(int a1, int a2, int a3);  /* 0x00335604 */
int __fastcall SumoBroLightning_vf50(int a1, int a2, int a3);  /* 0x0033564c */
int __fastcall SumoBroLightning_vf51(int a1, int a2, int a3);  /* 0x00335678 */
int __fastcall SumoBroLightning_vf52(int a1, int a2, int a3);  /* 0x003356a4 */
int __fastcall SumoBroLightning_vf53(int a1, int a2, int a3);  /* 0x003356d4 */
int __fastcall SumoBroLightning_vf54(int a1, int a2);  /* 0x00335704 */
int __fastcall SumoBroLightning_vf55(int a1);  /* 0x0033572c */
int __fastcall SumoBroLightning_vf32(float *a1);  /* 0x00335740 */
int __fastcall sub_603357DC(int a1, int a2);  /* 0x003357dc */
int __fastcall SE_OBJ_CMN_TOUCH_THUNDER_ref_3(int a1, int a2, int a3);  /* 0x00335804 */
bool __fastcall SumoBroLightning_vf0(int a1, int a2);  /* 0x00335848 */
void __fastcall SumoBroLightning_vf2(_DWORD *a1);  /* 0x0033594c */
int __fastcall SumoBroLightning_vf3(_DWORD *a1);  /* 0x003359d8 */
int __fastcall SumoBroLightning_vf56(int a1);  /* 0x00335a68 */
int __fastcall sub_60335E10(int result);  /* 0x00335e10 */
int __fastcall sub_60335F04(int a1);  /* 0x00335f04 */
int __fastcall sub_60336578(int result);  /* 0x00336578 */
int __fastcall sub_60336850(int a1);  /* 0x00336850 */
int __fastcall sub_6033685C(int result);  /* 0x0033685c */
int __fastcall sub_6033686C(int a1);  /* 0x0033686c */
int __fastcall sub_603368F4(int a1);  /* 0x003368f4 */
int __fastcall sub_6033699C(int a1);  /* 0x0033699c */
int __fastcall sub_60336BDC(_DWORD **a1);  /* 0x00336bdc */
int __fastcall sub_60336C94(int a1, int a2, int a3, int a4);  /* 0x00336c94 */
int __fastcall sub_60336CCC(_DWORD *a1);  /* 0x00336ccc */
int __fastcall sub_60336E10(int a1);  /* 0x00336e10 */
int __fastcall sub_60336F64(int a1, int a2, int a3);  /* 0x00336f64 */
int __fastcall sub_60336FC8(int a1, int a2, int a3);  /* 0x00336fc8 */
int __fastcall sub_60337098(float *a1, int a2, int a3);  /* 0x00337098 */
int __fastcall sub_603370CC(int a1, int a2);  /* 0x003370cc */
int __fastcall sub_603372EC(int a1);  /* 0x003372ec */
int __fastcall sub_603374B4(int a1, int a2);  /* 0x003374b4 */
int __fastcall sub_60337608(int a1, int a2);  /* 0x00337608 */
int __fastcall sub_603376FC(_DWORD *a1, int a2, int a3);  /* 0x003376fc */
bool __fastcall sub_60337750(int a1, int a2);  /* 0x00337750 */
void __fastcall sub_603378C8(_BYTE *a1);  /* 0x003378c8 */
int __fastcall sub_60337964(_BYTE *a1);  /* 0x00337964 */
int __fastcall sub_60337A04(int a1, int a2, int a3);  /* 0x00337a04 */
int __fastcall sub_60337A20(int a1);  /* 0x00337a20 */
int __fastcall sub_60337DC4(_DWORD *a1);  /* 0x00337dc4 */
int __fastcall sub_603380A4(int result);  /* 0x003380a4 */
int __fastcall sub_6033828C(int result);  /* 0x0033828c */
int __fastcall sub_603382C4(int a1);  /* 0x003382c4 */
int __fastcall sub_603383FC(int a1);  /* 0x003383fc */
int __fastcall sub_60338500(int a1);  /* 0x00338500 */
int __fastcall sub_60338700(__int64 a1);  /* 0x00338700 */
int __fastcall sub_60338750(int a1);  /* 0x00338750 */
int __fastcall sub_603387DC(int a1);  /* 0x003387dc */
void __fastcall sub_603388A8(int a1);  /* 0x003388a8 */
int __fastcall sub_6033894C(int a1);  /* 0x0033894c */
int __fastcall sub_60338B30(int a1);  /* 0x00338b30 */
int __fastcall sub_60338B34(int result);  /* 0x00338b34 */
int __fastcall sub_60338B44(int a1);  /* 0x00338b44 */
int __fastcall sub_60338D58(int a1);  /* 0x00338d58 */
int __fastcall sub_60338F38(int result);  /* 0x00338f38 */
int __fastcall sub_60338F48(int a1);  /* 0x00338f48 */
int __fastcall sub_60338FC8(_DWORD *a1);  /* 0x00338fc8 */
int __fastcall sub_603390BC(_DWORD *a1);  /* 0x003390bc */
int __fastcall sub_60339178(int a1);  /* 0x00339178 */
int __fastcall sub_6033922C(int a1);  /* 0x0033922c */
void __fastcall sub_6033934C(int a1);  /* 0x0033934c */
int __fastcall sub_6033A26C(__int64 a1);  /* 0x0033a26c */
int __fastcall sub_6033A830(int a1);  /* 0x0033a830 */
int __fastcall sub_6033AA2C(int a1);  /* 0x0033aa2c */
int __fastcall sub_6033B95C(int a1);  /* 0x0033b95c */
int __fastcall sub_6033B984(int a1, int a2);  /* 0x0033b984 */
unsigned int __fastcall sub_6033BC60(int a1, _DWORD *a2);  /* 0x0033bc60 */
int __fastcall sub_6033C38C(int a1);  /* 0x0033c38c */
int __fastcall sub_6033C4A8(int a1);  /* 0x0033c4a8 */
int __fastcall sub_6033CF5C(int a1, int a2, int a3);  /* 0x0033cf5c */
int __fastcall sub_6033D008(int a1, _DWORD *a2);  /* 0x0033d008 */
int __fastcall sub_6033E2D4(int a1, int a2);  /* 0x0033e2d4 */
int __fastcall sub_6033E380(int a1, int a2, int a3);  /* 0x0033e380 */
int __fastcall sub_6033E5FC(int a1);  /* 0x0033e5fc */
int __fastcall LargeGoomba_vf156(_DWORD *a1);  /* 0x0033e66c */
int __fastcall LargeGoomba_vf160(int a1);  /* 0x0033e7f4 */
int __fastcall LargeGoomba_vf159(int result);  /* 0x0033e858 */
int __fastcall LargeGoomba_vf199(int result);  /* 0x0033e884 */
int __fastcall LargeGoomba_vf162(int a1);  /* 0x0033e8a8 */
int __fastcall LargeGoomba_vf163(int a1);  /* 0x0033e9f0 */
int __fastcall LargeGoomba_vf172(int a1);  /* 0x0033ef60 */
int __fastcall LargeGoomba_vf173(int result);  /* 0x0033f124 */
int __fastcall LargeGoomba_vf52(int a1);  /* 0x0033f14c */
int __fastcall LargeGoomba_vf53(int a1);  /* 0x0033f1e0 */
int __fastcall LargeGoomba_vf167(int a1);  /* 0x0033f34c */
int __fastcall LargeGoomba_vf168(int a1);  /* 0x0033f4bc */
int __fastcall LargeGoomba_vf169(int a1);  /* 0x0033f4f4 */
int __fastcall LargeGoomba_vf170(int a1);  /* 0x0033f500 */
int __fastcall LargeGoomba_vf27(int a1, int *a2);  /* 0x0033f588 */
int __fastcall LargeGoomba_vf30(int a1, int *a2);  /* 0x0033f5b4 */
int __fastcall LargeGoomba_vf28(int a1, int *a2);  /* 0x0033f5e0 */
int __fastcall LargeGoomba_vf26(int a1);  /* 0x0033f60c */
bool __fastcall LargeGoomba_vf0(int a1, int a2);  /* 0x0033f704 */
void __fastcall LargeGoomba_vf2(_BYTE *a1);  /* 0x0033f8f0 */
int __fastcall LargeGoomba_vf3(_BYTE *a1);  /* 0x0033f98c */
int __fastcall LargeGoomba_vf45(int a1);  /* 0x0033fa2c */
bool __fastcall LargeGoomba_vf46(int a1);  /* 0x0033fa38 */
int __fastcall LargeGoomba_vf71(int a1);  /* 0x0033fa5c */
int __fastcall LargeGoomba_vf75(int a1);  /* 0x0033fa68 */
int __fastcall sub_6033FC60(int a1);  /* 0x0033fc60 */
int __fastcall LargeGoomba_vf5(int a1);  /* 0x0033fd70 */
int __fastcall sub_6033FFCC(int a1);  /* 0x0033ffcc */
int __fastcall sub_60340170(int a1);  /* 0x00340170 */
int __fastcall LargeGoomba_vf8(_BYTE *a1);  /* 0x003403e4 */
int __fastcall LargeGoomba_vf12(int a1, int a2, int a3, int a4);  /* 0x0034079c */
int __fastcall sub_603407D0(int a1, int a2, int a3);  /* 0x003407d0 */
int __fastcall sub_60340870(int a1, int a2, int a3);  /* 0x00340870 */
int __fastcall LargeGoomba_vf66(float *a1, int a2, int a3);  /* 0x003408c8 */
int __fastcall LargeGoomba_vf67(float *a1, int a2, int a3);  /* 0x00340a9c */
int __fastcall LargeGoomba_vf65(_DWORD *a1, int a2);  /* 0x00340c68 */
int __fastcall LargeGoomba_vf73(_DWORD *a1, int a2, int a3);  /* 0x00340d00 */
int __fastcall LargeGoomba_vf70(int *a1, int a2, int a3);  /* 0x00340e4c */
int __fastcall LargeGoomba_vf74(int a1);  /* 0x00340f80 */
int __fastcall LargeGoomba_vf79(int a1, int a2, int a3);  /* 0x00340f8c */
int __fastcall sub_603411E4(int result);  /* 0x003411e4 */
int __fastcall LargeGoomba_vf32(char *a1);  /* 0x00341384 */
int __fastcall LargeGoomba_vf61(_DWORD *a1, int a2, int a3);  /* 0x003413dc */
int __fastcall LargeGoomba_vf68(int a1);  /* 0x003415ac */
int __fastcall LargeGoomba_vf158(_DWORD *a1, int a2);  /* 0x003415b8 */
int __fastcall LargeGoomba_vf50(int a1, int a2, int a3);  /* 0x00341654 */
int __fastcall LargeGoomba_vf93(int a1, int (__fastcall ***a2)(_DWORD, int));  /* 0x00341744 */
bool __fastcall sub_6034180C(int a1, float *a2);  /* 0x0034180c */
int __fastcall LargeGoomba_vf198(_BYTE *a1);  /* 0x003418c8 */
void __fastcall LargeGoomba_vf19(int a1);  /* 0x00341950 */
int __fastcall LargeGoomba_vf18(int a1);  /* 0x003419b0 */
int __fastcall LargeGoomba_vf176(int a1);  /* 0x00341a64 */
int __fastcall LargeGoomba_vf177(_DWORD **a1);  /* 0x00341a74 */
int __fastcall LargeGoomba_vf178(int a1);  /* 0x00341b40 */
int __fastcall LargeGoomba_vf180(int result);  /* 0x00341c58 */
int __fastcall LargeGoomba_vf181(int a1);  /* 0x00341c74 */
unsigned int __fastcall sub_60341D2C(_DWORD *a1);  /* 0x00341d2c */
int __fastcall LargeGoomba_vf184(_DWORD *a1);  /* 0x00341e80 */
int __fastcall LargeGoomba_vf186(int a1);  /* 0x00341f08 */
int __fastcall LargeGoomba_vf187(_DWORD *a1);  /* 0x00341f18 */
int __fastcall LargeGoomba_vf189(int a1);  /* 0x00341f98 */
int __fastcall LargeGoomba_vf190(int a1);  /* 0x00341fa8 */
unsigned int __fastcall sub_60342084(_DWORD *a1);  /* 0x00342084 */
int __fastcall LargeGoomba_vf193(_BYTE *a1);  /* 0x003420c8 */
int __fastcall LargeGoomba_vf195(_BYTE *a1);  /* 0x00342124 */
int __fastcall LargeGoomba_vf197(int result);  /* 0x0034215c */
int __fastcall LargeGoomba_vf196(int a1);  /* 0x0034216c */
int __fastcall sub_60342328(int a1);  /* 0x00342328 */
int __fastcall sub_60342410(int a1, int a2);  /* 0x00342410 */
bool __fastcall sub_6034242C(int a1, int a2);  /* 0x0034242c */
int __fastcall sub_603425A4(_BYTE *a1);  /* 0x003425a4 */
int __fastcall sub_6034268C(int a1);  /* 0x0034268c */
int __fastcall sub_60342998(int a1);  /* 0x00342998 */
int __fastcall sub_603429FC(int a1);  /* 0x003429fc */
int __fastcall sub_60342A44(unsigned int *a1);  /* 0x00342a44 */
int __fastcall sub_60342C40(int a1);  /* 0x00342c40 */
int __fastcall sub_60342D3C(int a1, int a2, int a3, int a4);  /* 0x00342d3c */
bool __fastcall sub_60342D64(int a1, int a2);  /* 0x00342d64 */
int __fastcall sub_60342E68(Actor *a1);  /* 0x00342e68 */
int __fastcall sub_60343184(int a1);  /* 0x00343184 */
int __fastcall SE_EMY_CHOROPU_M_OPEN_ref(int a1);  /* 0x003432c8 */
int __fastcall sub_60343348(int a1);  /* 0x00343348 */
int __fastcall sub_603437B4(int a1);  /* 0x003437b4 */
int __fastcall sub_603437D4(int a1);  /* 0x003437d4 */
int __fastcall SE_EMY_CHOROPU_M_APP_ref(int a1);  /* 0x00343a64 */
int __fastcall sub_60343F00(int a1);  /* 0x00343f00 */
int __fastcall sub_60343F6C(int a1);  /* 0x00343f6c */
int __fastcall sub_6034440C(int a1);  /* 0x0034440c */
int __fastcall sub_60344864(int a1);  /* 0x00344864 */
int __fastcall sub_60344BDC(int *a1);  /* 0x00344bdc */
int __fastcall sub_60344D18(int a1, int a2);  /* 0x00344d18 */
int __fastcall sub_60344DF4(int a1);  /* 0x00344df4 */
int __fastcall sub_60345084(int a1);  /* 0x00345084 */
int __fastcall sub_60345188(int a1, int a2, int a3, int a4);  /* 0x00345188 */
int __fastcall sub_603451B0(int a1);  /* 0x003451b0 */
int __fastcall sub_603453AC(int a1, int a2, int a3);  /* 0x003453ac */
int __fastcall sub_60345A00(int a1, int a2);  /* 0x00345a00 */
int __fastcall sub_60345BAC(float *a1, int a2, int a3);  /* 0x00345bac */
int __fastcall sub_60345C54(float *a1, int a2, int a3);  /* 0x00345c54 */
int __fastcall sub_60345CAC(int a1, int a2, int a3);  /* 0x00345cac */
int __fastcall sub_60345CE8(int a1, int a2);  /* 0x00345ce8 */
int __fastcall sub_60345D14(int a1);  /* 0x00345d14 */
int __fastcall sub_60345EA4(_DWORD *a1);  /* 0x00345ea4 */
int __fastcall sub_6034600C(int a1, int a2);  /* 0x0034600c */
int __fastcall sub_60346188(int a1);  /* 0x00346188 */
int __fastcall sub_60346400(int a1);  /* 0x00346400 */
int __fastcall sub_6034661C(int a1);  /* 0x0034661c */
int __fastcall sub_60346740(float *a1);  /* 0x00346740 */
int __fastcall sub_603467A4(int a1);  /* 0x003467a4 */
int __fastcall sub_603468F8(int a1);  /* 0x003468f8 */
int __fastcall sub_60346A74(int a1);  /* 0x00346a74 */
int __fastcall sub_60346BD0(int a1);  /* 0x00346bd0 */
int __fastcall sub_60346C3C(int a1, int a2);  /* 0x00346c3c */
bool __fastcall sub_60346D54(int a1, int a2);  /* 0x00346d54 */
void __fastcall sub_60346ECC(_BYTE *a1);  /* 0x00346ecc */
int __fastcall sub_60346F58(_BYTE *a1);  /* 0x00346f58 */
int __fastcall sub_60346FE8(int a1);  /* 0x00346fe8 */
void __fastcall sub_6034705C(int a1);  /* 0x0034705c */
int __fastcall sub_60347110(int a1);  /* 0x00347110 */
int __fastcall sub_60347138(int a1, int a2, float *a3);  /* 0x00347138 */
int __fastcall sub_603472FC(int a1, int a2, int a3);  /* 0x003472fc */
int __fastcall sub_60347454(int a1);  /* 0x00347454 */
unsigned int __fastcall sub_6034751C(int a1);  /* 0x0034751c */
int __fastcall sub_603476E4(int result);  /* 0x003476e4 */
int __fastcall sub_603476FC(int a1);  /* 0x003476fc */
int __fastcall SE_EMY_MECHAKOOPA_DAMAGE_ref(int a1);  /* 0x003477f8 */
int __fastcall sub_603479F0(int a1);  /* 0x003479f0 */
int __fastcall sub_60347B2C(_DWORD *a1);  /* 0x00347b2c */
int __fastcall SE_EMY_MECHAKOOPA_RESTART_F_ref(int a1);  /* 0x00347b68 */
int __fastcall sub_60347C54(int a1);  /* 0x00347c54 */
int __fastcall sub_60347CC4(int result);  /* 0x00347cc4 */
int __fastcall sub_60348134(int a1);  /* 0x00348134 */
int __fastcall sub_603483E8(_DWORD *a1);  /* 0x003483e8 */
int __fastcall sub_6034850C(int a1);  /* 0x0034850c */
int __fastcall SE_EMY_MECHAKOOPA_WALK_ref(int a1);  /* 0x00348704 */
bool __fastcall sub_6034891C(int a1);  /* 0x0034891c */
int __fastcall sub_60348A8C(int a1, int a2, int a3, int a4);  /* 0x00348a8c */
void __fastcall sub_60348AB8(_DWORD *a1, int a2, int a3);  /* 0x00348ab8 */
int __fastcall sub_60348C00(int a1, int a2, int a3);  /* 0x00348c00 */
int __fastcall sub_60348C94(int a1, int a2, int a3);  /* 0x00348c94 */
int __fastcall SE_EMY_MECHAKOOPA_DAMAGE_ref_2(int a1, int a2);  /* 0x00348cd0 */
int __fastcall sub_60348E38(int a1);  /* 0x00348e38 */
int __fastcall sub_60348E44(int *a1, int a2, int a3);  /* 0x00348e44 */
int __fastcall sub_60348FEC(int a1, int a2, int a3);  /* 0x00348fec */
int __fastcall sub_60349050(int a1);  /* 0x00349050 */
bool __fastcall sub_6034905C(int a1, int a2, int a3);  /* 0x0034905c */
int __fastcall sub_603491E8(int a1, int a2, int a3);  /* 0x003491e8 */
int __fastcall sub_60349228(int a1);  /* 0x00349228 */
int __fastcall sub_603492C0(int a1);  /* 0x003492c0 */
int __fastcall sub_60349324(int a1);  /* 0x00349324 */
bool __fastcall sub_6034933C(int a1);  /* 0x0034933c */
int __fastcall sub_6034946C(int a1);  /* 0x0034946c */
int __fastcall sub_603495AC(int a1, int *a2);  /* 0x003495ac */
int __fastcall sub_603495D8(int a1, int *a2);  /* 0x003495d8 */
int __fastcall sub_60349604(int a1, int *a2);  /* 0x00349604 */
int __fastcall sub_60349658(int result);  /* 0x00349658 */
int __fastcall sub_60349668(unsigned __int8 *a1);  /* 0x00349668 */
int __fastcall sub_603496BC(int a1);  /* 0x003496bc */
int __fastcall sub_60349714(int a1);  /* 0x00349714 */
int __fastcall sub_6034973C(_DWORD *a1);  /* 0x0034973c */
int __fastcall sub_603497F8(int *a1);  /* 0x003497f8 */
int __fastcall sub_603498A0(int a1);  /* 0x003498a0 */
int __fastcall sub_60349954(int a1);  /* 0x00349954 */
int __fastcall sub_6034996C(int a1);  /* 0x0034996c */
bool __fastcall sub_60349984(int a1, int a2);  /* 0x00349984 */
int __fastcall sub_60349B70(Actor *a1);  /* 0x00349b70 */
int __fastcall sub_60349BD0(int a1);  /* 0x00349bd0 */
int __fastcall Actor_kokaBuzzy_build(unsigned int *a1);  /* 0x00349bf8 */
int __fastcall sub_60349DAC(int a1);  /* 0x00349dac */
int __fastcall sub_60349EA8(int result);  /* 0x00349ea8 */
int __fastcall sub_60349EC0(int a1);  /* 0x00349ec0 */
int __fastcall sub_60349F5C(int a1);  /* 0x00349f5c */
int __fastcall SE_EMY_REV_KOURA_FALL_ref(int a1);  /* 0x0034a0d4 */
int __fastcall sub_6034A34C(int result);  /* 0x0034a34c */
int __fastcall sub_6034A364(int a1);  /* 0x0034a364 */
int __fastcall sub_6034A3DC(_DWORD *a1);  /* 0x0034a3dc */
int __fastcall sub_6034A478(int a1);  /* 0x0034a478 */
int __fastcall sub_6034A4FC(int a1);  /* 0x0034a4fc */
__int64 __fastcall sub_6034A51C(int a1);  /* 0x0034a51c */
void __fastcall sub_6034AA30(int a1);  /* 0x0034aa30 */
int __fastcall sub_6034AD68(int a1);  /* 0x0034ad68 */
int __fastcall sub_6034AEF8(int a1, unsigned int *a2);  /* 0x0034aef8 */
int __fastcall sub_6034B828(_DWORD *a1);  /* 0x0034b828 */
int __fastcall sub_6034BA80(int a1);  /* 0x0034ba80 */
int __fastcall sub_6034BC18(int a1);  /* 0x0034bc18 */
int __fastcall sub_6034BDA0(int a1);  /* 0x0034bda0 */
int __fastcall sub_6034BE18(int a1, int a2, int a3, int a4);  /* 0x0034be18 */
int __fastcall sub_6034BEA0(int a1, int a2, int a3);  /* 0x0034bea0 */
int __fastcall sub_6034BF04(int a1, int a2, int a3);  /* 0x0034bf04 */
int __fastcall sub_6034BF3C(int a1, int a2, int a3);  /* 0x0034bf3c */
int __fastcall sub_6034C0C4(int a1, int a2, int a3);  /* 0x0034c0c4 */
int __fastcall sub_6034C2B8(_DWORD *a1, int a2, int a3, int a4);  /* 0x0034c2b8 */
bool __fastcall sub_6034C3B0(int a1);  /* 0x0034c3b0 */
int __fastcall sub_6034C9DC(int a1);  /* 0x0034c9dc */
int __fastcall sub_6034C9F4(int a1);  /* 0x0034c9f4 */
int __fastcall sub_6034CB80(int a1);  /* 0x0034cb80 */
int __fastcall sub_6034CBFC(int a1);  /* 0x0034cbfc */
int __fastcall sub_6034CC68(int a1);  /* 0x0034cc68 */
int __fastcall sub_6034CC80(int a1);  /* 0x0034cc80 */
int __fastcall sub_6034CCA8(int a1, int a2, int a3);  /* 0x0034cca8 */
int __fastcall sub_6034CE90(int a1);  /* 0x0034ce90 */
int __fastcall sub_6034D134(int a1);  /* 0x0034d134 */
int __fastcall sub_6034D3A4(int a1);  /* 0x0034d3a4 */
int __fastcall sub_6034D45C(int a1);  /* 0x0034d45c */
int __fastcall sub_6034D558(int a1);  /* 0x0034d558 */
int __fastcall sub_6034D57C(int *a1);  /* 0x0034d57c */
int __fastcall sub_6034D6B4(_DWORD *a1);  /* 0x0034d6b4 */
int __fastcall sub_6034D770(_DWORD *a1);  /* 0x0034d770 */
int __fastcall sub_6034D854(int *a1);  /* 0x0034d854 */
int __fastcall sub_6034D990(int a1);  /* 0x0034d990 */
int __fastcall sub_6034DA38(int result, _DWORD *a2);  /* 0x0034da38 */
int __fastcall sub_6034DC00(int a1);  /* 0x0034dc00 */
int __fastcall sub_6034DF18(int a1);  /* 0x0034df18 */
void __fastcall sub_6034DF58(int a1);  /* 0x0034df58 */
int __fastcall sub_6034DFAC(int a1, int a2);  /* 0x0034dfac */
int __fastcall SE_EMY_REV_KOURA_FALL_ref_2(int a1, int a2, float *a3);  /* 0x0034e108 */
int __fastcall sub_6034E314(int a1, float *a2);  /* 0x0034e314 */
void __fastcall sub_6034E3F0(_BYTE *a1);  /* 0x0034e3f0 */
int __fastcall sub_6034E4CC(_BYTE *a1);  /* 0x0034e4cc */
int __fastcall sub_6034E5FC(int a1);  /* 0x0034e5fc */
int __fastcall sub_6034E614(int a1);  /* 0x0034e614 */
int __fastcall sub_6034E824(int a1);  /* 0x0034e824 */
int __fastcall sub_6034E84C(struct sead_IDisposer *a1);  /* 0x0034e84c */
bool __fastcall sub_6034E85C(int a1, int a2);  /* 0x0034e85c */
int __fastcall sub_6034EA94(int a1);  /* 0x0034ea94 */
int __fastcall sub_6034ECFC(int a1);  /* 0x0034ecfc */
int __fastcall sub_6034EEAC(int a1);  /* 0x0034eeac */
int __fastcall sub_6034F014(_DWORD *a1, int a2);  /* 0x0034f014 */
int __fastcall sub_6034F0F0(int a1, int a2);  /* 0x0034f0f0 */
int __fastcall sub_6034F114(int result);  /* 0x0034f114 */
int __fastcall sub_6034F140(int result);  /* 0x0034f140 */
int __fastcall walk_mini_ref(int a1);  /* 0x0034f168 */
int __fastcall sub_6034F6B8(int a1);  /* 0x0034f6b8 */
int __fastcall walk_mini_ref_2(int a1);  /* 0x0034f79c */
int __fastcall sub_6034F824(int *a1);  /* 0x0034f824 */
int __fastcall sub_6034F924(int a1);  /* 0x0034f924 */
int __fastcall sub_6034FA94(int a1);  /* 0x0034fa94 */
int __fastcall sub_6034FACC(int a1);  /* 0x0034facc */
int __fastcall sub_6034FAD8(int a1);  /* 0x0034fad8 */
int __fastcall sub_6034FB60(int a1, int *a2);  /* 0x0034fb60 */
int __fastcall sub_6034FB8C(int a1, int *a2);  /* 0x0034fb8c */
int __fastcall sub_6034FBB8(int a1, int *a2);  /* 0x0034fbb8 */
int __fastcall sub_6034FBE4(int a1);  /* 0x0034fbe4 */
int __fastcall sub_6034FD64(int a1);  /* 0x0034fd64 */
int __fastcall sub_6034FDD4(int a1);  /* 0x0034fdd4 */
int __fastcall sub_6034FDE4(int a1);  /* 0x0034fde4 */
int __fastcall sub_6034FE8C(int a1);  /* 0x0034fe8c */
int __fastcall sub_6034FF04(_BYTE *a1);  /* 0x0034ff04 */
int __fastcall sub_6034FFA4(int a1);  /* 0x0034ffa4 */
bool __fastcall sub_6034FFB0(int a1);  /* 0x0034ffb0 */
int __fastcall sub_603500E4(__int16 *a1);  /* 0x003500e4 */
bool __fastcall sub_603500FC(int a1);  /* 0x003500fc */
int __fastcall sub_60350150(int a1);  /* 0x00350150 */
float __fastcall sub_60350770(int a1);  /* 0x00350770 */
__int64 __fastcall sub_60350AE0(__int64 result);  /* 0x00350ae0 */
int __fastcall sub_60350AFC(int a1);  /* 0x00350afc */
int __fastcall sub_60350D78(int result);  /* 0x00350d78 */
int __fastcall sub_60351298(int a1);  /* 0x00351298 */
int __fastcall sub_60351534(int result);  /* 0x00351534 */
bool __fastcall sub_60351544(int a1);  /* 0x00351544 */
int __fastcall sub_60351578(int a1);  /* 0x00351578 */
int __fastcall sub_60351824(int a1, int a2);  /* 0x00351824 */
int __fastcall sub_60351840(Actor *a1);  /* 0x00351840 */
int __fastcall sub_60351BF4(int a1);  /* 0x00351bf4 */
int __fastcall sub_60351F54(int a1, int a2);  /* 0x00351f54 */
int __fastcall sub_60352120(int result, unsigned int a2);  /* 0x00352120 */
int __fastcall sub_60352424(int a1);  /* 0x00352424 */
int __fastcall sub_60352600(int a1);  /* 0x00352600 */
bool __fastcall sub_6035288C(int a1);  /* 0x0035288c */
int __fastcall sub_60352988(StageActor *a1);  /* 0x00352988 */
int __fastcall sub_60352A30(int a1, int a2, int a3, int a4);  /* 0x00352a30 */
int __fastcall sub_60352A88(int a1, int a2, int a3);  /* 0x00352a88 */
int __fastcall sub_603532A0(int a1, int a2, int a3);  /* 0x003532a0 */
int __fastcall sub_603533BC(float *a1, int a2, int a3);  /* 0x003533bc */
int __fastcall sub_6035340C(int a1, int a2, int a3);  /* 0x0035340c */
int __fastcall sub_60353524(int a1);  /* 0x00353524 */
int __fastcall sub_603535B4(int a1);  /* 0x003535b4 */
int __fastcall sub_60353644(int a1);  /* 0x00353644 */
int __fastcall sub_60353678(int a1, int a2, int a3);  /* 0x00353678 */
bool __fastcall sub_60353910(int a1, int a2);  /* 0x00353910 */
int __fastcall sub_60353A88(Actor *a1);  /* 0x00353a88 */
int __fastcall sub_60353ADC(int a1);  /* 0x00353adc */
int __fastcall sub_60353AE4(int a1);  /* 0x00353ae4 */
int __fastcall sub_60354250(int result);  /* 0x00354250 */
void __fastcall sub_603542AC(int a1);  /* 0x003542ac */
int __fastcall sub_6035434C(int a1);  /* 0x0035434c */
int __fastcall sub_603543E4(int a1, int a2, int a3, int a4);  /* 0x003543e4 */
int __fastcall sub_603544D4(int result);  /* 0x003544d4 */
int __fastcall sub_603544F0(int a1);  /* 0x003544f0 */
int __fastcall sub_6035454C(int a1);  /* 0x0035454c */
int __fastcall sub_60354624(int a1);  /* 0x00354624 */
int __fastcall sub_6035494C(int a1);  /* 0x0035494c */
int __fastcall sub_60354CB8(int a1);  /* 0x00354cb8 */
int __fastcall sub_60354D2C(int a1);  /* 0x00354d2c */
int __fastcall sub_60355108(int a1);  /* 0x00355108 */
int __fastcall sub_60355164(int a1);  /* 0x00355164 */
int __fastcall sub_6035529C(int result);  /* 0x0035529c */
int __fastcall sub_603552AC(int a1);  /* 0x003552ac */
int __fastcall sub_60355300(int a1, int a2, int a3, int a4);  /* 0x00355300 */
int __fastcall sub_603554B0(int a1);  /* 0x003554b0 */
int __fastcall sub_6035587C(int result);  /* 0x0035587c */
unsigned int __fastcall sub_603558A8(int *a1, int a2, int a3, int a4);  /* 0x003558a8 */
int __fastcall sub_60355958(int result);  /* 0x00355958 */
int __fastcall sub_60355B2C(int a1, int a2);  /* 0x00355b2c */
int __fastcall sub_60355B48(int a1);  /* 0x00355b48 */
int __fastcall sub_60355C1C(int a1, int a2);  /* 0x00355c1c */
int __fastcall sub_60355DD0(int a1);  /* 0x00355dd0 */
int __fastcall sub_60356538(int a1, int a2);  /* 0x00356538 */
int __fastcall sub_6035694C(int a1);  /* 0x0035694c */
int __fastcall sub_60357164(int a1);  /* 0x00357164 */
int __fastcall sub_60357274(int a1);  /* 0x00357274 */
int __fastcall sub_603574A4(int a1);  /* 0x003574a4 */
int __fastcall sub_60357764(int a1, int a2, int a3);  /* 0x00357764 */
int __fastcall sub_603578AC(int a1, int a2, int a3);  /* 0x003578ac */
int __fastcall sub_60357928(int a1);  /* 0x00357928 */
int __fastcall sub_603579C8(int result);  /* 0x003579c8 */
int __fastcall sub_603579D8(int a1);  /* 0x003579d8 */
int __fastcall sub_60357A80(int result);  /* 0x00357a80 */
int __fastcall sub_60357AAC(int a1);  /* 0x00357aac */
int __fastcall sub_60357AE4(int a1);  /* 0x00357ae4 */
int __fastcall sub_60357B94(int a1);  /* 0x00357b94 */
int __fastcall sub_60357C38(int a1, int a2, int a3);  /* 0x00357c38 */
int __fastcall sub_60357F4C(int a1);  /* 0x00357f4c */
int __fastcall sub_60357FBC(int a1);  /* 0x00357fbc */
int __fastcall sub_6035802C(int a1);  /* 0x0035802c */
int __fastcall sub_603580C8(int a1, int *a2);  /* 0x003580c8 */
int __fastcall sub_603580F4(int a1, int *a2);  /* 0x003580f4 */
int __fastcall sub_60358120(int a1, int *a2);  /* 0x00358120 */
bool __fastcall sub_6035814C(int a1, int a2);  /* 0x0035814c */
void __fastcall sub_603582C4(_BYTE *a1);  /* 0x003582c4 */
int __fastcall sub_60358334(_BYTE *a1);  /* 0x00358334 */
int __fastcall sub_603583A8(int a1);  /* 0x003583a8 */
bool __fastcall sub_60358418(int a1);  /* 0x00358418 */
bool __fastcall sub_6035843C(int a1);  /* 0x0035843c */
int __fastcall sub_60358464(int a1, int a2, int a3);  /* 0x00358464 */
int __fastcall sub_60358494(int a1);  /* 0x00358494 */
int __fastcall sub_603584F4(int a1);  /* 0x003584f4 */
int __fastcall KoopaTroopa_ctor(_DWORD *a1);  /* 0x0035851c */
int __fastcall sub_603586A8(int a1);  /* 0x003586a8 */
int __fastcall sub_60358790(int a1);  /* 0x00358790 */
int __fastcall sub_60358B98(int *a1);  /* 0x00358b98 */
int __fastcall sub_60358C5C(_DWORD *a1);  /* 0x00358c5c */
int __fastcall sub_60358D4C(int a1);  /* 0x00358d4c */
int __fastcall sub_60358F48(_DWORD *a1);  /* 0x00358f48 */
int __fastcall sub_60359028(int a1);  /* 0x00359028 */
int __fastcall sub_60359128(_DWORD *a1);  /* 0x00359128 */
int __fastcall sub_60359184(int a1);  /* 0x00359184 */
int __fastcall sub_60359190(int a1);  /* 0x00359190 */
int __fastcall sub_603592A8(int *a1);  /* 0x003592a8 */
int __fastcall sub_6035932C(int a1);  /* 0x0035932c */
int __fastcall sub_60359C04(int a1, _DWORD *a2, int a3);  /* 0x00359c04 */
int __fastcall KoopaTroopa_onCreate(int a1);  /* 0x00359d98 */
int __fastcall sub_6035A168(_DWORD *a1);  /* 0x0035a168 */
int __fastcall sub_6035A5CC(int a1);  /* 0x0035a5cc */
int __fastcall KoopaTroopa_beforeExecute(_DWORD *a1);  /* 0x0035a73c */
int __fastcall sub_6035A898(_DWORD *a1);  /* 0x0035a898 */
int __fastcall KoopaTroopa_onExecute(int a1);  /* 0x0035a97c */
int __fastcall sub_6035ABA0(int a1);  /* 0x0035aba0 */
int __fastcall sub_6035ADF0(int a1);  /* 0x0035adf0 */
int __fastcall KoopaTroopa_onDraw(int a1);  /* 0x0035b0dc */
int __fastcall KoopaTroopa_onDelete(int a1);  /* 0x0035b18c */
int __fastcall KoopaTroopa_vf56(int a1);  /* 0x0035b204 */
unsigned int __fastcall sub_6035B208(int a1, _DWORD *a2);  /* 0x0035b208 */
int __fastcall sub_6035B2D0(int a1, int a2, int a3);  /* 0x0035b2d0 */
int __fastcall sub_6035B5B0(int a1, int a2, int a3);  /* 0x0035b5b0 */
void __fastcall sub_6035B720(int a1);  /* 0x0035b720 */
int __fastcall KoopaTroopa_vf65(int result, int a2, int a3);  /* 0x0035b778 */
int __fastcall KoopaTroopa_vf64(int a1, int a2, int a3);  /* 0x0035b788 */
unsigned int __fastcall KoopaTroopa_vf66(int a1, int a2, int a3);  /* 0x0035b97c */
int __fastcall SE_EMY_KURIBO_M_DAMAGE_ref_2(int a1, int a2, int a3);  /* 0x0035bbec */
bool __fastcall KoopaTroopa_vf22(int a1);  /* 0x0035be40 */
int __fastcall sub_6035C488(ShellEnemy *a1, int a2, int a3, int a4);  /* 0x0035c488 */
int __fastcall sub_6035C5B4(int a1, int a2);  /* 0x0035c5b4 */
int __fastcall sub_6035C5EC(int a1);  /* 0x0035c5ec */
bool __fastcall sub_6035C618(int a1);  /* 0x0035c618 */
int __fastcall KoopaTroopa_decideFirstState(int *a1);  /* 0x0035c740 */
int __fastcall sub_6035C8A0(int a1);  /* 0x0035c8a0 */
int __fastcall sub_6035C8CC(int result, int a2);  /* 0x0035c8cc */
int __fastcall KoopaTroopa_vf181(_DWORD *a1);  /* 0x0035c8f8 */
int __fastcall sub_6035C96C(int a1, int a2, int a3, int a4);  /* 0x0035c96c */
int __fastcall KoopaTroopa_vf50(int a1, int a2, int a3);  /* 0x0035c9c4 */
int __fastcall sub_6035CA00(int a1, int a2);  /* 0x0035ca00 */
int __fastcall sub_6035CAF8(_DWORD *a1);  /* 0x0035caf8 */
int __fastcall KoopaTroopa_vf193(int a1);  /* 0x0035cc30 */
int __fastcall KoopaTroopa_vf194(int a1);  /* 0x0035cc58 */
int __fastcall sub_6035CC80(int a1);  /* 0x0035cc80 */
int __fastcall sub_6035CD74(int a1);  /* 0x0035cd74 */
int __fastcall KoopaTroopa_vf185(int a1);  /* 0x0035d024 */
int __fastcall KoopaTroopa_endState_Slide(int a1);  /* 0x0035d174 */
int __fastcall KoopaTroopa_executeState_Slide(int a1);  /* 0x0035d18c */
int __fastcall KoopaTroopa_vf169(int a1);  /* 0x0035d278 */
int __fastcall revival_shell_ref(_DWORD *a1);  /* 0x0035d2b0 */
int __fastcall KoopaTroopa_vf200(int a1);  /* 0x0035d414 */
int __fastcall KoopaTroopa_vf202(_DWORD *a1);  /* 0x0035d4e0 */
int __fastcall KoopaTroopa_vf203(int a1);  /* 0x0035d530 */
int __fastcall KoopaTroopa_vf214(_DWORD *a1);  /* 0x0035d55c */
int __fastcall sub_6035D5E4(_BYTE *a1);  /* 0x0035d5e4 */
int __fastcall KoopaTroopa_vf175(int a1, int (__fastcall ***a2)(_DWORD, int));  /* 0x0035d61c */
void __fastcall KoopaTroopa_vf2(_BYTE *a1);  /* 0x0035d794 */
int __fastcall KoopaTroopa_vf3(_BYTE *a1);  /* 0x0035d870 */
int __fastcall KoopaTroopa_vf18(int a1);  /* 0x0035d950 */
void __fastcall KoopaTroopa_vf19(int a1);  /* 0x0035d9c0 */
int __fastcall KoopaTroopa_vf188(int a1);  /* 0x0035da7c */
int __fastcall KoopaTroopa_vf189(int a1);  /* 0x0035da94 */
int __fastcall KoopaTroopa_vf190(int a1);  /* 0x0035daac */
int __fastcall KoopaTroopa_vf191(int a1);  /* 0x0035dac4 */
int __fastcall sub_6035DADC(int a1, _DWORD *a2);  /* 0x0035dadc */
bool __fastcall sub_6035DB18(int a1);  /* 0x0035db18 */
int __fastcall sub_6035DD0C(int a1);  /* 0x0035dd0c */
int __fastcall sub_6035DE04(int a1);  /* 0x0035de04 */
int __fastcall sub_6035DE84(_BYTE *a1);  /* 0x0035de84 */
int __fastcall sub_6035DF70(int a1);  /* 0x0035df70 */
int __fastcall sub_6035E0E8(int a1, int a2, int a3, int a4);  /* 0x0035e0e8 */
int __fastcall sub_6035E488(int a1);  /* 0x0035e488 */
int __fastcall SE_EMY_TORPEDO_MOVE_ref(int a1);  /* 0x0035e590 */
int __fastcall sub_6035EA34(int a1);  /* 0x0035ea34 */
int __fastcall SE_EMY_TORPEDO_MOVE_ref_2(int a1);  /* 0x0035ebb0 */
int __fastcall sub_6035F074(_WORD *a1);  /* 0x0035f074 */
int __fastcall SE_EMY_TORPEDO_MOVE_ref_3(int a1);  /* 0x0035f08c */
int __fastcall sub_6035F524(int *a1);  /* 0x0035f524 */
int __fastcall sub_6035F680(int a1);  /* 0x0035f680 */
int __fastcall sub_6035F8AC(int a1);  /* 0x0035f8ac */
int __fastcall sub_6035F8D8(_BYTE *a1);  /* 0x0035f8d8 */
int __fastcall sub_6035F908(int a1);  /* 0x0035f908 */
void __fastcall sub_6035FB00(int a1);  /* 0x0035fb00 */
int __fastcall sub_6035FC5C(int a1);  /* 0x0035fc5c */
int __fastcall sub_6035FC9C(int a1);  /* 0x0035fc9c */
bool __fastcall sub_6035FD70(_DWORD *a1, int a2, int a3);  /* 0x0035fd70 */
int __fastcall sub_6035FF5C(int a1);  /* 0x0035ff5c */
int __fastcall sub_6035FFB0(int a1);  /* 0x0035ffb0 */
void __fastcall sub_603600B0(int a1);  /* 0x003600b0 */
int __fastcall sub_6036010C(int a1);  /* 0x0036010c */
bool __fastcall sub_60360154(int a1, int a2);  /* 0x00360154 */
void __fastcall sub_60360340(_BYTE *a1);  /* 0x00360340 */
int __fastcall sub_60360418(_BYTE *a1);  /* 0x00360418 */
int __fastcall sub_603604F4(int a1);  /* 0x003604f4 */
int __fastcall sub_603604F8(int a1);  /* 0x003604f8 */
int __fastcall sub_6036051C(int a1);  /* 0x0036051c */
int __fastcall sub_6036053C(int a1);  /* 0x0036053c */
int __fastcall sub_6036054C(int a1);  /* 0x0036054c */
bool __fastcall sub_60360560(int a1);  /* 0x00360560 */
int __fastcall Actor_tariporigon_airship_build(int a1);  /* 0x00360888 */
int __fastcall sub_603608F0(int a1);  /* 0x003608f0 */
int __fastcall sub_603609D4(int a1);  /* 0x003609d4 */
int __fastcall sub_60360AC0(int a1);  /* 0x00360ac0 */
int __fastcall sub_60360C4C(int a1);  /* 0x00360c4c */
int __fastcall sub_60360C8C(int a1, int a2, int a3, int a4);  /* 0x00360c8c */
int __fastcall sub_60360CB0(int a1);  /* 0x00360cb0 */
bool __fastcall sub_60360CD8(int a1, int a2);  /* 0x00360cd8 */
void __fastcall sub_60360EC0(int a1);  /* 0x00360ec0 */
int __fastcall sub_60360EF0(int a1);  /* 0x00360ef0 */
int __fastcall sub_603610B8(_DWORD *a1);  /* 0x003610b8 */
int __fastcall sub_603612EC(int a1);  /* 0x003612ec */
int __fastcall sub_60361340(int a1);  /* 0x00361340 */
int __fastcall sub_60361350(int a1);  /* 0x00361350 */
int __fastcall sub_60361430(_DWORD *a1);  /* 0x00361430 */
int __fastcall sub_60361460(int a1);  /* 0x00361460 */
int __fastcall sub_6036147C(_DWORD *a1);  /* 0x0036147c */
int __fastcall sub_603615B4(int a1);  /* 0x003615b4 */
int __fastcall sub_60361634(int a1);  /* 0x00361634 */
int __fastcall sub_60361654(int a1);  /* 0x00361654 */
int __fastcall sub_60361714(_DWORD *a1);  /* 0x00361714 */
int __fastcall sub_60361868(int a1);  /* 0x00361868 */
int __fastcall sub_6036196C(int a1);  /* 0x0036196c */
int __fastcall sub_60361AAC(int a1, int a2);  /* 0x00361aac */
int __fastcall sub_60361AC8(int a1);  /* 0x00361ac8 */
int __fastcall sub_60361AFC(int a1);  /* 0x00361afc */
unsigned int __fastcall sub_60361EF8(int a1, int a2);  /* 0x00361ef8 */
unsigned int __fastcall sub_6036211C(int a1, int a2);  /* 0x0036211c */
int __fastcall sub_60362120(int *a1);  /* 0x00362120 */
int __fastcall sub_603622B8(int a1);  /* 0x003622b8 */
int __fastcall sub_60362450(int a1);  /* 0x00362450 */
int __fastcall sub_60362574(int a1, int a2, int a3, int a4);  /* 0x00362574 */
bool __fastcall sub_603625B0(int a1, int a2);  /* 0x003625b0 */
void __fastcall sub_60362728(_BYTE *a1);  /* 0x00362728 */
int __fastcall sub_60362798(_BYTE *a1);  /* 0x00362798 */
int __fastcall wing_kuri_ref(_DWORD *a1);  /* 0x00362b90 */
int __fastcall sub_60362CF4(int a1);  /* 0x00362cf4 */
int __fastcall sub_60362E68(int result);  /* 0x00362e68 */
int __fastcall sub_60362EB4(int a1);  /* 0x00362eb4 */
int __fastcall sub_60363110(int a1);  /* 0x00363110 */
int __fastcall sub_60363230(int a1);  /* 0x00363230 */
int __fastcall Actor_gurupupatapata_build(_DWORD *a1);  /* 0x003642ac */
int __fastcall sub_60364320(int a1);  /* 0x00364320 */
int __fastcall sub_6036446C(int a1);  /* 0x0036446c */
int __fastcall sub_60364754(int a1);  /* 0x00364754 */
int __fastcall sub_60364898(int a1);  /* 0x00364898 */
int __fastcall sub_60364BE8(int a1);  /* 0x00364be8 */
int __fastcall sub_60364D14(int a1);  /* 0x00364d14 */
int __fastcall sub_60364F00(int result);  /* 0x00364f00 */
int __fastcall sub_60364F1C(int a1);  /* 0x00364f1c */
int __fastcall sub_60365138(int a1);  /* 0x00365138 */
int __fastcall sub_6036517C(int *a1);  /* 0x0036517c */
int __fastcall skl_root_shell_ref(int a1);  /* 0x00365468 */
int __fastcall sub_60365514(int a1, int a2, int a3, int a4);  /* 0x00365514 */
bool __fastcall sub_6036562C(int a1);  /* 0x0036562c */
int __fastcall sub_60365694(int a1, int a2);  /* 0x00365694 */
int __fastcall sub_6036572C(int a1, int a2, int a3, int a4);  /* 0x0036572c */
int __fastcall sub_603657C8(int a1, int a2, int a3);  /* 0x003657c8 */
int __fastcall sub_60365910(int a1);  /* 0x00365910 */
int __fastcall sub_603659CC(_DWORD *a1);  /* 0x003659cc */
bool __fastcall sub_60365A3C(int a1);  /* 0x00365a3c */
int __fastcall sub_60365B78(int a1);  /* 0x00365b78 */
int __fastcall sub_60365C30(int a1);  /* 0x00365c30 */
int __fastcall sub_60365C94(int a1);  /* 0x00365c94 */
bool __fastcall sub_60365DAC(int a1, int a2);  /* 0x00365dac */
int __fastcall sub_60365EB0(_BYTE *a1);  /* 0x00365eb0 */
int __fastcall sub_603667F4(_DWORD *a1);  /* 0x003667f4 */
int __fastcall sub_603668B4(int a1);  /* 0x003668b4 */
int __fastcall sub_60366980(_DWORD *a1);  /* 0x00366980 */
int __fastcall sub_60366A40(int a1);  /* 0x00366a40 */
int __fastcall sub_60366AC4(_DWORD *a1);  /* 0x00366ac4 */
int __fastcall sub_60366C5C(_DWORD *a1);  /* 0x00366c5c */
int __fastcall sub_60366E7C(_DWORD *a1);  /* 0x00366e7c */
int __fastcall sub_60366F3C(int a1);  /* 0x00366f3c */
int __fastcall sub_60366F4C(int *a1);  /* 0x00366f4c */
int __fastcall sub_60366FA4(int *a1);  /* 0x00366fa4 */
int __fastcall sub_60367188(int a1);  /* 0x00367188 */
int __fastcall sub_603672B0(int a1);  /* 0x003672b0 */
int __fastcall sub_603672D4(int a1);  /* 0x003672d4 */
bool __fastcall sub_60367368(int a1, int a2);  /* 0x00367368 */
int __fastcall sub_6036746C(Actor *a1);  /* 0x0036746c */
int __fastcall sub_603674A4(int a1, int a2);  /* 0x003674a4 */
int __fastcall SE_EMY_PENGUIN_DAMAGE_ref(int a1, int a2, int a3);  /* 0x00367600 */
int __fastcall sub_60367780(int result);  /* 0x00367780 */
int __fastcall sub_6036778C(int a1);  /* 0x0036778c */
int __fastcall sub_60367858(int result);  /* 0x00367858 */
int __fastcall sub_60367864(int a1);  /* 0x00367864 */
int __fastcall sub_60367A24(int *a1);  /* 0x00367a24 */
int __fastcall sub_60367A78(int a1);  /* 0x00367a78 */
int __fastcall sub_60368520(int result);  /* 0x00368520 */
int __fastcall sub_60368538(int a1);  /* 0x00368538 */
int __fastcall SE_EMY_PENGUIN_PIYO_ref(int a1);  /* 0x003686c8 */
int __fastcall sub_603688D0(int a1);  /* 0x003688d0 */
int __fastcall sub_60368A64(int a1);  /* 0x00368a64 */
int __fastcall sub_60368C5C(int a1);  /* 0x00368c5c */
int __fastcall sub_60369198(int a1);  /* 0x00369198 */
int __fastcall sub_60369330(int a1);  /* 0x00369330 */
int __fastcall sub_60369470(_DWORD *a1);  /* 0x00369470 */
int __fastcall sub_6036958C(int a1);  /* 0x0036958c */
int __fastcall sub_6036968C(int a1);  /* 0x0036968c */
int __fastcall sub_603697FC(int a1, int a2, int a3, int a4);  /* 0x003697fc */
int __fastcall sub_60369828(int a1);  /* 0x00369828 */
int __fastcall sub_60369858(int a1, int a2, int a3);  /* 0x00369858 */
int __fastcall sub_60369A00(int a1, int a2, int a3);  /* 0x00369a00 */
bool __fastcall sub_60369CA0(int a1, int a2, int a3);  /* 0x00369ca0 */
int __fastcall sub_60369DEC(int a1, int a2, int a3);  /* 0x00369dec */
int __fastcall sub_60369FCC(int a1, int a2, int a3);  /* 0x00369fcc */
int __fastcall sub_6036A0B8(int a1, int a2, int a3);  /* 0x0036a0b8 */
bool __fastcall sub_6036A21C(int a1);  /* 0x0036a21c */
bool __fastcall sub_6036A2A4(int a1);  /* 0x0036a2a4 */
int __fastcall sub_6036A318(int a1, int a2);  /* 0x0036a318 */
int __fastcall sub_6036A6A8(int a1);  /* 0x0036a6a8 */
bool __fastcall sub_6036A7E8(int a1);  /* 0x0036a7e8 */
int __fastcall sub_6036A904(int a1);  /* 0x0036a904 */
int __fastcall sub_6036AA34(int a1);  /* 0x0036aa34 */
int __fastcall sub_6036AAE8(_DWORD *a1);  /* 0x0036aae8 */
int __fastcall sub_6036AC80(int a1);  /* 0x0036ac80 */
int __fastcall sub_6036B11C(int a1);  /* 0x0036b11c */
int __fastcall sub_6036B2A8(int a1);  /* 0x0036b2a8 */
int __fastcall sub_6036B434(int a1);  /* 0x0036b434 */
bool __fastcall sub_6036B4D0(int a1, int a2);  /* 0x0036b4d0 */
void __fastcall sub_6036B648(_BYTE *a1);  /* 0x0036b648 */
int __fastcall sub_6036B6F4(_BYTE *a1);  /* 0x0036b6f4 */
int __fastcall sub_6036B7AC(int a1);  /* 0x0036b7ac */
int __fastcall penguin_glasses_ref(int *a1);  /* 0x0036b894 */
int __fastcall sub_6036B9FC(int a1);  /* 0x0036b9fc */
int __fastcall sub_6036BA4C(int a1);  /* 0x0036ba4c */
bool __fastcall sub_6036BBC8(int a1);  /* 0x0036bbc8 */
int __fastcall sub_6036BBDC(int a1);  /* 0x0036bbdc */
int __fastcall sub_6036BC94(int a1, int a2, int a3, int a4);  /* 0x0036bc94 */
bool __fastcall sub_6036BD78(int a1, int a2);  /* 0x0036bd78 */
int __fastcall sub_6036BF60(Actor *a1);  /* 0x0036bf60 */
int __fastcall ice_C1_ref(int a1);  /* 0x0036c0f0 */
unsigned int __fastcall sub_6036C5DC(int a1, int a2);  /* 0x0036c5dc */
unsigned int __fastcall sub_6036C67C(int a1, int a2);  /* 0x0036c67c */
unsigned int __fastcall sub_6036C860(int a1, int a2, int a3);  /* 0x0036c860 */
int __fastcall sub_6036CAC0(int a1);  /* 0x0036cac0 */
int __fastcall sub_6036CBDC(int a1);  /* 0x0036cbdc */
int __fastcall sub_6036CF8C(int a1, int a2, int a3, int a4);  /* 0x0036cf8c */
int __fastcall sub_6036CFB4(int a1, int a2);  /* 0x0036cfb4 */
int __fastcall sub_6036D184(int a1);  /* 0x0036d184 */
int __fastcall sub_6036D3A8(int a1);  /* 0x0036d3a8 */
int __fastcall sub_6036D490(int a1);  /* 0x0036d490 */
int __fastcall sub_6036D49C(int a1);  /* 0x0036d49c */
int __fastcall sub_6036D548(int a1);  /* 0x0036d548 */
int __fastcall sub_6036D554(int a1, int a2);  /* 0x0036d554 */
bool __fastcall sub_6036D578(int a1, int a2);  /* 0x0036d578 */
int __fastcall sub_6036DA18(int a1);  /* 0x0036da18 */
int __fastcall sub_6036DB14(int result);  /* 0x0036db14 */
int __fastcall sub_6036DB28(unsigned __int16 *a1);  /* 0x0036db28 */
int __fastcall sub_6036DB88(int32x4_t *a1);  /* 0x0036db88 */
int __fastcall sub_6036DC6C(int32x4_t *a1);  /* 0x0036dc6c */
int __fastcall sub_6036DD84(_DWORD *a1);  /* 0x0036dd84 */
unsigned int __fastcall sub_6036DED4(int32x4_t *a1);  /* 0x0036ded4 */
int __fastcall sub_6036E230(int a1);  /* 0x0036e230 */
int __fastcall sub_6036E298(int a1);  /* 0x0036e298 */
int __fastcall sub_6036E448(int a1);  /* 0x0036e448 */
int __fastcall sub_6036E4AC(int a1);  /* 0x0036e4ac */
int __fastcall sub_6036E680(int a1);  /* 0x0036e680 */
int __fastcall sub_6036E7D0(int a1);  /* 0x0036e7d0 */
int __fastcall sub_6036EA48(int a1, int a2);  /* 0x0036ea48 */
int __fastcall sub_6036EA64(int a1);  /* 0x0036ea64 */
int __fastcall sub_6036EBB8(int a1, int a2);  /* 0x0036ebb8 */
int __fastcall sub_6036ECF8(int a1);  /* 0x0036ecf8 */
int __fastcall sub_6036EF50(int a1);  /* 0x0036ef50 */
int __fastcall sub_6036F208(float *a1);  /* 0x0036f208 */
int __fastcall SE_OBJ_POLTERGEIST_FLY_ref(int a1);  /* 0x0036f3a4 */
int __fastcall sub_6036F7E4(int a1, int a2, int a3, int a4);  /* 0x0036f7e4 */
int __fastcall sub_6036F820(int a1, int a2, int a3);  /* 0x0036f820 */
int __fastcall sub_6036F98C(int a1, int a2, int a3);  /* 0x0036f98c */
int __fastcall sub_6036FA74(int a1, int a2, int a3);  /* 0x0036fa74 */
int __fastcall sub_6036FB50(int a1, int a2, int a3);  /* 0x0036fb50 */
int __fastcall sub_6036FC38(char *a1);  /* 0x0036fc38 */
int __fastcall sub_6036FC70(int a1);  /* 0x0036fc70 */
int __fastcall sub_6036FD84(int a1);  /* 0x0036fd84 */
bool __fastcall sub_60370004(int a1);  /* 0x00370004 */
int __fastcall sub_603701F4(int a1);  /* 0x003701f4 */
int __fastcall sub_603702F4(int a1, int a2, int a3);  /* 0x003702f4 */
int __fastcall sub_60370318(int a1);  /* 0x00370318 */
int __fastcall sub_6037032C(int a1, int *a2);  /* 0x0037032c */
bool __fastcall sub_60370358(int a1, int a2);  /* 0x00370358 */
void __fastcall sub_603704D0(_BYTE *a1);  /* 0x003704d0 */
int __fastcall sub_60370594(_BYTE *a1);  /* 0x00370594 */
int __fastcall sub_6037065C(int a1);  /* 0x0037065c */
void __fastcall sub_603706CC(int a1);  /* 0x003706cc */
int __fastcall sub_60370774(int a1, int a2, int a3);  /* 0x00370774 */
int __fastcall sub_603707D8(int a1, int a2, int a3);  /* 0x003707d8 */
int __fastcall sub_60370B50(int a1);  /* 0x00370b50 */
int __fastcall sub_6037131C(int *a1);  /* 0x0037131c */
int __fastcall sub_60371580(_DWORD *a1);  /* 0x00371580 */
int __fastcall sub_603717A4(int a1, int a2);  /* 0x003717a4 */
unsigned int __fastcall sub_6037187C(int a1);  /* 0x0037187c */
int __fastcall sub_603719D8(_DWORD *a1);  /* 0x003719d8 */
int __fastcall sub_60371AB0(int result);  /* 0x00371ab0 */
int __fastcall sub_60371E0C(int a1);  /* 0x00371e0c */
int __fastcall sub_60371F48(int a1);  /* 0x00371f48 */
int __fastcall sub_60372218(int a1);  /* 0x00372218 */
int __fastcall sub_603722AC(int a1, int a2, int a3);  /* 0x003722ac */
int __fastcall sub_60372324(int a1);  /* 0x00372324 */
int __fastcall sub_60372330(int a1, int a2);  /* 0x00372330 */
bool __fastcall sub_60372390(int a1, int a2);  /* 0x00372390 */
void __fastcall sub_6037257C(_BYTE *a1);  /* 0x0037257c */
int __fastcall sub_6037264C(_BYTE *a1);  /* 0x0037264c */
int __fastcall sub_60372720(int a1);  /* 0x00372720 */
int __fastcall sub_60372724(int a1, int a2);  /* 0x00372724 */
int __fastcall sub_603727C0(int a1);  /* 0x003727c0 */
int __fastcall sub_603727E8(int a1, int a2);  /* 0x003727e8 */
int __fastcall sub_60372854(int a1, int a2, int a3);  /* 0x00372854 */
int __fastcall sub_603728E8(int a1, _DWORD *a2);  /* 0x003728e8 */
void __fastcall sub_60372B18(_BYTE *a1, int a2);  /* 0x00372b18 */
int __fastcall sub_60372D64(int a1);  /* 0x00372d64 */
int __fastcall sub_60372E3C(_BYTE *a1);  /* 0x00372e3c */
int __fastcall sub_60372E6C(float *a1);  /* 0x00372e6c */
int __fastcall sub_6037325C(int a1, int a2, int a3, int a4);  /* 0x0037325c */
int __fastcall sub_60373544(int a1, int a2);  /* 0x00373544 */
int __fastcall sub_60373664(_BYTE *a1, unsigned int a2);  /* 0x00373664 */
int __fastcall sub_60373680(int a1, int a2, int a3, int a4);  /* 0x00373680 */
bool __fastcall sub_603736AC(int a1);  /* 0x003736ac */
int __fastcall sub_603737E4(int a1, int a2);  /* 0x003737e4 */
int __fastcall sub_603739E4(float *a1, int a2, int a3);  /* 0x003739e4 */
int __fastcall sub_60373A34(int a1);  /* 0x00373a34 */
int __fastcall sub_60373A50(int a1);  /* 0x00373a50 */
int __fastcall sub_60373A6C(int a1, int a2, int a3);  /* 0x00373a6c */
int __fastcall sub_60373ADC(int result);  /* 0x00373adc */
int __fastcall sub_60373B2C(int result);  /* 0x00373b2c */
int __fastcall sub_60373B78(int a1, int a2, int a3, int a4);  /* 0x00373b78 */
int __fastcall sub_60373CE4(int a1);  /* 0x00373ce4 */
int __fastcall sub_60373F74(int a1, int *a2);  /* 0x00373f74 */
bool __fastcall sub_60373FA0(int a1, int a2);  /* 0x00373fa0 */
void __fastcall sub_60374118(_BYTE *a1);  /* 0x00374118 */
int __fastcall sub_603741B8(_BYTE *a1);  /* 0x003741b8 */
int __fastcall sub_60374270(int a1);  /* 0x00374270 */
int __fastcall Actor_gurupupukupukumanage_Tag_build(int a1);  /* 0x00374458 */
int __fastcall sub_603744AC(int a1);  /* 0x003744ac */
int __fastcall sub_60374514(int a1);  /* 0x00374514 */
bool __fastcall sub_6037491C(int a1, int a2);  /* 0x0037491c */
int __fastcall sub_60374A90(_DWORD *a1);  /* 0x00374a90 */
int __fastcall sub_60374BAC(int result);  /* 0x00374bac */
int __fastcall sub_60374E94(int a1);  /* 0x00374e94 */
int __fastcall sub_60374F80(int a1, int a2);  /* 0x00374f80 */
int __fastcall sub_603752A4(int a1);  /* 0x003752a4 */
int __fastcall sub_603752D8(int a1, int a2, int a3);  /* 0x003752d8 */
bool __fastcall sub_603755D4(int a1, int a2);  /* 0x003755d4 */
int __fastcall sub_603756D8(Actor *a1);  /* 0x003756d8 */
int __fastcall sub_60375824(int a1);  /* 0x00375824 */
int __fastcall sub_60375B30(int result);  /* 0x00375b30 */
int __fastcall sub_60375CB8(_DWORD *a1);  /* 0x00375cb8 */
int __fastcall sub_60375E24(int a1);  /* 0x00375e24 */
int __fastcall sub_60375F5C(float *a1);  /* 0x00375f5c */
int __fastcall sub_60375FA8(int result);  /* 0x00375fa8 */
int __fastcall sub_60375FB0(int a1);  /* 0x00375fb0 */
int __fastcall sub_603760B0(int result);  /* 0x003760b0 */
int __fastcall sub_60376108(int a1);  /* 0x00376108 */
int __fastcall sub_60376124(int a1);  /* 0x00376124 */
int __fastcall sub_60376484(int a1);  /* 0x00376484 */
int __fastcall sub_603764E0(int *a1);  /* 0x003764e0 */
bool __fastcall sub_6037653C(int a1);  /* 0x0037653c */
int __fastcall sub_603765D0(int a1);  /* 0x003765d0 */
int __fastcall sub_60376634(int *a1);  /* 0x00376634 */
int __fastcall sub_603766F4(int a1);  /* 0x003766f4 */
int __fastcall sub_60376910(int a1);  /* 0x00376910 */
int __fastcall sub_60376974(int a1);  /* 0x00376974 */
bool __fastcall sub_603769B4(int a1, int a2);  /* 0x003769b4 */
int __fastcall sub_60376BA0(_BYTE *a1);  /* 0x00376ba0 */
int __fastcall sub_60376C48(int a1);  /* 0x00376c48 */
int __fastcall sub_60377044(struct sead_IDisposer *a1);  /* 0x00377044 */
int __fastcall sub_603771C8(int a1);  /* 0x003771c8 */
int __fastcall sub_603772C4(_DWORD *a1);  /* 0x003772c4 */
int __fastcall sub_60377564(int result);  /* 0x00377564 */
bool __fastcall sub_60377730(int a1, int a2);  /* 0x00377730 */
signed int __fastcall sub_603778B4(int a1, unsigned int a2, unsigned __int8 **a3);  /* 0x003778b4 */
int __fastcall sub_60377B20(int a1, int a2, unsigned int a3);  /* 0x00377b20 */
int __fastcall sub_60377B58(int a1, int a2, _BYTE *a3, int a4, int *a5);  /* 0x00377b58 */
int __fastcall sub_60377C24(int a1);  /* 0x00377c24 */
bool __fastcall sub_60377C40(int a1);  /* 0x00377c40 */
bool __fastcall sub_60377C74(int a1);  /* 0x00377c74 */
int __fastcall sub_60377CA8(int a1, int a2);  /* 0x00377ca8 */
int __fastcall sub_60377CF4(int a1, int a2);  /* 0x00377cf4 */
int __fastcall sub_60377D44(int a1, int a2);  /* 0x00377d44 */
int __fastcall sub_60377D94(int a1, unsigned int *a2);  /* 0x00377d94 */
bool __fastcall sub_60377E2C(int a1);  /* 0x00377e2c */
bool __fastcall sub_60377F40(int a1);  /* 0x00377f40 */
int __fastcall sub_60378048(_DWORD *a1);  /* 0x00378048 */
int __fastcall sub_603780A0(int a1);  /* 0x003780a0 */
int __fastcall sub_603781B4(int a1);  /* 0x003781b4 */
int __fastcall sub_603781F8(int a1);  /* 0x003781f8 */
int __fastcall sub_60378294(int result);  /* 0x00378294 */
int __fastcall sub_6037835C(int a1);  /* 0x0037835c */
int __fastcall sub_603783A4(int result);  /* 0x003783a4 */
int __fastcall sub_603783B4(int a1);  /* 0x003783b4 */
int __fastcall sub_60378420(_DWORD *a1);  /* 0x00378420 */
int __fastcall sub_6037856C(CollisionActor *a1);  /* 0x0037856c */
int __fastcall sub_6037865C(int a1);  /* 0x0037865c */
bool __fastcall sub_6037867C(int a1, int a2);  /* 0x0037867c */
int __fastcall sub_60378780(Actor *a1);  /* 0x00378780 */
int __fastcall sub_60378A94(int *a1);  /* 0x00378a94 */
int __fastcall sub_60378BC4(int a1, int *a2);  /* 0x00378bc4 */
int __fastcall sub_60378D2C(int a1);  /* 0x00378d2c */
bool __fastcall sub_60378D34(int a1);  /* 0x00378d34 */
int __fastcall sub_60378E30(int a1);  /* 0x00378e30 */
int __fastcall sub_60378E4C(int a1);  /* 0x00378e4c */
int __fastcall sub_60378E68(int a1);  /* 0x00378e68 */
int __fastcall sub_60378FD4(int a1, int *a2, int a3);  /* 0x00378fd4 */
int __fastcall sub_6037909C(_DWORD *a1);  /* 0x0037909c */
int __fastcall sub_603791A0(int *a1);  /* 0x003791a0 */
int __fastcall sub_6037925C(int a1, int a2);  /* 0x0037925c */
int __fastcall sub_60379294(int a1, _DWORD *a2);  /* 0x00379294 */
int __fastcall sub_603792D8(int a1, int a2);  /* 0x003792d8 */
int __fastcall sub_603792E4(int result, _DWORD *a2);  /* 0x003792e4 */
int __fastcall sub_603792F4(int a1, int a2);  /* 0x003792f4 */
int __fastcall sub_6037931C(int a1);  /* 0x0037931c */
int __fastcall sub_60379324(int a1);  /* 0x00379324 */
int __fastcall sub_6037943C(int a1, unsigned int a2);  /* 0x0037943c */
bool __fastcall sub_60379470(int a1);  /* 0x00379470 */
bool __fastcall sub_60379604(int a1, unsigned int a2);  /* 0x00379604 */
int __fastcall sub_60379668(int a1);  /* 0x00379668 */
int __fastcall sub_603796A4(int a1);  /* 0x003796a4 */
int __fastcall sub_603796DC(_DWORD *a1, int a2);  /* 0x003796dc */
int __fastcall sub_603797F8(int result);  /* 0x003797f8 */
int __fastcall sub_60379890(int a1, int a2, int a3);  /* 0x00379890 */
int __fastcall sub_60379998(int a1);  /* 0x00379998 */
int __fastcall sub_60379A50(unsigned int *a1, float *a2, int (__fastcall *a3)(int));  /* 0x00379a50 */
int __fastcall sub_60379C1C(int a1);  /* 0x00379c1c */
unsigned int __fastcall sub_60379E48(int a1);  /* 0x00379e48 */
unsigned int __fastcall sub_6037A010(int a1, unsigned int a2);  /* 0x0037a010 */
int __fastcall sub_6037A1D8(int a1);  /* 0x0037a1d8 */
int __fastcall sub_6037A260(int a1);  /* 0x0037a260 */
int __fastcall sub_6037A314(int a1);  /* 0x0037a314 */
int __fastcall sub_6037A3CC(int a1);  /* 0x0037a3cc */
int __fastcall sub_6037A494(int a1);  /* 0x0037a494 */
int __fastcall sub_6037A4C4(int a1);  /* 0x0037a4c4 */
bool __fastcall sub_6037A50C(int a1, int a2);  /* 0x0037a50c */
int __fastcall sub_6037A6BC(_BYTE *a1);  /* 0x0037a6bc */
bool __fastcall sub_6037A7D8(int a1);  /* 0x0037a7d8 */
bool __fastcall sub_6037A800(int a1);  /* 0x0037a800 */
int __fastcall sub_6037A9F4(int a1);  /* 0x0037a9f4 */
int __fastcall sub_6037AC2C(int a1);  /* 0x0037ac2c */
int __fastcall gabon_rock_ref(int a1);  /* 0x0037ac44 */
int __fastcall sub_6037AD30(int a1, int a2, int a3, int a4);  /* 0x0037ad30 */
int __fastcall sub_6037AD90(int a1);  /* 0x0037ad90 */
bool __fastcall sub_6037AE54(int a1, int a2);  /* 0x0037ae54 */
int __fastcall sub_6037B040(_BYTE *a1);  /* 0x0037b040 */
int __fastcall sub_6037B18C(int result);  /* 0x0037b18c */
int __fastcall sub_6037B294(_BYTE *a1);  /* 0x0037b294 */
int __fastcall sub_6037B4F4(int a1, int a2);  /* 0x0037b4f4 */
int __fastcall sub_6037B694(int a1);  /* 0x0037b694 */
int __fastcall sub_6037B6A0(int a1);  /* 0x0037b6a0 */
int __fastcall sub_6037B814(int a1);  /* 0x0037b814 */
int __fastcall sub_6037BA78(_DWORD *a1);  /* 0x0037ba78 */
int __fastcall sub_6037BAFC(int a1);  /* 0x0037bafc */
int __fastcall sub_6037BB00(int a1);  /* 0x0037bb00 */
int __fastcall sub_6037BB10(int a1);  /* 0x0037bb10 */
int __fastcall sub_6037BC68(int a1);  /* 0x0037bc68 */
int __fastcall sub_6037BF50(int a1);  /* 0x0037bf50 */
int __fastcall sub_6037BF58(int *a1);  /* 0x0037bf58 */
int __fastcall sub_6037BF5C(int a1);  /* 0x0037bf5c */
void __fastcall sub_6037BF64(int a1);  /* 0x0037bf64 */
int __fastcall sub_6037BFF4(int a1);  /* 0x0037bff4 */
void __fastcall sub_6037C148(int a1);  /* 0x0037c148 */
int __fastcall sub_6037C45C(int a1);  /* 0x0037c45c */
int __fastcall sub_6037C504(_BYTE *a1);  /* 0x0037c504 */
int __fastcall sub_6037C5AC(int result);  /* 0x0037c5ac */
unsigned __int32 __fastcall sub_6037C5BC(int a1);  /* 0x0037c5bc */
int __fastcall sub_6037C7DC(_BYTE *a1);  /* 0x0037c7dc */
int __fastcall sub_6037C8EC(int result);  /* 0x0037c8ec */
int __fastcall sub_6037CAF0(int a1);  /* 0x0037caf0 */
int __fastcall sub_6037CD68(int a1);  /* 0x0037cd68 */
int __fastcall sub_6037CDC0(int a1);  /* 0x0037cdc0 */
int __fastcall sub_6037CDCC(int a1);  /* 0x0037cdcc */
int __fastcall sub_6037CF44(int a1);  /* 0x0037cf44 */
int __fastcall sub_6037D194(_DWORD *a1);  /* 0x0037d194 */
int __fastcall sub_6037D26C(int a1);  /* 0x0037d26c */
int __fastcall sub_6037D274(int a1);  /* 0x0037d274 */
int __fastcall sub_6037D3D0(int a1);  /* 0x0037d3d0 */
int __fastcall sub_6037D54C(int a1);  /* 0x0037d54c */
int __fastcall sub_6037D5AC(int *a1);  /* 0x0037d5ac */
int __fastcall sub_6037D624(int a1);  /* 0x0037d624 */
int __fastcall sub_6037D6FC(int a1);  /* 0x0037d6fc */
int __fastcall sub_6037D9DC(int result);  /* 0x0037d9dc */
int __fastcall sub_6037DA18(int a1);  /* 0x0037da18 */
int __fastcall sub_6037DAC8(int a1);  /* 0x0037dac8 */
int __fastcall sub_6037DCA8(int a1);  /* 0x0037dca8 */
int __fastcall sub_6037DFBC(int a1);  /* 0x0037dfbc */
int __fastcall sub_6037E064(_BYTE *a1);  /* 0x0037e064 */
bool __fastcall sub_6037E10C(int a1, int a2);  /* 0x0037e10c */
int __fastcall sub_6037E2F8(_BYTE *a1);  /* 0x0037e2f8 */
int __fastcall sub_6037E3E4(int result);  /* 0x0037e3e4 */
int __fastcall sub_6037E400(int a1);  /* 0x0037e400 */
int __fastcall sub_6037E688(_BYTE *a1);  /* 0x0037e688 */
int __fastcall sub_6037E718(int result);  /* 0x0037e718 */
int __fastcall sub_6037E7F0(_BYTE *a1);  /* 0x0037e7f0 */
int __fastcall sub_6037E880(int result);  /* 0x0037e880 */
int __fastcall sub_6037E958(_BYTE *a1);  /* 0x0037e958 */
int __fastcall sub_6037E9E8(int result);  /* 0x0037e9e8 */
int __fastcall sub_6037EAC0(_BYTE *a1);  /* 0x0037eac0 */
int __fastcall sub_6037EB50(int result);  /* 0x0037eb50 */
int __fastcall sub_6037ED08(int a1, int a2);  /* 0x0037ed08 */
int __fastcall sub_6037EDC4(int a1, int a2, int a3);  /* 0x0037edc4 */
int __fastcall sub_6037EE10(int a1, int a2, int a3, int a4);  /* 0x0037ee10 */
int __fastcall sub_6037EE28(int a1);  /* 0x0037ee28 */
void __fastcall sub_6037EE34(int a1);  /* 0x0037ee34 */
int __fastcall sub_6037EE48(int a1, int a2, int a3);  /* 0x0037ee48 */
int __fastcall sub_6037EEAC(int a1, int a2, int a3);  /* 0x0037eeac */
int __fastcall sub_6037EEC8(_DWORD *a1);  /* 0x0037eec8 */
int __fastcall sub_6037EF30(int a1);  /* 0x0037ef30 */
int __fastcall sub_6037EF60(int a1);  /* 0x0037ef60 */
int __fastcall sub_6037EF94(int a1);  /* 0x0037ef94 */
int __fastcall sub_6037F140(int a1, int a2);  /* 0x0037f140 */
bool __fastcall sub_6037F15C(int a1, int a2);  /* 0x0037f15c */
void __fastcall sub_6037F348(Actor *a1);  /* 0x0037f348 */
int __fastcall sub_6037F3B8(Actor *a1);  /* 0x0037f3b8 */
int __fastcall sub_6037F42C(int a1, int a2);  /* 0x0037f42c */
int __fastcall sub_6037F738(int a1);  /* 0x0037f738 */
int __fastcall sub_6037F7DC(int a1);  /* 0x0037f7dc */
int __fastcall sub_6037FD0C(int a1);  /* 0x0037fd0c */
int __fastcall sub_6037FDEC(int a1);  /* 0x0037fdec */
int __fastcall sub_6037FF44(int a1);  /* 0x0037ff44 */
int __fastcall sub_60380024(int a1);  /* 0x00380024 */
int __fastcall sub_6038017C(int a1);  /* 0x0038017c */
int __fastcall sub_60380250(int a1);  /* 0x00380250 */
int __fastcall sub_6038025C(int result);  /* 0x0038025c */
int __fastcall sub_60380270(int a1);  /* 0x00380270 */
int __fastcall sub_60380280(int result);  /* 0x00380280 */
int __fastcall sub_603802E4(int result);  /* 0x003802e4 */
int __fastcall sub_6038032C(int a1);  /* 0x0038032c */
int __fastcall sub_60380A04(int a1);  /* 0x00380a04 */
int __fastcall sub_60380F6C(int a1);  /* 0x00380f6c */
int __fastcall sub_603812B4(int a1);  /* 0x003812b4 */
int __fastcall sub_60381950(int a1, int a2);  /* 0x00381950 */
int __fastcall sub_60381BAC(unsigned int *a1, int a2, unsigned int a3);  /* 0x00381bac */
int __fastcall sub_60381D18(int a1, int a2, unsigned int a3);  /* 0x00381d18 */
unsigned int __fastcall sub_60381F48(int a1, unsigned int a2);  /* 0x00381f48 */
int __fastcall sub_603823D4(int a1, int a2);  /* 0x003823d4 */
bool __fastcall sub_6038397C(int a1);  /* 0x0038397c */
int __fastcall sub_60383BAC(int a1, int a2);  /* 0x00383bac */
int __fastcall sub_60383EAC(int a1, int a2);  /* 0x00383eac */
int __fastcall sub_603841C8(_DWORD *a1, int (__fastcall ***a2)(_DWORD, int));  /* 0x003841c8 */
int __fastcall sub_60384458(int a1, int a2);  /* 0x00384458 */
int __fastcall sub_603844D8(int a1, int a2);  /* 0x003844d8 */
int __fastcall sub_603845B8(int a1, int (__fastcall ***a2)(_DWORD, int));  /* 0x003845b8 */
int __fastcall sub_603846A0(int a1, int a2);  /* 0x003846a0 */
int __fastcall sub_60384770(int a1, int a2, int a3);  /* 0x00384770 */
int __fastcall sub_60385010(_DWORD *a1);  /* 0x00385010 */
int __fastcall sub_6038511C(int a1);  /* 0x0038511c */
int __fastcall sub_603852CC(int a1);  /* 0x003852cc */
int __fastcall sub_6038550C(int a1);  /* 0x0038550c */
int __fastcall sub_603855A0(_DWORD *a1);  /* 0x003855a0 */
int __fastcall sub_6038561C(int a1);  /* 0x0038561c */
int __fastcall sub_60385654(int a1);  /* 0x00385654 */
int __fastcall sub_60385734(_DWORD *a1);  /* 0x00385734 */
int __fastcall sub_60385760(int a1);  /* 0x00385760 */
int __fastcall sub_603858E0(int a1);  /* 0x003858e0 */
int __fastcall sub_603859A0(int a1);  /* 0x003859a0 */
bool __fastcall sub_60385AC4(int a1, int a2);  /* 0x00385ac4 */
int __fastcall sub_60385C3C(Actor *a1);  /* 0x00385c3c */
int __fastcall sub_60385D60(int a1);  /* 0x00385d60 */
int __fastcall sub_60386340(int a1, unsigned int a2, int a3, int a4, int a5);  /* 0x00386340 */
int __fastcall sub_60386364(int a1, float *a2, unsigned int a3, int a4);  /* 0x00386364 */
int __fastcall sub_60386480(int result, int a2, char a3, int a4);  /* 0x00386480 */
int __fastcall sub_603864C4(_DWORD *a1);  /* 0x003864c4 */
int __fastcall sub_60386654(char *a1, int a2);  /* 0x00386654 */
int __fastcall sub_60386718(_DWORD *a1);  /* 0x00386718 */
int __fastcall SE_EMY_SANBO_LAND_ref(int a1);  /* 0x003868e4 */
int __fastcall sub_60386CB8(int a1);  /* 0x00386cb8 */
int __fastcall sub_60386CF4(_DWORD *a1);  /* 0x00386cf4 */
int __fastcall sub_60386E84(int a1);  /* 0x00386e84 */
int __fastcall sub_60387060(int a1);  /* 0x00387060 */
int __fastcall sub_603870DC(int a1);  /* 0x003870dc */
int __fastcall sub_60387118(int a1);  /* 0x00387118 */
int __fastcall sub_6038740C(int a1);  /* 0x0038740c */
bool __fastcall sub_603874A8(int a1, int a2);  /* 0x003874a8 */
int __fastcall sub_60387714(int a1);  /* 0x00387714 */
int __fastcall sub_60387754(int a1, int a2, int a3);  /* 0x00387754 */
int __fastcall sub_603877D4(float *a1, int a2);  /* 0x003877d4 */
int __fastcall sub_60387884(int result, int a2);  /* 0x00387884 */
int __fastcall sub_6038788C(int a1);  /* 0x0038788c */
int __fastcall sub_60387944(int result);  /* 0x00387944 */
void __fastcall sub_60387988(int a1);  /* 0x00387988 */
bool __fastcall sub_60387A1C(int a1);  /* 0x00387a1c */
int __fastcall sub_60387A60(int a1);  /* 0x00387a60 */
bool __fastcall sub_60387AA0(_DWORD *a1, int a2);  /* 0x00387aa0 */
int __fastcall sub_60387C08(int a1, int a2);  /* 0x00387c08 */
bool __fastcall sub_60387C6C(_DWORD *a1, int a2);  /* 0x00387c6c */
int __fastcall sub_60387DD4(int a1, int a2);  /* 0x00387dd4 */
int __fastcall sub_60387E64(_DWORD *a1);  /* 0x00387e64 */
int __fastcall sub_60387E9C(_DWORD *a1);  /* 0x00387e9c */
int __fastcall sub_60387EE8(_DWORD *a1);  /* 0x00387ee8 */
int __fastcall sub_60387FB8(int a1);  /* 0x00387fb8 */
int __fastcall sub_60388120(int a1, int a2, int a3, int a4);  /* 0x00388120 */
int __fastcall sub_6038899C(_DWORD *a1);  /* 0x0038899c */
int __fastcall sub_60388A34(int a1);  /* 0x00388a34 */
int __fastcall sub_60388F04(_DWORD *a1);  /* 0x00388f04 */
int __fastcall sub_60388FC4(int a1);  /* 0x00388fc4 */
int __fastcall sub_603893B0(_DWORD *a1);  /* 0x003893b0 */
int __fastcall sub_60389424(int a1);  /* 0x00389424 */
int __fastcall sub_60389650(_DWORD *a1);  /* 0x00389650 */
int __fastcall sub_603896B8(int a1);  /* 0x003896b8 */
int __fastcall sub_60389934(int a1);  /* 0x00389934 */
int __fastcall sub_60389A4C(int a1);  /* 0x00389a4c */
int __fastcall sub_6038A184(int a1);  /* 0x0038a184 */
int __fastcall sub_6038A1D4(int a1);  /* 0x0038a1d4 */
int __fastcall sub_6038A5D0(float *a1);  /* 0x0038a5d0 */
int __fastcall sub_6038A714(_DWORD *a1);  /* 0x0038a714 */
int __fastcall sub_6038AC64(int a1);  /* 0x0038ac64 */
int __fastcall sub_6038B0F8(int *a1);  /* 0x0038b0f8 */
int __fastcall sub_6038B2A8(int a1);  /* 0x0038b2a8 */
int __fastcall sub_6038B7D0(int a1);  /* 0x0038b7d0 */
int __fastcall sub_6038BA98(int a1);  /* 0x0038ba98 */
int __fastcall sub_6038BDC4(int a1);  /* 0x0038bdc4 */
int __fastcall sub_6038C070(int a1, unsigned int *a2);  /* 0x0038c070 */
int __fastcall sub_6038C3A4(float *a1);  /* 0x0038c3a4 */
unsigned int __fastcall sub_6038C5D4(int a1);  /* 0x0038c5d4 */
bool __fastcall sub_6038C924(int a1);  /* 0x0038c924 */
bool __fastcall sub_6038CB08(int a1);  /* 0x0038cb08 */
int __fastcall sub_6038CCD4(int a1);  /* 0x0038ccd4 */
void __fastcall sub_6038CD74(int a1);  /* 0x0038cd74 */
int __fastcall sub_6038CEB4(int a1);  /* 0x0038ceb4 */
int __fastcall sub_6038CF8C(int a1);  /* 0x0038cf8c */
unsigned int __fastcall sub_6038CFB8(int a1, int a2, int a3);  /* 0x0038cfb8 */
int __fastcall sub_6038D0D0(int a1, int a2, int a3);  /* 0x0038d0d0 */
bool __fastcall sub_6038D3B4(int a1, int a2, int a3);  /* 0x0038d3b4 */
int __fastcall sub_6038D5C8(int a1, int a2);  /* 0x0038d5c8 */
int __fastcall sub_6038DA08(int a1);  /* 0x0038da08 */
bool __fastcall sub_6038DADC(int a1, int a2);  /* 0x0038dadc */
void __fastcall sub_6038DCC8(_BYTE *a1);  /* 0x0038dcc8 */
int __fastcall sub_6038DDB8(_BYTE *a1);  /* 0x0038ddb8 */
int __fastcall sub_6038DEAC(int a1);  /* 0x0038deac */
int __fastcall sub_6038DF1C(int a1);  /* 0x0038df1c */
int __fastcall sub_6038E580(int a1);  /* 0x0038e580 */
int __fastcall sub_6038E7E8(int a1);  /* 0x0038e7e8 */
int __fastcall sub_6038E898(int a1);  /* 0x0038e898 */
int __fastcall throw_right_ref(int a1);  /* 0x0038e950 */
int __fastcall SE_EMY_GABON_ROCK_ref_2(int a1);  /* 0x0038ea64 */
int __fastcall sub_6038F070(int a1);  /* 0x0038f070 */
int __fastcall sub_6038F140(int a1);  /* 0x0038f140 */
int __fastcall sub_6038F238(int a1, int a2);  /* 0x0038f238 */
int __fastcall sub_6038F2EC(int a1);  /* 0x0038f2ec */
int __fastcall sub_6038F68C(int a1);  /* 0x0038f68c */
int __fastcall sub_6038F8CC(int a1);  /* 0x0038f8cc */
int __fastcall sub_6038FA88(int a1);  /* 0x0038fa88 */
int __fastcall sub_6038FCDC(int a1);  /* 0x0038fcdc */
int __fastcall sub_6038FD90(int a1, int a2, int a3, int a4);  /* 0x0038fd90 */
int __fastcall sub_6038FF10(int a1);  /* 0x0038ff10 */
void __fastcall sub_6038FFB4(int a1);  /* 0x0038ffb4 */
int __fastcall sub_603900A4(int a1, int a2, int a3);  /* 0x003900a4 */
int __fastcall sub_60390170(float *a1, int a2, int a3);  /* 0x00390170 */
int __fastcall sub_603901C0(_BYTE *a1, int a2, int a3);  /* 0x003901c0 */
int __fastcall sub_60390218(_DWORD *a1, int a2, int a3);  /* 0x00390218 */
int __fastcall sub_60390238(int a1);  /* 0x00390238 */
int __fastcall sub_60390564(int a1);  /* 0x00390564 */
int __fastcall sub_6039057C(int a1);  /* 0x0039057c */
int __fastcall sub_60390824(int a1);  /* 0x00390824 */
int __fastcall sub_60390868(int a1);  /* 0x00390868 */
int __fastcall sub_60390A8C(int a1);  /* 0x00390a8c */
int __fastcall sub_60390C4C(_BYTE *a1, int a2);  /* 0x00390c4c */
int __fastcall sub_60390CCC(unsigned int *a1, int a2);  /* 0x00390ccc */
bool __fastcall sub_60390D48(int a1, int a2);  /* 0x00390d48 */
void __fastcall sub_60390EC0(_BYTE *a1);  /* 0x00390ec0 */
int __fastcall sub_60390F40(_BYTE *a1);  /* 0x00390f40 */
int __fastcall sub_60390FC4(int a1);  /* 0x00390fc4 */
int __fastcall sub_60390FE4(int a1);  /* 0x00390fe4 */
int __fastcall sub_6039251C(_DWORD *a1);  /* 0x0039251c */
int __fastcall sub_603925F0(int a1);  /* 0x003925f0 */
int __fastcall SE_VOC_SHA_NOTICE_ref(int a1);  /* 0x00392674 */
int __fastcall sub_60392824(_DWORD *a1);  /* 0x00392824 */
int __fastcall sub_603928EC(int a1);  /* 0x003928ec */
int __fastcall sub_60392900(_DWORD *a1);  /* 0x00392900 */
int __fastcall sub_603929C8(int a1);  /* 0x003929c8 */
int __fastcall sub_60392A0C(int a1);  /* 0x00392a0c */
int __fastcall sub_60392FB8(int a1);  /* 0x00392fb8 */
int __fastcall sub_6039310C(int32x4_t *a1);  /* 0x0039310c */
int __fastcall SE_EMY_SHADOW_JUMP_ref(int a1);  /* 0x003931c8 */
int __fastcall sub_6039336C(int32x4_t *a1);  /* 0x0039336c */
int __fastcall sub_603934DC(_BYTE *a1);  /* 0x003934dc */
int __fastcall sub_60393784(int32x4_t *a1);  /* 0x00393784 */
int __fastcall sub_603938B8(_DWORD *a1);  /* 0x003938b8 */
int __fastcall sub_60393980(int a1);  /* 0x00393980 */
int __fastcall sub_603939D8(_DWORD *a1);  /* 0x003939d8 */
int __fastcall sub_60393AA0(int a1);  /* 0x00393aa0 */
int __fastcall sub_60393AE8(int a1);  /* 0x00393ae8 */
int __fastcall sub_60393AF4(int a1);  /* 0x00393af4 */
int __fastcall sub_60393B38(_DWORD *a1);  /* 0x00393b38 */
int __fastcall sub_60393C18(int a1);  /* 0x00393c18 */
int __fastcall sub_60393CE8(_DWORD *a1);  /* 0x00393ce8 */
int __fastcall SE_EMY_SHADOW_DOWN_ref(int a1);  /* 0x00393e68 */
void __fastcall sub_603940D0(int a1);  /* 0x003940d0 */
int __fastcall sub_603941DC(_DWORD *a1);  /* 0x003941dc */
int __fastcall sub_603942BC(int a1);  /* 0x003942bc */
int __fastcall sub_6039440C(_DWORD *a1);  /* 0x0039440c */
int __fastcall sub_603944A4(_DWORD *a1);  /* 0x003944a4 */
int __fastcall sub_60394570(int a1);  /* 0x00394570 */
int __fastcall sub_60394788(_DWORD *a1);  /* 0x00394788 */
int __fastcall sub_60394850(int a1);  /* 0x00394850 */
int __fastcall sub_60394A20(_DWORD *a1);  /* 0x00394a20 */
int __fastcall sub_60394B3C(int a1);  /* 0x00394b3c */
int __fastcall sub_60394D80(_DWORD *a1);  /* 0x00394d80 */
int __fastcall sub_60394F88(int a1);  /* 0x00394f88 */
int __fastcall sub_60395080(int a1);  /* 0x00395080 */
int __fastcall sub_60395310(_DWORD *a1);  /* 0x00395310 */
int __fastcall sub_603954D0(_DWORD *a1);  /* 0x003954d0 */
int __fastcall sub_603955C0(int a1);  /* 0x003955c0 */
int __fastcall sub_603957DC(_DWORD *a1);  /* 0x003957dc */
int __fastcall SE_EMY_SHADOW_JITABATA_ref(int a1);  /* 0x003958a4 */
int __fastcall SE_EMY_SHADOW_JITABATA_ref_2(int a1);  /* 0x00395ae4 */
void __fastcall sub_60395ED0(int a1);  /* 0x00395ed0 */
int __fastcall sub_60395EFC(int a1);  /* 0x00395efc */
int __fastcall sub_60395FC4(int a1);  /* 0x00395fc4 */
int __fastcall sub_60396188(_DWORD *a1);  /* 0x00396188 */
int __fastcall sub_60396250(int a1);  /* 0x00396250 */
int __fastcall sub_60396334(_DWORD *a1);  /* 0x00396334 */
int __fastcall sub_603963FC(int a1);  /* 0x003963fc */
unsigned int __fastcall sub_60396560(_DWORD *a1);  /* 0x00396560 */
int __fastcall sub_60396694(int a1);  /* 0x00396694 */
int __fastcall sub_603966E8(int a1);  /* 0x003966e8 */
int __fastcall sub_60396830(int a1);  /* 0x00396830 */
int __fastcall sub_6039683C(int a1);  /* 0x0039683c */
int __fastcall sub_60396938(int a1);  /* 0x00396938 */
int __fastcall sub_60396B3C(int a1);  /* 0x00396b3c */
int __fastcall sub_60396B80(_DWORD *a1);  /* 0x00396b80 */
int __fastcall sub_60396C58(int a1);  /* 0x00396c58 */
int __fastcall sub_60396C6C(_DWORD *a1);  /* 0x00396c6c */
int __fastcall sub_60396D28(int a1);  /* 0x00396d28 */
int __fastcall sub_60396EF0(_DWORD *a1);  /* 0x00396ef0 */
int __fastcall sub_60396FB8(int a1);  /* 0x00396fb8 */
int __fastcall sub_60397088(_DWORD *a1);  /* 0x00397088 */
int __fastcall SE_VOC_SHA_LAUGH_ref(int a1);  /* 0x00397150 */
int __fastcall sub_60397270(_DWORD *a1);  /* 0x00397270 */
int __fastcall sub_60397338(int a1);  /* 0x00397338 */
int __fastcall sub_60397348(int result);  /* 0x00397348 */
int __fastcall sub_603973A0(_DWORD *a1);  /* 0x003973a0 */
int __fastcall SE_EMY_SHADOW_BRAKE_ref(int a1);  /* 0x003974ac */
int __fastcall sub_60397654(int32x4_t *a1);  /* 0x00397654 */
int __fastcall sub_60397798(int a1);  /* 0x00397798 */
int __fastcall sub_603978E4(int a1);  /* 0x003978e4 */
int __fastcall sub_60397B08(int a1);  /* 0x00397b08 */
int __fastcall sub_60397C64(int a1);  /* 0x00397c64 */
int __fastcall sub_60398074(int a1);  /* 0x00398074 */
int __fastcall sub_603984C4(int a1);  /* 0x003984c4 */
int __fastcall sub_60398570(int32x4_t *a1);  /* 0x00398570 */
int __fastcall sub_60398A08(int32x4_t *a1);  /* 0x00398a08 */
int __fastcall sub_60398B3C(int a1);  /* 0x00398b3c */
int __fastcall sub_60398C40(int a1);  /* 0x00398c40 */
int __fastcall sub_60398C50(int a1);  /* 0x00398c50 */
int __fastcall sub_60398E9C(int *a1);  /* 0x00398e9c */
int __fastcall sub_603993B8(int a1);  /* 0x003993b8 */
int __fastcall sub_603994B8(int a1);  /* 0x003994b8 */
int __fastcall sub_60399750(int a1);  /* 0x00399750 */
int __fastcall sub_60399CC0(int a1);  /* 0x00399cc0 */
int __fastcall sub_60399D28(int a1);  /* 0x00399d28 */
int __fastcall sub_60399D50(int *a1);  /* 0x00399d50 */
int __fastcall sub_60399F2C(int a1);  /* 0x00399f2c */
int __fastcall sub_6039A338(int a1);  /* 0x0039a338 */
bool __fastcall sub_6039A3F8(int a1);  /* 0x0039a3f8 */
int __fastcall sub_6039A580(int a1);  /* 0x0039a580 */
int __fastcall sub_6039AAD4(int a1, int *a2);  /* 0x0039aad4 */
int __fastcall sub_6039AC70(int a1);  /* 0x0039ac70 */
int __fastcall sub_6039AE38(unsigned __int8 *a1);  /* 0x0039ae38 */
int __fastcall sub_6039AF5C(int a1, int a2);  /* 0x0039af5c */
int __fastcall sub_6039B294(int a1, int *a2);  /* 0x0039b294 */
int __fastcall sub_6039B2C0(int a1, int *a2);  /* 0x0039b2c0 */
int __fastcall sub_6039B2EC(_DWORD *a1);  /* 0x0039b2ec */
int __fastcall sub_6039B3D8(int a1);  /* 0x0039b3d8 */
int __fastcall sub_6039B5BC(int a1);  /* 0x0039b5bc */
int __fastcall sub_6039B714(int a1);  /* 0x0039b714 */
void __fastcall sub_6039B7B4(int a1);  /* 0x0039b7b4 */
int __fastcall sub_6039B8A0(int a1, int a2);  /* 0x0039b8a0 */
int __fastcall sub_6039BAD4(int a1, int a2);  /* 0x0039bad4 */
int __fastcall sub_6039BE2C(int a1, int a2);  /* 0x0039be2c */
int __fastcall sub_6039BFF4(int a1, int a2);  /* 0x0039bff4 */
int __fastcall sub_6039C2BC(int a1, int (__fastcall ***a2)(_DWORD, int));  /* 0x0039c2bc */
int __fastcall sub_6039C3B0(int a1, int a2);  /* 0x0039c3b0 */
int __fastcall sub_6039C478(int result, int a2);  /* 0x0039c478 */
int __fastcall sub_6039C538(int a1);  /* 0x0039c538 */
int __fastcall sub_6039C5A8(int a1);  /* 0x0039c5a8 */
int __fastcall sub_6039C64C(int a1);  /* 0x0039c64c */
int __fastcall sub_6039C9CC(int a1, int a2, int a3, int a4);  /* 0x0039c9cc */
int __fastcall sub_6039CAF8(int a1, int a2);  /* 0x0039caf8 */
int __fastcall sub_6039CDFC(int a1);  /* 0x0039cdfc */
int __fastcall sub_6039CEF4(int a1);  /* 0x0039cef4 */
int __fastcall SE_VOC_SHA_DAMAGE_ref_2(int a1);  /* 0x0039d078 */
int __fastcall sub_6039D1E4(int a1);  /* 0x0039d1e4 */
int __fastcall sub_6039D3BC(int a1);  /* 0x0039d3bc */
bool __fastcall sub_6039D50C(int a1);  /* 0x0039d50c */
bool __fastcall sub_6039D624(int a1);  /* 0x0039d624 */
int __fastcall sub_6039D720(int a1, int a2);  /* 0x0039d720 */
int __fastcall sub_6039D868(int a1, int a2);  /* 0x0039d868 */
int __fastcall sub_6039D99C(_DWORD *a1);  /* 0x0039d99c */
int __fastcall sub_6039DC14(int a1, float *a2, int *a3);  /* 0x0039dc14 */
int __fastcall sub_6039DD78(int a1, float *a2, _DWORD *a3, float *a4, int a5);  /* 0x0039dd78 */
int __fastcall sub_6039DEF4(int a1, int a2);  /* 0x0039def4 */
int __fastcall sub_6039E02C(int a1, int a2);  /* 0x0039e02c */
int __fastcall sub_6039E0A4(int a1, int a2, int a3);  /* 0x0039e0a4 */
int __fastcall sub_6039E2D0(int a1, _DWORD *a2, int a3);  /* 0x0039e2d0 */
int __fastcall sub_6039E438(int a1);  /* 0x0039e438 */
int __fastcall sub_6039E530(int a1);  /* 0x0039e530 */
bool __fastcall sub_6039E65C(int a1);  /* 0x0039e65c */
int __fastcall sub_6039E8E4(int a1, int a2);  /* 0x0039e8e4 */
bool __fastcall sub_6039EA70(int a1, int a2);  /* 0x0039ea70 */
bool __fastcall sub_6039EAB8(int a1, int a2);  /* 0x0039eab8 */
void __fastcall sub_6039EC30(int a1);  /* 0x0039ec30 */
int __fastcall sub_6039ED50(int a1);  /* 0x0039ed50 */
int __fastcall sub_6039ED6C(_BYTE *a1);  /* 0x0039ed6c */
int __fastcall sub_6039EDA4(int a1, int a2);  /* 0x0039eda4 */
int __fastcall sub_6039EDB8(int a1);  /* 0x0039edb8 */
int __fastcall sub_6039EDF4(_DWORD *a1, int a2);  /* 0x0039edf4 */
bool __fastcall sub_6039EE7C(int a1, int a2);  /* 0x0039ee7c */
int __fastcall sub_6039EEA4(int result, int a2, int a3);  /* 0x0039eea4 */
int __fastcall sub_6039F328(int a1, int a2);  /* 0x0039f328 */
bool __fastcall sub_6039F5FC(int a1);  /* 0x0039f5fc */
int __fastcall sub_6039F6E0(int a1);  /* 0x0039f6e0 */
int __fastcall sub_6039FB38(int a1, float *a2);  /* 0x0039fb38 */
int __fastcall sub_603A009C(float *a1, int a2, int a3);  /* 0x003a009c */
int __fastcall sub_603A037C(int a1, int a2, int a3);  /* 0x003a037c */
int __fastcall sub_603A047C(int a1, int a2, int a3);  /* 0x003a047c */
int __fastcall sub_603A06B0(int a1, int *a2, int a3, int a4, int a5, int a6);  /* 0x003a06b0 */
bool __fastcall sub_603A0780(int a1, float *a2);  /* 0x003a0780 */
int __fastcall sub_603A08E4(int a1, int a2, int a3, int a4);  /* 0x003a08e4 */
int __fastcall sub_603A0E5C(int a1, int a2);  /* 0x003a0e5c */
int __fastcall sub_603A126C(int a1, int a2);  /* 0x003a126c */
int __fastcall sub_603A1830(int a1, int a2, _DWORD *a3, int a4, int a5);  /* 0x003a1830 */
int __fastcall sub_603A1E88(int a1, int a2);  /* 0x003a1e88 */
int __fastcall sub_603A2194(int a1);  /* 0x003a2194 */
int __fastcall sub_603A21FC(int result, int a2, int a3);  /* 0x003a21fc */
int __fastcall sub_603A2430(int a1, int a2, int a3, int a4);  /* 0x003a2430 */
bool __fastcall sub_603A24A8(int a1, int a2, int a3);  /* 0x003a24a8 */
int __fastcall sub_603A2A60(int a1, int a2);  /* 0x003a2a60 */
int __fastcall sub_603A2CA0(int a1, int a2, int a3);  /* 0x003a2ca0 */
int __fastcall sub_603A2F54(int a1);  /* 0x003a2f54 */
int __fastcall sub_603A2F84(int result);  /* 0x003a2f84 */
int __fastcall sub_603A338C(int a1);  /* 0x003a338c */
int __fastcall sub_603A4974(int a1, int a2);  /* 0x003a4974 */
int __fastcall sub_603A53B4(int a1);  /* 0x003a53b4 */
int __fastcall sub_603A5930(int a1, int a2, int a3);  /* 0x003a5930 */
unsigned int __fastcall sub_603A5B40(int a1, int a2);  /* 0x003a5b40 */
bool __fastcall sub_603A5C88(int a1);  /* 0x003a5c88 */
bool __fastcall sub_603A5CA8(int a1);  /* 0x003a5ca8 */
bool __fastcall sub_603A5CC8(int a1, int a2, int a3);  /* 0x003a5cc8 */
int __fastcall sub_603A5D00(int a1, int a2);  /* 0x003a5d00 */
int __fastcall sub_603A5ED0(int a1);  /* 0x003a5ed0 */
int __fastcall sub_603A6004(int a1);  /* 0x003a6004 */
int __fastcall sub_603A6218(_DWORD *a1);  /* 0x003a6218 */
int __fastcall sub_603A6CA4(_DWORD *a1);  /* 0x003a6ca4 */
int __fastcall sub_603A6EE0(int result);  /* 0x003a6ee0 */
int __fastcall sub_603A6F1C(_DWORD *a1);  /* 0x003a6f1c */
int __fastcall sub_603A72E0(_DWORD *a1);  /* 0x003a72e0 */
int __fastcall sub_603A77E0(_DWORD *a1);  /* 0x003a77e0 */
int __fastcall sub_603A7C58(_DWORD *a1);  /* 0x003a7c58 */
int __fastcall sub_603A8198(_DWORD *a1);  /* 0x003a8198 */
int __fastcall sub_603A849C(int a1);  /* 0x003a849c */
int __fastcall sub_603A8968(int a1);  /* 0x003a8968 */
int __fastcall sub_603A8B40(int a1);  /* 0x003a8b40 */
int __fastcall sub_603A8C88(_DWORD *a1);  /* 0x003a8c88 */
int __fastcall sub_603A8DC8(int a1);  /* 0x003a8dc8 */
int __fastcall sub_603A9054(int a1, int a2, int a3, int a4);  /* 0x003a9054 */
unsigned int __fastcall sub_603A9110(int a1);  /* 0x003a9110 */
bool __fastcall sub_603A95B8(int a1);  /* 0x003a95b8 */
int __fastcall sub_603A9644(int result);  /* 0x003a9644 */
int __fastcall sub_603A97A4(int a1, _DWORD *a2);  /* 0x003a97a4 */
int __fastcall sub_603A9918(int a1, _DWORD *a2);  /* 0x003a9918 */
bool __fastcall sub_603A9AFC(int a1, int a2);  /* 0x003a9afc */
void __fastcall sub_603A9C74(int a1);  /* 0x003a9c74 */
int __fastcall sub_603A9DD4(int a1);  /* 0x003a9dd4 */
int __fastcall sub_603A9E9C(_DWORD *a1);  /* 0x003a9e9c */
int __fastcall sub_603A9EE8(_DWORD *a1);  /* 0x003a9ee8 */
int __fastcall sub_603A9F54(int a1);  /* 0x003a9f54 */
int __fastcall sub_603AA15C(struct sead_IDisposer *a1);  /* 0x003aa15c */
bool __fastcall sub_603AA16C(int a1, int a2);  /* 0x003aa16c */
int __fastcall sub_603AA2E4(int a1, int a2);  /* 0x003aa2e4 */
int __fastcall sub_603AA37C(int a1);  /* 0x003aa37c */
bool __fastcall sub_603AA80C(int a1);  /* 0x003aa80c */
bool __fastcall sub_603AA898(int a1, int a2);  /* 0x003aa898 */
int __fastcall sub_603AAA84(int a1);  /* 0x003aaa84 */
int __fastcall sub_603AAA94(int a1, int a2);  /* 0x003aaa94 */
int __fastcall sub_603AAE8C(_DWORD *a1);  /* 0x003aae8c */
int __fastcall sub_603AAE9C(int a1);  /* 0x003aae9c */
int __fastcall sub_603AAEAC(_DWORD *a1);  /* 0x003aaeac */
int __fastcall sub_603AAEBC(int a1);  /* 0x003aaebc */
int __fastcall sub_603AAF44(_DWORD *a1);  /* 0x003aaf44 */
int __fastcall sub_603AAF54(int a1);  /* 0x003aaf54 */
int __fastcall sub_603AAF64(_DWORD *a1);  /* 0x003aaf64 */
int __fastcall sub_603AB0A4(_DWORD *a1);  /* 0x003ab0a4 */
int __fastcall sub_603AB1A4(int a1);  /* 0x003ab1a4 */
int __fastcall sub_603AB2AC(int a1, int a2, int a3, int a4);  /* 0x003ab2ac */
int __fastcall sub_603AB2E0(_DWORD *a1, int a2);  /* 0x003ab2e0 */
bool __fastcall sub_603AB404(int a1, int a2);  /* 0x003ab404 */
int __fastcall sub_603AB508(Actor *a1);  /* 0x003ab508 */
int __fastcall sub_603AB540(int a1);  /* 0x003ab540 */
int __fastcall sub_603AB63C(int a1);  /* 0x003ab63c */
int __fastcall sub_603AB65C(int a1);  /* 0x003ab65c */
int __fastcall sub_603AB8C4(int32x4_t *a1);  /* 0x003ab8c4 */
int __fastcall sub_603ABBF0(int a1);  /* 0x003abbf0 */
int __fastcall sub_603ABCC0(int *a1);  /* 0x003abcc0 */
float __fastcall sub_603ABEB0(int a1);  /* 0x003abeb0 */
int __fastcall sub_603AC134(int a1);  /* 0x003ac134 */
int __fastcall sub_603AC2C0(int a1);  /* 0x003ac2c0 */
int __fastcall sub_603AC464(int *a1);  /* 0x003ac464 */
int __fastcall sub_603AC6EC(int a1, int a2);  /* 0x003ac6ec */
int __fastcall sub_603AC708(int a1, int a2, int a3);  /* 0x003ac708 */
int __fastcall SE_EMY_BIG_TERESA_DEAD_ref(int a1, float *a2);  /* 0x003ac794 */
int __fastcall BigBoo_vf156(int a1);  /* 0x003ac898 */
int __fastcall BigBoo_onCreate(int a1);  /* 0x003ac8f8 */
int __fastcall sub_603ACE60(int *a1);  /* 0x003ace60 */
int __fastcall sub_603AD244(_DWORD **a1);  /* 0x003ad244 */
int __fastcall BigBoo_onExecute(int a1);  /* 0x003ad5c4 */
int __fastcall BigBoo_vf12(int a1, int a2, int a3, int a4);  /* 0x003ad820 */
int __fastcall BigBoo_vf15(int a1);  /* 0x003ad8ac */
int __fastcall sub_603AD914(int *a1, int a2);  /* 0x003ad914 */
int __fastcall sub_603ADA8C(int *a1, int a2);  /* 0x003ada8c */
int __fastcall sub_603ADC3C(_DWORD *a1);  /* 0x003adc3c */
int __fastcall BigBoo_vf26(int a1);  /* 0x003add4c */
int __fastcall sub_603ADD84(int a1);  /* 0x003add84 */
int __fastcall sub_603AE00C(int a1);  /* 0x003ae00c */
int __fastcall sub_603AE1DC(int a1);  /* 0x003ae1dc */
int __fastcall sub_603AE3AC(int a1);  /* 0x003ae3ac */
int __fastcall sub_603AE61C(int a1);  /* 0x003ae61c */
int __fastcall BigBoo_vf66(int a1, int a2, int a3);  /* 0x003ae9d8 */
int __fastcall sub_603AEAB4(int a1, int a2);  /* 0x003aeab4 */
int __fastcall BigBoo_vf73(int a1, int a2, int a3);  /* 0x003aecb8 */
int __fastcall BigBoo_vf74(int a1, int a2, int a3);  /* 0x003aeda0 */
int __fastcall SE_EMY_BIG_TERESA_DEAD_ref_2(_DWORD *a1, int a2, int a3);  /* 0x003aee7c */
int __fastcall BigBoo_vf71(int a1, int a2, int a3);  /* 0x003af02c */
int __fastcall BigBoo_vf84(float *a1, int a2, int a3);  /* 0x003af114 */
bool __fastcall BigBoo_vf0(int a1, int a2);  /* 0x003af360 */
void __fastcall BigBoo_vf2(_BYTE *a1);  /* 0x003af4d8 */
int __fastcall BigBoo_vf3(_BYTE *a1);  /* 0x003af5ac */
int __fastcall BigBoo_vf79(int a1, int a2, int a3);  /* 0x003af68c */
int __fastcall BigBoo_vf80(int a1, int a2, int a3);  /* 0x003af6f0 */
int __fastcall BigBoo_vf85(int a1);  /* 0x003af704 */
int __fastcall sub_603AFCA8(int result);  /* 0x003afca8 */
int __fastcall sub_603AFCB8(int a1);  /* 0x003afcb8 */
int __fastcall shay_teresaB_ref(int a1);  /* 0x003afedc */
int __fastcall sub_603B07A8(int result);  /* 0x003b07a8 */
int __fastcall sub_603B08E8(int a1, int a2);  /* 0x003b08e8 */
int __fastcall sub_603B0904(int a1, int a2, int a3);  /* 0x003b0904 */
int __fastcall sub_603B0990(_DWORD *a1);  /* 0x003b0990 */
int __fastcall sub_603B09D4(int a1, float *a2);  /* 0x003b09d4 */
int __fastcall sub_603B0A88(int a1);  /* 0x003b0a88 */
int __fastcall sub_603B0CC0(_DWORD *a1);  /* 0x003b0cc0 */
int __fastcall sub_603B1028(_DWORD **a1);  /* 0x003b1028 */
int __fastcall sub_603B143C(int a1);  /* 0x003b143c */
int __fastcall sub_603B1634(int a1, int a2, int a3, int a4);  /* 0x003b1634 */
int __fastcall sub_603B1680(int a1, int a2, int a3);  /* 0x003b1680 */
int __fastcall sub_603B175C(int a1, int a2, int a3);  /* 0x003b175c */
int __fastcall sub_603B1844(int a1, int a2, int a3);  /* 0x003b1844 */
int __fastcall sub_603B1920(_DWORD *a1, int a2, int a3);  /* 0x003b1920 */
unsigned int __fastcall sub_603B1A78(int a1);  /* 0x003b1a78 */
int __fastcall sub_603B1BE4(int a1);  /* 0x003b1be4 */
int __fastcall sub_603B1BFC(int a1, int a2, int a3);  /* 0x003b1bfc */
bool __fastcall sub_603B1CE4(int a1, int a2);  /* 0x003b1ce4 */
void __fastcall sub_603B1E5C(_BYTE *a1);  /* 0x003b1e5c */
int __fastcall sub_603B1EF8(_BYTE *a1);  /* 0x003b1ef8 */
int __fastcall sub_603B1F98(int a1, int a2, int a3);  /* 0x003b1f98 */
int __fastcall sub_603B1FFC(int a1, int a2, int a3);  /* 0x003b1ffc */
int __fastcall sub_603B2010(int a1);  /* 0x003b2010 */
int __fastcall sub_603B2024(_DWORD *a1);  /* 0x003b2024 */
int __fastcall sub_603B2090(int a1);  /* 0x003b2090 */
int __fastcall sub_603B2130(int result);  /* 0x003b2130 */
int __fastcall sub_603B2148(_DWORD *a1);  /* 0x003b2148 */
int __fastcall sub_603B21B4(int a1);  /* 0x003b21b4 */
int __fastcall sub_603B2254(int result);  /* 0x003b2254 */
int __fastcall BooCircle_onCreate(int a1);  /* 0x003b2328 */
int __fastcall BooCircle_onExecute(int a1);  /* 0x003b2604 */
int __fastcall sub_603B2690(int result, unsigned int a2, float *a3);  /* 0x003b2690 */
bool __fastcall BooCircle_checkRTTI(int a1, int a2);  /* 0x003b2a64 */
void __fastcall BooCircle_dtor(Actor *a1);  /* 0x003b2b68 */
int __fastcall BooCircle_dtorFree(Actor *a1);  /* 0x003b2b98 */
bool __fastcall sub_603B2EA8(int a1, int a2);  /* 0x003b2ea8 */
int __fastcall sub_603B3020(Actor *a1);  /* 0x003b3020 */
int __fastcall sub_603B3054(int a1, int a2);  /* 0x003b3054 */
int __fastcall sub_603B35DC(_DWORD *a1);  /* 0x003b35dc */
int __fastcall sub_603B369C(int a1);  /* 0x003b369c */
int __fastcall sub_603B36AC(_DWORD *a1);  /* 0x003b36ac */
int __fastcall sub_603B37E8(int a1);  /* 0x003b37e8 */
int __fastcall sub_603B3948(int *a1);  /* 0x003b3948 */
int __fastcall sub_603B3B14(int a1);  /* 0x003b3b14 */
int __fastcall sub_603B3C1C(int a1, int a2, int a3, int a4);  /* 0x003b3c1c */
int __fastcall sub_603B3C4C(int result);  /* 0x003b3c4c */
bool __fastcall sub_603B3E08(int a1, int a2);  /* 0x003b3e08 */
int __fastcall sub_603B3F0C(Actor *a1);  /* 0x003b3f0c */
int __fastcall sub_603B3F44(int a1, int a2);  /* 0x003b3f44 */
int __fastcall sub_603B3F60(int a1, int a2, int a3);  /* 0x003b3f60 */
int __fastcall sub_603B3FBC(_DWORD *a1);  /* 0x003b3fbc */
int __fastcall sub_603B41A4(int a1);  /* 0x003b41a4 */
int __fastcall sub_603B4540(int result);  /* 0x003b4540 */
int __fastcall sub_603B454C(int a1);  /* 0x003b454c */
int __fastcall sub_603B4648(int a1);  /* 0x003b4648 */
int __fastcall sub_603B4654(int result);  /* 0x003b4654 */
int __fastcall sub_603B46E0(int a1, int a2, int a3, int a4);  /* 0x003b46e0 */
int __fastcall sub_603B491C(int result);  /* 0x003b491c */
int __fastcall sub_603B4CB8(int a1);  /* 0x003b4cb8 */
int __fastcall sub_603B508C(_BYTE *a1);  /* 0x003b508c */
int __fastcall sub_603B50BC(int a1);  /* 0x003b50bc */
int __fastcall sub_603B51BC(int a1);  /* 0x003b51bc */
int __fastcall sub_603B5378(int a1);  /* 0x003b5378 */
int __fastcall sub_603B54C0(int a1, int a2, int a3, int a4);  /* 0x003b54c0 */
unsigned int __fastcall sub_603B54EC(int a1, int a2, int a3);  /* 0x003b54ec */
int __fastcall sub_603B565C(int *a1, int a2, int a3);  /* 0x003b565c */
unsigned int __fastcall sub_603B5780(int a1, int a2, int a3);  /* 0x003b5780 */
int __fastcall sub_603B5784(int a1, int a2, int a3);  /* 0x003b5784 */
int __fastcall sub_603B5848(int a1);  /* 0x003b5848 */
int __fastcall sub_603B5A9C(int a1);  /* 0x003b5a9c */
int __fastcall sub_603B5BE8(int a1);  /* 0x003b5be8 */
int __fastcall sub_603B5D30(_BYTE *a1);  /* 0x003b5d30 */
int __fastcall sub_603B5D48(int result);  /* 0x003b5d48 */
int __fastcall sub_603B5D64(int result);  /* 0x003b5d64 */
int __fastcall sub_603B5D90(int result);  /* 0x003b5d90 */
int __fastcall sub_603B5DA4(int a1, int *a2);  /* 0x003b5da4 */
bool __fastcall sub_603B5DDC(int a1);  /* 0x003b5ddc */
bool __fastcall sub_603B5EB4(int *a1, _BYTE *a2, int a3);  /* 0x003b5eb4 */
int __fastcall sub_603B5F04(int a1);  /* 0x003b5f04 */
bool __fastcall sub_603B5F44(int a1, int a2);  /* 0x003b5f44 */
void __fastcall sub_603B60BC(_BYTE *a1);  /* 0x003b60bc */
int __fastcall sub_603B615C(_BYTE *a1);  /* 0x003b615c */
int __fastcall sub_603B6200(int a1);  /* 0x003b6200 */
int __fastcall sub_603B620C(unsigned int *a1);  /* 0x003b620c */
int __fastcall sub_603B62E4(int a1);  /* 0x003b62e4 */
int __fastcall sub_603B64E0(int a1);  /* 0x003b64e0 */
int __fastcall sub_603B6648(int a1);  /* 0x003b6648 */
int __fastcall sub_603B67AC(int result);  /* 0x003b67ac */
int __fastcall sub_603B67F8(int a1);  /* 0x003b67f8 */
int __fastcall sub_603B6820(_BYTE *a1);  /* 0x003b6820 */
int __fastcall sub_603B6964(int a1);  /* 0x003b6964 */
int __fastcall sub_603B6980(int a1);  /* 0x003b6980 */
int __fastcall sub_603B6A60(int32x4_t *a1);  /* 0x003b6a60 */
int __fastcall sub_603B6B94(_BYTE *a1);  /* 0x003b6b94 */
int __fastcall sub_603B6C6C(int result);  /* 0x003b6c6c */
int __fastcall sub_603B6C80(int a1);  /* 0x003b6c80 */
int __fastcall sub_603B6D04(int a1);  /* 0x003b6d04 */
int __fastcall sub_603B7098(int a1);  /* 0x003b7098 */
int __fastcall sub_603B7330(int a1);  /* 0x003b7330 */
float __fastcall sub_603B7478(int a1);  /* 0x003b7478 */
int __fastcall sub_603B80B4(int a1);  /* 0x003b80b4 */
int __fastcall sub_603B8280(_BYTE *a1);  /* 0x003b8280 */
int __fastcall sub_603B82BC(int a1, int a2, int a3, int a4);  /* 0x003b82bc */
int __fastcall sub_603B8340(float *a1, int a2, int a3);  /* 0x003b8340 */
int __fastcall sub_603B83B0(int a1, int a2, int a3);  /* 0x003b83b0 */
int __fastcall sub_603B84E4(float *a1, int a2, int a3);  /* 0x003b84e4 */
int __fastcall sub_603B8518(int a1, _DWORD *a2);  /* 0x003b8518 */
unsigned int __fastcall sub_603B8544(int a1, int a2);  /* 0x003b8544 */
int __fastcall sub_603B869C(float *a1);  /* 0x003b869c */
int __fastcall sub_603B887C(int a1);  /* 0x003b887c */
int __fastcall sub_603B8CC0(int a1);  /* 0x003b8cc0 */
int __fastcall sub_603B8F1C(int a1);  /* 0x003b8f1c */
int __fastcall sub_603B90EC(int a1);  /* 0x003b90ec */
int __fastcall sub_603B922C(int a1);  /* 0x003b922c */
int __fastcall sub_603B938C(int a1);  /* 0x003b938c */
int __fastcall sub_603B9514(int a1, int a2, int a3);  /* 0x003b9514 */
int __fastcall sub_603B96DC(int a1, int a2);  /* 0x003b96dc */
unsigned int __fastcall sub_603B97B4(int a1);  /* 0x003b97b4 */
int __fastcall sub_603B992C(_DWORD *a1);  /* 0x003b992c */
int __fastcall sub_603B9A48(int a1);  /* 0x003b9a48 */
bool __fastcall sub_603B9C08(int a1);  /* 0x003b9c08 */
int __fastcall sub_603B9D98(int a1);  /* 0x003b9d98 */
int __fastcall sub_603BA0D0(int a1);  /* 0x003ba0d0 */
int __fastcall sub_603BA244(int a1);  /* 0x003ba244 */
void __fastcall sub_603BA260(int a1);  /* 0x003ba260 */
int __fastcall sub_603BA3F8(int a1);  /* 0x003ba3f8 */
int __fastcall sub_603BA5A8(int32x4_t *a1);  /* 0x003ba5a8 */
int __fastcall sub_603BA6CC(int32x4_t *a1);  /* 0x003ba6cc */
int __fastcall sub_603BA830(int a1, int a2, int a3);  /* 0x003ba830 */
int __fastcall sub_603BA914(float *a1);  /* 0x003ba914 */
bool __fastcall sub_603BA928(int a1);  /* 0x003ba928 */
int __fastcall sub_603BA940(int a1, int a2);  /* 0x003ba940 */
int __fastcall sub_603BA9E0(int a1);  /* 0x003ba9e0 */
int __fastcall sub_603BAB1C(int a1);  /* 0x003bab1c */
int __fastcall sub_603BAB90(int a1);  /* 0x003bab90 */
int __fastcall sub_603BACC4(int a1, int a2, int a3);  /* 0x003bacc4 */
bool __fastcall sub_603BAD94(int a1, int a2);  /* 0x003bad94 */
void __fastcall sub_603BAF0C(_BYTE *a1);  /* 0x003baf0c */
int __fastcall sub_603BAFCC(_BYTE *a1);  /* 0x003bafcc */
int __fastcall sub_603BB090(int a1);  /* 0x003bb090 */
int __fastcall sub_603BB0D0(int a1, int a2, int a3);  /* 0x003bb0d0 */
int __fastcall sub_603BB138(int a1);  /* 0x003bb138 */
int __fastcall sub_603BB354(int a1);  /* 0x003bb354 */
int __fastcall sub_603BB770(_BYTE *a1, int a2, int a3);  /* 0x003bb770 */
bool __fastcall sub_603BBA00(int a1, int a2);  /* 0x003bba00 */
int __fastcall sub_603BBB04(_BYTE *a1);  /* 0x003bbb04 */
int __fastcall sub_603BBC54(int a1);  /* 0x003bbc54 */
int __fastcall sub_603BBE34(unsigned __int8 *a1);  /* 0x003bbe34 */
int __fastcall sub_603BBFCC(int a1);  /* 0x003bbfcc */
int __fastcall sub_603BC1B0(int a1);  /* 0x003bc1b0 */
int __fastcall sub_603BC1D0(int a1);  /* 0x003bc1d0 */
int __fastcall SE_OBJ_PAIPO_LAND_ref(int a1);  /* 0x003bc2f8 */
int __fastcall sub_603BC6FC(int result);  /* 0x003bc6fc */
int __fastcall sub_603BC708(int a1);  /* 0x003bc708 */
int __fastcall sub_603BC84C(int result);  /* 0x003bc84c */
int __fastcall sub_603BC928(int a1);  /* 0x003bc928 */
int __fastcall sub_603BC9C4(int result);  /* 0x003bc9c4 */
int __fastcall sub_603BC9D0(int a1);  /* 0x003bc9d0 */
int __fastcall sub_603BCAD8(int a1);  /* 0x003bcad8 */
int __fastcall sub_603BCB94(_DWORD *a1);  /* 0x003bcb94 */
int __fastcall sub_603BD3B8(_DWORD *a1);  /* 0x003bd3b8 */
int __fastcall sub_603BD508(int a1);  /* 0x003bd508 */
int __fastcall sub_603BD52C(int a1);  /* 0x003bd52c */
int __fastcall sub_603BD5E8(int a1);  /* 0x003bd5e8 */
int __fastcall sub_603BD700(int a1, int a2, int a3, int a4);  /* 0x003bd700 */
int __fastcall sub_603BD770(int a1);  /* 0x003bd770 */
int __fastcall sub_603BD7F0(int a1);  /* 0x003bd7f0 */
int __fastcall sub_603BD85C(int a1);  /* 0x003bd85c */
int __fastcall sub_603BDA04(unsigned int *a1);  /* 0x003bda04 */
int __fastcall sub_603BDAD4(int a1);  /* 0x003bdad4 */
int __fastcall sub_603BDB18(int a1, int a2);  /* 0x003bdb18 */
int __fastcall sub_603BDB40(int a1);  /* 0x003bdb40 */
int __fastcall sub_603BDBA4(int a1, int a2, int a3, int a4);  /* 0x003bdba4 */
int __fastcall sub_603BDBE8(int a1, int a2);  /* 0x003bdbe8 */
int __fastcall sub_603BDBF8(int a1, int a2, int a3);  /* 0x003bdbf8 */
int __fastcall sub_603BDD88(int a1);  /* 0x003bdd88 */
int __fastcall sub_603BDE20(int a1);  /* 0x003bde20 */
bool __fastcall sub_603BDFAC(int a1);  /* 0x003bdfac */
int __fastcall sub_603BDFF0(_DWORD *a1);  /* 0x003bdff0 */
int __fastcall sub_603BE040(_DWORD *a1);  /* 0x003be040 */
int __fastcall sub_603BE0D0(int a1);  /* 0x003be0d0 */
int __fastcall sub_603BE0F4(int *a1);  /* 0x003be0f4 */
int __fastcall sub_603BE1E4(_DWORD *a1);  /* 0x003be1e4 */
int __fastcall sub_603BE290(int a1, int a2, float *a3);  /* 0x003be290 */
bool __fastcall sub_603BE460(int a1, int a2);  /* 0x003be460 */
int __fastcall sub_603BE4DC(_BYTE *a1);  /* 0x003be4dc */
int __fastcall sub_603BE594(int a1);  /* 0x003be594 */
int __fastcall sub_603BEA30(int a1, int a2);  /* 0x003bea30 */
int __fastcall sub_603BECA4(int a1);  /* 0x003beca4 */
int __fastcall sub_603BED88(int a1);  /* 0x003bed88 */
int __fastcall sub_603BEF10(_BYTE *a1);  /* 0x003bef10 */
int __fastcall sub_603BEF4C(int a1);  /* 0x003bef4c */
int __fastcall sub_603BEFFC(_BYTE *a1, unsigned int a2);  /* 0x003beffc */
int __fastcall sub_603BF010(int a1, int a2, int a3, int a4);  /* 0x003bf010 */
unsigned int __fastcall sub_603BF044(int a1, int a2, int a3);  /* 0x003bf044 */
int __fastcall sub_603BF1D0(int a1, int a2, int a3);  /* 0x003bf1d0 */
int __fastcall sub_603BF4A4(int a1, int a2, int a3);  /* 0x003bf4a4 */
int __fastcall sub_603BF62C(_DWORD *a1, int a2, int a3);  /* 0x003bf62c */
int __fastcall sub_603BF7A4(int a1);  /* 0x003bf7a4 */
int __fastcall SE_BOSS_JR_HIT_T_ref(float *a1, int a2, int a3);  /* 0x003bf7e4 */
int __fastcall sub_603BF8F4(int a1);  /* 0x003bf8f4 */
int __fastcall sub_603BF95C(int a1);  /* 0x003bf95c */
int __fastcall sub_603BFA08(float *a1, float *a2);  /* 0x003bfa08 */
int __fastcall sub_603BFB14(int a1);  /* 0x003bfb14 */
int __fastcall sub_603BFC58(int a1);  /* 0x003bfc58 */
int __fastcall sub_603BFE40(int a1);  /* 0x003bfe40 */
int __fastcall sub_603BFEC0(int a1, int a2);  /* 0x003bfec0 */
int __fastcall sub_603BFEDC(int a1, int a2, int a3);  /* 0x003bfedc */
bool __fastcall sub_603BFF9C(int a1, int a2);  /* 0x003bff9c */
void __fastcall sub_603C0114(_BYTE *a1);  /* 0x003c0114 */
int __fastcall sub_603C01C0(_BYTE *a1);  /* 0x003c01c0 */
int __fastcall sub_603C0284(int a1);  /* 0x003c0284 */
int __fastcall torpedobase_fire_l_ref(int a1);  /* 0x003c0408 */
int __fastcall sub_603C045C(int a1);  /* 0x003c045c */
int __fastcall torpedobase_fire_ref(int a1);  /* 0x003c0720 */
int __fastcall sub_603C085C(_DWORD *a1);  /* 0x003c085c */
int __fastcall torpedobase_rtrn_ref(int a1);  /* 0x003c08e0 */
int __fastcall sub_603C0944(int a1);  /* 0x003c0944 */
int __fastcall sub_603C0A50(int a1);  /* 0x003c0a50 */
int __fastcall sub_603C0B40(int *a1);  /* 0x003c0b40 */
int __fastcall sub_603C0D04(int a1);  /* 0x003c0d04 */
int __fastcall sub_603C0FBC(int a1);  /* 0x003c0fbc */
int __fastcall sub_603C0FE0(int a1, int a2, int a3, int a4);  /* 0x003c0fe0 */
bool __fastcall sub_603C100C(int a1);  /* 0x003c100c */
bool __fastcall sub_603C1120(int a1);  /* 0x003c1120 */
bool __fastcall sub_603C1234(int a1, int a2);  /* 0x003c1234 */
int __fastcall sub_603C13AC(Actor *a1);  /* 0x003c13ac */
int __fastcall sub_603C168C(int result);  /* 0x003c168c */
int __fastcall sub_603C16B0(int result);  /* 0x003c16b0 */
int __fastcall sub_603C16C0(int a1);  /* 0x003c16c0 */
int __fastcall sub_603C1874(int a1);  /* 0x003c1874 */
int __fastcall sub_603C18C4(int a1);  /* 0x003c18c4 */
bool __fastcall sub_603C18EC(int a1, int a2);  /* 0x003c18ec */
int __fastcall sub_603C19F0(Actor *a1);  /* 0x003c19f0 */
int __fastcall sub_603C2104(int a1, int a2, int32x4_t **a3);  /* 0x003c2104 */
int __fastcall Actor_pipe_unabon_build(_DWORD *a1);  /* 0x003c2480 */
int __fastcall sub_603C249C(int a1, _DWORD *a2);  /* 0x003c249c */
int __fastcall sub_603C2E20(int a1);  /* 0x003c2e20 */
int __fastcall sub_603C3870(int a1);  /* 0x003c3870 */
int __fastcall sub_603C3AC8(int a1);  /* 0x003c3ac8 */
int __fastcall sub_603C3D1C(int a1);  /* 0x003c3d1c */
int __fastcall sub_603C44FC(int a1);  /* 0x003c44fc */
unsigned int __fastcall sub_603C4638(int a1);  /* 0x003c4638 */
int __fastcall sub_603C4798(int a1, int a2, int a3, int a4);  /* 0x003c4798 */
int __fastcall sub_603C4CB0(int a1);  /* 0x003c4cb0 */
int __fastcall sub_603C4E7C(int a1, int a2, int a3, int a4);  /* 0x003c4e7c */
int __fastcall sub_603C4EA8(int a1);  /* 0x003c4ea8 */
int __fastcall sub_603C4EC4(int result);  /* 0x003c4ec4 */
int __fastcall sub_603C4ED4(int a1);  /* 0x003c4ed4 */
int __fastcall sub_603C59D4(int a1);  /* 0x003c59d4 */
int __fastcall sub_603C59EC(_DWORD *a1);  /* 0x003c59ec */
int __fastcall sub_603C5A24(int a1);  /* 0x003c5a24 */
void __fastcall sub_603C5BB4(int a1);  /* 0x003c5bb4 */
int __fastcall sub_603C5F58(int a1);  /* 0x003c5f58 */
int __fastcall sub_603C613C(int a1, int a2, int a3);  /* 0x003c613c */
int __fastcall sub_603C6200(int a1, int a2, int a3);  /* 0x003c6200 */
int __fastcall sub_603C62B8(int a1, int a2, int a3);  /* 0x003c62b8 */
int __fastcall sub_603C6380(int a1, int a2, int a3);  /* 0x003c6380 */
int __fastcall sub_603C643C(int a1, int a2, int a3);  /* 0x003c643c */
int __fastcall sub_603C6450(int a1, int a2, int a3);  /* 0x003c6450 */
int __fastcall sub_603C675C(int a1);  /* 0x003c675c */
int __fastcall sub_603C6760(int a1, int a2, int a3);  /* 0x003c6760 */
int __fastcall sub_603C6850(int a1, int a2);  /* 0x003c6850 */
bool __fastcall sub_603C6874(int a1, int a2);  /* 0x003c6874 */
void __fastcall sub_603C69EC(_BYTE *a1);  /* 0x003c69ec */
int __fastcall sub_603C6B0C(_BYTE *a1);  /* 0x003c6b0c */
int __fastcall sub_603C6B1C(int a1);  /* 0x003c6b1c */
void __fastcall sub_603C6B20(int a1);  /* 0x003c6b20 */
int __fastcall sub_603C6B24(int a1);  /* 0x003c6b24 */
void __fastcall sub_603C6B28(int a1);  /* 0x003c6b28 */
int __fastcall sub_603C6C70(int a1);  /* 0x003c6c70 */
int __fastcall sub_603C6C9C(int a1);  /* 0x003c6c9c */
int __fastcall sub_603C6CB8(int result);  /* 0x003c6cb8 */
int __fastcall sub_603C6D90(int result);  /* 0x003c6d90 */
int __fastcall sub_603C6D94(unsigned __int8 *a1);  /* 0x003c6d94 */
int __fastcall sub_603C6E24(int a1);  /* 0x003c6e24 */
int __fastcall sub_603C7004(_DWORD *a1);  /* 0x003c7004 */
int __fastcall sub_603C7054(_BYTE *a1);  /* 0x003c7054 */
int __fastcall sub_603C7068(int a1);  /* 0x003c7068 */
int __fastcall Actor_unira_RDASH_BGchekunarrow_build(_DWORD *a1);  /* 0x003c72a0 */
bool __fastcall sub_603C7304(int a1, int a2);  /* 0x003c7304 */
int __fastcall sub_603C74F0(_BYTE *a1);  /* 0x003c74f0 */
int __fastcall sub_603C76B4(int a1, int a2);  /* 0x003c76b4 */
int __fastcall sub_603C7820(int a1);  /* 0x003c7820 */
int __fastcall sub_603C7834(int result, int a2, int a3, int a4);  /* 0x003c7834 */
int __fastcall sub_603C7880(int a1);  /* 0x003c7880 */
int __fastcall sub_603C7D7C(int a1);  /* 0x003c7d7c */
int __fastcall sub_603C7E68(int a1);  /* 0x003c7e68 */
int __fastcall sub_603C7EC4(int a1);  /* 0x003c7ec4 */
int __fastcall sub_603C8088(int result);  /* 0x003c8088 */
int __fastcall sub_603C819C(int a1);  /* 0x003c819c */
int __fastcall sub_603C8814(_DWORD *a1);  /* 0x003c8814 */
int __fastcall sub_603C89B8(int a1);  /* 0x003c89b8 */
int __fastcall sub_603C8C68(int a1);  /* 0x003c8c68 */
int __fastcall sub_603C8CA4(int a1);  /* 0x003c8ca4 */
int __fastcall sub_603C8DB4(int a1);  /* 0x003c8db4 */
int __fastcall sub_603C8EB0(int result);  /* 0x003c8eb0 */
int __fastcall sub_603C8EE0(int result);  /* 0x003c8ee0 */
int __fastcall sub_603C8EF0(int a1);  /* 0x003c8ef0 */
int __fastcall sub_603C9110(int result);  /* 0x003c9110 */
int __fastcall sub_603C967C(int a1, _DWORD *a2, int a3);  /* 0x003c967c */
int __fastcall sub_603C99A4(int a1);  /* 0x003c99a4 */
float __fastcall sub_603CA2AC(int a1);  /* 0x003ca2ac */
int __fastcall sub_603CA608(_BYTE *a1);  /* 0x003ca608 */
int __fastcall sub_603CA640(int a1);  /* 0x003ca640 */
bool __fastcall sub_603CAADC(int a1);  /* 0x003caadc */
int __fastcall sub_603CACBC(int a1, int a2, char a3, int *a4);  /* 0x003cacbc */
int __fastcall sub_603CB5E8(int a1, int a2);  /* 0x003cb5e8 */
int __fastcall sub_603CBA5C(_BYTE *a1, unsigned int a2);  /* 0x003cba5c */
int __fastcall sub_603CBA78(int a1, int a2, int a3, int a4);  /* 0x003cba78 */
int __fastcall sub_603CBAA4(int a1);  /* 0x003cbaa4 */
int __fastcall sub_603CBC1C(int result, int a2, int a3, int a4);  /* 0x003cbc1c */
int __fastcall sub_603CBF3C(int a1);  /* 0x003cbf3c */
int __fastcall sub_603CC07C(int a1);  /* 0x003cc07c */
int __fastcall sub_603CC15C(int a1, int a2);  /* 0x003cc15c */
int __fastcall sub_603CC2B0(_DWORD *a1);  /* 0x003cc2b0 */
int __fastcall sub_603CC41C(int a1);  /* 0x003cc41c */
void __fastcall sub_603CC45C(int a1);  /* 0x003cc45c */
int __fastcall sub_603CC4B0(int a1, int a2, int a3);  /* 0x003cc4b0 */
int __fastcall sub_603CC5B0(_DWORD *a1, int a2, int a3);  /* 0x003cc5b0 */
int __fastcall sub_603CC640(int a1, int a2, int a3);  /* 0x003cc640 */
int __fastcall sub_603CC74C(_DWORD *a1, int a2, int a3);  /* 0x003cc74c */
int __fastcall sub_603CC798(_DWORD *a1);  /* 0x003cc798 */
int __fastcall sub_603CC7C4(_DWORD *a1);  /* 0x003cc7c4 */
bool __fastcall sub_603CCCF4(int a1);  /* 0x003cccf4 */
int __fastcall sub_603CCE40(float *a1);  /* 0x003cce40 */
int __fastcall sub_603CD01C(int a1);  /* 0x003cd01c */
int __fastcall sub_603CD134(_DWORD *a1);  /* 0x003cd134 */
int __fastcall sub_603CD27C(int a1, int *a2);  /* 0x003cd27c */
int __fastcall sub_603CD2C8(int a1);  /* 0x003cd2c8 */
bool __fastcall sub_603CD2F4(int a1, int a2);  /* 0x003cd2f4 */
bool __fastcall sub_603CD38C(int a1, int a2);  /* 0x003cd38c */
int __fastcall sub_603CD504(_BYTE *a1);  /* 0x003cd504 */
int __fastcall sub_603CD590(int a1, int a2);  /* 0x003cd590 */
int __fastcall sub_603CD630(int a1, int a2);  /* 0x003cd630 */
int __fastcall sub_603CD6D8(int a1);  /* 0x003cd6d8 */
int __fastcall sub_603CD740(int result);  /* 0x003cd740 */
int __fastcall sub_603CD750(int a1);  /* 0x003cd750 */
int __fastcall sub_603CD7C8(int result);  /* 0x003cd7c8 */
int __fastcall sub_603CD7E8(int a1);  /* 0x003cd7e8 */
int __fastcall sub_603CD838(int a1);  /* 0x003cd838 */
int __fastcall sub_603CD864(int a1);  /* 0x003cd864 */
bool __fastcall sub_603CDA1C(int a1, int a2);  /* 0x003cda1c */
int __fastcall sub_603CDB20(Actor *a1);  /* 0x003cdb20 */
int __fastcall sub_603CDD04(int result);  /* 0x003cdd04 */
int __fastcall sub_603CDD30(int result);  /* 0x003cdd30 */
int __fastcall sub_603CDD40(int a1);  /* 0x003cdd40 */
int __fastcall sub_603CDDF0(int a1);  /* 0x003cddf0 */
int __fastcall sub_603CDE20(int a1);  /* 0x003cde20 */
bool __fastcall sub_603CDE40(int a1);  /* 0x003cde40 */
int __fastcall sub_603CE08C(int a1);  /* 0x003ce08c */
bool __fastcall sub_603CE1E8(int a1, int a2);  /* 0x003ce1e8 */
int __fastcall sub_603CE2EC(Actor *a1);  /* 0x003ce2ec */
int __fastcall Actor_kafugumannen_kishi_build(int a1);  /* 0x003ce488 */
int __fastcall sub_603CE4E8(int a1);  /* 0x003ce4e8 */
int __fastcall sub_603CE52C(int a1);  /* 0x003ce52c */
bool __fastcall sub_603CE6CC(int a1);  /* 0x003ce6cc */
int __fastcall sub_603CE860(int a1);  /* 0x003ce860 */
bool __fastcall sub_603CE980(int a1, int a2);  /* 0x003ce980 */
int __fastcall sub_603CEB68(Actor *a1);  /* 0x003ceb68 */
int __fastcall sub_603CEC9C(int result);  /* 0x003cec9c */
int __fastcall sub_603CECAC(int a1);  /* 0x003cecac */
int __fastcall sub_603CEE9C(int a1);  /* 0x003cee9c */
bool __fastcall sub_603CEEC8(int a1);  /* 0x003ceec8 */
int __fastcall sub_603CEF04(int a1);  /* 0x003cef04 */
bool __fastcall sub_603CEF60(int a1, int a2);  /* 0x003cef60 */
bool __fastcall sub_603CF258(int a1, int a2);  /* 0x003cf258 */
int __fastcall sub_603CF35C(Actor *a1);  /* 0x003cf35c */
int __fastcall sub_603CF518(int a1);  /* 0x003cf518 */
bool __fastcall sub_603CF57C(int a1);  /* 0x003cf57c */
int __fastcall sub_603CF5B8(int a1, int a2, unsigned int a3, int a4);  /* 0x003cf5b8 */
int __fastcall sub_603CF8B0(float *a1, _BYTE *a2, unsigned int a3, int a4);  /* 0x003cf8b0 */
int __fastcall sub_603CFCD8(int a1);  /* 0x003cfcd8 */
bool __fastcall sub_603CFF94(int a1, int a2);  /* 0x003cff94 */
int __fastcall sub_603D017C(Actor *a1);  /* 0x003d017c */
int __fastcall sub_603D026C(_DWORD *a1);  /* 0x003d026c */
int __fastcall sub_603D0290(float *a1);  /* 0x003d0290 */
int __fastcall sub_603D049C(int a1, float *a2);  /* 0x003d049c */
bool __fastcall sub_603D06F4(int a1, int a2);  /* 0x003d06f4 */
int __fastcall sub_603D08DC(Actor *a1);  /* 0x003d08dc */
int __fastcall Actor_pentaro_kipipe_build(int a1);  /* 0x003d0988 */
int __fastcall sub_603D09C0(int a1);  /* 0x003d09c0 */
int __fastcall sub_603D09D4(int a1);  /* 0x003d09d4 */
bool __fastcall sub_603D0AEC(int a1);  /* 0x003d0aec */
int __fastcall sub_603D0E00(int a1);  /* 0x003d0e00 */
bool __fastcall sub_603D1008(int a1, int a2);  /* 0x003d1008 */
int __fastcall sub_603D11F0(Actor *a1);  /* 0x003d11f0 */
int __fastcall sub_603D1388(int a1);  /* 0x003d1388 */
int __fastcall sub_603D1534(int a1);  /* 0x003d1534 */
int __fastcall sub_603D16DC(int a1);  /* 0x003d16dc */
int __fastcall sub_603D1778(int a1);  /* 0x003d1778 */
int __fastcall sub_603D1790(float *a1, _BYTE *a2);  /* 0x003d1790 */
int __fastcall sub_603D1BFC(int a1, float *a2, unsigned __int8 *a3);  /* 0x003d1bfc */
bool __fastcall sub_603D1F38(int a1, int a2);  /* 0x003d1f38 */
int __fastcall sub_603D203C(Actor *a1);  /* 0x003d203c */
int __fastcall sub_603D2390(int a1);  /* 0x003d2390 */
int __fastcall sub_603D23C8(int a1);  /* 0x003d23c8 */
bool __fastcall sub_603D23F0(int a1, int a2);  /* 0x003d23f0 */
int __fastcall sub_603D24F4(Actor *a1);  /* 0x003d24f4 */
int __fastcall sub_603D269C(int a1);  /* 0x003d269c */
int __fastcall sub_603D26EC(int a1);  /* 0x003d26ec */
bool __fastcall sub_603D27D0(int a1);  /* 0x003d27d0 */
bool __fastcall sub_603D2B94(int a1, int a2);  /* 0x003d2b94 */
int __fastcall sub_603D2D7C(Actor *a1);  /* 0x003d2d7c */
int __fastcall Actor_unabon_RDash_2_build(int a1);  /* 0x003d2e70 */
int __fastcall sub_603D2F40(_BYTE *a1);  /* 0x003d2f40 */
bool __fastcall sub_603D3230(int a1, int a2);  /* 0x003d3230 */
int __fastcall sub_603D3418(Actor *a1);  /* 0x003d3418 */
int __fastcall sub_603D3518(int a1);  /* 0x003d3518 */
int __fastcall sub_603D35C8(int a1);  /* 0x003d35c8 */
__int64 __fastcall sub_603D380C(__int64 result);  /* 0x003d380c */
int __fastcall sub_603D384C(int a1, int a2, int a3, int a4);  /* 0x003d384c */
int __fastcall sub_603D3910(int a1);  /* 0x003d3910 */
int __fastcall sub_603D3AE4(int result);  /* 0x003d3ae4 */
int __fastcall sub_603D3AF4(_DWORD *a1);  /* 0x003d3af4 */
int __fastcall sub_603D3B34(int result);  /* 0x003d3b34 */
int __fastcall sub_603D3B70(int a1);  /* 0x003d3b70 */
int __fastcall sub_603D3E24(int result);  /* 0x003d3e24 */
int __fastcall sub_603D3F84(int a1, int a2);  /* 0x003d3f84 */
int __fastcall sub_603D3FA0(int a1);  /* 0x003d3fa0 */
int __fastcall sub_603D4164(int a1);  /* 0x003d4164 */
int __fastcall sub_603D4534(int a1);  /* 0x003d4534 */
int __fastcall sub_603D46F4(int a1);  /* 0x003d46f4 */
int __fastcall sub_603D4A78(_BYTE *a1);  /* 0x003d4a78 */
int __fastcall sub_603D4FC0(int a1, int a2, int a3, int a4);  /* 0x003d4fc0 */
int __fastcall sub_603D4FE8(int a1, int a2);  /* 0x003d4fe8 */
int __fastcall sub_603D5490(int a1, int a2, int32x4_t **a3);  /* 0x003d5490 */
int __fastcall sub_603D599C(float *a1, int a2, int a3);  /* 0x003d599c */
int __fastcall sub_603D59D0(float *a1, int a2, int a3);  /* 0x003d59d0 */
int __fastcall sub_603D5B0C(int a1, _DWORD *a2);  /* 0x003d5b0c */
int __fastcall sub_603D5C90(int result);  /* 0x003d5c90 */
int __fastcall sub_603D5CB8(int a1);  /* 0x003d5cb8 */
int __fastcall sub_603D5D38(int a1, int a2, int a3);  /* 0x003d5d38 */
int __fastcall sub_603D5E24(int a1, int a2, int a3);  /* 0x003d5e24 */
int __fastcall sub_603D5E28(int a1);  /* 0x003d5e28 */
int __fastcall sub_603D5EC4(int a1, int *a2);  /* 0x003d5ec4 */
int __fastcall sub_603D5EF0(int a1, int *a2);  /* 0x003d5ef0 */
int __fastcall sub_603D5F1C(int a1, int *a2);  /* 0x003d5f1c */
bool __fastcall sub_603D5F4C(int a1, int a2);  /* 0x003d5f4c */
void __fastcall sub_603D60C4(Actor *a1);  /* 0x003d60c4 */
int __fastcall sub_603D6114(Actor *a1);  /* 0x003d6114 */
int __fastcall sub_603D6168(int a1);  /* 0x003d6168 */
bool __fastcall sub_603D61A8(int a1);  /* 0x003d61a8 */
int __fastcall sub_603D61CC(int a1);  /* 0x003d61cc */
int __fastcall sub_603D61F4(int a1);  /* 0x003d61f4 */
int __fastcall sub_603D636C(int a1);  /* 0x003d636c */
int __fastcall sub_603D6464(int a1);  /* 0x003d6464 */
int __fastcall sub_603D6980(int a1);  /* 0x003d6980 */
int __fastcall sub_603D6B64(int a1, int a2, int a3, int a4);  /* 0x003d6b64 */
int __fastcall SE_EMY_WANWAN_BARK_ref(int a1);  /* 0x003d6dc8 */
int __fastcall sub_603D6E74(int a1);  /* 0x003d6e74 */
int __fastcall sub_603D7228(int result);  /* 0x003d7228 */
int __fastcall sub_603D7238(int a1);  /* 0x003d7238 */
int __fastcall sub_603D72B0(int a1);  /* 0x003d72b0 */
int __fastcall sub_603D74DC(int result);  /* 0x003d74dc */
int __fastcall sub_603D74F8(int a1);  /* 0x003d74f8 */
int __fastcall SE_EMY_WANWAN_ESCAPE_ref(int a1, int a2, int a3, int a4);  /* 0x003d76bc */
int __fastcall sub_603D7868(int result);  /* 0x003d7868 */
int __fastcall SE_EMY_WANWAN_ESCAPE_ref_2(int a1);  /* 0x003d7d18 */
int __fastcall sub_603D7E60(int a1);  /* 0x003d7e60 */
int __fastcall sub_603D7ED8(int a1);  /* 0x003d7ed8 */
int __fastcall sub_603D8260(_DWORD *a1);  /* 0x003d8260 */
int __fastcall sub_603D8418(int a1);  /* 0x003d8418 */
float __fastcall sub_603D85CC(int a1);  /* 0x003d85cc */
int __fastcall sub_603D8874(int a1);  /* 0x003d8874 */
int __fastcall sub_603D8A44(int a1);  /* 0x003d8a44 */
int __fastcall sub_603D8C54(int a1, int a2, int a3, int a4);  /* 0x003d8c54 */
int __fastcall sub_603D907C(int a1, int a2);  /* 0x003d907c */
int __fastcall sub_603D9224(int a1);  /* 0x003d9224 */
int __fastcall sub_603D923C(int result);  /* 0x003d923c */
int __fastcall sub_603D9298(_DWORD *a1, int a2, int a3);  /* 0x003d9298 */
int __fastcall sub_603D9384(int a1);  /* 0x003d9384 */
int __fastcall sub_603D93FC(int a1);  /* 0x003d93fc */
int __fastcall sub_603D94F8(int a1);  /* 0x003d94f8 */
int __fastcall sub_603D9698(_BYTE *a1);  /* 0x003d9698 */
int __fastcall sub_603D97BC(int a1);  /* 0x003d97bc */
bool __fastcall sub_603D9878(int a1, int a2);  /* 0x003d9878 */
int __fastcall sub_603D988C(int a1);  /* 0x003d988c */
int __fastcall sub_603D99EC(int a1);  /* 0x003d99ec */
int __fastcall sub_603D9E14(int a1, int a2);  /* 0x003d9e14 */
int __fastcall sub_603D9F08(int a1, int a2);  /* 0x003d9f08 */
bool __fastcall sub_603D9FB4(int a1, int a2);  /* 0x003d9fb4 */
void __fastcall sub_603DA12C(_BYTE *a1);  /* 0x003da12c */
int __fastcall sub_603DA1E4(_BYTE *a1);  /* 0x003da1e4 */
int __fastcall sub_603DA2B8(int a1, int a2, int a3);  /* 0x003da2b8 */
int __fastcall sub_603DA31C(int a1, int a2, int a3);  /* 0x003da31c */
int __fastcall sub_603DA330(int a1);  /* 0x003da330 */
int __fastcall sub_603DA344(int a1);  /* 0x003da344 */
int __fastcall sub_603DA468(int a1);  /* 0x003da468 */
unsigned int __fastcall sub_603DA580(int a1);  /* 0x003da580 */
unsigned int __fastcall sub_603DA58C(int a1);  /* 0x003da58c */
unsigned int __fastcall sub_603DA598(int a1);  /* 0x003da598 */
int __fastcall sub_603DA5A0(int a1);  /* 0x003da5a0 */
int __fastcall sub_603DA720(int result);  /* 0x003da720 */
int __fastcall sub_603DA818(int a1);  /* 0x003da818 */
int __fastcall sub_603DA84C(int a1);  /* 0x003da84c */
int __fastcall sub_603DAD18(int a1);  /* 0x003dad18 */
int __fastcall sub_603DAD24(int a1);  /* 0x003dad24 */
unsigned int __fastcall sub_603DAD40(int a1);  /* 0x003dad40 */
unsigned int __fastcall sub_603DB12C(int a1);  /* 0x003db12c */
unsigned int __fastcall sub_603DB350(int a1);  /* 0x003db350 */
int __fastcall sub_603DB578(int a1, int a2);  /* 0x003db578 */
int __fastcall sub_603DB5B0(int a1, _DWORD *a2);  /* 0x003db5b0 */
int __fastcall sub_603DB5F4(int a1, int a2);  /* 0x003db5f4 */
int __fastcall sub_603DB600(int result, _DWORD *a2);  /* 0x003db600 */
int __fastcall sub_603DB610(int a1, int a2);  /* 0x003db610 */
int __fastcall sub_603DB638(int a1);  /* 0x003db638 */
int __fastcall sub_603DB640(int a1);  /* 0x003db640 */
int __fastcall sub_603DB930(int a1);  /* 0x003db930 */
int __fastcall sub_603DBC94(int a1);  /* 0x003dbc94 */
int __fastcall sub_603DBD04(float *a1);  /* 0x003dbd04 */
int __fastcall sub_603DBDB8(int a1);  /* 0x003dbdb8 */
int __fastcall sub_603DBFA8(int a1);  /* 0x003dbfa8 */
int __fastcall sub_603DC144(int a1);  /* 0x003dc144 */
unsigned int __fastcall sub_603DC2C4(int a1, int a2);  /* 0x003dc2c4 */
int __fastcall sub_603DC4CC(int a1);  /* 0x003dc4cc */
int __fastcall sub_603DC7DC(int result);  /* 0x003dc7dc */
int __fastcall sub_603DC850(int a1);  /* 0x003dc850 */
int __fastcall sub_603DC92C(int a1, int a2, int a3, int a4);  /* 0x003dc92c */
int __fastcall sub_603DC968(int a1);  /* 0x003dc968 */
bool __fastcall sub_603DCAA4(int a1, int a2);  /* 0x003dcaa4 */
void __fastcall sub_603DCBA8(int a1);  /* 0x003dcba8 */
int __fastcall sub_603DCBF8(int a1);  /* 0x003dcbf8 */
int __fastcall sub_603DCE68(int result);  /* 0x003dce68 */
bool __fastcall sub_603DCEDC(int a1, int a2);  /* 0x003dcedc */
int __fastcall sub_603DD054(int a1);  /* 0x003dd054 */
int __fastcall sub_603DD0A8(int a1, int a2);  /* 0x003dd0a8 */
int __fastcall sub_603DD360(int a1, int a2);  /* 0x003dd360 */
int __fastcall sub_603DD498(int32x4_t *a1);  /* 0x003dd498 */
int __fastcall sub_603DD59C(unsigned int *a1);  /* 0x003dd59c */
int __fastcall sub_603DD9F0(int32x4_t *a1);  /* 0x003dd9f0 */
int __fastcall sub_603DDAE8(int32x4_t *a1);  /* 0x003ddae8 */
int __fastcall sub_603DDD14(int result);  /* 0x003ddd14 */
int __fastcall sub_603DDD24(int a1);  /* 0x003ddd24 */
int __fastcall sub_603DDD70(unsigned int *a1);  /* 0x003ddd70 */
int __fastcall sub_603DE108(_DWORD *a1);  /* 0x003de108 */
int __fastcall sub_603DE11C(unsigned int *a1);  /* 0x003de11c */
int __fastcall sub_603DE378(_DWORD *a1);  /* 0x003de378 */
int __fastcall sub_603DE398(int32x4_t *a1);  /* 0x003de398 */
int __fastcall sub_603DE84C(int a1);  /* 0x003de84c */
int __fastcall sub_603DF4C4(int32x4_t *a1, int (__fastcall ***a2)(_DWORD, int));  /* 0x003df4c4 */
int __fastcall sub_603DF65C(_DWORD *a1, int a2);  /* 0x003df65c */
int __fastcall sub_603E0264(int a1);  /* 0x003e0264 */
int __fastcall sub_603E03B4(int a1);  /* 0x003e03b4 */
int __fastcall SE_EMY_WOOCHAN_MOGURU_LAST_ref(int a1);  /* 0x003e0504 */
int __fastcall sub_603E069C(int a1, int a2, int a3, int a4);  /* 0x003e069c */
int __fastcall sub_603E0764(int a1);  /* 0x003e0764 */
int __fastcall sub_603E0940(int a1);  /* 0x003e0940 */
int __fastcall sub_603E0D64(_DWORD *a1);  /* 0x003e0d64 */
int __fastcall sub_603E10FC(int result, int a2);  /* 0x003e10fc */
int __fastcall SE_BOSS_WOOGAN_FIRED_ref_2(int a1, int *a2);  /* 0x003e15c0 */
void __fastcall sub_603E18E4(int a1);  /* 0x003e18e4 */
int __fastcall sub_603E1AAC(int a1);  /* 0x003e1aac */
int __fastcall sub_603E1F7C(_DWORD *a1);  /* 0x003e1f7c */
int __fastcall sub_603E2010(int a1);  /* 0x003e2010 */
int __fastcall sub_603E2394(int a1);  /* 0x003e2394 */
int __fastcall sub_603E24A0(_DWORD *a1);  /* 0x003e24a0 */
int __fastcall sub_603E24F0(int result);  /* 0x003e24f0 */
int __fastcall sub_603E2630(int a1);  /* 0x003e2630 */
int __fastcall sub_603E28E0(int a1);  /* 0x003e28e0 */
int __fastcall sub_603E30B4(int result);  /* 0x003e30b4 */
int __fastcall sub_603E3490(int a1);  /* 0x003e3490 */
int __fastcall sub_603E37A4(int a1, int a2, int a3);  /* 0x003e37a4 */
bool __fastcall sub_603E38D4(int a1, int a2);  /* 0x003e38d4 */
void __fastcall sub_603E3A4C(_BYTE *a1);  /* 0x003e3a4c */
int __fastcall sub_603E3AD8(_BYTE *a1);  /* 0x003e3ad8 */
int __fastcall LavaGeyser_vf156(int a1);  /* 0x003e3b68 */
int __fastcall sub_603E3B74(int a1);  /* 0x003e3b74 */
int __fastcall sub_603E3C78(int a1, int a2);  /* 0x003e3c78 */
void __fastcall sub_603E3D10(_BYTE *a1);  /* 0x003e3d10 */
int __fastcall sub_603E3E30(int a1);  /* 0x003e3e30 */
int __fastcall sub_603E4030(int a1, int (__fastcall ***a2)(_DWORD, int));  /* 0x003e4030 */
int __fastcall sub_603E40C8(struct sead_IDisposer *a1);  /* 0x003e40c8 */
bool __fastcall sub_603E40D8(int a1, int a2);  /* 0x003e40d8 */
void __fastcall sub_603E4284(struct sead_IDisposer *a1);  /* 0x003e4284 */
int __fastcall sub_603E42CC(struct sead_IDisposer *a1);  /* 0x003e42cc */
bool __fastcall sub_603E4318(int a1, int a2);  /* 0x003e4318 */
int __fastcall sub_603E4460(struct sead_IDisposer *a1);  /* 0x003e4460 */
bool __fastcall sub_603E4470(int a1, int a2);  /* 0x003e4470 */
bool __fastcall sub_603E4618(int a1);  /* 0x003e4618 */
bool __fastcall sub_603E46EC(int a1, int a2);  /* 0x003e46ec */
int __fastcall sub_603E482C(struct sead_IDisposer *a1);  /* 0x003e482c */
bool __fastcall sub_603E483C(int a1, int a2);  /* 0x003e483c */
int __fastcall sub_603E49B0(int a1, int a2);  /* 0x003e49b0 */
int __fastcall sub_603E49F8(int a1);  /* 0x003e49f8 */
int __fastcall sub_603E4AB4(int a1);  /* 0x003e4ab4 */
int __fastcall sub_603E4AD8(int result);  /* 0x003e4ad8 */
bool __fastcall sub_603E4B28(int a1);  /* 0x003e4b28 */
bool __fastcall sub_603E4B78(int a1, int a2);  /* 0x003e4b78 */
int __fastcall sub_603E4CB4(struct sead_IDisposer *a1);  /* 0x003e4cb4 */
bool __fastcall sub_603E4CC4(int a1, int a2);  /* 0x003e4cc4 */
int __fastcall sub_603E4E64(int a1);  /* 0x003e4e64 */
int __fastcall sub_603E4E80(int a1);  /* 0x003e4e80 */
int __fastcall sub_603E4E88(struct sead_IDisposer *a1);  /* 0x003e4e88 */
bool __fastcall sub_603E4E98(int a1, int a2);  /* 0x003e4e98 */
int __fastcall sub_603E5060(struct sead_IDisposer *a1);  /* 0x003e5060 */
int __fastcall sub_603E5154(int a1);  /* 0x003e5154 */
int __fastcall sub_603E54CC(int a1, int a2);  /* 0x003e54cc */
int __fastcall sub_603E552C(int a1, int a2);  /* 0x003e552c */
int __fastcall sub_603E557C(_DWORD *a1);  /* 0x003e557c */
int __fastcall sub_603E5704(int a1);  /* 0x003e5704 */
int __fastcall sub_603E576C(int a1, int (__fastcall ***a2)(_DWORD, int));  /* 0x003e576c */
int __fastcall sub_603E5840(struct sead_IDisposer *a1);  /* 0x003e5840 */
bool __fastcall sub_603E5850(int a1, int a2);  /* 0x003e5850 */
bool __fastcall sub_603E5B44(int a1, int a2);  /* 0x003e5b44 */
int __fastcall sub_603E5C14(struct sead_IDisposer *a1);  /* 0x003e5c14 */
bool __fastcall sub_603E5C24(int a1, int a2);  /* 0x003e5c24 */
int __fastcall sub_603E5DA4(int result);  /* 0x003e5da4 */
int __fastcall sub_603E5DB0(int a1);  /* 0x003e5db0 */
int __fastcall sub_603E5E9C(int a1);  /* 0x003e5e9c */
int __fastcall sub_603E5EB8(int a1);  /* 0x003e5eb8 */
int __fastcall sub_603E5FB4(int result);  /* 0x003e5fb4 */
int __fastcall sub_603E5FC0(int result);  /* 0x003e5fc0 */
int __fastcall sub_603E5FF0(int result);  /* 0x003e5ff0 */
int __fastcall sub_603E5FFC(int result);  /* 0x003e5ffc */
int __fastcall sub_603E602C(int a1);  /* 0x003e602c */
int __fastcall sub_603E6048(int a1);  /* 0x003e6048 */
int __fastcall sub_603E621C(int result);  /* 0x003e621c */
int __fastcall sub_603E6228(int a1);  /* 0x003e6228 */
int __fastcall STRM_BGM_SHADOW_START_ref(int a1);  /* 0x003e63d0 */
int __fastcall sub_603E6510(int a1);  /* 0x003e6510 */
int __fastcall sub_603E6528(int a1);  /* 0x003e6528 */
int __fastcall sub_603E65E4(int a1);  /* 0x003e65e4 */
bool __fastcall sub_603E65F0(int a1, int a2);  /* 0x003e65f0 */
void __fastcall sub_603E66C8(struct sead_IDisposer *a1);  /* 0x003e66c8 */
int __fastcall sub_603E66CC(struct sead_IDisposer *a1);  /* 0x003e66cc */
bool __fastcall sub_603E66DC(int a1, int a2);  /* 0x003e66dc */
int __fastcall sub_603E6868(int a1, int a2);  /* 0x003e6868 */
int __fastcall sub_603E68A0(int a1, _DWORD *a2);  /* 0x003e68a0 */
int __fastcall sub_603E68E4(int a1, int a2);  /* 0x003e68e4 */
int __fastcall sub_603E68F0(int result, _DWORD *a2);  /* 0x003e68f0 */
int __fastcall sub_603E6900(int a1, int a2);  /* 0x003e6900 */
int __fastcall sub_603E6928(int a1);  /* 0x003e6928 */
int __fastcall sub_603E6930(int a1);  /* 0x003e6930 */
int __fastcall sub_603E6BF8(int a1);  /* 0x003e6bf8 */
int __fastcall sub_603E6C70(int a1);  /* 0x003e6c70 */
int __fastcall sub_603E6CD4(int result);  /* 0x003e6cd4 */
int __fastcall sub_603E6CE0(int result);  /* 0x003e6ce0 */
int __fastcall sub_603E6D10(int a1);  /* 0x003e6d10 */
int __fastcall sub_603E6D40(int result);  /* 0x003e6d40 */
int __fastcall sub_603E6D70(int a1);  /* 0x003e6d70 */
int __fastcall sub_603E70C4(int result);  /* 0x003e70c4 */
int __fastcall sub_603E70D0(int result);  /* 0x003e70d0 */
int __fastcall sub_603E7100(int a1);  /* 0x003e7100 */
int __fastcall sub_603E711C(int a1);  /* 0x003e711c */
int __fastcall sub_603E7224(int result);  /* 0x003e7224 */
int __fastcall sub_603E7258(int a1);  /* 0x003e7258 */
int __fastcall sub_603E7314(int a1);  /* 0x003e7314 */
int __fastcall sub_603E73D0(int a1);  /* 0x003e73d0 */
int __fastcall sub_603E73EC(int a1);  /* 0x003e73ec */
int __fastcall sub_603E7450(_DWORD *a1);  /* 0x003e7450 */
int __fastcall sub_603E7454(_DWORD *a1);  /* 0x003e7454 */
int __fastcall sub_603E74CC(int a1);  /* 0x003e74cc */
int __fastcall sub_603E7530(int result);  /* 0x003e7530 */
int __fastcall sub_603E75B8(int a1);  /* 0x003e75b8 */
int __fastcall sub_603E7690(int a1, int *a2);  /* 0x003e7690 */
int __fastcall STRM_BGM_SHADOW_CATCH_ref(int a1);  /* 0x003e772c */
int __fastcall sub_603E7870(int a1);  /* 0x003e7870 */
int __fastcall sub_603E7888(int a1);  /* 0x003e7888 */
int __fastcall sub_603E78EC(int a1);  /* 0x003e78ec */
int __fastcall sub_603E791C(int a1);  /* 0x003e791c */
int __fastcall sub_603E7928(int a1, int a2);  /* 0x003e7928 */
int __fastcall sub_603E7AC8(int a1);  /* 0x003e7ac8 */
int __fastcall sub_603E7D14(int a1, int a2);  /* 0x003e7d14 */
int __fastcall sub_603E801C(int a1, int a2);  /* 0x003e801c */
int __fastcall sub_603E814C(int a1, int a2);  /* 0x003e814c */
int __fastcall sub_603E827C(_DWORD *a1);  /* 0x003e827c */
int __fastcall sub_603E83F8(_DWORD *a1);  /* 0x003e83f8 */
void __fastcall sub_603E85B8(struct sead_IDisposer *a1);  /* 0x003e85b8 */
int __fastcall sub_603E85BC(struct sead_IDisposer *a1);  /* 0x003e85bc */
bool __fastcall sub_603E85CC(int a1, int a2);  /* 0x003e85cc */
int __fastcall sub_603E8758(int a1, int a2);  /* 0x003e8758 */
int __fastcall sub_603E8790(int a1, _DWORD *a2);  /* 0x003e8790 */
int __fastcall sub_603E87D4(int a1, int a2);  /* 0x003e87d4 */
int __fastcall sub_603E87E0(int result, _DWORD *a2);  /* 0x003e87e0 */
int __fastcall sub_603E87F0(int a1, int a2);  /* 0x003e87f0 */
int __fastcall sub_603E8818(int a1);  /* 0x003e8818 */
int __fastcall sub_603E8820(int a1);  /* 0x003e8820 */
int __fastcall sub_603E8CB4(int result);  /* 0x003e8cb4 */
int __fastcall sub_603E8CC0(int a1);  /* 0x003e8cc0 */
int __fastcall sub_603E8CC8(int result);  /* 0x003e8cc8 */
bool __fastcall sub_603E8CD4(int a1, int a2);  /* 0x003e8cd4 */
int __fastcall sub_603E8FB4(struct sead_IDisposer *a1);  /* 0x003e8fb4 */
bool __fastcall sub_603E8FC4(int a1, int a2);  /* 0x003e8fc4 */
int __fastcall sub_603E9254(int a1, int (__fastcall ***a2)(_DWORD, int));  /* 0x003e9254 */
int __fastcall sub_603E92EC(struct sead_IDisposer *a1);  /* 0x003e92ec */
bool __fastcall sub_603E92FC(int a1, int a2);  /* 0x003e92fc */
int __fastcall sub_603E947C(int result);  /* 0x003e947c */
int __fastcall sub_603E9488(int result);  /* 0x003e9488 */
int __fastcall sub_603E94B8(int a1);  /* 0x003e94b8 */
int __fastcall sub_603E94E8(int a1);  /* 0x003e94e8 */
int __fastcall sub_603E95BC(int result);  /* 0x003e95bc */
int __fastcall sub_603E9668(_DWORD *a1);  /* 0x003e9668 */
int __fastcall sub_603E9674(_DWORD *a1);  /* 0x003e9674 */
int __fastcall sub_603E9878(int a1);  /* 0x003e9878 */
int __fastcall sub_603E98B8(int a1);  /* 0x003e98b8 */
int __fastcall sub_603E98D4(_DWORD *a1, int a2);  /* 0x003e98d4 */
int __fastcall sub_603E9A04(int result);  /* 0x003e9a04 */
int __fastcall sub_603E9A10(int a1);  /* 0x003e9a10 */
int __fastcall sub_603E9B40(int a1);  /* 0x003e9b40 */
int __fastcall sub_603E9B9C(int a1);  /* 0x003e9b9c */
int __fastcall sub_603E9BDC(int result);  /* 0x003e9bdc */
int __fastcall sub_603E9C0C(int result);  /* 0x003e9c0c */
int __fastcall sub_603E9C18(int a1);  /* 0x003e9c18 */
int __fastcall sub_603E9D0C(int a1);  /* 0x003e9d0c */
int __fastcall sub_603E9D34(int a1);  /* 0x003e9d34 */
int __fastcall sub_603E9E40(int a1, int a2);  /* 0x003e9e40 */
int __fastcall sub_603E9F30(_DWORD *a1);  /* 0x003e9f30 */
int __fastcall sub_603EA048(int a1);  /* 0x003ea048 */
int __fastcall sub_603EA060(int a1);  /* 0x003ea060 */
int __fastcall sub_603EA108(int a1);  /* 0x003ea108 */
bool __fastcall sub_603EA114(int a1, int a2);  /* 0x003ea114 */
int __fastcall sub_603EA364(_DWORD *a1);  /* 0x003ea364 */
int __fastcall sub_603EA564(int result);  /* 0x003ea564 */
void __fastcall sub_603EA698(struct sead_IDisposer *a1);  /* 0x003ea698 */
int __fastcall sub_603EA69C(struct sead_IDisposer *a1);  /* 0x003ea69c */
bool __fastcall sub_603EA6AC(int a1, int a2);  /* 0x003ea6ac */
int __fastcall sub_603EA838(int a1, int a2);  /* 0x003ea838 */
int __fastcall sub_603EA870(int a1, _DWORD *a2);  /* 0x003ea870 */
int __fastcall sub_603EA8B4(int a1, int a2);  /* 0x003ea8b4 */
int __fastcall sub_603EA8C0(int result, _DWORD *a2);  /* 0x003ea8c0 */
int __fastcall sub_603EA8D0(int a1, int a2);  /* 0x003ea8d0 */
int __fastcall sub_603EA8F8(int a1);  /* 0x003ea8f8 */
int __fastcall sub_603EA900(int a1);  /* 0x003ea900 */
int __fastcall sub_603EADE8(int a1);  /* 0x003eade8 */
bool __fastcall sub_603EADF0(int a1, int a2);  /* 0x003eadf0 */
int __fastcall sub_603EAEC8(struct sead_IDisposer *a1);  /* 0x003eaec8 */
bool __fastcall sub_603EAED8(int a1, int a2);  /* 0x003eaed8 */
int __fastcall sub_603EB05C(int a1);  /* 0x003eb05c */
int __fastcall SE_VOC_SHA_LAUGH_ref_2(int a1);  /* 0x003eb09c */
int __fastcall sub_603EB144(int a1);  /* 0x003eb144 */
int __fastcall sub_603EB160(int a1);  /* 0x003eb160 */
int __fastcall sub_603EB1C4(int result);  /* 0x003eb1c4 */
int __fastcall sub_603EB1D0(int result);  /* 0x003eb1d0 */
int __fastcall sub_603EB318(int a1);  /* 0x003eb318 */
int __fastcall sub_603EB35C(int a1);  /* 0x003eb35c */
int __fastcall sub_603EB374(int a1);  /* 0x003eb374 */
int __fastcall sub_603EB3AC(int a1);  /* 0x003eb3ac */
void __fastcall sub_603EB4FC(struct sead_IDisposer *a1);  /* 0x003eb4fc */
int __fastcall sub_603EB500(struct sead_IDisposer *a1);  /* 0x003eb500 */
bool __fastcall sub_603EB510(int a1, int a2);  /* 0x003eb510 */
int __fastcall sub_603EB69C(int a1, int a2);  /* 0x003eb69c */
int __fastcall sub_603EB6D4(int a1, _DWORD *a2);  /* 0x003eb6d4 */
int __fastcall sub_603EB718(int a1, int a2);  /* 0x003eb718 */
int __fastcall sub_603EB724(int result, _DWORD *a2);  /* 0x003eb724 */
int __fastcall sub_603EB734(int a1, int a2);  /* 0x003eb734 */
int __fastcall sub_603EB75C(int a1);  /* 0x003eb75c */
int __fastcall sub_603EB764(int a1);  /* 0x003eb764 */
int __fastcall sub_603EBA4C(int a1, int (__fastcall ***a2)(_DWORD, int));  /* 0x003eba4c */
int __fastcall sub_603EBAE4(struct sead_IDisposer *a1);  /* 0x003ebae4 */
bool __fastcall sub_603EBAF4(int a1, int a2);  /* 0x003ebaf4 */
int __fastcall sub_603EBDC0(int a1, int (__fastcall ***a2)(_DWORD, int));  /* 0x003ebdc0 */
int __fastcall sub_603EBE58(struct sead_IDisposer *a1);  /* 0x003ebe58 */
bool __fastcall sub_603EBE68(int a1, int a2);  /* 0x003ebe68 */
int __fastcall sub_603EBFDC(int a1);  /* 0x003ebfdc */
bool __fastcall sub_603EBFE4(int a1, int (__fastcall ***a2)(_DWORD, int));  /* 0x003ebfe4 */
int __fastcall sub_603EC130(struct sead_IDisposer *a1);  /* 0x003ec130 */
int __fastcall sub_603EC4AC(int a1, int a2, _DWORD *a3, int a4);  /* 0x003ec4ac */
unsigned int __fastcall sub_603EC7B0(int a1);  /* 0x003ec7b0 */
int __fastcall sub_603EC9F0(_DWORD *a1);  /* 0x003ec9f0 */
unsigned int __fastcall sub_603ECBA8(int a1);  /* 0x003ecba8 */
int __fastcall sub_603ECD60(int result, int a2, int a3, int a4, int a5);  /* 0x003ecd60 */
int __fastcall sub_603ECDF0(int a1, int a2, _DWORD *a3, int a4, char a5);  /* 0x003ecdf0 */
int __fastcall sub_603ED27C(int a1);  /* 0x003ed27c */
int __fastcall sub_603ED430(int a1);  /* 0x003ed430 */
int __fastcall sub_603ED498(int a1, int a2, _DWORD *a3, int a4);  /* 0x003ed498 */
int __fastcall sub_603ED578(int a1);  /* 0x003ed578 */
int __fastcall sub_603ED650(int a1);  /* 0x003ed650 */
int __fastcall sub_603ED814(_DWORD *a1);  /* 0x003ed814 */
int __fastcall sub_603ED964(int result);  /* 0x003ed964 */
int __fastcall sub_603EDB84(_DWORD **a1, int a2, int a3, int a4, int a5);  /* 0x003edb84 */
int __fastcall sub_603EDC5C(struct sead_IDisposer *a1);  /* 0x003edc5c */
int __fastcall sub_603EDCD4(int a1);  /* 0x003edcd4 */
int __fastcall sub_603EDDA8(int a1, int a2);  /* 0x003edda8 */
int __fastcall sub_603EDF48(int a1);  /* 0x003edf48 */
int __fastcall sub_603EE1B0(_DWORD *a1, int a2, int a3, int a4);  /* 0x003ee1b0 */
int __fastcall sub_603EE6EC(int a1);  /* 0x003ee6ec */
int __fastcall sub_603EED64(int a1, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, int a6);  /* 0x003eed64 */
int __fastcall sub_603EEE60(int a1);  /* 0x003eee60 */
int __fastcall sub_603EF044(int a1);  /* 0x003ef044 */
int __fastcall sub_603EF1C4(int result);  /* 0x003ef1c4 */
int __fastcall sub_603EF254(int a1, int a2, int a3, int a4, int a5);  /* 0x003ef254 */
int __fastcall sub_603EF270(int a1, int a2, _DWORD *a3);  /* 0x003ef270 */
int __fastcall sub_603EF304(int a1);  /* 0x003ef304 */
int __fastcall sub_603EF410(int a1);  /* 0x003ef410 */
int __fastcall sub_603EF5A4(int a1);  /* 0x003ef5a4 */
int __fastcall sub_603EF5E0(int a1);  /* 0x003ef5e0 */
int __fastcall sub_603EF6C8(int a1, int a2, int a3, int a4, int a5);  /* 0x003ef6c8 */
int __fastcall sub_603EF6E4(int a1, int a2, _DWORD *a3, int a4, int a5);  /* 0x003ef6e4 */
int __fastcall sub_603EF788(int a1);  /* 0x003ef788 */
int __fastcall sub_603EF7D8(int a1);  /* 0x003ef7d8 */
int __fastcall sub_603EF810(int a1);  /* 0x003ef810 */
int __fastcall sub_603EFA30(struct sead_IDisposer *a1);  /* 0x003efa30 */
int __fastcall sub_603EFADC(int a1);  /* 0x003efadc */
int __fastcall sub_603EFBA8(int a1);  /* 0x003efba8 */
int __fastcall sub_603EFBF4(int a1);  /* 0x003efbf4 */
int __fastcall sub_603EFC40(int a1, int a2);  /* 0x003efc40 */
int __fastcall sub_603EFEAC(int result, unsigned int a2, int a3);  /* 0x003efeac */
int __fastcall sub_603F0040(int result, int a2, int a3, int a4);  /* 0x003f0040 */
int __fastcall sub_603F01A0(int result, int a2, int a3, int a4);  /* 0x003f01a0 */
void __fastcall sub_603F02F4(int a1, unsigned int a2, unsigned int a3);  /* 0x003f02f4 */
int __fastcall sub_603F0340(int result, int a2);  /* 0x003f0340 */
int __fastcall sub_603F0474(int a1, int a2);  /* 0x003f0474 */
bool __fastcall sub_603F056C(int a1, int a2);  /* 0x003f056c */
int __fastcall sub_603F0658(int a1, int a2);  /* 0x003f0658 */
int __fastcall sub_603F0768(int result, int a2, int a3, int a4);  /* 0x003f0768 */
int __fastcall sub_603F086C(_BYTE *a1);  /* 0x003f086c */
void __fastcall sub_603F0964(int a1, int a2, int a3, int a4);  /* 0x003f0964 */
void __fastcall sub_603F0A44(int a1, int a2, int a3, _DWORD *a4);  /* 0x003f0a44 */
void __fastcall sub_603F0B38(int a1, int a2, int a3, int a4);  /* 0x003f0b38 */
void __fastcall sub_603F0BF4(int a1, int a2, int a3, _DWORD *a4);  /* 0x003f0bf4 */
void __fastcall sub_603F0FBC(int a1, int a2, int a3, int a4);  /* 0x003f0fbc */
void __fastcall sub_603F0FE8(int a1, int a2, int a3, int a4);  /* 0x003f0fe8 */
int __fastcall sub_603F1020(int a1);  /* 0x003f1020 */
int __fastcall sub_603F1364(int a1);  /* 0x003f1364 */
int __fastcall sub_603F14B8(struct sead_IDisposer *a1);  /* 0x003f14b8 */
int __fastcall sub_603F14FC(int result);  /* 0x003f14fc */
int __fastcall AreaTask_ctor(int a1, int a2);  /* 0x003f1530 */
void __fastcall sub_603F18C0(struct sead_CalculateTask *a1);  /* 0x003f18c0 */
int __fastcall sub_603F1998(struct sead_CalculateTask *a1);  /* 0x003f1998 */
int __fastcall sub_603F19A8(int a1);  /* 0x003f19a8 */
int __fastcall sub_603F1A78(struct sead_TaskBase *a1);  /* 0x003f1a78 */
int __fastcall sub_603F1A7C(int a1);  /* 0x003f1a7c */
int __fastcall sub_603F27E4(_DWORD *a1);  /* 0x003f27e4 */
int __fastcall sub_603F2858(int a1, int a2);  /* 0x003f2858 */
int __fastcall sub_603F30AC(int a1, int a2);  /* 0x003f30ac */
int __fastcall gbuffer_texture_ref(int a1, int *a2);  /* 0x003f32b4 */
int __fastcall sub_603F32D4(int a1, int *a2);  /* 0x003f32d4 */
int __fastcall sub_603F3348(int a1, int a2);  /* 0x003f3348 */
int __fastcall sub_603F335C(int a1, int *a2);  /* 0x003f335c */
int __fastcall sub_603F366C(int a1, _DWORD *a2);  /* 0x003f366c */
int __fastcall sub_603F3688(int a1);  /* 0x003f3688 */
int __fastcall sub_603F38C8(int a1);  /* 0x003f38c8 */
int __fastcall sub_603F41B8(int a1);  /* 0x003f41b8 */
int __fastcall sub_603F44D0(int a1);  /* 0x003f44d0 */
int __fastcall sub_603F4628(_DWORD *a1, int a2);  /* 0x003f4628 */
int __fastcall sub_603F471C(int result, int a2);  /* 0x003f471c */
int __fastcall sub_603F472C(int a1);  /* 0x003f472c */
int __fastcall sub_603F4740(_DWORD *a1, int a2);  /* 0x003f4740 */
int __fastcall sub_603F47D0(_DWORD *a1, int a2);  /* 0x003f47d0 */
int __fastcall sub_603F4860(int a1);  /* 0x003f4860 */
int __fastcall sub_603F48B0(int result);  /* 0x003f48b0 */
int __fastcall sub_603F48DC(int result);  /* 0x003f48dc */
int __fastcall AreaTask_getWrappedXPos(int result);  /* 0x003f4900 */
int __fastcall sub_603F4960(int result);  /* 0x003f4960 */
int __fastcall sub_603F496C(int result);  /* 0x003f496c */
int __fastcall sub_603F4998(int result);  /* 0x003f4998 */
int __fastcall sub_603F49C0(int result);  /* 0x003f49c0 */
int __fastcall sub_603F49E8(int result);  /* 0x003f49e8 */
int __fastcall sub_603F4A10(int a1, int a2, char *a3);  /* 0x003f4a10 */
int __fastcall sub_603F4B70(int a1, int a2);  /* 0x003f4b70 */
int __fastcall sub_603F4BF4(int a1, float *a2, int *a3);  /* 0x003f4bf4 */
int __fastcall sub_603F4DF4(int a1);  /* 0x003f4df4 */
int __fastcall sub_603F4EAC(int a1);  /* 0x003f4eac */
int __fastcall sub_603F4FD8(int a1, int a2);  /* 0x003f4fd8 */
int __fastcall sub_603F5010(int a1);  /* 0x003f5010 */
int __fastcall sub_603F5020(int a1);  /* 0x003f5020 */
int __fastcall SE_SYS_CE_ref_3_helper(int a1);  /* 0x003f5030 */
bool __fastcall sub_603F5040(int a1, int a2);  /* 0x003f5040 */
int __fastcall sub_603F52A4(int a1, int a2);  /* 0x003f52a4 */
int __fastcall sub_603F54A8(struct sead_IDisposer *a1);  /* 0x003f54a8 */
int __fastcall sub_603F5508(int a1);  /* 0x003f5508 */
int __fastcall sub_603F55B8(int result);  /* 0x003f55b8 */
int __fastcall sub_603F564C(int a1);  /* 0x003f564c */
int __fastcall sub_603F5A08(int a1);  /* 0x003f5a08 */
int __fastcall sub_603F5BC4(int a1, float *a2, float *a3, float *a4, float *a5);  /* 0x003f5bc4 */
int __fastcall sub_603F6084(int a1);  /* 0x003f6084 */
int __fastcall sub_603F622C(int a1);  /* 0x003f622c */
int __fastcall ChallengeResultScene_ctor_helper_helper_3F625C(int a1);  /* 0x003f625c */
int __fastcall sub_603F6288(int a1);  /* 0x003f6288 */
int __fastcall sub_603F62C0(int a1);  /* 0x003f62c0 */
int __fastcall sub_603F6394(int a1);  /* 0x003f6394 */
int __fastcall sub_603F63BC(int a1);  /* 0x003f63bc */
int __fastcall sub_603F63F8(int a1);  /* 0x003f63f8 */
int __fastcall sub_603F64BC(int a1);  /* 0x003f64bc */
int __fastcall sub_603F657C(struct sead_IDisposer *a1);  /* 0x003f657c */
int __fastcall sub_603F6634(struct sead_IDisposer *a1);  /* 0x003f6634 */
int __fastcall sub_603F675C(int a1);  /* 0x003f675c */
int __fastcall sub_603F6788(int a1);  /* 0x003f6788 */
int __fastcall sub_603F67B8(int a1);  /* 0x003f67b8 */
int __fastcall sub_603F6868(int a1);  /* 0x003f6868 */
int __fastcall sub_603F68B4(int a1, int a2);  /* 0x003f68b4 */
int __fastcall sub_603F68F8(int result);  /* 0x003f68f8 */
int __fastcall sub_603F692C(int result);  /* 0x003f692c */
int __fastcall sub_603F6960(unsigned __int8 *a1, int a2, int a3);  /* 0x003f6960 */
int __fastcall sub_603F69FC(_BYTE *a1, int a2, int a3);  /* 0x003f69fc */
int __fastcall sub_603F6AA0(unsigned __int8 *a1, int a2, int a3);  /* 0x003f6aa0 */
int __fastcall sub_603F6B0C(unsigned __int8 *a1, int a2, int a3);  /* 0x003f6b0c */
int __fastcall sub_603F6B7C(int a1);  /* 0x003f6b7c */
int __fastcall sub_603F6C14(unsigned __int8 *a1, int a2);  /* 0x003f6c14 */
int __fastcall sub_603F6EA0(unsigned __int8 *a1, _BYTE *a2);  /* 0x003f6ea0 */
int __fastcall sub_603F6F84(unsigned __int8 *a1);  /* 0x003f6f84 */
bool __fastcall sub_603F7144(unsigned __int8 *a1);  /* 0x003f7144 */
int __fastcall sub_603F727C(_BYTE *a1, int a2, int a3);  /* 0x003f727c */
int __fastcall sub_603F72B8(_BYTE *a1, int a2, int a3);  /* 0x003f72b8 */
int __fastcall sub_603F72F4(_BYTE *a1, int a2, int a3);  /* 0x003f72f4 */
int __fastcall sub_603F7338(_BYTE *a1, int a2, int a3);  /* 0x003f7338 */
int __fastcall sub_603F737C(char *a1, int a2, int a3);  /* 0x003f737c */
int __fastcall sub_603F73CC(char *a1, int a2, int a3);  /* 0x003f73cc */
int __fastcall sub_603F7420(_BYTE *a1, int a2, int a3);  /* 0x003f7420 */
int __fastcall sub_603F7464(_BYTE *a1, int a2, int a3);  /* 0x003f7464 */
int __fastcall sub_603F74A8(_BYTE *a1, int a2);  /* 0x003f74a8 */
int __fastcall sub_603F7548(_BYTE *a1);  /* 0x003f7548 */
int __fastcall sub_603F75FC(_BYTE *a1);  /* 0x003f75fc */
int __fastcall sub_603F76B0(int a1, int a2, int a3);  /* 0x003f76b0 */
int __fastcall sub_603F76F4(int a1, int a2, int a3, unsigned int a4);  /* 0x003f76f4 */
int __fastcall sub_603F774C(int a1, int a2, int a3);  /* 0x003f774c */
void __fastcall sub_603F77EC(int a1);  /* 0x003f77ec */
void __fastcall sub_603F7840(int a1, int a2);  /* 0x003f7840 */
void __fastcall sub_603F7868(int a1, int a2);  /* 0x003f7868 */
void __fastcall sub_603F7878(int a1, int a2);  /* 0x003f7878 */
void __fastcall sub_603F78A8(int a1, int a2);  /* 0x003f78a8 */
int __fastcall sub_603F78BC(_BYTE *a1, int a2, int a3, int a4);  /* 0x003f78bc */
int __fastcall sub_603F79C4(struct sead_IDisposer *a1);  /* 0x003f79c4 */
int __fastcall sub_603F7A98(int a1, int a2, int a3, unsigned int a4);  /* 0x003f7a98 */
int __fastcall sub_603F7B18(int a1, int a2, unsigned int a3);  /* 0x003f7b18 */
int __fastcall sub_603F7B98(int a1, int a2);  /* 0x003f7b98 */
int __fastcall sub_603F7BC8(int a1);  /* 0x003f7bc8 */
int __fastcall sub_603F7D00(int a1, int a2);  /* 0x003f7d00 */
int __fastcall sub_603F7D90(struct sead_IDisposer *a1);  /* 0x003f7d90 */
int __fastcall sub_603F7EE4(int a1, unsigned int a2);  /* 0x003f7ee4 */
int __fastcall sub_603F7EFC(int a1, unsigned int a2);  /* 0x003f7efc */
int __fastcall sub_603F7F84(struct sead_IDisposer *a1);  /* 0x003f7f84 */
int __fastcall sub_603F807C(int a1);  /* 0x003f807c */
int __fastcall sub_603F8084(int a1);  /* 0x003f8084 */
int __fastcall sub_603F808C(int a1);  /* 0x003f808c */
int __fastcall sub_603F8094(int result);  /* 0x003f8094 */
int __fastcall sub_603F80C8(int a1, int a2);  /* 0x003f80c8 */
int __fastcall sub_603F8264(int a1);  /* 0x003f8264 */
void __fastcall sub_603F826C(int a1);  /* 0x003f826c */
int __fastcall sub_603F839C(int a1);  /* 0x003f839c */
int __fastcall sub_603F83AC(int a1);  /* 0x003f83ac */
int __fastcall sub_603F8404(struct sead_TaskBase *a1);  /* 0x003f8404 */
int __fastcall sub_603F8408(int a1);  /* 0x003f8408 */
int __fastcall sub_603F9728(int result, unsigned int a2, char a3);  /* 0x003f9728 */
int __fastcall sub_603F9738(_DWORD *a1, int a2);  /* 0x003f9738 */
int __fastcall sub_603F9BD8(_DWORD *a1);  /* 0x003f9bd8 */
int __fastcall sub_603F9F2C(_DWORD *a1);  /* 0x003f9f2c */
int __fastcall sub_603FA204(_DWORD *a1, int *a2);  /* 0x003fa204 */
int __fastcall sub_603FA57C(int a1);  /* 0x003fa57c */
int __fastcall sub_603FAE20(int a1);  /* 0x003fae20 */
int __fastcall sub_603FB300(int a1);  /* 0x003fb300 */
int __fastcall sub_603FB640(int a1, unsigned int a2, int a3);  /* 0x003fb640 */
int __fastcall sub_603FB964(int a1, unsigned int a2);  /* 0x003fb964 */
int __fastcall sub_603FB9A0(int a1, unsigned int a2);  /* 0x003fb9a0 */
int __fastcall sub_603FBA24(int a1);  /* 0x003fba24 */
int __fastcall sub_603FBA2C(int result, int a2, unsigned int a3);  /* 0x003fba2c */
int __fastcall sub_603FBA90(int a1);  /* 0x003fba90 */
int __fastcall sub_603FBAA0(int a1);  /* 0x003fbaa0 */
int __fastcall sub_603FBAB8(int a1);  /* 0x003fbab8 */
int __fastcall sub_603FBAD0(int a1);  /* 0x003fbad0 */
int __fastcall sub_603FBAF8(int a1);  /* 0x003fbaf8 */
int __fastcall sub_603FBB0C(int a1);  /* 0x003fbb0c */
int __fastcall sub_603FBB34(int a1);  /* 0x003fbb34 */
bool __fastcall sub_603FBB80(int a1);  /* 0x003fbb80 */
bool __fastcall sub_603FBBA4(int a1);  /* 0x003fbba4 */
int __fastcall sub_603FBBC8(int a1, unsigned int a2);  /* 0x003fbbc8 */
bool __fastcall sub_603FBBE4(int a1);  /* 0x003fbbe4 */
unsigned int __fastcall sub_603FBC00(int a1);  /* 0x003fbc00 */
int __fastcall sub_603FBC08(int a1);  /* 0x003fbc08 */
int __fastcall sub_603FBC14(int a1, int a2);  /* 0x003fbc14 */
bool __fastcall sub_603FBC1C(int a1);  /* 0x003fbc1c */
int __fastcall sub_603FBC38(int a1, _DWORD *a2);  /* 0x003fbc38 */
int __fastcall sub_603FBC48(int a1, int a2);  /* 0x003fbc48 */
bool __fastcall sub_603FBC50(int a1);  /* 0x003fbc50 */
int __fastcall sub_603FBC68(int a1, _DWORD *a2);  /* 0x003fbc68 */
int __fastcall sub_603FBC78(int a1, int a2, int a3);  /* 0x003fbc78 */
int __fastcall sub_603FBC80(int a1, int *a2);  /* 0x003fbc80 */
bool __fastcall sub_603FBC88(int a1);  /* 0x003fbc88 */
int __fastcall sub_603FBCA4(int a1);  /* 0x003fbca4 */
int __fastcall sub_603FBCB8(int a1);  /* 0x003fbcb8 */
int __fastcall sub_603FBCC8(int result, unsigned int a2);  /* 0x003fbcc8 */
int __fastcall sub_603FBCE0(int a1, int a2, int a3);  /* 0x003fbce0 */
int __fastcall sub_603FBCE8(int a1, int *a2);  /* 0x003fbce8 */
int __fastcall sub_603FBCF0(int a1);  /* 0x003fbcf0 */
int __fastcall sub_603FBD04(int a1);  /* 0x003fbd04 */
int __fastcall sub_603FBD14(int result, unsigned int a2);  /* 0x003fbd14 */
int __fastcall sub_603FBD2C(int a1, int a2);  /* 0x003fbd2c */
int __fastcall sub_603FBE30(int a1, char a2);  /* 0x003fbe30 */
unsigned int __fastcall sub_603FBE40(int a1);  /* 0x003fbe40 */
int __fastcall sub_603FBE70(int a1);  /* 0x003fbe70 */
bool __fastcall sub_603FBEA8(int a1);  /* 0x003fbea8 */
bool __fastcall sub_603FBECC(int a1, int a2);  /* 0x003fbecc */
int __fastcall sub_603FBFE8(int a1, _DWORD *a2);  /* 0x003fbfe8 */
bool __fastcall sub_603FC0B4(int a1);  /* 0x003fc0b4 */
int __fastcall sub_603FC29C(int a1);  /* 0x003fc29c */
int __fastcall sub_603FC484(struct sead_IDisposer *a1);  /* 0x003fc484 */
int __fastcall sub_603FC56C(int result, int a2);  /* 0x003fc56c */
unsigned int __fastcall sub_603FC57C(int a1);  /* 0x003fc57c */
unsigned int __fastcall sub_603FC6A0(int a1);  /* 0x003fc6a0 */
unsigned int __fastcall sub_603FC6B4(int a1, int a2);  /* 0x003fc6b4 */
unsigned int __fastcall sub_603FC744(int a1);  /* 0x003fc744 */
int __fastcall sub_603FC760(int a1);  /* 0x003fc760 */
int __fastcall sub_603FC7E0(struct sead_IDisposer *a1);  /* 0x003fc7e0 */
int __fastcall sub_603FC8C4(int a1);  /* 0x003fc8c4 */
int __fastcall sub_603FCB00(_DWORD *a1, int a2);  /* 0x003fcb00 */
int __fastcall sub_603FCB6C(_DWORD *a1, int a2);  /* 0x003fcb6c */
int __fastcall sub_603FCBD8(_DWORD *a1, int a2);  /* 0x003fcbd8 */
void __fastcall sub_603FCC50(int a1, unsigned int a2, unsigned int a3);  /* 0x003fcc50 */
void __fastcall sub_603FCCC0(_DWORD *a1, int a2, int a3, int a4, int a5);  /* 0x003fccc0 */
void __fastcall sub_603FCCE4(_DWORD *a1, int *a2);  /* 0x003fcce4 */
int __fastcall sub_603FCFF8(int a1, int a2);  /* 0x003fcff8 */
int __fastcall sub_603FD0B4(_BYTE *a1);  /* 0x003fd0b4 */
bool __fastcall sub_603FD0E8(int a1);  /* 0x003fd0e8 */
int __fastcall sub_603FD238(int a1);  /* 0x003fd238 */
int __fastcall sub_603FD36C(int result, int a2);  /* 0x003fd36c */
int __fastcall sub_603FD374(int a1);  /* 0x003fd374 */
int __fastcall sub_603FD434(int a1);  /* 0x003fd434 */
bool __fastcall sub_603FD44C(int a1);  /* 0x003fd44c */
int __fastcall sub_603FD464(int result, int a2, int a3);  /* 0x003fd464 */
unsigned int __fastcall sub_603FD530(unsigned int *a1);  /* 0x003fd530 */
int __fastcall sub_603FD554(int *a1);  /* 0x003fd554 */
int __fastcall sub_603FD564(int *a1);  /* 0x003fd564 */
int __fastcall sub_603FD5C8(struct sead_IDisposer *a1);  /* 0x003fd5c8 */
int __fastcall sub_603FD69C(int result);  /* 0x003fd69c */
int __fastcall sub_603FD6E0(int a1, int a2);  /* 0x003fd6e0 */
int __fastcall sub_603FD768(int a1, int a2, __int16 a3);  /* 0x003fd768 */
unsigned int __fastcall sub_603FD93C(int a1);  /* 0x003fd93c */
int __fastcall sub_603FD94C(int *a1, unsigned int *a2, unsigned int *a3, unsigned int a4);  /* 0x003fd94c */
unsigned int __fastcall sub_603FD9AC(int a1);  /* 0x003fd9ac */
unsigned int __fastcall sub_603FD9BC(int a1);  /* 0x003fd9bc */
int __fastcall sub_603FD9CC(int a1);  /* 0x003fd9cc */
int __fastcall sub_603FDA80(int a1);  /* 0x003fda80 */
int __fastcall sub_603FDB68(_DWORD *a1, int a2, int a3, int a4, int a5);  /* 0x003fdb68 */
int __fastcall sub_603FDC50(int result);  /* 0x003fdc50 */
int __fastcall sub_603FDC64(int a1);  /* 0x003fdc64 */
int __fastcall sub_603FDF70(_DWORD *a1);  /* 0x003fdf70 */
int __fastcall sub_603FDF80(int a1, int a2, int *a3);  /* 0x003fdf80 */
int __fastcall sub_603FDF84(int a1, int a2, int *a3);  /* 0x003fdf84 */
int __fastcall sub_603FDF88(int a1, int a2, int a3, int *a4);  /* 0x003fdf88 */
int __fastcall sub_603FDF8C(int a1, int a2, int a3, int *a4);  /* 0x003fdf8c */
void __fastcall sub_603FDF90(int a1, int a2, float *a3, int *a4);  /* 0x003fdf90 */
int __fastcall sub_603FDFD0(int a1, int a2, float *a3, int *a4);  /* 0x003fdfd0 */
int __fastcall sub_603FE024(int a1, int a2);  /* 0x003fe024 */
int __fastcall sub_603FE05C(int a1, _DWORD *a2);  /* 0x003fe05c */
int __fastcall sub_603FE0A0(int a1, int a2);  /* 0x003fe0a0 */
int __fastcall sub_603FE0AC(int result, _DWORD *a2);  /* 0x003fe0ac */
int __fastcall sub_603FE0BC(int a1, int a2);  /* 0x003fe0bc */
int __fastcall sub_603FE0E4(int a1);  /* 0x003fe0e4 */
int __fastcall sub_603FE0EC(int a1);  /* 0x003fe0ec */
int __fastcall sub_603FE114(int a1);  /* 0x003fe114 */
int __fastcall sub_603FE2B8(struct sead_IDisposer *a1);  /* 0x003fe2b8 */
int __fastcall sub_603FE3CC(struct sead_IDisposer *a1);  /* 0x003fe3cc */
unsigned int __fastcall sub_603FE52C(int a1);  /* 0x003fe52c */
int __fastcall sub_603FE670(int a1);  /* 0x003fe670 */
unsigned int __fastcall sub_603FE994(int a1);  /* 0x003fe994 */
int __fastcall sub_603FED10(_DWORD *a1);  /* 0x003fed10 */
int __fastcall sub_603FED28(_DWORD *a1);  /* 0x003fed28 */
int __fastcall sub_603FED4C(_DWORD *a1);  /* 0x003fed4c */
int __fastcall sub_603FED64(_DWORD *a1);  /* 0x003fed64 */
int __fastcall sub_603FEE1C(struct sead_IDisposer *a1);  /* 0x003fee1c */
int __fastcall sub_603FEF70(int a1);  /* 0x003fef70 */
int __fastcall sub_603FEFE8(int a1);  /* 0x003fefe8 */
int __fastcall sub_603FF044(int a1, int a2);  /* 0x003ff044 */
int __fastcall sub_603FF0A8(int a1, int a2);  /* 0x003ff0a8 */
int __fastcall sub_603FF154(struct sead_IDisposer *a1);  /* 0x003ff154 */
int __fastcall sub_603FF1CC(int a1);  /* 0x003ff1cc */
int __fastcall sub_603FF2CC(_DWORD *a1);  /* 0x003ff2cc */
int __fastcall sub_603FF310(int a1);  /* 0x003ff310 */
int __fastcall sub_603FF334(int a1);  /* 0x003ff334 */
int __fastcall sub_603FF358(int a1, _DWORD *a2);  /* 0x003ff358 */
int __fastcall sub_603FF388(int a1, _DWORD *a2);  /* 0x003ff388 */
int __fastcall sub_603FF398(int a1);  /* 0x003ff398 */
int __fastcall sub_603FF418(struct sead_IDisposer *a1);  /* 0x003ff418 */
int __fastcall sub_603FF48C(int a1);  /* 0x003ff48c */
int __fastcall sub_603FF528(int a1);  /* 0x003ff528 */
int __fastcall sub_603FF530(int a1);  /* 0x003ff530 */
int __fastcall sub_603FF56C(int result, _DWORD *a2);  /* 0x003ff56c */
int __fastcall sub_603FF584(int a1);  /* 0x003ff584 */
int __fastcall sub_603FF5A0(int a1, int a2, int a3);  /* 0x003ff5a0 */
void __fastcall sub_603FF5F4(_DWORD *a1);  /* 0x003ff5f4 */
int __fastcall sub_603FF698(_DWORD *a1);  /* 0x003ff698 */
int __fastcall sub_603FF740(int a1, int a2, int a3, int a4);  /* 0x003ff740 */
int __fastcall sub_603FF76C(int a1, int a2);  /* 0x003ff76c */
bool __fastcall sub_603FF810(_BYTE *a1);  /* 0x003ff810 */
int __fastcall sub_603FF86C(int result);  /* 0x003ff86c */
int __fastcall sub_603FF880(int a1, _DWORD *a2);  /* 0x003ff880 */
int __fastcall sub_603FFBBC(_DWORD *a1);  /* 0x003ffbbc */
void __fastcall sub_603FFC7C(void *a1);  /* 0x003ffc7c */
int __fastcall sub_603FFCC8(int result);  /* 0x003ffcc8 */
int __fastcall sub_603FFCE4(int result);  /* 0x003ffce4 */
int __fastcall sub_603FFD04(int result);  /* 0x003ffd04 */
int __fastcall sub_603FFD24(int result);  /* 0x003ffd24 */
int __fastcall sub_603FFD44(int result);  /* 0x003ffd44 */
int __fastcall sub_603FFD60(int result);  /* 0x003ffd60 */
int __fastcall sub_603FFD80(int result);  /* 0x003ffd80 */
int __fastcall sub_603FFDA0(int result, int a2);  /* 0x003ffda0 */
int __fastcall sub_603FFDBC(int result, int a2);  /* 0x003ffdbc */
int __fastcall sub_603FFDD8(int result, int a2);  /* 0x003ffdd8 */
int __fastcall sub_603FFDF4(int result, int a2);  /* 0x003ffdf4 */
int __fastcall sub_603FFE10(int result);  /* 0x003ffe10 */
unsigned int __fastcall sub_603FFE2C(int *a1, const void *a2);  /* 0x003ffe2c */
int __fastcall sub_60400030(int *a1, _DWORD *a2);  /* 0x00400030 */
int __fastcall sub_60400298(struct sead_IDisposer *a1);  /* 0x00400298 */
int __fastcall sub_604005D0(int result, char a2, int a3, char a4, int a5, int a6);  /* 0x004005d0 */
int __fastcall AreaRumbleMgr_rumbleForPlayer(int a1, int a2, int a3, int a4, int a5);  /* 0x004006b0 */
int __fastcall AreaRumbleMgr_rumble(int result, int a2, char a3, int a4, int a5);  /* 0x004007d8 */
int __fastcall sub_60400980(int a1, int a2, int a3, int a4, int a5);  /* 0x00400980 */
int __fastcall AreaRumbleMgr_rumble2(int a1, int a2, char a3, int a4);  /* 0x00400a34 */
int __fastcall sub_60400BE4(int a1);  /* 0x00400be4 */
int __fastcall sub_60400C74(struct sead_IDisposer *a1);  /* 0x00400c74 */
int __fastcall sub_60400D94(int a1);  /* 0x00400d94 */
signed int __fastcall sub_60400F18(int a1);  /* 0x00400f18 */
int __fastcall sub_604011B4(int a1, _DWORD *a2);  /* 0x004011b4 */
int __fastcall sub_6040135C(int a1, int a2, int a3);  /* 0x0040135c */
int __fastcall sub_6040137C(int a1, int a2, int a3);  /* 0x0040137c */
int __fastcall sub_604013A0(int a1, int a2, int a3);  /* 0x004013a0 */
int __fastcall sub_60401598(int a1);  /* 0x00401598 */
int __fastcall sub_60401750(struct sead_IDisposer *a1);  /* 0x00401750 */
int __fastcall sub_60401768(_DWORD *a1, int a2, int a3);  /* 0x00401768 */
int __fastcall sub_604018C0(struct sead_IDisposer *a1);  /* 0x004018c0 */
int __fastcall sub_60401A20(_DWORD *a1);  /* 0x00401a20 */
int __fastcall sub_60401A60(int a1);  /* 0x00401a60 */
int __fastcall sub_60401A80(int a1);  /* 0x00401a80 */
int __fastcall sub_60401AA0(int a1, _DWORD *a2);  /* 0x00401aa0 */
int __fastcall sub_60401AAC(int a1);  /* 0x00401aac */
int __fastcall sub_60401AB4(int a1, _DWORD *a2);  /* 0x00401ab4 */
int __fastcall sub_60401B38(struct sead_IDisposer *a1);  /* 0x00401b38 */
int __fastcall sub_60401BB8(int a1);  /* 0x00401bb8 */
int __fastcall sub_60401C6C(int a1);  /* 0x00401c6c */
int __fastcall sub_60401DA0(int a1);  /* 0x00401da0 */
int __fastcall sub_60401ED4(int a1);  /* 0x00401ed4 */
int __fastcall sub_60401F34(int a1);  /* 0x00401f34 */
int __fastcall sub_60401F74(int a1, int a2);  /* 0x00401f74 */
int __fastcall sub_60401FEC(int result, int a2);  /* 0x00401fec */
int __fastcall sub_6040200C(int result, int a2, unsigned int a3);  /* 0x0040200c */
int __fastcall sub_60402084(int a1, unsigned int a2);  /* 0x00402084 */
int __fastcall sub_60402144(int a1);  /* 0x00402144 */
int __fastcall sub_60402278(int a1);  /* 0x00402278 */
int __fastcall sub_604023AC(int a1);  /* 0x004023ac */
int __fastcall sub_604024E0(int a1);  /* 0x004024e0 */
int __fastcall sub_60402714(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x00402714 */
int __fastcall sub_60402758(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10);  /* 0x00402758 */
int __fastcall sub_604028B8(int a1);  /* 0x004028b8 */
int __fastcall sub_60402CB0(int a1, int a2);  /* 0x00402cb0 */
int __fastcall sub_60402E34(int a1);  /* 0x00402e34 */
int __fastcall sub_60403080(int a1);  /* 0x00403080 */
int __fastcall sub_604032A0(int a1);  /* 0x004032a0 */
int __fastcall sub_6040349C(int result);  /* 0x0040349c */
int __fastcall sub_604034B0(int result, int a2);  /* 0x004034b0 */
int __fastcall sub_60403590(_DWORD *a1);  /* 0x00403590 */
int __fastcall sub_6040380C(_DWORD *a1);  /* 0x0040380c */
int __fastcall sub_60403A9C(int a1);  /* 0x00403a9c */
int __fastcall sub_60403BAC(int a1);  /* 0x00403bac */
int __fastcall sub_60403BD4(int a1);  /* 0x00403bd4 */
int __fastcall sub_60403C8C(int result);  /* 0x00403c8c */
int __fastcall SE_SYS_PJ_PLAYER_TURN_ref(int a1);  /* 0x00403ca8 */
int __fastcall sub_60403FF0(int result);  /* 0x00403ff0 */
int __fastcall sub_60404000(int a1);  /* 0x00404000 */
int __fastcall sub_604041D0(int result);  /* 0x004041d0 */
int __fastcall sub_604041E0(int a1);  /* 0x004041e0 */
int __fastcall sub_60404308(int result);  /* 0x00404308 */
int __fastcall sub_60404320(int result);  /* 0x00404320 */
int __fastcall sub_604043A4(int result);  /* 0x004043a4 */
int __fastcall sub_604043B4(int a1);  /* 0x004043b4 */
int __fastcall sub_604046D4(int result);  /* 0x004046d4 */
int __fastcall sub_6040477C(int a1);  /* 0x0040477c */
int __fastcall sub_604047D0(int result);  /* 0x004047d0 */
int __fastcall sub_604056E8(int a1, int a2);  /* 0x004056e8 */
int __fastcall sub_60405888(int a1);  /* 0x00405888 */
int __fastcall sub_604058BC(int a1);  /* 0x004058bc */
int __fastcall sub_60405AB4(int a1);  /* 0x00405ab4 */
bool __fastcall sub_60405ADC(int a1);  /* 0x00405adc */
bool __fastcall sub_60405B04(int a1);  /* 0x00405b04 */
int __fastcall sub_60405B2C(int a1);  /* 0x00405b2c */
int __fastcall sub_60405B94(int a1);  /* 0x00405b94 */
int __fastcall sub_60405BC0(int a1, int a2);  /* 0x00405bc0 */
int __fastcall sub_60405BF8(int a1, _DWORD *a2);  /* 0x00405bf8 */
int __fastcall sub_60405C3C(int a1, int a2);  /* 0x00405c3c */
int __fastcall sub_60405C48(int result, _DWORD *a2);  /* 0x00405c48 */
int __fastcall sub_60405C58(int a1, int a2);  /* 0x00405c58 */
int __fastcall sub_60405C80(int a1);  /* 0x00405c80 */
int __fastcall sub_60405C88(int a1);  /* 0x00405c88 */
int __fastcall sub_60406230(struct sead_IDisposer *a1);  /* 0x00406230 */
int __fastcall sub_60406290(int a1);  /* 0x00406290 */
int __fastcall sub_60406440(int a1, int a2);  /* 0x00406440 */
int __fastcall sub_60406450(int a1, int a2);  /* 0x00406450 */
int __fastcall sub_60406588(int a1, unsigned int a2, int a3);  /* 0x00406588 */
int __fastcall sub_60406888(int a1);  /* 0x00406888 */
int __fastcall sub_60406A28(_DWORD *a1);  /* 0x00406a28 */
int __fastcall sub_60407280(int a1);  /* 0x00407280 */
int __fastcall sub_604072BC(int result);  /* 0x004072bc */
int __fastcall sub_604072EC(_DWORD *a1);  /* 0x004072ec */
int __fastcall sub_6040734C(int a1);  /* 0x0040734c */
int __fastcall sub_60407384(int a1);  /* 0x00407384 */
int __fastcall sub_60407488(int a1);  /* 0x00407488 */
int __fastcall sub_604075A4(int a1);  /* 0x004075a4 */
int __fastcall sub_60407734(int a1, int a2, int a3);  /* 0x00407734 */
int __fastcall sub_6040776C(int a1);  /* 0x0040776c */
int __fastcall sub_60407A14(int a1);  /* 0x00407a14 */
int __fastcall sub_60407B70(struct sead_IDisposer *a1);  /* 0x00407b70 */
int __fastcall sub_60407D28(int a1);  /* 0x00407d28 */
int __fastcall sub_60407D4C(int a1);  /* 0x00407d4c */
int __fastcall sub_60407D7C(int a1, int a2);  /* 0x00407d7c */
int __fastcall sub_60407DB4(int a1, int a2, int a3);  /* 0x00407db4 */
int __fastcall sub_60407E18(int a1, int a2);  /* 0x00407e18 */
int __fastcall sub_60407E74(int a1, int a2, unsigned int a3, int a4, int a5, int a6);  /* 0x00407e74 */
int __fastcall sub_6040806C(int a1, int a2, unsigned int a3, int a4, int a5, int a6);  /* 0x0040806c */
int __fastcall sub_604080BC(int result, int *a2, int *a3);  /* 0x004080bc */
int __fastcall sub_6040810C(int a1);  /* 0x0040810c */
int __fastcall sub_604081DC(int a1);  /* 0x004081dc */
int __fastcall sub_60408230(int a1, unsigned __int8 a2, unsigned __int8 a3);  /* 0x00408230 */
int __fastcall sub_60408284(int *a1, unsigned __int8 a2, unsigned __int8 a3, char a4);  /* 0x00408284 */
int __fastcall sub_60408350(int a1, int a2);  /* 0x00408350 */
int __fastcall sub_60408488(_DWORD *a1, const void *a2);  /* 0x00408488 */
void __fastcall sub_604084EC(int a1, void *a2);  /* 0x004084ec */
int __fastcall sub_60408554(struct sead_IDisposer *a1);  /* 0x00408554 */
int __fastcall sub_604085B4(int a1);  /* 0x004085b4 */
bool __fastcall sub_604086EC(int a1, unsigned int a2);  /* 0x004086ec */
int __fastcall PointGet_1UP_00_ref_2_helper(int a1);  /* 0x0040891c */
unsigned int __fastcall sub_60408934(int a1);  /* 0x00408934 */
int __fastcall sub_6040894C(int a1);  /* 0x0040894c */
int __fastcall sub_60408984(_BYTE *a1);  /* 0x00408984 */
int __fastcall sub_604089BC(_BYTE *a1);  /* 0x004089bc */
int __fastcall sub_604089F4(int a1, int a2);  /* 0x004089f4 */
int __fastcall sub_60408A3C(int a1, _DWORD *a2);  /* 0x00408a3c */
unsigned int __fastcall sub_604091B0(int a1);  /* 0x004091b0 */
int __fastcall sub_604091F0(int a1);  /* 0x004091f0 */
int __fastcall sub_60409268(_BYTE *a1, _DWORD *a2);  /* 0x00409268 */
bool __fastcall sub_604092B0(int a1, int a2);  /* 0x004092b0 */
int __fastcall sub_604092F8(unsigned __int8 *a1, int a2);  /* 0x004092f8 */
int __fastcall sub_60409340(int result);  /* 0x00409340 */
int __fastcall sub_604093B8(int result);  /* 0x004093b8 */
int __fastcall sub_604094BC(int a1);  /* 0x004094bc */
int __fastcall sub_604096A8(int result);  /* 0x004096a8 */
int __fastcall sub_604096C4(int result);  /* 0x004096c4 */
int __fastcall sub_60409700(unsigned __int8 *a1);  /* 0x00409700 */
int __fastcall sub_6040975C(int a1, int a2);  /* 0x0040975c */
int __fastcall sub_604097B4(int result);  /* 0x004097b4 */
int __fastcall sub_604097D0(int a1);  /* 0x004097d0 */
int __fastcall sub_60409930(int result);  /* 0x00409930 */
unsigned int __fastcall sub_6040994C(unsigned int result);  /* 0x0040994c */
int __fastcall sub_60409994(int result, int a2);  /* 0x00409994 */
int __fastcall sub_604099E0(_BYTE *a1);  /* 0x004099e0 */
int __fastcall sub_60409BFC(int result);  /* 0x00409bfc */
int __fastcall sub_60409C18(int result);  /* 0x00409c18 */
int __fastcall sub_60409CC8(int result);  /* 0x00409cc8 */
int __fastcall sub_60409DC8(int result);  /* 0x00409dc8 */
int __fastcall sub_60409DE4(int a1);  /* 0x00409de4 */
int __fastcall sub_6040A10C(int result);  /* 0x0040a10c */
int __fastcall sub_6040A1D8(int result);  /* 0x0040a1d8 */
int __fastcall sub_6040A310(int a1, int a2);  /* 0x0040a310 */
int __fastcall sub_6040A52C(int a1, int a2);  /* 0x0040a52c */
unsigned int __fastcall sub_6040A5F0(int a1, unsigned int a2);  /* 0x0040a5f0 */
unsigned int __fastcall sub_6040A81C(int a1);  /* 0x0040a81c */
int __fastcall sub_6040A960(int a1, int a2);  /* 0x0040a960 */
int __fastcall sub_6040ACD4(int a1, unsigned int a2);  /* 0x0040acd4 */
int __fastcall sub_6040B278(int a1, unsigned int a2);  /* 0x0040b278 */
int __fastcall sub_6040B2B4(int result, unsigned int a2);  /* 0x0040b2b4 */
int __fastcall sub_6040B33C(int a1);  /* 0x0040b33c */
int __fastcall sub_6040B3B0(_BYTE *a1, int a2);  /* 0x0040b3b0 */
bool __fastcall sub_6040B414(int a1);  /* 0x0040b414 */
int __fastcall sub_6040B594(int result);  /* 0x0040b594 */
int __fastcall sub_6040B5AC(int result);  /* 0x0040b5ac */
int __fastcall sub_6040B5C4(_WORD *a1, unsigned int a2);  /* 0x0040b5c4 */
int __fastcall sub_6040B700(struct sead_IDisposer *a1);  /* 0x0040b700 */
int __fastcall sub_6040B798(int a1);  /* 0x0040b798 */
int __fastcall sub_6040B810(int result);  /* 0x0040b810 */
int __fastcall sub_6040B830(int result);  /* 0x0040b830 */
unsigned int __fastcall sub_6040B844(_DWORD *a1);  /* 0x0040b844 */
int __fastcall sub_6040BB9C(int result);  /* 0x0040bb9c */
unsigned int __fastcall sub_6040BBA8(int a1);  /* 0x0040bba8 */
int __fastcall sub_6040BE74(int result);  /* 0x0040be74 */
int __fastcall sub_6040BE8C(int a1);  /* 0x0040be8c */
bool __fastcall sub_6040C0DC(int a1);  /* 0x0040c0dc */
int __fastcall sub_6040C110(int a1);  /* 0x0040c110 */
unsigned int __fastcall PlayerStates_updateModelAndAnims_helper_40C134(_DWORD *a1, int a2);  /* 0x0040c134 */
unsigned int __fastcall sub_6040C14C(_DWORD *a1, int a2);  /* 0x0040c14c */
int __fastcall sub_6040C398(int result);  /* 0x0040c398 */
int __fastcall sub_6040C410(int a1);  /* 0x0040c410 */
int __fastcall sub_6040C424(int a1);  /* 0x0040c424 */
int __fastcall sub_6040C48C(int a1, int a2);  /* 0x0040c48c */
int __fastcall sub_6040C4C4(int a1, _DWORD *a2);  /* 0x0040c4c4 */
int __fastcall sub_6040C508(int a1, int a2);  /* 0x0040c508 */
int __fastcall sub_6040C514(int result, _DWORD *a2);  /* 0x0040c514 */
int __fastcall sub_6040C524(int a1, int a2);  /* 0x0040c524 */
int __fastcall sub_6040C54C(int a1);  /* 0x0040c54c */
int __fastcall sub_6040C554(int a1);  /* 0x0040c554 */
int __fastcall sub_6040C76C(int a1);  /* 0x0040c76c */
int __fastcall sub_6040C8B8(struct sead_IDisposer *a1);  /* 0x0040c8b8 */
int __fastcall sub_6040D1C4(struct sead_IDisposer *a1);  /* 0x0040d1c4 */
int __fastcall sub_6040D224(int a1);  /* 0x0040d224 */
int __fastcall sub_6040D2C0(int result);  /* 0x0040d2c0 */
int __fastcall sub_6040D310(int a1);  /* 0x0040d310 */
int __fastcall sub_6040D3A4(int result, char a2);  /* 0x0040d3a4 */
int __fastcall sub_6040D3B8(int result, char a2);  /* 0x0040d3b8 */
int __fastcall sub_6040D3CC(int result, char a2);  /* 0x0040d3cc */
int __fastcall sub_6040D3E0(int result, char a2);  /* 0x0040d3e0 */
int __fastcall sub_6040D3F4(int result, int a2);  /* 0x0040d3f4 */
void __fastcall sub_6040D3FC(int a1, unsigned int a2, int a3);  /* 0x0040d3fc */
int __fastcall sub_6040D4F0(_DWORD *a1);  /* 0x0040d4f0 */
int __fastcall sub_6040D7A8(_DWORD *a1, unsigned int a2);  /* 0x0040d7a8 */
int __fastcall sub_6040D864(_DWORD *a1);  /* 0x0040d864 */
int __fastcall sub_6040DF10(_DWORD *a1, int a2);  /* 0x0040df10 */
signed int __fastcall sub_6040E074(_DWORD *a1, int a2, int a3);  /* 0x0040e074 */
bool __fastcall sub_6040E204(unsigned int a1);  /* 0x0040e204 */
bool __fastcall sub_6040E218(int a1);  /* 0x0040e218 */
bool __fastcall sub_6040E22C(char a1);  /* 0x0040e22c */
bool __fastcall sub_6040E244(unsigned int a1);  /* 0x0040e244 */
bool __fastcall sub_6040E274(int a1);  /* 0x0040e274 */
bool __fastcall sub_6040E2A4(unsigned int a1);  /* 0x0040e2a4 */
bool __fastcall sub_6040E2B8(int a1);  /* 0x0040e2b8 */
bool __fastcall sub_6040E2CC(char a1);  /* 0x0040e2cc */
bool __fastcall sub_6040E2E4(int a1);  /* 0x0040e2e4 */
bool __fastcall sub_6040E300(int a1);  /* 0x0040e300 */
bool __fastcall sub_6040E314(int a1);  /* 0x0040e314 */
bool __fastcall sub_6040E328(int a1);  /* 0x0040e328 */
bool __fastcall sub_6040E33C(int a1);  /* 0x0040e33c */
bool __fastcall sub_6040E350(char a1);  /* 0x0040e350 */
bool __fastcall sub_6040E368(char a1);  /* 0x0040e368 */
bool __fastcall sub_6040E394(unsigned int a1, char a2);  /* 0x0040e394 */
bool __fastcall sub_6040E3D0(int a1);  /* 0x0040e3d0 */
bool __fastcall sub_6040E404(int a1);  /* 0x0040e404 */
bool __fastcall sub_6040E418(unsigned int a1, int a2);  /* 0x0040e418 */
bool __fastcall sub_6040E438(int a1);  /* 0x0040e438 */
bool __fastcall sub_6040E44C(int a1);  /* 0x0040e44c */
bool __fastcall sub_6040E460(char a1);  /* 0x0040e460 */
bool __fastcall sub_6040E48C(unsigned int a1, char a2);  /* 0x0040e48c */
bool __fastcall sub_6040E4C8(int a1);  /* 0x0040e4c8 */
bool __fastcall sub_6040E4FC(int a1);  /* 0x0040e4fc */
bool __fastcall sub_6040E510(int a1);  /* 0x0040e510 */
bool __fastcall sub_6040E524(int a1);  /* 0x0040e524 */
bool __fastcall sub_6040E538(int a1);  /* 0x0040e538 */
int __fastcall sub_6040E54C(int a1);  /* 0x0040e54c */
int __fastcall sub_6040E560(int a1);  /* 0x0040e560 */
int __fastcall sub_6040E574(int a1);  /* 0x0040e574 */
int __fastcall sub_6040E588(int a1);  /* 0x0040e588 */
bool __fastcall sub_6040E59C(int a1);  /* 0x0040e59c */
int __fastcall sub_6040E5B0(unsigned int a1, unsigned int a2, int a3);  /* 0x0040e5b0 */
int __fastcall sub_6040E820(int result);  /* 0x0040e820 */
int __fastcall sub_6040E87C(int result);  /* 0x0040e87c */
int __fastcall Animation_update(int a1);  /* 0x0040e904 */
int __fastcall sub_6040E90C(int a1, signed int a2);  /* 0x0040e90c */
int __fastcall sub_6040EB10(int result);  /* 0x0040eb10 */
int __fastcall sub_6040EB64(int result);  /* 0x0040eb64 */
int __fastcall sub_6040EC24(int a1, int a2);  /* 0x0040ec24 */
unsigned int __fastcall sub_6040ECCC(int a1, int a2, float *a3, unsigned int a4);  /* 0x0040eccc */
int __fastcall ModelWrapper_updateAnims(int result);  /* 0x0040f3cc */
int __fastcall ModelWrapper_updateModel(_DWORD *a1);  /* 0x0040f48c */
int __fastcall sub_6040F4B8(int a1, int a2, int a3);  /* 0x0040f4b8 */
int __fastcall sub_6040F514(_DWORD *a1, unsigned int a2, int a3, int a4);  /* 0x0040f514 */
int __fastcall sub_6040F5FC(int a1, int a2, int a3, int a4);  /* 0x0040f5fc */
int __fastcall sub_6040F720(int a1, int a2, int a3, int a4);  /* 0x0040f720 */
int __fastcall sub_6040F75C(int a1, int a2, int a3, int a4);  /* 0x0040f75c */
int __fastcall sub_6040F840(int a1, int a2, int a3, int a4);  /* 0x0040f840 */
int __fastcall sub_6040F8F4(int a1, int a2, int a3);  /* 0x0040f8f4 */
int __fastcall sub_6040F984(int a1, int a2);  /* 0x0040f984 */
int __fastcall sub_6040FB34(int a1, int a2);  /* 0x0040fb34 */
int __fastcall sub_6040FCF0(_DWORD *a1);  /* 0x0040fcf0 */
int __fastcall sub_6040FD08(_DWORD *a1);  /* 0x0040fd08 */
int __fastcall sub_6040FD2C(_DWORD *a1);  /* 0x0040fd2c */
int __fastcall sub_6040FD44(_DWORD *a1);  /* 0x0040fd44 */
void __fastcall sub_6040FD68(struct sead_IDisposer *a1);  /* 0x0040fd68 */
int __fastcall sub_6040FE80(struct sead_IDisposer *a1);  /* 0x0040fe80 */
int __fastcall sub_6041024C(int a1, _DWORD *a2);  /* 0x0041024c */
int __fastcall sub_604102A0(_DWORD *a1);  /* 0x004102a0 */
int __fastcall sub_6041046C(_DWORD *a1, int a2, int a3, int a4, int a5, int *a6);  /* 0x0041046c */
int __fastcall sub_604106A4(_DWORD *a1, int a2, int a3, int a4, int a5, int a6, int *a7);  /* 0x004106a4 */
int __fastcall sub_604108F8(int a1);  /* 0x004108f8 */
int __fastcall sub_60410A24(int a1);  /* 0x00410a24 */
int __fastcall sub_60410B64(int a1);  /* 0x00410b64 */
int __fastcall sub_60410D1C(int a1);  /* 0x00410d1c */
bool __fastcall sub_60410F70(int a1, int a2, int *a3, int a4);  /* 0x00410f70 */
int __fastcall sub_6041111C(struct sead_IDisposer *a1);  /* 0x0041111c */
bool __fastcall sub_604115D4(float *a1, float *a2);  /* 0x004115d4 */
int __fastcall sub_604116A0(int *a1, int *a2, int *a3);  /* 0x004116a0 */
int __fastcall sub_60411764(struct sead_IDisposer *a1);  /* 0x00411764 */
int __fastcall sub_604117C4(int a1);  /* 0x004117c4 */
int __fastcall sub_60413FD0(int result);  /* 0x00413fd0 */
int __fastcall sub_60414014(int a1);  /* 0x00414014 */
int __fastcall sub_604140F8(int result);  /* 0x004140f8 */
int __fastcall sub_60414320(int a1, unsigned int a2, int a3);  /* 0x00414320 */
int __fastcall sub_60414454(int a1, int a2, int a3, int a4);  /* 0x00414454 */
int __fastcall sub_604148F4(_DWORD *a1);  /* 0x004148f4 */
int __fastcall sub_60414B78(_DWORD *a1);  /* 0x00414b78 */
int __fastcall sub_60414B90(_DWORD *a1);  /* 0x00414b90 */
int __fastcall sub_60414BA8(_DWORD *a1);  /* 0x00414ba8 */
int __fastcall sub_60414BB8(int a1);  /* 0x00414bb8 */
int __fastcall sub_60414DA0(_DWORD *a1, int a2);  /* 0x00414da0 */
int __fastcall sub_604157F4(_DWORD *a1, int a2, int a3, float *a4, int a5);  /* 0x004157f4 */
int __fastcall sub_60416844(_DWORD *a1);  /* 0x00416844 */
int __fastcall sub_60416868(_DWORD *a1);  /* 0x00416868 */
int __fastcall sub_60416880(_DWORD *a1);  /* 0x00416880 */
int __fastcall sub_604168A4(_DWORD *a1);  /* 0x004168a4 */
int __fastcall sub_604168C8(_DWORD *a1);  /* 0x004168c8 */
int __fastcall sub_604168E0(_DWORD *a1);  /* 0x004168e0 */
int __fastcall sub_60416904(int a1, int a2);  /* 0x00416904 */
int __fastcall sub_60416B78(int a1, int a2);  /* 0x00416b78 */
int __fastcall sub_60416CEC(_DWORD *a1);  /* 0x00416cec */
int __fastcall sub_60416DB8(struct sead_IDisposer *a1);  /* 0x00416db8 */
int __fastcall sub_60416EF0(int a1, int a2);  /* 0x00416ef0 */
int __fastcall sub_60416F84(int a1, int a2);  /* 0x00416f84 */
int __fastcall sub_60417134(int a1, int a2);  /* 0x00417134 */
int __fastcall sub_60417274(struct sead_IDisposer *a1);  /* 0x00417274 */
int __fastcall sub_604172E8(int a1);  /* 0x004172e8 */
int __fastcall sub_60417498(int a1, int a2);  /* 0x00417498 */
int __fastcall sub_60417808(int a1, unsigned int a2, int a3);  /* 0x00417808 */
int __fastcall sub_60417FFC(int a1, unsigned int a2);  /* 0x00417ffc */
int __fastcall sub_60418060(int a1, _DWORD *a2);  /* 0x00418060 */
int __fastcall sub_60418078(int a1, int a2, int a3);  /* 0x00418078 */
int __fastcall sub_60418110(unsigned int a1, _DWORD *a2);  /* 0x00418110 */
int __fastcall sub_60418238(int a1, int a2);  /* 0x00418238 */
int __fastcall sub_604182D0(int a1, int a2);  /* 0x004182d0 */
int __fastcall sub_6041838C(int result);  /* 0x0041838c */
int __fastcall AnimationCtrl_setRepeat(int result, int a2);  /* 0x004183bc */
int __fastcall sub_604183EC(int result);  /* 0x004183ec */
int __fastcall sub_60418548(int a1);  /* 0x00418548 */
int __fastcall sub_604186F8(int a1);  /* 0x004186f8 */
int __fastcall sub_60418774(int a1, int a2);  /* 0x00418774 */
int __fastcall sub_60418904(struct sead_IDisposer *a1);  /* 0x00418904 */
int __fastcall sub_60418974(int a1);  /* 0x00418974 */
int __fastcall sub_60418C5C(_DWORD *a1);  /* 0x00418c5c */
int __fastcall sub_60418DB8(_DWORD *a1);  /* 0x00418db8 */
int __fastcall sub_60418FB4(_DWORD *a1, _DWORD *a2, int a3);  /* 0x00418fb4 */
int __fastcall sub_6041925C(_DWORD *a1, int *a2, int a3);  /* 0x0041925c */
int __fastcall sub_60419380(int a1, int a2, int a3, int a4);  /* 0x00419380 */
int __fastcall sub_60419574(int a1, int a2);  /* 0x00419574 */
int __fastcall sub_60419720(int a1, int a2);  /* 0x00419720 */
int __fastcall sub_604198EC(_DWORD *a1, int a2, int a3, int a4, int a5);  /* 0x004198ec */
int __fastcall sub_60419A64(_DWORD *a1, int a2);  /* 0x00419a64 */
int __fastcall sub_60419C88(int a1);  /* 0x00419c88 */
int __fastcall sub_60419F48(_DWORD *a1);  /* 0x00419f48 */
int __fastcall sub_6041A024(_DWORD *a1);  /* 0x0041a024 */
int __fastcall sub_6041A1C4(_DWORD *a1, int a2);  /* 0x0041a1c4 */
int __fastcall sub_6041A278(_DWORD *a1, int a2);  /* 0x0041a278 */
int __fastcall sub_6041A990(int a1);  /* 0x0041a990 */
unsigned int __fastcall sub_6041AADC(int a1, int a2);  /* 0x0041aadc */
int __fastcall sub_6041AC90(int a1, int a2);  /* 0x0041ac90 */
int __fastcall sub_6041AFBC(int a1, int a2, int a3);  /* 0x0041afbc */
int __fastcall sub_6041AFF8(_DWORD *a1, _DWORD *a2, int CurrentHeap, int a4);  /* 0x0041aff8 */
int __fastcall sub_6041B220(int result);  /* 0x0041b220 */
int __fastcall sub_6041B234(int a1);  /* 0x0041b234 */
int __fastcall sub_6041B518(int a1);  /* 0x0041b518 */
void __fastcall sub_6041B5D0(int a1);  /* 0x0041b5d0 */
int __fastcall sub_6041B6CC(int a1);  /* 0x0041b6cc */
int __fastcall sub_6041B7F0(int a1);  /* 0x0041b7f0 */
bool __fastcall sub_6041B800(int a1, char a2);  /* 0x0041b800 */
int __fastcall sub_6041B818(int a1, int a2);  /* 0x0041b818 */
int __fastcall sub_6041B864(int a1, _DWORD *a2, int a3, int a4);  /* 0x0041b864 */
int __fastcall sub_6041B974(_DWORD *a1, _DWORD *a2, int a3, int a4);  /* 0x0041b974 */
int __fastcall sub_6041BA94(_DWORD *a1, int a2, int a3);  /* 0x0041ba94 */
int __fastcall sub_6041BC00(int a1);  /* 0x0041bc00 */
int __fastcall sub_6041BD28(_DWORD *a1, int a2, _DWORD *a3, int a4);  /* 0x0041bd28 */
int __fastcall sub_6041BFD0(_DWORD *a1, int a2, int a3);  /* 0x0041bfd0 */
int __fastcall sub_6041C124(_DWORD *a1, int a2, int a3);  /* 0x0041c124 */
int __fastcall sub_6041C300(_DWORD *a1, int a2, int a3);  /* 0x0041c300 */
int __fastcall sub_6041C4A0(int result, int a2, int a3);  /* 0x0041c4a0 */
int __fastcall sub_6041C894(_DWORD *a1);  /* 0x0041c894 */
int __fastcall sub_6041C99C(_DWORD *a1);  /* 0x0041c99c */
int __fastcall sub_6041CA50(_DWORD *a1);  /* 0x0041ca50 */
int __fastcall sub_6041CC20(_DWORD *a1);  /* 0x0041cc20 */
int __fastcall sub_6041CD6C(_DWORD *a1);  /* 0x0041cd6c */
int __fastcall sub_6041CE84(_DWORD *a1, _DWORD *a2, int a3);  /* 0x0041ce84 */
int __fastcall sub_6041CF7C(_DWORD *a1, _DWORD *a2, int a3);  /* 0x0041cf7c */
int __fastcall sub_6041D07C(int a1);  /* 0x0041d07c */
int __fastcall sub_6041D270(int a1, int a2, int a3);  /* 0x0041d270 */
int __fastcall sub_6041D74C(int a1, int a2, int *a3, int a4);  /* 0x0041d74c */
int __fastcall sub_6041DD00(_DWORD *a1, int a2, int a3, int a4);  /* 0x0041dd00 */
int __fastcall sub_6041E21C(int a1, char *a2, int a3);  /* 0x0041e21c */
int __fastcall sub_6041E408(int a1);  /* 0x0041e408 */
int __fastcall sub_6041EAB4(int a1, _DWORD *a2, int a3, int a4);  /* 0x0041eab4 */
int __fastcall sub_6041F17C(int a1, int a2);  /* 0x0041f17c */
int __fastcall sub_6041F274(int a1, int a2);  /* 0x0041f274 */
int __fastcall sub_6041F598(int a1, int a2);  /* 0x0041f598 */
int __fastcall sub_6041F6C8(int a1, int a2, int a3, int a4);  /* 0x0041f6c8 */
int __fastcall sub_6041FB34(int a1, int *a2, int a3);  /* 0x0041fb34 */
int __fastcall sub_6041FB58(int a1, int a2, _QWORD *a3, char *a4, unsigned int a5, int a6);  /* 0x0041fb58 */
int __fastcall sub_6041FC94(int result);  /* 0x0041fc94 */
int __fastcall sub_6041FD24(_DWORD *a1);  /* 0x0041fd24 */
int __fastcall sub_6041FF7C(_DWORD *a1);  /* 0x0041ff7c */
int __fastcall sub_6041FF9C(int result);  /* 0x0041ff9c */
int __fastcall sub_60420030(int a1, int a2, int a3, int a4, int a5);  /* 0x00420030 */
int __fastcall sub_60420144(int a1);  /* 0x00420144 */
int __fastcall sub_604201A4(int a1);  /* 0x004201a4 */
int __fastcall sub_604202AC(int result);  /* 0x004202ac */
int __fastcall sub_60420330(int a1);  /* 0x00420330 */
int __fastcall sub_60420378(int a1, int a2, int a3);  /* 0x00420378 */
int __fastcall sub_60420468(_DWORD *a1, int a2);  /* 0x00420468 */
int __fastcall sub_60420528(_DWORD *a1, int a2, int a3);  /* 0x00420528 */
int __fastcall sub_60420704(int a1, int a2, _DWORD *a3, _DWORD *a4);  /* 0x00420704 */
bool __fastcall sub_60420910(_DWORD *a1, _DWORD *a2);  /* 0x00420910 */
int __fastcall sub_60420960(int a1, int a2, int a3, int a4);  /* 0x00420960 */
int __fastcall sub_60420A44(int a1, _DWORD *a2);  /* 0x00420a44 */
int __fastcall sub_60420B84(struct sead_IDisposer *a1);  /* 0x00420b84 */
int __fastcall sub_60420CD8(int a1, int *a2);  /* 0x00420cd8 */
int __fastcall sub_60420D88(int a1, int a2);  /* 0x00420d88 */
int __fastcall sub_60421050(int a1, int a2);  /* 0x00421050 */
int __fastcall sub_6042105C(int a1, int a2);  /* 0x0042105c */
int __fastcall sub_604210B8(int a1, int a2);  /* 0x004210b8 */
int __fastcall sub_60421114(int a1, int a2);  /* 0x00421114 */
int __fastcall sead_Decompressor_dtorFree(struct sead_IDisposer *a1);  /* 0x00421174 */
int __fastcall sub_6042125C(struct sead_IDisposer *a1);  /* 0x0042125c */
bool __fastcall sub_6042126C(int a1, int a2);  /* 0x0042126c */
int __fastcall sub_60421454(int a1, int a2, int a3);  /* 0x00421454 */
int __fastcall sub_60421468(int a1, int a2);  /* 0x00421468 */
int __fastcall sub_60421500(int a1, int a2);  /* 0x00421500 */
int __fastcall sub_60421598(int a1, int a2);  /* 0x00421598 */
int __fastcall sub_60421630(int a1, int a2);  /* 0x00421630 */
int __fastcall sub_604216C8(int a1, int a2);  /* 0x004216c8 */
int __fastcall sub_60421764(int a1, _DWORD *a2);  /* 0x00421764 */
int __fastcall sub_60421880(_DWORD *a1);  /* 0x00421880 */
int __fastcall sub_604218E0(_DWORD *a1);  /* 0x004218e0 */
int __fastcall sub_60421938(_DWORD *a1, int a2, int a3);  /* 0x00421938 */
int __fastcall sub_6042194C(_DWORD *a1, int a2, int a3, int a4);  /* 0x0042194c */
int __fastcall sub_60421AD4(_DWORD *a1, int a2, int a3);  /* 0x00421ad4 */
int __fastcall sub_60421AE4(_DWORD *a1, int a2, int a3);  /* 0x00421ae4 */
int __fastcall sub_60421BAC(int result);  /* 0x00421bac */
int __fastcall sub_60421BCC(int result);  /* 0x00421bcc */
int __fastcall sub_60421C34(int result);  /* 0x00421c34 */
int __fastcall sub_60421C50(int result);  /* 0x00421c50 */
int __fastcall sub_60421CD4(int result);  /* 0x00421cd4 */
int __fastcall sub_60421D08(int a1, int a2);  /* 0x00421d08 */
int __fastcall sub_60422010(int a1);  /* 0x00422010 */
int __fastcall sub_604221B4(int a1);  /* 0x004221b4 */
void __fastcall sub_604222D0(_BYTE *a1);  /* 0x004222d0 */
int __fastcall sub_604223B4(_BYTE *a1);  /* 0x004223b4 */
int __fastcall sub_604223C4(int a1);  /* 0x004223c4 */
int __fastcall sub_60422BD4(_DWORD *a1);  /* 0x00422bd4 */
int __fastcall sub_60422C24(int a1);  /* 0x00422c24 */
int __fastcall sub_60422C94(int a1);  /* 0x00422c94 */
int __fastcall sub_60422EFC(_DWORD *a1, int a2);  /* 0x00422efc */
int __fastcall sub_60422F3C(_DWORD *a1, int a2);  /* 0x00422f3c */
int __fastcall sub_60422FEC(int a1);  /* 0x00422fec */
int __fastcall sub_60423020(int a1);  /* 0x00423020 */
int __fastcall sub_60423054(int a1);  /* 0x00423054 */
int __fastcall sub_6042305C(int a1);  /* 0x0042305c */
int __fastcall sub_60423244(int a1, unsigned int a2);  /* 0x00423244 */
int __fastcall sub_60423268(int a1, int a2);  /* 0x00423268 */
int __fastcall sub_60423278(int a1);  /* 0x00423278 */
bool __fastcall sub_6042329C(int a1, int a2);  /* 0x0042329c */
bool __fastcall sub_60423394(int a1, int a2);  /* 0x00423394 */
int __fastcall sub_60423510(struct sead_IDisposer *a1);  /* 0x00423510 */
int __fastcall sub_60423554(struct sead_IDisposer *a1);  /* 0x00423554 */
bool __fastcall sub_60423588(int a1, int a2);  /* 0x00423588 */
int __fastcall sub_60423680(int result);  /* 0x00423680 */
int __fastcall sub_60423704(int result);  /* 0x00423704 */
int __fastcall sub_60423788(struct sead_IDisposer *a1);  /* 0x00423788 */
int __fastcall sub_604237CC(int a1);  /* 0x004237cc */
bool __fastcall sub_604237DC(int a1, int a2);  /* 0x004237dc */
int __fastcall sub_60423A84(struct sead_IDisposer *a1);  /* 0x00423a84 */
int __fastcall sub_60423AC8(int a1, int a2);  /* 0x00423ac8 */
int __fastcall sub_60423AD8(struct sead_IDisposer *a1);  /* 0x00423ad8 */
int __fastcall sub_60423B1C(struct sead_IDisposer *a1);  /* 0x00423b1c */
int __fastcall BigBoo_onCreate_helper_423EBC(int a1, int a2);  /* 0x00423ebc */
bool __fastcall LightSource_unkUpdate3(int a1);  /* 0x00423ecc */
int __fastcall sub_60423F0C(int a1);  /* 0x00423f0c */
int __fastcall sub_60423F20(int result);  /* 0x00423f20 */
int __fastcall sub_60423F30(int result);  /* 0x00423f30 */
int __fastcall sub_60423F74(int result);  /* 0x00423f74 */
int __fastcall sub_60424018(int result);  /* 0x00424018 */
int __fastcall sub_60424044(int result);  /* 0x00424044 */
int __fastcall sub_60424088(int result);  /* 0x00424088 */
int __fastcall sub_60424120(int a1);  /* 0x00424120 */
int __fastcall sub_60424294(int result);  /* 0x00424294 */
int __fastcall sub_604242A8(_DWORD *a1, int a2);  /* 0x004242a8 */
int __fastcall sub_604243B8(int a1);  /* 0x004243b8 */
bool __fastcall sub_60424410(int a1);  /* 0x00424410 */
int __fastcall sub_60424628(int a1);  /* 0x00424628 */
int __fastcall sub_60424734(int result, float *a2, unsigned int a3, int a4, _DWORD *a5, int a6, int a7);  /* 0x00424734 */
int __fastcall sub_604248B4(int a1, int a2);  /* 0x004248b4 */
int __fastcall sub_604248EC(int a1, _DWORD *a2);  /* 0x004248ec */
int __fastcall sub_60424930(int a1, int a2);  /* 0x00424930 */
int __fastcall sub_6042493C(int result, _DWORD *a2);  /* 0x0042493c */
int __fastcall sub_6042494C(int a1, int a2);  /* 0x0042494c */
int __fastcall sub_60424974(int a1);  /* 0x00424974 */
int __fastcall sub_6042497C(int a1);  /* 0x0042497c */
int __fastcall sub_60424B24(int result);  /* 0x00424b24 */
int __fastcall sub_604256D0(int a1, int a2);  /* 0x004256d0 */
void __fastcall sub_6042587C(int a1);  /* 0x0042587c */
int __fastcall sub_604258F4(int a1);  /* 0x004258f4 */
int __fastcall sub_60425970(struct sead_TaskBase *a1);  /* 0x00425970 */
int __fastcall sub_60425974(int a1);  /* 0x00425974 */
int __fastcall sub_60426530(int a1);  /* 0x00426530 */
int __fastcall sub_604265B4(int a1);  /* 0x004265b4 */
int __fastcall sub_604267D0(int a1, unsigned int a2);  /* 0x004267d0 */
int __fastcall sub_60426814(int a1, unsigned int a2);  /* 0x00426814 */
int __fastcall sub_6042697C(int a1, int a2);  /* 0x0042697c */
int __fastcall sub_604269A8(int a1);  /* 0x004269a8 */
int __fastcall sub_60426C24(_DWORD *a1, int a2);  /* 0x00426c24 */
int __fastcall sub_60426E08(_DWORD *a1, int a2);  /* 0x00426e08 */
int __fastcall sub_60426E38(int a1, int a2);  /* 0x00426e38 */
int __fastcall sub_60427048(_DWORD *a1);  /* 0x00427048 */
int __fastcall sub_60427258(int a1, int a2, int a3);  /* 0x00427258 */
int __fastcall sub_60427280(int a1);  /* 0x00427280 */
int __fastcall sub_6042748C(_DWORD *a1);  /* 0x0042748c */
int __fastcall sub_604275C8(int a1, int *a2);  /* 0x004275c8 */
int __fastcall sub_60427770(int a1, int *a2);  /* 0x00427770 */
int __fastcall sub_604277A8(int a1);  /* 0x004277a8 */
int __fastcall sub_604277E0(int a1, int *a2, int a3, int a4, int a5, int a6);  /* 0x004277e0 */
int __fastcall sub_60427A10(int result, int a2, int a3);  /* 0x00427a10 */
int __fastcall sub_60427BC8(int a1, int a2, int a3, int a4);  /* 0x00427bc8 */
int __fastcall sub_60427D38(int a1, int a2, _DWORD *a3, int a4, int a5);  /* 0x00427d38 */
int __fastcall sub_60427EF4(int a1, int a2);  /* 0x00427ef4 */
int __fastcall sub_6042807C(int a1);  /* 0x0042807c */
int __fastcall sub_6042826C(int a1, int a2);  /* 0x0042826c */
int __fastcall sub_60428390(int result);  /* 0x00428390 */
int __fastcall sub_6042839C(int a1, _DWORD *a2);  /* 0x0042839c */
int __fastcall sub_604283E0(_DWORD *a1, int *a2, int a3);  /* 0x004283e0 */
int __fastcall sub_604288D0(int a1);  /* 0x004288d0 */
int __fastcall sub_60428990(_DWORD *a1);  /* 0x00428990 */
int __fastcall sub_604289D4(int a1, int a2, int a3, int a4);  /* 0x004289d4 */
int __fastcall sub_60428A44(int result, int a2);  /* 0x00428a44 */
int __fastcall sub_60428A54(int a1, int a2);  /* 0x00428a54 */
int __fastcall sub_60428D08(int a1);  /* 0x00428d08 */
int __fastcall sub_60428D84(int result, int *a2, int a3, int a4, int a5, int a6);  /* 0x00428d84 */
int __fastcall sub_60428EFC(int a1, int a2, int a3, int a4);  /* 0x00428efc */
int __fastcall sub_60428FBC(_DWORD *a1, int a2);  /* 0x00428fbc */
unsigned int __fastcall sub_6042909C(int a1, int a2, int a3);  /* 0x0042909c */
int __fastcall sub_604293E8(int a1, int a2);  /* 0x004293e8 */
int __fastcall sub_604294F8(float *a1, float *a2, int a3, int a4);  /* 0x004294f8 */
int __fastcall sub_6042950C(float *a1, float *a2, int a3, int a4);  /* 0x0042950c */
int __fastcall sub_60429520(float *a1, float *a2, int a3, int a4);  /* 0x00429520 */
int __fastcall sub_60429534(float *a1, float *a2, int a3, int a4);  /* 0x00429534 */
int __fastcall sub_60429548(float *a1, float *a2, int a3, int a4);  /* 0x00429548 */
int __fastcall sub_6042955C(float *a1, float *a2, int a3, int a4);  /* 0x0042955c */
int __fastcall sub_60429570(float *a1, float *a2, int a3, int a4);  /* 0x00429570 */
int __fastcall sub_60429584(float *a1, float *a2, int a3, int a4);  /* 0x00429584 */
int __fastcall sub_60429598(int a1, unsigned int a2, _DWORD *a3, int *a4, _DWORD *a5);  /* 0x00429598 */
int __fastcall sub_604296FC(int a1, int a2, _DWORD *a3, int *a4, _DWORD *a5);  /* 0x004296fc */
int __fastcall sub_60429830(int a1, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5);  /* 0x00429830 */
int __fastcall sub_604299A0(int a1, int a2, _BYTE *a3);  /* 0x004299a0 */
int __fastcall sub_60429B28(int a1, int a2, _BYTE *a3);  /* 0x00429b28 */
int __fastcall sub_60429C44(int a1, int a2, _BYTE *a3);  /* 0x00429c44 */
int __fastcall sub_60429DD0(int a1, int a2, _BYTE *a3);  /* 0x00429dd0 */
int __fastcall sub_60429EF0(float *a1, float *a2, int a3);  /* 0x00429ef0 */
int __fastcall sub_6042A0C8(_DWORD *a1);  /* 0x0042a0c8 */
int __fastcall sub_6042A11C(_DWORD *a1, int CurrentHeap, int a3, int a4);  /* 0x0042a11c */
int __fastcall sub_6042A170(int a1);  /* 0x0042a170 */
int __fastcall sub_6042A180(int a1, int a2, unsigned int a3);  /* 0x0042a180 */
int __fastcall sub_6042A224(struct sead_IDisposer *a1);  /* 0x0042a224 */
int __fastcall sub_6042A29C(int a1);  /* 0x0042a29c */
int __fastcall sub_6042A324(int a1);  /* 0x0042a324 */
int __fastcall sub_6042A53C(_DWORD *a1);  /* 0x0042a53c */
int __fastcall sub_6042A6B8(_DWORD *a1);  /* 0x0042a6b8 */
int __fastcall sub_6042A6C8(int a1, unsigned int a2, int a3, int a4);  /* 0x0042a6c8 */
int __fastcall sub_6042A8AC(int a1, unsigned int a2);  /* 0x0042a8ac */
int __fastcall sub_6042A9E8(int a1, _DWORD *a2);  /* 0x0042a9e8 */
int __fastcall sub_6042AA40(_DWORD *a1, int a2, unsigned int a3, unsigned int a4);  /* 0x0042aa40 */
unsigned int __fastcall sub_6042AC08(_DWORD *a1, unsigned int a2, unsigned int a3);  /* 0x0042ac08 */
int __fastcall sub_6042ADEC(_DWORD *a1, unsigned int a2);  /* 0x0042adec */
int __fastcall sub_6042AE60(_DWORD *a1);  /* 0x0042ae60 */
int __fastcall sub_6042B0CC(_DWORD *a1, int a2);  /* 0x0042b0cc */
int __fastcall sub_6042B348(_DWORD *a1);  /* 0x0042b348 */
int __fastcall sub_6042B378(_DWORD *a1);  /* 0x0042b378 */
int __fastcall sub_6042B5A0(int result);  /* 0x0042b5a0 */
int __fastcall sub_6042B62C(signed int *a1, signed int a2, int a3, int a4);  /* 0x0042b62c */
int __fastcall sub_6042B808(struct sead_IDisposer *a1);  /* 0x0042b808 */
int __fastcall sub_6042B868(int a1);  /* 0x0042b868 */
void __fastcall sub_6042B944(void *a1, const void *a2);  /* 0x0042b944 */
int __fastcall sub_6042B94C(int a1, const void *a2);  /* 0x0042b94c */
int __fastcall sub_6042BA90(int a1, int a2);  /* 0x0042ba90 */
int __fastcall sub_6042BAEC(int a1, char *a2);  /* 0x0042baec */
int __fastcall sub_6042BB44(int a1, char *a2, unsigned int a3);  /* 0x0042bb44 */
int __fastcall sub_6042BD4C(int a1, int a2);  /* 0x0042bd4c */
int __fastcall sub_6042BD90(int a1);  /* 0x0042bd90 */
int __fastcall sub_6042BEE0(int a1);  /* 0x0042bee0 */
int __fastcall sub_6042C070(_DWORD *a1, int a2, int a3, int a4, int a5);  /* 0x0042c070 */
bool __fastcall sub_6042C1E4(int a1, int a2);  /* 0x0042c1e4 */
int __fastcall sub_6042C3E8(_DWORD *a1);  /* 0x0042c3e8 */
int __fastcall sub_6042C464(_DWORD *a1);  /* 0x0042c464 */
int __fastcall sub_6042C47C(_DWORD *a1);  /* 0x0042c47c */
int __fastcall sub_6042C494(_DWORD *a1);  /* 0x0042c494 */
int __fastcall sub_6042C4B8(_DWORD *a1);  /* 0x0042c4b8 */
int __fastcall sub_6042C4DC(int a1, int a2, _DWORD *a3);  /* 0x0042c4dc */
int __fastcall sub_6042C5A0(int a1);  /* 0x0042c5a0 */
int __fastcall sub_6042C734(_DWORD *a1);  /* 0x0042c734 */
int __fastcall sub_6042C900(int *a1, int a2, int a3, unsigned int a4);  /* 0x0042c900 */
int __fastcall sub_6042CDB8(int a1);  /* 0x0042cdb8 */
int __fastcall sub_6042CDF8(int a1);  /* 0x0042cdf8 */
int __fastcall sub_6042CEF8(int a1);  /* 0x0042cef8 */
int __fastcall sub_6042D348(_DWORD *a1, int a2);  /* 0x0042d348 */
int __fastcall sub_6042D94C(_DWORD *a1, int a2);  /* 0x0042d94c */
int __fastcall sub_6042E09C(_DWORD *a1, int a2);  /* 0x0042e09c */
int __fastcall sub_6042E1A4(_DWORD *a1, int a2, int a3);  /* 0x0042e1a4 */
int __fastcall sub_6042E4E0(_DWORD *a1, int a2);  /* 0x0042e4e0 */
int __fastcall sub_6042E6BC(_DWORD *a1, int a2, int a3);  /* 0x0042e6bc */
int __fastcall sub_6042E898(float *a1, float *a2);  /* 0x0042e898 */
int __fastcall sub_6042ED28(_DWORD *a1);  /* 0x0042ed28 */
int __fastcall sub_6042ED44(_DWORD *a1);  /* 0x0042ed44 */
int __fastcall sub_6042EE58(_DWORD *a1);  /* 0x0042ee58 */
int __fastcall sub_6042EF64(int a1, int a2, unsigned int a3);  /* 0x0042ef64 */
int __fastcall sub_6042EF9C(int a1);  /* 0x0042ef9c */
int __fastcall sub_6042EFA8(int a1, int a2);  /* 0x0042efa8 */
int __fastcall sub_6042EFE0(int a1, int a2);  /* 0x0042efe0 */
int __fastcall sub_6042F01C(int a1);  /* 0x0042f01c */
int __fastcall sub_6042F034(int a1, int a2);  /* 0x0042f034 */
void __fastcall sub_6042F070(_DWORD *a1);  /* 0x0042f070 */
int __fastcall sub_6042F104(_DWORD *a1);  /* 0x0042f104 */
int __fastcall sub_6042F114(int a1);  /* 0x0042f114 */
int __fastcall sub_6042F158(int a1);  /* 0x0042f158 */
int __fastcall sub_6042F170(int a1);  /* 0x0042f170 */
int __fastcall sub_6042F1B4(int *a1, int *a2, int a3);  /* 0x0042f1b4 */
int __fastcall sub_6042F238(int a1);  /* 0x0042f238 */
int __fastcall sub_6042F27C(int a1);  /* 0x0042f27c */
int __fastcall sub_6042F294(void *a1, _DWORD *a2);  /* 0x0042f294 */
int __fastcall sub_6042F4A8(struct sead_IDisposer *a1);  /* 0x0042f4a8 */
int __fastcall sub_6042F520(int a1);  /* 0x0042f520 */
int __fastcall sub_6042F6B8(int *a1);  /* 0x0042f6b8 */
int __fastcall sub_6042F798(int a1, int a2);  /* 0x0042f798 */
int __fastcall sub_6042F82C(int a1, int a2);  /* 0x0042f82c */
int __fastcall sub_6042FB94(int a1, int a2);  /* 0x0042fb94 */
int __fastcall sub_6042FCB0(int a1, int a2);  /* 0x0042fcb0 */
int __fastcall sub_6042FCCC(int result, int a2);  /* 0x0042fccc */
int __fastcall sub_6042FDC8(int a1, int *a2, int a3);  /* 0x0042fdc8 */
int __fastcall sub_6042FE94(int a1, int *a2);  /* 0x0042fe94 */
int __fastcall sub_6042FF60(int a1);  /* 0x0042ff60 */
int __fastcall sub_60430044(int a1);  /* 0x00430044 */
int __fastcall sub_60430060(int a1);  /* 0x00430060 */
int __fastcall sub_6043007C(struct sead_IDisposer *a1);  /* 0x0043007c */
int __fastcall Resource_getModel2(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9);  /* 0x00430090 */
int __fastcall Resource_getModel(int a1, _DWORD *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10);  /* 0x004300dc */
int __fastcall sub_604302C8(int a1, int a2, int a3);  /* 0x004302c8 */
bool __fastcall sub_60430380(int a1, int a2);  /* 0x00430380 */
int __fastcall sub_60430568(int a1);  /* 0x00430568 */
int __fastcall sub_60430818(int a1, unsigned int a2, int a3, float32x2_t *a4, int a5, _DWORD *a6, float *a7);  /* 0x00430818 */
int __fastcall sub_60431430(int result);  /* 0x00431430 */
int __fastcall sub_604314F0(_DWORD *a1);  /* 0x004314f0 */
int __fastcall sub_60431578(int a1);  /* 0x00431578 */
int __fastcall sub_60431618(_DWORD *a1, int a2, int a3, int a4, int a5, int a6);  /* 0x00431618 */
int __fastcall sub_60431864(_DWORD *a1, _DWORD *a2, int a3);  /* 0x00431864 */
int __fastcall sub_60431918(_DWORD *a1, int a2, int a3, unsigned int a4, int a5);  /* 0x00431918 */
int __fastcall sub_60431C70(_DWORD *a1, int a2);  /* 0x00431c70 */
int __fastcall sub_60431E14(int a1);  /* 0x00431e14 */
int __fastcall sub_60431E20(int a1);  /* 0x00431e20 */
int __fastcall sub_60431F1C(_DWORD *a1);  /* 0x00431f1c */
int __fastcall sub_60432028(int a1);  /* 0x00432028 */
int __fastcall sub_60432030(_DWORD *a1);  /* 0x00432030 */
int __fastcall sub_60432040(int a1);  /* 0x00432040 */
int __fastcall sub_604332D4(int a1);  /* 0x004332d4 */
int __fastcall sub_60433658(_DWORD *a1, _DWORD *a2, _DWORD *a3, int a4);  /* 0x00433658 */
int __fastcall sub_60433F00(int a1, int a2);  /* 0x00433f00 */
int __fastcall sub_60433F10(int a1, int a2);  /* 0x00433f10 */
int __fastcall sub_60434518(unsigned __int8 *a1);  /* 0x00434518 */
int __fastcall sub_60434A64(int a1, int a2);  /* 0x00434a64 */
int __fastcall sub_60434AE8(int a1, int a2, int a3, _DWORD *a4);  /* 0x00434ae8 */
int __fastcall sub_60435320(int a1, int a2, unsigned int a3, int a4, int a5, _DWORD *a6);  /* 0x00435320 */
int __fastcall sub_6043543C(int a1, int a2, unsigned int a3, int a4, int a5, _DWORD *a6);  /* 0x0043543c */
int __fastcall sub_60435558(int a1, int a2, unsigned int a3, int a4, int a5, _DWORD *a6);  /* 0x00435558 */
int __fastcall sub_60435774(int a1, int a2, unsigned int a3, int a4, int a5, _DWORD *a6);  /* 0x00435774 */
int __fastcall sub_60435890(int a1, int a2, unsigned int a3, int a4, int a5, _DWORD *a6);  /* 0x00435890 */
int __fastcall sub_604359AC(_DWORD *a1);  /* 0x004359ac */
int __fastcall sub_604359E8(_DWORD *a1);  /* 0x004359e8 */
unsigned int __fastcall sub_60435A24(int a1, int a2, int a3, int a4, unsigned int *a5);  /* 0x00435a24 */
unsigned int __fastcall sub_60435B44(int a1, int a2, int a3);  /* 0x00435b44 */
unsigned int __fastcall sub_60435E9C(int a1, int a2, int32x4_t *a3, _DWORD *a4);  /* 0x00435e9c */
int __fastcall sub_60436074(int a1, _DWORD *a2);  /* 0x00436074 */
int __fastcall sub_6043619C(int a1, int a2);  /* 0x0043619c */
int __fastcall sub_604361C4(int a1, unsigned int a2, _DWORD *a3);  /* 0x004361c4 */
int __fastcall sub_604361FC(int a1, unsigned int a2, _DWORD *a3);  /* 0x004361fc */
int __fastcall sub_6043623C(int a1, unsigned int a2, _DWORD *a3);  /* 0x0043623c */
int __fastcall sub_60436274(int a1, unsigned int a2, _DWORD *a3);  /* 0x00436274 */
int __fastcall sub_604362AC(int a1, unsigned int a2, _DWORD *a3);  /* 0x004362ac */
int __fastcall sub_604362E4(int a1);  /* 0x004362e4 */
int __fastcall sub_604362F4(int a1);  /* 0x004362f4 */
int __fastcall sub_604362FC(int a1, int a2);  /* 0x004362fc */
int __fastcall sub_60436320(int a1, _DWORD *a2);  /* 0x00436320 */
int __fastcall sub_60436448(int result, int a2, int a3);  /* 0x00436448 */
int __fastcall sub_604364A0(int result, int a2, int a3);  /* 0x004364a0 */
int __fastcall sub_604364F8(int a1, _DWORD *a2, int a3);  /* 0x004364f8 */
int __fastcall sub_60436664(int result);  /* 0x00436664 */
bool __fastcall sub_60436670(int a1, int a2);  /* 0x00436670 */
int __fastcall sub_60436A4C(int a1);  /* 0x00436a4c */
int __fastcall sub_60436B70(_DWORD *a1, _DWORD *a2, unsigned int a3, unsigned int a4, int a5);  /* 0x00436b70 */
int __fastcall sub_60436FEC(_DWORD *a1, _DWORD *a2, int a3, int a4, int a5, int a6);  /* 0x00436fec */
int __fastcall sub_604373D8(int result);  /* 0x004373d8 */
int __fastcall sub_604373E4(int a1);  /* 0x004373e4 */
int __fastcall sub_604374BC(int a1, int a2, int a3, int32x2_t *a4, _DWORD *a5, _DWORD *a6);  /* 0x004374bc */
int __fastcall sub_60437544(int a1, int a2, int a3, int32x2_t *a4, _DWORD *a5, _DWORD *a6);  /* 0x00437544 */
int __fastcall sub_60437644(_DWORD *a1, int a2);  /* 0x00437644 */
int __fastcall sub_604376E0(_DWORD *a1, int a2, int a3);  /* 0x004376e0 */
int __fastcall sub_6043779C(int a1);  /* 0x0043779c */
int __fastcall sub_604377B0(int a1);  /* 0x004377b0 */
int __fastcall sub_604377C4(int a1);  /* 0x004377c4 */
int __fastcall sub_604377CC(int a1);  /* 0x004377cc */
int __fastcall sub_604377FC(int a1, int a2);  /* 0x004377fc */
int __fastcall sub_60437900(_DWORD *a1);  /* 0x00437900 */
int __fastcall sub_6043793C(int a1);  /* 0x0043793c */
int __fastcall sub_60437960(int a1);  /* 0x00437960 */
int __fastcall sub_60437968(int a1);  /* 0x00437968 */
int __fastcall sub_60437970(int a1);  /* 0x00437970 */
int __fastcall sub_60437984(int a1, int a2);  /* 0x00437984 */
int __fastcall sub_60437A1C(int a1);  /* 0x00437a1c */
int __fastcall sub_60437A74(int a1, int a2);  /* 0x00437a74 */
int __fastcall sub_604399E4(int a1, int a2);  /* 0x004399e4 */
int __fastcall sub_60439B18(int result, int a2, int a3, int a4);  /* 0x00439b18 */
void __fastcall sub_60439C6C(_DWORD *a1);  /* 0x00439c6c */
int __fastcall sub_60439CF4(_DWORD *a1);  /* 0x00439cf4 */
int __fastcall sub_60439E24(_DWORD *a1);  /* 0x00439e24 */
int __fastcall sub_60439E34(int a1, int a2, int a3);  /* 0x00439e34 */
int __fastcall sub_60439ED4(int a1, int a2, int a3, int a4, int a5);  /* 0x00439ed4 */
int __fastcall sub_60439F70(_DWORD *a1, int a2, int a3, int a4, int a5, int a6);  /* 0x00439f70 */
int __fastcall sub_60439F74(_DWORD *a1, int a2, int a3, int a4, int a5, int a6);  /* 0x00439f74 */
int __fastcall sub_6043ADF8(int a1, _DWORD *a2);  /* 0x0043adf8 */
int __fastcall sub_6043AE64(int a1, _DWORD *a2);  /* 0x0043ae64 */
int __fastcall sub_6043AED0(int a1, _DWORD *a2);  /* 0x0043aed0 */
int __fastcall sub_6043AF3C(int a1, int a2, int a3);  /* 0x0043af3c */
int __fastcall sub_6043AF90(int a1, int a2);  /* 0x0043af90 */
int __fastcall sub_6043AFA0(int a1, int a2, int a3);  /* 0x0043afa0 */
int __fastcall sub_6043AFE8(_DWORD *a1);  /* 0x0043afe8 */
int __fastcall sub_6043B198(struct sead_IDisposer *a1);  /* 0x0043b198 */
int __fastcall sub_6043B2D8(int a1, _DWORD *a2, int a3, int a4);  /* 0x0043b2d8 */
int __fastcall LoadResource(int a1, _DWORD *a2);  /* 0x0043b548 */
int __fastcall sub_6043B8B0(int a1, int a2, int a3, int a4, _DWORD *a5, int a6);  /* 0x0043b8b0 */
int __fastcall sub_6043C320(int a1, int a2);  /* 0x0043c320 */
int __fastcall sub_6043C4B4(_DWORD *a1, _DWORD *a2);  /* 0x0043c4b4 */
void __fastcall sub_6043C7E8(struct sead_IDisposer *a1);  /* 0x0043c7e8 */
int __fastcall sub_6043C8FC(struct sead_IDisposer *a1);  /* 0x0043c8fc */
int __fastcall sub_6043C90C(_DWORD *a1);  /* 0x0043c90c */
int __fastcall sub_6043C94C(_DWORD *a1);  /* 0x0043c94c */
int __fastcall sub_6043D148(int a1);  /* 0x0043d148 */
int __fastcall sub_6043D1CC(int a1);  /* 0x0043d1cc */
void __fastcall sub_6043D2C0(int a1);  /* 0x0043d2c0 */
int __fastcall sub_6043D378(int a1);  /* 0x0043d378 */
int __fastcall sub_6043D388(int a1, int a2, int a3);  /* 0x0043d388 */
int __fastcall sub_6043DB00(int a1, int a2, int a3, int a4);  /* 0x0043db00 */
int __fastcall sub_6043DB2C(int result);  /* 0x0043db2c */
int __fastcall sub_6043DB38(int a1, int a2, int a3);  /* 0x0043db38 */
int __fastcall sub_6043E808(int a1, size_t a2);  /* 0x0043e808 */
int __fastcall sub_6043E8A4(int a1, int a2);  /* 0x0043e8a4 */
void __fastcall sub_6043E954(struct sead_IDisposer *a1);  /* 0x0043e954 */
int __fastcall sub_6043EB14(struct sead_IDisposer *a1);  /* 0x0043eb14 */
int __fastcall sub_6043EB24(_DWORD *a1, int a2);  /* 0x0043eb24 */
int __fastcall sub_6043EF40(_DWORD *a1, int a2, int a3);  /* 0x0043ef40 */
int __fastcall sub_6043EF70(int a1, _DWORD *a2);  /* 0x0043ef70 */
int __fastcall sub_6043F0B8(int a1, int a2, int a3);  /* 0x0043f0b8 */
int __fastcall sub_6043F1A4(int result, int a2, int a3);  /* 0x0043f1a4 */
int __fastcall sub_6043F1D0(int a1, _DWORD *a2);  /* 0x0043f1d0 */
int __fastcall sub_6043FA1C(struct sead_IDisposer *a1);  /* 0x0043fa1c */
int __fastcall sub_6043FA94(int a1);  /* 0x0043fa94 */
int __fastcall sub_6043FCA8(_DWORD *a1);  /* 0x0043fca8 */
int __fastcall sub_6043FCB8(int a1, int a2);  /* 0x0043fcb8 */
int __fastcall sub_60440108(_DWORD *a1);  /* 0x00440108 */
bool __fastcall sub_6044022C(unsigned __int8 **a1);  /* 0x0044022c */
int __fastcall sub_60440288(int a1, int a2, unsigned int a3, int a4);  /* 0x00440288 */
int __fastcall sub_60440610(struct sead_IDisposer *a1);  /* 0x00440610 */
int __fastcall sub_6044082C(_DWORD *a1);  /* 0x0044082c */
int __fastcall sub_6044083C(int a1, int a2, int a3, int a4, int a5);  /* 0x0044083c */
int __fastcall sub_60440C2C(_DWORD *a1, int a2);  /* 0x00440c2c */
int __fastcall sub_60440C9C(int a1);  /* 0x00440c9c */
int __fastcall sub_60440EE8(_DWORD *a1);  /* 0x00440ee8 */
int __fastcall sub_60440F00(_DWORD *a1);  /* 0x00440f00 */
int __fastcall sub_60440F90(int a1);  /* 0x00440f90 */
int __fastcall sub_60441050(_DWORD *a1, int a2);  /* 0x00441050 */
int __fastcall sub_60441454(int a1, int a2);  /* 0x00441454 */
int __fastcall sub_60441758(_DWORD *a1, int a2, int a3);  /* 0x00441758 */
int __fastcall sub_60441918(int a1, int a2);  /* 0x00441918 */
int __fastcall sub_6044192C(_DWORD *a1);  /* 0x0044192c */
int __fastcall sub_60441950(_DWORD *a1);  /* 0x00441950 */
int __fastcall sub_60441968(_DWORD *a1);  /* 0x00441968 */
void __fastcall sub_6044198C(int a1, int a2, int a3, int a4, int a5);  /* 0x0044198c */
int __fastcall sub_604419EC(_DWORD *a1, int a2);  /* 0x004419ec */
int __fastcall sub_60441A3C(int a1);  /* 0x00441a3c */
int __fastcall sub_60441A70(struct sead_IDisposer *a1);  /* 0x00441a70 */
int __fastcall sub_60441B18(int a1);  /* 0x00441b18 */
int __fastcall sub_60441CAC(_DWORD *a1);  /* 0x00441cac */
int __fastcall sub_60441D60(_DWORD *a1);  /* 0x00441d60 */
int __fastcall sub_60441DA0(_DWORD *a1, int a2);  /* 0x00441da0 */
int __fastcall sub_60441EFC(int a1, int *a2);  /* 0x00441efc */
int __fastcall sub_60442824(int a1);  /* 0x00442824 */
int __fastcall sub_60442864(int a1, int a2);  /* 0x00442864 */
int __fastcall sub_60442878(int a1, int a2, int a3);  /* 0x00442878 */
bool __fastcall sub_60442968(int a1, int a2);  /* 0x00442968 */
int __fastcall sub_60442C74(int a1, int a2);  /* 0x00442c74 */
int __fastcall sub_60442D94(struct sead_IDisposer *a1);  /* 0x00442d94 */
int __fastcall sub_604431BC(_DWORD *a1, int a2, unsigned int a3);  /* 0x004431bc */
int __fastcall sub_60443298(int result);  /* 0x00443298 */
int __fastcall DrawMgr_drawModel(_DWORD *a1, _DWORD *a2, int a3, int a4, int a5);  /* 0x004432a4 */
int __fastcall DrawMgr_drawModel2(_DWORD *a1, _DWORD *a2, int a3, int a4, int a5);  /* 0x00443344 */
int __fastcall sub_604433E4(_DWORD *a1, _DWORD *a2, int a3, int a4, int a5);  /* 0x004433e4 */
int __fastcall DrawMgr_drawTile(int a1, int a2, int a3, _DWORD *a4, int a5);  /* 0x0044344c */
int __fastcall sub_604434C8(int a1, int a2, int a3, _DWORD *a4, int a5);  /* 0x004434c8 */
int __fastcall sub_60443618(struct sead_IDisposer *a1);  /* 0x00443618 */
int __fastcall sub_60443628(int a1, int a2);  /* 0x00443628 */
int __fastcall sub_6044364C(int a1);  /* 0x0044364c */
int __fastcall sub_604436D0(struct sead_IDisposer *a1);  /* 0x004436d0 */
int __fastcall sub_60443710(int a1, int a2);  /* 0x00443710 */
int __fastcall sub_604437E4(int result, _DWORD *a2);  /* 0x004437e4 */
int __fastcall sub_60443908(int a1, int a2);  /* 0x00443908 */
int __fastcall sub_60443C7C(int *a1, int a2);  /* 0x00443c7c */
int __fastcall sub_60443E70(int result, int a2, int a3);  /* 0x00443e70 */
int __fastcall sub_60443F28(int result);  /* 0x00443f28 */
int __fastcall sub_60443F38(int result);  /* 0x00443f38 */
int __fastcall sub_60443FE0(int a1, int a2);  /* 0x00443fe0 */
int __fastcall sub_604440B8(struct sead_IDisposer *a1);  /* 0x004440b8 */
int __fastcall sub_60444108(_DWORD *a1, int a2, int a3, signed int a4, signed int a5, int a6);  /* 0x00444108 */
int __fastcall sub_604448AC(_DWORD *a1, int a2, int a3, int a4, signed int a5, signed int a6, int a7);  /* 0x004448ac */
bool __fastcall sub_60444DB8(int a1);  /* 0x00444db8 */
int __fastcall sub_60444DD0(int a1);  /* 0x00444dd0 */
int __fastcall sub_60444DD8(int result);  /* 0x00444dd8 */
int __fastcall sub_60444EDC(_DWORD *a1, unsigned int a2, int a3, int a4, int a5, int a6, int a7);  /* 0x00444edc */
int __fastcall sub_60445020(int a1, int a2);  /* 0x00445020 */
int __fastcall sub_60445044(int a1, unsigned int a2);  /* 0x00445044 */
int __fastcall sub_60445120(_DWORD *a1, unsigned int a2, _DWORD *a3);  /* 0x00445120 */
int __fastcall sub_60445224(_DWORD *a1, unsigned int a2, _DWORD *a3);  /* 0x00445224 */
int __fastcall sub_60445328(int a1, unsigned int a2, int a3);  /* 0x00445328 */
int __fastcall sub_604453AC(_DWORD *a1, unsigned int a2, int a3);  /* 0x004453ac */
int __fastcall sub_60445458(_DWORD *a1, unsigned int a2, int a3);  /* 0x00445458 */
int __fastcall sub_60445504(_DWORD *a1, _DWORD *a2, int a3, int a4, _DWORD *a5);  /* 0x00445504 */
int __fastcall sub_60445608(_DWORD *a1, int a2, int a3, int a4);  /* 0x00445608 */
int __fastcall sub_604456F0(int a1, int a2);  /* 0x004456f0 */
int __fastcall sub_60445734(int a1);  /* 0x00445734 */
int __fastcall sub_60445768(int a1, int a2, int a3);  /* 0x00445768 */
int __fastcall sub_604458F8(struct sead_IDisposer *a1);  /* 0x004458f8 */
int __fastcall sub_60445A10(_DWORD *a1, int a2);  /* 0x00445a10 */
int __fastcall sub_60445CD0(int a1, int a2, int a3, int *a4, int a5);  /* 0x00445cd0 */
int __fastcall sub_60445E30(int result, int a2);  /* 0x00445e30 */
int __fastcall ShuAnim_play(int a1, int a2, _DWORD *a3);  /* 0x00445f80 */
int __fastcall sub_60446088(int a1, int a2, _DWORD *a3);  /* 0x00446088 */
int __fastcall sub_60446220(int a1);  /* 0x00446220 */
int __fastcall sub_604463A4(_DWORD *a1);  /* 0x004463a4 */
int __fastcall sub_60446428(_DWORD *a1, int a2);  /* 0x00446428 */
int __fastcall sub_60446668(int a1, int *a2);  /* 0x00446668 */
int __fastcall sub_6044694C(int a1, _DWORD *a2);  /* 0x0044694c */
int __fastcall sub_604469A4(int a1, int a2);  /* 0x004469a4 */
int __fastcall sub_60446A98(int a1, int a2);  /* 0x00446a98 */
bool __fastcall sub_60446AB4(int a1, int a2);  /* 0x00446ab4 */
int __fastcall sub_60446F0C(int result, int a2, int a3, int *a4, int a5);  /* 0x00446f0c */
int __fastcall sub_604470DC(int a1, int a2, _DWORD *a3);  /* 0x004470dc */
int __fastcall sub_60447354(int a1);  /* 0x00447354 */
int __fastcall sub_6044758C(_DWORD *a1);  /* 0x0044758c */
int __fastcall sub_6044759C(int a1);  /* 0x0044759c */
int __fastcall sub_604475BC(int a1);  /* 0x004475bc */
int __fastcall sub_604476FC(int a1, int a2, int a3, int a4, int a5);  /* 0x004476fc */
int __fastcall sub_60447890(int result, int a2);  /* 0x00447890 */
int __fastcall sub_60447898(int a1, int a2, int a3);  /* 0x00447898 */
int __fastcall sub_60447914(int a1, int a2, char a3, int a4);  /* 0x00447914 */
unsigned int __fastcall sub_60447E64(int a1, int a2, int a3, int a4);  /* 0x00447e64 */
int __fastcall sub_60447FD0(int a1, _DWORD *a2, int a3);  /* 0x00447fd0 */
unsigned int __fastcall sub_60448298(_DWORD *a1);  /* 0x00448298 */
int __fastcall sub_60448388(int a1, int a2, _DWORD *a3, int a4);  /* 0x00448388 */
int __fastcall sub_604484CC(int a1, int a2, int a3, _BYTE *a4);  /* 0x004484cc */
int __fastcall sub_60448530(int a1, int a2, int a3);  /* 0x00448530 */
int __fastcall SkeletalAnim_init(int a1, int a2, int a3, int *a4, int a5);  /* 0x004486c8 */
int __fastcall SkeletalAnim_play(int a1, int a2, _DWORD *a3);  /* 0x004488dc */
int __fastcall sub_60448AF4(int result, int a2);  /* 0x00448af4 */
int __fastcall sub_60448B4C(int result);  /* 0x00448b4c */
int __fastcall sub_60448B8C(int result, int a2);  /* 0x00448b8c */
int __fastcall sub_60448C14(_DWORD *a1, _DWORD *a2, int a3, _DWORD *a4, int a5);  /* 0x00448c14 */
int __fastcall sub_60448D04(_DWORD *a1, _DWORD *a2, int a3, _DWORD *a4, int a5);  /* 0x00448d04 */
int __fastcall sub_604490E4(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x004490e4 */
int __fastcall sub_60449314(int a1);  /* 0x00449314 */
int __fastcall sub_6044980C(int a1);  /* 0x0044980c */
int __fastcall sub_60449810(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x00449810 */
int __fastcall sub_604498E8(int a1);  /* 0x004498e8 */
int __fastcall sub_60449E64(int a1);  /* 0x00449e64 */
int __fastcall sub_6044A024(int a1);  /* 0x0044a024 */
int __fastcall sub_6044B310(int a1);  /* 0x0044b310 */
int __fastcall sub_6044B314(int a1, int a2, int a3, int a4);  /* 0x0044b314 */
unsigned int __fastcall sub_6044B410(_DWORD *a1);  /* 0x0044b410 */
int __fastcall sub_6044B798(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x0044b798 */
int __fastcall sub_6044B880(int a1);  /* 0x0044b880 */
int __fastcall sub_6044BD6C(int a1, int a2, int a3, int a4);  /* 0x0044bd6c */
int __fastcall sub_6044BECC(int a1);  /* 0x0044becc */
int __fastcall sub_6044C1FC(int a1, int a2, int a3, int a4, int a5, int a6);  /* 0x0044c1fc */
int __fastcall sub_6044C4AC(int a1);  /* 0x0044c4ac */
int __fastcall sub_6044C520(int a1, unsigned int a2);  /* 0x0044c520 */
int __fastcall sub_6044C848(int a1, unsigned int a2);  /* 0x0044c848 */
int __fastcall sub_6044CF6C(int a1, int a2);  /* 0x0044cf6c */
int __fastcall sub_6044D3DC(int a1, unsigned int a2);  /* 0x0044d3dc */
int __fastcall sub_6044DB00(int a1, int a2, int a3);  /* 0x0044db00 */
int __fastcall sub_6044E288(_DWORD *a1, int a2, int a3, int a4);  /* 0x0044e288 */
int __fastcall sub_6044E360(float *a1);  /* 0x0044e360 */
int __fastcall sub_6044E668(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10);  /* 0x0044e668 */
int __fastcall sub_6044E800(int a1, int a2);  /* 0x0044e800 */
int __fastcall sub_6044EDE8(struct sead_IDisposer *a1);  /* 0x0044ede8 */
int __fastcall sub_6044EE58(int a1);  /* 0x0044ee58 */
int __fastcall sub_6044EED0(_DWORD *a1, int a2, int a3);  /* 0x0044eed0 */
int __fastcall sub_6044F1C4(int a1, int a2);  /* 0x0044f1c4 */
int __fastcall sub_6044F840(_DWORD *a1);  /* 0x0044f840 */
void __fastcall sub_6044F858(_DWORD *a1);  /* 0x0044f858 */
int __fastcall sub_6044F890(int a1);  /* 0x0044f890 */
int __fastcall sub_6044FDE8(int a1, int a2, _DWORD *a3);  /* 0x0044fde8 */
int __fastcall sub_6044FEC0(int a1, int a2, int a3, int a4, int a5);  /* 0x0044fec0 */
int __fastcall sub_6044FED0(int a1, int a2, int a3, int a4);  /* 0x0044fed0 */

