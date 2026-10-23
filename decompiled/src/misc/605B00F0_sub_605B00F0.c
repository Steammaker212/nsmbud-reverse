/* sub_605B00F0
 * address: 0x605B00F0   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__int64 __fastcall sub_605B00F0(__int64 result)
{
  HIDWORD(result) = FIELD_F32(result, 112) <= FIELD_F32(TileMgr_instance, 24);
  FIELD_U8(result, 6840) = BYTE4(result);
  return result;
}
