/* sub_600C5D7C
 * address: 0x600C5D7C   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600C5D7C(int a1, int a2)
{
  char v2; // r12
  char v5; // r12
  const char *v6; // r1
  int v7; // r0

  if ( ((unsigned int)dword_60C83C20 & ~(1611423128 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C83C20) )
  {
    dword_60C83CF0 = (int)"SE_BOSS_CMN_DAMAGE_FIRE";
    dword_60C83CF4 = (int)"SE_BOSS_CMN_DAMAGE_FIRE_LAST";
    dword_60C83CF8 = (int)"SE_BOSS_CMN_DAMAGE_STAR_DEF";
    dword_60C83CFC = (int)"SE_BOSS_CMN_DAMAGE_LAST_F_MODE";
    dword_60C83D00 = (int)"SE_BOSS_CMN_DAMAGE_FIRE";
    dword_60C83D04 = (int)"SE_BOSS_CMN_DAMAGE_FIRE_LAST";
    _cxa_guard_release(dword_60C83C20);
  }
  sub_608134CC(a1 + 6332, *((_DWORD *)&unk_60C83CA0 + a2 + 20), FIELD_S16(a1, 6640), 0);
  if ( ((unsigned int)&dword_60C83C20[1] & ~(1611423292 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C83C20[1]) )
  {
    dword_60C83D10[0] = (int)"SE_VOC_KP_DAMAGE_FEVER";
    dword_60C83D14 = (int)"SE_VOC_KP_LOSE_BY_FIRE";
    dword_60C83D18 = (int)"SE_VOC_KP_DAMAGE_HPDP";
    dword_60C83D1C = (int)"SE_VOC_KP_LOSE_BY_HPDP";
    dword_60C83D20 = (int)"SE_VOC_KP_DAMAGE_FEVER";
    dword_60C83D24 = (int)"SE_VOC_KP_LOSE_BY_FIRE";
    _cxa_guard_release(&dword_60C83C20[1]);
  }
  v6 = (const char *)dword_60C83D10[a2];
  if ( (a2 | 4) == 4 )
  {
    v7 = FIELD_U32(a1, 6300);
    if ( v7 == 20 )
    {
      v6 = "SE_VOC_KP_DAMAGE_FIRST";
    }
    else if ( v7 == 10 )
    {
      v6 = "SE_VOC_KP_DAMAGE_SECOND";
    }
  }
  return sub_60813430(a1 + 6332, v6, 0);
}
