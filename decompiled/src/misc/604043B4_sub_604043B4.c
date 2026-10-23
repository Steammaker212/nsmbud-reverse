/* sub_604043B4
 * address: 0x604043B4   size: 688   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_604043B4(int a1)
{
  char v2; // r12
  int v3; // r0
  int v4; // r8
  int v5; // r9
  int v6; // r2
  int v7; // r1
  int v8; // r10
  int v9; // r5
  _BYTE v11[8]; // [sp+0h] [bp-30h] BYREF
  int v12; // [sp+8h] [bp-28h] BYREF
  int v13; // [sp+Ch] [bp-24h]

  FIELD_U32(a1, 2564) = FIELD_U32(a1, 384);
  FIELD_U32(a1, 444) = FIELD_U32(a1, 2640);
  FIELD_U32(a1, 2584) = FIELD_U32(a1, 2648);
  FIELD_U32(a1, 2576) = FIELD_U32(a1, 2580);
  FIELD_U32(a1, 452) = 0;
  FIELD_U32(a1, 456) = 0;
  FIELD_U32(a1, 460) = 0;
  FIELD_U8(a1, 2696) = 1;
  PlayerBase_dispatchVirtual3(FIELD_U32(a1, 16), 73);
  if ( ((unsigned int)&dword_60C9A044[2] & ~(1614824476 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9A044[2]) )
  {
    dword_60C9A120[0] = (int)"SE_VOC_MA_PJ_SPIN_JUMP";
    dword_60C9A124 = (int)"SE_VOC_LU_PJ_SPIN_JUMP";
    dword_60C9A128 = (int)"SE_VOC_KO_PJ_SPIN_JUMP";
    dword_60C9A12C = (int)"SE_VOC_KO2_PJ_SPIN_JUMP";
    dword_60C9A130 = (int)"SE_VOC_KO2_PJ_SPIN_JUMP";
    dword_60C9A134 = (int)"SE_VOC_TT_PJ_SPIN_JUMP";
    dword_60C9A138 = (int)"SE_VOC_KC_PJ_SPIN_JUMP";
    dword_60C9A13C = (int)"SE_VOC_MM1_PJ_SPIN_JUMP";
    dword_60C9A140 = (int)"SE_VOC_MM2_PJ_SPIN_JUMP";
    dword_60C9A144 = (int)"SE_VOC_MM3_PJ_SPIN_JUMP";
    dword_60C9A148 = (int)"SE_VOC_MM4_PJ_SPIN_JUMP";
    dword_60C9A14C = (int)"SE_VOC_MF1_PJ_SPIN_JUMP";
    dword_60C9A150 = (int)"SE_VOC_MF2_PJ_SPIN_JUMP";
    dword_60C9A154 = (int)"SE_VOC_MF3_PJ_SPIN_JUMP";
    dword_60C9A158 = (int)"SE_VOC_MF4_PJ_SPIN_JUMP";
    dword_60C9A15C = (int)"SE_VOC_KP_PJ_SPIN_JUMP";
    dword_60C9A160 = (int)"SE_VOC_MA_PJ_SPIN_JUMP_MAME";
    dword_60C9A164 = (int)"SE_VOC_LU_PJ_SPIN_JUMP_MAME";
    dword_60C9A168 = (int)"SE_VOC_KO_PJ_SPIN_JUMP_MAME";
    dword_60C9A16C = (int)"SE_VOC_KO2_PJ_SPIN_JUMP_MAME";
    dword_60C9A170 = (int)"SE_VOC_KO2_PJ_SPIN_JUMP_MAME";
    dword_60C9A174 = (int)"SE_VOC_TT_PJ_SPIN_JUMP_MAME";
    dword_60C9A178 = (int)"SE_VOC_KC_PJ_SPIN_JUMP_MAME";
    _cxa_guard_release(&dword_60C9A044[2]);
  }
  v3 = FIELD_U32(a1, 376);
  v4 = FIELD_U32(a1, 380);
  v5 = FIELD_U32(a1, 384);
  if ( v3 == 2 )
  {
    v6 = FIELD_U32(a1, 504);
    v3 = 3;
  }
  else if ( v3 == 3 )
  {
    v6 = FIELD_U32(a1, 504);
    v3 = 2;
  }
  else
  {
    if ( v3 >= 8 )
    {
      v12 = FIELD_U32(a1, 2548);
      v7 = sub_60814F00(&v12) + 1;
      goto LABEL_17;
    }
    if ( v3 == 6 )
    {
      v6 = FIELD_U32(a1, 504);
      v3 = 6;
      v7 = 15;
      if ( v6 == 9 )
        goto LABEL_17;
    }
    else
    {
      v6 = FIELD_U32(a1, 504);
    }
  }
  if ( v6 == 3 )
    v3 += 16;
  v7 = v3;
LABEL_17:
  v8 = FIELD_U32(a1, 180);
  FIELD_U32(a1, 180) = -1;
  v12 = v4;
  v13 = v5;
  v9 = dword_60C9A120[v7];
  sub_60024400((int)v11, (float *)&v12);
  sub_608141A0(a1 + 56, v9, v11, 0);
  FIELD_U32(a1, 180) = v8;
  v12 = v4;
  v13 = v5;
  sub_60024400((int)v11, (float *)&v12);
  sub_608141A0(a1 + 56, "SE_SYS_PJ_PLAYER_SPIN_JUMP", v11, 0);
  return skl_root_ref_402CB0(a1, 1);
}
