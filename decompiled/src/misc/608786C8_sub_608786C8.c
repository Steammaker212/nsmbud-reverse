/* sub_608786C8
 * address: 0x608786C8   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608786C8(int a1)
{
  return (*(int (__fastcall **)(int))((char *)&off_60C5A878 + ((*(_DWORD *)(FIELD_U32(a1, 68) + 72) >> 9) & 0x38)))(a1 + (*(int *)((char *)&off_60C5A878 + ((*(_DWORD *)(FIELD_U32(a1, 68) + 72) >> 9) & 0x38) + 4) >> 1));
}
