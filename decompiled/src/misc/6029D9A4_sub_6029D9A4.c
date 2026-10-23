/* sub_6029D9A4
 * address: 0x6029D9A4   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6029D9A4(int a1)
{
  int result; // r0
  int v3; // r1

  result = FIELD_U16(a1, 6276);
  if ( !result )
  {
    FIELD_U32(a1, 6096) = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6092) + 8))(FIELD_U32(a1, 6092));
    (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 6084) + 12))(FIELD_U32(a1, 6084), a1 + 6092);
    v3 = FIELD_U32(a1, 6100);
    FIELD_U32(a1, 6100) = 0;
    result = (*(int (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 6084) + 16))(FIELD_U32(a1, 6084), v3);
    FIELD_U32(a1, 6092) = result;
  }
  return result;
}
