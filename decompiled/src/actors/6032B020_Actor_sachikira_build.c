/* Actor_sachikira_build
 * address: 0x6032B020   size: 284   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_sachikira_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x36A0u);
  sub_60321050(v2, a1);
  *(_DWORD *)v2 = off_60BEBCE8;
  FIELD_U16(v2, 13056) = 0;
  FIELD_U32(v2, 13060) = 0;
  FIELD_U32(v2, 13068) = 0;
  FIELD_U32(v2, 13072) = 0;
  FIELD_U16(v2, 13076) = 0;
  sub_602A8564((_DWORD *)(v2 + 13080), FIELD_U32(v2, 8));
  sub_602A40A0((_DWORD *)(v2 + 13116), FIELD_U32(v2, 8));
  FIELD_U32(v2, 13152) = 0;
  FIELD_U32(v2, 13156) = 0;
  LightSource__ctor((LightSource *)(v2 + 13160));
  FIELD_U32(v2, 13252) = 0;
  FIELD_U32(v2, 13248) = 0;
  FIELD_U32(v2, 13244) = 0;
  FIELD_U32(v2, 13240) = 0;
  FIELD_U32(v2, 13236) = 0;
  FIELD_U32(v2, 13232) = 0;
  ActiveCollider_ctor((ActiveCollider *)(v2 + 13256));
  BasicSoundActor_ctor((_DWORD *)(v2 + 0x34F8), 1);
  FIELD_U32(v2, 0x34F8) = BasicSoundActor1_vtable;
  FIELD_U8(v2, 7348) = 0;
  FIELD_U32(v2, 120) = 0;
  FIELD_U32(v2, 124) = 0;
  FIELD_U32(v2, 128) = 0;
  FIELD_U32(v2, 132) = 1065353216;
  FIELD_U32(v2, 136) = 1065353216;
  FIELD_U32(v2, 140) = 1065353216;
  return v2;
}
