/* MaskManager_ctor_helper_68B3C4
 * address: 0x6068B3C4   size: 96   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall MaskManager_ctor_helper_68B3C4(_DWORD *a1, void *a2)
{
  _DWORD *v4; // r0
  sead_IDisposer *v5; // r0
  sead_IDisposer *v6; // r0

  v4 = (_DWORD *)operator_new_8DE25C(0x38u, a2, 4);
  a1[26] = sub_6068A618(v4, dword_60B07E28);
  v5 = (sead_IDisposer *)operator_new_8DE25C(0x238u, a2, 4);
  v6 = sub_6068ABA8(v5);
  a1[24] = v6;
  sub_6068ABEC((int)v6, a1[26], 1, 4);
  a1[28] = 0;
  return 1;
}
