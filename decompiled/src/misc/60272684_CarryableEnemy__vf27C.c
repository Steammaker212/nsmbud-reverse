/* CarryableEnemy__vf27C
 * address: 0x60272684   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall CarryableEnemy__vf27C(Enemy *a1, ActiveCollider *a2, ActiveCollider *a3)
{
  int v6; // r0
  int (__fastcall *v7)(Enemy *, StageActor *); // r2

  v6 = Enemy__processCollision(a1, a2, a3, 0);
  switch ( v6 )
  {
    case 3:
      v7 = *(int (__fastcall **)(Enemy *, StageActor *))(FIELD_U32(a1, 0x0)._._._.vtable + 632);
      return v7(a1, FIELD_U32(a3, 0x40));
    case 2:
      v7 = *(int (__fastcall **)(Enemy *, StageActor *))(FIELD_U32(a1, 0x0)._._._.vtable + 628);
      return v7(a1, FIELD_U32(a3, 0x40));
    case 1:
      v7 = *(int (__fastcall **)(Enemy *, StageActor *))(FIELD_U32(a1, 0x0)._._._.vtable + 624);
      return v7(a1, FIELD_U32(a3, 0x40));
  }
  return Enemy__collisionPlayer((int)a1, (int)a2, (int)a3);
}
