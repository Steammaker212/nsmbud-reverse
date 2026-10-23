/* sub_6023895C
 * address: 0x6023895C   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6023895C(int a1)
{
  int v2; // r6
  int i; // r5
  int j; // r8
  int k; // r5
  int v6; // r7
  int m; // r6
  int v8; // r2
  int v9; // r0
  int v10; // r3
  int *v11; // r2

  sub_608908F8(FIELD_U32(a1, 16));
  v2 = 0;
  FIELD_U8(a1, 2315) = 1;
  do
  {
    for ( i = *(_DWORD *)(FIELD_U32(a1, 16) + 4 * v2 + 116); i; i = FIELD_U32(i, 416) )
    {
      if ( sub_60237CA4(*(unsigned __int16 *)(*(_DWORD *)(FIELD_U32(i, 516) + 12) + 84)) == 1 )
        sub_6088152C(i, 60);
    }
    ++v2;
  }
  while ( v2 != 8 );
  if ( sub_602378EC(*(_DWORD **)(a1 + 216), 1) == 1 )
  {
    for ( j = 0; j != 8; ++j )
    {
      for ( k = *(_DWORD *)(FIELD_U32(a1, 16) + 4 * j + 116); k; k = FIELD_U32(k, 416) )
      {
        v6 = FIELD_U32(k, 352);
        if ( v6 >= 1 )
        {
          for ( m = 0; m != v6; ++m )
          {
            v9 = sub_60881D78(k, m);
            if ( v9 )
            {
              v10 = FIELD_U32(v9, 348);
              v11 = *(int **)(v10 + 552);
              if ( v11 || (v11 = *(int **)(v10 + 556)) != 0 )
                v8 = *v11;
              else
                LOWORD(v8) = 0;
              sub_60237B20(FIELD_U32(a1, 216), v9, (unsigned __int16)v8);
            }
          }
        }
      }
    }
  }
  FIELD_U8(a1, 2313) = 0;
  return 0;
}
