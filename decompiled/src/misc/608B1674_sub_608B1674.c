/* sub_608B1674
 * address: 0x608B1674   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B1674(int a1, int a2, const char *a3)
{
  int *v5; // r7
  int v6; // r6
  int v7; // r8
  int *v8; // r5
  signed int v9; // r0
  int v10; // r2
  _DWORD *v11; // r5
  char v12; // t1
  unsigned int v13; // r3
  int *v14; // r3
  int *v15; // r5
  char v16; // t1
  const char *v17; // r1
  int *v18; // r5
  int v19; // r0
  bool v20; // zf

  v5 = 0;
  if ( a2 <= 1 )
    v5 = (int *)(a1 + *(_DWORD *)(a1 + 8 * a2 + 4));
  v6 = *v5;
  v7 = -1;
  if ( *v5 < (unsigned int)v5[1] )
  {
    v8 = &v5[5 * v6];
    v9 = strlen(a3);
    v12 = *((_BYTE *)v8 + 8);
    v11 = v8 + 2;
    if ( (v12 & 1) == 0 )
    {
      v10 = 1;
      do
      {
        v13 = *((unsigned __int16 *)v11 + 1);
        if ( (int)(v13 >> 3) < v9 && ((unsigned __int8)a3[v13 >> 3] & (1 << (~(_BYTE)v13 & 7))) != 0 )
          v14 = v11 + 2;
        else
          v14 = v11 + 1;
        v6 = *v14;
        v15 = &v5[5 * *v14];
        v16 = *((_BYTE *)v15 + 8);
        v11 = v15 + 2;
      }
      while ( (v16 & 1) == 0 );
    }
    v17 = 0;
    v18 = &v5[5 * v6];
    v19 = v18[5];
    v20 = v19 == -1;
    if ( v19 != -1 )
    {
      v10 = a1 + FIELD_U32(a1, 4);
      v20 = v10 == 0;
    }
    if ( !v20 )
      v17 = (const char *)(v10 + *(_DWORD *)(v10 + 12 * v19 + 8));
    if ( !strcmp(a3, v17) )
      return v18[6];
  }
  return v7;
}
