/* SE_VOC_ref
 * address: 0x60403590   size: 536   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_VOC_ref(int a1)
{
  char v1; // r12
  int v3; // r0
  float v4; // r8
  float v5; // r6
  int v6; // r2
  int v7; // r1
  int v8; // r7
  int v9; // r5
  int result; // r0
  _BYTE v11[8]; // [sp+0h] [bp-28h] BYREF
  float v12[8]; // [sp+8h] [bp-20h] BYREF

  if ( ((unsigned int)&unk_60C9A040 & ~(1614820780 << v1) & 1) == 0 && _cxa_guard_acquire((__guard *)&unk_60C9A040) )
  {
    dword_60C9A05C = (int)"SE_VOC_MA_PLAYER_JOIN";
    dword_60C9A060 = (int)"SE_VOC_LU_PLAYER_JOIN";
    dword_60C9A064 = (int)"SE_VOC_KO_PLAYER_JOIN";
    dword_60C9A068 = (int)"SE_VOC_KO2_PLAYER_JOIN";
    dword_60C9A06C = (int)"SE_VOC_KO2_PLAYER_JOIN";
    dword_60C9A070 = (int)"SE_VOC_TT_PLAYER_JOIN";
    dword_60C9A074 = (int)"SE_VOC_KC_PLAYER_JOIN";
    dword_60C9A078 = (int)"SE_VOC_MM1_PLAYER_JOIN";
    dword_60C9A07C = (int)"SE_VOC_MM2_PLAYER_JOIN";
    dword_60C9A080 = (int)"SE_VOC_MM3_PLAYER_JOIN";
    dword_60C9A084 = (int)"SE_VOC_MM4_PLAYER_JOIN";
    dword_60C9A088 = (int)"SE_VOC_MF1_PLAYER_JOIN";
    dword_60C9A08C = (int)"SE_VOC_MF2_PLAYER_JOIN";
    dword_60C9A090 = (int)"SE_VOC_MF3_PLAYER_JOIN";
    dword_60C9A094 = (int)"SE_VOC_MF4_PLAYER_JOIN";
    dword_60C9A098 = (int)"SE_VOC_KP_PLAYER_JOIN";
    dword_60C9A09C = (int)"SE_VOC_MA_PLAYER_JOIN_MAME";
    dword_60C9A0A0 = (int)"SE_VOC_LU_PLAYER_JOIN_MAME";
    dword_60C9A0A4 = (int)"SE_VOC_KO_PLAYER_JOIN_MAME";
    dword_60C9A0A8 = (int)"SE_VOC_KO2_PLAYER_JOIN_MAME";
    dword_60C9A0AC = (int)"SE_VOC_KO2_PLAYER_JOIN_MAME";
    dword_60C9A0B0 = (int)"SE_VOC_TT_PLAYER_JOIN_MAME";
    dword_60C9A0B4 = (int)"SE_VOC_KC_PLAYER_JOIN_MAME";
    _cxa_guard_release((__guard *)&unk_60C9A040);
  }
  v3 = FIELD_U32(a1, 376);
  if ( v3 == 2 )
  {
    v3 = 3;
    goto LABEL_8;
  }
  if ( v3 == 3 )
  {
    v3 = 2;
LABEL_8:
    v4 = FIELD_F32(a1, 380);
    v5 = FIELD_F32(a1, 384);
    goto LABEL_9;
  }
  v4 = FIELD_F32(a1, 380);
  v5 = FIELD_F32(a1, 384);
  if ( v3 >= 8 )
  {
    v12[0] = FIELD_F32(a1, 2548);
    v7 = sub_60814F00(v12) + 1;
    goto LABEL_13;
  }
  if ( v3 == 6 )
  {
    v6 = FIELD_U32(a1, 504);
    v3 = 6;
    v7 = 15;
    if ( v6 == 9 )
      goto LABEL_13;
    goto LABEL_10;
  }
LABEL_9:
  v6 = FIELD_U32(a1, 504);
LABEL_10:
  if ( v6 == 3 )
    v3 += 16;
  v7 = v3;
LABEL_13:
  v8 = FIELD_U32(a1, 180);
  FIELD_U32(a1, 180) = -1;
  v12[0] = v4;
  v12[1] = v5;
  v9 = *((_DWORD *)&unk_60C9A040 + v7 + 7);
  sub_60024400((int)v11, v12);
  result = sub_608141A0(a1 + 56, v9, v11, 0);
  FIELD_U32(a1, 180) = v8;
  return result;
}
