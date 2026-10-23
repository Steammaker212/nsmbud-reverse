/* Enemy__collisionHammer
 * address: 0x602A6DF4   size: 432   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x60264B70 : BrosBase
signed int __fastcall Enemy__collisionHammer(Enemy *a1, int a2, int a3)
{
  int v4; // r0
  int v5; // r1
  int v7; // r6
  _BOOL4 v8; // r5
  char v9; // r8
  char v10; // r6
  char v11; // r12
  char *v12; // r0
  int v13; // r1
  float v15[4]; // [sp+0h] [bp-50h] BYREF
  char v16; // [sp+10h] [bp-40h]
  char v17; // [sp+11h] [bp-3Fh]
  char v18; // [sp+12h] [bp-3Eh]
  char v19; // [sp+13h] [bp-3Dh]
  char v20; // [sp+14h] [bp-3Ch]
  char v21; // [sp+15h] [bp-3Bh]
  char v22; // [sp+16h] [bp-3Ah]
  int v23; // [sp+18h] [bp-38h] BYREF
  int v24; // [sp+1Ch] [bp-34h]
  int v25; // [sp+20h] [bp-30h]
  int v26; // [sp+24h] [bp-2Ch]
  StateVirtual *v27; // [sp+28h] [bp-28h]
  char v28; // [sp+2Ch] [bp-24h]
  _BOOL4 v29; // [sp+30h] [bp-20h]
  char v30; // [sp+34h] [bp-1Ch]

  v4 = FIELD_U32(a2, 84);
  v5 = FIELD_U32(a2, 88);
  v23 = v4;
  v24 = v5;
  v25 = 0;
  sub_602A38A4((int)a1, &v23);
  v7 = FIELD_U32(a3, 64);
  v8 = sub_6000ADDC((int)a1, v7);
  v9 = FIELD_U8(v7, 84);
  (*(void (__fastcall **)(Enemy *))(FIELD_U32(a1, 0x0)._._._.vtable + 364))(a1);
  v15[0] = FIELD_U32(a1, 0x0)._._.position.x + FIELD_U32(a1, 0x0)._._.effectOffset.x;
  v15[1] = FIELD_U32(a1, 0x0)._._.position.y + FIELD_U32(a1, 0x0)._._.effectOffset.y;
  v15[2] = FIELD_U32(a1, 0x0)._._.position.z + FIELD_U32(a1, 0x0)._._.effectOffset.z;
  LODWORD(v15[3]) = v8;
  v16 = 1;
  v17 = 0;
  v20 = 0;
  v19 = 0;
  v22 = 0;
  v21 = 0;
  v18 = 0;
  sub_60583000(dword_60CAF15C, v15, 3);
  v10 = sub_602856C4(&FIELD_U32(a1, 0x1894));
  if ( ((unsigned int)&dword_60C907F4 & ~(1613393636 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C907F4) )
  {
    dword_60C9081C = 1.5;
    dword_60C90820 = 3.9;
    dword_60C90824 = -1.5;
    dword_60C90828 = 3.9;
    _cxa_guard_release(&dword_60C907F4);
  }
  v12 = (char *)&unk_60C907F0 + 8 * v8;
  v13 = *((_DWORD *)v12 + 11);
  v24 = *((_DWORD *)v12 + 12);
  v23 = v13;
  v25 = -1065353216;
  v26 = unk_60C906E8;
  v27 = &stru_60C90710;
  v28 = v10;
  v29 = v8;
  v30 = v9;
  sub_602A852C((int)&FIELD_F32(a1, 0x17D8), &v23);
  return 1;
}
