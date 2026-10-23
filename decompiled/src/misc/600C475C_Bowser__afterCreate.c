/* Bowser__afterCreate
 * address: 0x600C475C   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: CollisionActor : 0x60003140
// 
// Overridden by: None
void __fastcall Bowser__afterCreate(CollisionActor *a1, unsigned int a2)
{
  *(_DWORD *)&a1[1].collisionMgr[396] |= 0x40u;
  CollisionActor__afterCreate(a1, a2);
}
