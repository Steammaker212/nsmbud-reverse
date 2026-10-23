/* sub_6056F248
 * address: 0x6056F248   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelWrapper *__fastcall sub_6056F248(int a1)
{
  float *v1; // r0
  int v2; // t1
  unsigned int v3; // r1
  int v4; // r3
  float v5; // s2
  float v6; // s4
  float v7; // s0
  float v8; // s4

  v2 = FIELD_U32(a1, 7424);
  v1 = (float *)(a1 + 7424);
  v3 = v2 + dword_60CAE8B0;
  *(_DWORD *)v1 = v2 + dword_60CAE8B0;
  v4 = (v3 >> 20) & 0xFF0;
  v5 = *(float *)((char *)sinLutTable + v4);
  v6 = *(float *)((char *)&sinLutTable[1] + v4);
  *(v1 - 1829) = *(v1 - 7);
  v7 = (float)(v3 & 0xFFFFFF) * v6;
  v8 = *(v1 - 6);
  *(v1 - 1827) = *(v1 - 5);
  *(v1 - 1828) = v8 + (float)((float)(v5 + (float)(v7 * 0.000000059605)) * 16.0);
  return ModelWrapper_updateAnims(*((ModelWrapper **)v1 - 9));
}
