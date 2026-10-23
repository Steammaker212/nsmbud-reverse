/* sub_60405AB4
 * address: 0x60405AB4   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60405AB4(int a1)
{
  int v1; // r4
  signed int result; // r0

  v1 = a1 + 2900;
  result = sub_60235E50(a1 + 2900);
  if ( result == 1 )
    return sub_60236074(v1);
  return result;
}
