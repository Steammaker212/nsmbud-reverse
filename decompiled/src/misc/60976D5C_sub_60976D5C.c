/* sub_60976D5C
 * address: 0x60976D5C   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60976D5C(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r1
  void *v7; // r5
  int v8; // r7
  int v9; // r6
  void *v10; // r0

  *a1 = off_60C5F3F0;
  v2 = a1[18];
  if ( v2 )
  {
    operator_delete_8DE3FC((void *)(v2 - 8));
    a1[17] = 0;
    a1[18] = 0;
  }
  v3 = a1[25];
  if ( v3 )
  {
    operator_delete_8DE3FC((void *)(v3 - 8));
    a1[24] = 0;
    a1[25] = 0;
  }
  v4 = a1[32];
  if ( v4 )
  {
    operator_delete_8DE3FC((void *)(v4 - 8));
    a1[31] = 0;
    a1[32] = 0;
  }
  v5 = a1[39];
  if ( v5 )
  {
    v6 = *(_DWORD *)(v5 - 4);
    v7 = (void *)(v5 - 8);
    if ( v6 )
    {
      v8 = v5 - 616;
      v9 = 616 * v6;
      do
      {
        sub_60976C8C(v8 + v9);
        v9 -= 616;
      }
      while ( v9 );
    }
    operator_delete_8DE3FC(v7);
    a1[38] = 0;
    a1[39] = 0;
  }
  v10 = (void *)a1[15];
  if ( v10 )
    operator_delete(v10);
  a1[8] = off_60BF97C4;
  sub_60913C18((int)(a1 + 8));
  a1[1] = off_60BF97C4;
  sub_60913C18((int)(a1 + 1));
  return a1;
}
