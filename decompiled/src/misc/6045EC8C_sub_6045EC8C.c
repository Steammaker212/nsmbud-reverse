/* sub_6045EC8C
 * address: 0x6045EC8C   size: 672   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6045EC8C(int a1, ActorBuildInfo *a2)
{
  int v3; // r0
  int v4; // r1

  MultiStateActor__ctor((MultiStateActor *)a1, a2);
  *(_DWORD *)a1 = off_60BFB65C;
  FIELD_U32(a1, 6104) = 0;
  FIELD_U32(a1, 6108) = 0;
  v3 = FIELD_U32(a1, 108);
  v4 = FIELD_U32(a1, 112);
  FIELD_U32(a1, 6120) = FIELD_U32(a1, 116);
  FIELD_U32(a1, 6116) = v4;
  FIELD_U32(a1, 6112) = v3;
  FIELD_U32(a1, 6124) = 0;
  FIELD_U32(a1, 6128) = 0;
  FIELD_U32(a1, 6132) = 0;
  FIELD_U32(a1, 6184) = 0;
  FIELD_U32(a1, 6180) = 0;
  FIELD_U32(a1, 6176) = 0;
  FIELD_U32(a1, 6172) = 0;
  FIELD_U32(a1, 6168) = 0;
  FIELD_U32(a1, 6188) = 1;
  FIELD_U32(a1, 6204) = 0;
  FIELD_U16(a1, 6200) = 0;
  FIELD_U32(a1, 6196) = 0;
  FIELD_U32(a1, 6192) = 0;
  FIELD_U32(a1, 6208) = -1;
  FIELD_U32(a1, 6212) = 0;
  FIELD_U32(a1, 6216) = 0;
  FIELD_U32(a1, 6220) = 0;
  FIELD_U32(a1, 6224) = 2;
  FIELD_U8(a1, 6250) = 0;
  FIELD_U16(a1, 6248) = 0;
  FIELD_U32(a1, 6244) = 0;
  FIELD_U32(a1, 6240) = 0;
  FIELD_U32(a1, 6236) = 0;
  FIELD_U32(a1, 6232) = 0;
  FIELD_U32(a1, 6228) = 0;
  FIELD_U32(a1, 6256) = 0;
  FIELD_U32(a1, 6252) = 0;
  sub_6000BAC8((_DWORD *)(a1 + 6260), FIELD_U32(a1, 8));
  FIELD_U32(a1, 6260) = off_60BFB7DC;
  FIELD_U32(a1, 6296) = a1;
  FIELD_U32(a1, 6300) = &ActorScaler_vtable;
  FIELD_U32(a1, 6304) = 1065353216;
  FIELD_U32(a1, 6308) = 1065353216;
  FIELD_U32(a1, 6312) = 1065353216;
  FIELD_U32(a1, 6316) = 1065353216;
  FIELD_U32(a1, 6320) = 0;
  FIELD_U32(a1, 6324) = 0;
  FIELD_U32(a1, 6328) = a1;
  ActiveCollider_ctor((ActiveCollider *)(a1 + 6332));
  FIELD_U32(a1, 6672) = 0;
  FIELD_U32(a1, 6676) = 0;
  FIELD_U32(a1, 6680) = 0;
  FIELD_U8(a1, 6668) = 0;
  FIELD_U32(a1, 6664) = 0;
  FIELD_U32(a1, 6660) = 0;
  FIELD_U32(a1, 6656) = 0;
  FIELD_U32(a1, 6652) = 0;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 6684));
  FIELD_U32(a1, 6684) = off_60BC1450;
  FIELD_U32(a1, 6788) = 0;
  FIELD_U8(a1, 6792) = 0;
  FIELD_U8(a1, 6793) = 0;
  FIELD_U32(a1, 6796) = 0;
  FIELD_U32(a1, 6800) = 1;
  FIELD_U16(a1, 6804) = 0;
  FIELD_U8(a1, 6806) = 0;
  FIELD_U32(a1, 6816) = 0;
  FIELD_U32(a1, 6812) = 0;
  FIELD_U32(a1, 6808) = 0;
  FIELD_U32(a1, 6820) = off_60BFB820;
  FIELD_U8(a1, 6636) = 0;
  FIELD_U32(a1, 6640) = 0;
  FIELD_U32(a1, 6644) = 0;
  FIELD_U32(a1, 6648) = 0;
  return a1;
}
