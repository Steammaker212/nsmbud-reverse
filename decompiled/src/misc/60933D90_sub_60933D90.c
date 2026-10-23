/* sub_60933D90
 * address: 0x60933D90   size: 556   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60933D90(int a1, int a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r0
  unsigned int *v7; // r7
  unsigned int v8; // r0
  unsigned int *v9; // r5
  unsigned int v10; // r1
  unsigned int v11; // r1
  _DWORD v13[3]; // [sp+8h] [bp-50h] BYREF
  _DWORD v14[3]; // [sp+14h] [bp-44h] BYREF
  _DWORD v15[3]; // [sp+20h] [bp-38h] BYREF
  int v16; // [sp+2Ch] [bp-2Ch] BYREF

  v4 = sub_60971F1C();
  sub_60913D88(a1 + 2828, v4, a2, 0x2000, 8);
  sub_60913A6C(&v16, a1 + 2828, 0);
  sub_60913A6C(v15, a1 + 2828, 0);
  v5 = sub_60971F84(a1 + 1840, v15, FIELD_U32(a1, 2836), a2);
  v6 = sub_609721D0(v5);
  sub_60913D88(a1 + 2800, v6, a2, 0x2000, 8);
  sub_60913A6C(v14, a1 + 2800, 0);
  sub_60913A6C(v13, a1 + 2800, 0);
  sub_60972238(a1 + 1568, v13, FIELD_U32(a1, 2808), a2);
  sub_60920EC8(a1 + 2456, (int *)(a1 + 1840));
  sub_60920EC8(a1 + 2112, (int *)(a1 + 1568));
  FIELD_U16(a1, 2428) = 0;
  FIELD_U8(a1, 2430) = 0;
  v7 = (unsigned int *)(a1 + 2440);
  do
    v8 = __ldrex(v7);
  while ( __strex(v8 | 4, v7) );
  v9 = (unsigned int *)(a1 + 2784);
  do
    v10 = __ldrex(v9);
  while ( __strex(0x80000000, v9) );
  if ( v10 )
  {
    if ( v10 == 0x80000000 )
    {
      while ( *v9 == 0x80000000 )
        sub_609085CC();
    }
    else
    {
      sub_609210C4(a1 + 2456, v10);
    }
  }
  *v9 = 0;
  do
    v11 = __ldrex(v7);
  while ( __strex(0x80000000, v7) );
  if ( v11 )
  {
    if ( v11 == 0x80000000 )
    {
      while ( *v7 == 0x80000000 )
        sub_609085CC();
    }
    else
    {
      sub_609210C4(a1 + 2112, v11);
    }
  }
  *v7 = 0;
  return 0;
}
