/* GoombaBase__vf298
 * address: 0x6033B7A0   size: 36   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x60363A80 : ParaGoomba
int __fastcall GoombaBase__vf298(int a1, int a2)
{
  int v2; // r2

  v2 = FIELD_U32(a1, 6376);
  if ( v2 )
    ++FIELD_U32(v2, 6960);
  return Enemy_killYoshi(a1, a2);
}
