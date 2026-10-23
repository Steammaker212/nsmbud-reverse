/* sub_600F3E94
 * address: 0x600F3E94   size: 596   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600F3E94(int a1)
{
  int result; // r0
  int *v3; // r5
  float v4; // s16
  float v5; // s0
  float v6; // s2
  int v7; // r0
  int v8; // [sp+0h] [bp-20h] BYREF
  int target; // [sp+4h] [bp-1Ch] BYREF

  StageActor__accelerateX((StageActor *)a1);
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648));
  if ( (FIELD_U8(a1, 2872) & 1) != 0 && FIELD_F32(a1, 124) < 0.0 )
    FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 160) += FIELD_U32(a1, 7744);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1304))(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1260))(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1264))(a1);
  v3 = (int *)(a1 + 7092);
  result = FIELD_U32(a1, 7092);
  if ( result == 3 )
  {
    (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C85680);
    FIELD_U32(a1, 8432) = FIELD_U32(a1, 80) ^ 1;
    return (int)sub_600F1664(a1);
  }
  if ( result != 2 )
  {
    if ( result != 1 )
      return result;
    v4 = FIELD_F32(dword_60CC6484, 116);
    target = 0;
    moveValueTo((int *)(a1 + 164), &target, &dword_60C856F8);
    v5 = FIELD_F32(a1, 108);
    v6 = FIELD_F32(a1, 8440);
    if ( FIELD_U32(a1, 80) )
    {
      if ( v5 > (float)(v4 - v6) )
        goto LABEL_18;
    }
    else if ( v5 < (float)(v4 + v6) )
    {
LABEL_18:
      result = FIELD_U32(a1, 7752);
      if ( result > 0 )
        return result;
      result = 3;
      goto LABEL_22;
    }
    *v3 = 2;
    FIELD_F32(a1, 132) = -FIELD_F32(a1, 132);
    goto LABEL_18;
  }
  v7 = FIELD_U32(a1, 80);
  if ( FIELD_U32(a1, 7752) == 2 )
    FIELD_U32(a1, 8432) = v7 ^ 1;
  v8 = dword_60C856FC;
  if ( !v7 )
  {
    v8 = -dword_60C856FC;
    result = moveValueTo((int *)(a1 + 164), &v8, &dword_60C856F8);
    if ( FIELD_F32(a1, 120) >= 0.0 )
      return result;
    goto LABEL_21;
  }
  result = moveValueTo((int *)(a1 + 164), &v8, &dword_60C856F8);
  if ( FIELD_F32(a1, 120) > 0.0 )
  {
LABEL_21:
    FIELD_U32(a1, 80) ^= 1u;
    --FIELD_U32(a1, 7752);
    result = 1;
LABEL_22:
    *v3 = result;
  }
  return result;
}
