/* sub_6056F02C
 * address: 0x6056F02C   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelWrapper *__fastcall sub_6056F02C(float *a1)
{
  float v1; // s0
  float v2; // s2
  float v3; // s4
  float *v4; // r0
  int v5; // t1
  int v6; // r1
  unsigned int v7; // r2
  float *v8; // r2
  float v9; // s8
  float v10; // s10

  v1 = a1[1849] + a1[1852];
  a1[1849] = v1;
  v2 = a1[1850] + a1[1853];
  a1[1850] = v2;
  v3 = a1[1851] + a1[1854];
  a1[1851] = v3;
  v5 = *((_DWORD *)a1 + 1856);
  v4 = a1 + 1856;
  v6 = v5 + dword_60CAE8B0;
  v7 = ((unsigned int)(v5 + dword_60CAE8B0) >> 20) & 0xFF0;
  *(_DWORD *)v4 = v5 + dword_60CAE8B0;
  v8 = (float *)((char *)sinLutTable + v7);
  v9 = *v8;
  v10 = v8[1];
  *(v4 - 1829) = v1;
  *(v4 - 1827) = v3;
  *(v4 - 1828) = v2 + (float)((float)(v9 + (float)((float)((float)(v6 & 0xFFFFFF) * v10) * 0.000000059605)) * 16.0);
  return ModelWrapper_updateAnims(*((ModelWrapper **)v4 - 9));
}
