/* sub_60419F48
 * address: 0x60419F48   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void *__fastcall sub_60419F48(_DWORD *a1)
{
  int v2; // r0
  int v3; // r5
  int v4; // r6
  unsigned int i; // r7
  void **v6; // r1
  void *v7; // r0
  int v8; // r0
  int v9; // r5
  int v10; // r6
  unsigned int j; // r7
  void **v12; // r1
  void *result; // r0

  v2 = a1[206];
  if ( v2 >= 1 )
  {
    v3 = v2 - 1;
    v4 = 0;
    for ( i = 0; ; ++i )
    {
      v6 = (void **)a1[207];
      if ( v2 > i )
        v6 = (void **)((char *)v6 + v4);
      if ( *v6 )
        operator_delete(*v6);
      if ( v3 == i )
        break;
      v2 = a1[206];
      v4 += 4;
    }
  }
  v7 = (void *)a1[207];
  if ( v7 )
  {
    operator_delete_8DE3FC(v7);
    a1[206] = 0;
    a1[207] = 0;
  }
  v8 = a1[204];
  if ( v8 >= 1 )
  {
    v9 = v8 - 1;
    v10 = 0;
    for ( j = 0; ; ++j )
    {
      v12 = (void **)a1[205];
      if ( v8 > j )
        v12 = (void **)((char *)v12 + v10);
      if ( *v12 )
        operator_delete(*v12);
      if ( v9 == j )
        break;
      v8 = a1[204];
      v10 += 4;
    }
  }
  result = (void *)a1[205];
  if ( result )
  {
    operator_delete_8DE3FC(result);
    a1[204] = 0;
    a1[205] = 0;
    return 0;
  }
  return result;
}
