/* sub_60409700
 * address: 0x60409700   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60409700(unsigned __int8 *a1)
{
  int result; // r0

  result = a1[6559];
  if ( result == 1 )
  {
    result = a1[6533];
    if ( a1[6533] )
    {
      if ( ((int (__fastcall *)(int))loc_60583CD4)(dword_60CAF15C) <= 0 )
        a1[6535] = 1;
      a1[6534] = 1;
      return 6534;
    }
  }
  return result;
}
