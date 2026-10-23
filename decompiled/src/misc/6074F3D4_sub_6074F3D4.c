/* sub_6074F3D4
 * address: 0x6074F3D4   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6074F3D4(int a1)
{
  return (*(int (__fastcall **)(_DWORD, int, float, float, float))(**(_DWORD **)(FIELD_U32(a1, 644) + 4) + 84))(
           *(_DWORD *)(FIELD_U32(a1, 644) + 4),
           2,
           3.0,
           5.0,
           0.0);
}
