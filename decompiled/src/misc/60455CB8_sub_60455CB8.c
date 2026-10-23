/* sub_60455CB8
 * address: 0x60455CB8   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60455CB8(int a1)
{
  __int16 v2; // r0
  __int16 v3; // r1

  FIELD_U8(a1, 208) = 0;
  FIELD_U16(a1, 220) = 0;
  FIELD_U8(a1, 222) = 0;
  FIELD_U32(a1, 232) = 0;
  memset((void *)a1, 0, 192);
  FIELD_U32(a1, 196) = -1;
  v2 = FIELD_U16(a1, 192);
  v3 = FIELD_U16(a1, 194);
  FIELD_U16(a1, 206) = -1;
  FIELD_U16(a1, 204) = -1;
  FIELD_U16(a1, 202) = v3;
  FIELD_U16(a1, 200) = v2;
  FIELD_U8(a1, 217) = 0;
  FIELD_U8(a1, 213) = 0;
  FIELD_U8(a1, 216) = 0;
  FIELD_U8(a1, 219) = 0;
  FIELD_U8(a1, 218) = 0;
  FIELD_U8(a1, 212) = 0;
  FIELD_U8(a1, 215) = 0;
  FIELD_U8(a1, 214) = 0;
  FIELD_U8(a1, 224) = 0;
  FIELD_U8(a1, 223) = 0;
  FIELD_U8(a1, 223) = -1;
  FIELD_U8(a1, 226) = 0;
  FIELD_U8(a1, 225) = 0;
  FIELD_U8(a1, 228) = 0;
  FIELD_U8(a1, 227) = 0;
  return a1;
}
