/* sub_6090C7F8
 * address: 0x6090C7F8   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6090C7F8(int result, int a2, float a3, float a4)
{
  *(_DWORD *)result = off_60C5D10C;
  FIELD_U16(result, 4) = 257;
  FIELD_U32(result, 136) = dword_60CCF45C;
  FIELD_U32(result, 140) = dword_60C5D088;
  FIELD_U32(result, 144) = dword_60CCF460;
  *(_DWORD *)result = off_60C5D18C;
  FIELD_F32(result, 148) = a3;
  FIELD_F32(result, 152) = a4;
  FIELD_F32(result, 156) = (float)(FIELD_F32(a2, 16) - FIELD_F32(a2, 8)) * 0.5;
  FIELD_F32(result, 160) = (float)(FIELD_F32(a2, 16) - FIELD_F32(a2, 8)) * -0.5;
  FIELD_F32(result, 164) = (float)(FIELD_F32(a2, 12) - FIELD_F32(a2, 4)) * -0.5;
  FIELD_F32(result, 168) = (float)(FIELD_F32(a2, 12) - FIELD_F32(a2, 4)) * 0.5;
  FIELD_U32(result, 136) = FIELD_U32(a2, 20);
  FIELD_U16(result, 4) = 257;
  return result;
}
