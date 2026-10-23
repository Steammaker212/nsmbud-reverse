/* skl_root_ref_737B28
 * address: 0x60737B28   size: 652   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall skl_root_ref_737B28(_DWORD *a1)
{
  ModelWrapper **v2; // r5
  float v3; // r12
  unsigned int v4; // r1
  float v5; // r8
  unsigned int v6; // r4
  float v7; // lr
  unsigned int v8; // r0
  int v9; // r2
  int v10; // s14
  float *v11; // r1
  float *v12; // r0
  float v13; // s6
  float v14; // s8
  float v15; // s10
  float v16; // s12
  float *v17; // r1
  float v18; // s0
  float v19; // s2
  float v20; // s14
  float v21; // s10
  float v22; // s6
  float v23; // s5
  float v24; // s1
  float v25; // s13
  float v26; // s9
  void *model; // r0
  int (__fastcall *v28)(void *, _DWORD *); // r2
  int v29; // r0
  int result; // r0
  _DWORD v31[11]; // [sp+0h] [bp-80h] BYREF
  int v32; // [sp+2Ch] [bp-54h]
  float v33[20]; // [sp+30h] [bp-50h] BYREF

  v2 = (ModelWrapper **)(a1 + 1847);
  Animation_update(**(_DWORD **)(a1[1847] + 12));
  v3 = *((float *)v2 - 1818);
  v4 = (unsigned int)*(v2 - 1806);
  v5 = *((float *)v2 - 1819);
  v6 = (unsigned int)*(v2 - 1807);
  v7 = *((float *)v2 - 1820);
  v8 = (unsigned int)*(v2 - 1808);
  if ( !*((_BYTE *)v2 + 232) )
    v5 = v5
       + (float)((float)(*(float *)((char *)sinLutTable + ((a1[1900] >> 20) & 0xFF0))
                       + (float)((float)((float)(a1[1900] & 0xFFFFFF)
                                       * *(float *)((char *)&sinLutTable[1] + ((a1[1900] >> 20) & 0xFF0)))
                               * 0.000000059605))
               * 4.0);
  v9 = v4 & 0xFFFFFF;
  v10 = v8 & 0xFFFFFF;
  v11 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
  v12 = (float *)((char *)sinLutTable + ((v8 >> 20) & 0xFF0));
  v13 = *v11;
  v14 = v11[1];
  v15 = v11[2];
  v16 = v11[3];
  v17 = (float *)((char *)sinLutTable + ((v6 >> 20) & 0xFF0));
  v18 = (float)(unsigned int)v9 * 0.000000059605;
  v19 = (float)(v6 & 0xFFFFFF) * 0.000000059605;
  v20 = (float)(unsigned int)v10;
  v21 = v15 + (float)(v18 * v16);
  v22 = v13 + (float)(v18 * v14);
  v23 = v17[2] + (float)(v19 * v17[3]);
  v24 = *v17 + (float)(v19 * v17[1]);
  v25 = v12[2] + (float)((float)(v20 * 0.000000059605) * v12[3]);
  v26 = *v12 + (float)((float)(v20 * 0.000000059605) * v12[1]);
  v33[0] = v23 * v21;
  v33[4] = v23 * v22;
  v33[8] = -v24;
  v33[1] = (float)((float)(v26 * v24) * v21) - (float)(v25 * v22);
  v33[5] = (float)(v25 * v21) + (float)((float)(v26 * v24) * v22);
  v33[9] = v26 * v23;
  v33[2] = (float)(v24 * (float)(v25 * v21)) + (float)(v26 * v22);
  v33[6] = (float)(v24 * (float)(v25 * v22)) - (float)(v26 * v21);
  v33[10] = v25 * v23;
  v33[3] = v7;
  v33[7] = v5;
  v33[11] = v3;
  (*(void (__fastcall **)(void *, _DWORD *))(*(_DWORD *)(*v2)->model + 68))((*v2)->model, a1 + 36);
  (*(void (__fastcall **)(void *, float *))(*(_DWORD *)(*v2)->model + 60))((*v2)->model, v33);
  ModelWrapper_updateModel(*v2);
  model = (*v2)->model;
  v28 = *(int (__fastcall **)(void *, _DWORD *))(*(_DWORD *)model + 84);
  v31[0] = &sead__SafeStringBase__vtable;
  v31[1] = "skl_root";
  v29 = v28(model, v31);
  (*(void (__fastcall **)(void *, int, _DWORD *))(*(_DWORD *)(*v2)->model + 108))((*v2)->model, v29, v31);
  a1[1906] = v31[3];
  a1[1907] = v31[7];
  result = v32;
  a1[1908] = v32;
  return result;
}
