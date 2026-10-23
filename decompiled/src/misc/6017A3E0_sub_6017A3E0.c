/* sub_6017A3E0
 * address: 0x6017A3E0   size: 536   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6017A3E0(int a1)
{
  unsigned int v2; // r12
  unsigned int v3; // r1
  unsigned int v4; // r0
  int v5; // s0
  int v6; // s14
  float *v7; // r1
  float v8; // s0
  float v9; // s2
  float *v10; // r0
  float v11; // s6
  float v12; // s8
  float v13; // s10
  float v14; // s12
  float *v15; // r1
  float v16; // s14
  float v17; // s10
  float v18; // s6
  float v19; // s5
  float v20; // s1
  float v21; // s13
  float v22; // s9
  int result; // r0
  float v24[14]; // [sp+0h] [bp-38h] BYREF

  v2 = FIELD_U32(a1, 180);
  v3 = FIELD_U32(a1, 184);
  v4 = FIELD_U32(a1, 176);
  v5 = v3 & 0xFFFFFF;
  v6 = v4 & 0xFFFFFF;
  v7 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v8 = (float)(unsigned int)v5 * 0.000000059605;
  v9 = (float)(v2 & 0xFFFFFF) * 0.000000059605;
  v10 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
  v11 = *v7;
  v12 = v7[1];
  v13 = v7[2];
  v14 = v7[3];
  v15 = (float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0));
  v16 = (float)(unsigned int)v6;
  v17 = v13 + (float)(v8 * v14);
  v18 = v11 + (float)(v8 * v12);
  v19 = v15[2] + (float)(v9 * v15[3]);
  v20 = *v15 + (float)(v9 * v15[1]);
  v21 = v10[2] + (float)((float)(v16 * 0.000000059605) * v10[3]);
  v22 = *v10 + (float)((float)(v16 * 0.000000059605) * v10[1]);
  v24[0] = v19 * v17;
  v24[4] = v19 * v18;
  v24[8] = -v20;
  v24[1] = (float)((float)(v22 * v20) * v17) - (float)(v21 * v18);
  v24[5] = (float)(v21 * v17) + (float)((float)(v22 * v20) * v18);
  v24[9] = v22 * v19;
  v24[2] = (float)(v20 * (float)(v21 * v17)) + (float)(v22 * v18);
  v24[6] = (float)(v20 * (float)(v21 * v18)) - (float)(v22 * v17);
  v24[10] = v21 * v19;
  v24[3] = FIELD_F32(a1, 80);
  v24[7] = FIELD_F32(a1, 84);
  v24[11] = FIELD_F32(a1, 88);
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 268) + 60))(**(_DWORD **)(a1 + 268), v24);
  (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 268) + 52))(**(_DWORD **)(a1 + 268));
  (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 268) + 56))(**(_DWORD **)(a1 + 268));
  if ( FIELD_U8(a1, 418) )
  {
    (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 272) + 60))(**(_DWORD **)(a1 + 272), v24);
    (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 272) + 52))(**(_DWORD **)(a1 + 272));
    (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 272) + 56))(**(_DWORD **)(a1 + 272));
  }
  result = FIELD_U8(a1, 419);
  if ( FIELD_U8(a1, 419) )
  {
    (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 276) + 60))(**(_DWORD **)(a1 + 276), v24);
    (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 276) + 52))(**(_DWORD **)(a1 + 276));
    return (*(int (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 276) + 56))(**(_DWORD **)(a1 + 276));
  }
  return result;
}
