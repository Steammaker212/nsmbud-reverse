/* sub_6098BD84
 * address: 0x6098BD84   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_6098BD84(int a1, int a2)
{
  unsigned int v2; // r1
  _DWORD *v3; // r0
  unsigned int v4; // r2
  unsigned int v5; // r12
  int v6; // r3
  _BYTE *result; // r0

  if ( FIELD_S8(a1, 121) <= a2 )
    FIELD_U8(a1, 121) = a2;
  v2 = FIELD_U32(a1, 88);
  v3 = *(_DWORD **)(a1 + 20);
  v4 = v3[7];
  v5 = v3[5];
  v6 = v3[6];
  result = (_BYTE *)v3[8];
  if ( v4 > v2 )
    result += v2;
  if ( v5 > v2 )
    v6 += 4 * v2;
  *result = *(_BYTE *)(*(_DWORD *)v6 + 120);
  return result;
}
