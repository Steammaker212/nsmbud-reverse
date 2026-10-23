/* sub_60090A40
 * address: 0x60090A40   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60090A40(int a1)
{
  unsigned int v2; // r2
  _BOOL4 result; // r0
  int v4; // r0

  v2 = FIELD_U32(a1, 15240);
  result = 0;
  if ( v2 <= 3 )
  {
    v4 = *(_DWORD *)(PlayerMgr_instance + 4 * v2 + 32);
    return v4 && sub_607B8A50(v4, a1) != 0;
  }
  return result;
}
