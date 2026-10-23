/* sub_60270AB8
 * address: 0x60270AB8   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60270AB8(int a1)
{
  _DWORD *result; // r0
  int v2; // t1
  int v3; // r3
  int v4; // r1

  v2 = FIELD_U32(a1, 7492);
  result = (_DWORD *)(a1 + 7492);
  v3 = *(result - 4);
  v4 = v2 + dword_60AF2594[(unsigned __int8)(*(result - 1853) + 2 * v3)];
  *result = v4;
  if ( v3 == 1 )
    v4 ^= 0x80000000;
  result[1] = v4;
  return result;
}
