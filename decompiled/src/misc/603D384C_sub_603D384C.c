/* sub_603D384C
 * address: 0x603D384C   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603D384C(int a1)
{
  int result; // r0
  int v3; // [sp+0h] [bp-10h] BYREF
  int target[3]; // [sp+4h] [bp-Ch] BYREF

  target[0] = dword_60AF2128[FIELD_U32(a1, 80)];
  v3 = 0x8000000;
  result = moveValueTo((int *)(a1 + 160), target, &v3);
  if ( result == 1 )
  {
    target[0] = -29818880 * byte_60AFE3F4[FIELD_U32(a1, 80)];
    v3 = 100663296;
    result = moveValueTo((int *)(a1 + 6356), target, &v3);
    if ( result == 1 )
    {
      result = FIELD_U8(a1, 2872);
      if ( (result & 1) != 0 )
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C98E80);
    }
  }
  return result;
}
