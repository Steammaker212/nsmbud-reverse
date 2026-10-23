/* sub_607711C8
 * address: 0x607711C8   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607711C8(int a1)
{
  int v2; // r0
  int v3; // r1
  int result; // r0

  if ( (FIELD_U8(a1, 6900) & 1) == 0 )
    JUMPOUT(0x60770F74);
  if ( (FIELD_U8(a1, 6904) & 0x18) == 0 )
  {
    if ( (FIELD_U8(a1, 1213) & 4) != 0 )
      JUMPOUT(0x60771F18);
    JUMPOUT(0x60772240);
  }
  v2 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1204))(a1);
  v3 = a1 + 1276;
  if ( v2 )
    v3 = a1 + 1280;
  result = *(_DWORD *)(*(_DWORD *)v3 + 28);
  FIELD_U32(a1, 104) = result;
  return result;
}
