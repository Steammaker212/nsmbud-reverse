/* sub_6078A894
 * address: 0x6078A894   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6078A894(int result, int a2, int a3)
{
  __int16 v3; // r1

  v3 = FIELD_U16(result, 164);
  if ( (v3 & 1) == 0 )
  {
    FIELD_U16(result, 164) = v3 | 1;
    return sub_60816D48(dword_60CC6B68, 4, a3);
  }
  return result;
}
