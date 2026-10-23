/* Actor_resident_geyser_sand_build_helper
 * address: 0x60625E1C   size: 1180   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_resident_geyser_sand_build_helper(int a1, ActorBuildInfo *a2)
{
  int v3; // r2
  int v4; // r1
  int v5; // r0

  StateActor_ctor((StateActor *)a1, a2);
  *(_DWORD *)a1 = off_60C11D40;
  FIELD_U32(a1, 6100) = 0;
  FIELD_U32(a1, 6104) = 0;
  FIELD_U8(a1, 6108) = 0;
  FIELD_U16(a1, 6124) = 0;
  FIELD_U32(a1, 6120) = 0;
  FIELD_U32(a1, 6116) = 0;
  FIELD_U32(a1, 6112) = 0;
  FIELD_U32(a1, 6140) = 0;
  FIELD_U32(a1, 6136) = 0;
  FIELD_U32(a1, 6132) = 0;
  FIELD_U32(a1, 6128) = 0;
  ActiveCollider_ctor((ActiveCollider *)(a1 + 6144));
  memset(a1 + 6448, 0, 44);
  FIELD_U32(a1, 6492) = 0x40000000;
  FIELD_U8(a1, 6496) = 0;
  FIELD_U32(a1, 6524) = 0;
  FIELD_U32(a1, 6520) = 0;
  FIELD_U32(a1, 6516) = 0;
  FIELD_U32(a1, 6512) = 0;
  FIELD_U32(a1, 6508) = 0;
  FIELD_U32(a1, 6504) = 0;
  FIELD_U32(a1, 6500) = 0;
  FIELD_U32(a1, 6528) = 0x40000000;
  FIELD_U8(a1, 6532) = 0;
  FIELD_U32(a1, 6560) = 0;
  FIELD_U32(a1, 6556) = 0;
  FIELD_U32(a1, 6552) = 0;
  FIELD_U32(a1, 6548) = 0;
  FIELD_U32(a1, 6544) = 0;
  FIELD_U32(a1, 6540) = 0;
  FIELD_U32(a1, 6536) = 0;
  FIELD_U32(a1, 6564) = 0x40000000;
  FIELD_U8(a1, 6568) = 0;
  FIELD_U32(a1, 6596) = 0;
  FIELD_U32(a1, 6592) = 0;
  FIELD_U32(a1, 6588) = 0;
  FIELD_U32(a1, 6584) = 0;
  FIELD_U32(a1, 6580) = 0;
  FIELD_U32(a1, 6576) = 0;
  FIELD_U32(a1, 6572) = 0;
  FIELD_U32(a1, 6600) = 0x40000000;
  FIELD_U8(a1, 6604) = 0;
  FIELD_U32(a1, 6632) = 0;
  FIELD_U32(a1, 6628) = 0;
  FIELD_U32(a1, 6624) = 0;
  FIELD_U32(a1, 6620) = 0;
  FIELD_U32(a1, 6616) = 0;
  FIELD_U32(a1, 6612) = 0;
  FIELD_U32(a1, 6608) = 0;
  FIELD_U32(a1, 6636) = 0x40000000;
  FIELD_U8(a1, 6640) = 0;
  FIELD_U32(a1, 6668) = 0;
  FIELD_U32(a1, 6664) = 0;
  FIELD_U32(a1, 6660) = 0;
  FIELD_U32(a1, 6656) = 0;
  FIELD_U32(a1, 6652) = 0;
  FIELD_U32(a1, 6648) = 0;
  FIELD_U32(a1, 6644) = 0;
  FIELD_U32(a1, 6672) = 0x40000000;
  FIELD_U8(a1, 6676) = 0;
  FIELD_U32(a1, 6704) = 0;
  FIELD_U32(a1, 6700) = 0;
  FIELD_U32(a1, 6696) = 0;
  FIELD_U32(a1, 6692) = 0;
  FIELD_U32(a1, 6688) = 0;
  FIELD_U32(a1, 6684) = 0;
  FIELD_U32(a1, 6680) = 0;
  FIELD_U32(a1, 6708) = 0x40000000;
  FIELD_U8(a1, 6712) = 0;
  FIELD_U32(a1, 6740) = 0;
  FIELD_U32(a1, 6736) = 0;
  FIELD_U32(a1, 6732) = 0;
  FIELD_U32(a1, 6728) = 0;
  FIELD_U32(a1, 6724) = 0;
  FIELD_U32(a1, 6720) = 0;
  FIELD_U32(a1, 6716) = 0;
  FIELD_U32(a1, 6744) = 0x40000000;
  FIELD_U8(a1, 6748) = 0;
  FIELD_U32(a1, 6776) = 0;
  FIELD_U32(a1, 6772) = 0;
  FIELD_U32(a1, 6768) = 0;
  FIELD_U32(a1, 6764) = 0;
  FIELD_U32(a1, 6760) = 0;
  FIELD_U32(a1, 6756) = 0;
  FIELD_U32(a1, 6752) = 0;
  FIELD_U32(a1, 6780) = 0x40000000;
  FIELD_U8(a1, 6784) = 0;
  FIELD_U32(a1, 6812) = 0;
  FIELD_U32(a1, 6808) = 0;
  FIELD_U32(a1, 6804) = 0;
  FIELD_U32(a1, 6800) = 0;
  FIELD_U32(a1, 6796) = 0;
  FIELD_U32(a1, 6792) = 0;
  FIELD_U32(a1, 6788) = 0;
  FIELD_U32(a1, 6816) = 0x40000000;
  FIELD_U8(a1, 6820) = 0;
  FIELD_U32(a1, 6824) = 0;
  FIELD_U32(a1, 6828) = 0;
  SolidOnTopCollider_ctor((SolidOnTopCollider *)(a1 + 6832));
  FIELD_U32(a1, 6832) = SolidOnTopColliderWrapper_vtable;
  memset(a1 + 7200, 0, 48);
  ColliderNode_ctor((ColliderNode *)(a1 + 7216));
  FIELD_U32(a1, 7268) = 0;
  FIELD_U32(a1, 7264) = 0;
  FIELD_U32(a1, 7260) = 0;
  FIELD_U32(a1, 7256) = 0;
  FIELD_U32(a1, 7252) = 0;
  FIELD_U32(a1, 7272) = 0;
  FIELD_U32(a1, 7276) = 0;
  FIELD_U32(a1, 7248) = 0;
  ColliderNode_ctor((ColliderNode *)(a1 + 7248));
  FIELD_U32(a1, 7212) = 0;
  FIELD_U32(a1, 7208) = 0;
  FIELD_U32(a1, 7204) = 0;
  FIELD_U32(a1, 7200) = 0;
  v3 = FIELD_U32(a1, 7136);
  v4 = FIELD_U32(a1, 7140);
  FIELD_U32(a1, 7244) = v4;
  FIELD_U32(a1, 7240) = v3;
  FIELD_U32(a1, 7276) = v4;
  FIELD_U32(a1, 7272) = v3;
  SolidOnTopCollider_setPointMetaRelated((SolidOnTopCollider *)(a1 + 6832), 1, a1 + 7200, a1 + 7216, v5);
  FIELD_U8(a1, 7280) = 0;
  FIELD_U32(a1, 7296) = 0;
  FIELD_U32(a1, 7292) = 0;
  FIELD_U32(a1, 7288) = 0;
  FIELD_U32(a1, 7284) = 0;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 7300));
  FIELD_U32(a1, 7300) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 7404));
  FIELD_U32(a1, 7404) = off_60BC1450;
  return a1;
}
