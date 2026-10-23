/* sub_602E10E8
 * address: 0x602E10E8   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_602E10E8(int a1)
{
  int v1; // r4
  float v2; // s0
  int v3; // t1
  float v4; // s0
  float v5; // s4
  float result; // s0

  v1 = a1;
  sub_602E25E4(a1);
  FIELD_U32(v1, 156) += 50331648;
  CollisionActor__handleGravity((CollisionActor *)v1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)v1);
  sub_602E6F88(v1 + 6328, v2);
  v3 = FIELD_U32(v1, 15360);
  v1 += 15360;
  *(_DWORD *)v1 = v3 + 0x8000000;
  v4 = (float)(*(float *)((char *)sinLutTable + (((unsigned int)(v3 + 0x8000000) >> 20) & 0xFF0))
             + (float)((float)((float)((v3 + 0x8000000) & 0xFFFFFF)
                             * *(float *)((char *)&sinLutTable[1] + (((unsigned int)(v3 + 0x8000000) >> 20) & 0xFF0)))
                     * 0.000000059605))
     * 0.125;
  v5 = v4 + 1.0;
  result = 1.0 - v4;
  *(float *)(v1 - 8960) = v5;
  *(float *)(v1 - 8956) = result;
  return result;
}
