/* sub_602016E8
 * address: 0x602016E8   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602016E8(int result)
{
  float v1; // s4
  float v2; // s10
  float v3; // s2

  FIELD_U32(result, 340) = 0;
  v1 = FIELD_F32(result, 336);
  v2 = *(float *)&dword_60C8C38C;
  v3 = FIELD_F32(result, 332) + *(float *)&dword_60C8C388;
  FIELD_F32(result, 80) = FIELD_F32(result, 328) + *(float *)&dword_60C8C384;
  FIELD_F32(result, 84) = v3;
  FIELD_F32(result, 88) = v1 + v2;
  FIELD_U32(result, 180) = 0;
  FIELD_U32(result, 352) = 80;
  FIELD_U32(result, 344) = 2;
  return result;
}
