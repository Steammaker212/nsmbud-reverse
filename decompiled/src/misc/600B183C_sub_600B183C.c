/* sub_600B183C
 * address: 0x600B183C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600B183C(int a1)
{
  _DWORD v3[14]; // [sp+0h] [bp-38h] BYREF

  (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD *))(***(_DWORD ***)(a1 + 7096) + 108))(
    **(_DWORD **)(a1 + 7096),
    FIELD_U32(a1, 7768),
    v3);
  FIELD_U32(a1, 7776) = v3[3];
  FIELD_U32(a1, 7780) = v3[7];
  FIELD_U32(a1, 7784) = 1166843904;
  return 7784;
}
