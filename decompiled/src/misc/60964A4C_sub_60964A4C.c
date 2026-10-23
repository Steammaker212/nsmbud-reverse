/* sub_60964A4C
 * address: 0x60964A4C   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_60964A4C(int *a1)
{
  int v2; // r0
  int v3; // r6
  int i; // r7
  _DWORD **v5; // r1
  _DWORD *v6; // r5
  void *v7; // r0
  void *v8; // r0

  v2 = *a1;
  if ( v2 >= 1 )
  {
    v3 = 0;
    for ( i = 0; i < v2; ++i )
    {
      v5 = (_DWORD **)a1[1];
      if ( v2 > (unsigned int)i )
        v5 = (_DWORD **)((char *)v5 + v3);
      v6 = *v5;
      if ( *v5 )
      {
        v7 = (void *)v6[1];
        if ( v7 )
          operator_delete_8DE3FC(v7);
        operator_delete(v6);
        v2 = *a1;
      }
      v3 += 4;
    }
  }
  v8 = (void *)a1[1];
  if ( v8 )
  {
    operator_delete_8DE3FC(v8);
    *a1 = 0;
    a1[1] = 0;
  }
  return a1;
}
