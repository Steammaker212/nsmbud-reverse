/* PlayerBase_vf2
 * address: 0x6075E5C0   size: 400   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall PlayerBase_vf2(int a1)
{
  _DWORD *v2; // r5

  *(_DWORD *)a1 = PlayerBase_vtable;
  v2 = (_DWORD *)(a1 + 840);
  Player__vfC8(a1);
  FIELD_U32(a1, 11008) = EffectWrapper_vtable;
  sub_60237560(a1 + 11008);
  sead__IDisposer__dtor((_DWORD *)(a1 + 11008));
  FIELD_U32(a1, 10764) = EffectWrapper_vtable;
  sub_60237560(a1 + 10764);
  sead__IDisposer__dtor((_DWORD *)(a1 + 10764));
  FIELD_U32(a1, 10660) = EffectWrapper_vtable;
  sub_60237560(a1 + 10660);
  sead__IDisposer__dtor((_DWORD *)(a1 + 10660));
  FIELD_U32(a1, 10456) = EffectWrapper_vtable;
  sub_60237560(a1 + 10456);
  sead__IDisposer__dtor((_DWORD *)(a1 + 10456));
  FIELD_U32(a1, 10352) = EffectWrapper_vtable;
  sub_60237560(a1 + 10352);
  sead__IDisposer__dtor((_DWORD *)(a1 + 10352));
  FIELD_U32(a1, 10248) = EffectWrapper_vtable;
  sub_60237560(a1 + 10248);
  sead__IDisposer__dtor((_DWORD *)(a1 + 10248));
  FIELD_U32(a1, 10144) = EffectWrapper_vtable;
  sub_60237560(a1 + 10144);
  sead__IDisposer__dtor((_DWORD *)(a1 + 10144));
  FIELD_U32(a1, 10040) = EffectWrapper_vtable;
  sub_60237560(a1 + 10040);
  sead__IDisposer__dtor((_DWORD *)(a1 + 10040));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 9264));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 8960));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 8656));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 8352));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 8048));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 7744));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 7440));
  ActiveCollider_dtor((ActiveCollider *)(a1 + 7136));
  sub_60154380((_DWORD *)(a1 + 1328));
  PlayerLookTarget_vf0((_DWORD *)(a1 + 1160));
  sub_60026BFC(v2);
  return StageActor__dtor((Actor *)a1);
}
