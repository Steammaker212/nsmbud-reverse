/* sub_606F0AD0
 * address: 0x606F0AD0   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_606F0AD0(_DWORD *a1)
{
  int v1; // r1
  int v2; // r1
  _DWORD *result; // r0
  int v4; // r1

  v1 = (a1[5] >> 28) & 3;
  if ( v1 )
    v2 = dword_60AF5AA0[v1 - 1];
  else
    v2 = 30;
  a1[1694] = v2;
  a1[1696] = 45;
  result = a1 + 1696;
  v4 = *(result - 1);
  if ( v4 <= 44 )
    *result = 45 - v4;
  return result;
}
