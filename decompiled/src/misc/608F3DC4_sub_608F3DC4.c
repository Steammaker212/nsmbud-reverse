/* sub_608F3DC4
 * address: 0x608F3DC4   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F3DC4(int (__fastcall ***a1)(_DWORD, int, int, int), int a2, int a3)
{
  int v5; // r0
  _DWORD v7[4]; // [sp+0h] [bp-40h] BYREF
  int v8; // [sp+10h] [bp-30h]
  int v9; // [sp+14h] [bp-2Ch]
  int v10; // [sp+18h] [bp-28h]
  int v11; // [sp+1Ch] [bp-24h]
  char v12; // [sp+20h] [bp-20h]
  char v13; // [sp+21h] [bp-1Fh]
  int v14; // [sp+24h] [bp-1Ch]
  int v15; // [sp+28h] [bp-18h]
  char v16; // [sp+2Ch] [bp-14h]

  v7[0] = &sead__SafeStringBase__vtable;
  v7[1] = &byte_60B3BA34;
  v11 = 0;
  v10 = 0;
  v9 = 0;
  v8 = 0;
  v7[3] = 0;
  v7[2] = 0;
  v12 = 1;
  v13 = 1;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  sead__SafeStringBase__operator_assign((int)v7, a3);
  v8 = a2;
  v9 = 4096;
  v10 = 4096;
  v5 = sub_608E8914(dword_60CCEBD0, (int)v7);
  return (**a1)(a1, a2, v5, v14);
}
