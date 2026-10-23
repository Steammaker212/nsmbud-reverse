/* Pokey__collisionStar
 * address: 0x60382744   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A5BF4
// 
// Overridden by: None
int __fastcall Pokey__collisionStar(int a1, int a2, int a3)
{
  char v3; // r12
  int v6; // r5
  float v7; // r1
  signed int v8; // r1
  int v9; // r7
  int v10; // r0
  char v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r1
  int *v15; // r2
  int v16; // r3
  float v17; // s0
  float v18; // s2
  char v19; // r1
  float v21[3]; // [sp+4h] [bp-44h] BYREF
  _DWORD v22[5]; // [sp+10h] [bp-38h] BYREF
  char v23; // [sp+24h] [bp-24h]
  _BOOL4 v24; // [sp+28h] [bp-20h]
  char v25; // [sp+2Ch] [bp-1Ch]

  v6 = FIELD_U32(a3, 64);
  if ( ((unsigned int)&dword_60C7B37C & ~(1614292840 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( v6 && (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C7B378) == 1 )
  {
    v7 = FIELD_F32(a3, 88);
    v21[0] = FIELD_F32(a3, 84);
    v21[1] = v7;
    v21[2] = 4500.0;
    sub_602A38A4(a1, v21);
    v8 = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 1192))(v6);
    v9 = 0;
    SE_EMY_KAME_HIT_ref(v6, v8, FIELD_U32(a1, 6292) == 2);
    v10 = sub_60285510(v6);
    v11 = sub_602856EC((int *)(a1 + 6292), v10);
    v12 = FIELD_U32(a1, 6300);
    if ( v12 )
    {
      v13 = FIELD_U32(a1, 6304);
      if ( (v12 & 1) != 0 )
      {
        *(_BYTE *)(*(_DWORD *)v13 + 242) |= 2u;
        v9 = 1;
      }
      if ( v12 != 1 )
      {
        v14 = v12 - v9;
        v15 = (int *)(v13 + 4 * v9 + 4);
        do
        {
          v14 -= 2;
          *(_BYTE *)(*(v15 - 1) + 242) |= 2u;
          v16 = *v15;
          v15 += 2;
          FIELD_U8(v16, 242) |= 2u;
        }
        while ( v14 );
      }
    }
    v17 = FIELD_F32(a1, 108);
    v18 = FIELD_F32(v6, 108);
    v19 = FIELD_U8(v6, 84);
    memset(v22, 0, 16);
    v22[4] = &unk_60C96A1C;
    v23 = v11;
    v24 = v18 >= v17;
    v25 = v19;
    sub_602A852C(a1 + 6104, v22);
  }
  return 1;
}
