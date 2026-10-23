/* BossBase__vf318
 * address: 0x600267A0   size: 40   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x60079378 : FinalBowser
int __fastcall BossBase__vf318(int result, int a2)
{
  if ( a2 )
    return sub_603F7A98(dword_60C99DC0, result + 108, 3, FIELD_S8(a2, 84));
  return result;
}
