/* sub_600DCCB4
 * address: 0x600DCCB4   size: 464   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600DCCB4(int a1)
{
  int v2; // r0
  int result; // r0
  unsigned int v4; // r0
  int v5; // r0
  float v6; // s0
  float v7; // s2
  int v8; // r0
  _BOOL4 v9; // r5
  int v10; // [sp+0h] [bp-18h] BYREF
  int target[5]; // [sp+4h] [bp-14h] BYREF

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  StageActor__accelerateX((StageActor *)a1);
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v2 = FIELD_U32(a1, 2872);
  if ( (v2 & 1) != 0 && FIELD_F32(a1, 124) < 0.0 )
    FIELD_U32(a1, 124) = 0;
  if ( (v2 & 0x440000) != 0 && (v2 & 0x10000000) == 0 || (v2 & 0x880000) != 0 && (v2 & 0x20000000) == 0 )
    FIELD_U32(a1, 120) = 0;
  result = FIELD_U32(a1, 7092);
  if ( result != 2 )
  {
    if ( result != 1 )
      return result;
    v4 = FIELD_U32(a1, 7124);
    if ( v4 >= 4 )
      v4 = 0;
    v5 = *(_DWORD *)(PlayerMgr_instance + 4 * v4 + 32);
    target[0] = 0;
    v6 = FIELD_F32(a1, 108);
    v7 = FIELD_F32(v5, 108);
    if ( FIELD_U32(a1, 80) )
    {
      if ( v7 <= v6 )
        goto LABEL_22;
      v8 = dword_60C84B64;
    }
    else
    {
      if ( v7 >= v6 )
        goto LABEL_22;
      v8 = -dword_60C84B64;
    }
    target[0] = v8;
LABEL_22:
    v10 = dword_60C84B68;
    moveValueTo((int *)(a1 + 8124), target, &v10);
    result = FIELD_U16(a1, 6276);
    if ( !FIELD_U16(a1, 6276) )
    {
      FIELD_U32(a1, 7092) = 2;
      return 2;
    }
    return result;
  }
  target[0] = 0;
  v10 = 201326592;
  v9 = moveValueTo((int *)(a1 + 8124), target, &v10);
  result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1036))(a1);
  if ( v9 && result )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1088))(a1);
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C84A24);
  }
  return result;
}
