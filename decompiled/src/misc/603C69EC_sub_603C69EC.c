/* sub_603C69EC
 * address: 0x603C69EC   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_603C69EC(int a1)
{
  *(_DWORD *)a1 = off_60BF6B1C;
  ActiveCollider_dtor((ActiveCollider *)(a1 + 26528));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 26224));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 25920));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 25616));
  sub_603C6B28(a1 + 15888);
  FIELD_U32(a1, 14852) = EffectWrapper_vtable;
  sub_60237560(a1 + 14852);
  sead__IDisposer__dtor((_DWORD *)(a1 + 14852));
  FIELD_U32(a1, 14748) = EffectWrapper_vtable;
  sub_60237560(a1 + 14748);
  sead__IDisposer__dtor((_DWORD *)(a1 + 14748));
  FIELD_U32(a1, 14644) = EffectWrapper_vtable;
  sub_60237560(a1 + 14644);
  sead__IDisposer__dtor((_DWORD *)(a1 + 14644));
  FIELD_U32(a1, 14540) = EffectWrapper_vtable;
  sub_60237560(a1 + 14540);
  sead__IDisposer__dtor((_DWORD *)(a1 + 14540));
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0((_BYTE *)(a1 + 6152));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
