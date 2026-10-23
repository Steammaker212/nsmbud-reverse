/* sub_600CEA24
 * address: 0x600CEA24   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600CEA24(int a1)
{
  int result; // r0
  _DWORD v3[11]; // [sp+0h] [bp-38h] BYREF
  int v4; // [sp+2Ch] [bp-Ch]

  (*(void (__fastcall **)(_DWORD, int, _DWORD *))(***(_DWORD ***)(a1 + 7100) + 108))(**(_DWORD **)(a1 + 7100), 1, v3);
  FIELD_U32(a1, 7180) = v3[3];
  FIELD_U32(a1, 7184) = v3[7];
  result = v4;
  FIELD_U32(a1, 7188) = v4;
  return result;
}
