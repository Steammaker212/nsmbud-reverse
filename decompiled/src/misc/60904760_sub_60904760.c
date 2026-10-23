/* sub_60904760
 * address: 0x60904760   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60904760(int a1)
{
  unsigned int v2; // r0
  unsigned int v3; // r2

  if ( !FIELD_U32(a1, 16) )
    return 1;
  v2 = (*(int (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 4) + 4))(FIELD_U32(a1, 4), FIELD_U32(a1, 8));
  v3 = FIELD_U32(a1, 16);
  FIELD_U32(a1, 16) = 0;
  return v2 >= v3;
}
