/* GiantWiggler_vf93
 * address: 0x60256CA8   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall GiantWiggler_vf93(int a1, int a2)
{
  (*(void (__fastcall **)(int, int, _DWORD, int, float, float, int))(*(_DWORD *)a2 + 752))(
    a2,
    1,
    0,
    2,
    5.0,
    FIELD_F32(a2, 88),
    1);
  FIELD_U32(a2, 9592) = 1;
  return 9592;
}
