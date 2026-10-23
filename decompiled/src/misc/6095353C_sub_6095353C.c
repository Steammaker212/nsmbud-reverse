/* sub_6095353C
 * address: 0x6095353C   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

char *__fastcall sub_6095353C(_DWORD *a1, int a2, int a3, int a4)
{
  char *v4; // r7
  int v8; // r8
  int v9; // r0
  int *v10; // r9
  int v11; // r0
  bool v12; // zf
  int v13; // r1
  int v14; // r0
  int *v15; // r1
  int v16; // r0
  bool v17; // zf
  int v18; // r1
  int v19; // r0
  int *v20; // r1

  v8 = 0;
  if ( a1[1] )
  {
    v9 = a1[14];
    v10 = a1 + 12;
    if ( a4 == 1 )
    {
      if ( v9 >= 1 )
      {
        v11 = a1[13];
        v12 = v11 == 0;
        if ( v11 )
        {
          v13 = a1[15];
          v4 = (char *)(v11 - v13);
          v12 = v11 == v13;
        }
        if ( !v12 )
        {
          while ( !sub_60953648(a1, v4, a2, a3, 1) )
          {
            v14 = a1[15];
            v15 = *(int **)&v4[v14 + 4];
            v4 = (char *)v15 - v14;
            if ( v15 == v10 )
              v4 = 0;
            if ( !v4 )
              return (char *)v8;
          }
          return v4;
        }
      }
    }
    else if ( v9 >= 1 )
    {
      v16 = *v10;
      v17 = *v10 == 0;
      if ( *v10 )
      {
        v18 = a1[15];
        v4 = (char *)(v16 - v18);
        v17 = v16 == v18;
      }
      if ( !v17 )
      {
        while ( !sub_60953648(a1, v4, a2, a3, 0) )
        {
          v19 = a1[15];
          v20 = *(int **)&v4[v19];
          v4 = (char *)v20 - v19;
          if ( v20 == v10 )
            v4 = 0;
          if ( !v4 )
            return 0;
        }
        return v4;
      }
    }
  }
  return (char *)v8;
}
