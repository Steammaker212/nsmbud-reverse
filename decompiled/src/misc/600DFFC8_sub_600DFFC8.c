/* sub_600DFFC8
 * address: 0x600DFFC8   size: 636   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600DFFC8(int a1)
{
  int result; // r0
  _BYTE *v3; // r5
  float v4; // s16
  float v5; // s0
  float v6; // s2
  float v7; // s0
  float v8; // s2
  int v9; // [sp+0h] [bp-20h] BYREF
  int target; // [sp+4h] [bp-1Ch] BYREF

  StageActor__accelerateX((StageActor *)a1);
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  if ( (FIELD_U8(a1, 2872) & 1) != 0 && FIELD_F32(a1, 124) < 0.0 )
    FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 160) += FIELD_U32(a1, 7744);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1304))(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1260))(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1264))(a1);
  v3 = (_BYTE *)(a1 + 8133);
  result = FIELD_U8(a1, 8133);
  if ( result != 3 )
  {
    if ( result == 2 )
    {
      v9 = dword_60C84B70;
      if ( FIELD_U32(a1, 80) )
      {
        result = moveValueTo((int *)(a1 + 164), &v9, (int *)algn_60C84B6C);
        if ( FIELD_F32(a1, 120) <= 0.0 )
          return result;
      }
      else
      {
        v9 = -dword_60C84B70;
        result = moveValueTo((int *)(a1 + 164), &v9, (int *)algn_60C84B6C);
        if ( FIELD_F32(a1, 120) >= 0.0 )
          return result;
      }
      FIELD_U32(a1, 80) ^= 1u;
      --FIELD_U32(a1, 7752);
      result = 1;
LABEL_22:
      *v3 = result;
      return result;
    }
    if ( result != 1 )
      return result;
    v4 = FIELD_F32(dword_60CC6484, 116);
    target = 0;
    moveValueTo((int *)(a1 + 164), &target, (int *)algn_60C84B6C);
    v5 = FIELD_F32(a1, 108);
    v6 = FIELD_F32(a1, 8136);
    if ( FIELD_U32(a1, 80) )
    {
      if ( v5 > (float)(v4 - v6) )
        goto LABEL_20;
    }
    else if ( v5 < (float)(v4 + v6) )
    {
LABEL_20:
      result = FIELD_U32(a1, 7752);
      if ( result > 0 )
        return result;
      result = 3;
      goto LABEL_22;
    }
    *v3 = 2;
    FIELD_F32(a1, 132) = -FIELD_F32(a1, 132);
    FIELD_U32(a1, 8136) = FIELD_U32(a1, 8140);
    goto LABEL_20;
  }
  v7 = FIELD_F32(a1, 108);
  v8 = FIELD_F32(dword_60CC6484, 116);
  result = FIELD_U32(a1, 80);
  if ( result )
  {
    if ( v7 > (float)(v8 + 104.0) )
      return result;
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C84AD8);
  }
  if ( v7 >= (float)(v8 + -104.0) )
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C84AD8);
  return result;
}
