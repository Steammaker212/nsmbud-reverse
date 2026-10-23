/* sub_603DA12C
 * address: 0x603DA12C   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_603DA12C(int a1)
{
  int v2; // r5
  _DWORD *v3; // r6

  *(_DWORD *)a1 = off_60BF8154;
  v2 = a1 + 6376;
  FIELD_U32(a1, 18652) = EffectWrapper_vtable;
  v3 = (_DWORD *)(a1 + 18652);
  sub_60237560(a1 + 18652);
  sead__IDisposer__dtor(v3);
  ActiveCollider_dtor((ActiveCollider *)(a1 + 18312));
  CollisionMgr_dtor(a1 + 12960);
  CollisionMgr_dtor(v2);
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0((_BYTE *)(a1 + 6152));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
