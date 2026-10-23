/* sub_6091E220
 * address: 0x6091E220   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6091E220(_DWORD *a1)
{
  int v2; // r0
  int v3; // r1
  void *v4; // r5
  int v5; // r7
  int v6; // r6
  int v7; // r5
  int v8; // r0
  _DWORD *v9; // r6

  *a1 = off_60C5D618;
  v2 = a1[3];
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 - 4);
    v4 = (void *)(v2 - 8);
    if ( v3 )
    {
      v5 = v2 - 936;
      v6 = 936 * v3;
      do
      {
        sub_6091BD9C(v5 + v6);
        v6 -= 936;
      }
      while ( v6 );
    }
    operator_delete_8DE3FC(v4);
    a1[2] = 0;
    a1[3] = 0;
  }
  v7 = a1[4];
  v8 = a1[5];
  if ( v7 )
  {
    v9 = (_DWORD *)(v8 + 20);
    do
    {
      if ( *v9 )
      {
        operator_delete_8DE3FC((void *)(*v9 - 8));
        *(v9 - 1) = 0;
        *v9 = 0;
      }
      v9 += 7;
      --v7;
    }
    while ( v7 );
    v8 = a1[5];
  }
  if ( v8 )
  {
    operator_delete_8DE3FC((void *)(v8 - 8));
    a1[4] = 0;
    a1[5] = 0;
  }
  return a1;
}
