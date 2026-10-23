/* sub_6099826C
 * address: 0x6099826C   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6099826C(int a1, int a2)
{
  int v3; // r4
  unsigned int v4; // r5
  _DWORD v6[10]; // [sp+0h] [bp-28h] BYREF

  *(_BYTE *)a1 = FIELD_U16(a2, 4) == 8;
  v3 = a2 + 8;
  v4 = FIELD_U16(a2, 8);
  sub_60987718(v6, v4 >> 1, a2 + 10);
  sub_60987724((_DWORD *)(a1 + 4), v6);
  sub_60987718(v6, *(unsigned __int16 *)(v3 + 2 + v4) >> 1, v3 + v4 + 4);
  return sub_60987724((_DWORD *)(a1 + 12), v6);
}
