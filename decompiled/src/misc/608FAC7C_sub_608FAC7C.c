/* sub_608FAC7C
 * address: 0x608FAC7C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608FAC7C(int result)
{
  int v1; // r1

  if ( dword_60CCEEA4 >= 1 )
  {
    v1 = 0;
    while ( *(_DWORD *)(dword_60CCEEAC + 4 * v1) != result )
    {
      if ( ++v1 >= dword_60CCEEA4 )
        return result;
    }
    if ( v1 != -1 )
      return sub_608DEB9C(&dword_60CCEEA4, v1, 1, dword_60CCEEAC);
  }
  return result;
}
