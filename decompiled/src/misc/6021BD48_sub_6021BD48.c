/* sub_6021BD48
 * address: 0x6021BD48   size: 564   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6021BD48(int a1)
{
  int v2; // r0
  char v3; // r0
  float v4; // s8
  float v5; // s2
  float v6; // s4
  float v7; // s0
  float v8; // s18
  float v9; // s16
  float v10; // s0
  float v11; // s6
  float v12; // s8
  float v13; // s4
  int v14; // r5
  float v15; // s10
  float v16; // s0
  float v17; // s12
  float v18; // s7
  float v19; // s14
  float v20; // s3
  float v21; // s1
  float v22; // s5
  float v23; // s12
  float v24; // s14
  float v25; // s1
  float v26; // s2
  float v27; // s10
  float v28; // s0
  float v29; // s4
  float v30; // s6
  float v31; // s8
  int v32; // r6
  _DWORD *v33; // r4
  int v34; // t1
  void *CurrentHeap_const; // r0
  int v37; // [sp+4h] [bp-2Ch] BYREF
  int v38; // [sp+8h] [bp-28h]
  int v39; // [sp+Ch] [bp-24h]

  sub_6021A000((float *)a1);
  ((void (__fastcall *)(int))loc_60219E1C)(a1);
  v2 = sub_601CF9C0(dword_60C8AEF0);
  v37 = -1;
  v38 = -1;
  v39 = -1;
  sub_6019EC34(&v37, (_DWORD *)(v2 + 1032));
  if ( v38 )
    v3 = ((int (__fastcall *)(int, int))loc_6021A420)(a1, v37);
  else
    v3 = ((int (__fastcall *)(int))loc_6021A0EC)(a1);
  FIELD_U8(a1, 1440) = v3;
  v4 = FIELD_F32(a1, 792);
  v5 = FIELD_F32(a1, 1340);
  v6 = (float)(FIELD_F32(a1, 1436) + FIELD_F32(a1, 784)) + FIELD_F32(a1, 780);
  v7 = FIELD_F32(a1, 1264) + v5;
  FIELD_F32(a1, 788) = v7;
  v8 = v6 + v4;
  if ( v37 == 8 )
  {
    v7 = FIELD_F32(a1, 1268) + v5;
    FIELD_F32(a1, 788) = v7;
  }
  v9 = cosf(v7);
  v10 = sinf(FIELD_F32(a1, 788));
  v11 = FIELD_F32(a1, 632);
  v12 = FIELD_F32(a1, 636);
  v13 = FIELD_F32(a1, 628);
  v14 = a1 + 364;
  v15 = v11 + (float)(v8 * v10);
  FIELD_F32(a1, 616) = v13 + 0.0;
  v16 = v12 + (float)(v8 * v9);
  FIELD_F32(a1, 620) = v15;
  FIELD_F32(a1, 624) = v16;
  v17 = FIELD_F32(a1, 724);
  v18 = FIELD_F32(a1, 700);
  v19 = FIELD_F32(a1, 728);
  v20 = FIELD_F32(a1, 704);
  v21 = FIELD_F32(a1, 732);
  v22 = FIELD_F32(a1, 708);
  FIELD_U32(a1, 688) = FIELD_U32(a1, 676);
  v23 = v18 + v17;
  v24 = v20 + v19;
  v25 = v22 + v21;
  FIELD_U32(a1, 692) = FIELD_U32(a1, 680);
  v26 = v23 + (float)(v13 + 0.0);
  v27 = v24 + v15;
  v28 = v25 + v16;
  v29 = v23 + v13;
  v30 = v24 + v11;
  v31 = v25 + v12;
  FIELD_U32(a1, 696) = FIELD_U32(a1, 684);
  FIELD_F32(a1, 664) = v26;
  FIELD_F32(a1, 668) = v27;
  FIELD_F32(a1, 672) = v28;
  FIELD_F32(a1, 676) = v29;
  FIELD_F32(a1, 680) = v30;
  FIELD_F32(a1, 684) = v31;
  FIELD_F32(a1, 328) = v26;
  FIELD_F32(a1, 332) = v27;
  FIELD_F32(a1, 336) = v28;
  FIELD_F32(a1, 340) = v29;
  FIELD_F32(a1, 344) = v30;
  FIELD_F32(a1, 348) = v31;
  sub_6090C42C(a1 + 364);
  v32 = a1 + 276;
  (*(void (__fastcall **)(int, int))(FIELD_U32(a1, 276) + 16))(a1 + 276, a1 + 280);
  v34 = FIELD_U32(a1, 548);
  v33 = (_DWORD *)(a1 + 548);
  if ( !v34 )
  {
    CurrentHeap_const = (void *)sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
    *v33 = operator_new_8DE25C(0xF0u, CurrentHeap_const, 16);
  }
  return sub_60411260(v33, v32, v14);
}
