/* LightMask__init
 * address: 0x6068B09C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall LightMask__init(RevealMaskRelated *this, void *heap, int shape)
{
  _DWORD *v6; // r0
  sead_IDisposer *v7; // r0
  sead_IDisposer *v8; // r0

  v6 = (_DWORD *)operator_new_8DE25C(0x38u, heap, 4);
  FIELD_U32(this, 0x1C) = (int)sub_6068A618(v6, dword_60B07E28);
  v7 = (sead_IDisposer *)operator_new_8DE25C(0x238u, heap, 4);
  v8 = sub_6068ABA8(v7);
  FIELD_U32(this, 0x18) = (int)v8;
  sub_6068ABEC((int)v8, FIELD_U32(this, 0x1C), 1, shape);
  FIELD_U32(this, 0x20) = shape;
  FIELD_U32(this, 0x24) = 0;
  return 1;
}
