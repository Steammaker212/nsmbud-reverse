/* sub_6076F140
 * address: 0x6076F140   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6076F140(int a1)
{
  _DWORD *v2; // r5

  v2 = (_DWORD *)(a1 + 11112);
  if ( FIELD_U32(a1, 11112) == 2 )
    sub_60237560(a1 + 11008);
  *v2 = 1;
  FIELD_U32(a1, 11116) = 10;
  return 1;
}
