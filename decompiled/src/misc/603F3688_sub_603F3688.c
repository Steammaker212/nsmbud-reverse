/* sub_603F3688
 * address: 0x603F3688   size: 520   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F3688(int a1)
{
  int result; // r0
  bool v3; // zf
  float v4; // r1
  float v5; // r2
  float v6; // r3
  float v7; // s2
  float v8; // s4
  int v9; // r0
  _DWORD v10[2]; // [sp+8h] [bp-28h] BYREF
  float v11; // [sp+10h] [bp-20h] BYREF
  float v12; // [sp+14h] [bp-1Ch]
  float v13; // [sp+18h] [bp-18h]
  float v14; // [sp+1Ch] [bp-14h]

  result = sub_608194EC((_BYTE *)dword_60CC6BE4, a1);
  v3 = result == 0;
  if ( !result )
  {
    result = FIELD_U8(a1, 193);
    v3 = result == 0;
  }
  if ( v3 )
  {
    if ( !FIELD_U8(a1, 195) )
      sub_603F2858(a1);
    switch ( FIELD_U32(a1, 1832) )
    {
      case 0:
        sub_603F38C8(a1);
        break;
      case 1:
        sub_603F41B8(a1);
        break;
      case 2:
        sub_603E557C((_DWORD *)dword_60C995D0);
        sub_60153D08((int)ColliderMgr_instance);
        sub_607FC518(dword_60CC6484, 1);
        sub_600087D8((void *)ActorMgr__instance);
        STRM_BGM_ODAI_CLEAR_ref(PlayerMgr_instance);
        sub_60238B84(dword_60C8D9DC, 0);
        break;
      case 4:
        FIELD_U32(a1, 1832) = FIELD_U32(a1, 1836);
        break;
      default:
        break;
    }
    v4 = FIELD_F32(dword_60CC6484, 136);
    v5 = FIELD_F32(dword_60CC6484, 140);
    v6 = FIELD_F32(dword_60CC6484, 144);
    v14 = FIELD_F32(dword_60CC6484, 148);
    v11 = v4;
    v12 = v5;
    v13 = v6;
    v7 = FIELD_F32(AreaRumbleMgr_instance, 76);
    v8 = FIELD_F32(AreaRumbleMgr_instance, 80);
    v11 = v7 + v4;
    v12 = v8 + v5;
    v13 = v7 + v6;
    v14 = v8 + v14;
    sub_60442EF4(DrawMgr_instance, &v11);
    sub_60442F18(DrawMgr_instance);
    sub_6071FFF4(dword_60CBD830);
    result = FIELD_U8(a1, 1861);
    if ( FIELD_U8(a1, 1861) )
    {
      FIELD_U8(dword_60C9CF0C, 1406) = 1;
      v9 = dword_60CC62E4;
      FIELD_U32(dword_60CC62E4, 128) = 70;
      v10[0] = 2;
      v10[1] = AreaTask_create;
      SceneMgr_doSceneChange(v9, a1, (int)v10, 0, 0);
      FIELD_U32(a1, 1832) = 3;
      return 3;
    }
  }
  return result;
}
