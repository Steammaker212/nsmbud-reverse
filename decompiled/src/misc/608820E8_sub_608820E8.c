/* sub_608820E8
 * address: 0x608820E8   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608820E8(int a1, int a2, int a3)
{
  return (*(int (__fastcall **)(int, int, int))(*(_DWORD *)dword_60CC7FE8 + 8))(dword_60CC7FE8, (a1 + a3 - 1) & -a3, a2);
}
