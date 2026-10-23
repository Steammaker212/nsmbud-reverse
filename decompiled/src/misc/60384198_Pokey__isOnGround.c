/* Pokey__isOnGround
 * address: 0x60384198   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A7BE8
// 
// Overridden by: None
bool __fastcall Pokey__isOnGround(int a1)
{
  int v1; // r2
  float v2; // s0
  _BOOL4 result; // r0

  v1 = FIELD_U32(a1, 2872);
  v2 = FIELD_F32(a1, 6372);
  result = (v1 & 0x10400) == 1024;
  if ( v2 <= 0.0 )
    return v1 & 1;
  return result;
}
