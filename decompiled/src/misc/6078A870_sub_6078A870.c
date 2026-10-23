/* sub_6078A870
 * address: 0x6078A870   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6078A870(int a1, int a2, int a3)
{
  int result; // r0

  result = FIELD_U8(a1, 164);
  if ( (result & 1) != 0 )
    return sub_60816D48(dword_60CC6B68, 4, a3);
  return result;
}
