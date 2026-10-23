/* sub_60446668
 * address: 0x60446668   size: 720   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60446668(int a1, int *a2)
{
  int result; // r0
  int v5; // r1
  int v6; // r6
  bool v7; // zf
  int *v8; // r5
  int *v9; // r0
  int v10; // r0
  _QWORD *v11; // r1
  _QWORD *v12; // r0
  __int64 v13; // d17
  _QWORD *v14; // r2
  __int64 v15; // d17
  __int64 *v16; // r2
  __int64 v17; // d16
  __int64 v18; // d17
  _QWORD *v19; // r2
  __int64 v20; // d17
  _DWORD *v21; // r12
  int v22; // r2
  int v23; // r4
  int v24; // r5
  int v25; // r6
  int v26; // r7
  int v27; // r2
  int v28; // r4
  int v29; // r5
  int v30; // r6
  int v31; // r7
  int v32; // r1
  int v33; // r7
  bool v34; // zf
  int v35; // r6
  _DWORD *v36; // r9
  int v37; // r4
  int v38; // r1
  bool v39; // zf
  _DWORD v40[60]; // [sp+14h] [bp-174h] BYREF
  int (**v41)(); // [sp+104h] [bp-84h] BYREF
  _DWORD v42[32]; // [sp+108h] [bp-80h] BYREF

  result = *a2;
  if ( *a2 == 2 )
  {
    result = FIELD_U32(a1, 420);
    if ( result )
    {
      v33 = a1 + 5424;
      v32 = FIELD_U32(a1, 5424);
      v34 = v32 == 0;
      if ( v32 )
      {
        result = FIELD_U32(result, 28);
        v34 = result == 0;
      }
      if ( !v34 )
      {
        v35 = a1 + 432;
        sub_6095D89C(a1 + 432, 1);
        FIELD_U32(a1, 5352) = a2;
        v36 = (_DWORD *)(a1 + 5352);
        sub_6095DC40(v35, a2[10]);
        sub_6095DC64(v35, a2[10]);
        v37 = *(v36 - 992);
        sub_60959C28(v36 - 114, v37 + 16, 0);
        *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v33 + 420) + 888) = v37;
        *v36 = 0;
        return sub_6090B260(a2[3], a2[10]);
      }
    }
  }
  else if ( result == 1 )
  {
    result = FIELD_U32(a1, 420);
    if ( result )
    {
      v38 = FIELD_U32(a1, 5424);
      v39 = v38 == 0;
      if ( v38 )
        v39 = FIELD_U32(result, 28) == 0;
      if ( !v39 )
        return sub_60445044(result, FIELD_U32(a1, 424));
    }
  }
  else if ( !result )
  {
    result = FIELD_U32(a1, 420);
    if ( result )
    {
      v6 = a1 + 5424;
      v5 = FIELD_U32(a1, 5424);
      v7 = v5 == 0;
      if ( v5 )
      {
        result = FIELD_U32(result, 28);
        v7 = result == 0;
      }
      if ( !v7 )
      {
        FIELD_U8(a1, 4736) = 1;
        ((void (__fastcall *)(int, int))loc_60966E2C)(a1 + 4740, a1 + 5436);
        v8 = *(int **)(*(_DWORD *)v6 + 72);
        v9 = *(int **)(*(_DWORD *)v6 + 76);
        if ( !v8 )
          v8 = &dword_60CD0A2C;
        if ( !v9 )
          v9 = &dword_60CD0A90;
        v10 = sub_6090BE54(v9);
        sub_6095DDA8(a1 + 432, v8 + 1, v10);
        if ( FIELD_U8(a1, 5449) )
        {
          v40[0] = 0;
          v40[1] = 1065353216;
          v40[2] = 0;
          v40[3] = 0;
          sub_6095EA18(a1 + 432, v40);
        }
        sub_60445768(FIELD_U32(a1, 420), a1 + 432, a1);
        sub_6095EA6C(a1 + 432);
        v11 = *(_QWORD **)(a1 + 1056);
        v12 = *(_QWORD **)v6;
        v13 = *(_QWORD *)((char *)v11 + 652);
        v14 = (_QWORD *)(*(_DWORD *)v6 + 432);
        *v14 = *(_QWORD *)((char *)v11 + 644);
        v14[1] = v13;
        v15 = *(_QWORD *)((char *)v11 + 668);
        v12[56] = *(_QWORD *)((char *)v11 + 660);
        v12[57] = v15;
        v16 = (_QWORD *)((char *)v11 + 676);
        v11 = (_QWORD *)((char *)v11 + 692);
        v17 = *v16;
        v18 = v16[1];
        v19 = v12 + 58;
        v12 += 60;
        *v19 = v17;
        v19[1] = v18;
        v20 = v11[1];
        *v12 = *v11;
        v12[1] = v20;
        v21 = *(_DWORD **)(a1 + 1056);
        v42[0] = 1065353216;
        memset(&v42[1], 0, 16);
        v42[5] = 1065353216;
        memset(&v42[6], 0, 16);
        v42[10] = 1065353216;
        v42[11] = 0;
        v41 = off_60C5D068;
        v22 = v21[134];
        v23 = v21[135];
        v24 = v21[136];
        v25 = v21[137];
        v26 = v21[138];
        v42[12] = v21[133];
        v42[13] = v22;
        v42[14] = v23;
        v42[15] = v24;
        v42[16] = v25;
        v42[17] = v26;
        v27 = v21[140];
        v28 = v21[141];
        v29 = v21[142];
        v30 = v21[143];
        v31 = v21[144];
        v42[18] = v21[139];
        v42[19] = v27;
        v42[20] = v28;
        v42[21] = v29;
        v42[22] = v30;
        v42[23] = v31;
        off_60C5D078(&v41, v42);
        sub_6090CE08(v40, FIELD_U32(a1, 1056) + 580, 0);
        sub_60444EDC(*(_DWORD **)(a1 + 420), FIELD_U32(a1, 424), (int)&v41, (int)v40, 0, FIELD_U32(a1, 428), 0);
        nullsub_113(v40);
        return nullsub_111(&v41);
      }
    }
  }
  return result;
}
