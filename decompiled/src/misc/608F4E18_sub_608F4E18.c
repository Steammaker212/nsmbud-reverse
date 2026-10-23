/* sub_608F4E18
 * address: 0x608F4E18   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F4E18(int a1)
{
  float *v1; // r2

  v1 = *(float **)(a1 + 4);
  return (*(int (__fastcall **)(int, _DWORD, float, float, float, float, float, float, float, float))(*(_DWORD *)dword_60CCEC3C + 16))(
           dword_60CCEC3C,
           FIELD_U32(a1, 16),
           v1[4],
           v1[5],
           v1[6],
           v1[7],
           v1[8],
           v1[9],
           v1[10],
           v1[11]);
}
