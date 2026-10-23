/* sub_6072A8F8
 * address: 0x6072A8F8   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6072A8F8(_DWORD *a1)
{
  _DWORD *v2; // r5
  int result; // r0

  v2 = a1 + 1575;
  Animation_update(**(_DWORD **)(a1[1575] + 12));
  result = *(unsigned __int8 *)(**(_DWORD **)(*v2 + 12) + 28);
  if ( (result & 0x20) != 0 )
    return (*(int (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60CBD8BC);
  return result;
}
