/* sub_602726F8
 * address: 0x602726F8   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602726F8(Enemy *a1, ActiveCollider *a2, ActiveCollider *a3)
{
  int v5; // r5
  int v6; // r0
  StageActor *owner; // r1

  v5 = 0;
  v6 = Enemy__processCollision(a1, a2, a3, 0);
  owner = FIELD_U32(a3, 0x40);
  switch ( v6 )
  {
    case 3:
      (*(void (__fastcall **)(Enemy *, StageActor *))(FIELD_U32(a1, 0x0) + 632))(a1, owner);
      return 1;
    case 2:
      (*(void (__fastcall **)(Enemy *, StageActor *))(FIELD_U32(a1, 0x0) + 628))(a1, owner);
      return 1;
    case 1:
      (*(void (__fastcall **)(Enemy *, StageActor *))(FIELD_U32(a1, 0x0) + 624))(a1, owner);
      return 1;
  }
  return v5;
}
