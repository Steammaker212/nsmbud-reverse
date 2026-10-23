/* sub_6063D004
 * address: 0x6063D004   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6063D004(Actor *a1, int a2)
{
  int result; // r0

  result = Actor__getProfileId(a1);
  if ( result == 99 )
  {
    FIELD_U32(a2, 224) = 4;
    return 4;
  }
  return result;
}
