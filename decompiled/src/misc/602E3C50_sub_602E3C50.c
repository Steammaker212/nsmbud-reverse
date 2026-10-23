/* sub_602E3C50
 * address: 0x602E3C50   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602E3C50(int a1)
{
  int v1; // r4
  float v2; // s0
  int v3; // t1
  int result; // r0

  v1 = a1;
  sub_602E25E4(a1);
  CollisionActor__handleGravity((CollisionActor *)v1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)v1);
  sub_602E6F88(v1 + 6328, v2);
  v3 = FIELD_U32(v1, 15356);
  v1 += 15356;
  *(_DWORD *)v1 = v3 + 0x10000000;
  result = (int)(float)((float)(*(float *)((char *)sinLutTable + (((unsigned int)(v3 + 0x10000000) >> 20) & 0xFF0))
                              + (float)((float)((float)((v3 + 0x10000000) & 0xFFFFFF)
                                              * *(float *)((char *)&sinLutTable[1]
                                                         + (((unsigned int)(v3 + 0x10000000) >> 20) & 0xFF0)))
                                      * 0.000000059605))
                      * 4096.0) << 16;
  *(_DWORD *)(v1 - 9032) = result;
  return result;
}
