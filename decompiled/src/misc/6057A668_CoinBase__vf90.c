/* CoinBase__vf90
 * address: 0x6057A668   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: CollisionActor : 0x6000401C
// 
// Overridden by: None
int __fastcall CoinBase__vf90(int result, float a2)
{
  FIELD_U8(result, 7466) = 0;
  FIELD_F32(result, 124) = a2;
  return result;
}
