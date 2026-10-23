/* sub_6090C77C
 * address: 0x6090C77C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6090C77C(int result, float a2, float a3, float a4, float a5, float a6, float a7)
{
  *(_DWORD *)result = off_60C5D10C;
  FIELD_U8(result, 5) = 1;
  FIELD_U32(result, 136) = dword_60CCF45C;
  FIELD_U32(result, 140) = dword_60C5D088;
  FIELD_U32(result, 144) = dword_60CCF460;
  *(_DWORD *)result = off_60C5D18C;
  FIELD_F32(result, 148) = a2;
  FIELD_F32(result, 152) = a3;
  FIELD_F32(result, 156) = a4;
  FIELD_F32(result, 160) = a5;
  FIELD_F32(result, 164) = a6;
  FIELD_F32(result, 168) = a7;
  FIELD_U8(result, 4) = 1;
  return result;
}
