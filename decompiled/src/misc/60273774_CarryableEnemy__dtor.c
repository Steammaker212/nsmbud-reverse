/* CarryableEnemy__dtor
 * address: 0x60273774   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A3EA8
// 
// Overridden by:
//   - 0x603A52F0 : ShellEnemy
void __fastcall CarryableEnemy__dtor(CarryableEnemy *this)
{
  Actor *v2; // r0

  FIELD_U32(this, 0x0) = (int)&Enemy__vtable;
  sub_602F36E0(&FIELD_U32(this, 0x1808));
  FIELD_U32(this, 0x0) = (int)&CollisionActor__vtable;
  CollisionMgr_dtor((int)FIELD_U8(this, 0x288));
  v2 = StageActor__dtor(&FIELD_U32(this, 0x0));
  operator_delete(v2);
}
