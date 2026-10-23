/* sub_6072B9B0
 * address: 0x6072B9B0   size: 512   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6072B9B0(int a1, float a2, float a3, float a4, float a5)
{
  int v7; // r8
  float v8; // s20
  float v9; // s22
  _BYTE *v10; // r6
  char v11; // r12
  int v12; // r7
  float v13; // s26
  float v14; // s28
  float v15; // s2
  float result; // s0
  Vec3 *v17; // [sp+20h] [bp-A0h]
  ActorBuildInfo v19[3]; // [sp+30h] [bp-90h] BYREF

  v7 = 20;
  v8 = a5 - a4;
  v9 = a3 - a2;
  v17 = (Vec3 *)(a1 + 6312);
  do
  {
    memset(v19, 0, 44);
    v19[0].profile = Profile__get(0x1B6u);
    v19[0].position = *v17;
    v10 = ActorMgr__create((void *)ActorMgr__instance, v19, 0);
    if ( ((unsigned int)&dword_60CBD940 & ~(1618131676 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60CBD940) )
    {
      dword_60CBD93C = (int)&off_60BD48EC;
      _cxa_guard_release(&dword_60CBD940);
    }
    if ( v10 )
    {
      v12 = (**(int (__fastcall ***)(_BYTE *, int *))v10)(v10, &dword_60CBD93C);
      if ( v12 )
        v12 = (int)v10;
    }
    else
    {
      v12 = 0;
    }
    v13 = COERCE_FLOAT((sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 9) | 0x3F800000) + -1.0;
    v14 = *(float *)&dword_60AF1F60[FIELD_U32(a1, 80)];
    --v7;
    LODWORD(v15) = (sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 9) | 0x3F800000;
    FIELD_U32(v12, 128) = 0;
    result = v14 * (float)(a2 + (float)(v9 * v13));
    FIELD_F32(v12, 120) = result;
    FIELD_F32(v12, 124) = a4 + (float)(v8 * (float)(v15 + -1.0));
  }
  while ( v7 );
  return result;
}
