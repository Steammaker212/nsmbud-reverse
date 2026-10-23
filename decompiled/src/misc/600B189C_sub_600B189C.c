/* sub_600B189C
 * address: 0x600B189C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600B189C(int a1)
{
  _DWORD v3[14]; // [sp+0h] [bp-38h] BYREF

  (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD *))(***(_DWORD ***)(a1 + 7096) + 108))(
    **(_DWORD **)(a1 + 7096),
    FIELD_U32(a1, 7772),
    v3);
  FIELD_U32(a1, 7788) = v3[3];
  FIELD_U32(a1, 7792) = v3[7];
  FIELD_U32(a1, 7796) = 1166843904;
  return 7796;
}
