/* sub_6013D138
 * address: 0x6013D138   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6013D138(CollisionActor *a1)
{
  float v2; // s0
  int result; // r0
  int v4; // [sp+0h] [bp-10h] BYREF
  int v5; // [sp+4h] [bp-Ch] BYREF

  CollisionActor__handleGravity(a1);
  v2 = CollisionActor__handleSpeed(a1);
  v5 = 0;
  ((void (__fastcall *)(int *, int *, Vec3 *, _DWORD, float))checkLiquidCollisions)(
    &v4,
    &v5,
    &FIELD_U32(a1, 0x0).position,
    (unsigned __int8)FIELD_U32(a1, 0x0).field_56,
    v2);
  result = v4;
  if ( v4 == 1 )
    return (*(int (__fastcall **)(CollisionActor *, int *))(FIELD_U32(a1, 0x0)._.vtable + 192))(a1, &dword_60C87C40);
  return result;
}
