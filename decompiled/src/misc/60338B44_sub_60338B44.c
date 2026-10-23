/* sub_60338B44
 * address: 0x60338B44   size: 504   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60338B44(int a1)
{
  char v1; // r12
  int v3; // r4
  _DWORD *v4; // t1
  int v5; // r1
  int v6; // r1
  unsigned int v7; // r0
  int v8; // r1
  unsigned int v9; // r0
  int v10; // r0
  __guard *v11; // r1
  float v12; // r2
  int result; // r0
  _DWORD v14[6]; // [sp+0h] [bp-18h] BYREF

  if ( ((unsigned int)&dword_60C94410[1] & ~(1613990756 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C94410[1]) )
  {
    unk_60C94444 = 1056964608;
    unk_60C94448 = 1084227584;
    unk_60C9444C = -1090519040;
    dword_60C94450 = 1084227584;
    dword_60C94454 = 1065353216;
    dword_60C94458 = 1082130432;
    dword_60C9445C = -1082130432;
    dword_60C94460 = 1082130432;
    _cxa_guard_release(&dword_60C94410[1]);
  }
  v4 = *(_DWORD **)(a1 + 6304);
  v3 = a1 + 6304;
  v5 = *(_DWORD *)(v3 - 4);
  v14[0] = &sead__SafeStringBase__vtable;
  v14[1] = "walk";
  sub_60421938(v4, v5, (int)v14);
  v6 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v7 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v7 )
    v6 += 4 * v7;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v6 + 4), 1);
  v8 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v9 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v9 )
    v8 += 4 * v9;
  *(_DWORD *)(*(_DWORD *)v8 + 24) = 1082130432;
  FIELD_U32(v3, 380) = 1082130432;
  v10 = *(_BYTE *)(v3 - 6281) & 0xF;
  v11 = &dword_60C94410[2 * v10];
  v12 = *((float *)v11 + 13);
  *(float *)(v3 - 6184) = v12;
  *(_DWORD *)(v3 - 6180) = v11[14];
  *(_DWORD *)(v3 - 6176) = 0;
  *(_DWORD *)(v3 - 6200) = 0;
  *(float *)(v3 - 6172) = v12;
  *(_DWORD *)(v3 - 6224) = v12 < 0.0;
  *(_DWORD *)(v3 - 6144) = Enemy_CommonRotations[v12 >= 0.0];
  *(float *)(v3 - 6188) = *(float *)(v3 - 6188) + (float)((float)(unsigned int)v10 * 16.0);
  FIELD_U8(v3, 535) = 1;
  FIELD_U8(v3, 399) = 1;
  result = sub_6015913C((ActiveCollider *)(v3 - 6116), 32775);
  FIELD_U8(v3, 403) = 1;
  return result;
}
