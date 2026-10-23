/* sub_60370594
 * address: 0x60370594   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60370594(int a1)
{
  _DWORD *v2; // r5
  _DWORD *v3; // r6
  Actor *v4; // r0

  *(_DWORD *)a1 = off_60BF057C;
  v2 = (_DWORD *)(a1 + 6392);
  FIELD_U32(a1, 6872) = EffectWrapper_vtable;
  v3 = (_DWORD *)(a1 + 6872);
  sub_60237560(a1 + 6872);
  sead__IDisposer__dtor(v3);
  FIELD_U32(a1, 6768) = EffectWrapper_vtable;
  sub_60237560(a1 + 6768);
  sead__IDisposer__dtor((_DWORD *)(a1 + 6768));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 6464));
  LightSource__dtor(v2);
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0((_BYTE *)(a1 + 6152));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v4 = StageActor__dtor((Actor *)a1);
  operator_delete(v4);
}
