/* sub_6040F75C
 * address: 0x6040F75C   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6040F75C(int a1, int a2, int a3, int a4)
{
  int v7; // r0
  int i; // r5
  int v9; // r0
  int v10; // r8
  int v11; // r6
  int v12; // r0
  int v14; // [sp+4h] [bp-BCh]
  _BYTE v15[28]; // [sp+8h] [bp-B8h] BYREF
  int v16; // [sp+24h] [bp-9Ch]
  char v17; // [sp+70h] [bp-50h] BYREF

  v14 = a1 + 1764;
  sead__CriticalSection__lock(a1 + 1764);
  v7 = sub_6090B350(v15);
  v16 = 255;
  sub_6090B4B0(v7, FIELD_U32(a4, 40));
  for ( i = 0; i != 220; ++i )
  {
    v9 = a1 + 8 * i;
    v10 = FIELD_U32(v9, 4);
    if ( v10 && FIELD_U32(v9, 8) == a3 )
    {
      v11 = FIELD_U32(a4, 40);
      sub_6090B260(v10 + 1692, v11);
      v12 = ((int (__fastcall *)(char *, float, float, float, float))loc_6090E3D4)(
              &v17,
              1.0,
              1.0,
              FIELD_F32(v10, 1696) + -2.0,
              FIELD_F32(v10, 1700) + -2.0);
      sub_6090E560(v12, v11, v10 + 1692);
    }
  }
  return sead__CriticalSection__unlock(v14);
}
