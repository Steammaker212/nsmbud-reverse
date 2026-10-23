/* Actor_akutakoin_build
 * address: 0x6057BD84   size: 184   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall Actor_akutakoin_build(int a1)
{
  _DWORD *v2; // r4

  v2 = (_DWORD *)operator_new(0x1DA8u);
  CoinBase__ctor((int)v2, a1);
  *v2 = &off_60C04C54;
  v2[1888] = 0;
  memset(v2 + 1874, 0, 53);
  v2[1889] = &ActorScaler_vtable;
  v2[1890] = 1065353216;
  v2[1891] = 1065353216;
  v2[1892] = 1065353216;
  v2[1893] = 1065353216;
  v2[1894] = 0;
  v2[1895] = 0;
  v2[1896] = v2;
  v2[1897] = off_60C04DE0;
  return v2;
}
