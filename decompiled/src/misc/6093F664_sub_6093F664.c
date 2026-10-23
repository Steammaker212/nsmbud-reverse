/* sub_6093F664
 * address: 0x6093F664   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6093F664(int a1, int a2)
{
  int v4; // r6

  v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(FIELD_U32(dword_60CD0B60, 28) + 8) + 4) + 20);
  sub_6091DD8C(v4, a1);
  return sub_6093F6B4(a1, v4, a2);
}
