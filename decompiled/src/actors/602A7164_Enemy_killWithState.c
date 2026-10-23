/* Enemy_killWithState
 * address: 0x602A7164   size: 112   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Enemy_killWithState(Enemy *this, StageActor *player, Vec2 *speed, int state)
{
  _BOOL4 v8; // r0
  char playerId; // r1
  float y; // r3
  Vec2 v12; // [sp+0h] [bp-38h] BYREF
  int v13; // [sp+8h] [bp-30h]
  int v14; // [sp+Ch] [bp-2Ch]
  int v15; // [sp+10h] [bp-28h]
  char v16; // [sp+14h] [bp-24h]
  _BOOL4 v17; // [sp+18h] [bp-20h]
  char v18; // [sp+1Ch] [bp-1Ch]

  v8 = sub_6000ADDC((int)this, (int)player);
  playerId = FIELD_U8(player, 0x54);
  y = FIELD_F32(speed, 0x4);
  v12.x = FIELD_F32(speed, 0x0);
  v12.y = y;
  v13 = -1065353216;
  v14 = unk_60C906E8;
  v15 = state;
  v16 = -1;
  v17 = v8;
  v18 = playerId;
  return sub_602A852C((int)&FIELD_F32(this, 0x17D8), &v12);
}
