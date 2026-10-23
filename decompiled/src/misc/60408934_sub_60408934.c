/* sub_60408934
 * address: 0x60408934   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60408934(int a1)
{
  int v1; // r0

  v1 = FIELD_U32(a1, 6472);
  if ( v1 )
    return sub_603FD93C(v1);
  else
    return 0;
}
