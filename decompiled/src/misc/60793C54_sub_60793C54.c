/* sub_60793C54
 * address: 0x60793C54   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60793C54(int a1, float a2)
{
  int v2; // r0
  unsigned int v3; // r1
  int result; // r0
  int v5; // r4
  float v6; // s2
  int v7; // r5

  v2 = FIELD_U32(a1, 24);
  v3 = FIELD_U32(v2, 8);
  result = FIELD_U32(v2, 12);
  if ( v3 > 1 )
    result += 4;
  v5 = *(_DWORD *)result;
  v6 = *(float *)(*(_DWORD *)result + 24);
  *(float *)(*(_DWORD *)result + 24) = a2;
  if ( (float)(v6 * a2) <= 0.0 )
  {
    v7 = FIELD_U32(v5, 20);
    sub_6041838C((ModelAnimation *)(v5 + 4));
    FIELD_U32(v5, 20) = v7;
    result = FIELD_U32(v5, 28) | 2;
    FIELD_U32(v5, 28) = result;
  }
  return result;
}
