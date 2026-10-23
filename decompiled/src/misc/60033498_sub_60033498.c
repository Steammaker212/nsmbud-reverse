/* sub_60033498
 * address: 0x60033498   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60033498(int a1)
{
  _DWORD **v1; // r4
  unsigned int rotY; // r0
  unsigned int rotZ; // r1
  unsigned int rotX; // r5
  int rotY_lower; // s2
  float *rotY_tbl; // r2
  float *rotZ_tbl; // r3
  float *rotX_tbl; // r0
  float v9; // s14
  float rotZ_o; // s0
  float rotY_o; // s2
  float f; // s10
  float e; // s5
  float c; // s6
  float b; // s1
  float d; // s13
  float a; // s9
  Mtx34 mtx; // [sp+0h] [bp-40h] BYREF

  v1 = (_DWORD **)(a1 + 0x189C);
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 0x189C));
  rotY = (unsigned int)*(v1 - 1535);
  rotZ = (unsigned int)*(v1 - 1534);
  rotX = (unsigned int)*(v1 - 1536);
  rotY_lower = rotY & 0xFFFFFF;
  rotY_tbl = (float *)((char *)sinLutTable + ((rotY >> 20) & 0xFF0));
  rotZ_tbl = (float *)((char *)sinLutTable + ((rotZ >> 20) & 0xFF0));
  rotX_tbl = (float *)((char *)sinLutTable + ((rotX >> 20) & 0xFF0));
  v9 = (float)(rotX & 0xFFFFFF);
  rotZ_o = (float)(rotZ & 0xFFFFFF) * 0.000000059605;
  rotY_o = (float)(unsigned int)rotY_lower * 0.000000059605;
  f = rotZ_tbl[2] + (float)(rotZ_o * rotZ_tbl[3]);
  e = rotY_tbl[2] + (float)(rotY_o * rotY_tbl[3]);
  c = *rotZ_tbl + (float)(rotZ_o * rotZ_tbl[1]);
  b = *rotY_tbl + (float)(rotY_o * rotY_tbl[1]);
  d = rotX_tbl[2] + (float)((float)(v9 * 0.000000059605) * rotX_tbl[3]);
  a = *rotX_tbl + (float)((float)(v9 * 0.000000059605) * rotX_tbl[1]);
  mtx.cells[0] = e * f;
  mtx.cells[4] = e * c;
  mtx.cells[8] = -b;
  mtx.cells[1] = (float)((float)(a * b) * f) - (float)(d * c);
  mtx.cells[5] = (float)(d * f) + (float)((float)(a * b) * c);
  mtx.cells[9] = a * e;
  mtx.cells[2] = (float)(b * (float)(d * f)) + (float)(a * c);
  mtx.cells[6] = (float)(b * (float)(d * c)) - (float)(a * f);
  mtx.cells[10] = d * e;
  LODWORD(mtx.cells[3]) = *(v1 - 1548);
  LODWORD(mtx.cells[7]) = *(v1 - 1547);
  LODWORD(mtx.cells[11]) = *(v1 - 1546);
  (*(void (__fastcall **)(_DWORD, Mtx34 *))(*(_DWORD *)**v1 + 60))(**v1, &mtx);
  (*(void (__fastcall **)(_DWORD, _DWORD **))(*(_DWORD *)**v1 + 68))(**v1, v1 - 1539);
  return sub_60421880(*v1);
}
