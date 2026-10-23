/* sub_6074AD24
 * address: 0x6074AD24   size: 896   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6074AD24(int a1)
{
  signed int result; // r0
  float v3; // s2
  float v4; // s0
  int v5; // r5
  int ActorSlotChecked; // r0
  bool v7; // zf
  int v8; // r0
  bool v9; // zf
  int v10; // r0
  bool v11; // zf
  int v12; // r0
  bool v13; // zf
  int v14; // r5
  int v15; // r0
  bool v16; // zf
  int v17; // r0
  bool v18; // zf
  int v19; // r0
  bool v20; // zf
  int v21; // r0
  bool v22; // zf
  _DWORD v23[6]; // [sp+8h] [bp-18h] BYREF

  result = FIELD_U32(a1, 648);
  switch ( result )
  {
    case 2:
      v5 = PlayerMgr_instance;
      if ( (FIELD_U8(a1, 1216) & 1) == 0 && (FIELD_U8(PlayerMgr_instance, 66) & 1) != 0 )
      {
        ActorSlotChecked = Player_getActorSlotChecked(PlayerMgr_instance, 0);
        v7 = ActorSlotChecked == 0;
        if ( ActorSlotChecked )
          v7 = (FIELD_U8(ActorSlotChecked, 6900) & 1) == 0;
        if ( !v7 )
        {
          sub_60768F98(ActorSlotChecked, 9);
          FIELD_U32(a1, 1216) |= 1u;
        }
      }
      if ( (FIELD_U8(a1, 1216) & 2) == 0 && (FIELD_U8(v5, 66) & 2) != 0 )
      {
        v8 = Player_getActorSlotChecked(v5, 1);
        v9 = v8 == 0;
        if ( v8 )
          v9 = (FIELD_U8(v8, 6900) & 1) == 0;
        if ( !v9 )
        {
          sub_60768F98(v8, 9);
          FIELD_U32(a1, 1216) |= 2u;
        }
      }
      if ( (FIELD_U8(a1, 1216) & 4) == 0 && (FIELD_U8(v5, 66) & 4) != 0 )
      {
        v10 = Player_getActorSlotChecked(v5, 2);
        v11 = v10 == 0;
        if ( v10 )
          v11 = (FIELD_U8(v10, 6900) & 1) == 0;
        if ( !v11 )
        {
          sub_60768F98(v10, 9);
          FIELD_U32(a1, 1216) |= 4u;
        }
      }
      if ( (FIELD_U8(a1, 1216) & 8) == 0 && (FIELD_U8(v5, 66) & 8) != 0 )
      {
        v12 = Player_getActorSlotChecked(v5, 3);
        v13 = v12 == 0;
        if ( v12 )
          v13 = (FIELD_U8(v12, 6900) & 1) == 0;
        if ( !v13 )
        {
          sub_60768F98(v12, 9);
          FIELD_U32(a1, 1216) |= 8u;
        }
      }
      result = FIELD_U32(a1, 644);
      if ( !result )
      {
        result = sub_607F6904(dword_60CC62E4);
        if ( !result )
        {
          sub_603FBE40(dword_60C99DD4);
          v23[0] = 2;
          v23[1] = sub_6018D250;
          return SceneMgr_doSceneChange(dword_60CC62E4, dword_60C99DD4, (int)v23, 0, 0);
        }
      }
      break;
    case 1:
      v14 = PlayerMgr_instance;
      if ( (FIELD_U8(PlayerMgr_instance, 66) & 1) != 0 )
      {
        v15 = Player_getActorSlotChecked(PlayerMgr_instance, 0);
        v16 = v15 == 0;
        if ( v15 )
          v16 = (FIELD_U8(v15, 6900) & 1) == 0;
        if ( !v16 )
        {
          sub_60768F98(v15, 8);
          FIELD_U32(a1, 1216) |= 1u;
        }
      }
      if ( (FIELD_U8(v14, 66) & 2) != 0 )
      {
        v17 = Player_getActorSlotChecked(v14, 1);
        v18 = v17 == 0;
        if ( v17 )
          v18 = (FIELD_U8(v17, 6900) & 1) == 0;
        if ( !v18 )
        {
          sub_60768F98(v17, 8);
          FIELD_U32(a1, 1216) |= 2u;
        }
      }
      if ( (FIELD_U8(v14, 66) & 4) != 0 )
      {
        v19 = Player_getActorSlotChecked(v14, 2);
        v20 = v19 == 0;
        if ( v19 )
          v20 = (FIELD_U8(v19, 6900) & 1) == 0;
        if ( !v20 )
        {
          sub_60768F98(v19, 8);
          FIELD_U32(a1, 1216) |= 4u;
        }
      }
      if ( (FIELD_U8(v14, 66) & 8) != 0 )
      {
        v21 = Player_getActorSlotChecked(v14, 3);
        v22 = v21 == 0;
        if ( v21 )
          v22 = (FIELD_U8(v21, 6900) & 1) == 0;
        if ( !v22 )
        {
          sub_60768F98(v21, 8);
          FIELD_U32(a1, 1216) |= 8u;
        }
      }
      FIELD_U32(a1, 648) = 2;
      return 2;
    case 0:
      result = a1 + 1204;
      v3 = FIELD_F32(a1, 1188) + FIELD_F32(a1, 1204);
      FIELD_F32(a1, 1204) = v3;
      v4 = FIELD_F32(dword_60CC6484, 128);
      if ( v3 >= v4 )
      {
        *(float *)result = v4;
        FIELD_U32(a1, 644) = 300;
        FIELD_U32(a1, 648) = 1;
        sub_60008EB4(ActorMgr__instance + 27168, sub_6074C894);
        return sub_6077A260(dword_60CBFA90);
      }
      break;
  }
  return result;
}
