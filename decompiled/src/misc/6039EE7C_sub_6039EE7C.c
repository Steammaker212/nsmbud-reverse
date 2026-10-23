/* sub_6039EE7C
 * address: 0x6039EE7C   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6039EE7C(int a1, int a2)
{
  int v3; // r0

  v3 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a2 + 64) + 708))(FIELD_U32(a2, 64));
  FIELD_U32(a1, 4) = v3;
  return v3 != 0;
}
