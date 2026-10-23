/* sub_607D2D70
 * address: 0x607D2D70   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_607D2D70(int a1)
{
  _DWORD *v2; // r5

  *(_DWORD *)a1 = &off_60C26158;
  FIELD_U32(a1, 656) = EffectWrapper_vtable;
  v2 = (_DWORD *)(a1 + 656);
  sub_60237560(a1 + 656);
  sead__IDisposer__dtor(v2);
  return StageActor__dtor((Actor *)a1);
}
