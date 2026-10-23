/* sub_604DF174
 * address: 0x604DF174   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604DF174(int result)
{
  FIELD_U32(result, 4620) = dword_60B02FCC[FIELD_U32(result, 6288)];
  FIELD_U8(result, 4635) = 0;
  FIELD_U8(result, 4632) = 1;
  FIELD_U8(result, 4646) = FIELD_U8(dword_60CC6D78, 20);
  return result;
}
