/* sub_605D4624
 * address: 0x605D4624   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605D4624(int a1, int a2)
{
  if ( a2 == 2 )
  {
    FIELD_U32(a1, 864) = 0;
    FIELD_U32(a1, 868) = 0;
    FIELD_U32(a1, 872) = 0;
  }
  return StageActor__afterExecute(a1, a2);
}
