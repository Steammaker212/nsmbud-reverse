/* Actor_mekapuku_build
 * address: 0x603B3FBC   size: 464   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_mekapuku_build(int a1)
{
  int v2; // r4
  int v3; // r0
  int v4; // r1

  v2 = operator_new(0x2EB0u);
  Enemy__ctor((Enemy *)v2, (ActorBuildInfo *)a1);
  *(_DWORD *)v2 = off_60BF56E0;
  FIELD_U32(v2, 6300) = 0;
  FIELD_U32(v2, 6312) = 0;
  FIELD_U32(v2, 6308) = 0;
  FIELD_U32(v2, 6304) = 0;
  FIELD_U8(v2, 6316) = 1;
  FIELD_U32(v2, 6320) = 0;
  FIELD_U32(v2, 6324) = 0;
  v3 = FIELD_U32(a1, 16);
  v4 = FIELD_U32(a1, 20);
  FIELD_U32(v2, 6336) = FIELD_U32(a1, 24);
  FIELD_U32(v2, 6332) = v4;
  FIELD_U32(v2, 6328) = v3;
  FIELD_U32(v2, 6340) = 0;
  FIELD_U32(v2, 6344) = &ActorScaler_vtable;
  FIELD_U32(v2, 6348) = 1065353216;
  FIELD_U32(v2, 6352) = 1065353216;
  FIELD_U32(v2, 6356) = 1065353216;
  FIELD_U32(v2, 6360) = 1065353216;
  FIELD_U32(v2, 6364) = 0;
  FIELD_U32(v2, 6368) = 0;
  FIELD_U32(v2, 6372) = v2;
  sub_602A8564((_DWORD *)(v2 + 6376), FIELD_U32(v2, 8));
  sub_602A40A0((_DWORD *)(v2 + 6412), FIELD_U32(v2, 8));
  sub_601531B4((CollisionMgr *)(v2 + 6448));
  FIELD_U32(v2, 11800) = 0;
  FIELD_U32(v2, 11804) = *(_DWORD *)(FIELD_U32(a1, 12) + 8) == 541;
  FIELD_U32(v2, 11808) = off_60BF5988;
  FIELD_U8(v2, 11822) = 0;
  FIELD_U16(v2, 11820) = 0;
  FIELD_U32(v2, 11816) = 0;
  FIELD_U32(v2, 11812) = 0;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 11824));
  FIELD_U32(v2, 11824) = off_60BC1450;
  FIELD_U32(v2, 11944) = 0;
  FIELD_U8(v2, 11940) = 0;
  FIELD_U32(v2, 11936) = 0;
  FIELD_U32(v2, 11932) = 0;
  FIELD_U32(v2, 11928) = 0;
  return v2;
}
