/* sub_606789F4
 * address: 0x606789F4   size: 596   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_606789F4(int a1, int a2)
{
  char v2; // r12
  int v5; // r10
  _QWORD *v6; // r9
  _QWORD *v7; // r8
  float v8; // s22
  _QWORD *v9; // r11
  float v10; // s20
  float v11; // s16
  float v12; // s18
  int v13; // r0
  bool v14; // zf
  int v15; // r1
  float v16; // s20
  float *v17; // r6
  float *v18; // r7
  int v19; // r0
  float v20; // s2
  float *v21; // r5
  __int64 v22; // d17
  __int64 v23; // d17
  __int64 v24; // d17
  float v25; // s4
  float v26; // s2

  if ( ((unsigned int)&dword_60CB7D50 & ~(1617398296 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB7D50) )
  {
    dword_60CB7D5C = 0;
    dword_60CB7D60 = 1092616192;
    dword_60CB7D64 = 0;
    _cxa_guard_release(&dword_60CB7D50);
  }
  v5 = FIELD_U8(a1, 8460);
  v6 = (_QWORD *)(a1 + 6672);
  v7 = (_QWORD *)(a1 + 6688);
  v8 = FIELD_F32(a1, 6716);
  v9 = (_QWORD *)(a1 + 6704);
  v10 = (float)((float)(*(float *)&dword_60CB7D60 * FIELD_F32(a1, 6708))
              + (float)(*(float *)&dword_60CB7D5C * FIELD_F32(a1, 6704)))
      + (float)(*(float *)&dword_60CB7D64 * FIELD_F32(a1, 6712));
  v11 = FIELD_F32(a1, 6700)
      + (float)((float)((float)(*(float *)&dword_60CB7D60 * FIELD_F32(a1, 6692))
                      + (float)(*(float *)&dword_60CB7D5C * FIELD_F32(a1, 6688)))
              + (float)(*(float *)&dword_60CB7D64 * FIELD_F32(a1, 6696)));
  v12 = FIELD_F32(a1, 6684)
      + (float)((float)((float)(FIELD_F32(a1, 6676) * *(float *)&dword_60CB7D60)
                      + (float)(FIELD_F32(a1, 6672) * *(float *)&dword_60CB7D5C))
              + (float)(FIELD_F32(a1, 6680) * *(float *)&dword_60CB7D64));
  v13 = sub_605DBDAC(a1);
  v14 = v13 == 0;
  v15 = 0;
  if ( v13 )
    v14 = (FIELD_U8(v13, 1212) & 0x40) == 0;
  if ( !v14 )
  {
    v15 = 1;
    v11 = FIELD_F32(v13, 112) + FIELD_F32(v13, 576);
    v12 = FIELD_F32(v13, 108) + FIELD_F32(v13, 572);
  }
  v16 = v8 + v10;
  FIELD_U8(a1, 8460) = v15;
  if ( v5 == v15 )
  {
    v17 = (float *)(a1 + 8456);
    v18 = (float *)(a1 + 8452);
  }
  else
  {
    v19 = (*(int (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 8036) + 64))(**(_DWORD **)(a1 + 8036));
    v18 = (float *)(a1 + 8452);
    v20 = FIELD_F32(v19, 28) - v11;
    FIELD_F32(a1, 8448) = FIELD_F32(v19, 12) - v12;
    FIELD_F32(a1, 8452) = v20;
    FIELD_U32(a1, 8456) = 0;
    v17 = (float *)(a1 + 8456);
  }
  v21 = (float *)(a1 + 8448);
  sub_60833454(v21, &dword_60B3B95C, 5.0, 5.0, 1.0);
  v22 = v6[1];
  *(_QWORD *)a2 = *v6;
  FIELD_U64(a2, 8) = v22;
  v23 = v7[1];
  FIELD_U64(a2, 16) = *v7;
  FIELD_U64(a2, 24) = v23;
  v24 = v9[1];
  FIELD_U64(a2, 32) = *v9;
  FIELD_U64(a2, 40) = v24;
  v25 = *v17;
  v26 = v11 + *v18;
  FIELD_F32(a2, 12) = v12 + *v21;
  FIELD_F32(a2, 28) = v26;
  FIELD_F32(a2, 44) = v16 + v25;
  return v16 + v25;
}
