/* sub_60466BF4
 * address: 0x60466BF4   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60466BF4(int a1)
{
  FIELD_U32(a1, 120) = 0;
  if ( FIELD_U32(a1, 6172) )
    FIELD_U32(a1, 120) = 0;
  else
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 340))(a1);
  FIELD_U32(a1, 6192) = 1;
  FIELD_U8(a1, 6196) = 1;
  FIELD_U32(a1, 6004) = 1036831949;
  return 6004;
}
