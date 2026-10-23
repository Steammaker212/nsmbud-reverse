/* sub_60785EF0
 * address: 0x60785EF0   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60785EF0(int a1)
{
  Actor *v2; // r0

  *(_DWORD *)a1 = off_60C249E8;
  ShapedCollider_dtor((ColliderBase *)(a1 + 1216));
  FIELD_U32(a1, 876) = off_60BE75C0;
  FIELD_U32(a1, 900) = EffectWrapper_vtable;
  sub_60237560(a1 + 900);
  sead__IDisposer__dtor((_DWORD *)(a1 + 900));
  FIELD_U32(a1, 748) = off_60BE75C0;
  FIELD_U32(a1, 772) = EffectWrapper_vtable;
  sub_60237560(a1 + 772);
  sead__IDisposer__dtor((_DWORD *)(a1 + 772));
  v2 = StageActor__dtor((Actor *)a1);
  operator_delete(v2);
}
