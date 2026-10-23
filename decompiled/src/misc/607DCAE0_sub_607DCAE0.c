/* sub_607DCAE0
 * address: 0x607DCAE0   size: 884   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607DCAE0(int a1, int *a2, int a3, int a4)
{
  _DWORD *v8; // r7
  int v9; // t1
  int v10; // r11
  int v11; // r2
  int v12; // r3
  int v13; // r4
  int v14; // r5
  int v15; // r6
  int v16; // r4
  nn__hid__VibrationNodeConnection **v17; // r7
  nn__hid__VibrationNodeConnection *v18; // r6
  nn__hid__VibrationNode *v19; // r5
  int v20; // r5
  nn__hid__VibrationNode *v21; // r9
  nn__hid__VibrationNodeConnection *v22; // r6
  int v23; // r0
  int v24; // r0
  int v25; // r0
  nn__hid__VibrationNode *v26; // r1
  int v27; // r0
  int v28; // r0
  nn__hid__VibrationNode *v29; // r1
  int v30; // r0
  nn__hid__VibrationNodeConnection **v31; // r4
  nn__hid__VibrationNode *v32; // r5
  nn__hid__VibrationNodeConnection *v33; // r6
  int v34; // r0
  int v35; // r0
  int v36; // r0
  nn__hid__VibrationNode *v37; // r1
  int v39; // [sp+4h] [bp-34h] BYREF
  int v40; // [sp+8h] [bp-30h]
  int v41; // [sp+Ch] [bp-2Ch]
  int v42; // [sp+10h] [bp-28h]

  if ( !FIELD_U8(a1, 4) )
    return 0;
  sub_607DCA20(a1);
  v9 = *a2;
  v8 = a2 + 1;
  v10 = 0;
  FIELD_U32(a1, 24) = v9;
  v11 = v8[1];
  v12 = v8[2];
  v13 = v8[3];
  v14 = v8[4];
  v15 = v8[5];
  FIELD_U32(a1, 28) = *v8;
  FIELD_U32(a1, 32) = v11;
  FIELD_U32(a1, 36) = v12;
  FIELD_U32(a1, 40) = v13;
  FIELD_U32(a1, 44) = v14;
  FIELD_U32(a1, 48) = v15;
  v16 = a1 + 8 * a3;
  FIELD_U32(v16, 388) = 0;
  v17 = (nn__hid__VibrationNodeConnection **)(v16 + 388);
  if ( a4 == 1 )
    goto LABEL_31;
  if ( a4 )
  {
    v10 = 0;
    v21 = (nn__hid__VibrationNode *)sub_607DC0A8(FIELD_U32(a1, 20), a3, 0);
    if ( !v21 )
      goto LABEL_31;
    v22 = 0;
    if ( FIELD_U32(a1, 472) < FIELD_U32(a1, 476) )
    {
      v22 = *(nn__hid__VibrationNodeConnection **)(a1 + 484);
      if ( v22 )
        FIELD_U32(a1, 484) = *(_DWORD *)v22;
      else
        v22 = 0;
      nn__hid__VibrationNodeConnection__ctor(v22);
      v27 = FIELD_U32(a1, 472);
      if ( v27 < FIELD_U32(a1, 476) )
      {
        *(_DWORD *)(FIELD_U32(a1, 480) + 4 * v27) = v22;
        ++FIELD_U32(a1, 472);
      }
    }
    *v17 = v22;
    v10 = 1;
    v28 = FIELD_U32(a1, 24);
    if ( v28 == 1 )
    {
      v30 = FIELD_U32(a1, 468);
      v39 = 0;
      v40 = 1126170624;
      v41 = 0;
      v42 = 1134559232;
      nn__hid__VibrationWriter__Write(v30, &v39);
      v29 = *(nn__hid__VibrationNode **)(a1 + 468);
    }
    else
    {
      if ( v28 )
        goto LABEL_31;
      v29 = *(nn__hid__VibrationNode **)(a1 + 464);
    }
    nn__hid__VibrationNodeConnection__Connect(v22, v29, v21);
LABEL_31:
    FIELD_U32(v16, 392) = 0;
    v31 = (nn__hid__VibrationNodeConnection **)(v16 + 392);
    v32 = (nn__hid__VibrationNode *)sub_607DC0A8(FIELD_U32(a1, 20), a3, 1);
    if ( !v32 )
    {
      sub_607DCE58(a1);
      v20 = 0;
      if ( !v10 )
        return v20;
      goto LABEL_46;
    }
    v33 = 0;
    if ( FIELD_U32(a1, 472) < FIELD_U32(a1, 476) )
    {
      v33 = *(nn__hid__VibrationNodeConnection **)(a1 + 484);
      if ( v33 )
        FIELD_U32(a1, 484) = *(_DWORD *)v33;
      else
        v33 = 0;
      nn__hid__VibrationNodeConnection__ctor(v33);
      v34 = FIELD_U32(a1, 472);
      if ( v34 < FIELD_U32(a1, 476) )
      {
        *(_DWORD *)(FIELD_U32(a1, 480) + 4 * v34) = v33;
        ++FIELD_U32(a1, 472);
      }
    }
    *v31 = v33;
    v35 = FIELD_U32(a1, 24);
    if ( v35 )
    {
      if ( v35 != 1 )
        goto LABEL_45;
      v36 = FIELD_U32(a1, 468);
      v39 = 0;
      v40 = 1126170624;
      v41 = 0;
      v42 = 1134559232;
      nn__hid__VibrationWriter__Write(v36, &v39);
      v37 = *(nn__hid__VibrationNode **)(a1 + 468);
    }
    else
    {
      v37 = *(nn__hid__VibrationNode **)(a1 + 464);
    }
    nn__hid__VibrationNodeConnection__Connect(v33, v37, v32);
    goto LABEL_45;
  }
  v18 = 0;
  v19 = (nn__hid__VibrationNode *)sub_607DC0A8(FIELD_U32(a1, 20), a3, 0);
  if ( !v19 )
  {
    v20 = 0;
    FIELD_U32(v16, 392) = 0;
    sub_607DCE58(a1);
    return v20;
  }
  if ( FIELD_U32(a1, 472) < FIELD_U32(a1, 476) )
  {
    v18 = *(nn__hid__VibrationNodeConnection **)(a1 + 484);
    if ( v18 )
      FIELD_U32(a1, 484) = *(_DWORD *)v18;
    else
      v18 = 0;
    nn__hid__VibrationNodeConnection__ctor(v18);
    v23 = FIELD_U32(a1, 472);
    if ( v23 < FIELD_U32(a1, 476) )
    {
      *(_DWORD *)(FIELD_U32(a1, 480) + 4 * v23) = v18;
      ++FIELD_U32(a1, 472);
    }
  }
  *v17 = v18;
  v24 = FIELD_U32(a1, 24);
  if ( !v24 )
  {
    v26 = *(nn__hid__VibrationNode **)(a1 + 464);
    goto LABEL_21;
  }
  if ( v24 == 1 )
  {
    v25 = FIELD_U32(a1, 468);
    v39 = 0;
    v40 = 1126170624;
    v41 = 0;
    v42 = 1134559232;
    nn__hid__VibrationWriter__Write(v25, &v39);
    v26 = *(nn__hid__VibrationNode **)(a1 + 468);
LABEL_21:
    nn__hid__VibrationNodeConnection__Connect(v18, v26, v19);
  }
  FIELD_U32(v16, 392) = 0;
LABEL_45:
  sub_607DCE58(a1);
LABEL_46:
  v20 = 1;
  FIELD_U32(a1, 16) = 2;
  if ( dword_60CC5760 )
    dword_60CC5760(a1);
  return v20;
}
