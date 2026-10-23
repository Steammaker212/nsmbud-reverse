/* sub_6010E134
 * address: 0x6010E134   size: 732   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6010E134(int a1)
{
  int result; // r0
  _DWORD *v3; // r5
  int v4; // r6
  float v5; // s16
  float v6; // s0
  int v7; // r0
  float v8; // s2
  int *v9; // r0
  int v10; // [sp+4h] [bp-24h] BYREF
  int v11; // [sp+8h] [bp-20h] BYREF
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
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C8666C);
  if ( result == 2 )
  {
    v9 = (int *)(a1 + 164);
    if ( FIELD_U32(a1, 80) )
    {
      v10 = (int)(float)((float)(2147500000.0 * 5.0) / 180.0);
      result = moveValueTo(v9, &v10, &dword_60C86718);
      if ( FIELD_F32(a1, 120) <= 0.0 )
        return result;
    }
    else
    {
      v11 = (int)(float)((float)(2147500000.0 * -5.0) / 180.0);
      result = moveValueTo(v9, &v11, &dword_60C86718);
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
  v4 = a1 + 648;
  v5 = FIELD_F32(dword_60CC6484, 116);
  target = 0;
  moveValueTo((int *)(a1 + 164), &target, &dword_60C86718);
  v6 = FIELD_F32(a1, 108);
  v7 = FIELD_U32(a1, 80);
  v8 = FIELD_F32(a1, 8144);
  if ( !v7 )
  {
    if ( v6 < (float)(v5 + v8) )
      goto LABEL_16;
    goto LABEL_15;
  }
  if ( v6 <= (float)(v5 - v8) )
  {
LABEL_15:
    *v3 = 2;
    FIELD_F32(a1, 132) = -FIELD_F32(a1, 132);
    FIELD_U32(a1, 8144) = FIELD_U32(a1, 8148);
  }
LABEL_16:
  if ( ((*(_DWORD *)(v4 + 4 * ((v7 + 18) >> 5) + 2224) & (1 << ((v7 + 18) & 0x1F))) != 0
     || (*(_DWORD *)(v4 + 4 * ((v7 + 22) >> 5) + 2224) & (1 << ((v7 + 22) & 0x1F))) != 0)
    && (*(_DWORD *)(v4 + 4 * ((v7 + 28) >> 5) + 2224) & (1 << ((v7 + 28) & 0x1F))) == 0 )
  {
    FIELD_U32(a1, 80) = v7 ^ 1;
    FIELD_F32(a1, 132) = -FIELD_F32(a1, 132);
    FIELD_F32(a1, 120) = FIELD_F32(a1, 120) * -0.7;
  }
  result = FIELD_U16(a1, 6276);
  if ( !FIELD_U16(a1, 6276) )
  {
    result = 3;
    *v3 = 3;
  }
  return result;
}
