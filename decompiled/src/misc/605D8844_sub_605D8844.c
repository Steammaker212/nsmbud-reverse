/* sub_605D8844
 * address: 0x605D8844   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605D8844(int a1)
{
  unsigned int v1; // r1

  if ( (FIELD_U8(a1, 6260) & 2) != 0 )
    return 0;
  v1 = FIELD_U32(a1, 6264);
  if ( (v1 & 0x2000) != 0 )
    return 0;
  else
    return (FIELD_U8(a1, 84) < 4u) & (v1 >> 1);
}
