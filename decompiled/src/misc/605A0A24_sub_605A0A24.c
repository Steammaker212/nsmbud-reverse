/* sub_605A0A24
 * address: 0x605A0A24   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605A0A24(int result)
{
  unsigned __int16 v1; // r1

  FIELD_F32(result, 124) = FIELD_F32(result, 124) - FIELD_F32(result, 6316);
  v1 = FIELD_U16(result, 6352) + 1;
  FIELD_U16(result, 6352) = v1;
  if ( v1 >= 2u )
  {
    FIELD_U16(result, 6356) = 20;
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)result + 192))(result, &unk_60CAFE14);
  }
  return result;
}
