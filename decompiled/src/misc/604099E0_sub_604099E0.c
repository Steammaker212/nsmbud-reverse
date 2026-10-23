/* sub_604099E0
 * address: 0x604099E0   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604099E0(_BYTE *a1)
{
  unsigned int v2; // r2
  int result; // r0
  unsigned int v4; // r0
  unsigned int v5; // r1
  _BYTE *v6; // r1
  int v7; // t1

  v2 = (unsigned __int8)(a1[6559] - 1);
  result = 6;
  if ( v2 <= 2 )
  {
    result = 1;
    if ( !a1[6523] )
    {
      result = 3;
      if ( !a1[6528] && !a1[6530] )
      {
        if ( a1[6533] )
        {
          return 0;
        }
        else if ( !a1[6536] && !a1[6542] && !a1[6532] && !a1[6546] && !a1[6549] && !a1[6550] )
        {
          result = 4;
          if ( !a1[6556] )
          {
            result = 3;
            switch ( a1[6476] )
            {
              case 0:
                v4 = (unsigned __int8)a1[6478] - 1;
                if ( v4 < 0xC && ((0xB13u >> v4) & 1) != 0 )
                {
                  result = dword_60B02100[v4];
                }
                else
                {
                  result = 3;
                  if ( !a1[6527] )
                    result = 1;
                }
                break;
              case 1:
                v5 = (unsigned __int8)a1[6478] - 1;
                result = 1;
                if ( v5 < 6 )
                  result = dword_60B02130[v5];
                break;
              case 2:
              case 4:
              case 6:
                return result;
              case 3:
                v7 = (unsigned __int8)a1[6478];
                v6 = a1 + 6478;
                result = 3;
                if ( v7 != 5 )
                {
                  result = 2;
                  if ( v6[1] == 4 )
                    result = 1;
                }
                break;
              case 5:
                if ( !a1[6478] )
                  return 0;
                result = 0;
                if ( a1[6478] != 15 )
                  result = 3;
                break;
              case 7:
                result = 0;
                break;
              case 9:
              case 0xA:
                result = 1;
                break;
              default:
                result = 5;
                break;
            }
          }
        }
      }
    }
  }
  return result;
}
