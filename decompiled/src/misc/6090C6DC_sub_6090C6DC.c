/* sub_6090C6DC
 * address: 0x6090C6DC   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6090C6DC(int result)
{
  *(_DWORD *)result = off_60C5D10C;
  FIELD_U8(result, 5) = 1;
  FIELD_U32(result, 136) = dword_60CCF45C;
  FIELD_U32(result, 140) = dword_60C5D088;
  FIELD_U32(result, 144) = dword_60CCF460;
  *(_DWORD *)result = off_60C5D18C;
  FIELD_U32(result, 148) = 0;
  FIELD_U32(result, 152) = 1065353216;
  FIELD_U32(result, 156) = 1056964608;
  FIELD_U32(result, 160) = -1090519040;
  FIELD_U32(result, 164) = -1090519040;
  FIELD_U32(result, 168) = 1056964608;
  FIELD_U8(result, 4) = 1;
  return result;
}
