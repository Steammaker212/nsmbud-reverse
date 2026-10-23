/* sub_608D37CC
 * address: 0x608D37CC   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D37CC(unsigned __int8 *a1)
{
  int result; // r0
  bool v3; // zf
  int *v4; // r0

  result = a1[36];
  v3 = result == 0;
  if ( result )
  {
    result = a1[37];
    v3 = result == 0;
  }
  if ( !v3 )
  {
    result = a1[38];
    if ( !a1[38] )
    {
      result = sub_608D348C((int)a1);
      if ( result == 1 )
      {
        a1[39] = 1;
        if ( a1[1518] )
        {
          v4 = sub_608C3C60();
          sub_608C411C((int)v4, (int)(a1 + 164));
          a1[1518] = 0;
        }
        result = a1[37];
        if ( a1[37] )
        {
          a1[37] = 0;
          return 0;
        }
      }
    }
  }
  return result;
}
