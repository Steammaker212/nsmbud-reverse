/* KaniboTama__executeState_Unk2
 * address: 0x60310A2C   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Enemy *__fastcall KaniboTama__executeState_Unk2(Enemy *a1)
{
  Enemy *result; // r0
  int v3; // [sp+4h] [bp-Ch] BYREF

  CollisionActor__handleGravity(&FIELD_U32(a1, 0x0)._);
  CollisionActor__handleSpeed(&FIELD_U32(a1, 0x0)._);
  CollisionActor__sub_600034C8(&FIELD_U32(a1, 0x0)._);
  if ( (FIELD_U32(a1, 0x0)._.collisionMgr[2224] & 1) != 0 )
    return (Enemy *)KaniboTama__sub_60310F74((int)a1, 0);
  FIELD_U32(a1, 0x0)._.field_17A6 = 0;
  ((void (__fastcall *)(int *, _DWORD, Vec3 *, _DWORD))checkLiquidCollisions)(
    &v3,
    0,
    &FIELD_U32(a1, 0x0)._._.position,
    (unsigned __int8)FIELD_U32(a1, 0x0)._._.field_56);
  result = (Enemy *)v3;
  if ( v3 )
    return sub_600038DC(a1);
  return result;
}
