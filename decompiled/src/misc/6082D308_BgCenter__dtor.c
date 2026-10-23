/* BgCenter__dtor
 * address: 0x6082D308   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Actor : 0x60002E5C
// 
// Overridden by: None
void __fastcall BgCenter__dtor(Actor *a1)
{
  Actor *v1; // r0

  v1 = Actor__dtor(a1);
  operator_delete(v1);
}
