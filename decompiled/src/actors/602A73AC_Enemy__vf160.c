/* Enemy__vf160
 * address: 0x602A73AC   size: 248   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x6002662C : BossBase
int __fastcall Enemy__vf160(int a1)
{
  char v2; // r6
  int v3; // r5
  char v4; // r12
  char *v5; // r0
  int v6; // r1
  _DWORD v8[5]; // [sp+0h] [bp-30h] BYREF
  char v9; // [sp+14h] [bp-1Ch]
  int v10; // [sp+18h] [bp-18h]
  char v11; // [sp+1Ch] [bp-14h]

  sub_602F3750(a1 + 6152);
  v2 = FIELD_U8(a1, 84);
  v3 = FIELD_U32(a1, 6284);
  if ( ((unsigned int)&dword_60C907F4 & ~(1613394916 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C907F4) )
  {
    dword_60C9081C = 1.5;
    dword_60C90820 = 3.9;
    dword_60C90824 = -1.5;
    dword_60C90828 = 3.9;
    _cxa_guard_release(&dword_60C907F4);
  }
  v5 = (char *)&unk_60C907F0 + 8 * v3;
  v6 = *((_DWORD *)v5 + 11);
  v8[1] = *((_DWORD *)v5 + 12);
  v8[0] = v6;
  v8[2] = -1065353216;
  v8[3] = unk_60C906E8;
  v8[4] = &stru_60C90710;
  v9 = -1;
  v10 = v3;
  v11 = v2;
  return sub_602A852C(a1 + 6104, v8);
}
