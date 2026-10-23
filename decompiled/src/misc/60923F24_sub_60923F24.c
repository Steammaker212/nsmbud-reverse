/* sub_60923F24
 * address: 0x60923F24   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60923F24(int a1, int a2)
{
  int result; // r0
  unsigned int v4; // r3
  unsigned __int16 *i; // r2
  unsigned __int16 *v6; // r4
  int v7; // r6

  result = -1;
  if ( dword_60CCFCA4 >= 1 )
  {
    v4 = 0;
    for ( i = *(unsigned __int16 **)(a1 + 16); ; i += 2 )
    {
      v6 = *(unsigned __int16 **)(a1 + 16);
      if ( FIELD_U32(a1, 12) > v4 )
        v6 = i;
      v7 = *v6;
      if ( v7 <= a2 && v6[1] + v7 > a2 )
        break;
      if ( (int)++v4 >= dword_60CCFCA4 )
        return result;
    }
    return v4;
  }
  return result;
}
