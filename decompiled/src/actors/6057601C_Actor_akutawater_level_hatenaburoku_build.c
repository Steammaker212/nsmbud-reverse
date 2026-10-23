/* Actor_akutawater_level_hatenaburoku_build
 * address: 0x6057601C   size: 64   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall Actor_akutawater_level_hatenaburoku_build(int a1)
{
  _DWORD *v2; // r5

  v2 = (_DWORD *)operator_new(0x1D08u);
  BlockBase__ctor((int)v2, a1);
  *v2 = &off_60C03F20;
  sub_606DF458();
  return v2;
}
