/* sub_60456388
 * address: 0x60456388   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60456388(int result)
{
  __int16 v1; // r2
  __int16 v2; // r12
  __int16 v3; // lr
  __int16 v4; // r2

  *(_DWORD *)result = 2;
  FIELD_U16(result, 152) = FIELD_U16(result, 154);
  FIELD_U8(result, 158) = 0;
  FIELD_U8(result, 159) = 0;
  FIELD_U16(result, 160) = FIELD_U16(result, 162);
  FIELD_U8(result, 166) = 0;
  FIELD_U8(result, 167) = 0;
  FIELD_U16(result, 168) = FIELD_U16(result, 170);
  FIELD_U8(result, 174) = 0;
  FIELD_U8(result, 175) = 0;
  FIELD_U16(result, 176) = FIELD_U16(result, 178);
  FIELD_U8(result, 182) = 0;
  FIELD_U8(result, 183) = 0;
  v1 = FIELD_U16(result, 184);
  FIELD_U16(result, 190) = FIELD_U16(result, 186);
  FIELD_U16(result, 188) = v1;
  v2 = FIELD_U16(result, 192);
  v3 = FIELD_U16(result, 194);
  v4 = FIELD_U16(result, 196);
  FIELD_U16(result, 206) = FIELD_U16(result, 198);
  FIELD_U16(result, 204) = v4;
  FIELD_U16(result, 202) = v3;
  FIELD_U16(result, 200) = v2;
  FIELD_U8(result, 226) = FIELD_U8(result, 225);
  FIELD_U8(result, 228) = FIELD_U8(result, 227);
  FIELD_U8(result, 223) = -1;
  FIELD_U8(result, 208) = 0;
  return result;
}
