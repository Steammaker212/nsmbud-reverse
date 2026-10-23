/* sub_607717C0
 * address: 0x607717C0   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607717C0(int a1)
{
  int result; // r0
  int v3; // r1
  float v4; // s0

  result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1100))(a1);
  FIELD_U32(a1, 100) = FIELD_U32(result, 68);
  v3 = 0;
  v4 = FIELD_F32(a1, 124);
  if ( v4 > FIELD_F32(result, 4)
    || (v3 = 1, v4 > FIELD_F32(result, 8))
    || (v3 = 2, v4 > FIELD_F32(result, 12))
    || (v3 = 3, v4 > FIELD_F32(result, 16))
    || (v3 = 4, v4 > FIELD_F32(result, 20)) )
  {
    result = *(_DWORD *)(result + 4 * v3 + 48);
    FIELD_U32(a1, 100) = result;
  }
  return result;
}
