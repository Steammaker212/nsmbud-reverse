/* sub_607A9A3C
 * address: 0x607A9A3C   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A9A3C(_DWORD *a1)
{
  _DWORD *v2; // r5
  int result; // r0

  a1[3237] = 0;
  v2 = a1 + 3237;
  result = sub_60766708((int)a1);
  if ( !result )
  {
    result = a1[2393];
    if ( !result )
    {
      result = a1[2394];
      if ( !result )
      {
        result = a1[2395];
        if ( !result )
        {
          result = a1[301];
          if ( (result & 0x80080) == 0 )
          {
            *v2 = 1;
            return 1;
          }
        }
      }
    }
  }
  return result;
}
