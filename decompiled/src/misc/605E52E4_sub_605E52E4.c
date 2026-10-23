/* sub_605E52E4
 * address: 0x605E52E4   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E52E4(int result, int a2, unsigned int a3)
{
  _DWORD *v5; // r8
  char v6; // r1
  int v7; // r1
  bool v8; // zf
  int v9; // r1
  int *v10; // r4
  bool v11; // zf

  v5 = (_DWORD *)result;
  if ( a3 <= 3 )
  {
    if ( sub_603F056C(dword_60C99D6C, a3) )
    {
      result = sub_603F0658(dword_60C99D6C, a3);
      if ( result != a2 )
      {
        v6 = result - 22;
        if ( (unsigned int)(result - 22) <= 9 )
        {
          result = 583;
          if ( ((0x247u >> v6) & 1) != 0 && (unsigned int)(a2 - 22) <= 9 )
          {
            result = 583;
            if ( ((0x247u >> (a2 - 22)) & 1) != 0 )
            {
              result = 7776;
              v7 = v5[1944];
              v8 = v7 == -1;
              if ( v7 != -1 )
              {
                result = v5[1945];
                v8 = result == -1;
              }
              if ( !v8 )
                return sub_605E540C(v5);
            }
          }
        }
      }
    }
    else
    {
      result = 7776;
      v9 = v5[1944];
      v10 = v5 + 1945;
      v11 = v9 == -1;
      if ( v9 != -1 )
      {
        result = *v10;
        v11 = *v10 == -1;
      }
      if ( v11 )
      {
        sub_603EFEAC(dword_60C99D6C, a3, a2);
        v5[1944] = a2;
        *v10 = a3;
        v5[1946] = 480;
        return 7784;
      }
      if ( v9 != a2 )
        return sub_605E540C(v5);
    }
  }
  return result;
}
