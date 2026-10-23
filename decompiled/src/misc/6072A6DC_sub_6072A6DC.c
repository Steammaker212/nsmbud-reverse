/* sub_6072A6DC
 * address: 0x6072A6DC   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6072A6DC(int a1, int a2, int a3)
{
  int result; // r0

  if ( a2 )
  {
    result = 1 << (a2 - 1);
    if ( a2 - 33 >= 0 )
      result = 0;
  }
  else
  {
    result = 0;
  }
  if ( a3 )
  {
    result = 1 << (a3 - 1);
    if ( a3 - 33 >= 0 )
      return 0;
  }
  return result;
}
