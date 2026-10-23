/* sub_6040F840
 * address: 0x6040F840   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6040F840(int a1, int a2, int a3, int a4)
{
  int i; // r8
  int v8; // r10
  int v9; // r4
  int v10; // r5
  int v11; // r0
  int v12; // r4
  int v13; // r5
  int v14; // r0
  int v16; // [sp+0h] [bp-28h]

  v16 = a1 + 1764;
  sead__CriticalSection__lock(a1 + 1764);
  for ( i = 0; i != 220; ++i )
  {
    v8 = a1 + 8 * i;
    v9 = FIELD_U32(v8, 4);
    if ( v9 && FIELD_U32(v8, 8) == a3 )
    {
      v10 = FIELD_U32(a4, 40);
      sub_6091ADF4(FIELD_U32(v8, 4), v10);
      sub_6091AE0C(v9 + 848, v10);
      FIELD_U32(v8, 4) = 0;
      FIELD_U32(v8, 8) = -1;
    }
  }
  v11 = sub_60958564(a4);
  sub_6090B260(v11, FIELD_U32(a4, 40));
  v12 = FIELD_U32(a4, 32);
  v13 = FIELD_U32(a4, 40);
  v14 = sub_60958564(a4);
  sub_6090E560(v12, v13, v14);
  return sead__CriticalSection__unlock(v16);
}
