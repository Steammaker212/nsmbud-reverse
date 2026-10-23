/* PowBlock_vf78
 * address: 0x605C9A8C   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall PowBlock_vf78(unsigned __int8 *a1)
{
  int result; // r0
  int (__fastcall *v3)(unsigned __int8 *, int, int); // r5
  int v4; // r1

  result = a1[6124];
  if ( (result & 4) != 0 )
  {
    v3 = *(int (__fastcall **)(unsigned __int8 *, int, int))(*(_DWORD *)a1 + 84);
    v4 = sub_605CC390(a1);
    return v3(a1, v4, 30);
  }
  return result;
}
