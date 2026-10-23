/* sub_600671B8
 * address: 0x600671B8   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600671B8(int a1)
{
  int v2; // r2
  int result; // r0
  int v4; // [sp+0h] [bp-10h] BYREF
  int target; // [sp+4h] [bp-Ch] BYREF

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7112));
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  sub_6007446C(a1);
  v2 = dword_60C81770;
  if ( FIELD_U32(a1, 80) == 1 )
    v2 = -dword_60C81770;
  v4 = dword_60C81774;
  target = v2;
  moveValueTo((int *)(a1 + 160), &target, &v4);
  ((void (__fastcall *)(int))loc_600753B4)(a1);
  result = a1 + 7376;
  if ( FIELD_F32(a1, 112) > FIELD_F32(a1, 7376) )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C812EC);
  return result;
}
