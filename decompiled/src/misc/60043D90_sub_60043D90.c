/* sub_60043D90
 * address: 0x60043D90   size: 1428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60043D90(int a1, int a2)
{
  _DWORD **v4; // r7
  __int64 v5; // d17
  __int64 v6; // d17
  __int64 v7; // d17
  __int64 v8; // d17
  __int64 v9; // d17
  __int64 v10; // d17
  __int64 v11; // d17
  __int64 v12; // d17
  __int64 v13; // d17
  __int64 v14; // d17
  __int64 v15; // d17
  __int64 v16; // d17
  float v17; // s10
  float v18; // s6
  float v19; // s2
  __int64 v21; // [sp+0h] [bp-48h] BYREF
  __int64 v22; // [sp+8h] [bp-40h]
  __int64 v23; // [sp+10h] [bp-38h]
  __int64 v24; // [sp+18h] [bp-30h]
  __int64 v25; // [sp+20h] [bp-28h]
  __int64 v26; // [sp+28h] [bp-20h]

  v4 = (_DWORD **)(a1 + 6304);
  (*(void (__fastcall **)(_DWORD, int, __int64 *))(***(_DWORD ***)(a1 + 6304) + 108))(
    **(_DWORD **)(a1 + 6304),
    10,
    &v21);
  v4[1219] = (_DWORD *)HIDWORD(v22);
  v4[1220] = (_DWORD *)HIDWORD(v24);
  v4[1221] = (_DWORD *)HIDWORD(v26);
  v5 = v22;
  *((_QWORD *)v4 + 581) = v21;
  *((_QWORD *)v4 + 582) = v5;
  v6 = v24;
  *((_QWORD *)v4 + 583) = v23;
  *((_QWORD *)v4 + 584) = v6;
  v7 = v26;
  *((_QWORD *)v4 + 585) = v25;
  *((_QWORD *)v4 + 586) = v7;
  (*(void (__fastcall **)(_DWORD, int, __int64 *))(*(_DWORD *)**v4 + 108))(**v4, 11, &v21);
  v4[1222] = (_DWORD *)HIDWORD(v22);
  v4[1223] = (_DWORD *)HIDWORD(v24);
  v4[1224] = (_DWORD *)HIDWORD(v26);
  (*(void (__fastcall **)(_DWORD, int, __int64 *))(*(_DWORD *)**v4 + 108))(**v4, 12, &v21);
  v4[1225] = (_DWORD *)HIDWORD(v22);
  v4[1226] = (_DWORD *)HIDWORD(v24);
  v4[1227] = (_DWORD *)HIDWORD(v26);
  (*(void (__fastcall **)(_DWORD, int, __int64 *))(*(_DWORD *)**v4 + 108))(**v4, 13, &v21);
  v4[1231] = (_DWORD *)HIDWORD(v22);
  v4[1232] = (_DWORD *)HIDWORD(v24);
  v4[1233] = (_DWORD *)HIDWORD(v26);
  (*(void (__fastcall **)(_DWORD, int, __int64 *))(*(_DWORD *)**v4 + 108))(**v4, 14, &v21);
  v4[1228] = (_DWORD *)HIDWORD(v22);
  v4[1229] = (_DWORD *)HIDWORD(v24);
  v4[1230] = (_DWORD *)HIDWORD(v26);
  (*(void (__fastcall **)(_DWORD, int, __int64 *))(*(_DWORD *)**v4 + 108))(**v4, 15, &v21);
  v4[1234] = (_DWORD *)HIDWORD(v22);
  v4[1235] = (_DWORD *)HIDWORD(v24);
  v4[1236] = (_DWORD *)HIDWORD(v26);
  (*(void (__fastcall **)(_DWORD, int, __int64 *))(*(_DWORD *)**v4 + 108))(**v4, 16, &v21);
  v4[1237] = (_DWORD *)HIDWORD(v22);
  v4[1238] = (_DWORD *)HIDWORD(v24);
  v4[1239] = (_DWORD *)HIDWORD(v26);
  if ( a2 == 1 && !FIELD_U32(a1, 11468) )
  {
    v8 = v22;
    FIELD_U64(a1, 11000) = v21;
    FIELD_U64(a1, 11008) = v8;
    v9 = v24;
    FIELD_U64(a1, 11016) = v23;
    FIELD_U64(a1, 11024) = v9;
    v10 = v26;
    FIELD_U64(a1, 11032) = v25;
    FIELD_U64(a1, 11040) = v10;
  }
  (*(void (__fastcall **)(_DWORD, int, __int64 *))(*(_DWORD *)**v4 + 108))(**v4, 3, &v21);
  FIELD_U32(a1, 11288) = HIDWORD(v22);
  FIELD_U32(a1, 11292) = HIDWORD(v24);
  FIELD_U32(a1, 11296) = HIDWORD(v26);
  v11 = v22;
  FIELD_U64(a1, 10904) = v21;
  FIELD_U64(a1, 10912) = v11;
  v12 = v24;
  FIELD_U64(a1, 10920) = v23;
  FIELD_U64(a1, 10928) = v12;
  v13 = v26;
  FIELD_U64(a1, 10936) = v25;
  FIELD_U64(a1, 10944) = v13;
  (*(void (__fastcall **)(_DWORD, int, __int64 *))(*(_DWORD *)**v4 + 108))(**v4, 4, &v21);
  FIELD_U32(a1, 11300) = HIDWORD(v22);
  FIELD_U32(a1, 11304) = HIDWORD(v24);
  FIELD_U32(a1, 11308) = HIDWORD(v26);
  (*(void (__fastcall **)(_DWORD, int, __int64 *))(*(_DWORD *)**v4 + 108))(**v4, 5, &v21);
  FIELD_U32(a1, 11312) = HIDWORD(v22);
  FIELD_U32(a1, 11316) = HIDWORD(v24);
  FIELD_U32(a1, 11320) = HIDWORD(v26);
  (*(void (__fastcall **)(_DWORD, int, __int64 *))(*(_DWORD *)**v4 + 108))(**v4, 6, &v21);
  FIELD_U32(a1, 11336) = HIDWORD(v22);
  FIELD_U32(a1, 11340) = HIDWORD(v24);
  FIELD_U32(a1, 11344) = HIDWORD(v26);
  (*(void (__fastcall **)(_DWORD, int, __int64 *))(*(_DWORD *)**v4 + 108))(**v4, 8, &v21);
  FIELD_U32(a1, 11348) = HIDWORD(v22);
  FIELD_U32(a1, 11352) = HIDWORD(v24);
  FIELD_U32(a1, 11356) = HIDWORD(v26);
  (*(void (__fastcall **)(_DWORD, int, __int64 *))(*(_DWORD *)**v4 + 108))(**v4, 7, &v21);
  FIELD_U32(a1, 11324) = HIDWORD(v22);
  FIELD_U32(a1, 11328) = HIDWORD(v24);
  FIELD_U32(a1, 11332) = HIDWORD(v26);
  (*(void (__fastcall **)(_DWORD, int, __int64 *))(*(_DWORD *)**v4 + 108))(**v4, 9, &v21);
  FIELD_U32(a1, 11360) = HIDWORD(v22);
  FIELD_U32(a1, 11364) = HIDWORD(v24);
  FIELD_U32(a1, 11368) = HIDWORD(v26);
  if ( a2 == 1 && FIELD_U32(a1, 11468) == 1 )
  {
    v14 = v22;
    FIELD_U64(a1, 11000) = v21;
    FIELD_U64(a1, 11008) = v14;
    v15 = v24;
    FIELD_U64(a1, 11016) = v23;
    FIELD_U64(a1, 11024) = v15;
    v16 = v26;
    FIELD_U64(a1, 11032) = v25;
    FIELD_U64(a1, 11040) = v16;
  }
  v17 = FIELD_F32(a1, 6888);
  v18 = (float)((float)(FIELD_F32(a1, 6876) * 0.0) - (float)(FIELD_F32(a1, 6880) * 6.0))
      + (float)(FIELD_F32(a1, 6884) * 0.0);
  v19 = FIELD_F32(a1, 6872)
      + (float)((float)((float)(FIELD_F32(a1, 6860) * 0.0) - (float)(FIELD_F32(a1, 6864) * 6.0))
              + (float)(FIELD_F32(a1, 6868) * 0.0));
  FIELD_F32(a1, 11072) = FIELD_F32(a1, 6856)
                         + (float)((float)((float)(FIELD_F32(a1, 6844) * 0.0) - (float)(FIELD_F32(a1, 6848) * 6.0))
                                 + (float)(FIELD_F32(a1, 6852) * 0.0));
  FIELD_F32(a1, 11076) = v19;
  FIELD_F32(a1, 11080) = v17 + v18;
  return a1 + 11080;
}
