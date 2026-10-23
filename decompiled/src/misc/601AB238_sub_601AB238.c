/* sub_601AB238
 * address: 0x601AB238   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601AB238(_DWORD *a1)
{
  int **v1; // r4
  int *v2; // r6
  int result; // r0
  int *v4; // r5
  int v5; // r7
  int v6; // t1
  int *v7; // r6
  int v8; // r7
  _DWORD *v9; // t1
  int *v10; // r4
  int v11; // r5
  int v12; // t1

  a1[4104] = 0;
  v1 = (int **)(a1 + 4100);
  v2 = (int *)a1[4100];
  v4 = a1 + 4098;
  result = a1[4098];
  if ( result )
  {
    v5 = 4 * result;
    do
    {
      v6 = *v2++;
      sub_60908054(FIELD_U32(v6, 4));
      v5 -= 4;
    }
    while ( v5 );
    result = *v4;
    if ( *v4 )
    {
      v7 = *v1;
      v8 = 4 * result;
      do
      {
        v9 = (_DWORD *)*v7++;
        (*(void (__fastcall **)(_DWORD, int, int))(*(_DWORD *)*v9 + 12))(*v9, 1, 1);
        v8 -= 4;
      }
      while ( v8 );
      result = *v4;
      if ( *v4 )
      {
        v10 = *v1;
        v11 = 4 * result;
        do
        {
          v12 = *v10++;
          result = sub_60908044(FIELD_U32(v12, 4));
          v11 -= 4;
        }
        while ( v11 );
      }
    }
  }
  return result;
}
