/* sub_60773298
 * address: 0x60773298   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60773298(int a1)
{
  if ( FIELD_U32(a1, 10032)
    || FIELD_F32(a1, 88) <= 0.0 && (FIELD_U8(a1, 6903) & 1) != 0
    || (FIELD_U8(a1, 6905) & 0x20) == 0
    || !sub_60762E40(a1) )
  {
    return 0;
  }
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 992))(a1);
  return 1;
}
