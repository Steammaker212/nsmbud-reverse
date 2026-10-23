/* sub_609A5AD0
 * address: 0x609A5AD0   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609A5AD0(int a1)
{
  void *v2; // r0
  bool v3; // zf

  *(_DWORD *)a1 = off_60C60E08;
  v2 = *(void **)(a1 + 96);
  v3 = v2 == 0;
  if ( v2 )
    v3 = FIELD_U8(a1, 104) == 0;
  if ( !v3 )
    operator_delete_8DE3FC(v2);
  sub_609A5B14(a1 + 112);
  return a1;
}
