/* sub_60686CBC
 * address: 0x60686CBC   size: 484   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60686CBC(int a1)
{
  float v2; // s0
  float v3; // s2
  int v4; // r5
  _BYTE *v5; // r6
  float v6; // s0
  char v7; // r0
  _BYTE *v8; // r5
  __int16 v9; // r0
  unsigned __int8 v10; // r0
  int result; // r0

  v2 = FIELD_F32(a1, 112);
  v3 = FIELD_F32(a1, 7628);
  FIELD_U32(a1, 7660) = -1031798784;
  v4 = a1 + 7660;
  FIELD_U32(a1, 7664) = 1115684864;
  v5 = (_BYTE *)(a1 + 648);
  FIELD_F32(a1, 7668) = (float)(v3 - v2) + -112.0;
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), (CollisionMgr_Sensor *)(a1 + 7660), 3);
  CollisionMgr_process(v5, v6);
  v7 = *(_BYTE *)(v4 - 4788);
  v8 = (_BYTE *)(v4 + 12);
  if ( (v7 & 1) != 0 )
  {
    if ( !*v8 )
    {
      AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 13, 3, 0, 0);
      AreaRumbleMgr_rumble2(AreaRumbleMgr_instance, 1, 3, 0);
    }
    *v8 = 1;
  }
  sub_60688374(a1);
  FIELD_U32(dword_60CC6484, 264) = FIELD_U32(a1, 7636);
  if ( *v8 )
  {
    v9 = FIELD_U16(a1, 7684) + 1;
    FIELD_U16(a1, 7684) = v9;
    if ( v9 >= 81 && !(v9 % 30) )
    {
      SE_BOSS_JR_BOMB_BURST_ref_2(a1);
      v10 = FIELD_U8(a1, 7686) + 1;
      if ( v10 > 7u )
        v10 = 0;
      FIELD_U8(a1, 7686) = v10;
    }
  }
  result = FIELD_U8(a1, 7682);
  if ( FIELD_U8(a1, 7682) )
  {
    result = FIELD_U16(a1, 7680) - 1;
    FIELD_U16(a1, 7680) = result;
    if ( !(_WORD)result )
    {
      *(_BYTE *)(*(_DWORD *)(FIELD_U32(a1, 7608) + 7624) + 6997) = 1;
      sub_60400BE4(AreaRumbleMgr_instance);
      return sub_603F48B0(AreaTask_intance);
    }
  }
  return result;
}
