/* sub_602F5B38
 * address: 0x602F5B38   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_602F5B38(_DWORD *result)
{
  _DWORD *v1; // r1
  int v2; // r2
  unsigned int v3; // r3
  unsigned int v4; // r1

  v1 = (_DWORD *)result[1576];
  v2 = v1[3];
  v3 = v1[2];
  v4 = v1[17];
  if ( v3 > v4 )
    v2 += 4 * v4;
  *(_DWORD *)(*(_DWORD *)v2 + 24) = 0x40000000;
  *(_DWORD *)(result[1578] + 24) = 0;
  result[30] = 0;
  result[20] ^= 1u;
  return result;
}
