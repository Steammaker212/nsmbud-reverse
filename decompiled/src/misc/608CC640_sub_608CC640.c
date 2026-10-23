/* sub_608CC640
 * address: 0x608CC640   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CC640(int a1, int a2)
{
  int v2; // r0

  v2 = FIELD_U32(a1, 268);
  if ( v2 )
    return sub_608C7C80(v2, a2);
  else
    return 0;
}
