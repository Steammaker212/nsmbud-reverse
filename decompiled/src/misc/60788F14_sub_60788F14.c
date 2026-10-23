/* sub_60788F14
 * address: 0x60788F14   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60788F14(int a1, unsigned int a2)
{
  _DWORD *result; // r0
  unsigned int v3; // r3
  int v4; // r3

  v3 = 0;
  if ( a2 < 4 )
    v3 = a2;
  v4 = a1 + 4 * v3;
  FIELD_U32(v4, 32) = 0;
  FIELD_U32(v4, 48) = 0;
  FIELD_U16(a1, 66) &= ~(1 << a2);
  if ( a2 >= 4 )
    a2 = 0;
  result = (_DWORD *)(dword_60CBF354 + 4 * a2);
  result[4] = 0;
  result[8] = &dword_60B3B95C;
  result[12] = &dword_60B3B95C;
  return result;
}
