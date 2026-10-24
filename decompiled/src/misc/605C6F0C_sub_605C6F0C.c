/* sub_605C6F0C
 * address: 0x605C6F0C   size: 504   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605C6F0C(LightSource *a1, float *a2, float *a3)
{
  int result; // r0
  float v6; // s0
  float v7; // s0
  float v8; // s0
  float v9; // r1
  int vtable; // r10
  int containingHeap; // r7
  int v12; // r6
  Vec3 position; // [sp+14h] [bp-64h] BYREF
  __int64 v14; // [sp+20h] [bp-58h] BYREF
  float v15; // [sp+28h] [bp-50h]
  float v16; // [sp+2Ch] [bp-4Ch]
  float v17; // [sp+30h] [bp-48h]
  float v18; // [sp+34h] [bp-44h]
  float v19; // [sp+38h] [bp-40h]
  float v20; // [sp+3Ch] [bp-3Ch]
  float v21; // [sp+40h] [bp-38h]
  float v22; // [sp+44h] [bp-34h]
  float v23; // [sp+48h] [bp-30h]
  float v24; // [sp+4Ch] [bp-2Ch]
  Vec2 out; // [sp+50h] [bp-28h] BYREF

  result = LOBYTE(FIELD_U32(a1 + (4) * 72, 0x8));
  if ( (result & 1) != 0 )
  {
    v6 = *a3;
    *(float *)&v14 = *a2 * *a3;
    v17 = v6 * a2[4];
    v21 = a2[8] * v6;
    v7 = a3[1];
    *((float *)&v14 + 1) = a2[1] * v7;
    v18 = v7 * a2[5];
    v22 = a2[9] * v7;
    v8 = a3[2];
    v15 = a2[2] * v8;
    v19 = v8 * a2[6];
    v23 = a2[10] * v8;
    v16 = a2[3];
    v20 = a2[7];
    v24 = a2[11];
    sub_602372C0((int)&FIELD_U32(a1, 0x8), 605, &v14, 1);
    v9 = a2[7];
    vtable = FIELD_U32(a1, 0x0);
    containingHeap = FIELD_U32(a1, 0x4);
    v12 = Global_BasicSoundActor2;
    position.x = a2[3];
    position.y = v9;
    mapPositionToScreen(&out, &position);
    SE_OBJ_FIRE_CANNON_BLAZE_ref_2(v12, off_60C0A44C[containingHeap], vtable, &out, 0);
    position.x = v16
               + (float)((float)((float)(*((float *)&v14 + 1) * 8.0) + (float)(*(float *)&v14 * 0.0))
                       + (float)(v15 * 0.0));
    position.y = v20 + (float)((float)((float)(v18 * 8.0) + (float)(v17 * 0.0)) + (float)(v19 * 0.0));
    position.z = v24 + (float)((float)((float)(v22 * 8.0) + (float)(v21 * 0.0)) + (float)(v23 * 0.0));
    FIELD_U32(a1 + (4) * 72, 0x4) = FIELD_U32(a1 + (4) * 72, 0x0) - 0x40000000;
    LightSource_update1(a1 + 3, 23, &position, &FIELD_U32(a1 + (4) * 72, 0x4), &flt_60B056FC[FIELD_U32(a1, 0x4)], 0, 0, 0, 0);
    result = LOBYTE(FIELD_U32(a1 + (4) * 72, 0x8));
  }
  if ( (result & 2) != 0 )
    return sub_602372C0((int)&FIELD_F32(a1 + (1) * 72, 0x28), 32, (__int64 *)a2, 0);
  return result;
}
