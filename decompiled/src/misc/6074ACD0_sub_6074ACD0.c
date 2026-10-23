/* sub_6074ACD0
 * address: 0x6074ACD0   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6074ACD0(int result)
{
  float v1; // s0

  FIELD_U8(result, 1212) = 1;
  v1 = FIELD_F32(dword_60CC6484, 132);
  FIELD_U32(result, 1200) = FIELD_U32(dword_60CC6484, 116);
  FIELD_F32(result, 1204) = v1 + -64.0;
  FIELD_U32(result, 1208) = 1165623296;
  FIELD_U32(result, 648) = 0;
  return result;
}
