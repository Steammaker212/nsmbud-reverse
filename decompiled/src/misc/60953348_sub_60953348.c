/* sub_60953348
 * address: 0x60953348   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60953348(_DWORD *a1)
{
  int v2; // r0

  *a1 = &off_60C5E974;
  v2 = a1[7];
  if ( v2 )
    operator_delete_8DE3FC((void *)(v2 - 8));
  operator_delete(a1);
}
