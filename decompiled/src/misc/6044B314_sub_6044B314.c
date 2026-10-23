/* sub_6044B314
 * address: 0x6044B314   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6044B314(int a1, int a2, int a3, int a4)
{
  int v6; // r1
  int v7; // r3
  _DWORD *v8; // r5
  int v9; // r4
  __int16 v11; // [sp+0h] [bp-78h] BYREF
  int v12; // [sp+4h] [bp-74h]
  char v13; // [sp+28h] [bp-50h]
  char v14; // [sp+29h] [bp-4Fh]
  char v15; // [sp+2Ah] [bp-4Eh]
  char v16; // [sp+2Bh] [bp-4Dh]
  char v17; // [sp+2Ch] [bp-4Ch]
  char v18; // [sp+2Dh] [bp-4Bh]
  __int16 v19; // [sp+58h] [bp-20h]

  sub_60450C78(dword_60C9CEF0, a3, a4, 4);
  FIELD_U32(a1, 56) = a2;
  (**(void (__fastcall ***)(int, int))a1)(a1, 600);
  v6 = 12156;
  v7 = 0;
  do
  {
    v8 = (_DWORD *)(a1 + v7);
    v7 += 16;
    v8[39] = 1083808154;
    v8[40] = 1083808154;
    *(_BYTE *)(a1 + v6) = 0;
    v9 = a1 + v6;
    v6 += 2;
    v8[41] = 1083808154;
    v8[42] = 1083808154;
    FIELD_U8(v9, 1) = 0;
  }
  while ( v7 != 4800 );
  sub_6090B350(&v11);
  v12 |= 1u;
  v17 = 1;
  v18 = 1;
  v13 = 5;
  v14 = 5;
  v15 = 2;
  v16 = 2;
  v11 = 1;
  v19 = 260;
  sub_60450C98(dword_60C9CEF0, &v11, 4);
  return 1;
}
