/* sub_60934560
 * address: 0x60934560   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60934560(_DWORD *a1, int a2, unsigned int a3, int a4, int a5, int a6, int a7, char a8, int a9)
{
  _DWORD v10[4]; // [sp+0h] [bp-30h] BYREF
  char v11; // [sp+10h] [bp-20h]
  int v12; // [sp+14h] [bp-1Ch]
  char v13; // [sp+18h] [bp-18h]
  int v14; // [sp+1Ch] [bp-14h]
  int v15; // [sp+20h] [bp-10h]
  int v16; // [sp+24h] [bp-Ch]

  v10[0] = a4;
  v10[1] = a5;
  v10[2] = a6;
  v10[3] = a7;
  v11 = a8;
  v12 = a9;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 1065353216;
  return sub_60933FC4(a1, a2, a3, (int)v10);
}
