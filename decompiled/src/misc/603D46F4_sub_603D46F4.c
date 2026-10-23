/* sub_603D46F4
 * address: 0x603D46F4   size: 868   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_603D46F4(int a1)
{
  int **v2; // r4
  unsigned int v3; // r0
  unsigned int v4; // r6
  unsigned int v5; // r7
  int v6; // s2
  float *v7; // r2
  float *v8; // r5
  float *v9; // r0
  float v10; // s14
  float v11; // s0
  float v12; // s2
  float v13; // s10
  float v14; // s5
  float v15; // s6
  float v16; // s1
  float v17; // s13
  float v18; // s9
  StateBase *CurrentState; // r0
  int v20; // r5
  int v21; // r0
  int (__fastcall *v22)(int, float32x2_t *); // r2
  int v23; // r5
  int v24; // r0
  int (__fastcall *v25)(int, float32x2_t *); // r2
  int v26; // r0
  float v27; // s4
  float v28; // s6
  _BYTE v30[12]; // [sp+4h] [bp-8Ch] BYREF
  float v31[12]; // [sp+10h] [bp-80h] BYREF
  float32x2_t v32; // [sp+40h] [bp-50h] BYREF
  float v33; // [sp+4Ch] [bp-44h]
  float v34; // [sp+5Ch] [bp-34h]
  float v35; // [sp+6Ch] [bp-24h]

  v2 = (int **)(a1 + 6380);
  (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 6380) + 52))(**(_DWORD **)(a1 + 6380));
  v3 = (unsigned int)*(v2 - 1555);
  v4 = (unsigned int)*(v2 - 1554);
  v5 = (unsigned int)*(v2 - 1556);
  v6 = v3 & 0xFFFFFF;
  v7 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v8 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
  v9 = (float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0));
  v10 = (float)(v5 & 0xFFFFFF);
  v11 = (float)(v4 & 0xFFFFFF) * 0.000000059605;
  v12 = (float)(unsigned int)v6 * 0.000000059605;
  v13 = v8[2] + (float)(v11 * v8[3]);
  v14 = v7[2] + (float)(v12 * v7[3]);
  v15 = *v8 + (float)(v11 * v8[1]);
  v16 = *v7 + (float)(v12 * v7[1]);
  v17 = v9[2] + (float)((float)(v10 * 0.000000059605) * v9[3]);
  v18 = *v9 + (float)((float)(v10 * 0.000000059605) * v9[1]);
  v31[0] = v14 * v13;
  v31[4] = v14 * v15;
  v31[8] = -v16;
  v31[1] = (float)((float)(v18 * v16) * v13) - (float)(v17 * v15);
  v31[5] = (float)(v17 * v13) + (float)((float)(v18 * v16) * v15);
  v31[9] = v18 * v14;
  v31[2] = (float)(v16 * (float)(v17 * v13)) + (float)(v18 * v15);
  v31[6] = (float)(v16 * (float)(v17 * v15)) - (float)(v18 * v13);
  v31[10] = v17 * v14;
  LODWORD(v31[3]) = *(v2 - 1568);
  LODWORD(v31[7]) = *(v2 - 1567);
  LODWORD(v31[11]) = *(v2 - 1566);
  (*(void (__fastcall **)(int, float *))(*(_DWORD *)**v2 + 60))(**v2, v31);
  (*(void (__fastcall **)(int, int **))(*(_DWORD *)**v2 + 68))(**v2, v2 + 26);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(v2 - 74));
  v20 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v20 != (*(int (**)(void))(dword_60C98F20 + 8))() )
  {
    v21 = **v2;
    v22 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v21 + 84);
    v32.n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
    v32.n64_u32[1] = (unsigned __int32)"head";
    v23 = v22(v21, &v32);
    (*(void (__fastcall **)(int, int, float32x2_t *, _BYTE *))(*(_DWORD *)**v2 + 100))(**v2, v23, &v32, v30);
    Mtx34_rotateX(&v32, (unsigned int *)(a1 + 6356));
    (*(void (__fastcall **)(int, int, float32x2_t *, _BYTE *))(*(_DWORD *)**v2 + 96))(**v2, v23, &v32, v30);
  }
  (*(void (__fastcall **)(int))(*(_DWORD *)**v2 + 56))(**v2);
  Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  (*(void (__fastcall **)(int, int, float32x2_t *))(*(_DWORD *)**v2 + 108))(**v2, 2, &v32);
  FIELD_F32(a1, 6364) = v34 - FIELD_F32(a1, 112);
  v24 = **v2;
  v25 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v24 + 84);
  v32.n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
  v32.n64_u32[1] = (unsigned __int32)"head";
  v26 = v25(v24, &v32);
  (*(void (__fastcall **)(int, int, float32x2_t *))(*(_DWORD *)**v2 + 108))(**v2, v26, &v32);
  v33 = v33 + 0.0;
  v34 = v34 + 10.0;
  v27 = v34;
  v28 = v35;
  FIELD_F32(a1, 6464) = v33;
  FIELD_F32(a1, 6468) = v27;
  FIELD_F32(a1, 6472) = v28 + 0.0;
  return v28 + 0.0;
}
