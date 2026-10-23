/* sub_603346D4
 * address: 0x603346D4   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603346D4(int a1)
{
  int *v2; // r4
  int v3; // r1
  int result; // r0

  v2 = (int *)(a1 + 6092);
  FIELD_U32(a1, 6096) = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6092) + 8))(FIELD_U32(a1, 6092));
  (*(void (__fastcall **)(_DWORD, int *))(**(_DWORD **)(a1 + 6084) + 12))(FIELD_U32(a1, 6084), v2);
  v3 = FIELD_U32(a1, 6100);
  FIELD_U32(a1, 6100) = 0;
  result = (*(int (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 6084) + 16))(FIELD_U32(a1, 6084), v3);
  *v2 = result;
  return result;
}
