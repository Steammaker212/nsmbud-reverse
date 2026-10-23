/* sub_602A6024
 * address: 0x602A6024   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602A6024(int a1, int a2, char a3, char a4)
{
  char v4; // r12
  char *v9; // r0
  int v10; // r1
  _DWORD v12[5]; // [sp+0h] [bp-38h] BYREF
  char v13; // [sp+14h] [bp-24h]
  int v14; // [sp+18h] [bp-20h]
  char v15; // [sp+1Ch] [bp-1Ch]

  if ( ((unsigned int)&dword_60C907F4 & ~(1613389904 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C907F4) )
  {
    dword_60C9081C = 1.5;
    dword_60C90820 = 3.9;
    dword_60C90824 = -1.5;
    dword_60C90828 = 3.9;
    _cxa_guard_release(&dword_60C907F4);
  }
  v9 = (char *)&unk_60C907F0 + 8 * a2;
  v10 = *((_DWORD *)v9 + 11);
  v12[1] = *((_DWORD *)v9 + 12);
  v12[0] = v10;
  v12[2] = -1065353216;
  v12[3] = unk_60C906E8;
  v12[4] = &stru_60C90710;
  v13 = a4;
  v14 = a2;
  v15 = a3;
  return sub_602A852C(a1 + 6104, v12);
}
