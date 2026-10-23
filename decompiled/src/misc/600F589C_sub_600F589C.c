/* sub_600F589C
 * address: 0x600F589C   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600F589C(int a1, int a2, int a3)
{
  unsigned int *v5; // r6
  unsigned int v6; // r0
  unsigned int v7; // r0
  int (*v8)(void); // r2
  int result; // r0
  int v10; // r7
  int v11; // r3
  unsigned int v12; // r2
  int v13; // r1
  int v14; // r5
  int v15; // r7
  int v16; // r5
  int v17; // r7
  int v18; // t1
  float v19; // s6
  float v20; // s6

  v5 = (unsigned int *)(a1 + 6320);
  v6 = FIELD_U32(a1, 6320) - 1;
  *v5 = v6;
  if ( a3 )
  {
    v7 = v6 - a3;
    if ( v7 >= 5 )
      v7 = 0;
    v8 = *(int (**)(void))(**(_DWORD **)(a1 + 4 * v7 + 6300) + 192);
  }
  else
  {
    if ( v6 >= 5 )
      v6 = 0;
    v8 = *(int (**)(void))(**(_DWORD **)(a1 + 4 * v6 + 6300) + 192);
  }
  result = v8();
  v10 = *v5;
  if ( (int)*v5 >= 1 )
  {
    result = -1;
    v11 = -1;
    do
    {
      v12 = result;
      v13 = v10 - a3;
      if ( ++result != v10 - a3 )
      {
        v14 = 0;
        if ( (unsigned int)result < 5 )
          v14 = result;
        v15 = a1 + 4 * v14;
        v18 = FIELD_U32(v15, 6300);
        v17 = v15 + 6300;
        v16 = v18;
        if ( result >= v13 )
        {
          if ( v12 >= 5 )
            v12 = 0;
          *(_DWORD *)(a1 + 4 * v12 + 6300) = v16;
          *(_DWORD *)v17 = 0;
        }
        else
        {
          FIELD_U32(v16, 6316) = a3;
          *(_DWORD *)(*(_DWORD *)v17 + 6312) = v11 + *v5;
          v19 = (float)(int)(v11 + *v5) * 32.0;
          if ( FIELD_U32(a1, 80) )
            v20 = v19 + -2500.0;
          else
            v20 = v19 + 1500.0;
          *(float *)(*(_DWORD *)v17 + 116) = v20;
        }
      }
      v10 = *v5;
      --v11;
    }
    while ( result < (int)*v5 );
  }
  return result;
}
