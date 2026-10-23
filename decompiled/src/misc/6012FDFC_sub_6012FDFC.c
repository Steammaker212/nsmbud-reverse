/* sub_6012FDFC
 * address: 0x6012FDFC   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6012FDFC(int a1)
{
  int v2; // r5
  int v3; // r1
  int v4; // r1
  unsigned int v5; // r0
  int result; // r0
  int v7; // [sp+0h] [bp-18h] BYREF
  int target; // [sp+4h] [bp-14h] BYREF

  v2 = a1 + 6104;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6104));
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v3 = FIELD_U32(a1, 6228);
  if ( v3 >= 1 )
    FIELD_U32(a1, 6228) = v3 - 1;
  target = 0;
  v7 = dword_60C87584;
  moveValueTo((int *)(a1 + 6108), &target, &v7);
  if ( FIELD_F32(a1, 112) >= (float)(FIELD_F32(a1, 6220) + FIELD_F32(dword_60CC6484, 132)) )
    FIELD_U32(a1, 124) = 0;
  v4 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v5 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v5 )
    v4 += 4 * v5;
  result = *(unsigned __int8 *)(*(_DWORD *)v4 + 28);
  if ( (result & 0x20) != 0 )
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C874F0);
  return result;
}
