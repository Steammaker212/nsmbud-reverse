/* sub_6046EFC4
 * address: 0x6046EFC4   size: 560   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6046EFC4(int a1)
{
  int v2; // r5
  unsigned int v3; // r0
  unsigned int v4; // r1
  unsigned int v5; // r5
  int v6; // s2
  int v7; // s14
  float *v8; // r3
  float *v9; // r1
  float *v10; // r0
  float v11; // s14
  float v12; // s0
  float v13; // s2
  float v14; // s10
  float v15; // s5
  float v16; // s6
  float v17; // s1
  float v18; // s13
  float v19; // s9
  int **v20; // r5
  int v21; // r1
  int v22; // r0
  int (__fastcall *v23)(int, _DWORD *); // r2
  int v24; // r0
  int result; // r0
  _DWORD v26[11]; // [sp+0h] [bp-70h] BYREF
  int v27; // [sp+2Ch] [bp-44h]
  float v28[16]; // [sp+30h] [bp-40h] BYREF

  v2 = a1 + 156;
  v3 = FIELD_U32(a1, 156);
  v4 = FIELD_U32(v2, 4);
  v5 = FIELD_U32(v2, 8);
  v6 = v4 & 0xFFFFFF;
  v7 = v3 & 0xFFFFFF;
  v8 = (float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0));
  v9 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
  v10 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v11 = (float)(unsigned int)v7;
  v12 = (float)(v5 & 0xFFFFFF) * 0.000000059605;
  v13 = (float)(unsigned int)v6 * 0.000000059605;
  v14 = v8[2] + (float)(v12 * v8[3]);
  v15 = v9[2] + (float)(v13 * v9[3]);
  v16 = *v8 + (float)(v12 * v8[1]);
  v17 = *v9 + (float)(v13 * v9[1]);
  v18 = v10[2] + (float)((float)(v11 * 0.000000059605) * v10[3]);
  v19 = *v10 + (float)((float)(v11 * 0.000000059605) * v10[1]);
  v28[0] = v15 * v14;
  v28[4] = v15 * v16;
  v28[8] = -v17;
  v28[1] = (float)((float)(v19 * v17) * v14) - (float)(v18 * v16);
  v28[5] = (float)(v18 * v14) + (float)((float)(v19 * v17) * v16);
  v28[9] = v19 * v15;
  v28[2] = (float)(v17 * (float)(v18 * v14)) + (float)(v19 * v16);
  v28[6] = (float)(v17 * (float)(v18 * v16)) - (float)(v19 * v14);
  v28[10] = v18 * v15;
  v28[3] = FIELD_F32(a1, 108);
  v28[7] = FIELD_F32(a1, 112);
  v28[11] = FIELD_F32(a1, 116);
  v20 = (int **)(a1 + 6160);
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 6160) + 60))(**(_DWORD **)(a1 + 6160), v28);
  if ( FIELD_U8(a1, 6256) )
    v21 = a1 + 144;
  else
    v21 = a1 + 6304;
  (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 6160) + 68))(**(_DWORD **)(a1 + 6160), v21);
  Animation_update(*(_DWORD *)(*v20)[3]);
  (*(void (__fastcall **)(int))(*(_DWORD *)**v20 + 52))(**v20);
  (*(void (__fastcall **)(int))(*(_DWORD *)**v20 + 56))(**v20);
  v22 = **v20;
  v23 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v22 + 84);
  v26[0] = &sead__SafeStringBase__vtable;
  v26[1] = "star";
  v24 = v23(v22, v26);
  (*(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)**v20 + 108))(**v20, v24, v26);
  FIELD_U32(a1, 6972) = v26[3];
  FIELD_U32(a1, 6976) = v26[7];
  result = v27;
  FIELD_U32(a1, 6980) = v27;
  return result;
}
