/* sub_600EBE88
 * address: 0x600EBE88   size: 540   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600EBE88(int a1)
{
  float v2; // s0
  int result; // r0
  _BYTE *v4; // r5
  float v5; // s0
  int v6; // r0
  float v7; // s0
  int v8; // r0
  int v9; // [sp+0h] [bp-18h] BYREF
  int target[5]; // [sp+4h] [bp-14h] BYREF

  StageActor__accelerateX((StageActor *)a1);
  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  FIELD_U32(a1, 160) += FIELD_U32(a1, 7744);
  (*(void (__fastcall **)(int, float))(*(_DWORD *)a1 + 1304))(a1, v2);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1260))(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1264))(a1);
  v4 = (_BYTE *)(a1 + 8121);
  result = FIELD_U8(a1, 8121);
  if ( result == 3 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C85190);
  if ( result == 2 )
  {
    target[0] = dword_60AF1ED8[FIELD_U32(a1, 80)];
    v9 = 0x800000;
    moveValueTo((int *)(a1 + 164), target, &v9);
    v7 = FIELD_F32(a1, 120);
    v8 = FIELD_U32(a1, 80);
    if ( v8 )
    {
      if ( v7 <= 0.0 )
        goto LABEL_21;
      FIELD_U32(a1, 80) = v8 != 1;
    }
    else
    {
      if ( v7 >= 0.0 )
        goto LABEL_21;
      FIELD_U32(a1, 80) = 1;
    }
    if ( FIELD_U8(a1, 8356) )
    {
      if ( fabsf(FIELD_F32(a1, 8352) - FIELD_F32(a1, 108)) <= 80.0 )
      {
LABEL_20:
        *v4 = 1;
LABEL_21:
        result = FIELD_U32(a1, 7752);
        if ( result <= 0 )
        {
          *v4 = 3;
          return 3;
        }
        return result;
      }
      FIELD_U8(a1, 8356) = 0;
    }
    --FIELD_U32(a1, 7752);
    goto LABEL_20;
  }
  if ( result != 1 )
    return result;
  target[0] = 0;
  v9 = 0x800000;
  moveValueTo((int *)(a1 + 164), target, &v9);
  v5 = FIELD_F32(a1, 108);
  if ( FIELD_U32(a1, 80) )
  {
    result = a1 + 8252;
    if ( v5 > FIELD_F32(a1, 8252) )
      return result;
    *v4 = 2;
    v6 = 8240;
  }
  else
  {
    result = a1 + 8248;
    if ( v5 < FIELD_F32(a1, 8248) )
      return result;
    *v4 = 2;
    v6 = 8244;
  }
  result = *(_DWORD *)(a1 + v6);
  FIELD_U32(a1, 132) = result;
  return result;
}
