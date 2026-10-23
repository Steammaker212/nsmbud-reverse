/* sub_6033E380
 * address: 0x6033E380   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6033E380(int a1, int a2, int a3)
{
  int result; // r0

  result = Actor__getProfileId(*(Actor **)(a2 + 64));
  if ( result != 469 )
    return sub_6015BD44(a1, a2, a3);
  return result;
}
