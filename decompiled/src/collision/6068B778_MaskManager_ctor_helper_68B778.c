/* MaskManager_ctor_helper_68B778
 * address: 0x6068B778   size: 80   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall MaskManager_ctor_helper_68B778(_DWORD *a1, int a2, int a3)
{
  int v5; // r0
  sead_IDisposer *v6; // r0
  sead_IDisposer *v7; // r0

  v5 = operator_new(0x6Cu);
  a1[7] = sub_6068A7EC(v5, a1 + 1, 0.0, 0.0);
  v6 = (sead_IDisposer *)operator_new(0x238u);
  v7 = sub_6068ABA8(v6);
  a1[6] = v7;
  sub_6068ABEC((int)v7, a1[7], 1, a3);
  return 1;
}
