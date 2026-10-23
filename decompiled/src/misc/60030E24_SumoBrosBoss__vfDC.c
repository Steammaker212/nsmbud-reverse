/* SumoBrosBoss__vfDC
 * address: 0x60030E24   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60025F64
// 
// Overridden by: None
int __fastcall SumoBrosBoss__vfDC(int a1)
{
  int *v2; // r5
  int v3; // r1
  int result; // r0

  FIELD_U32(a1, 116) = FIELD_U32(a1, 7060);
  FIELD_U32(a1, 112) = FIELD_U32(a1, 7056);
  FIELD_U32(a1, 108) = FIELD_U32(a1, 7052);
  FIELD_U32(a1, 128) = FIELD_U32(a1, 7072);
  FIELD_U32(a1, 124) = FIELD_U32(a1, 7068);
  FIELD_U32(a1, 120) = FIELD_U32(a1, 7064);
  FIELD_U32(a1, 100) = FIELD_U32(a1, 7076);
  FIELD_U32(a1, 104) = FIELD_U32(a1, 7080);
  FIELD_U16(a1, 6276) = FIELD_U32(a1, 7084) - 1;
  FIELD_U16(a1, 6278) = FIELD_U32(a1, 7088) - 1;
  v2 = (int *)(a1 + 6092);
  FIELD_U32(a1, 6096) = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6092) + 8))(FIELD_U32(a1, 6092));
  (*(void (__fastcall **)(_DWORD, int *))(**(_DWORD **)(a1 + 6084) + 12))(FIELD_U32(a1, 6084), v2);
  v3 = FIELD_U32(a1, 6100);
  FIELD_U32(a1, 6100) = 0;
  result = (*(int (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 6084) + 16))(FIELD_U32(a1, 6084), v3);
  *v2 = result;
  return result;
}
