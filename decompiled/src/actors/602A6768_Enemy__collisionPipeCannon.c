/* Enemy__collisionPipeCannon
 * address: 0x602A6768   size: 348   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x60259D3C : Amp
signed int __fastcall Enemy__collisionPipeCannon(int a1, int a2, int a3)
{
  int v4; // r0
  int v5; // r1
  int v7; // r7
  _BOOL4 v8; // r8
  char v9; // r9
  int v10; // r0
  char v11; // r6
  char v12; // r12
  char *v13; // r0
  int v14; // r1
  int v16; // [sp+0h] [bp-40h] BYREF
  int v17; // [sp+4h] [bp-3Ch]
  int v18; // [sp+8h] [bp-38h]
  int v19; // [sp+Ch] [bp-34h]
  StateVirtual *v20; // [sp+10h] [bp-30h]
  char v21; // [sp+14h] [bp-2Ch]
  _BOOL4 v22; // [sp+18h] [bp-28h]
  char v23; // [sp+1Ch] [bp-24h]

  v4 = FIELD_U32(a2, 84);
  v5 = FIELD_U32(a2, 88);
  v16 = v4;
  v17 = v5;
  v18 = 0;
  sub_602A38A4(a1, (float *)&v16);
  v7 = FIELD_U32(a3, 64);
  v8 = sub_6000ADDC(a1, v7);
  v9 = FIELD_U8(v7, 84);
  SE_EMY_KAME_HIT_ref(v7, FIELD_S8(v7, 1314), FIELD_U32(a1, 6292) == 2);
  v10 = sub_602855F4(v7);
  v11 = sub_602856EC((int *)(a1 + 6292), v10);
  if ( ((unsigned int)&dword_60C907F4 & ~(1613391876 << v12) & 1) == 0 && _cxa_guard_acquire(&dword_60C907F4) )
  {
    dword_60C9081C = 1.5;
    dword_60C90820 = 3.9;
    dword_60C90824 = -1.5;
    dword_60C90828 = 3.9;
    _cxa_guard_release(&dword_60C907F4);
  }
  v13 = (char *)&unk_60C907F0 + 8 * v8;
  v14 = *((_DWORD *)v13 + 11);
  v17 = *((_DWORD *)v13 + 12);
  v16 = v14;
  v18 = -1065353216;
  v19 = unk_60C906E8;
  v20 = &stru_60C90710;
  v21 = v11;
  v22 = v8;
  v23 = v9;
  sub_602A852C(a1 + 6104, &v16);
  return 1;
}
