/* MaskManager_ctor_helper_68B678
 * address: 0x6068B678   size: 92   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall MaskManager_ctor_helper_68B678(int a1, void *a2, int a3)
{
  _DWORD *v6; // r0
  sead_IDisposer *v7; // r0
  sead_IDisposer *v8; // r0

  v6 = (_DWORD *)operator_new_8DE25C(0x38u, a2, 4);
  FIELD_U32(a1, 24) = sub_6068A618(v6, dword_60B07E28);
  v7 = (sead_IDisposer *)operator_new_8DE25C(0x238u, a2, 4);
  v8 = sub_6068ABA8(v7);
  FIELD_U32(a1, 20) = v8;
  sub_6068ABEC((int)v8, FIELD_U32(a1, 24), 0, a3);
  return 1;
}
