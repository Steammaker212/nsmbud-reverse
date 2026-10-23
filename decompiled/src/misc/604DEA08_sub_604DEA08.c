/* sub_604DEA08
 * address: 0x604DEA08   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604DEA08(int a1, char a2)
{
  int result; // r0

  FIELD_U8(a1, 493) = a2;
  result = dword_60CABDE4;
  FIELD_U8(dword_60CABDE4, 3609) = a2;
  return result;
}
