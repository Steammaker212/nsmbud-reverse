/* sub_6063F758
 * address: 0x6063F758   size: 556   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6063F758(int a1)
{
  int v2; // r1
  int v3; // r2
  int v4; // r1
  int v5; // r0
  float v6; // s0
  float v7; // s6
  float *v8; // r12
  int v9; // r0
  float v10; // s12
  float v11; // s14
  float *v12; // r5
  int v13; // r0
  int v14; // r0
  float v15; // s8
  float v16; // s10
  float *v17; // r0
  float *v18; // r1
  float v19; // s2
  float v20; // s4
  float **v21; // r0
  float *v22; // r3
  float v23; // s1
  float v24; // s3
  _DWORD *v25; // r2
  float *v26; // r3
  float v27; // s2
  float v28; // s0
  float *v29; // r3
  float *v30; // r0
  int v31; // r5
  int v32; // r6
  int v33; // r7

  StateMgr__execute((StateMgr *)(a1 + 6084));
  sub_6063F984(a1);
  if ( FIELD_U8(a1, 6162) )
  {
    v2 = FIELD_U32(a1, 6192);
    if ( !v2 || (FIELD_U32(a1, 6192) = v2 - 1, v2 <= 1) )
    {
      if ( (*(_BYTE *)(**(_DWORD **)(FIELD_U32(a1, 6108) + 12) + 28) & 0x20) != 0 )
      {
        lift_han_leaf_ref(a1);
        FIELD_U32(a1, 6244) = 0;
        FIELD_U8(a1, 6162) = 0;
        FIELD_U32(a1, 6200) = 0;
        FIELD_U32(a1, 6196) = 0;
        FIELD_U32(a1, 6192) = 0;
        FIELD_U32(a1, 6188) = 0;
      }
    }
  }
  skl_root_ref_63F258(a1);
  v3 = FIELD_U32(a1, 80);
  v4 = a1 + 6296;
  v5 = 1;
  v6 = FIELD_F32(a1, 6296);
  v7 = FIELD_F32(a1, 6300);
  if ( v3 == 1 )
    v5 = 2;
  v8 = (float *)(v4 + 12 * v5);
  v9 = 3;
  if ( v3 == 1 )
    v9 = 0;
  v10 = *v8;
  v11 = v8[1];
  v12 = (float *)(v4 + 12 * v9);
  v13 = 0;
  if ( v3 == 1 )
    v13 = 3;
  v14 = 3 * v13;
  if ( v3 != 1 )
    v3 = 2;
  v15 = *v12;
  v16 = v12[1];
  v17 = (float *)(v4 + 4 * v14);
  v18 = (float *)(v4 + 12 * v3);
  v19 = *v17;
  v20 = v17[1];
  v21 = (float **)(a1 + 6688);
  v22 = *(float **)(a1 + 6688);
  v23 = *v18;
  v24 = v18[1];
  *v22 = v19 - v6;
  v22[1] = v20 - v7;
  v25 = (_DWORD *)(a1 + 6684);
  v26 = *(float **)(a1 + 6688);
  if ( FIELD_U32(a1, 6684) > 1u )
    v26 += 2;
  *v26 = v10 - v6;
  v26[1] = v11 - v7;
  v27 = v23 - v6;
  v28 = v15 - v6;
  v29 = *v21;
  if ( *v25 > 2u )
    v29 += 4;
  *v29 = v27;
  v29[1] = v24 - v7;
  v30 = *v21;
  if ( *v25 > 3u )
    v30 += 6;
  *v30 = v28;
  v30[1] = v16 - v7;
  SolidOnTopCollider_execute((ColliderBase *)(a1 + 6344));
  v31 = FIELD_U32(a1, 108);
  v32 = FIELD_U32(a1, 112);
  v33 = FIELD_U32(a1, 116);
  FIELD_U32(a1, 108) = FIELD_U32(a1, 6124);
  FIELD_U32(a1, 112) = FIELD_U32(a1, 6128);
  FIELD_U32(a1, 116) = FIELD_U32(a1, 6132);
  StageActor__cullCheck((StageActor *)a1, 8);
  FIELD_U32(a1, 108) = v31;
  FIELD_U32(a1, 112) = v32;
  FIELD_U32(a1, 116) = v33;
  FIELD_U32(a1, 6964) = -1;
  FIELD_U32(a1, 6960) = -1;
  FIELD_U32(a1, 6956) = -1;
  FIELD_U32(a1, 6952) = -1;
  return 1;
}
