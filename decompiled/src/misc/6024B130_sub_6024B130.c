/* sub_6024B130
 * address: 0x6024B130   size: 876   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6024B130(int a1)
{
  int v1; // r9
  int v2; // r8
  _BYTE *v3; // r10
  unsigned int v4; // r1
  int v5; // r11
  char v6; // r12
  char v7; // r12
  int v8; // r5
  int v9; // r1
  int v10; // r0
  _DWORD *v11; // r1
  int v12; // r2
  int v13; // r5
  int v14; // r7
  int v15; // r4
  float v16; // s0
  float v17; // s18
  unsigned int v18; // r0
  float *v19; // r1
  float v20; // s24
  float v21; // s26
  float v22; // s4
  float v23; // s2
  float v24; // s28
  int v25; // r0
  _DWORD *v26; // [sp+14h] [bp-ACh]
  float *v27; // [sp+18h] [bp-A8h]
  float *v28; // [sp+1Ch] [bp-A4h]
  int v29; // [sp+24h] [bp-9Ch]
  _BYTE *v30; // [sp+28h] [bp-98h]
  int v32; // [sp+48h] [bp-78h] BYREF
  int v33; // [sp+4Ch] [bp-74h] BYREF
  int v34; // [sp+50h] [bp-70h] BYREF
  int v35; // [sp+54h] [bp-6Ch]
  int v36; // [sp+58h] [bp-68h]

  v1 = 0;
  v2 = a1 + 15424;
  v30 = (_BYTE *)(a1 + 15421);
  v28 = (float *)(a1 + 15448);
  v27 = (float *)(a1 + 15444);
  v26 = (_DWORD *)(a1 + 15456);
  v3 = (_BYTE *)(a1 + 15462);
  v29 = a1 + 12344;
  do
  {
    v4 = *(_DWORD *)(v2 + 4 * v1);
    if ( v4 )
    {
      v5 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v4);
      if ( ((unsigned int)dword_60C8DD54 & ~(1613017692 << v6) & 1) == 0 && _cxa_guard_acquire(dword_60C8DD54) )
      {
        dword_60C8DD50 = (int)&off_60BC04AC;
        _cxa_guard_release(dword_60C8DD54);
      }
      if ( v5 && (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C8DD50) == 1 && FIELD_U8(v5, 6324) )
      {
        v8 = FIELD_U8(v5, 6331);
        if ( *v3 )
        {
          v9 = v29;
          if ( (unsigned int)(v8 + 1) < 5 )
            v9 = v29 + v8 + 1;
          v10 = 3 * ((*v30 - FIELD_U8(v9, 3072)) & 0x7F);
          v11 = (_DWORD *)(v29 + 24 * ((*v30 - FIELD_U8(v9, 3072)) & 0x7F));
          v12 = v11[1];
          v13 = v11[3];
          v14 = v11[4];
          v15 = v11[5];
          v36 = v11[2];
          v35 = v12;
          v34 = *(_DWORD *)(v29 + 8 * v10);
          sub_602C43CC(v5, &v34);
          FIELD_U32(v5, 156) = v13;
          FIELD_U32(v5, 160) = v14;
          FIELD_U32(v5, 164) = v15;
          FIELD_U32(v5, 160) = FIELD_U32(a1, 160);
        }
        else
        {
          if ( ((unsigned int)dword_60C8DD60 & ~(1613017940 << v7) & 1) == 0 && _cxa_guard_acquire(dword_60C8DD60) )
          {
            dword_60C8DD60[1] = 0x20000000;
            dword_60C8DD60[2] = -536870912;
            dword_60C8DD60[3] = -1610612736;
            dword_60C8DD60[4] = 1610612736;
            _cxa_guard_release(dword_60C8DD60);
          }
          v16 = FIELD_F32(a1, 108);
          v17 = FIELD_F32(a1, 112);
          v18 = dword_60C8DD60[v8 + 1] + *v26;
          v19 = (float *)((char *)sinLutTable + ((v18 >> 20) & 0xFF0));
          v20 = *v19;
          v21 = v19[1];
          v22 = v19[2];
          v23 = v19[3];
          v33 = FIELD_U32(v5, 108);
          v24 = (float)(v18 & 0xFFFFFF);
          v32 = FIELD_U32(v5, 112);
          ((void (__fastcall *)(int *, float, float, float, float))loc_60832560)(
            &v33,
            v16 + (float)((float)(v22 + (float)((float)(v23 * v24) * 0.000000059605)) * 16.0),
            0.125,
            *v27,
            0.125);
          ((void (__fastcall *)(int *, float, float, float, float))loc_60832560)(
            &v32,
            v17 + (float)((float)(v20 + (float)((float)(v24 * v21) * 0.000000059605)) * 16.0),
            0.125,
            *v28,
            0.125);
          v25 = FIELD_U32(a1, 116);
          v34 = v33;
          v35 = v32;
          v36 = v25;
          sub_602C43CC(v5, &v34);
          FIELD_U32(v5, 156) = FIELD_U32(a1, 156);
          FIELD_U32(v5, 160) = FIELD_U32(a1, 160);
          FIELD_U32(v5, 164) = FIELD_U32(a1, 164);
        }
      }
    }
    ++v1;
  }
  while ( v1 != 4 );
}
