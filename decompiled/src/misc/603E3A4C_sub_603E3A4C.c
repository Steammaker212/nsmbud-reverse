/* sub_603E3A4C
 * address: 0x603E3A4C   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603E3A4C(int a1)
{
  ActiveCollider *v2; // r5

  *(_DWORD *)a1 = off_60BF899C;
  v2 = (ActiveCollider *)(a1 + 7568);
  ActiveCollider_dtor((ActiveCollider *)(a1 + 8960));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 8656));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 8352));
  FIELD_U32(a1, 8248) = EffectWrapper_vtable;
  sub_60237560(a1 + 8248);
  sead__IDisposer__dtor((_DWORD *)(a1 + 8248));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 7872));
  ActiveCollider_dtor(v2);
  return LavaGeyser_vf2(a1);
}
