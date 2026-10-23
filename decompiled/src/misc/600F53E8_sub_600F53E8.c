/* sub_600F53E8
 * address: 0x600F53E8   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600F53E8(int a1)
{
  _BYTE *v2; // r8
  float *v3; // r4
  ModelWrapper *v4; // t1
  unsigned int v5; // r0
  unsigned int v6; // r5
  unsigned int v7; // r7
  int v8; // s2
  float *v9; // r2
  float *v10; // r6
  float *v11; // r0
  float v12; // s14
  float v13; // s0
  float v14; // s2
  float v15; // s10
  float v16; // s5
  float v17; // s6
  float v18; // s1
  float v19; // s13
  float v20; // s9
  float v22[18]; // [sp+0h] [bp-48h] BYREF

  StateMgr__execute((StateMgr *)(a1 + 6084));
  v2 = (_BYTE *)(a1 + 6328);
  if ( FIELD_U8(a1, 6328) )
  {
    v4 = *(ModelWrapper **)(a1 + 6324);
    v3 = (float *)(a1 + 6324);
    ModelWrapper_updateAnims(v4);
    v5 = *((_DWORD *)v3 - 1541);
    v6 = *((_DWORD *)v3 - 1540);
    v7 = *((_DWORD *)v3 - 1542);
    v8 = v5 & 0xFFFFFF;
    v9 = (float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0));
    v10 = (float *)((char *)sinLutTable + ((v6 >> 20) & 0xFF0));
    v11 = (float *)((char *)sinLutTable + ((v7 >> 20) & 0xFF0));
    v12 = (float)(v7 & 0xFFFFFF);
    v13 = (float)(v6 & 0xFFFFFF) * 0.000000059605;
    v14 = (float)(unsigned int)v8 * 0.000000059605;
    v15 = v10[2] + (float)(v13 * v10[3]);
    v16 = v9[2] + (float)(v14 * v9[3]);
    v17 = *v10 + (float)(v13 * v10[1]);
    v18 = *v9 + (float)(v14 * v9[1]);
    v19 = v11[2] + (float)((float)(v12 * 0.000000059605) * v11[3]);
    v20 = *v11 + (float)((float)(v12 * 0.000000059605) * v11[1]);
    v22[0] = v16 * v15;
    v22[4] = v16 * v17;
    v22[8] = -v18;
    v22[1] = (float)((float)(v20 * v18) * v15) - (float)(v19 * v17);
    v22[5] = (float)(v19 * v15) + (float)((float)(v20 * v18) * v17);
    v22[9] = v20 * v16;
    v22[2] = (float)(v18 * (float)(v19 * v15)) + (float)(v20 * v17);
    v22[6] = (float)(v18 * (float)(v19 * v17)) - (float)(v20 * v15);
    v22[10] = v19 * v16;
    v22[3] = v3[2];
    v22[7] = v3[3];
    v22[11] = v3[4];
    (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)v3 + 60))(**(_DWORD **)v3, v22);
    ModelWrapper_updateModel(*(ModelWrapper **)v3);
    if ( (*(_BYTE *)(**(_DWORD **)(*(_DWORD *)v3 + 12) + 28) & 0x20) != 0 )
      *v2 = 0;
  }
  return 1;
}
