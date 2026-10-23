/* sub_6059FA44
 * address: 0x6059FA44   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6059FA44(_DWORD *a1, unsigned int *a2, _DWORD *a3, int a4)
{
  unsigned int v4; // lr
  unsigned int v5; // r12
  int result; // r0

  v4 = a1[164] + 10;
  v5 = a1[161] % (v4 + a1[165]);
  if ( v5 >= v4 )
  {
    *a2 = v5 - v4;
    v4 = a1[164] + a1[165] + 10;
    result = 1;
  }
  else
  {
    *a2 = v5;
    result = 0;
  }
  if ( a4 )
    result ^= 1u;
  *a3 = v4 - v5;
  return result;
}
