/* sub_600BA9FC
 * address: 0x600BA9FC   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_600BA9FC(int a1)
{
  float v2; // s0
  int v3; // r1
  float result; // s0
  _DWORD *v5; // r5
  int v6; // r0
  float v7; // s6
  int v8; // r0
  float *v9; // r2
  float v10; // s8
  int v11; // [sp+0h] [bp-18h] BYREF
  int target[5]; // [sp+4h] [bp-14h] BYREF

  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 260))(a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  v3 = FIELD_U32(a1, 6216);
  if ( v3 >= 1 )
  {
    FIELD_U32(a1, 6216) = v3 - 1;
    (*(void (__fastcall **)(int, float))(*(_DWORD *)a1 + 272))(a1, v2);
  }
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 268))(a1);
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 292))(a1) )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 308))(a1);
    FIELD_U8(a1, 19) = 1;
  }
  else
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 212))(a1);
    v11 = 11930464;
    target[0] = (int)(float)(2147500000.0 / 180.0);
    moveValueTo((int *)(a1 + 6436), target, &v11);
    ((void (__fastcall *)(int))loc_600BABB8)(a1);
    target[0] = FIELD_U32(a1, 6448);
    v5 = (_DWORD *)(a1 + 6444);
    v6 = FIELD_U32(a1, 6436);
    if ( v6 < 0 && v6 != 0x80000000 )
      v6 = -v6;
    v11 = v6;
    moveValueTo((int *)(a1 + 6444), target, &v11);
    v7 = FIELD_F32(a1, 6432);
    v8 = *v5 - 0x40000000;
    v9 = (float *)((char *)sinLutTable + ((*v5 >> 20) & 0xFF0));
    v10 = (float)(*v5 & 0xFFFFFF);
    FIELD_F32(a1, 120) = v7 * (float)(v9[2] + (float)((float)(v10 * v9[3]) * 0.000000059605));
    result = v7 * (float)(*v9 + (float)((float)(v10 * v9[1]) * 0.000000059605));
    FIELD_F32(a1, 124) = result;
    FIELD_U32(a1, 164) = v8;
  }
  return result;
}
