/* ActorCoin_create
 * address: 0x60576EEC   size: 76   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall ActorCoin_create(int a1)
{
  int v2; // r0
  _DWORD *result; // r0

  v2 = operator_new(0x1D48u);
  result = (_DWORD *)CoinBase__ctor(v2, a1);
  *result = &off_60C04288;
  result[1871] = 0;
  result[1872] = 0;
  result[1873] = 0;
  return result;
}
