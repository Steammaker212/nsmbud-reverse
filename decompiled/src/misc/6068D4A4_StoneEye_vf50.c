/* StoneEye_vf50
 * address: 0x6068D4A4   size: 780   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall StoneEye_vf50(int a1)
{
  unsigned int v2; // r6
  int v3; // r0
  float v4; // r1
  float v5; // s0
  unsigned int v6; // r1
  int v7; // r0
  unsigned int v8; // r1
  int v9; // r7
  int v10; // r8
  int v11; // r6
  int v12; // r0
  int v13; // r0
  int v14; // r0
  unsigned int v15; // r0
  bool v16; // zf
  int v17; // r5
  int ResArchiveById; // r0
  int v19; // r0
  signed int v20; // r3
  int v22; // [sp+4h] [bp-44h]
  _DWORD v23[16]; // [sp+8h] [bp-40h] BYREF

  v2 = FIELD_U32(a1, 20);
  FIELD_U8(a1, 6826) = v2 & 1;
  if ( (v2 & 0x100000) != 0 )
  {
    v5 = FIELD_F32(a1, 112);
    v3 = FIELD_U32(a1, 108);
    FIELD_U32(a1, 6152) = v3;
    FIELD_F32(a1, 6156) = v5 + 104.0;
    FIELD_U8(a1, 6160) = 1;
    v4 = v5;
  }
  else
  {
    v3 = FIELD_U32(a1, 108);
    v4 = FIELD_F32(a1, 112);
  }
  FIELD_U32(a1, 116) = -1015021568;
  FIELD_U32(a1, 6196) = v3;
  FIELD_F32(a1, 6200) = v4;
  FIELD_U32(a1, 6204) = -1015021568;
  v6 = (v2 >> 8) & 7;
  if ( v6 > 4 )
    v6 = 2;
  v7 = (*(int (__fastcall **)(int, unsigned int))(*(_DWORD *)a1 + 232))(a1, v6);
  v8 = FIELD_U32(a1, 20);
  v9 = (v2 >> 12) & 1;
  v10 = HIWORD(v8) & 1;
  v11 = sub_6068EC60(HIBYTE(v8) & 1, v9, v7, v10);
  FIELD_U32(a1, 6792) = FIELD_U32(v11, 16);
  FIELD_U32(a1, 6796) = FIELD_U32(v11, 20);
  FIELD_U32(a1, 6800) = FIELD_U32(v11, 24);
  FIELD_U32(a1, 6804) = FIELD_U32(v11, 28);
  FIELD_U8(a1, 6825) = byte_60AFDF98[2 * ((FIELD_U32(a1, 20) >> 4) & 1) + v9];
  FIELD_F32(a1, 108) = FIELD_F32(v11, 8) + FIELD_F32(a1, 108);
  FIELD_F32(a1, 112) = FIELD_F32(v11, 12) + FIELD_F32(a1, 112);
  v12 = FIELD_U32(v11, 32);
  FIELD_U32(a1, 508) = v12;
  FIELD_U32(a1, 512) = v12;
  FIELD_U32(a1, 6776) = FIELD_U32(v11, 44) + (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 236))(a1);
  v22 = FIELD_U8(v11, 48);
  v13 = FIELD_U32(v11, 36);
  FIELD_U32(a1, 144) = v13;
  FIELD_U32(a1, 148) = v13;
  FIELD_U32(a1, 152) = v13;
  v14 = FIELD_U32(v11, 40);
  FIELD_U32(a1, 6780) = v14;
  FIELD_U32(a1, 160) = v14;
  v15 = FIELD_U32(a1, 20);
  if ( v15 >> 28 )
  {
    FIELD_F32(a1, 6816) = (float)(v15 >> 28) * -16.0;
    FIELD_U8(a1, 6833) = 1;
    v16 = FIELD_U8(dword_60CC6D8C, 17) == 0;
    if ( FIELD_U8(dword_60CC6D8C, 17) )
      v16 = (FIELD_U8(a1, 26) & 0x10) == 0;
    if ( !v16
      && sub_603FD6E0(
           dword_60C99DF4,
           FIELD_U8(LevelInfo_instance, 18),
           FIELD_F32(a1, 6196),
           FIELD_F32(a1, 6200)) )
    {
      FIELD_U32(a1, 6812) = FIELD_U32(a1, 6816);
      FIELD_U8(a1, 6833) = 0;
    }
  }
  v17 = FIELD_U32(v11, 4);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  mt_lift_moaidon_eye_ref(a1 + 6736, ResArchiveById, v17, a1 + 144);
  v19 = *(_DWORD *)v11;
  v20 = 10;
  FIELD_U32(a1, 6164) = *(_DWORD *)v11;
  memset(v23, 0, 16);
  v23[4] = v19;
  v23[5] = 0;
  if ( v22 )
    v20 = 9;
  if ( v10 )
    v20 = 6;
  FIELD_U32(a1, 6168) = v19 + 8 * v20;
  sub_60161BEC((_DWORD *)(a1 + 6328), a1, v23, v20, 0);
  if ( !FIELD_U8(dword_60CC6D8C, 17) )
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 240))(a1);
  FIELD_U32(a1, 6664) = a1 + 6768;
  return 1;
}
