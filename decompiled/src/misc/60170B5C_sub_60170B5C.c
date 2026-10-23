/* sub_60170B5C
 * address: 0x60170B5C   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60170B5C(unsigned __int8 *a1)
{
  int result; // r0

  result = a1[204];
  if ( (result & 0x10) != 0 )
  {
    result = a1[196];
    if ( (result & 0x80) == 0 )
    {
      (*(void (__fastcall **)(unsigned __int8 *))(*(_DWORD *)a1 + 64))(a1);
      return (*(int (__fastcall **)(unsigned __int8 *))(*(_DWORD *)a1 + 40))(a1);
    }
  }
  return result;
}
