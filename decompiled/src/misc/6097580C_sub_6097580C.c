/* sub_6097580C
 * address: 0x6097580C   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int sub_6097580C()
{
  return (sead__Random__getU32((void *)sead__GlobalRandom__sInstance) & 2) - 1;
}
