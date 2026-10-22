/* NSMBU Deluxe (Switch) v1.0.0 -- player subsystem prototypes
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

/* ---- player.c ---- */
unsigned int __fastcall sub_607824B8(unsigned int result, int a2);  /* 0x007824b8 */
unsigned int __fastcall sub_60782500(unsigned int result, int a2);  /* 0x00782500 */
int __fastcall sub_60782A74(int a1, int a2);  /* 0x00782a74 */
int __fastcall sub_60782C24(int a1, int a2);  /* 0x00782c24 */
int __fastcall sub_607855B8(int a1);  /* 0x007855b8 */
int __fastcall sub_607857AC(int a1);  /* 0x007857ac */
int __fastcall sub_60785B04(int a1);  /* 0x00785b04 */
int __fastcall sub_60786048(int *a1);  /* 0x00786048 */
int __fastcall sub_607862A4(int a1);  /* 0x007862a4 */
int __fastcall sub_607865EC(int result);  /* 0x007865ec */
int __fastcall sub_6078663C(int a1);  /* 0x0078663c */
int __fastcall sub_60786778(_DWORD *a1, int a2);  /* 0x00786778 */
int __fastcall sub_607867EC(_DWORD *a1, int a2);  /* 0x007867ec */
int __fastcall sub_607868A0(int a1);  /* 0x007868a0 */
int __fastcall sub_607868D4(int a1, _DWORD *a2);  /* 0x007868d4 */
bool __fastcall sub_60786974(int a1);  /* 0x00786974 */
int __fastcall sub_607869D0(int a1);  /* 0x007869d0 */
int __fastcall sub_60786A0C(int a1);  /* 0x00786a0c */
int __fastcall sub_60786A98(int a1, int a2);  /* 0x00786a98 */
bool __fastcall sub_60786B38(int a1);  /* 0x00786b38 */
int __fastcall sub_60786C94(int a1);  /* 0x00786c94 */
int __fastcall sub_60786E30(int a1);  /* 0x00786e30 */
int __fastcall sub_60786EA8(int a1);  /* 0x00786ea8 */
unsigned int __fastcall sub_60787024(int a1);  /* 0x00787024 */
int __fastcall sub_60787118(int a1, int a2);  /* 0x00787118 */
int __fastcall sub_607872F4(int a1, int a2);  /* 0x007872f4 */
int __fastcall sub_60788898(int result, unsigned __int16 *a2);  /* 0x00788898 */
int __fastcall sub_60788A10(int a1, int a2, int *a3, int a4, int a5, int a6);  /* 0x00788a10 */
int __fastcall sub_60788BD4(int a1, int a2, int *a3, int a4, int a5);  /* 0x00788bd4 */
int __fastcall sub_60788D18(int *a1);  /* 0x00788d18 */
int __fastcall sub_60788DFC(int a1, unsigned int a2);  /* 0x00788dfc */
int __fastcall sub_60788ED8(int a1, unsigned int a2, int a3);  /* 0x00788ed8 */
int __fastcall sub_60788F14(int a1, unsigned int a2);  /* 0x00788f14 */
int __fastcall sub_60788F54(int a1, unsigned int a2);  /* 0x00788f54 */
int __fastcall sub_60788F8C(int a1, int a2);  /* 0x00788f8c */
int __fastcall sub_60789018(_DWORD *a1, int a2);  /* 0x00789018 */
int __fastcall sub_607891A0(_DWORD *a1, int a2);  /* 0x007891a0 */
int __fastcall sub_607891F8(_DWORD *a1, unsigned int a2);  /* 0x007891f8 */
int __fastcall sub_60789234(_DWORD *a1);  /* 0x00789234 */
int __fastcall sub_607892B4(_DWORD *a1);  /* 0x007892b4 */
int __fastcall sub_607893AC(int a1);  /* 0x007893ac */
int __fastcall sub_6078962C(int a1);  /* 0x0078962c */
int __fastcall sub_60789778(int a1);  /* 0x00789778 */
int __fastcall sub_6078992C(int a1);  /* 0x0078992c */
int __fastcall sub_60789C38(_DWORD *a1);  /* 0x00789c38 */
int __fastcall PlayerMgr_hasPlayer(int a1, unsigned int a2);  /* 0x00789d20 */
int __fastcall sub_60789DBC(int a1);  /* 0x00789dbc */
int __fastcall sub_60789F84(int a1, unsigned int a2);  /* 0x00789f84 */
int __fastcall sub_6078A030(_DWORD *a1);  /* 0x0078a030 */
bool __fastcall sub_6078A168(_DWORD *a1);  /* 0x0078a168 */
bool __fastcall sub_6078A3DC(int a1, unsigned int a2);  /* 0x0078a3dc */
int __fastcall sub_6078A4C8(int a1, unsigned int a2);  /* 0x0078a4c8 */
int __fastcall sub_6078A55C(int a1, int a2);  /* 0x0078a55c */
int __fastcall sub_6078A64C(int a1, unsigned int a2);  /* 0x0078a64c */
int __fastcall sub_6078A76C(_DWORD *a1);  /* 0x0078a76c */
int __fastcall sub_6078A8C0(int result);  /* 0x0078a8c0 */
int __fastcall sub_6078A964(int result, unsigned int a2);  /* 0x0078a964 */
int __fastcall sub_6078A9F8(int a1);  /* 0x0078a9f8 */
int __fastcall sub_6078AA44(int a1);  /* 0x0078aa44 */
int __fastcall sub_6078AABC(int result);  /* 0x0078aabc */
int __fastcall sub_6078AB40(int result, int a2, unsigned int a3, int a4);  /* 0x0078ab40 */
int __fastcall sub_6078AD40(int *a1);  /* 0x0078ad40 */
bool __fastcall sub_6078B41C(_DWORD *a1);  /* 0x0078b41c */
int __fastcall sub_6078B590(_DWORD *a1, int a2);  /* 0x0078b590 */
bool __fastcall sub_6078B6A0(_DWORD *a1);  /* 0x0078b6a0 */
int __fastcall sub_6078C444(int a1, int a2, int a3, int a4, int a5, char a6);  /* 0x0078c444 */
int __fastcall sub_6078C590(int *a1, int a2);  /* 0x0078c590 */
int __fastcall sub_6078C964(int result, int a2, int a3);  /* 0x0078c964 */
int __fastcall sub_6078CCE0(int a1);  /* 0x0078cce0 */
int __fastcall sub_6078CEA8(_DWORD *a1);  /* 0x0078cea8 */
int __fastcall sub_6078D04C(int a1);  /* 0x0078d04c */
int __fastcall sub_6078D230(_DWORD *a1);  /* 0x0078d230 */
int __fastcall sub_6078D260(_DWORD *a1);  /* 0x0078d260 */
float __fastcall sub_6078D328(int a1);  /* 0x0078d328 */
int __fastcall sub_6078D4AC(int a1, int a2);  /* 0x0078d4ac */
int __fastcall sub_6078D94C(int a1);  /* 0x0078d94c */
int __fastcall sub_6078DC64(int result);  /* 0x0078dc64 */
int __fastcall sub_6078DDAC(int a1);  /* 0x0078ddac */
float __fastcall sub_6078E17C(int a1);  /* 0x0078e17c */
int __fastcall sub_6078E48C(int *a1, int a2);  /* 0x0078e48c */
int __fastcall sub_6078E5A8(_DWORD *a1, int a2);  /* 0x0078e5a8 */
int __fastcall sub_6078E608(_DWORD *a1, int a2);  /* 0x0078e608 */
int __fastcall sub_6078E7F0(int a1);  /* 0x0078e7f0 */
int __fastcall sub_6078E940(int a1, int *a2);  /* 0x0078e940 */
int __fastcall sub_6078EBF4(int a1);  /* 0x0078ebf4 */
int __fastcall sub_6078ED00(int a1, int a2, int a3, _DWORD *a4);  /* 0x0078ed00 */
void __fastcall sub_6078EE88(int a1, _DWORD *a2);  /* 0x0078ee88 */
int __fastcall sub_6078EFFC(int result, int a2);  /* 0x0078effc */
int __fastcall sub_6078F110(_DWORD *a1);  /* 0x0078f110 */
int __fastcall sub_6078F234(int result, int a2);  /* 0x0078f234 */
int __fastcall sub_6078F2B0(int a1);  /* 0x0078f2b0 */
int __fastcall sub_6078F32C(_DWORD *a1, int a2, int a3, int a4, int a5, int a6);  /* 0x0078f32c */
int __fastcall sub_6079104C(int a1, _DWORD *a2, int a3, int a4, int a5);  /* 0x0079104c */
int __fastcall sub_607915D4(_DWORD *a1, int a2, int a3, int a4);  /* 0x007915d4 */
int __fastcall sub_60792084(int a1, int a2, _DWORD *a3, int a4);  /* 0x00792084 */
int __fastcall sub_60792114(_DWORD *a1);  /* 0x00792114 */
int __fastcall sub_60792394(_BYTE *a1, int a2);  /* 0x00792394 */
int __fastcall sub_60792680(_DWORD *a1, int a2);  /* 0x00792680 */
int __fastcall sub_607929C0(int a1, _DWORD *a2, _DWORD *a3);  /* 0x007929c0 */
unsigned __int64 __fastcall sub_60792ADC(int a1, unsigned int a2);  /* 0x00792adc */
int __fastcall sub_60792B58(_DWORD *a1, int a2);  /* 0x00792b58 */
int __fastcall sub_60793088(_DWORD *a1);  /* 0x00793088 */
int __fastcall sub_60793114(_DWORD *a1);  /* 0x00793114 */
int __fastcall sub_607931B8(int a1);  /* 0x007931b8 */
int __fastcall sub_6079323C(int a1);  /* 0x0079323c */
int __fastcall sub_607934D4(_DWORD *a1, int a2);  /* 0x007934d4 */
int __fastcall sub_60793B2C(int a1, int a2);  /* 0x00793b2c */
int __fastcall sub_60793C0C(int a1);  /* 0x00793c0c */
int __fastcall sub_60793C54(int a1);  /* 0x00793c54 */
int __fastcall sub_60793D24(int a1);  /* 0x00793d24 */
int __fastcall sub_60793D5C(int a1);  /* 0x00793d5c */
int __fastcall sub_60793F04(int a1, _DWORD *a2);  /* 0x00793f04 */
int __fastcall sub_60793F40(int result, int *a2, int a3);  /* 0x00793f40 */
int __fastcall sub_60793F98(int result, int *a2, int a3);  /* 0x00793f98 */
int __fastcall sub_60793FF0(int a1, __int64 *a2);  /* 0x00793ff0 */
int __fastcall sub_6079437C(int a1);  /* 0x0079437c */
int __fastcall sub_607945E0(int result);  /* 0x007945e0 */
int __fastcall Player_ReleaseCarryableEnemy_helper_794678(int result);  /* 0x00794678 */
int __fastcall sub_60794848(int a1, _DWORD *a2);  /* 0x00794848 */
int __fastcall sub_607948E8(int a1, int a2);  /* 0x007948e8 */
int __fastcall sub_60794954(int a1, int a2);  /* 0x00794954 */
int __fastcall sub_607949A4(int a1, int a2);  /* 0x007949a4 */
int __fastcall sub_607949E8(int a1);  /* 0x007949e8 */
int __fastcall sub_60794A90(int result, int a2);  /* 0x00794a90 */
int __fastcall sub_60794BDC(int a1, int a2, int a3, unsigned int a4, int a5);  /* 0x00794bdc */
int __fastcall Player_create(int a1);  /* 0x00794ea4 */
int __fastcall Player_ctor(int a1, int a2);  /* 0x00794ec0 */
int __fastcall sub_6079569C(int a1);  /* 0x0079569c */
int __fastcall sub_607957E0(int a1);  /* 0x007957e0 */
int __fastcall sub_6079585C(int a1);  /* 0x0079585c */
int __fastcall sub_607958A0(int a1);  /* 0x007958a0 */
int __fastcall sub_607958F0(int a1, int a2);  /* 0x007958f0 */
int __fastcall sub_6079592C(int a1);  /* 0x0079592c */
int __fastcall sub_60795B68(_DWORD *a1);  /* 0x00795b68 */
int __fastcall sub_60795CDC(int a1, int a2, int a3);  /* 0x00795cdc */
int __fastcall sub_60796388(int a1);  /* 0x00796388 */
int __fastcall sub_607965CC(int a1);  /* 0x007965cc */
int __fastcall sub_60796828(int a1);  /* 0x00796828 */
int __fastcall sub_60796F0C(int a1);  /* 0x00796f0c */
int __fastcall sub_607971BC(int a1);  /* 0x007971bc */
bool __fastcall sub_60797820(_DWORD *a1);  /* 0x00797820 */
int __fastcall sub_60797A50(_DWORD *a1);  /* 0x00797a50 */
bool __fastcall sub_60797DDC(int a1);  /* 0x00797ddc */
int __fastcall sub_60798044(int a1);  /* 0x00798044 */
int __fastcall sub_60798204(int a1, int a2);  /* 0x00798204 */
int __fastcall sub_607982F4(int result);  /* 0x007982f4 */
int __fastcall sub_60798348(unsigned __int8 *a1);  /* 0x00798348 */
int __fastcall sub_60798D7C(int a1);  /* 0x00798d7c */
int __fastcall sub_60798DF8(int a1);  /* 0x00798df8 */
int __fastcall sub_60798E94(int a1);  /* 0x00798e94 */
int __fastcall sub_60798F60(unsigned __int8 *a1);  /* 0x00798f60 */
int __fastcall sub_60799130(int a1);  /* 0x00799130 */
int __fastcall sub_60799248(char *a1, int a2);  /* 0x00799248 */
int __fastcall sub_607993A8(int a1);  /* 0x007993a8 */
int __fastcall sub_607995FC(int a1);  /* 0x007995fc */
bool __fastcall sub_6079983C(int a1, int a2);  /* 0x0079983c */
bool __fastcall sub_607998FC(int a1);  /* 0x007998fc */
bool __fastcall sub_60799960(int a1);  /* 0x00799960 */
int __fastcall sub_6079A618(int a1, float *a2, int a3);  /* 0x0079a618 */
int __fastcall sub_6079A758(int a1);  /* 0x0079a758 */
int __fastcall sub_6079A890(_DWORD *a1);  /* 0x0079a890 */
int __fastcall sub_6079AE3C(int a1, int a2, int a3, int a4);  /* 0x0079ae3c */
int __fastcall sub_6079AFAC(float *a1, float *a2, int a3);  /* 0x0079afac */
int __fastcall sub_6079B128(int a1);  /* 0x0079b128 */
int __fastcall sub_6079B3CC(int a1);  /* 0x0079b3cc */
int __fastcall sub_6079B544(_DWORD *a1);  /* 0x0079b544 */
int __fastcall sub_6079B650(int a1);  /* 0x0079b650 */
int __fastcall sub_6079B8FC(int a1, int a2);  /* 0x0079b8fc */
int __fastcall sub_6079BFA4(int a1, int a2);  /* 0x0079bfa4 */
int __fastcall sub_6079C40C(int a1);  /* 0x0079c40c */
bool __fastcall sub_6079C784(int a1);  /* 0x0079c784 */
int __fastcall sub_6079C870(int a1, int a2, float *a3, int a4);  /* 0x0079c870 */
int __fastcall sub_6079C9D8(int a1, float *a2, int a3, int a4);  /* 0x0079c9d8 */
unsigned int __fastcall sub_6079CA8C(int a1);  /* 0x0079ca8c */
int __fastcall sub_6079D0A0(int a1, _DWORD *a2);  /* 0x0079d0a0 */
int __fastcall sub_6079D104(int a1, int *a2);  /* 0x0079d104 */
bool __fastcall sub_6079D270(int a1, int a2);  /* 0x0079d270 */
unsigned int __fastcall sub_6079D390(int a1);  /* 0x0079d390 */
int __fastcall sub_6079D45C(int result);  /* 0x0079d45c */
int __fastcall sub_6079D4B0(int a1, float *a2);  /* 0x0079d4b0 */
int __fastcall sub_6079D5A0(int a1, float32x2_t *a2);  /* 0x0079d5a0 */
int __fastcall sub_6079DCBC(int a1);  /* 0x0079dcbc */
int __fastcall sub_6079DD80(int a1);  /* 0x0079dd80 */
int __fastcall sub_6079DE44(int a1);  /* 0x0079de44 */
int __fastcall sub_6079DF08(int a1);  /* 0x0079df08 */
int __fastcall sub_6079DFCC(int a1);  /* 0x0079dfcc */
int __fastcall sub_6079E090(int a1);  /* 0x0079e090 */
int __fastcall sub_6079E154(_DWORD *a1, unsigned int a2, int a3);  /* 0x0079e154 */
int __fastcall sub_6079E27C(int a1, int a2, int a3);  /* 0x0079e27c */
int __fastcall sub_6079E494(int a1);  /* 0x0079e494 */
int __fastcall sub_6079E5E0(_BYTE *a1, int a2, int a3);  /* 0x0079e5e0 */
int __fastcall sub_6079E724(int a1);  /* 0x0079e724 */
int __fastcall sub_6079E82C(_DWORD *a1, int a2);  /* 0x0079e82c */
int __fastcall sub_6079E8F8(int *a1);  /* 0x0079e8f8 */
int __fastcall SE_PLY_OTHER_ON_ref(unsigned __int8 *a1);  /* 0x0079ea50 */
int __fastcall sub_6079F260(int a1);  /* 0x0079f260 */
unsigned int __fastcall sub_6079F31C(int a1);  /* 0x0079f31c */
int __fastcall sub_6079F394(int a1, int a2, float *a3);  /* 0x0079f394 */
int __fastcall sub_6079F548(int a1);  /* 0x0079f548 */
int __fastcall sub_6079FEC4(int a1, _DWORD *a2);  /* 0x0079fec4 */
bool __fastcall sub_607A01BC(int a1, int a2);  /* 0x007a01bc */
int __fastcall sub_607A0514(int a1, int a2);  /* 0x007a0514 */
int __fastcall sub_607A091C(int a1, int a2, int a3);  /* 0x007a091c */
int __fastcall sub_607A1198(int a1, int a2);  /* 0x007a1198 */
int __fastcall sub_607A1388(int a1, int a2, int a3, int a4, int a5);  /* 0x007a1388 */
int __fastcall sub_607A14E0(int a1);  /* 0x007a14e0 */
int __fastcall sub_607A1DF4(int a1, int a2);  /* 0x007a1df4 */
int __fastcall sub_607A1E6C(int a1);  /* 0x007a1e6c */
int __fastcall Player_stun(int a1, int a2);  /* 0x007a1f5c */
int __fastcall sub_607A1FFC(int a1);  /* 0x007a1ffc */
int __fastcall Player_beginState_Stunned(_DWORD *a1);  /* 0x007a205c */
int __fastcall Player_endState_Stunned(int *a1);  /* 0x007a20e0 */
int __fastcall Player_executeState_Stunned(_DWORD *a1);  /* 0x007a214c */
int __fastcall sub_607A2628(int a1, int a2);  /* 0x007a2628 */
int __fastcall sub_607A2684(int a1);  /* 0x007a2684 */
int __fastcall sub_607A27A8(_DWORD *a1, int a2);  /* 0x007a27a8 */
int __fastcall sub_607A2820(int a1, int a2);  /* 0x007a2820 */
int __fastcall sub_607A293C(int a1);  /* 0x007a293c */
int __fastcall sub_607A2AF8(int a1, int a2, int a3, int a4);  /* 0x007a2af8 */
int __fastcall sub_607A2F40(unsigned __int8 *a1);  /* 0x007a2f40 */
int __fastcall sub_607A30CC(_DWORD *a1);  /* 0x007a30cc */
int __fastcall sub_607A396C(int a1);  /* 0x007a396c */
int __fastcall sub_607A5470(_DWORD *a1, _DWORD *a2, int a3);  /* 0x007a5470 */
int __fastcall sub_607A57FC(int result);  /* 0x007a57fc */
bool __fastcall sub_607A5B1C(_BYTE *a1);  /* 0x007a5b1c */
int __fastcall sub_607A65C8(_DWORD *a1);  /* 0x007a65c8 */
int __fastcall sub_607A6720(int result);  /* 0x007a6720 */
int __fastcall sub_607A6808(int result);  /* 0x007a6808 */
int __fastcall sub_607A68CC(int a1);  /* 0x007a68cc */
int __fastcall sub_607A6A48(int a1);  /* 0x007a6a48 */
int __fastcall sub_607A7010(int a1);  /* 0x007a7010 */
int __fastcall sub_607A7220(int a1);  /* 0x007a7220 */
int __fastcall sub_607A7AA4(int a1, int a2, int a3);  /* 0x007a7aa4 */
int __fastcall sub_607A7C0C(int a1);  /* 0x007a7c0c */
int __fastcall sub_607A8020(int a1);  /* 0x007a8020 */
int __fastcall sub_607A8098(_DWORD *a1);  /* 0x007a8098 */
int __fastcall sub_607A812C(int a1);  /* 0x007a812c */
int __fastcall sub_607A81AC(int a1);  /* 0x007a81ac */
int __fastcall sub_607A8240(int a1);  /* 0x007a8240 */
int __fastcall sub_607A8354(int a1);  /* 0x007a8354 */
int __fastcall sub_607A9054(_DWORD **a1);  /* 0x007a9054 */
int __fastcall sub_607A90F8(_DWORD *a1);  /* 0x007a90f8 */
int __fastcall sub_607A9264(int a1, int a2, int a3);  /* 0x007a9264 */
int __fastcall sub_607A950C(_DWORD *a1);  /* 0x007a950c */
int __fastcall sub_607A9664(int a1);  /* 0x007a9664 */
int __fastcall sub_607A9790(int a1);  /* 0x007a9790 */
int __fastcall sub_607A9978(int a1);  /* 0x007a9978 */
int __fastcall sub_607A9A3C(_DWORD *a1);  /* 0x007a9a3c */
int __fastcall sub_607A9E84(int result, int a2);  /* 0x007a9e84 */
int __fastcall sub_607AA02C(int a1, int a2);  /* 0x007aa02c */
int __fastcall sub_607AA0B0(int a1, int a2);  /* 0x007aa0b0 */
int __fastcall sub_607AA630(int a1);  /* 0x007aa630 */
int __fastcall sub_607AA68C(int a1);  /* 0x007aa68c */
int __fastcall sub_607AA6F4(int a1);  /* 0x007aa6f4 */
int __fastcall sub_607AA784(int a1);  /* 0x007aa784 */
int __fastcall sub_607AA954(int a1);  /* 0x007aa954 */
int __fastcall sub_607AAA00(int a1);  /* 0x007aaa00 */
void __fastcall sub_607AABA0(int a1, int a2);  /* 0x007aaba0 */
void __fastcall sub_607AB2C8(_DWORD *a1);  /* 0x007ab2c8 */
bool __fastcall sub_607AB408(int a1);  /* 0x007ab408 */
bool __fastcall sub_607AB44C(int a1);  /* 0x007ab44c */
int __fastcall sub_607AB4A8(int a1);  /* 0x007ab4a8 */
int __fastcall sub_607AB680(int a1);  /* 0x007ab680 */
int __fastcall sub_607AB744(int a1);  /* 0x007ab744 */
int __fastcall sub_607ABBA4(_DWORD *a1, int a2);  /* 0x007abba4 */
int __fastcall sub_607ABF7C(int a1);  /* 0x007abf7c */
int __fastcall sub_607AC0B8(int a1);  /* 0x007ac0b8 */
int __fastcall sub_607AC310(int a1, int a2, int a3);  /* 0x007ac310 */
int __fastcall sub_607AC4B4(int result);  /* 0x007ac4b4 */
int __fastcall sub_607AC67C(int a1);  /* 0x007ac67c */
int __fastcall sub_607AC8CC(int a1);  /* 0x007ac8cc */
int __fastcall sub_607ACE00(int a1);  /* 0x007ace00 */
int __fastcall sub_607AD58C(int a1);  /* 0x007ad58c */
unsigned int __fastcall sub_607AD7BC(int a1);  /* 0x007ad7bc */
int __fastcall sub_607ADA14(int32x4_t *a1);  /* 0x007ada14 */
int __fastcall sub_607ADB50(int a1);  /* 0x007adb50 */
int __fastcall sub_607ADCAC(int a1);  /* 0x007adcac */
int __fastcall sub_607ADF60(int a1);  /* 0x007adf60 */
int __fastcall sub_607AE088(int a1);  /* 0x007ae088 */
void __fastcall sub_607AE0D4(int a1);  /* 0x007ae0d4 */
int __fastcall Player_setPowerupMode_helper(int result);  /* 0x007ae108 */
bool __fastcall sub_607AE118(int a1);  /* 0x007ae118 */
bool __fastcall sub_607AE184(int a1);  /* 0x007ae184 */
bool __fastcall sub_607AE234(_BYTE *a1);  /* 0x007ae234 */
int __fastcall sub_607AE2BC(int a1);  /* 0x007ae2bc */
int __fastcall sub_607AE304(_BYTE *a1, int a2);  /* 0x007ae304 */
int __fastcall sub_607AE4BC(int a1);  /* 0x007ae4bc */
int __fastcall sub_607AE904(int a1, int a2);  /* 0x007ae904 */
int __fastcall sub_607AEA48(_BYTE *a1);  /* 0x007aea48 */
int __fastcall SE_PLY_ROLLING_ref(unsigned __int8 *a1);  /* 0x007aebd0 */
unsigned int __fastcall sub_607AF000(int a1);  /* 0x007af000 */
unsigned int __fastcall sub_607AF67C(int a1, int a2);  /* 0x007af67c */
int __fastcall sub_607AF910(int a1, int a2);  /* 0x007af910 */
int __fastcall sub_607AFBB0(int a1);  /* 0x007afbb0 */
int __fastcall sub_607AFD98(int a1);  /* 0x007afd98 */
int __fastcall sub_607AFE48(_DWORD *a1);  /* 0x007afe48 */
int __fastcall sub_607AFF5C(int a1);  /* 0x007aff5c */
int __fastcall sub_607B0140(int a1);  /* 0x007b0140 */
int __fastcall sub_607B03C0(int a1, int a2, int a3, int a4);  /* 0x007b03c0 */
int __fastcall sub_607B17A4(int a1);  /* 0x007b17a4 */
int __fastcall sub_607B184C(int a1);  /* 0x007b184c */
int __fastcall sub_607B1F60(int a1);  /* 0x007b1f60 */
int __fastcall sub_607B21D4(int a1);  /* 0x007b21d4 */
int __fastcall sub_607B22AC(int a1);  /* 0x007b22ac */
int __fastcall sub_607B2660(float *a1);  /* 0x007b2660 */
int __fastcall sub_607B2824(int a1);  /* 0x007b2824 */
int __fastcall sub_607B29BC(int a1);  /* 0x007b29bc */
int __fastcall sub_607B2C38(int a1);  /* 0x007b2c38 */
int __fastcall SE_PLY_MONKEY_BARS_ref(int a1);  /* 0x007b2e44 */
int __fastcall sub_607B2F74(int a1);  /* 0x007b2f74 */
int __fastcall sub_607B3054(int a1);  /* 0x007b3054 */
int __fastcall sub_607B3698(int a1);  /* 0x007b3698 */
int __fastcall sub_607B4830(int a1);  /* 0x007b4830 */
int __fastcall sub_607B5010(int a1);  /* 0x007b5010 */
int __fastcall sub_607B51C4(int a1);  /* 0x007b51c4 */
int __fastcall sub_607B5380(_DWORD *a1);  /* 0x007b5380 */
unsigned int __fastcall SE_PLY_POLE_CATCH_ref(int a1);  /* 0x007b5418 */
unsigned int __fastcall sub_607B58B0(int a1);  /* 0x007b58b0 */
int __fastcall sub_607B5A18(int a1, int a2, int a3, int a4);  /* 0x007b5a18 */
int __fastcall sub_607B5AD8(int a1, int a2, int a3, int a4);  /* 0x007b5ad8 */
int __fastcall sub_607B5BF8(int a1, int a2, int a3, int a4);  /* 0x007b5bf8 */
int __fastcall sub_607B5D14(int a1);  /* 0x007b5d14 */
int __fastcall sub_607B6004(int a1);  /* 0x007b6004 */
int __fastcall sub_607B6114(int a1);  /* 0x007b6114 */
int __fastcall sub_607B6590(_DWORD *a1);  /* 0x007b6590 */
int __fastcall sub_607B67D8(int a1);  /* 0x007b67d8 */
bool __fastcall sub_607B6954(int a1);  /* 0x007b6954 */
int __fastcall sub_607B6B04(int a1, int a2, int a3, int a4);  /* 0x007b6b04 */
int __fastcall sub_607B6CB0(_BYTE *a1);  /* 0x007b6cb0 */
int __fastcall sub_607B6D18(int a1);  /* 0x007b6d18 */
bool __fastcall sub_607B6D60(int a1);  /* 0x007b6d60 */
int __fastcall sub_607B6D90(int a1);  /* 0x007b6d90 */
int __fastcall sub_607B7140(int a1, float *a2);  /* 0x007b7140 */
int __fastcall sub_607B73BC(int a1);  /* 0x007b73bc */
int __fastcall sub_607B74E0(_DWORD *a1);  /* 0x007b74e0 */
int __fastcall sub_607B7C9C(float *a1);  /* 0x007b7c9c */
int __fastcall sub_607B7FC0(int a1);  /* 0x007b7fc0 */
int __fastcall sub_607B80F0(int a1, int *a2);  /* 0x007b80f0 */
int __fastcall sub_607B8404(int a1);  /* 0x007b8404 */
int __fastcall sub_607B8A08(int a1, int a2);  /* 0x007b8a08 */
bool __fastcall sub_607B8A50(int a1, int a2);  /* 0x007b8a50 */
int __fastcall sub_607B8A80(int result, __int64 *a2);  /* 0x007b8a80 */
int __fastcall sub_607B8AC4(int a1);  /* 0x007b8ac4 */
int __fastcall sub_607B8BC0(int result);  /* 0x007b8bc0 */
int __fastcall SE_PLY_MOVE_ROLLING_ref(int *a1);  /* 0x007b8fac */
int __fastcall sub_607B920C(int a1);  /* 0x007b920c */
bool __fastcall sub_607B926C(int a1);  /* 0x007b926c */
int __fastcall sub_607B939C(_DWORD *a1);  /* 0x007b939c */
int __fastcall sub_607B9488(_DWORD *a1);  /* 0x007b9488 */
int __fastcall sub_607B94F0(int a1);  /* 0x007b94f0 */
int __fastcall sub_607B9614(int a1);  /* 0x007b9614 */
int __fastcall sub_607B9B34(int a1);  /* 0x007b9b34 */
int __fastcall sub_607B9C78(int a1, int a2);  /* 0x007b9c78 */
int __fastcall sub_607BA11C(float *a1);  /* 0x007ba11c */
int __fastcall sub_607BA308(float *a1);  /* 0x007ba308 */
int __fastcall sub_607BA4F4(int result);  /* 0x007ba4f4 */
int __fastcall sub_607BA534(int a1);  /* 0x007ba534 */
int __fastcall sub_607BA5CC(int a1);  /* 0x007ba5cc */
int __fastcall sub_607BA6B4(int32x4_t *a1);  /* 0x007ba6b4 */
int __fastcall sub_607BA7C0(int32x4_t *a1);  /* 0x007ba7c0 */
int __fastcall sub_607BA828(_DWORD *a1, int a2);  /* 0x007ba828 */
int __fastcall sub_607BA878(_BYTE *a1);  /* 0x007ba878 */
int __fastcall sub_607BA8E0(int *a1);  /* 0x007ba8e0 */
int __fastcall sub_607BAA4C(int a1);  /* 0x007baa4c */
int __fastcall sub_607BABC4(int a1);  /* 0x007babc4 */
int __fastcall sub_607BAFF4(_DWORD *a1);  /* 0x007baff4 */
int __fastcall sub_607BB53C(int a1);  /* 0x007bb53c */
int __fastcall sub_607BB578(int a1);  /* 0x007bb578 */
int __fastcall sub_607BB5D8(unsigned __int8 *a1);  /* 0x007bb5d8 */
int __fastcall sub_607BB7D8(int a1);  /* 0x007bb7d8 */
int __fastcall sub_607BB984(_BYTE *a1);  /* 0x007bb984 */
int __fastcall sub_607BBA3C(int a1);  /* 0x007bba3c */
int __fastcall sub_607BBA94(int a1);  /* 0x007bba94 */
int __fastcall sub_607BBAF0(int a1);  /* 0x007bbaf0 */
int __fastcall sub_607BBBF8(int a1, int a2, int a3);  /* 0x007bbbf8 */
int __fastcall sub_607BBE04(int a1, int a2);  /* 0x007bbe04 */
int __fastcall sub_607BC154(int a1);  /* 0x007bc154 */
int __fastcall sub_607BC420(int a1);  /* 0x007bc420 */
int __fastcall sub_607BC974(_DWORD *a1);  /* 0x007bc974 */
void __fastcall sub_607BCA0C(_DWORD *a1);  /* 0x007bca0c */
void __fastcall sub_607BCD34(_DWORD *a1);  /* 0x007bcd34 */
void __fastcall sub_607BD438(int *a1);  /* 0x007bd438 */
void __fastcall sub_607BD710(int a1);  /* 0x007bd710 */
void __fastcall sub_607BDB58(_DWORD *a1);  /* 0x007bdb58 */
void __fastcall sub_607BE458(int a1);  /* 0x007be458 */
int __fastcall sub_607BE9F8(int a1);  /* 0x007be9f8 */
int __fastcall sub_607BF024(int a1);  /* 0x007bf024 */
int __fastcall sub_607BF0EC(int a1, int a2);  /* 0x007bf0ec */
int __fastcall sub_607BF264(int a1, int a2);  /* 0x007bf264 */
int __fastcall sub_607BF328(int a1, int a2);  /* 0x007bf328 */
int __fastcall sub_607BF96C(float *a1);  /* 0x007bf96c */
int __fastcall sub_607BFB10(int result);  /* 0x007bfb10 */
int __fastcall sub_607BFCD0(int result);  /* 0x007bfcd0 */
int __fastcall sub_607BFE30(float *a1);  /* 0x007bfe30 */
int __fastcall sub_607BFF54(_DWORD *a1);  /* 0x007bff54 */

