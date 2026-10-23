/* GoombaBase__vf1FC
 * address: 0x6033E210   size: 28   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A8250
// 
// Overridden by: None
float __fastcall GoombaBase__vf1FC(int a1, float a2)
{
  if ( !FIELD_U16(a1, 6276) )
    FIELD_U8(a1, 19) = 1;
  return CollisionMgr_process((_BYTE *)(a1 + 648), a2);
}
