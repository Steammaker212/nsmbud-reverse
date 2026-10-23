/* sub_609A5BD4
 * address: 0x609A5BD4   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_609A5BD4(_DWORD *a1)
{
  void *v2; // r0
  bool v3; // zf

  *a1 = off_60C60E08;
  v2 = (void *)a1[24];
  v3 = v2 == 0;
  if ( v2 )
    v3 = *((_BYTE *)a1 + 104) == 0;
  if ( !v3 )
    operator_delete_8DE3FC(v2);
  sub_609A5B14(a1 + 28);
  operator_delete(a1);
}
