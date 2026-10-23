/* sub_603728E8
 * address: 0x603728E8   size: 528   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603728E8(int a1, int a2)
{
  unsigned int v4; // r1
  int v5; // r1
  int v6; // r2

  Enemy__ctor((Enemy *)a1, (ActorBuildInfo *)a2);
  *(_DWORD *)a1 = off_60BF0B90;
  FIELD_U32(a1, 6300) = 0;
  sub_601531B4((CollisionMgr *)(a1 + 6304));
  FIELD_U32(a1, 11656) = &ActorScaler_vtable;
  FIELD_U32(a1, 11660) = 1065353216;
  FIELD_U32(a1, 11664) = 1065353216;
  FIELD_U32(a1, 11668) = 1065353216;
  FIELD_U32(a1, 11672) = 1065353216;
  FIELD_U32(a1, 11676) = 0;
  FIELD_U32(a1, 11680) = 0;
  FIELD_U32(a1, 11684) = a1;
  v4 = FIELD_U32(a1, 20);
  FIELD_U32(a1, 11688) = v4 & 0xF;
  FIELD_U32(a1, 11692) = (v4 >> 12) & 3;
  v5 = FIELD_U32(a2, 16);
  v6 = FIELD_U32(a2, 20);
  FIELD_U32(a1, 11704) = FIELD_U32(a2, 24);
  FIELD_U32(a1, 11700) = v6;
  FIELD_U32(a1, 11696) = v5;
  FIELD_U32(a1, 11708) = 0;
  FIELD_U32(a1, 11712) = 0;
  FIELD_U32(a1, 11716) = 1065353216;
  sub_602A40A0((_DWORD *)(a1 + 11720), FIELD_U32(a1, 8));
  FIELD_U32(a1, 11756) = off_60BF0E80;
  FIELD_U32(a1, 11760) = 64;
  FIELD_U32(a1, 11764) = 1;
  FIELD_U32(a1, 11772) = 0;
  FIELD_U32(a1, 11768) = 0;
  FIELD_U32(a1, 11776) = 0;
  FIELD_U32(a1, 11780) = 0;
  FIELD_U8(a1, 11784) = 0;
  FIELD_U8(a1, 11802) = 0;
  FIELD_U16(a1, 11800) = 0;
  FIELD_U32(a1, 11796) = 0;
  FIELD_U32(a1, 11792) = 0;
  FIELD_U32(a1, 11812) = 0;
  FIELD_U32(a1, 11808) = 0;
  FIELD_U32(a1, 11804) = 0;
  FIELD_U32(a1, 11816) = 0;
  FIELD_U32(a1, 11820) = 0;
  FIELD_U32(a1, 11824) = 0;
  FIELD_U32(a1, 11836) = 0;
  FIELD_U32(a1, 11832) = 0;
  FIELD_U32(a1, 11828) = 0;
  FIELD_U32(a1, 11840) = 0;
  FIELD_U32(a1, 11844) = 0;
  FIELD_U32(a1, 11848) = 0;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 11852));
  FIELD_U32(a1, 11852) = off_60BC1450;
  FIELD_U32(a1, 100) = 0;
  FIELD_U32(a1, 104) = 0;
  return a1;
}
