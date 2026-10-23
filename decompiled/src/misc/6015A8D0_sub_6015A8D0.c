/* sub_6015A8D0
 * address: 0x6015A8D0   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6015A8D0(int *a1, _DWORD *a2, _DWORD *a3, char a4)
{
  int v4; // r12
  _BOOL4 result; // r0

  v4 = *a1;
  if ( (a4 & 1) == 0 || (result = 1, v4 - *a2 > (unsigned int)(2 * *a3)) )
  {
    if ( (a4 & 2) == 0 || (result = 1, v4 - a2[1] > (unsigned int)(2 * a3[1])) )
    {
      if ( (a4 & 4) == 0 )
        return (a4 & 8) != 0 && v4 - a2[3] <= (unsigned int)(2 * a3[3]);
      result = 1;
      if ( v4 - a2[2] > (unsigned int)(2 * a3[2]) )
        return (a4 & 8) != 0 && v4 - a2[3] <= (unsigned int)(2 * a3[3]);
    }
  }
  return result;
}
