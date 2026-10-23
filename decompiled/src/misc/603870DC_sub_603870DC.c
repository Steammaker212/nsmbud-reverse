/* sub_603870DC
 * address: 0x603870DC   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603870DC(int a1)
{
  int v2; // r2
  int result; // r0

  v2 = FIELD_U32(a1, 32);
  if ( v2 == 1 )
  {
    *(_BYTE *)(FIELD_U32(a1, 56) + 128) = 0;
    return 1;
  }
  else
  {
    result = 0;
    if ( !v2 )
      FIELD_U32(a1, 32) = 1;
  }
  return result;
}
