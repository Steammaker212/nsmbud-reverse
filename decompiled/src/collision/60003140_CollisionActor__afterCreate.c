/* CollisionActor__afterCreate
 * address: 0x60003140   size: 32   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: StageActor : 0x60000694
// 
// Overridden by:
//   - 0x600C475C : Bowser
//   - 0x6039F2A8 : ShellEnemy
void __fastcall CollisionActor__afterCreate(CollisionActor *a1, unsigned int a2)
{
  sub_60003160(a1);
  StageActor__afterCreate(&FIELD_U32(a1, 0x0), a2);
}
