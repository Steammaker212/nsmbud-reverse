/* sub_601EF800
 * address: 0x601EF800   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601EF800(_BYTE *a1)
{
  int result; // r0

  if ( sub_601860F8((int)a1) == 1 || (result = (unsigned __int8)a1[216], (result & 8) != 0) )
  {
    a1[19] = 1;
    return (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 72))(a1);
  }
  return result;
}
