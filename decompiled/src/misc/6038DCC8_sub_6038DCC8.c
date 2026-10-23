/* sub_6038DCC8
 * address: 0x6038DCC8   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_6038DCC8(int a1)
{
  _DWORD *v2; // r5

  *(_DWORD *)a1 = off_60BF3A08;
  v2 = (_DWORD *)(a1 + 6836);
  ActiveCollider_dtor((ActiveCollider *)(a1 + 7824));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 7520));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 7216));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 6912));
  *(_DWORD *)a1 = off_60BF647C;
  LightSource__dtor(v2);
  FIELD_U32(a1, 6732) = EffectWrapper_vtable;
  sub_60237560(a1 + 6732);
  sead__IDisposer__dtor((_DWORD *)(a1 + 6732));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 6364));
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0((_BYTE *)(a1 + 6152));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
