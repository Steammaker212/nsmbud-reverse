/* sub_60193518
 * address: 0x60193518   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60193518(int result, float a2, float a3, float a4, float a5)
{
  if ( !FIELD_U8(result, 61) )
  {
    FIELD_U32(result, 20) = 0;
    FIELD_U32(result, 24) = 0;
    FIELD_U32(result, 28) = 0;
    FIELD_U32(result, 32) = 0;
    FIELD_U32(result, 36) = 0;
    FIELD_U32(result, 40) = 0;
    FIELD_U32(result, 44) = 0;
    FIELD_F32(result, 4) = a2;
    FIELD_F32(result, 8) = a3;
    FIELD_F32(result, 12) = a4;
    FIELD_F32(result, 16) = a5;
    FIELD_U8(result, 61) = 1;
  }
  return result;
}
