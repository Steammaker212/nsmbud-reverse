/* sub_6090C214
 * address: 0x6090C214   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6090C214(int result)
{
  *(_DWORD *)result = off_60C5D10C;
  FIELD_U16(result, 4) = 257;
  FIELD_U32(result, 136) = dword_60CCF45C;
  FIELD_U32(result, 140) = dword_60C5D088;
  FIELD_U32(result, 144) = dword_60CCF460;
  *(_DWORD *)result = off_60C5D14C;
  FIELD_U32(result, 148) = 1065353216;
  FIELD_U32(result, 152) = 1176256512;
  FIELD_U32(result, 172) = 1068149419;
  FIELD_U32(result, 180) = 0;
  FIELD_U32(result, 176) = 0;
  FIELD_U32(result, 156) = 1061752795;
  FIELD_U32(result, 160) = 1053028118;
  FIELD_U32(result, 164) = 1064076126;
  FIELD_U32(result, 168) = 1054086093;
  FIELD_U8(result, 4) = 1;
  return result;
}
