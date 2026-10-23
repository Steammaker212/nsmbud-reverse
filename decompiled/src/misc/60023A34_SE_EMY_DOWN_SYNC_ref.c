/* SE_EMY_DOWN_SYNC_ref
 * address: 0x60023A34   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall SE_EMY_DOWN_SYNC_ref(unsigned int a1, float *a2)
{
  char v2; // r12
  const char *v5; // r1
  float v6; // s2
  float v7[6]; // [sp+0h] [bp-18h] BYREF

  if ( ((unsigned int)algn_60C7F55C & ~(1610758744 << v2) & 1) == 0 && _cxa_guard_acquire((__guard *)algn_60C7F55C) )
  {
    dword_60C7F560 = (int)"SE_EMY_DOWN_SYNC_1";
    dword_60C7F564 = (int)"SE_EMY_DOWN_SYNC_2";
    dword_60C7F568 = (int)"SE_EMY_DOWN_SYNC_3";
    dword_60C7F56C = (int)"SE_EMY_DOWN_SYNC_4";
    dword_60C7F570 = (int)"SE_EMY_DOWN_SYNC_5";
    dword_60C7F574 = (int)"SE_EMY_DOWN_SYNC_6";
    dword_60C7F578 = (int)"SE_EMY_DOWN_SYNC_7";
    _cxa_guard_release((__guard *)algn_60C7F55C);
  }
  if ( a1 <= 6 )
  {
    v5 = *(const char **)&word_60C7F550[2 * a1 + 8];
    v6 = (float)((float)(a2[1] - FIELD_F32(dword_60CC6484, 128)) + (float)(a2[1] - FIELD_F32(dword_60CC6484, 128)))
       / FIELD_F32(dword_60CC6484, 108);
    v7[0] = (float)((float)(*a2 - FIELD_F32(dword_60CC6484, 116)) + (float)(*a2 - FIELD_F32(dword_60CC6484, 116)))
          / FIELD_F32(dword_60CC6484, 104);
    v7[1] = v6;
    BasicSoundActor1_playSound(Global_BasicSoundActor1, v5, (int)v7, 0);
  }
}
