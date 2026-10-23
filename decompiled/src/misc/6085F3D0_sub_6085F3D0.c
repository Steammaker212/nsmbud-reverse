/* sub_6085F3D0
 * address: 0x6085F3D0   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6085F3D0(int *a1, int *a2, const char *a3)
{
  size_t v6; // r1
  int result; // r0
  bool v8; // cf
  int v9; // r1
  int v10; // r1
  unsigned int v11; // r2
  int v12; // r2
  int v13; // r1
  unsigned int v14; // r2
  int v15; // r2
  unsigned int v16; // r1
  int v17; // r1
  int v18; // r1
  unsigned int v19; // r2
  int v20; // r2
  int v21; // r1
  unsigned int v22; // r2
  int v23; // r2

  v6 = strlen(a3);
  result = 0;
  v8 = v6 >= 7;
  if ( v6 >= 7 )
  {
    v6 = *(unsigned __int8 *)a3;
    v8 = v6 >= 0x30;
  }
  if ( v8 )
  {
    v9 = v6 - 48;
    if ( v9 <= 9 )
    {
      v10 = 100 * (__int16)v9;
      *a1 = v10;
      v11 = *((unsigned __int8 *)a3 + 1);
      if ( v11 >= 0x30 )
      {
        v12 = v11 - 48;
        if ( v12 <= 9 )
        {
          v13 = v10 + 10 * v12;
          *a1 = v13;
          v14 = *((unsigned __int8 *)a3 + 2);
          if ( v14 >= 0x30 )
          {
            v15 = v14 - 48;
            if ( v15 <= 9 )
            {
              *a1 = v15 + v13;
              if ( a3[3] == 95 )
              {
                v16 = *((unsigned __int8 *)a3 + 4);
                if ( v16 >= 0x30 )
                {
                  v17 = v16 - 48;
                  if ( v17 <= 9 )
                  {
                    v18 = 100 * (__int16)v17;
                    *a2 = v18;
                    v19 = *((unsigned __int8 *)a3 + 5);
                    if ( v19 >= 0x30 )
                    {
                      v20 = v19 - 48;
                      if ( v20 <= 9 )
                      {
                        v21 = v18 + 10 * v20;
                        *a2 = v21;
                        v22 = *((unsigned __int8 *)a3 + 6);
                        if ( v22 >= 0x30 )
                        {
                          v23 = v22 - 48;
                          if ( v23 <= 9 )
                          {
                            *a2 = v23 + v21;
                            return 1;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
