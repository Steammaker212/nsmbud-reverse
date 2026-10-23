/* sub_6039EC30
 * address: 0x6039EC30   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_6039EC30(int a1)
{
  *(_DWORD *)a1 = off_60BF40A0;
  sub_60026BFC((_DWORD *)(a1 + 12988));
  FIELD_U32(a1, 12880) = EffectWrapper_vtable;
  sub_60237560(a1 + 12880);
  sead__IDisposer__dtor((_DWORD *)(a1 + 12880));
  FIELD_U32(a1, 12776) = EffectWrapper_vtable;
  sub_60237560(a1 + 12776);
  sead__IDisposer__dtor((_DWORD *)(a1 + 12776));
  FIELD_U32(a1, 12672) = EffectWrapper_vtable;
  sub_60237560(a1 + 12672);
  sead__IDisposer__dtor((_DWORD *)(a1 + 12672));
  FIELD_U32(a1, 12568) = EffectWrapper_vtable;
  sub_60237560(a1 + 12568);
  sead__IDisposer__dtor((_DWORD *)(a1 + 12568));
  CollisionMgr_dtor(a1 + 7216);
  ActiveCollider_dtor((ActiveCollider *)(a1 + 6912));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 6608));
  nullsub_1271();
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0((_BYTE *)(a1 + 6152));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
