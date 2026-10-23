/* sub_602A3178
 * address: 0x602A3178   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602A3178(int a1, float a2)
{
  (*(void (__fastcall **)(int, int, _DWORD, int, float, float))(*(_DWORD *)a1 + 748))(
    a1,
    1,
    0,
    2,
    a2,
    FIELD_F32(a1, 88));
  FIELD_U32(a1, 9592) = 1;
  return 9592;
}
