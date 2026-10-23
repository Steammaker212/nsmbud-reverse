/* sub_6091FC74
 * address: 0x6091FC74   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6091FC74(signed int *a1, signed int a2, int a3, int a4)
{
  int v6; // r6
  unsigned int v7; // r0
  _DWORD *v8; // r0
  _DWORD *v9; // r8
  _DWORD *v10; // r6
  int v11; // r4
  bool v12; // zf

  v6 = 0;
  if ( a2 >= 1 )
  {
    v7 = 312 * a2 + 8;
    if ( v7 < 312 * a2 )
      v7 = -1;
    if ( !is_mul_ok(0x138u, a2) )
      v7 = -1;
    v8 = (_DWORD *)sub_608DE334(v7, a3, a4);
    if ( v8 )
    {
      v9 = v8 + 2;
      *v8 = 312;
      v8[1] = a2;
      v10 = v8 + 59;
      v11 = (int)&v8[78 * a2 + 2];
      do
      {
        *(v10 - 57) = off_60C5D6B4;
        *(v10 - 56) = 0;
        *(v10 - 55) = 0;
        unititled_ref(v10 - 54);
        unititled_ref(v10 - 36);
        unititled_ref(v10 - 18);
        unititled_ref(v10);
        v10[18] = 0;
        v10[19] = 0;
        *((_BYTE *)v10 + 80) = 0;
        v12 = v10 + 21 == (_DWORD *)v11;
        v10 += 78;
      }
      while ( !v12 );
      v6 = 1;
      *a1 = a2;
      a1[1] = (signed int)v9;
    }
  }
  return v6;
}
