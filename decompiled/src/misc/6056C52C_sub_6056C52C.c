/* sub_6056C52C
 * address: 0x6056C52C   size: 740   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6056C52C(int a1)
{
  int v2; // r0
  signed int v3; // r1
  int result; // r0
  int v5; // r0
  int v6; // r0
  float v7; // r1
  float v8; // s4
  float v9; // s8
  float v10; // s0
  float v11[9]; // [sp+0h] [bp-48h] BYREF
  float v12; // [sp+24h] [bp-24h]
  float v13; // [sp+28h] [bp-20h]
  int v14; // [sp+2Ch] [bp-1Ch]

  FIELD_U32(a1, 7368) = 0;
  FIELD_U32(a1, 7352) = 1095761920;
  FIELD_U32(a1, 7356) = 0;
  FIELD_U32(a1, 7360) = 1095761920;
  FIELD_U32(a1, 7364) = -1056964608;
  FIELD_U32(a1, 6872) = 0;
  v2 = (unsigned __int16)FIELD_U32(a1, 20) >> 12;
  FIELD_U32(a1, 7400) = v2;
  FIELD_F32(a1, 7396) = (float)(v2 + 1);
  FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + (float)((float)(unsigned int)v2 * 8.0);
  v3 = sub_605635AC(a1, 0, 0);
  result = 2;
  if ( v3 == 1 )
  {
    FIELD_U32(a1, 144) = FIELD_U32(a1, 7396);
    FIELD_U32(a1, 6432) = sub_6056C828;
    FIELD_U32(a1, 6436) = sub_6056C91C;
    FIELD_U32(a1, 6440) = 0;
    FIELD_U32(a1, 6456) = a1 + 7504;
    FIELD_U32(a1, 492) = 0;
    FIELD_U32(a1, 496) = 0;
    FIELD_U32(a1, 500) = 1132462080;
    FIELD_U32(a1, 504) = 1107296256;
    FIELD_U32(a1, 508) = 1107296256;
    FIELD_U32(a1, 512) = 1107296256;
    FIELD_U32(a1, 7280) = 1115684864;
    FIELD_U32(a1, 7284) = 1115684864;
    sub_605D0024(a1);
    FIELD_U32(a1, 7460) = 0;
    FIELD_U32(a1, 7456) = 0;
    FIELD_U32(a1, 7500) = 0;
    FIELD_U8(a1, 7468) = 0;
    FIELD_U32(a1, 7496) = 0;
    FIELD_U32(a1, 7484) = 0;
    FIELD_U32(a1, 7480) = 0;
    FIELD_U32(a1, 7476) = 0;
    FIELD_U32(a1, 7472) = 0;
    FIELD_U8(a1, 7469) = -1;
    FIELD_U32(a1, 7492) = FIELD_U32(a1, 7488);
    FIELD_U32(a1, 7488) = 0;
    block_jump_ref(a1);
    v5 = FIELD_U32(a1, 7392);
    FIELD_F32(v5, 20) = (float)(FIELD_U32(dword_60C99DD4, 1052) % (unsigned int)FIELD_F32(v5, 8));
    FIELD_U32(v5, 28) |= 2u;
    v6 = FIELD_U32(a1, 116);
    v7 = FIELD_F32(a1, 108);
    v8 = (float)(0.024541 * 0.0) + 0.0;
    v9 = (float)(-0.00030118 * 0.0) + 1.0;
    v10 = FIELD_F32(a1, 112) + 8.0;
    v11[0] = v9 * v9;
    v11[4] = v8 * v9;
    v11[8] = -v8;
    v11[1] = (float)((float)(v8 * v8) * v9) - (float)(v8 * v9);
    v11[5] = (float)(v9 * v9) + (float)(v8 * (float)(v8 * v8));
    v12 = v8 * v9;
    v11[2] = (float)(v8 * v8) + (float)(v8 * (float)(v9 * v9));
    v11[6] = (float)(v8 * v12) - v12;
    v13 = v9 * v9;
    v11[3] = v7;
    v11[7] = v10;
    v14 = v6;
    (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 7388) + 60))(**(_DWORD **)(a1 + 7388), v11);
    (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 7388) + 68))(**(_DWORD **)(a1 + 7388), a1 + 144);
    ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 7388));
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CAE728);
    return 1;
  }
  return result;
}
