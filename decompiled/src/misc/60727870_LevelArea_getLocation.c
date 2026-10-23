/* LevelArea_getLocation
 * address: 0x60727870   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned __int16 *__fastcall LevelArea_getLocation(int a1, float *a2, int a3)
{
  unsigned int v3; // r12
  unsigned __int16 *result; // r0
  unsigned int v5; // lr
  unsigned int v6; // s6
  float v7; // s0
  float v8; // s2
  float v9; // s4

  v3 = FIELD_U32(a1, 164);
  if ( !v3 )
    return 0;
  result = *(unsigned __int16 **)(a1 + 44);
  v5 = 0;
  while ( *((unsigned __int8 *)result + 8) != a3 )
  {
    ++v5;
    result += 6;
    if ( v5 >= v3 )
      return 0;
  }
  if ( a2 )
  {
    v6 = result[3];
    v7 = (float)*result;
    v8 = (float)(int)(v6 + result[1]);
    v9 = (float)result[2];
    *a2 = v7;
    a2[1] = -v8;
    a2[2] = v7 + v9;
    a2[3] = (float)v6 - v8;
  }
  return result;
}
