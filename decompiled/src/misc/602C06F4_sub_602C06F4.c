/* sub_602C06F4
 * address: 0x602C06F4   size: 576   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602C06F4(_DWORD *a1)
{
  int v2; // r5
  int result; // r0
  _DWORD *v4; // r6
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  int *v9; // r1
  unsigned int v10; // r0
  int v11; // r0
  unsigned int v12; // r0
  float *v13; // r1
  float v14; // s0
  float v15; // s2
  float v16; // s4
  float v17; // s6
  float v18; // s8
  float v19; // r0
  Vec3 v20[2]; // [sp+8h] [bp-20h] BYREF

  v2 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)a1[1524] + 8))(a1[1524]);
  result = (*(int (**)(void))(dword_60C9149C + 8))();
  if ( v2 != result )
  {
    *((_BYTE *)a1 + 6483) = 4;
    LODWORD(v20[0].x) = &sead__SafeStringBase__vtable;
    LODWORD(v20[0].y) = dword_60C91218;
    v4 = a1 + 1576;
    sub_60421938((_DWORD *)a1[1576], a1[1575], (int)v20);
    v5 = *(_DWORD *)(a1[1576] + 12);
    v6 = *(_DWORD *)(a1[1576] + 68);
    if ( *(_DWORD *)(a1[1576] + 8) > v6 )
      v5 += 4 * v6;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v5 + 4), 0);
    v7 = *(_DWORD *)(*v4 + 12);
    v8 = *(_DWORD *)(*v4 + 68);
    if ( *(_DWORD *)(*v4 + 8) > v8 )
      v7 += 4 * v8;
    *(_DWORD *)(*(_DWORD *)v7 + 24) = 0;
    v9 = *(int **)(*v4 + 12);
    v10 = *(_DWORD *)(*v4 + 68);
    if ( *(_DWORD *)(*v4 + 8) > v10 )
      v9 += v10;
    v11 = *v9;
    FIELD_U32(v11, 20) = 1098907648;
    FIELD_U32(v11, 28) |= 2u;
    *((_BYTE *)a1 + 6481) = 10;
    a1[1626] = 6;
    a1[22] = 1082130432;
    a1[1587] = 1034594987;
    v12 = a1[41] + 0x40000000;
    v13 = (float *)((char *)sinLutTable + ((v12 >> 20) & 0xFF0));
    v14 = *v13;
    v15 = v13[1];
    v16 = v13[2];
    v17 = v13[3];
    v18 = (float)(v12 & 0xFFFFFF);
    a1[32] = 0;
    *((float *)a1 + 30) = (float)(v16 + (float)((float)(v17 * v18) * 0.000000059605)) * 4.0;
    *((float *)a1 + 31) = (float)(v14 + (float)((float)(v18 * v15) * 0.000000059605)) * 4.0;
    (*(void (__fastcall **)(_DWORD *))(*a1 + 664))(a1);
    v19 = *((float *)a1 + 27);
    v20[0].y = (float)a1[28];
    v20[0].x = v19;
    v20[0].z = 4500.0;
    EffectWrapper_update((EffectWrapper *)(a1 + 1627), 572, v20, (Vec3i *)a1 + 13, 0);
    a1[1625] = 1;
    (*(void (__fastcall **)(_DWORD *))(*a1 + 660))(a1);
    a1[801] |= 0x200u;
    a1[799] |= 0x200u;
    a1[795] |= 0x200u;
    result = a1[797] | 0x200;
    a1[797] = result;
  }
  return result;
}
