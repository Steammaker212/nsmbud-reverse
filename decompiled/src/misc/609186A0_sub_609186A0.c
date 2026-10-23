/* sub_609186A0
 * address: 0x609186A0   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609186A0(int a1, int a2, _DWORD *a3)
{
  int v3; // r3
  int v4; // r5
  int v5; // r2
  int v6; // r0
  int result; // r0

  v3 = a3[34];
  v4 = a3[37];
  v5 = a3[36];
  *(_DWORD *)(FIELD_U32(a1, 56) + 4 * a2) = v3;
  v6 = FIELD_U32(a1, 88);
  *(_DWORD *)(v6 + 8 * a2) = v5;
  result = v6 + 8 * a2;
  FIELD_U32(result, 4) = v4;
  return result;
}
