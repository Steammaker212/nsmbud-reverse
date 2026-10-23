/* sub_601B5484
 * address: 0x601B5484   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_601B5484(int a1)
{
  _DWORD *v2; // r5
  Actor *v3; // r0

  *(_DWORD *)a1 = off_60BD683C;
  FIELD_U32(a1, 780) = EffectWrapper_vtable;
  v2 = (_DWORD *)(a1 + 780);
  sub_60237560(a1 + 780);
  sead__IDisposer__dtor(v2);
  FIELD_U32(a1, 668) = EffectWrapper_vtable;
  sub_60237560(a1 + 668);
  sead__IDisposer__dtor((_DWORD *)(a1 + 668));
  FIELD_U32(a1, 556) = EffectWrapper_vtable;
  sub_60237560(a1 + 556);
  sead__IDisposer__dtor((_DWORD *)(a1 + 556));
  FIELD_U32(a1, 444) = EffectWrapper_vtable;
  sub_60237560(a1 + 444);
  sead__IDisposer__dtor((_DWORD *)(a1 + 444));
  v3 = Actor__dtor((Actor *)a1);
  operator_delete(v3);
}
