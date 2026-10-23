/* sub_60618488
 * address: 0x60618488   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60618488(int a1)
{
  int result; // r0
  _DWORD v3[11]; // [sp+0h] [bp-38h] BYREF
  int v4; // [sp+2Ch] [bp-Ch]

  (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD *))(***(_DWORD ***)(a1 + 6328) + 108))(**(_DWORD **)(a1 + 6328), 0, v3);
  FIELD_U32(a1, 6108) = v3[3];
  FIELD_U32(a1, 6112) = v3[7];
  result = v4;
  FIELD_U32(a1, 6116) = v4;
  return result;
}
