/* sub_608596E8
 * address: 0x608596E8   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float32x4_t *__fastcall sub_608596E8(float32x4_t *a1, int a2, int a3)
{
  float32x4_t *result; // r0
  unsigned int v7; // r8
  bool v8; // zf
  float32x4_t *v9; // r7
  unsigned __int32 v10; // r6
  int v11; // r5

  result = (float32x4_t *)FIELD_U32(a1 + (4) * 16, 0x0)[0];
  v7 = (unsigned __int8)result & 0x10;
  v8 = ((unsigned __int8)result & 0x40) == 0;
  if ( ((unsigned __int8)result & 0x40) == 0 )
    v8 = ((((unsigned __int8)result & 0x10) == 0) & (a3 ^ 1)) == 0;
  if ( v8 )
  {
    FIELD_U32(a1 + (4) * 16, 0x0)[0] = (unsigned __int8)result & 0xEF;
    result = sub_60858FD0(a1, a2);
  }
  v9 = a1 + 1;
  v10 = FIELD_U32(a1 + (1) * 16, 0x0)[1];
  if ( (float32x4_t *)v10 != v9 )
  {
    v11 = a3 | (v7 >> 4);
    do
    {
      result = (float32x4_t *)sub_608596E8(v10 - 4, a2, v11);
      v10 = FIELD_U32(v10, 4);
    }
    while ( (float32x4_t *)v10 != v9 );
  }
  return result;
}
