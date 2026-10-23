/* SumoBroLightning_vf2
 * address: 0x6033594C   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall SumoBroLightning_vf2(int a1)
{
  _DWORD *v2; // r5
  _DWORD *v3; // r6

  *(_DWORD *)a1 = SumoBroLightning_vtable;
  v2 = (_DWORD *)(a1 + 6108);
  FIELD_U32(a1, 6488) = EffectWrapper_vtable;
  v3 = (_DWORD *)(a1 + 6488);
  sub_60237560(a1 + 6488);
  sead__IDisposer__dtor(v3);
  LightSource__dtor((_DWORD *)(a1 + 6416));
  sub_60026BFC(v2);
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
