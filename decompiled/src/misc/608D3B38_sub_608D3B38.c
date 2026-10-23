/* sub_608D3B38
 * address: 0x608D3B38   size: 12   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D3B38(int result, char a2, float a3)
{
  FIELD_U8(result, 60) = a2;
  FIELD_F32(result, 56) = a3;
  return result;
}
