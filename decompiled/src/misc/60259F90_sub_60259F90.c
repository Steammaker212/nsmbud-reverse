/* sub_60259F90
 * address: 0x60259F90   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60259F90(int a1, int a2)
{
  int v3; // r0

  v3 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a2 + 64) + 696))(FIELD_U32(a2, 64));
  FIELD_U32(a1, 4) = v3;
  return v3 != 0;
}
