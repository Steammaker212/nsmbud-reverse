/* Kanibo__vf264
 * address: 0x60310008   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A9420
// 
// Overridden by: None
signed int __fastcall Kanibo__vf264(Enemy *a1)
{
  Kanibo__setTamaAction(a1, 0);
  return Enemy__vf264(a1);
}
