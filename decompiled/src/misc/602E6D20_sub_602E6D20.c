/* sub_602E6D20
 * address: 0x602E6D20   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602E6D20(_DWORD *a1)
{
  int v1; // r2
  int v2; // r2
  int v3; // r2
  int v4; // r2
  int result; // r0

  v1 = **(_DWORD **)(*a1 + 20);
  FIELD_U32(v1, 20) = 0;
  FIELD_U32(v1, 28) |= 2u;
  v2 = **(_DWORD **)(*a1 + 28);
  FIELD_U32(v2, 20) = 0;
  FIELD_U32(v2, 28) |= 2u;
  *(_DWORD *)(**(_DWORD **)(*a1 + 20) + 24) = 0;
  *(_DWORD *)(**(_DWORD **)(*a1 + 28) + 24) = 0;
  v3 = **(_DWORD **)(a1[1] + 20);
  FIELD_U32(v3, 20) = 0;
  FIELD_U32(v3, 28) |= 2u;
  v4 = **(_DWORD **)(a1[1] + 28);
  FIELD_U32(v4, 20) = 0;
  FIELD_U32(v4, 28) |= 2u;
  *(_DWORD *)(**(_DWORD **)(a1[1] + 20) + 24) = 0;
  result = **(_DWORD **)(a1[1] + 28);
  FIELD_U32(result, 24) = 0;
  return result;
}
