/* sub_604092F8
 * address: 0x604092F8   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604092F8(unsigned __int8 *a1, int a2)
{
  unsigned int v3; // r3
  int result; // r0
  bool v5; // zf

  v3 = (unsigned __int8)(a1[6559] - 1);
  result = 0;
  if ( v3 <= 2 )
  {
    v5 = a2 == 0;
    if ( a2 )
      v5 = a1[6562] == a2;
    if ( v5 )
    {
      result = a1[6522];
      if ( a1[6522] )
        return 1;
    }
  }
  return result;
}
