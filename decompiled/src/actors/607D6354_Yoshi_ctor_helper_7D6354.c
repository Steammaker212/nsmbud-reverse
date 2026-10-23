/* Yoshi_ctor_helper_7D6354
 * address: 0x607D6354   size: 76   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall Yoshi_ctor_helper_7D6354(_DWORD *a1, int a2)
{
  _DWORD *v4; // r6

  sub_60794828(a1);
  *a1 = &off_60C2629C;
  v4 = (_DWORD *)operator_new(0x2B8u);
  sub_607D4818((int)v4, a2);
  a1[3] = v4;
  sub_60794848((int)a1, v4);
  return a1;
}
