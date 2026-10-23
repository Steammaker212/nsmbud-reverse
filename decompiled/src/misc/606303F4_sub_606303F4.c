/* sub_606303F4
 * address: 0x606303F4   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606303F4(_DWORD *a1, float a2)
{
  int v2; // r1
  int v3; // r1
  int result; // r0

  v2 = **(_DWORD **)(*a1 + 20);
  FIELD_F32(v2, 20) = a2;
  FIELD_U32(v2, 28) |= 2u;
  v3 = **(_DWORD **)(a1[1] + 20);
  FIELD_F32(v3, 20) = a2;
  FIELD_U32(v3, 28) |= 2u;
  result = **(_DWORD **)(a1[2] + 20);
  FIELD_F32(result, 20) = a2;
  FIELD_U32(result, 28) |= 2u;
  return result;
}
