/* sub_60779FD8
 * address: 0x60779FD8   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60779FD8(int a1, int a2)
{
  int v2; // r0

  v2 = sub_60788F54(PlayerMgr_instance, a2);
  if ( v2 )
    return (FIELD_U8(v2, 1234) >> 4) & 1;
  else
    return 0;
}
