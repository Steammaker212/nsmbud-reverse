/* sub_608D15DC
 * address: 0x608D15DC   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D15DC(int a1, int a2, int a3, int a4, int a5, char a6, int a7)
{
  _DWORD v8[5]; // [sp+0h] [bp-38h] BYREF
  int v9; // [sp+14h] [bp-24h]
  int v10; // [sp+18h] [bp-20h]
  int v11; // [sp+1Ch] [bp-1Ch]
  int v12; // [sp+20h] [bp-18h]
  int v13; // [sp+24h] [bp-14h]
  int v14; // [sp+28h] [bp-10h]
  char v15; // [sp+2Ch] [bp-Ch]

  v8[4] = 0;
  v15 = 1;
  v14 = 16843009;
  v13 = 16843009;
  v12 = 16843009;
  v11 = 16843009;
  v10 = 16843009;
  v9 = 16843009;
  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v8[3] = a5;
  LOBYTE(v9) = a6;
  return ((int (__fastcall *)(int, _DWORD *, int))sub_608D163C)(a1, v8, a7);
}
