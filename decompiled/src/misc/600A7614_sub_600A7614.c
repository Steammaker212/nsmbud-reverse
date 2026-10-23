/* sub_600A7614
 * address: 0x600A7614   size: 608   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600A7614(int a1)
{
  int *v2; // r6
  float *v3; // r5
  int Area; // r0
  float v5; // s0
  float v6; // s2
  float v7; // s0
  float *v8; // r0
  unsigned int v9; // r0
  int *v10; // r7
  int v11; // r1
  int v12; // r0
  int v13; // s2
  float v15; // [sp+0h] [bp-28h] BYREF
  float v16; // [sp+4h] [bp-24h]
  int v17; // [sp+8h] [bp-20h]
  int v18; // [sp+Ch] [bp-1Ch]

  v2 = (int *)(a1 + 8668);
  v3 = (float *)(a1 + 8664);
  if ( FIELD_F32(a1, 8668) <= FIELD_F32(a1, 8664) )
  {
    v15 = 3.4028e38;
    v16 = 3.4028e38;
    v17 = -8388609;
    v18 = -8388609;
    Area = Level_getArea(Level_instance, FIELD_U8(LevelInfo_instance, 18));
    if ( LevelArea_getLocation(Area, &v15, FIELD_U32(a1, 20) & 0xF) )
    {
      v5 = *(float *)&v17;
      v6 = *(float *)&v18;
      *v2 = v17;
      *v3 = v5 - (float)(v5 - v15);
      FIELD_F32(a1, 8672) = v6;
      v7 = v6 - (float)(v6 - v16);
    }
    else
    {
      v8 = (float *)dword_60CC6484;
      *(float *)v2 = FIELD_F32(dword_60CC6484, 120) + -60.0;
      *v3 = v8[28] + 60.0;
      FIELD_F32(a1, 8672) = v8[31] + -60.0;
      v7 = v8[33] + 160.0;
    }
    FIELD_F32(a1, 8676) = v7;
  }
  if ( !FIELD_U32(a1, 8688) )
  {
    sub_600A7890(a1);
    if ( FIELD_U32(a1, 8688) )
    {
      sub_600A7B70(a1);
      v9 = FIELD_U32(a1, 20);
      if ( v9 >> 28 )
      {
        LODWORD(v15) = v9 >> 28;
        v11 = ((int (__fastcall *)(int, float *, int, int (*)()))sub_608DE7F0)(a1 + 19596, &v15, 4, sub_600ABBA0);
        v10 = (int *)(a1 + 19604);
        if ( !v11 )
          v11 = 4;
        sub_608DE6F4(a1 + 19596, v11);
      }
      else
      {
        v10 = (int *)(a1 + 19604);
      }
      if ( *v10 < 1 )
        v12 = 0;
      else
        v12 = FIELD_U32(a1, 19600);
      if ( v12 )
        v12 -= 4;
      FIELD_U32(a1, 19812) = v12;
    }
  }
  StateMgr__execute((StateMgr *)(a1 + 6084));
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1044))(a1);
  FIELD_F64(a1, 7156) = ((double (__fastcall *)(int))*(_DWORD *)(*(_DWORD *)a1 + 1168))(a1);
  FIELD_U32(a1, 7164) = v13;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1172))(a1);
  sub_600B183C(a1);
  return 1;
}
