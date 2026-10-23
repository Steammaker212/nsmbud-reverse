/* sub_6099F148
 * address: 0x6099F148   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6099F148(_DWORD *a1)
{
  void *v2; // r0
  _DWORD *v3; // r5
  _DWORD *v4; // r7
  _DWORD *v5; // r0

  *a1 = &off_60C60DE0;
  if ( a1[1] )
  {
    sub_609A523C();
    a1[1] = 0;
  }
  v2 = (void *)a1[10];
  if ( v2 )
  {
    v3 = (_DWORD *)a1[7];
    if ( v3 == a1 + 6 )
      goto LABEL_7;
    do
    {
      v4 = (_DWORD *)v3[1];
      sead__ListNode__erase(v3);
      --a1[8];
      *(v3 - 40) = a1[9];
      v5 = v3 - 40;
      v3 = v4;
      a1[9] = v5;
    }
    while ( v4 != a1 + 6 );
    v2 = (void *)a1[10];
    if ( v2 )
LABEL_7:
      operator_delete_8DE3FC(v2);
  }
  operator_delete(a1);
}
