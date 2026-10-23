/* untitled_ref
 * address: 0x60918CE0   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall untitled_ref(int result)
{
  *(_DWORD *)result = &off_60C5D5C0;
  FIELD_U32(result, 580) = "untitled";
  FIELD_U32(result, 40) = (result + 55) & 0xFFFFFFF8;
  FIELD_U32(result, 568) = 512;
  FIELD_U32(result, 572) = 0;
  FIELD_U32(result, 576) = 0;
  FIELD_U32(result, 24) = 0;
  FIELD_U8(result, 20) = 0;
  FIELD_U32(result, 16) = 0;
  FIELD_U32(result, 12) = 0;
  FIELD_U32(result, 8) = 0;
  FIELD_U32(result, 4) = 0;
  return result;
}
