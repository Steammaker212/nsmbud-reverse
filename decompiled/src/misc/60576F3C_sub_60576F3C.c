/* sub_60576F3C
 * address: 0x60576F3C   size: 720   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60576F3C(int a1)
{
  unsigned int v2; // r1
  int v3; // r1
  int result; // r0
  float v5; // s0
  int v6; // r0
  int v7; // r1
  int *v8; // r5
  int v9; // r0
  int v10; // s0
  int v11; // s2
  bool v12; // zf
  int *v13; // r1
  int *v14; // r1
  int v15; // [sp+0h] [bp-20h] BYREF
  float v16; // [sp+4h] [bp-1Ch] BYREF

  FIELD_U32(a1, 7388) = 3;
  FIELD_U32(a1, 7288) = 0;
  FIELD_U8(a1, 6876) = 1;
  FIELD_U8(a1, 7339) = 1;
  v2 = FIELD_U32(a1, 20);
  if ( (v2 & 0x20000) != 0 )
    FIELD_U8(a1, 7340) = 1;
  FIELD_U32(a1, 7392) = (v2 >> 8) & 0xF;
  sub_60579AE4(a1);
  if ( (FIELD_U32(a1, 24) & 0xF0) == 0xF0 || (v3 = sub_605D00B8(a1), result = 2, !v3) )
  {
    FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + 8.0;
    v5 = FIELD_F32(a1, 112) + -8.0;
    FIELD_F32(a1, 112) = v5;
    FIELD_F32(a1, 7484) = v5;
    if ( FIELD_U32(dword_60C99DD4, 764) == 4 && (FIELD_U8(a1, 25) & 0x10) != 0 )
      sub_60003D84((_DWORD *)a1);
    FIELD_U32(a1, 7324) = 1;
    v6 = (FIELD_U32(a1, 24) >> 28) & 1;
    v7 = FIELD_U32(a1, 24) & 0xF0;
    FIELD_U32(a1, 7492) = v6;
    v8 = (int *)(a1 + 7300);
    if ( v7 == 240 || v6 )
    {
      *v8 = 0;
      FIELD_U32(a1, 7304) = 0;
      if ( v6 )
      {
        FIELD_U32(a1, 7488) = FIELD_U32(EnemyCounterMaybe_instance, 944);
        v16 = 0.0;
        ((void (__fastcall *)(int *, float *, int, _DWORD))checkLiquidCollisions)(
          &v15,
          &v16,
          a1 + 108,
          FIELD_U8(a1, 86));
        FIELD_F32(a1, 112) = FIELD_F32(a1, 7484) + (float)(v16 - FIELD_F32(a1, 7488));
      }
    }
    else
    {
      v9 = 4;
      if ( !v7 )
        v9 = 3;
      *v8 = v9;
      FIELD_U32(a1, 7304) = FIELD_U8(a1, 28);
    }
    FIELD_U32(a1, 7308) = FIELD_U8(a1, 29);
    sub_60579FC8(a1);
    if ( Actor__getProfileId((Actor *)a1) == 396 )
    {
      v10 = 1149239296;
      v11 = 1166016512;
    }
    else
    {
      v10 = 1140850688;
      v12 = *v8 == 4;
      if ( *v8 != 4 )
        v12 = *v8 == 3;
      if ( v12 )
      {
        v13 = dword_60577228;
        if ( !FIELD_U32(a1, 7304) )
          v13 = &dword_60577228[1];
        v11 = *v13;
      }
      else
      {
        v11 = 1132462080;
      }
    }
    FIELD_U32(a1, 500) = v11;
    FIELD_U32(a1, 504) = v10;
    FIELD_U32(a1, 508) = 1107296256;
    FIELD_U32(a1, 512) = 1107296256;
    if ( !FIELD_U32(a1, 7304) )
      FIELD_U32(a1, 164) = FIELD_U32(a1, 20) & 0xF0000000;
    FIELD_U32(a1, 7368) = FIELD_U32(a1, 112);
    FIELD_U16(a1, 7376) = 0;
    sub_6057A244(a1, 0);
    FIELD_U32(a1, 7280) = 1124073472;
    FIELD_U32(a1, 7284) = 1132462080;
    sub_605D0024(a1);
    if ( (FIELD_U32(a1, 24) & 0xF0) == 0xF0 )
      v14 = &dword_60CAED48;
    else
      v14 = &dword_60CB10FC;
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, v14);
    return 1;
  }
  return result;
}
