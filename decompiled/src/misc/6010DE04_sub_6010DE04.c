/* sub_6010DE04
 * address: 0x6010DE04   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6010DE04(int a1)
{
  float v2; // s16
  int result; // r0

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  v2 = FIELD_F32(a1, 124);
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  FIELD_U32(a1, 80) = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  sub_600B33DC((int *)a1, 0x4000000);
  result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1032))(a1);
  if ( v2 > 0.0 && FIELD_F32(a1, 124) <= 0.0 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C86504);
  return result;
}
