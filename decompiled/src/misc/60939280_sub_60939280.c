/* sub_60939280
 * address: 0x60939280   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60939280(_DWORD *a1)
{
  int v2; // r0
  int v3; // r1
  void *v4; // r5
  int v5; // r7
  int v6; // r6

  *a1 = off_60C5E2F4;
  v2 = a1[6];
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 - 4);
    v4 = (void *)(v2 - 8);
    if ( v3 )
    {
      v5 = v2 - 88;
      v6 = 88 * v3;
      do
      {
        sub_60939758(v5 + v6);
        v6 -= 88;
      }
      while ( v6 );
    }
    operator_delete_8DE3FC(v4);
    a1[5] = 0;
    a1[6] = 0;
  }
  sead__CriticalSection__dtor(a1 + 4531);
  sead__CriticalSection__dtor(a1 + 4522);
  sead__CriticalSection__dtor(a1 + 4513);
  return a1;
}
