/* LavaGeyser_vf2
 * address: 0x603E3D10   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall LavaGeyser_vf2(int a1)
{
  ActiveCollider *v2; // r5
  _DWORD *v3; // r6

  *(_DWORD *)a1 = &LavaGeyser_vtable;
  v2 = (ActiveCollider *)(a1 + 6404);
  FIELD_U32(a1, 7452) = EffectWrapper_vtable;
  v3 = (_DWORD *)(a1 + 7452);
  sub_60237560(a1 + 7452);
  sead__IDisposer__dtor(v3);
  FIELD_U32(a1, 7348) = EffectWrapper_vtable;
  sub_60237560(a1 + 7348);
  sead__IDisposer__dtor((_DWORD *)(a1 + 7348));
  FIELD_U32(a1, 7244) = EffectWrapper_vtable;
  sub_60237560(a1 + 7244);
  sead__IDisposer__dtor((_DWORD *)(a1 + 7244));
  FIELD_U32(a1, 7140) = EffectWrapper_vtable;
  sub_60237560(a1 + 7140);
  sead__IDisposer__dtor((_DWORD *)(a1 + 7140));
  FIELD_U32(a1, 7036) = EffectWrapper_vtable;
  sub_60237560(a1 + 7036);
  sead__IDisposer__dtor((_DWORD *)(a1 + 7036));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 6708));
  ActiveCollider_dtor(v2);
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0((_BYTE *)(a1 + 6152));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
