/* sub_602C3C08
 * address: 0x602C3C08   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602C3C08(int result)
{
  int v1; // r1
  float v2; // s0

  FIELD_U16(result, 6324) = 256;
  v1 = FIELD_U8(result, 6331);
  v2 = flt_60AF25F4[v1];
  FIELD_U32(result, 120) = dword_60AF25E4[v1];
  FIELD_F32(result, 124) = -v2;
  FIELD_U8(result, 6329) = dword_60AF2604[v1];
  FIELD_U8(result, 6330) = dword_60AF2614[v1];
  return result;
}
