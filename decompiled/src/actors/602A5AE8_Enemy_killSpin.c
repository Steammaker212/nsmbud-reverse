/* Enemy_killSpin
 * address: 0x602A5AE8   size: 240   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Enemy_killSpin(Enemy *this, StageActor *player)
{
  _BOOL4 v4; // r5
  char playerId; // r6
  char v6; // r12
  char *v7; // r0
  int v8; // r1
  _DWORD v10[5]; // [sp+0h] [bp-30h] BYREF
  char v11; // [sp+14h] [bp-1Ch]
  _BOOL4 v12; // [sp+18h] [bp-18h]
  char v13; // [sp+1Ch] [bp-14h]

  v4 = sub_6000ADDC((int)this, (int)player);
  playerId = FIELD_U8(player, 0x54);
  if ( ((unsigned int)&dword_60C907F4 & ~(1613388568 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C907F4) )
  {
    dword_60C9081C = 1.5;
    dword_60C90820 = 3.9;
    dword_60C90824 = -1.5;
    dword_60C90828 = 3.9;
    _cxa_guard_release(&dword_60C907F4);
  }
  v7 = (char *)&unk_60C907F0 + 8 * v4;
  v8 = *((_DWORD *)v7 + 11);
  v10[1] = *((_DWORD *)v7 + 12);
  v10[0] = v8;
  v10[2] = 0xC0800000;
  v10[3] = unk_60C906E8;
  v10[4] = &stru_60C90710;
  v11 = -1;
  v12 = v4;
  v13 = playerId;
  return sub_602A852C((int)&FIELD_F32(this, 0x17D8), v10);
}
