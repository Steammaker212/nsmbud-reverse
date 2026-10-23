/* sub_602F66D0
 * address: 0x602F66D0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602F66D0(int a1)
{
  int result; // r0
  _DWORD v3[11]; // [sp+0h] [bp-38h] BYREF
  int v4; // [sp+2Ch] [bp-Ch]

  ((void (*)(void))loc_602F6080)();
  (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD *))(***(_DWORD ***)(a1 + 6304) + 108))(**(_DWORD **)(a1 + 6304), 0, v3);
  FIELD_U32(a1, 6364) = v3[3];
  FIELD_U32(a1, 6368) = v3[7];
  result = v4;
  FIELD_U32(a1, 6372) = v4;
  return result;
}
