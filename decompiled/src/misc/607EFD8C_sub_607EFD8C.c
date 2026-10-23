/* sub_607EFD8C
 * address: 0x607EFD8C   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607EFD8C(int a1, int *a2)
{
  int result; // r0

  result = *a2;
  if ( *a2 )
  {
    if ( result == 2 )
    {
      FIELD_U8(a1, 64541) = 0;
      sub_60561088(a1 + 568, 1, 0);
      return sub_608EC968(a1, 62, 10, 62);
    }
  }
  else
  {
    FIELD_U8(a1, 64541) = 1;
    return sub_60561088(a1 + 568, 1, 1);
  }
  return result;
}
