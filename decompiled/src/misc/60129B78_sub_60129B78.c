/* sub_60129B78
 * address: 0x60129B78   size: 792   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60129B78(int a1)
{
  int result; // r0
  _DWORD *v3; // r5
  float v4; // s16
  float v5; // s0
  float *v6; // r6
  float v7; // s2
  float v8; // s0
  float v9; // s2
  float v10; // s4
  int *v11; // r0
  float v12; // s16
  int v13; // [sp+4h] [bp-24h] BYREF
  int v14; // [sp+8h] [bp-20h] BYREF
  int target; // [sp+Ch] [bp-1Ch] BYREF

  StageActor__accelerateX((StageActor *)a1);
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  if ( (FIELD_U8(a1, 2872) & 1) != 0 && FIELD_F32(a1, 124) < 0.0 )
    FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 160) += FIELD_U32(a1, 7744);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1304))(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1260))(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1264))(a1);
  v3 = (_DWORD *)(a1 + 7092);
  result = FIELD_U32(a1, 7092);
  if ( result == 3 )
  {
    v8 = FIELD_F32(a1, 108);
    v9 = FIELD_F32(a1, 8140);
    result = FIELD_U32(a1, 80);
    v10 = FIELD_F32(dword_60CC6484, 116);
    if ( result )
    {
      if ( v8 > (float)(v10 + v9) )
        return result;
    }
    else if ( v8 < (float)(v10 - v9) )
    {
      return result;
    }
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C870C4);
  }
  if ( result == 2 )
  {
    v11 = (int *)(a1 + 164);
    if ( FIELD_U32(a1, 80) )
    {
      v13 = (int)(float)((float)(2147500000.0 * 5.0) / 180.0);
      result = moveValueTo(v11, &v13, (int *)algn_60C8715C);
      if ( FIELD_F32(a1, 120) <= 0.0 )
        return result;
    }
    else
    {
      v14 = (int)(float)((float)(2147500000.0 * -5.0) / 180.0);
      result = moveValueTo(v11, &v14, (int *)algn_60C8715C);
      if ( FIELD_F32(a1, 120) >= 0.0 )
        return result;
    }
    FIELD_U32(a1, 80) ^= 1u;
    --FIELD_U32(a1, 7752);
    *v3 = 1;
    return 1;
  }
  if ( result != 1 )
    return result;
  v4 = FIELD_F32(dword_60CC6484, 116);
  target = 0;
  moveValueTo((int *)(a1 + 164), &target, (int *)algn_60C8715C);
  v5 = FIELD_F32(a1, 108);
  v6 = (float *)(a1 + 8140);
  v7 = FIELD_F32(a1, 8140);
  if ( !FIELD_U32(a1, 80) )
  {
    if ( v5 < (float)(v4 + v7) )
      goto LABEL_20;
    goto LABEL_19;
  }
  if ( v5 <= (float)(v4 - v7) )
  {
LABEL_19:
    *v3 = 2;
    FIELD_F32(a1, 132) = -FIELD_F32(a1, 132);
    *v6 = FIELD_F32(a1, 8144);
  }
LABEL_20:
  result = FIELD_U32(a1, 7752);
  if ( result <= 0 )
  {
    v12 = (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 1668))(a1);
    *v6 = (float)(v12
                + (float)((float)(COERCE_FLOAT((sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 9) | 0x3F800000)
                                + -1.0)
                        * 112.0))
        * 0.5;
    *v3 = 3;
    return 3;
  }
  return result;
}
