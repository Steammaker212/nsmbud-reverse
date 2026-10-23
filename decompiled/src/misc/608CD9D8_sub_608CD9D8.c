/* sub_608CD9D8
 * address: 0x608CD9D8   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CD9D8(int a1, int a2)
{
  return 3 * nn__audio__GetRequiredBufferSizeForAuxSendReturnBuffer(a2, FIELD_U32(a1, 24), FIELD_U32(a1, 28));
}
