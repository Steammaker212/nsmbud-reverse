/* MtxTranslateGetItFromHere
 * address: 0x600DDEF0   size: 580   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall MtxTranslateGetItFromHere(StateActor *a1)
{
  char *v2; // r6
  float z; // s4
  float y; // s6
  float v5; // s2
  Vec3 scale; // [sp+0h] [bp-60h] BYREF
  Mtx34 mtx; // [sp+10h] [bp-50h] BYREF

  mtx.cells[0] = 1.0;
  mtx.cells[1] = 0.0;
  mtx.cells[2] = 0.0;
  mtx.cells[4] = 0.0;
  mtx.cells[5] = 1.0;
  mtx.cells[6] = 0.0;
  mtx.cells[8] = 0.0;
  mtx.cells[9] = 0.0;
  mtx.cells[10] = 1.0;
  mtx.cells[3] = FIELD_F32(a1, 0x6C);
  mtx.cells[7] = FIELD_F32(a1, 0x70);
  mtx.cells[11] = FIELD_F32(a1, 0x74);
  Mtx34_rotateY((float32x2_t *)&mtx, (unsigned int *)&FIELD_U32(a1, 0xA0));
  mtx.cells[3] = mtx.cells[3]
               + (float)((float)((float)(mtx.cells[1] * 7.0) + (float)(mtx.cells[0] * 0.0)) + (float)(mtx.cells[2] * 0.0));
  mtx.cells[7] = mtx.cells[7]
               + (float)((float)((float)(mtx.cells[5] * 7.0) + (float)(mtx.cells[4] * 0.0)) + (float)(mtx.cells[6] * 0.0));
  mtx.cells[11] = mtx.cells[11]
                + (float)((float)((float)(mtx.cells[9] * 7.0) + (float)(mtx.cells[8] * 0.0))
                        + (float)(mtx.cells[10] * 0.0));
  Mtx34_rotateX((float32x2_t *)&mtx, (unsigned int *)&FIELD_U32(a1, 0x9C));
  mtx.cells[3] = mtx.cells[3]
               + (float)((float)((float)(mtx.cells[0] * 0.0) - (float)(mtx.cells[1] * 7.0)) + (float)(mtx.cells[2] * 0.0));
  mtx.cells[7] = mtx.cells[7]
               + (float)((float)((float)(mtx.cells[4] * 0.0) - (float)(mtx.cells[5] * 7.0)) + (float)(mtx.cells[6] * 0.0));
  mtx.cells[11] = mtx.cells[11]
                + (float)((float)((float)(mtx.cells[8] * 0.0) - (float)(mtx.cells[9] * 7.0))
                        + (float)(mtx.cells[10] * 0.0));
  Mtx34_rotateZ((float32x2_t *)&mtx, (unsigned int *)&FIELD_U32(a1, 0xA4));
  v2 = &a1[1]._.collisionMgr[352];
  (*(void (__fastcall **)(_DWORD, Mtx34 *))(***(_DWORD ***)&a1[1]._.collisionMgr[352] + 0x3C))(
    **(_DWORD **)&a1[1]._.collisionMgr[352],
    &mtx);
  scale = FIELD_U32(a1, 0x90);
  if ( !BYTE1(a1[1]._._.aCollider.activeNode.prev) )
  {
    z = FIELD_F32(a1, 0x98);
    y = a1[1]._._.field_254.y;
    v5 = a1[1]._._.field_254.x - FIELD_F32(a1, 0x94);
    scale.x = (float)(a1[1]._._.field_248.z - FIELD_F32(a1, 0x90)) + scale.x;
    scale.y = v5 + scale.y;
    scale.z = (float)(y - z) + scale.z;
  }
  (*(void (__fastcall **)(_DWORD, Vec3 *))(***(_DWORD ***)v2 + 0x44))(**(_DWORD **)v2, &scale);
  return sub_60421880(*(_DWORD *)v2);
}
