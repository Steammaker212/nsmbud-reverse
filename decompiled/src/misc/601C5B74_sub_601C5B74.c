/* sub_601C5B74
 * address: 0x601C5B74   size: 836   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C5B74(int a1)
{
  int v2; // r0
  int v3; // r6
  float v4; // s0
  float v5; // s0
  float v6; // r0
  int v7; // r7
  int v8; // r5
  int v9; // r6
  char v10; // r12
  float v11; // s0
  float v12; // s2
  float v13; // s4
  float v14; // s0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  bool v18; // cc
  int v19; // r1
  int v20; // r0
  int v21; // r0
  int v23; // [sp+0h] [bp-68h]
  unsigned int v24; // [sp+10h] [bp-58h] BYREF
  float32x2_t v25; // [sp+14h] [bp-54h] BYREF
  float v26; // [sp+1Ch] [bp-4Ch]
  float v27; // [sp+24h] [bp-44h]
  float v28; // [sp+28h] [bp-40h]
  float v29; // [sp+2Ch] [bp-3Ch]
  float v30; // [sp+34h] [bp-34h]
  float v31; // [sp+38h] [bp-30h]
  float v32; // [sp+3Ch] [bp-2Ch]

  v2 = FIELD_U32(a1, 284);
  if ( v2 < 1 )
  {
    v4 = FIELD_F32(a1, 356) + FIELD_F32(a1, 352);
    FIELD_F32(a1, 352) = v4;
    v5 = v4 + FIELD_F32(a1, 364);
    FIELD_F32(a1, 364) = v5;
    if ( v5 >= 0.0 )
    {
      v6 = v5;
      v3 = 0;
    }
    else
    {
      FIELD_U32(a1, 360) = 0;
      FIELD_U32(a1, 364) = 0;
      FIELD_U32(a1, 368) = 0;
      v3 = 1;
      FIELD_U32(a1, 284) = (5 * (unsigned __int64)sead__Random__getU32((void *)sead__GlobalRandom__sInstance)) >> 32;
      FIELD_U32(a1, 396) = 0;
      ++FIELD_U32(a1, 436);
      v6 = FIELD_F32(a1, 364);
    }
    FIELD_U32(a1, 372) = FIELD_U32(a1, 360);
    FIELD_F32(a1, 376) = v6;
    FIELD_U32(a1, 380) = FIELD_U32(a1, 368);
    v7 = 0;
    if ( sub_60190968(dword_60C8996C) )
    {
      v23 = v3;
      v8 = 0;
      v9 = dword_60C8996C + 1304;
      while ( 1 )
      {
        v7 = ActorMgrRelated_getById(ActorMgr__instance + 27168, *(_DWORD *)(v9 + 4 * v8));
        if ( ((unsigned int)&dword_60C8AE9C & ~(1612471516 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C8AE9C) )
        {
          dword_60C8AE98 = (int)&off_60BD4E08;
          _cxa_guard_release(&dword_60C8AE9C);
        }
        if ( v7 && (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C8AE98) )
          break;
        if ( ++v8 == 18 )
        {
          v7 = 0;
          break;
        }
      }
      v3 = v23;
    }
    v24 = (FIELD_U32(v7, 180) + FIELD_U32(a1, 388)) ^ 0x80000000;
    sub_60832684((int)&v25, &v24);
    Mtx34_rotateX(&v25, (unsigned int *)(a1 + 384));
    v11 = FIELD_F32(a1, 372);
    v12 = FIELD_F32(a1, 376);
    v13 = FIELD_F32(a1, 380);
    FIELD_F32(a1, 372) = (float)((float)(v12 * v25.n64_f32[1]) + (float)(v11 * v25.n64_f32[0])) + (float)(v13 * v26);
    FIELD_F32(a1, 376) = (float)((float)(v12 * v28) + (float)(v11 * v27)) + (float)(v13 * v29);
    FIELD_F32(a1, 380) = (float)((float)(v12 * v31) + (float)(v11 * v30)) + (float)(v13 * v32);
    v14 = FIELD_F32(a1, 352);
    if ( v14 > 0.0 )
    {
      v15 = FIELD_U32(a1, 400);
      if ( v15 >= 1 )
      {
        --v15;
        FIELD_F32(a1, 396) = FIELD_F32(a1, 396)
                             + (float)((float)(1.0 / (float)FIELD_S32(a1, 400)) * (float)(2.3 - FIELD_F32(a1, 396)));
        FIELD_U32(a1, 400) = v15;
      }
      if ( !v15 )
      {
        FIELD_U32(a1, 400) = -1;
        FIELD_U32(a1, 404) = 10;
      }
      goto LABEL_31;
    }
    if ( v14 < 0.0 )
    {
      v16 = FIELD_U32(a1, 404);
      if ( v16 < 1 )
      {
        v17 = FIELD_U32(a1, 400);
        if ( v17 < 0 )
        {
          v20 = 10;
        }
        else
        {
          if ( !v17 )
            goto LABEL_31;
          v18 = v17 <= 1;
          v19 = FIELD_U32(a1, 400);
          v20 = v17 - 1;
          if ( v18 )
            v19 = 1;
          FIELD_F32(a1, 396) = FIELD_F32(a1, 396)
                               + (float)((float)(1.0 / (float)v19) * (float)(0.0 - FIELD_F32(a1, 396)));
        }
        FIELD_U32(a1, 400) = v20;
        goto LABEL_31;
      }
      FIELD_U32(a1, 404) = v16 - 1;
    }
LABEL_31:
    v21 = FIELD_U32(a1, 396);
    FIELD_U32(a1, 128) = v21;
    FIELD_U32(a1, 132) = v21;
    FIELD_U32(a1, 136) = v21;
    return v3;
  }
  v3 = 0;
  FIELD_U32(a1, 284) = v2 - 1;
  return v3;
}
