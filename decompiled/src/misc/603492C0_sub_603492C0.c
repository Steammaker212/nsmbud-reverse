/* sub_603492C0
 * address: 0x603492C0   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603492C0(int a1)
{
  int v1; // r2
  int v2; // r0
  int *v3; // r1
  int result; // r0
  int v5; // r1
  float v6; // s0

  v1 = FIELD_U32(a1, 6368);
  v2 = FIELD_U32(a1, 6356);
  v3 = *(int **)(v2 + 12);
  result = **(_DWORD **)(v2 + 20);
  v5 = *v3;
  if ( v1 == 1 )
  {
    v6 = 16.0;
  }
  else
  {
    if ( v1 )
      return result;
    v6 = 0.0;
  }
  FIELD_F32(v5, 20) = v6;
  FIELD_U32(v5, 28) |= 2u;
  FIELD_F32(result, 20) = v6;
  FIELD_U32(result, 28) |= 2u;
  return result;
}
