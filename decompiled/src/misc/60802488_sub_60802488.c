/* sub_60802488
 * address: 0x60802488   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float sub_60802488()
{
  if ( AreaTask_intance )
    return (float)(FIELD_F32(AreaTask_intance, 1812) + FIELD_F32(AreaTask_intance, 1820)) * 0.5;
  else
    return 0.0;
}
