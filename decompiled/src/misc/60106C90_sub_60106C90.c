/* sub_60106C90
 * address: 0x60106C90   size: 468   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60106C90(StateActor *a1, int a2, float *a3, unsigned int *a4)
{
  float v8; // s18
  Mtx34 v10; // [sp+0h] [bp-58h] BYREF

  v10.cells[0] = 1.0;
  v10.cells[1] = 0.0;
  v10.cells[2] = 0.0;
  v10.cells[4] = 0.0;
  v10.cells[5] = 1.0;
  v10.cells[6] = 0.0;
  v10.cells[8] = 0.0;
  v10.cells[9] = 0.0;
  v10.cells[10] = 1.0;
  v10.cells[3] = *a3;
  v10.cells[7] = a3[1];
  v10.cells[11] = a3[2];
  Mtx34_rotateY((float32x2_t *)&v10, a4 + 1);
  Mtx34_rotateX((float32x2_t *)&v10, a4);
  v8 = (float)(FIELD_F32(a1, 0x6C) + *(float *)&a1[1]._._.field_60) - *a3;
  v10.cells[3] = v10.cells[3]
               + (float)((float)((float)(v10.cells[1] * 0.0) + (float)(v10.cells[0] * v8)) + (float)(v10.cells[2] * 0.0));
  v10.cells[7] = v10.cells[7]
               + (float)((float)((float)(v10.cells[5] * 0.0) + (float)(v8 * v10.cells[4])) + (float)(v10.cells[6] * 0.0));
  v10.cells[11] = v10.cells[11]
                + (float)((float)((float)(v10.cells[9] * 0.0) + (float)(v8 * v10.cells[8]))
                        + (float)(v10.cells[10] * 0.0));
  Mtx34_rotateZ((float32x2_t *)&v10, a4 + 2);
  v10.cells[3] = v10.cells[3]
               + (float)((float)((float)(v10.cells[1] * 0.0) - (float)(v10.cells[0] * v8)) + (float)(v10.cells[2] * 0.0));
  v10.cells[7] = v10.cells[7]
               + (float)((float)((float)(v10.cells[5] * 0.0) - (float)(v10.cells[4] * v8)) + (float)(v10.cells[6] * 0.0));
  v10.cells[11] = v10.cells[11]
                + (float)((float)((float)(v10.cells[9] * 0.0) - (float)(v10.cells[8] * v8))
                        + (float)(v10.cells[10] * 0.0));
  (*(void (__fastcall **)(int, Mtx34 *))(*(_DWORD *)a2 + 60))(a2, &v10);
  (*(void (__fastcall **)(int, Vec3 *))(*(_DWORD *)a2 + 68))(a2, &FIELD_U32(a1, 0x90));
  (*(void (__fastcall **)(int))(*(_DWORD *)a2 + 52))(a2);
  return (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 56))(a2);
}
