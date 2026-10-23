/* sub_604EF44C
 * address: 0x604EF44C   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_604EF44C(int a1)
{
  _DWORD *result; // r0
  int v2; // r1
  int v3; // t1
  int v4; // r2
  unsigned int v5; // r2

  v3 = FIELD_U32(a1, 74464);
  result = (_DWORD *)(a1 + 74464);
  v2 = v3;
  v4 = 0;
  if ( (unsigned int)(2 * v3) < 0x14 )
    v4 = 2 * v2;
  *(_BYTE *)(result[v4 - 26] + 64) &= ~1u;
  v5 = (2 * *result) | 1;
  if ( v5 >= 0x14 )
    v5 = 0;
  *(_BYTE *)(result[v5 - 26] + 64) &= ~1u;
  *((_BYTE *)result - 27329) = 0;
  *((_BYTE *)result - 27331) = 0;
  return result;
}
