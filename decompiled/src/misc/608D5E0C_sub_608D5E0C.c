/* sub_608D5E0C
 * address: 0x608D5E0C   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D5E0C(int a1, int *a2, int a3, int a4, int a5)
{
  int v5; // r4
  unsigned __int8 *v6; // r0
  unsigned __int8 *v8; // r12
  unsigned int v9; // r1
  __int16 *v10; // r0
  unsigned __int8 *v11; // r0
  int v12; // r3
  int v13; // r0
  char v14; // r2
  unsigned __int8 *v15; // r0
  int v16; // r4
  int v17; // r3
  __int16 v18; // r12
  int v19; // r4
  int v20; // r5

  v5 = 0;
  switch ( a5 )
  {
    case 1:
      v6 = (unsigned __int8 *)(*a2)++;
      return *v6;
    case 2:
      v11 = (unsigned __int8 *)(*a2)++;
      v12 = *v11;
      *a2 = (int)(v11 + 2);
      return v12 | (v11[1] << 8);
    case 3:
      v5 = 0;
      v13 = *a2 + 1;
      do
      {
        *a2 = v13;
        v14 = *(_BYTE *)(v13++ - 1);
        v5 = v14 & 0x7F | (v5 << 7);
      }
      while ( v14 < 0 );
      return v5;
    case 4:
      v15 = (unsigned __int8 *)*a2;
      v16 = *a2 + 2;
      v17 = *a2 + 3;
      ++*a2;
      v18 = *v15;
      *a2 = v16;
      LOWORD(v16) = v15[1];
      *a2 = v17;
      LOWORD(v17) = v15[2];
      *a2 = (int)(v15 + 4);
      v19 = (__int16)(v18 | ((_WORD)v16 << 8));
      v20 = 1 - v19 + (__int16)(v17 | (v15[3] << 8));
      return v19 + ((int)(v20 * sub_608C6D14()) >> 16);
    case 5:
      v8 = (unsigned __int8 *)(*a2)++;
      v9 = *v8;
      if ( v9 > 0x1F )
      {
        if ( v9 > 0x2F )
          return v5;
        v10 = (__int16 *)sub_608BBB30(a4, v9 - 32);
        if ( !v10 )
          return v5;
        return *v10;
      }
      v10 = sub_608B803C(a3, v9);
      if ( v10 )
        return *v10;
      return v5;
    default:
      return v5;
  }
}
