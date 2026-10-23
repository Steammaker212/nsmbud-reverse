/* sub_603D6E74
 * address: 0x603D6E74   size: 936   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603D6E74(int a1, double a2, float a3, float a4, float32x2_t a5)
{
  int result; // r0
  _DWORD *v7; // r6
  float v8; // s0
  float v9; // s2
  float v10; // s0
  float v11; // s4
  float v12; // s6
  float v13; // s10
  int v14; // r0
  int v15; // r1
  int *v16; // r5
  int v17; // r9
  float *v18; // r10
  float *v19; // r8
  float v20; // s0
  float v21; // s2
  float v22; // s0
  float v23; // s16
  float v24; // s18
  float v25; // s2
  char v26; // [sp+4h] [bp-4Ch]
  int speed; // [sp+8h] [bp-48h] BYREF
  int target; // [sp+Ch] [bp-44h] BYREF

  v7 = (_DWORD *)(a1 + 11856);
  result = FIELD_U32(a1, 11856);
  if ( result != 2 )
  {
    if ( result != 1 )
      return result;
    a5.n64_u32[0] = 8.0;
    *(float *)&a2 = FIELD_F32(a1, 88) + 1.0;
    v8 = vmin_f32(*(float32x2_t *)&a2, a5).n64_f32[0];
    FIELD_F32(a1, 88) = v8;
    v9 = FIELD_F32(a1, 11824) * v8;
    FIELD_F32(a1, 120) = v9;
    v10 = v8 * FIELD_F32(a1, 11828);
    FIELD_F32(a1, 124) = v10;
    v11 = FIELD_F32(a1, 112);
    v12 = FIELD_F32(a1, 116);
    v13 = FIELD_F32(a1, 128);
    FIELD_F32(a1, 108) = (float)(FIELD_F32(a1, 108) + v9) + FIELD_F32(a1, 11800);
    FIELD_F32(a1, 112) = (float)(v11 + v10) + FIELD_F32(a1, 11804);
    FIELD_F32(a1, 116) = (float)(v12 + v13) + FIELD_F32(a1, 11808);
    FIELD_U32(a1, 11800) = 0;
    FIELD_U32(a1, 11804) = 0;
    FIELD_U32(a1, 11808) = 0;
    nullsub_7();
    v14 = FIELD_U32(a1, 8600);
    if ( (v14 & 0x440000) == 0 || (v14 & 0x10000000) != 0 )
    {
      v15 = ((FIELD_U32(a1, 8600) & 0x10400) == 1024) | FIELD_U32(a1, 8600) & 1;
      if ( (v14 & 0x880000) != 0 )
      {
        if ( !(((v14 & 0x20000000) == 0) | v15) )
          goto LABEL_12;
      }
      else if ( !v15 )
      {
LABEL_12:
        v26 = 0;
        FIELD_U32(a1, 11860) = 0;
        v16 = (int *)(a1 + 11860);
LABEL_13:
        target = 0;
        speed = 75497472;
        moveValueTo((int *)(a1 + 164), &target, &speed);
        v17 = *v16;
        v18 = (float *)(a1 + 11752);
        v19 = (float *)(a1 + 11756);
        v20 = FIELD_F32(a1, 11780) - FIELD_F32(a1, 11756);
        v21 = FIELD_F32(a1, 11776) - FIELD_F32(a1, 11752);
        if ( sqrtf((float)(v20 * v20) + (float)(v21 * v21)) >= (float)(sub_603DAD24(a1 + 11872) + 4.0) )
        {
          v22 = sub_603DAD24(a1 + 11872);
          v23 = FIELD_F32(a1, 11780) - *v19;
          v24 = FIELD_F32(a1, 11776) - *v18;
          v25 = (float)(v22 + 18.0) / sqrtf((float)(v23 * v23) + (float)(v24 * v24));
          FIELD_F32(a1, 108) = *v18 + (float)(v24 * v25);
          FIELD_F32(a1, 112) = *v19 + (float)(v23 * v25);
          StateMgr__changeState((StateMgr *)(a1 + 12940), (StateBase *)&dword_60C991B8);
        }
        else
        {
          result = (unsigned __int8)v26 & (v17 > 59);
          if ( result != 1 )
            return result;
        }
        FIELD_U16(a1, 6276) = 120;
        *v7 = 2;
        return 2;
      }
    }
    FIELD_U32(a1, 108) = FIELD_U32(a1, 11728);
    FIELD_U32(a1, 112) = FIELD_U32(a1, 11732);
    v16 = (int *)(a1 + 11860);
    ++FIELD_U32(a1, 11860);
    v26 = 1;
    goto LABEL_13;
  }
  EffectWrapper_update((EffectWrapper *)(a1 + 18652), 868, (Vec3 *)(a1 + 11764), (Vec3i *)(a1 + 156), 0);
  FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + FIELD_F32(a1, 11800);
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + FIELD_F32(a1, 11804);
  FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + FIELD_F32(a1, 11808);
  FIELD_U32(a1, 11800) = 0;
  FIELD_U32(a1, 11804) = 0;
  FIELD_U32(a1, 11808) = 0;
  result = FIELD_U16(a1, 6276);
  if ( !FIELD_U16(a1, 6276) )
  {
    StateMgr__changeState((StateMgr *)(a1 + 12940), (StateBase *)&dword_60C99198);
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C99054);
  }
  return result;
}
