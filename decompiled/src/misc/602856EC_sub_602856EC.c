/* sub_602856EC
 * address: 0x602856EC   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602856EC(int *a1, int a2)
{
  int result; // r0
  int v4; // r2
  _DWORD *v5; // r0

  result = -1;
  if ( a2 >= 0 )
  {
    v4 = *a1;
    if ( (unsigned int)a2 >= 8 )
      a2 = 8;
    if ( v4 == 2 )
    {
      v5 = &unk_60AFDE6C;
    }
    else
    {
      if ( v4 != 1 )
        return result;
      v5 = &unk_60AFDE48;
    }
    return v5[a2];
  }
  return result;
}
