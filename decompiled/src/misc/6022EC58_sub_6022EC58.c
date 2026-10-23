/* sub_6022EC58
 * address: 0x6022EC58   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6022EC58(int a1, int a2, _DWORD *a3, int a4)
{
  _DWORD *v8; // r5

  v8 = (_DWORD *)operator_new(0x58u);
  sub_60220CDC((int)v8, a1, a2, a3, a4);
  v8[21] = 0;
  *v8 = off_60BD93EC;
  sub_6022ECC0(v8);
  return v8;
}
