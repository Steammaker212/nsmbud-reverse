/* sub_6094793C
 * address: 0x6094793C   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6094793C(unsigned int result, _DWORD *a2, int a3, float a4)
{
  unsigned int v6; // r9
  int v7; // r4
  unsigned int v8; // r5
  _DWORD *v9; // r6
  _DWORD *v10; // r7

  v6 = result;
  if ( a3 )
  {
    result = FIELD_U32(a3, 4);
    v7 = 0;
    if ( HIWORD(result) )
    {
      v8 = HIWORD(result);
      v9 = (_DWORD *)(a3 + ((4 * result) & 0x3FFFC));
      do
      {
        if ( v9 )
        {
          v10 = *(_DWORD **)(v6 + 12);
          if ( v10 )
          {
            while ( 1 )
            {
              result = (*(int (__fastcall **)(_DWORD *, _DWORD *))(*v10 + 24))(v10, v9);
              if ( result )
                break;
              v10 = (_DWORD *)v10[6];
              if ( !v10 )
                goto LABEL_10;
            }
            result = sub_609473AC(v10, a2, 0, v9, a4);
          }
        }
LABEL_10:
        ++v7;
        v9 += 3;
      }
      while ( v7 != v8 );
    }
  }
  return result;
}
