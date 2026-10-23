/* sub_6093F214
 * address: 0x6093F214   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6093F214(int a1, int a2, int a3, int a4, int a5)
{
  int v9; // r5

  v9 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(FIELD_U32(dword_60CD0B60, 28) + 8) + 4) + 12);
  sub_6091DD8C(v9, a1);
  return sub_6093F284(a1, v9, a2, a3, a4, a5);
}
