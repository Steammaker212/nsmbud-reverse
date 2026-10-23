/* sub_603BD508
 * address: 0x603BD508   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603BD508(int a1)
{
  return ((int (__fastcall *)(int))*(&off_60BF6408 + 2 * FIELD_U32(a1, 6352)))(a1 + ((int)*(&off_60BF6408
                                                                                             + 2
                                                                                             * FIELD_U32(a1, 6352)
                                                                                             + 1) >> 1));
}
