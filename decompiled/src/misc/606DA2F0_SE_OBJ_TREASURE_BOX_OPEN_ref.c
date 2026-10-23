/* SE_OBJ_TREASURE_BOX_OPEN_ref
 * address: 0x606DA2F0   size: 788   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_TREASURE_BOX_OPEN_ref(int a1)
{
  int v2; // r0
  float v3; // r1
  int v4; // r5
  char v5; // r12
  int v6; // r0
  int v7; // r2
  int v8; // r0
  unsigned int v9; // r1
  int v10; // r5
  unsigned int v11; // r0
  int v12; // r1
  int v13; // r5
  float v14; // s0
  Vec2 v16; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  v2 = FIELD_U32(a1, 6108);
  LODWORD(position.x) = &sead__SafeStringBase__vtable;
  LODWORD(position.y) = "open";
  sub_6040F4B8(v2, (int)&position, 0, 1.0, 0.0);
  v3 = FIELD_F32(a1, 112);
  v4 = Global_BasicSoundActor2;
  position.x = FIELD_F32(a1, 108);
  position.y = v3;
  mapPositionToScreen(&v16, &position);
  BasicSoundActor2_play(v4, "SE_OBJ_TREASURE_BOX_OPEN", &v16.x, 0);
  v6 = FIELD_U32(a1, 6512);
  if ( v6 == 1 )
  {
    v11 = FIELD_U8(a1, 6550);
    if ( v11 == 255 )
    {
      FIELD_U8(a1, 6570) = 1;
    }
    else
    {
      if ( FIELD_U8(a1, 6560) != 1 )
      {
        STRM_BGM_MG_BTL_ref_2(dword_60CC6B68, 1);
        FIELD_U8(a1, 6560) = 1;
        v11 = FIELD_U8(a1, 6550);
      }
      v12 = 0;
      if ( v11 < 4 )
        v12 = (char)v11;
      v13 = *(_DWORD *)(PlayerMgr_instance + 4 * v12 + 48);
      if ( ((unsigned int)&dword_60C7B37C & ~(1617798376 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
      {
        dword_60C7B378 = (int)&off_60BC00BC;
        _cxa_guard_release(&dword_60C7B37C);
      }
      if ( v13 && (**(int (__fastcall ***)(int, int *))v13)(v13, &dword_60C7B378) == 1 )
      {
        FIELD_U32(v13, 88) = 0;
        FIELD_U32(v13, 120) = 0;
        sub_60768D14(v13, FIELD_F32(v13, 108) >= FIELD_F32(a1, 108));
      }
    }
    FIELD_U32(dword_60C99D88, 32) = 1;
    FIELD_U8(dword_60CBFA90, 460) = 1;
  }
  else if ( !v6 && FIELD_U8(a1, 6569) )
  {
    v7 = 0;
    v8 = PlayerMgr_instance;
    FIELD_U32(PlayerMgr_instance, 144) = -1;
    v9 = FIELD_U8(a1, 6550);
    if ( v9 < 4 )
      v7 = (char)v9;
    v10 = *(_DWORD *)(v8 + 4 * v7 + 48);
    if ( ((unsigned int)&dword_60C7B37C & ~(1617798112 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( v10 && (**(int (__fastcall ***)(int, int *))v10)(v10, &dword_60C7B378) == 1 )
    {
      FIELD_U32(v10, 88) = 0;
      FIELD_U32(v10, 120) = 0;
    }
    sub_6077A268(dword_60CBFA90);
    sub_6077A270(dword_60CBFA90);
    sub_6077A348(dword_60CBFA90);
  }
  FIELD_U8(EnemyCounterMaybe_instance, 262) = 1;
  PlayerLookTargetList_add(PlayerLookTargetList_instance, a1 + 6608);
  v14 = FIELD_F32(a1, 112);
  FIELD_U32(a1, 6628) = FIELD_U32(a1, 108);
  FIELD_F32(a1, 6632) = v14 + 10.0;
  return a1 + 6632;
}
