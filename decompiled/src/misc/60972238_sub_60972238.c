/* sub_60972238
 * address: 0x60972238   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60972238(int a1, _DWORD *a2, int a3)
{
  int v4; // r7
  int v7; // r4
  int v8; // r1
  _BYTE *v9; // r6
  int v10; // r4
  _BYTE *v11; // r5
  char v12; // r0
  _DWORD v14[11]; // [sp+Ch] [bp-2Ch] BYREF

  v4 = 0;
  sub_60973D88(1, 1, 64, 16, 1, 1, 0);
  v7 = a2[1];
  v8 = 0;
  if ( *a2 )
    v8 = dword_60CC73E8(*a2);
  v9 = (_BYTE *)(v8 + v7);
  do
  {
    v10 = 0;
    v11 = v9;
    do
    {
      v12 = sub_60972088(v10++, v4, 0);
      *v11++ = v12;
    }
    while ( v10 != 64 );
    ++v4;
    v9 += 64;
  }
  while ( v4 != 16 );
  v14[0] = *a2;
  v14[1] = a2[1];
  v14[2] = a2[2];
  return sub_60973CF8(a1, v14, a3, 1, 64, 16, 0);
}
