/* sub_604C9870
 * address: 0x604C9870   size: 688   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604C9870(int a1)
{
  int v2; // r5
  StateMethodExecuter *result; // r0
  int v4; // r6
  int *v5; // r4
  int v6; // t1
  int *v7; // r10
  int v8; // r0
  int *v9; // r0
  int v10; // r2
  int *v11; // r0
  int v12; // r2
  int v13; // r1
  int v14; // r0
  int v15; // r7
  int v16; // t1
  int *v17; // r10
  int v18; // r0
  int *v19; // r0
  int v20; // r2
  int *v21; // r0
  int v22; // r7
  int v23; // t1
  int *v24; // r10
  int v25; // r0
  int *v26; // r0
  int v27; // r2
  int *v28; // r0
  int v29; // [sp+4h] [bp-24h]

  v29 = FIELD_U32(a1, 27992);
  v2 = dword_60C99DEC;
  result = (StateMethodExecuter *)(v29 - 2);
  switch ( v29 )
  {
    case 2:
      v4 = 0;
      FIELD_U32(a1, 615704) = 3;
      FIELD_U32(v2, 508) = 2;
      FIELD_U8(v2, 512) = 0;
      v6 = FIELD_U32(a1, 615700);
      v5 = (int *)(a1 + 615700);
      FIELD_U16(v2, 526) = v6;
      v7 = v5 - 131613;
      v8 = *v5;
      if ( (unsigned int)*v5 >= 0xA )
        v8 = 0;
      v9 = &v7[13161 * v8];
      v10 = v9[13155];
      if ( v10 == 12 )
        v10 = 0;
      FIELD_U8(v2, 528) = sub_6040135C(dword_60C99E44, v9[10], v10);
      if ( (unsigned int)*v5 < 0xA )
        v4 = *v5;
      v11 = &v7[13161 * v4];
      v12 = v11[13155];
      v13 = v11[10];
      v14 = dword_60C99E44;
      if ( v12 == 12 )
        v12 = 0;
      goto LABEL_28;
    case 3:
      v15 = 0;
      FIELD_U32(a1, 615704) = 3;
      FIELD_U32(v2, 508) = 2;
      FIELD_U8(v2, 512) = 1;
      v16 = FIELD_U32(a1, 615700);
      v5 = (int *)(a1 + 615700);
      FIELD_U16(v2, 526) = v16;
      v17 = v5 - 131613;
      v18 = *v5;
      if ( (unsigned int)*v5 >= 0xA )
        v18 = 0;
      v19 = &v17[13161 * v18];
      v20 = v19[13155];
      if ( v20 == 12 )
        v20 = 0;
      FIELD_U8(v2, 528) = sub_6040135C(dword_60C99E44, v19[10], v20);
      if ( (unsigned int)*v5 < 0xA )
        v15 = *v5;
      v21 = &v17[13161 * v15];
      v12 = v21[13155];
      v13 = v21[10];
      v14 = dword_60C99E44;
      if ( v12 == 12 )
        v12 = 0;
      goto LABEL_28;
    case 4:
      v22 = 0;
      FIELD_U32(a1, 615704) = 3;
      FIELD_U32(v2, 508) = 3;
      v23 = FIELD_U32(a1, 615700);
      v5 = (int *)(a1 + 615700);
      FIELD_U16(v2, 526) = v23;
      v24 = v5 - 131613;
      v25 = *v5;
      if ( (unsigned int)*v5 >= 0xA )
        v25 = 0;
      v26 = &v24[13161 * v25];
      v27 = v26[13155];
      if ( v27 == 12 )
        v27 = 0;
      FIELD_U8(v2, 528) = sub_6040135C(dword_60C99E44, v26[10], v27);
      if ( (unsigned int)*v5 < 0xA )
        v22 = *v5;
      v28 = &v24[13161 * v22];
      v12 = v28[13155];
      v13 = v28[10];
      v14 = dword_60C99E44;
      if ( v12 == 12 )
        v12 = 0;
LABEL_28:
      FIELD_U8(v2, 529) = sub_6040137C(v14, v13, v12);
      result = StateMgr__changeState((StateMgr *)(v5 - 153919), (StateBase *)&dword_60CA3298);
      break;
    case 5:
      result = StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CA3338);
      break;
    default:
      return result;
  }
  return result;
}
