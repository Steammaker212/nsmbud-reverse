/* Actor_buroku_build
 * address: 0x605B0DEC   size: 108   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall Actor_buroku_build(int a1)
{
  _DWORD *v2; // r0
  _DWORD *result; // r0

  v2 = (_DWORD *)operator_new(0x1B58u);
  result = BlockCoinBase__ctor(v2, a1);
  *result = off_60C091A0;
  *((_BYTE *)result + 6992) = 0;
  result[1747] = 0;
  result[1746] = 0;
  result[1745] = 0;
  result[1744] = 0;
  result[1742] = 0;
  result[1743] = 0;
  return result;
}
