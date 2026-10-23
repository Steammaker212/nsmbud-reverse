/* sub_6016F2A0
 * address: 0x6016F2A0   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6016F2A0(int result, int a2)
{
  FIELD_U32(result, 1024) = 0;
  FIELD_U32(result, 1028) = a2;
  FIELD_U8(result, 1380) = 1;
  return result;
}
