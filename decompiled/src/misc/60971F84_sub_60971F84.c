/* sub_60971F84
 * address: 0x60971F84   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60971F84(int a1, _DWORD *a2, int a3)
{
  int v4; // r7
  int v7; // r4
  int v8; // r1
  int v9; // r0
  char *v10; // r4
  int v11; // r2
  char *v12; // r3
  char *v13; // r1
  char v14; // r5
  char v15; // r6
  _DWORD v17[11]; // [sp+Ch] [bp-2Ch] BYREF

  v4 = 0;
  sub_60973D88(1, 10, 160, 560, 1, 1, 0);
  v7 = a2[1];
  v8 = 0;
  if ( *a2 )
    v8 = dword_60CC73E8(*a2);
  v9 = v8 + v7 + 1;
  v10 = &byte_60B46A69;
  do
  {
    v11 = 160;
    v12 = (char *)v9;
    v13 = v10;
    do
    {
      v14 = *(v13 - 1);
      v15 = *v13;
      v13 += 2;
      --v11;
      *(v12 - 1) = v14;
      *v12 = v15;
      v12 += 2;
    }
    while ( v11 );
    ++v4;
    v9 += 320;
    v10 += 320;
  }
  while ( v4 != 560 );
  v17[0] = *a2;
  v17[1] = a2[1];
  v17[2] = a2[2];
  return sub_60973CF8(a1, v17, a3, 10, 160, 560, 0);
}
