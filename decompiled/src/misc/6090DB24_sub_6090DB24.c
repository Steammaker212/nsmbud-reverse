/* sub_6090DB24
 * address: 0x6090DB24   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6090DB24(int result, int a2, int a3)
{
  int v3; // r3

  *(_DWORD *)result = &off_60C5D24C;
  FIELD_U32(result, 4) = a3;
  FIELD_U32(result, 8) = 0;
  FIELD_U32(result, 12) = 0;
  v3 = dword_60CCEC10;
  if ( dword_60CCF4DC )
    v3 = dword_60CCF4DC;
  FIELD_U32(result, 16) = v3;
  FIELD_U32(result, 20) = 0;
  FIELD_U32(result, 24) = 0;
  FIELD_U32(result, 28) = 1065353216;
  FIELD_U32(result, 32) = 1065353216;
  FIELD_U32(result, 36) = 1065353216;
  FIELD_U32(result, 40) = 1065353216;
  FIELD_U32(result, 44) = 1065353216;
  FIELD_U32(result, 48) = 1065353216;
  FIELD_U32(result, 52) = 0;
  FIELD_U32(result, 56) = 0;
  FIELD_U32(result, 60) = 0;
  FIELD_U32(result, 64) = 2139095040;
  FIELD_U32(result, 68) = 0;
  FIELD_U32(result, 72) = 0;
  FIELD_U8(result, 76) = 1;
  FIELD_U32(result, 80) = a2;
  return result;
}
