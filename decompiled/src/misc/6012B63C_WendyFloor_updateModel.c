/* WendyFloor_updateModel
 * address: 0x6012B63C   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall WendyFloor_updateModel(StateActor *this_)
{
  unsigned int rotY; // r12
  unsigned int rotZ; // r1
  unsigned int rotX; // r0
  int v5; // s0
  int v6; // s14
  float *v7; // r1
  float v8; // s0
  float v9; // s2
  float *v10; // r0
  float v11; // s6
  float v12; // s8
  float v13; // s10
  float v14; // s12
  float *v15; // r1
  float v16; // s14
  float v17; // s10
  float v18; // s6
  float v19; // s5
  float v20; // s1
  float v21; // s13
  float v22; // s9
  Mtx34 mtx; // [sp+0h] [bp-38h] BYREF

  rotY = FIELD_U32(this_, 0x0)._.rotation.y;
  rotZ = FIELD_U32(this_, 0x0)._.rotation.z;
  rotX = FIELD_U32(this_, 0x0)._.rotation.x;
  v5 = rotZ & 0xFFFFFF;
  v6 = rotX & 0xFFFFFF;
  v7 = (float *)((char *)sinLutTable + ((rotZ >> 20) & 0xFF0));
  v8 = (float)(unsigned int)v5 * 0.000000059605;
  v9 = (float)(rotY & 0xFFFFFF) * 0.000000059605;
  v10 = (float *)((char *)sinLutTable + ((rotX >> 20) & 0xFF0));
  v11 = *v7;
  v12 = v7[1];
  v13 = v7[2];
  v14 = v7[3];
  v15 = (float *)((char *)sinLutTable + ((rotY >> 20) & 0xFF0));
  v16 = (float)(unsigned int)v6;
  v17 = v13 + (float)(v8 * v14);
  v18 = v11 + (float)(v8 * v12);
  v19 = v15[2] + (float)(v9 * v15[3]);
  v20 = *v15 + (float)(v9 * v15[1]);
  v21 = v10[2] + (float)((float)(v16 * 0.000000059605) * v10[3]);
  v22 = *v10 + (float)((float)(v16 * 0.000000059605) * v10[1]);
  mtx.cells[0] = v19 * v17;
  mtx.cells[4] = v19 * v18;
  mtx.cells[8] = -v20;
  mtx.cells[1] = (float)((float)(v22 * v20) * v17) - (float)(v21 * v18);
  mtx.cells[5] = (float)(v21 * v17) + (float)((float)(v22 * v20) * v18);
  mtx.cells[9] = v22 * v19;
  mtx.cells[2] = (float)(v20 * (float)(v21 * v17)) + (float)(v22 * v18);
  mtx.cells[6] = (float)(v20 * (float)(v21 * v18)) - (float)(v22 * v17);
  mtx.cells[10] = v21 * v19;
  mtx.cells[3] = FIELD_U32(this_, 0x0)._.position.x;         // Translate
  mtx.cells[7] = FIELD_U32(this_, 0x0)._.position.y;
  mtx.cells[11] = FIELD_U32(this_, 0x0)._.position.z;
  (*(void (__fastcall **)(_DWORD, Mtx34 *))(**(_DWORD **)FIELD_U32(this_, 0x0).field_284 + 0x3C))(
    *(_DWORD *)FIELD_U32(this_, 0x0).field_284,
    &mtx);
  return ModelWrapper_updateModel((ModelWrapper *)FIELD_U32(this_, 0x0).field_284);
}
