/* sub_606A6664
 * address: 0x606A6664   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606A6664(int a1)
{
  float v2; // s0
  int v3; // r0
  int v4; // r1
  int v5; // r2
  ModelWrapper *v6; // r4
  _DWORD v8[16]; // [sp+0h] [bp-40h] BYREF

  sub_606A6418(a1);
  v2 = FIELD_F32(a1, 6108);
  if ( (FIELD_U32(a1, 6116) | 1) == 1 )
    FIELD_F32(a1, 492) = FIELD_F32(a1, 6804) + (float)(v2 - FIELD_F32(a1, 108));
  else
    FIELD_F32(a1, 496) = FIELD_F32(a1, 6808) + (float)(v2 - FIELD_F32(a1, 112));
  FIELD_U32(a1, 6812) = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
  v3 = FIELD_U32(a1, 108);
  FIELD_U32(a1, 6792) = v3;
  v4 = FIELD_U32(a1, 112);
  FIELD_U32(a1, 6796) = v4;
  v5 = FIELD_U32(a1, 116);
  FIELD_U32(a1, 6800) = v5;
  v6 = *(ModelWrapper **)(a1 + 6788);
  v8[0] = 1065353216;
  v8[1] = 0;
  v8[2] = 0;
  v8[4] = 0;
  v8[5] = 1065353216;
  v8[6] = 0;
  v8[8] = 0;
  v8[9] = 0;
  v8[10] = 1065353216;
  v8[3] = v3;
  v8[7] = v4;
  v8[11] = v5;
  (*(void (__fastcall **)(void *, _DWORD *))(*(_DWORD *)FIELD_U32(v6, 0x0) + 60))(FIELD_U32(v6, 0x0), v8);
  return ModelWrapper_updateModel(v6);
}
