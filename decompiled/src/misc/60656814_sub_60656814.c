/* sub_60656814
 * address: 0x60656814   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60656814(int a1, _DWORD *a2, unsigned int a3)
{
  int result; // r0
  _DWORD v5[11]; // [sp+0h] [bp-38h] BYREF
  int v6; // [sp+2Ch] [bp-Ch]

  if ( a3 >= 8 )
    a3 = 0;
  (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD *))(**(_DWORD **)(a1 + 8) + 108))(
    FIELD_U32(a1, 8),
    *(_DWORD *)(a1 + 76 * a3 + 72),
    v5);
  *a2 = v5[3];
  a2[1] = v5[7];
  result = v6;
  a2[2] = v6;
  return result;
}
