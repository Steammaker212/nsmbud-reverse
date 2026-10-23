/* sub_60788ED8
 * address: 0x60788ED8   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60788ED8(int a1, unsigned int a2, int a3)
{
  _DWORD *result; // r0
  unsigned int v4; // r3
  int v5; // r3

  v4 = a2;
  if ( a2 >= 4 )
    v4 = 0;
  v5 = a1 + 4 * v4;
  FIELD_U32(v5, 32) = a3;
  FIELD_U32(v5, 48) = a3;
  FIELD_U16(a1, 66) |= 1 << a2;
  if ( a2 >= 4 )
    a2 = 0;
  result = (_DWORD *)(dword_60CBF354 + 4 * a2);
  result[4] = a3;
  result[8] = a3 + 108;
  result[12] = a3 + 120;
  return result;
}
