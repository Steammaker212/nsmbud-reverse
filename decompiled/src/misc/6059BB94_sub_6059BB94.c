/* sub_6059BB94
 * address: 0x6059BB94   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6059BB94(int a1)
{
  return (float)((float)(sub_608324DC(
                           (float)((float)(*(float *)(FIELD_U32(a1, 12) + 8) + -1.0)
                                 - *(float *)(FIELD_U32(a1, 12) + 20))
                         / (float)(*(float *)(FIELD_U32(a1, 12) + 8) + -1.0))
                       * 32.0)
               + 16.0)
       * 0.5;
}
