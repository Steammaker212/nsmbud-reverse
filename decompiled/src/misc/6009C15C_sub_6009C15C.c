/* sub_6009C15C
 * address: 0x6009C15C   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6009C15C(int a1)
{
  float v2; // s0
  int v3; // r0
  int v4; // r6
  int result; // r0
  int v6; // [sp+0h] [bp-18h] BYREF
  int target; // [sp+4h] [bp-14h] BYREF

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  v3 = (*(int (__fastcall **)(int, float))(*(_DWORD *)a1 + 1108))(a1, v2);
  v4 = sub_600B33DC(a1, v3);
  target = 0;
  v6 = dword_60C8288C;
  result = moveValueTo((int *)(a1 + 164), &target, &v6);
  if ( v4 && result == 1 )
  {
    result = FIELD_U8(a1, 2872);
    if ( (result & 1) != 0 )
      return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C82738);
  }
  return result;
}
