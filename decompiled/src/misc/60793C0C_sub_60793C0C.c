/* sub_60793C0C
 * address: 0x60793C0C   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60793C0C(int a1, float a2)
{
  int result; // r0
  int v3; // r4
  float v4; // s2
  int v5; // r5

  result = *(_DWORD *)(FIELD_U32(a1, 24) + 12);
  v3 = *(_DWORD *)result;
  v4 = *(float *)(*(_DWORD *)result + 24);
  *(float *)(*(_DWORD *)result + 24) = a2;
  if ( (float)(v4 * a2) <= 0.0 )
  {
    v5 = FIELD_U32(v3, 20);
    sub_6041838C((ModelAnimation *)(v3 + 4));
    FIELD_U32(v3, 20) = v5;
    result = FIELD_U32(v3, 28) | 2;
    FIELD_U32(v3, 28) = result;
  }
  return result;
}
