/* sub_606AB924
 * address: 0x606AB924   size: 1040   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_606AB924(int a1)
{
  char v1; // r12
  unsigned int v3; // r0
  int v4; // r8
  int tileWidth; // r5
  float width; // s16
  Profile *v7; // r6
  int ResArchiveById; // r7
  int v9; // r0
  SolidOnTopColliderInfo info; // [sp+8h] [bp-58h] BYREF
  Vec2 poins[2]; // [sp+20h] [bp-40h] BYREF

  if ( ((unsigned int)&unk_60CB9FC0 & ~(1617606980 << v1) & 1) == 0 && _cxa_guard_acquire((__guard *)&unk_60CB9FC0) )
  {
    dword_60CB9EB8[0] = -1027604480;
    unk_60CB9EBC = -8.0 + -96.0;
    unk_60CB9EC0 = -16.0 + -96.0;
    unk_60CB9EC4 = -24.0 + -96.0;
    unk_60CB9EC8 = -32.0 + -96.0;
    unk_60CB9ECC = -40.0 + -96.0;
    unk_60CB9ED0 = -48.0 + -96.0;
    unk_60CB9ED4 = -56.0 + -96.0;
    unk_60CB9ED8 = -64.0 + -96.0;
    unk_60CB9EDC = -72.0 + -96.0;
    unk_60CB9EE0 = -80.0 + -96.0;
    unk_60CB9EE4 = -88.0 + -96.0;
    unk_60CB9EE8 = -96.0 + -96.0;
    unk_60CB9EEC = -104.0 + -96.0;
    unk_60CB9EF0 = -112.0 + -96.0;
    unk_60CB9EF4 = -120.0 + -96.0;
    dword_60CB9EF8 = -985546752;
    dword_60CB9EFC = -985513984;
    dword_60CB9F00 = -985481216;
    dword_60CB9F04 = -985448448;
    dword_60CB9F08 = -985415680;
    dword_60CB9F0C = -985382912;
    dword_60CB9F10 = -985350144;
    dword_60CB9F14 = -985317376;
    dword_60CB9F18 = -985284608;
    dword_60CB9F1C = -985251840;
    dword_60CB9F20 = -985219072;
    dword_60CB9F24 = -985186304;
    dword_60CB9F28 = -985153536;
    dword_60CB9F2C = -985120768;
    dword_60CB9F30 = -985088000;
    dword_60CB9F34 = -985055232;
    dword_60CB9F38 = -981860352;
    dword_60CB9F3C = -981827584;
    dword_60CB9F40 = -981794816;
    dword_60CB9F44 = -981762048;
    dword_60CB9F48 = -981729280;
    dword_60CB9F4C = -981696512;
    dword_60CB9F50 = -981663744;
    dword_60CB9F54 = -981630976;
    dword_60CB9F58 = -981598208;
    dword_60CB9F5C = -981565440;
    dword_60CB9F60 = -981532672;
    dword_60CB9F64 = -981499904;
    dword_60CB9F68 = -981467136;
    dword_60CB9F6C = -981450752;
    dword_60CB9F70 = -981434368;
    dword_60CB9F74 = -981417984;
    dword_60CB9F78 = -1027604480;
    unk_60CB9F7C = -8.0 + -96.0;
    unk_60CB9F80 = -16.0 + -96.0;
    unk_60CB9F84 = -24.0 + -96.0;
    unk_60CB9F88 = -32.0 + -96.0;
    unk_60CB9F8C = -40.0 + -96.0;
    unk_60CB9F90 = -48.0 + -96.0;
    unk_60CB9F94 = -56.0 + -96.0;
    unk_60CB9F98 = -64.0 + -96.0;
    unk_60CB9F9C = -72.0 + -96.0;
    unk_60CB9FA0 = -80.0 + -96.0;
    unk_60CB9FA4 = -88.0 + -96.0;
    unk_60CB9FA8 = -96.0 + -96.0;
    unk_60CB9FAC = -104.0 + -96.0;
    unk_60CB9FB0 = -112.0 + -96.0;
    unk_60CB9FB4 = -120.0 + -96.0;
    _cxa_guard_release((__guard *)&unk_60CB9FC0);
  }
  v3 = FIELD_U32(a1, 20);
  FIELD_U32(a1, 116) = *(int *)((char *)&dword_60CB9EB8[16 * (v3 & 3)] + ((v3 >> 2) & 0x3C));
  v4 = *((_DWORD *)&unk_60CB9FC0 + ((v3 >> 20) & 0xF) + 4);
  FIELD_U32(a1, 164) = v4;
  FIELD_U32(a1, 492) = 1119879168;
  FIELD_U32(a1, 496) = 1107296256;
  tileWidth = ((FIELD_U32(a1, 24) >> 8) & 0xF) + 1;
  if ( (unsigned int)tileWidth <= 2 )
    tileWidth = 2;
  width = (float)tileWidth * 16.0;
  FIELD_F32(a1, 572) = width * 0.5;
  FIELD_U32(a1, 576) = 0;
  FIELD_U32(a1, 580) = 0;
  v7 = *(Profile **)(a1 + 12);
  ResArchiveById = Profile__getResArchiveById(v7, 0);
  v9 = Profile__getResArchiveById(v7, 1u);
  sub_6069D2D0((_DWORD *)(a1 + 0x1800), ResArchiveById, v9, tileWidth);
  info.field_0 = width * 0.5;
  memset(&info.field_4, 0, 12);
  poins[0].x = width * -0.5;
  poins[0].y = 128.0;
  poins[1].x = width * 0.5;
  poins[1].y = 128.0;
  info.points = poins;
  info.rotation = v4;
  SolidOnTopCollider_init2((SolidOnTopCollider *)(a1 + 0x1830), (StageActor *)a1, &info, 2, 0);
  if ( (FIELD_U8(a1, 0x17) & 1) != 0 )
    FIELD_U32(a1, 0x1910) = 5;
  return 1;
}
