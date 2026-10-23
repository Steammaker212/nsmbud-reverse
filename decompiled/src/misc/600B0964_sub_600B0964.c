/* sub_600B0964
 * address: 0x600B0964   size: 680   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_600B0964(int a1)
{
  float v2; // s18
  float v3; // s16
  unsigned int v4; // r6
  unsigned int v5; // r7
  int v6; // r1
  unsigned int v7; // r0
  unsigned int v8; // r1
  unsigned int v9; // r0
  char v10; // r12
  unsigned int v11; // r5
  int v12; // r6
  int v13; // r2
  float *v14; // r1
  float v15; // s8
  float result; // s0
  int v17; // r1
  Vec2 v18; // [sp+0h] [bp-30h] BYREF

  FIELD_U32(a1, 340) |= 0x1000u;
  FIELD_U32(a1, 344) = sub_600B0668;
  StageActor__distanceToPlayer((StateActor *)a1, &v18);
  v2 = FIELD_F32(dword_60CC6484, 116);
  v3 = (float)(FIELD_F32(dword_60CC6484, 132) + 48.0) - FIELD_F32(a1, 112);
  v4 = sub_6000F7B8(v3, (float)(v2 + -208.0) - FIELD_F32(a1, 108));
  v5 = sub_6000F7B8(v3, (float)(v2 + 208.0) - FIELD_F32(a1, 108));
  if ( FIELD_U8(a1, 6764) )
  {
    v6 = FIELD_U32(a1, 6768);
    v7 = 0;
    if ( v6 >= 2 )
    {
      if ( (v6 & 1) != 0 )
        --v6;
      v8 = (v5 - v4) / v6;
      v7 = v4 + FIELD_U32(a1, 6772) * v8;
      if ( (FIELD_U32(a1, 6768) & 1) == 0 )
        v7 += v8 >> 1;
    }
    goto LABEL_33;
  }
  v9 = sub_6000F7B8(v18.y, v18.x);
  v11 = v9;
  if ( v18.x >= 0.0 )
  {
    if ( v9 < 0x40000001 )
      v9 = v5;
    if ( v11 > v5 )
      v9 = v5;
    v11 = v9;
  }
  else if ( v9 < v4 )
  {
    v11 = v4;
  }
  v12 = FIELD_U32(a1, 56);
  if ( ((unsigned int)&dword_60C7B364 & ~(1611336344 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v12 && (**(int (__fastcall ***)(int, int *))v12)(v12, &StageActor_RTTI) == 1 )
  {
    if ( !FIELD_U32(v12, 80) )
    {
      v17 = dword_60C83170;
      if ( (v11 & 0x80000000) == 0 || (v7 = ~dword_60C83174, v11 >= ~dword_60C83174) )
      {
        if ( v11 <= dword_60C83170 )
          v17 = v11;
        if ( v11 >= 0x80000001 )
          v17 = v11;
        v7 = v17;
      }
      goto LABEL_28;
    }
    if ( v11 < 0x80000000 - dword_60C83170 )
      v11 = 0x80000000 - dword_60C83170;
    if ( v11 > (dword_60C83174 ^ 0x80000000) )
      v11 = dword_60C83174 ^ 0x80000000;
  }
  v7 = v11;
LABEL_28:
  v13 = FIELD_U32(a1, 6760);
  if ( v13 == 2 )
  {
    v7 += dword_60C83178;
  }
  else if ( !v13 )
  {
    v7 -= dword_60C83178;
  }
LABEL_33:
  FIELD_U32(a1, 164) = v7 - 0x40000000;
  v14 = (float *)((char *)sinLutTable + ((v7 >> 20) & 0xFF0));
  v15 = (float)(v7 & 0xFFFFFF);
  FIELD_F32(a1, 120) = (float)(v14[2] + (float)((float)(v15 * v14[3]) * 0.000000059605)) * 1.3333;
  result = (float)(*v14 + (float)((float)(v15 * v14[1]) * 0.000000059605)) * 1.3333;
  FIELD_F32(a1, 124) = result;
  FIELD_U32(a1, 128) = 0;
  return result;
}
