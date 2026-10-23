/* sub_600CE78C
 * address: 0x600CE78C   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600CE78C(int a1)
{
  int v2; // r1
  int v3; // r2
  _DWORD v5[14]; // [sp+0h] [bp-38h] BYREF

  (*(void (__fastcall **)(_DWORD, int, _DWORD *))(***(_DWORD ***)(a1 + 7100) + 108))(**(_DWORD **)(a1 + 7100), 30, v5);
  v2 = v5[7];
  v3 = v5[11];
  FIELD_U32(a1, 7132) = v5[3];
  FIELD_U32(a1, 7136) = v2;
  FIELD_U32(a1, 7140) = v3;
  return 7140;
}
