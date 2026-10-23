/* sub_606B57AC
 * address: 0x606B57AC   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606B57AC(int result)
{
  if ( FIELD_U32(result, 7224) )
    return SolidOnTopCollider_execute((ColliderBase *)(result + 6632));
  return result;
}
