/* sub_6022D0D0
 * address: 0x6022D0D0   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6022D0D0(int a1, int a2)
{
  int result; // r0

  result = sub_6081F070(dword_60CC6D78, a2);
  if ( result >= 0 )
    return sub_6081F038(dword_60CC6D78);
  return result;
}
