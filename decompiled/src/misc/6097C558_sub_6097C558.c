/* sub_6097C558
 * address: 0x6097C558   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6097C558(int result, int a2, int a3, int a4)
{
  _DWORD *v5; // r5

  v5 = (_DWORD *)result;
  if ( a2 >= 1 )
  {
    result = operator_new_8DE2C8(4 * a2, a3, a4);
    if ( result )
    {
      v5[2] = result;
      *v5 = 0;
      v5[1] = a2;
      return 0;
    }
  }
  return result;
}
