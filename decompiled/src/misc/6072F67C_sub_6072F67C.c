/* sub_6072F67C
 * address: 0x6072F67C   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6072F67C(_DWORD *a1)
{
  int result; // r0

  result = sub_60793CA8(*(_DWORD *)(a1[1575] + 4));
  if ( result == 1 )
    return (*(int (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60CBDB20);
  return result;
}
