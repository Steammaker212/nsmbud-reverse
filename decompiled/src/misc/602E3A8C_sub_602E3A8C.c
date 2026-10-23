/* sub_602E3A8C
 * address: 0x602E3A8C   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602E3A8C(int a1)
{
  float v2; // s0
  int v3; // r12
  int result; // r0
  float v5; // s0

  sub_602E25E4(a1);
  FIELD_U32(a1, 156) += 50331648;
  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  sub_602E6F88(a1 + 6328, v2);
  v3 = FIELD_U32(a1, 15360);
  result = v3 + 0x10000000;
  FIELD_U32(a1, 15360) = v3 + 0x10000000;
  v5 = (float)(*(float *)((char *)sinLutTable + (((unsigned int)(v3 + 0x10000000) >> 20) & 0xFF0))
             + (float)((float)((float)((v3 + 0x10000000) & 0xFFFFFF)
                             * *(float *)((char *)&sinLutTable[1] + (((unsigned int)(v3 + 0x10000000) >> 20) & 0xFF0)))
                     * 0.000000059605))
     * 0.25;
  FIELD_F32(a1, 6400) = v5 + 1.0;
  FIELD_F32(a1, 6404) = 1.0 - v5;
  if ( v3 < 0 && result >= 0 )
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C92268);
  return result;
}
