/* sub_60864FD8
 * address: 0x60864FD8   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60864FD8(unsigned __int8 *a1, int a2)
{
  int result; // r0
  int v5; // r0

  result = *a1;
  if ( result < a2 )
  {
    v5 = *((_DWORD *)a1 + 1);
    if ( v5 )
    {
      sub_60855BF0(v5);
      *((_DWORD *)a1 + 1) = 0;
      *(_WORD *)a1 = 0;
    }
    result = sub_60855BC8(32 * a2);
    *(_DWORD *)result = 0;
    FIELD_U32(result, 4) = 0;
    *((_DWORD *)a1 + 1) = result;
    if ( result )
      *a1 = a2;
  }
  return result;
}
