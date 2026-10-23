/* sub_607AE184
 * address: 0x607AE184   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_607AE184(int a1)
{
  int v2; // r0
  bool v3; // zf

  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1064))(a1) || (FIELD_U8(a1, 1224) & 0x10) == 0 )
    return 0;
  v2 = sub_60766708(a1);
  v3 = v2 == 0;
  if ( !v2 )
    v3 = (FIELD_U8(a1, 1230) & 0x40) == 0;
  return v3
      && sub_6078A700()
      && sub_607B920C(a1) == 1
      && (FIELD_U8(a1, 3552) & 1) != 0
      && ((FIELD_U32(a1, 6900) & 0x60) == 0 || (FIELD_U32(a1, 6900) & 3) != 3);
}
