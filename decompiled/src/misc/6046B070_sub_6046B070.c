/* sub_6046B070
 * address: 0x6046B070   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6046B070(int a1)
{
  int result; // r0

  FIELD_U32(a1, 80) = FIELD_U32(a1, 548);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 340))(a1);
  result = 1077936128;
  FIELD_U32(a1, 124) = 1077936128;
  if ( FIELD_U8(a1, 6054) )
    FIELD_F32(a1, 124) = 3.0 * 0.5;
  return result;
}
