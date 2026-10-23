/* sub_602F5A40
 * address: 0x602F5A40   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_602F5A40(_DWORD *result)
{
  _DWORD *v1; // r1
  int v2; // r2
  unsigned int v3; // r3
  unsigned int v4; // r1
  _DWORD v5[2]; // [sp+0h] [bp-8h]

  v1 = (_DWORD *)result[1576];
  v2 = v1[3];
  v3 = v1[2];
  v4 = v1[17];
  if ( v3 > v4 )
    v2 += 4 * v4;
  *(_DWORD *)(*(_DWORD *)v2 + 24) = 0x40000000;
  *(_DWORD *)(result[1578] + 24) = 0;
  v5[0] = result[1583];
  v5[1] = v5[0] ^ 0x80000000;
  result[39] = 0;
  result[30] = v5[result[20]];
  result[31] = 0;
  result[32] = 0;
  result[33] = 0;
  result[34] = -1065353216;
  result[35] = 0;
  return result;
}
