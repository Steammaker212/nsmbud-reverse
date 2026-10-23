/* sub_60329DF8
 * address: 0x60329DF8   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60329DF8(int a1)
{
  int v2; // r5
  Actor *v3; // r0

  *(_DWORD *)a1 = off_60BEB48C;
  v2 = a1 + 6408;
  ActiveCollider_dtor((ActiveCollider *)(a1 + 87688));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 87384));
  LightSource__dtor((_DWORD *)(a1 + 87312));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 86964));
  sub_6032A15C(v2);
  FIELD_U32(a1, 6304) = EffectWrapper_vtable;
  sub_60237560(a1 + 6304);
  sead__IDisposer__dtor((_DWORD *)(a1 + 6304));
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0((_BYTE *)(a1 + 6152));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v3 = StageActor__dtor((Actor *)a1);
  operator_delete(v3);
}
