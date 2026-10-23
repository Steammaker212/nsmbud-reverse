/* sub_609A5B14
 * address: 0x609A5B14   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void *__fastcall sub_609A5B14(_DWORD *a1)
{
  void *result; // r0
  _DWORD *v3; // r5
  _DWORD *v4; // r6
  _DWORD *v5; // r7
  void *v6; // r0
  void *v7; // r0

  result = (void *)a1[4];
  if ( result )
  {
    v3 = (_DWORD *)a1[1];
    if ( v3 == a1 )
      goto LABEL_9;
    do
    {
      v4 = (_DWORD *)v3[1];
      sead__ListNode__erase(v3);
      v5 = v3 - 6;
      --a1[2];
      *(v3 - 3) = &off_60BFA9C4;
      v6 = (void *)*(v3 - 2);
      if ( v6 )
        operator_delete_8DE3FC(v6);
      *v5 = &off_60BFA9C4;
      v7 = (void *)*(v3 - 5);
      if ( v7 )
        operator_delete_8DE3FC(v7);
      v3 = v4;
      *v5 = a1[3];
      a1[3] = v5;
    }
    while ( v4 != a1 );
    result = (void *)a1[4];
    if ( result )
LABEL_9:
      operator_delete_8DE3FC(result);
    a1[3] = 0;
    a1[4] = 0;
    a1[5] = 0;
    return 0;
  }
  return result;
}
