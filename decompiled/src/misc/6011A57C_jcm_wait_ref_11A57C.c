/* jcm_wait_ref_11A57C
 * address: 0x6011A57C   size: 1096   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall jcm_wait_ref_11A57C(_DWORD *a1)
{
  _DWORD *v2; // r5
  float v3; // s22
  float v4; // s18
  float v5; // s20
  float v6; // s16
  float v7; // s0
  float v8; // s0
  int v9; // r0
  unsigned int v10; // r3
  int v11; // r0
  _DWORD *v12; // r6
  int v13; // r0
  _BOOL4 v14; // r1
  int v15; // r1
  int v16; // r0
  unsigned int v17; // r5
  int v18; // r0
  int v19; // r1
  int *v20; // r0
  int v21; // r0
  int v22; // r0
  int *v23; // r0
  int v24; // r0
  int v25; // r0
  unsigned int v26; // r1
  _DWORD *v27; // r0
  int v28; // r0
  int v29; // r0
  int (**v31)(); // [sp+0h] [bp-58h] BYREF
  const char *v32; // [sp+4h] [bp-54h]

  v2 = a1 + 2299;
  switch ( a1[2299] )
  {
    case 1:
      v3 = *((float *)a1 + 2256) - *((float *)a1 + 27);
      v4 = *((float *)a1 + 2257) - *((float *)a1 + 28);
      v5 = *((float *)a1 + 2258) - *((float *)a1 + 29);
      v6 = (float)((float)(v4 * v4) + (float)(v3 * v3)) + (float)(v5 * v5);
      if ( sqrtf(v6) <= 1.0 )
      {
        a1[27] = a1[2256];
        a1[28] = a1[2257];
        a1[29] = a1[2258];
        *((_WORD *)a1 + 3139) = 20;
        *v2 = 2;
      }
      else
      {
        v7 = sqrtf(v6);
        if ( v7 > 0.0 )
        {
          v8 = 1.0 / v7;
          v5 = v5 * v8;
          v4 = v4 * v8;
          v3 = v3 * v8;
        }
        *((float *)a1 + 27) = v3 + *((float *)a1 + 27);
        *((float *)a1 + 28) = v4 + *((float *)a1 + 28);
        *((float *)a1 + 29) = v5 + *((float *)a1 + 29);
      }
      break;
    case 2:
      if ( !*((_WORD *)a1 + 3139) )
      {
        *(_DWORD *)(**(_DWORD **)(a1[1576] + 12) + 24) = 1065353216;
        v9 = a1[1576];
        v10 = FIELD_U32(v9, 8);
        v11 = FIELD_U32(v9, 12);
        if ( v10 > 1 )
          v11 += 4;
        *(_DWORD *)(*(_DWORD *)v11 + 24) = 1065353216;
        *v2 = 3;
        (*(void (__fastcall **)(_DWORD, void *))(*(_DWORD *)a1[2308] + 192))(a1[2308], &unk_60C86A44);
      }
      break;
    case 3:
      v12 = a1 + 1576;
      if ( sub_60418548(**(_DWORD **)(a1[1576] + 12) + 4) )
        (*(void (__fastcall **)(_DWORD *, int))(*a1 + 780))(a1, 1);
      if ( (*(_BYTE *)(**(_DWORD **)(*v12 + 12) + 28) & 0x20) != 0 )
      {
        *v2 = 4;
        if ( (*(int (__fastcall **)(_DWORD *))(*a1 + 628))(a1) )
        {
          v13 = (*(int (__fastcall **)(_DWORD *))(*a1 + 628))(a1);
          v14 = (*(int (__fastcall **)(int))(*(_DWORD *)v13 + 724))(v13) == 1;
          (*(void (__fastcall **)(_DWORD *, _BOOL4))(*a1 + 780))(a1, v14);
          (*(void (__fastcall **)(_DWORD, int *))(*(_DWORD *)a1[2308] + 192))(a1[2308], &dword_60C84148);
        }
        sub_6040EB10(a1 + 2355);
        v15 = a1[1575];
        v16 = **(_DWORD **)(*v12 + 12);
        v31 = &sead__SafeStringBase__vtable;
        v32 = "jcm_wait";
        SkeletalAnim_play(v16, v15, (int)&v31);
        AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*v12 + 12) + 4), 1);
        v17 = 0;
        v18 = **(_DWORD **)(*v12 + 12);
        FIELD_U32(v18, 20) = 0;
        FIELD_U32(v18, 28) |= 2u;
        *(_DWORD *)(**(_DWORD **)(*v12 + 12) + 24) = 1065353216;
        v19 = a1[1575];
        v20 = *(int **)(*v12 + 12);
        if ( *(_DWORD *)(*v12 + 8) > 1u )
          ++v20;
        v21 = *v20;
        v31 = &sead__SafeStringBase__vtable;
        v32 = "jcm_wait";
        SkeletalAnim_play(v21, v19, (int)&v31);
        v22 = *(_DWORD *)(*v12 + 12);
        if ( *(_DWORD *)(*v12 + 8) > 1u )
          v22 += 4;
        AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v22 + 4), 1);
        v23 = *(int **)(*v12 + 12);
        if ( *(_DWORD *)(*v12 + 8) > 1u )
          ++v23;
        v24 = *v23;
        FIELD_U32(v24, 20) = 0;
        FIELD_U32(v24, 28) |= 2u;
        v25 = *(_DWORD *)(*v12 + 12);
        if ( *(_DWORD *)(*v12 + 8) > 1u )
          v25 += 4;
        *(_DWORD *)(*(_DWORD *)v25 + 24) = 1065353216;
        *((_BYTE *)a1 + 9331) = 0;
        do
        {
          v28 = *v12;
          if ( v17 <= 9 && ((1 << v17) & 0x3EC) != 0 )
          {
            v27 = *(_DWORD **)(v28 + 12);
          }
          else
          {
            v26 = FIELD_U32(v28, 8);
            v27 = *(_DWORD **)(v28 + 12);
            if ( v26 > 1 )
              ++v27;
          }
          sub_60448AF4(*v27, v17++);
        }
        while ( v17 != 10 );
        *((_BYTE *)a1 + 9242) = 1;
      }
      break;
    case 4:
      v29 = a1[2338] - 1;
      a1[2338] = v29;
      if ( !v29 )
        (*(void (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C86D2C);
      break;
    default:
      return ((int (__fastcall *)(_DWORD *))loc_6011B35C)(a1);
  }
  return ((int (__fastcall *)(_DWORD *))loc_6011B35C)(a1);
}
