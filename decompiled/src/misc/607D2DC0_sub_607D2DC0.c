/* sub_607D2DC0
 * address: 0x607D2DC0   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_607D2DC0(int a1)
{
  _DWORD *v2; // r5
  Actor *v3; // r0

  *(_DWORD *)a1 = &off_60C26158;
  FIELD_U32(a1, 656) = EffectWrapper_vtable;
  v2 = (_DWORD *)(a1 + 656);
  sub_60237560(a1 + 656);
  sead__IDisposer__dtor(v2);
  v3 = StageActor__dtor((Actor *)a1);
  operator_delete(v3);
}
