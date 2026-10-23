/* sub_6022F5D4
 * address: 0x6022F5D4   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6022F5D4(int a1, int a2, _DWORD *a3, int a4, int a5)
{
  _DWORD *v9; // r5

  v9 = (_DWORD *)operator_new(0x5Cu);
  sub_60220CDC((int)v9, a1, a2, a3, a4);
  *v9 = off_60BD9438;
  v9[21] = 0;
  v9[22] = a5;
  sub_6022F644(v9);
  return v9;
}
