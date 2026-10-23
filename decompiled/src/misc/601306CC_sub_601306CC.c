/* sub_601306CC
 * address: 0x601306CC   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601306CC(int a1)
{
  int v2; // r0
  int *v3; // r1
  bool v4; // cc
  int result; // r0
  int v6; // r1

  v3 = (int *)(a1 + 6592);
  v2 = FIELD_U32(a1, 6592);
  v4 = v2 <= 1;
  result = v2 - 1;
  *v3 = result;
  if ( v4 )
  {
    FIELD_U32(a1, 6096) = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6092) + 8))(FIELD_U32(a1, 6092));
    (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 6084) + 12))(FIELD_U32(a1, 6084), a1 + 6092);
    v6 = FIELD_U32(a1, 6100);
    FIELD_U32(a1, 6100) = 0;
    result = (*(int (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 6084) + 16))(FIELD_U32(a1, 6084), v6);
    FIELD_U32(a1, 6092) = result;
  }
  return result;
}
