/* sub_6072F564
 * address: 0x6072F564   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6072F564(_DWORD *a1)
{
  a1[1577] = a1[27];
  a1[1578] = a1[28];
  a1[1579] = a1[29];
  return (*(int (__fastcall **)(_DWORD, _DWORD, float, float, float))(**(_DWORD **)(a1[1575] + 4) + 84))(
           *(_DWORD *)(a1[1575] + 4),
           0,
           1.0,
           5.0,
           0.0);
}
