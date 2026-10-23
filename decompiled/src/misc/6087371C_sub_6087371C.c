/* sub_6087371C
 * address: 0x6087371C   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int **__fastcall sub_6087371C(int **result)
{
  int v1; // r3
  int v2; // r1
  int v3; // r6
  int v4; // r4
  int v5; // r3
  unsigned int v6; // r1
  unsigned int v7; // r1

  v1 = **result;
  v2 = 0;
  result[3] = 0;
  result[4] = (int *)8;
  result[5] = 0;
  result[6] = (int *)-1;
  result[7] = 0;
  result[8] = (int *)8;
  result[9] = 0;
  result[10] = (int *)-1;
  result[11] = 0;
  result[12] = (int *)8;
  result[13] = 0;
  result[14] = (int *)-1;
  v3 = FIELD_U8(v1, 219);
  result[3] = (int *)(4 * v3);
  v4 = FIELD_U8(v1, 219);
  result[7] = (int *)(4 * v4);
  v5 = FIELD_U8(v1, 219);
  result[11] = (int *)(4 * v5);
  result[1] = 0;
  result[2] = (int *)8;
  if ( v3 )
  {
    result[6] = 0;
    result[1] = (int *)(4 * v3);
    result[2] = (int *)8;
    v2 = 4 * v3;
  }
  if ( v4 )
  {
    v6 = (v2 + 7) & 0xFFFFFFF8;
    result[10] = (int *)v6;
    v2 = 4 * v4 + v6;
    result[1] = (int *)v2;
    result[2] = (int *)8;
  }
  if ( v5 )
  {
    v7 = (v2 + 7) & 0xFFFFFFF8;
    result[14] = (int *)v7;
    result[1] = (int *)(4 * v5 + v7);
    result[2] = (int *)8;
  }
  return result;
}
