/* sub_60996D20
 * address: 0x60996D20   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60996D20(int result, int a2)
{
  int v2; // r5
  int v4; // r6
  bool v5; // zf

  v2 = result;
  v4 = FIELD_U32(result, 36);
  FIELD_U32(result, 36) = a2;
  v5 = v4 == 0;
  if ( v4 )
    v5 = v4 == a2;
  if ( !v5 )
    result = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(v4 + 12) + 156))(FIELD_U32(v4, 12));
  if ( a2 )
  {
    sub_609978D8(a2, v2 + 44);
    result = FIELD_U32(a2, 16);
    FIELD_U32(result, 104) = a2;
    if ( v4 != a2 )
      return (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a2 + 12) + 152))(FIELD_U32(a2, 12));
  }
  return result;
}
