/* sub_6072DDD0
 * address: 0x6072DDD0   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6072DDD0(int a1)
{
  if ( FIELD_U8(a1, 6105) )
    return StageActor__befreDraw((Actor *)a1);
  else
    return 0;
}
