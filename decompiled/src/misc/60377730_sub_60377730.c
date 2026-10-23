/* sub_60377730
 * address: 0x60377730   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60377730(int a1, int a2)
{
  int v4; // r7
  int Area; // r5
  unsigned int v6; // r8
  unsigned int v7; // r10
  int v8; // r9
  int v9; // r11
  int v10; // r6
  int v11; // r0
  int v12; // r5
  int v13; // r7
  int v15; // [sp+4h] [bp-6Ch]
  int v16; // [sp+8h] [bp-68h]
  ActorBuildInfo v17[2]; // [sp+Ch] [bp-64h] BYREF

  v4 = FIELD_U8(LevelInfo_instance, 19);
  Area = Level_getArea(Level_instance, FIELD_U8(LevelInfo_instance, 18));
  v6 = FIELD_U16(a2, 4);
  v7 = FIELD_U16(a2, 2);
  v16 = sub_6082F324(FIELD_U32(a2, 8));
  v8 = sub_6082F31C(FIELD_U32(a2, 8));
  v15 = FIELD_U8(a1, 112);
  v9 = FIELD_U32(a1, 116);
  v10 = sub_6082F32C(FIELD_U32(a2, 8));
  v11 = sub_60727D48(Area, v4);
  v12 = 0;
  v13 = FIELD_U8(v11, 11) == 0;
  if ( FIELD_U8(dword_60CC6D78, 109032) )
    v12 = FIELD_U8(dword_60CC6D78, 109033) << 24;
  memset(&v17[0].settings2, 0, 40);
  v17[0].settings1 = v16 | (v8 << 8) | (v9 << 16) | (v15 << 20) | (v10 << 22) | (v13 << 21) | v12;
  v17[0].profile = Profile__get(0x1CBu);
  v17[0].position.x = (float)v7 + 8.0;
  v17[0].position.y = -16.0 - (float)v6;
  v17[0].position.z = 0.0;
  return ActorMgr__create((void *)ActorMgr__instance, v17, 0) != 0;
}
