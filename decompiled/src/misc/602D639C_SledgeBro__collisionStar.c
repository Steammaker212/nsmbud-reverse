/* SledgeBro__collisionStar
 * address: 0x602D639C   size: 316   group: misc
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
int __fastcall SledgeBro__collisionStar(int a1, int a2, int a3)
{
  int v3; // r7
  _BOOL4 v6; // r8
  float v7; // r1
  int v8; // r6
  char v9; // r12
  int v10; // r0
  signed int v11; // r0
  int v12; // r5
  float v14[9]; // [sp+4h] [bp-24h] BYREF

  v3 = FIELD_U32(a3, 64);
  v6 = sub_6000ADDC(a1, v3);
  v7 = FIELD_F32(a2, 88);
  v8 = FIELD_S8(v3, 84);
  v14[0] = FIELD_F32(a2, 84);
  v14[1] = v7;
  v14[2] = 0.0;
  sub_602A38A4(a1, v14);
  if ( ((unsigned int)&dword_60C7B37C & ~(1613587440 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  v10 = (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C7B378);
  if ( v10 )
    v10 = v3;
  v11 = (*(int (__fastcall **)(int))(*(_DWORD *)v10 + 1192))(v10);
  SE_EMY_KAME_HIT_ref(v3, v11, 0);
  v12 = sub_60285510(v3);
  sub_600228BC(0.0, 24.0, dword_60C7F52C, a1, v12, v8);
  sub_602856EC((int *)(a1 + 6292), v12);
  sub_602A6024(a1, v6, v8, -1);
  return 1;
}
