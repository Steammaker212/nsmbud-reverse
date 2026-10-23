/* sub_609048C0
 * address: 0x609048C0   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_609048C0(int a1)
{
  int v2; // r1
  _BOOL4 result; // r0

  v2 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 16))(FIELD_U32(a1, 4));
  result = 0;
  if ( v2 == 1 )
    return FIELD_U32(a1, 20) >= FIELD_U32(a1, 16);
  return result;
}
