/* Enemy__collisionFireballYoshi
 * address: 0x602A6FC4   size: 344   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x60382EF4 : Pokey
signed int __fastcall Enemy__collisionFireballYoshi(int a1, int a2, int a3)
{
  int v4; // r0
  int v5; // r1
  StageActor *v7; // r7
  _BOOL4 v8; // r8
  char playerId; // r9
  char v10; // r6
  char v11; // r12
  char *v12; // r0
  int v13; // r1
  int v15; // [sp+0h] [bp-40h] BYREF
  int v16; // [sp+4h] [bp-3Ch]
  int v17; // [sp+8h] [bp-38h]
  int v18; // [sp+Ch] [bp-34h]
  StateVirtual *v19; // [sp+10h] [bp-30h]
  char v20; // [sp+14h] [bp-2Ch]
  _BOOL4 v21; // [sp+18h] [bp-28h]
  char v22; // [sp+1Ch] [bp-24h]

  v4 = FIELD_U32(a2, 84);
  v5 = FIELD_U32(a2, 88);
  v15 = v4;
  v16 = v5;
  v17 = 0;
  sub_602A38A4(a1, (float *)&v15);
  v7 = *(StageActor **)(a3 + 64);
  v8 = sub_6000ADDC(a1, (int)v7);
  playerId = FIELD_U8(v7, 0x54);
  SE_EMY_KAME_HIT_ref((int)v7, FIELD_U32(v7, 0x234), FIELD_U32(a1, 6292) == 2);
  sub_60000A18(v7);
  v10 = sub_602856EC((int *)(a1 + 6292), FIELD_U32(v7, 0x234));
  if ( ((unsigned int)&dword_60C907F4 & ~(1613394012 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C907F4) )
  {
    dword_60C9081C = 1.5;
    dword_60C90820 = 3.9;
    dword_60C90824 = -1.5;
    dword_60C90828 = 3.9;
    _cxa_guard_release(&dword_60C907F4);
  }
  v12 = (char *)&unk_60C907F0 + 8 * v8;
  v13 = *((_DWORD *)v12 + 11);
  v16 = *((_DWORD *)v12 + 12);
  v15 = v13;
  v17 = -1065353216;
  v18 = unk_60C906E8;
  v19 = &stru_60C90710;
  v20 = v10;
  v21 = v8;
  v22 = playerId;
  sub_602A852C(a1 + 6104, &v15);
  return 1;
}
