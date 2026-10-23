/* BrosBase__collisionPropellerDrill
 * address: 0x602649E8   size: 344   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A6128
// 
// Overridden by: None
int __fastcall BrosBase__collisionPropellerDrill(int a1, int a2, int a3)
{
  char v3; // r12
  int v5; // r5
  int v6; // r7
  _BOOL4 v7; // r6
  int v8; // r0
  _DWORD v10[5]; // [sp+0h] [bp-38h] BYREF
  char v11; // [sp+14h] [bp-24h]
  _BOOL4 v12; // [sp+18h] [bp-20h]
  char v13; // [sp+1Ch] [bp-1Ch]

  v5 = FIELD_U32(a3, 64);
  if ( ((unsigned int)&dword_60C7B37C & ~(1613122056 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( v5 )
    v6 = (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C7B378) ^ 1;
  else
    v6 = 1;
  v7 = sub_6000ADDC(a1, v5);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 416))(a1, v5 + 108);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 368))(a1);
  if ( !v6 )
  {
    v10[0] = dword_60AFE3F8[v7];
    v10[1] = 1081711002;
    v10[2] = -1065353216;
    v10[3] = unk_60C906E8;
    v10[4] = &stru_60C906EC;
    v8 = sub_602A3358(a1, v5);
    v11 = sub_602856EC(a1 + 6292, v8);
    v12 = v7;
    v13 = FIELD_U8(v5, 84);
    sub_602A852C(a1 + 6104, v10);
  }
  return 1;
}
