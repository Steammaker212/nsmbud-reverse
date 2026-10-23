/* sub_602F2C4C
 * address: 0x602F2C4C   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602F2C4C(unsigned __int8 *a1)
{
  int result; // r0

  result = a1[20];
  if ( result )
  {
    result = (*(int (__fastcall **)(unsigned __int8 *))(*(_DWORD *)a1 + 4))(a1);
    a1[20] = result;
  }
  return result;
}
