/* sub_6091D490
 * address: 0x6091D490   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6091D490(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r4
  _DWORD *v5; // r5

  v2 = a1[155];
  if ( v2 )
  {
    operator_delete_8DE3FC((void *)(v2 - 8));
    a1[154] = 0;
    a1[155] = 0;
  }
  v3 = a1[1];
  v4 = FIELD_U32(v3, 16);
  if ( v4 )
  {
    v5 = (_DWORD *)(FIELD_U32(v3, 20) + 620);
    do
    {
      if ( *v5 )
      {
        operator_delete_8DE3FC((void *)(*v5 - 8));
        *(v5 - 1) = 0;
        *v5 = 0;
      }
      v5 += 234;
      --v4;
    }
    while ( v4 );
  }
}
