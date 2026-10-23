/* sub_6073D120
 * address: 0x6073D120   size: 476   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6073D120(Enemy *a1)
{
  unsigned int settings1; // r0
  float y; // s16
  float x; // s18
  int z_low; // r6
  float posY; // r1
  float posX; // r0
  TileCheck *checkStructPtr; // r0
  TileCheck_Result resultStruct; // [sp+8h] [bp-B8h] BYREF
  Vec2 checkPosOffset; // [sp+30h] [bp-90h] BYREF
  Vec2 checkPos; // [sp+38h] [bp-88h] BYREF
  TileCheck v13; // [sp+40h] [bp-80h] BYREF
  TileCheck_Param param; // [sp+8Ch] [bp-34h] BYREF

  settings1 = FIELD_U32(a1, 0x14);
  a1[1]._._.collisionMgr[1108] = (settings1 & 0xF) - 1;
  a1[1]._._.collisionMgr[1109] = ((unsigned __int8)settings1 >> 4) - 1;
  *(_DWORD *)&a1[1]._._.collisionMgr[1104] = (settings1 >> 8) & 0x1F;
  sub_605D7738((int)a1);
  FIELD_U32(a1, 0xA0) = -1073741824;
  FIELD_U32(a1, 0x50) = 1;
  y = FIELD_F32(a1, 0x70);
  x = FIELD_F32(a1, 0x6C);
  z_low = LODWORD(FIELD_F32(a1, 0x74));
  memset(&v13.field_4, 0, 40);
  *(_DWORD *)&v13.field_0 = ((unsigned int)FIELD_U32(a1, 0x14) >> 8) & 0x1F;
  v13.field_8 = FIELD_U32(a1, 0x8);
  v13.field_C = (int)Profile__get(0x33Cu);
  *(float *)&v13.field_10 = x + -20.0;
  *(float *)&v13.field_14 = y + 16.0;
  v13.field_18 = z_low;
  *(_DWORD *)&a1[1]._._.collisionMgr[1136] = *((_DWORD *)ActorMgr__create(
                                                           (void *)ActorMgr__instance,
                                                           (ActorBuildInfo *)&v13,
                                                           0)
                                             + 2);
  posY = FIELD_F32(a1, 0x70);
  posX = FIELD_F32(a1, 0x6C);
  resultStruct.field_C = 0;
  resultStruct.field_10 = 0;
  *(_WORD *)&param.field_0 = 0;
  checkPos.x = posX;
  checkPos.y = posY;
  checkPosOffset.x = posX;
  checkPosOffset.y = posY + -16.0;
  param.field_2 = FIELD_U8(a1, 0x56);
  param.field_3 = FIELD_U8(a1, 0x57);
  param.field_4 = 0;
  param.field_8 = 0;
  checkStructPtr = TileCheck_ctor(&v13, &param);
  if ( TileCheck_check(checkStructPtr, &resultStruct, &checkPos, &checkPosOffset, 15) == 1 )
    FIELD_F32(a1, 0x70) = resultStruct.field_8;
  ((void (__fastcall *)(StateWrapper *, _DWORD, float, float, float))loc_605EA46C)(&FIELD_U32(a1, 0x17B0), 0, 0.0, 1.0, 0.0);
  FIELD_U32(a1, 0x1874) |= 0x1000000u;
  FIELD_U32(a1, 0x187C) |= 0x18u;
  ActiveCollider__init(
    (ActiveCollider *)&a1[1]._._.collisionMgr[1148],
    &FIELD_U32(a1, 0x0),
    (ActiveColliderInfo *)&unk_60C22E18,
    0);
  sub_605D79D0((int)a1, (StateBase *)&dword_60CBE110, 0);
  return 1;
}
