/* sub_600A608C
 * address: 0x600A608C   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600A608C(StateActor *a1)
{
  float z; // r2
  float v3; // r0
  float v4; // r1
  Vec3 *p_position; // r1
  int v6; // r0
  signed int v7; // r0
  int v8; // r5

  if ( (*(int (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0) + 716))(a1)
    || (*(int (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0) + 720))(a1) == 1 )
  {
    *(_DWORD *)&a1[1]._.collisionMgr[1904] = 1;
    ((void (__fastcall *)(StateActor *))loc_600A96C0)(a1);
    z = FIELD_F32(a1, 0x74);
    v3 = *(float *)&a1[1]._.collisionMgr[1912];
    v4 = *(float *)&a1[1]._.collisionMgr[1908];
    FIELD_F32(a1, 0x6C) = v4;
    FIELD_F32(a1, 0x70) = v3;
    FIELD_F32(a1, 0x248) = v4;
    FIELD_F32(a1, 0x24C) = v3;
    FIELD_F32(a1, 0x250) = z;
    FIELD_F32(a1, 0x260) = v4;
    FIELD_F32(a1, 0x264) = v3;
    FIELD_F32(a1, 0x268) = z;
    p_position = &FIELD_U32(a1, 0x6C);
  }
  else
  {
    v6 = dword_60CC6484;
    FIELD_F32(a1, 0x6C) = FIELD_F32(dword_60CC6484, 116);
    p_position = &FIELD_U32(a1, 0x6C);
    FIELD_F32(a1, 0x70) = FIELD_F32(v6, 128) + 64.0;
    FIELD_U32(a1, 0xA0) = 0;
  }
  FIELD_F32(a1, 0x78) = 0.0;
  FIELD_F32(a1, 0x7C) = 0.0;
  FIELD_F32(a1, 0x68) = 0.0;
  FIELD_F32(a1, 0x64) = 0.0;
  v7 = StageActor__directionToPlayerX(a1, p_position);
  FIELD_U32(a1, 0x50) = v7;
  v8 = byte_60AFE3F4[v7];
  FIELD_U32(a1, 0xA0) = (*(int (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0) + 1216))(a1) * v8;
  (*(void (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0) + 72))(a1);
  LOWORD(a1[1]._._.field_B0) = 20;
  return 6276;
}
