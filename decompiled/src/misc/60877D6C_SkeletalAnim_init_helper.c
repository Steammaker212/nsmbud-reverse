/* SkeletalAnim_init_helper
 * address: 0x60877D6C   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall SkeletalAnim_init_helper(int *result)
{
  int v1; // r3
  int v2; // lr
  int v3; // r1
  int v4; // r2
  int v5; // r5
  int v6; // r4
  unsigned int v7; // r3
  int v8; // r6
  int v9; // r2
  unsigned int v10; // r1
  unsigned int v11; // r1

  v1 = *result;
  v2 = result[1];
  v3 = 0;
  v4 = result[2];
  result[8] = 8;
  result[9] = 0;
  result[10] = -1;
  result[12] = 8;
  result[13] = 0;
  result[14] = -1;
  result[15] = 0;
  result[16] = 8;
  result[17] = 0;
  result[18] = -1;
  result[19] = 0;
  result[20] = 8;
  result[21] = 0;
  result[22] = -1;
  if ( v1 < v2 )
    v1 = v2;
  v5 = 48 * v2;
  v6 = 4 * v1;
  result[7] = 48 * v2;
  result[11] = 4 * v1;
  v7 = 0;
  if ( *((_BYTE *)result + 13) )
  {
    v7 = 0;
    if ( *((_BYTE *)result + 12) )
      v7 = (12 * v4 + 7) & 0xFFFFFFF8;
  }
  result[15] = v7;
  v8 = 16;
  v9 = *((unsigned __int8 *)result + 14);
  if ( *((_BYTE *)result + 14) )
    v9 = 16 * v2;
  result[19] = v9;
  result[20] = 16;
  result[21] = 0;
  result[5] = 0;
  if ( v5 )
  {
    v3 = 8;
    v8 = 0;
  }
  result[6] = 8;
  if ( v5 )
  {
    result[10] = v8;
    result[6] = v3;
    result[5] = v5;
    v3 = 48 * v2;
  }
  if ( v6 )
  {
    result[14] = v3;
    v3 += v6;
    result[6] = 8;
    result[5] = v3;
  }
  if ( v7 )
  {
    v10 = (v3 + 7) & 0xFFFFFFF8;
    result[18] = v10;
    v3 = v7 + v10;
    result[6] = 8;
    result[5] = v3;
  }
  if ( v9 )
  {
    v11 = (v3 + 15) & 0xFFFFFFF0;
    result[22] = v11;
    result[6] = 16;
    result[5] = v9 + v11;
  }
  return result;
}
