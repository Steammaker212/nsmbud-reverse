/* sub_601560F0
 * address: 0x601560F0   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601560F0(int a1, float a2)
{
  int result; // r0
  int v4; // r2
  int v5; // t1
  unsigned int v6; // r3

  v5 = FIELD_S8(a1, 5360);
  result = a1 + 5360;
  v4 = v5;
  v6 = (unsigned __int8)v5;
  if ( (unsigned __int8)v5 == 255 )
    return FIELD_U32(a1, 2220);
  if ( v6 >= 4 )
    v4 = 0;
  if ( *(float *)(*(_DWORD *)(dword_60CBF354 + 4 * v4 + 32) + 4) >= a2 )
    return FIELD_U32(a1, 2220);
  return result;
}
