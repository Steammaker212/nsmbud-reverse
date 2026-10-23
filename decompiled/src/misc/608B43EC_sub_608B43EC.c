/* sub_608B43EC
 * address: 0x608B43EC   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B43EC(_DWORD *a1, int a2)
{
  int result; // r0
  _DWORD *v5; // r6

  a1[4] = *a1;
  result = a1[1];
  a1[5] = result;
  if ( a2 )
  {
    v5 = (_DWORD *)a1[3];
    if ( v5 != a1 + 2 )
    {
      while ( 1 )
      {
        result = sub_608AE4C8((int)v5, a2);
        if ( result == 1 )
          break;
        v5 = (_DWORD *)v5[1];
        if ( v5 == a1 + 2 )
          return result;
      }
      a1[4] = v5[3];
      result = v5[4];
      a1[5] = result;
    }
  }
  return result;
}
