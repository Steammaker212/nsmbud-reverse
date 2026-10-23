/* sub_60946434
 * address: 0x60946434   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60946434(int a1)
{
  void *v2; // r0

  *(_DWORD *)a1 = &off_60C5E6E0;
  if ( FIELD_U8(a1, 20) )
  {
    v2 = *(void **)(a1 + 12);
    if ( v2 )
      operator_delete_8DE3FC(v2);
    FIELD_U8(a1, 20) = 0;
  }
  *(_DWORD *)a1 = &off_60C5E40C;
  return a1;
}
