/* sub_608FBCE4
 * address: 0x608FBCE4   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608FBCE4(int result, _BYTE *a2, int a3)
{
  char v3; // r6
  int v4; // r8
  unsigned __int8 *v5; // r5
  char v6; // t1
  _BYTE *i; // r10
  int v8; // r7
  bool v9; // zf
  _BYTE *v10; // r4
  _BYTE *v11; // r3
  int v12; // t1
  char v13; // r6
  char v14; // cc
  unsigned __int8 *j; // r1
  int v16; // r4
  bool v17; // zf
  int v18; // t1

  v3 = *a2;
  if ( *a2 )
  {
    v4 = 0;
    while ( 1 )
    {
      v5 = a2 + 1;
      while ( 2 )
      {
        switch ( v3 )
        {
          case 0:
            return result;
          case 9:
          case 10:
          case 32:
          case 44:
            v6 = *++a2;
            v3 = v6;
            ++v5;
            continue;
          default:
            *(_DWORD *)(result + 4 * v4++) = a2;
            for ( i = a2; ; ++i )
            {
              v8 = (unsigned __int8)*i;
              v9 = v8 == 0;
              if ( *i )
                v9 = v8 == 61;
              if ( v9 || v8 == 44 )
                break;
              ++v5;
            }
            v10 = i;
            do
            {
              v11 = v10;
              v12 = (unsigned __int8)*--v10;
              v13 = v12 - 9;
              if ( (unsigned int)(v12 - 9) > 0x17 )
                break;
              v14 = (((1 << v13) & 0x800003) != 0) & __CFSHL__(1, v13);
              if ( ((1 << v13) & 0x800003) != 0 )
                v14 = v10 > a2;
            }
            while ( v14 );
            *v11 = 0;
            if ( v8 == 61 )
            {
              for ( j = v5; ; ++j )
              {
                v16 = *j;
                v17 = v16 == 0;
                if ( *j )
                  v17 = v16 == 61;
                if ( v17 || v16 == 44 )
                  break;
              }
              if ( v4 >= a3 || !*j )
                return result;
            }
            else
            {
              if ( !v8 )
                return result;
              j = i;
              if ( v4 >= a3 )
                return result;
            }
            v18 = j[1];
            a2 = j + 1;
            v3 = v18;
            if ( !v18 )
              return result;
            break;
        }
        break;
      }
    }
  }
  return result;
}
