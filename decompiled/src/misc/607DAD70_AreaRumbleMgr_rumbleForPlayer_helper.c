/* AreaRumbleMgr_rumbleForPlayer_helper
 * address: 0x607DAD70   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall AreaRumbleMgr_rumbleForPlayer_helper(int *a1, float a2)
{
  int result; // r0

  result = *a1;
  if ( result )
  {
    if ( a1[1] == FIELD_U32(result, 12) )
      FIELD_F32(result, 56) = a2;
  }
  return result;
}
