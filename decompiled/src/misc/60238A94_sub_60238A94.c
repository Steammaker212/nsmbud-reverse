/* sub_60238A94
 * address: 0x60238A94   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60238A94(int a1, int a2)
{
  int result; // r0
  int i; // r8
  int j; // r5
  int v6; // r7
  int k; // r6
  int v8; // r2
  int v9; // r3
  int *v10; // r2

  result = sub_602378EC(*(_DWORD **)(a1 + 216), a2);
  if ( result == 1 )
  {
    for ( i = 0; i != 8; ++i )
    {
      result = FIELD_U32(a1, 16) + 4 * i;
      for ( j = FIELD_U32(result, 116); j; j = FIELD_U32(j, 416) )
      {
        v6 = FIELD_U32(j, 352);
        if ( v6 >= 1 )
        {
          for ( k = 0; k != v6; ++k )
          {
            result = sub_60881D78(j, k);
            if ( result )
            {
              v9 = FIELD_U32(result, 348);
              v10 = *(int **)(v9 + 552);
              if ( v10 || (v10 = *(int **)(v9 + 556)) != 0 )
                v8 = *v10;
              else
                LOWORD(v8) = 0;
              result = sub_60237B20(FIELD_U32(a1, 216), result, (unsigned __int16)v8);
            }
          }
        }
      }
    }
  }
  return result;
}
