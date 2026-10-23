/* sub_606D3048
 * address: 0x606D3048   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606D3048(int a1)
{
  int result; // r0
  _DWORD *v3; // r0
  int v4; // r1

  FIELD_U32(a1, 6856) = FIELD_U32(a1, 164);
  sub_6069E56C(a1 + 6152, (_DWORD *)a1);
  result = FIELD_U8(a1, 23);
  if ( (result & 0x10) != 0 )
  {
    FIELD_U32(a1, 6884) = FIELD_U32(a1, 6864);
    FIELD_U32(a1, 6888) = FIELD_U32(a1, 6868);
    FIELD_U32(a1, 6892) = FIELD_U32(a1, 6872);
    v3 = *(_DWORD **)(a1 + 6900);
    v3[29] = FIELD_U32(a1, 6892);
    v3[28] = FIELD_U32(a1, 6888);
    v3[27] = FIELD_U32(a1, 6884);
    result = FIELD_U32(a1, 164);
    v4 = FIELD_U32(a1, 6900);
    FIELD_U32(v4, 164) = result;
    FIELD_U32(v4, 6692) = result;
  }
  return result;
}
