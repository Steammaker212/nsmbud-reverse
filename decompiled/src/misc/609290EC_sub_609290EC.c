/* sub_609290EC
 * address: 0x609290EC   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609290EC(int result, signed int a2, int a3)
{
  _DWORD *v5; // r4
  int v6; // r0
  unsigned int v7; // r7
  int v8; // r0

  v5 = (_DWORD *)result;
  if ( a2 >= 1 )
  {
    v6 = (12 * (unsigned __int64)(unsigned int)a2) >> 32;
    v7 = 12 * a2;
    if ( !is_mul_ok(0xCu, a2) )
      v6 = 1;
    if ( v6 )
      v7 = -1;
    v8 = sub_608DE334(v7, a3, 4);
    if ( v8 )
    {
      v5[80] = a2;
      v5[81] = v8;
    }
    result = sub_608DE334(v7, a3, 4);
    if ( result )
    {
      v5[78] = a2;
      v5[79] = result;
    }
  }
  return result;
}
