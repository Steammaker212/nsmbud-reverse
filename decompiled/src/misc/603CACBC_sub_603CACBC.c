/* sub_603CACBC
 * address: 0x603CACBC   size: 1712   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603CACBC(int a1, int a2, char a3, int *a4)
{
  int v5; // r10
  int v8; // r7
  int v9; // r4
  int *v10; // r9
  char *v11; // r6
  int v12; // t1
  float v13; // s0
  int v14; // r0
  int v15; // r1
  char v16; // r0
  _DWORD *v17; // r1
  char v18; // r0
  _DWORD *v19; // r1
  char v20; // r0
  _DWORD *v21; // r1
  char v22; // r0
  _DWORD *v23; // r1
  char v24; // r0
  _DWORD *v25; // r1
  float v26; // s2
  float v27; // s0
  TileCheck *v28; // r0
  float v29; // s0
  float v30; // s2
  TileCheck *v31; // r0
  int v32; // r0
  int v33; // r4
  int v34; // r1
  int *v35; // r9
  int v36; // r0
  signed int v37; // r0
  float v38; // s0
  int v39; // r1
  int v40; // r1
  int v41; // r1
  signed int v42; // r0
  _DWORD *v43; // r5
  int v44; // t1
  int v45; // r0
  float v47[2]; // [sp+8h] [bp-B8h] BYREF
  float v48[2]; // [sp+10h] [bp-B0h] BYREF
  float v49[2]; // [sp+18h] [bp-A8h] BYREF
  float v50[2]; // [sp+20h] [bp-A0h] BYREF
  TileCheck v51; // [sp+28h] [bp-98h] BYREF
  TileCheck_Param v52; // [sp+74h] [bp-4Ch] BYREF
  int (**v53)(); // [sp+80h] [bp-40h] BYREF
  char v54; // [sp+84h] [bp-3Ch]

  v5 = a2;
  v8 = a1 + 648;
  v10 = (int *)(a1 + 6300);
  v9 = FIELD_U32(a1, 6300);
  if ( !a2 )
    v8 = a1 + 6368;
  CollisionMgr_init((CollisionMgr *)v8, (StateActor *)a1, 0, 0, 0);
  if ( (a3 & 8) != 0 )
    CollisionMgr_setSensor((CollisionMgr *)v8, (CollisionMgr_Sensor *)&unk_60B00F64 + 9 * v9 + 3 * v5, 3);
  if ( (a3 & 4) != 0 )
    CollisionMgr_setSensor((CollisionMgr *)v8, (CollisionMgr_Sensor *)&unk_60B00F64 + 9 * v9 + 3 * v5 + 1, 2);
  if ( (a3 & 3) != 0 )
  {
    v11 = (char *)&unk_60B00F64 + 108 * v9 + 36 * v5;
    v12 = *((_DWORD *)v11 + 6);
    v11 += 24;
    CollisionMgr_setSensor((CollisionMgr *)v8, (CollisionMgr_Sensor *)v11, 0);
    v13 = *((float *)v11 + 2);
    v14 = *((_DWORD *)v11 + 1);
    *(_DWORD *)&v51.field_0 = v12;
    v51.field_4 = v14;
    *(float *)&v51.field_8 = -v13;
    CollisionMgr_setSensor((CollisionMgr *)v8, (CollisionMgr_Sensor *)&v51, 1);
  }
  FIELD_U8(v8, 2528) = 0;
  FIELD_U8(v8, 2556) = 0;
  FIELD_U8(v8, 2552) = 0;
  FIELD_U8(v8, 2548) = 0;
  FIELD_U8(v8, 2544) = 0;
  FIELD_U8(v8, 2540) = 0;
  FIELD_U8(v8, 2536) = 0;
  FIELD_U8(v8, 2532) = 0;
  FIELD_U8(v8, 2559) = 0;
  FIELD_U8(v8, 2558) = 0;
  FIELD_U8(v8, 2557) = 0;
  FIELD_U8(v8, 2555) = 0;
  FIELD_U8(v8, 2554) = 0;
  FIELD_U8(v8, 2553) = 0;
  FIELD_U8(v8, 2551) = 0;
  FIELD_U8(v8, 2550) = 0;
  FIELD_U8(v8, 2549) = 0;
  FIELD_U8(v8, 2547) = 0;
  FIELD_U8(v8, 2546) = 0;
  FIELD_U8(v8, 2545) = 0;
  FIELD_U8(v8, 2543) = 0;
  FIELD_U8(v8, 2542) = 0;
  FIELD_U8(v8, 2541) = 0;
  FIELD_U8(v8, 2539) = 0;
  FIELD_U8(v8, 2538) = 0;
  FIELD_U8(v8, 2537) = 0;
  FIELD_U8(v8, 2535) = 0;
  FIELD_U8(v8, 2534) = 0;
  FIELD_U8(v8, 2533) = 0;
  FIELD_U8(v8, 2531) = 0;
  FIELD_U8(v8, 2530) = 0;
  FIELD_U8(v8, 2529) = 0;
  v15 = *v10;
  if ( *v10 == 1 )
  {
    *(_DWORD *)&v51.field_0 = &v51.field_10;
    v51.field_4 = 6;
    v51.field_8 = 0;
    v51.field_10 = 11;
    v51.field_14 = 28;
    v51.field_18 = 9;
    v51.field_1C = 26;
    v51.field_20 = 10;
    v51.field_C = 6;
    v51.field_24 = 27;
    FIELD_U32(v8, 2552) |= 0x800u;
    FIELD_U32(v8, 2544) |= 0x800u;
    FIELD_U32(v8, 2528) |= 0x800u;
    FIELD_U32(v8, 2536) |= 0x800u;
    if ( v51.field_14 < 0x39u )
    {
      v16 = v51.field_14 & 0x1F;
      v17 = (_DWORD *)(v8 + 4 * ((unsigned int)v51.field_14 >> 5));
      v17[638] |= 1 << (v51.field_14 & 0x1F);
      v17[636] |= 1 << v16;
      v17[632] |= 1 << v16;
      v17[634] |= 1 << v16;
    }
    if ( v51.field_18 <= 0x38u )
    {
      v18 = v51.field_18 & 0x1F;
      v19 = (_DWORD *)(v8 + 4 * ((unsigned int)v51.field_18 >> 5));
      v19[638] |= 1 << (v51.field_18 & 0x1F);
      v19[636] |= 1 << v18;
      v19[632] |= 1 << v18;
      v19[634] |= 1 << v18;
    }
    if ( v51.field_1C <= 0x38u )
    {
      v20 = v51.field_1C & 0x1F;
      v21 = (_DWORD *)(v8 + 4 * ((unsigned int)v51.field_1C >> 5));
      v21[638] |= 1 << (v51.field_1C & 0x1F);
      v21[636] |= 1 << v20;
      v21[632] |= 1 << v20;
      v21[634] |= 1 << v20;
    }
    if ( v51.field_20 <= 0x38u )
    {
      v22 = v51.field_20 & 0x1F;
      v23 = (_DWORD *)(v8 + 4 * ((unsigned int)v51.field_20 >> 5));
      v23[638] |= 1 << (v51.field_20 & 0x1F);
      v23[636] |= 1 << v22;
      v23[632] |= 1 << v22;
      v23[634] |= 1 << v22;
    }
    if ( v51.field_24 <= 0x38u )
    {
      v24 = v51.field_24 & 0x1F;
      v25 = (_DWORD *)(v8 + 4 * ((unsigned int)v51.field_24 >> 5));
      v25[638] |= 1 << (v51.field_24 & 0x1F);
      v25[636] |= 1 << v24;
      v25[632] |= 1 << v24;
      v25[634] |= 1 << v24;
    }
    v15 = *v10;
  }
  if ( !(v15 | v5) )
  {
    v26 = FIELD_F32(a1, 112);
    v27 = FIELD_F32(a1, 108) + -7.0;
    v53 = off_60BF7674;
    v54 = 0;
    *(_WORD *)&v52.field_0 = 256;
    v50[0] = v27;
    v49[0] = v27;
    v50[1] = v26 + -14.0;
    v49[1] = v26 + 14.0;
    v52.field_2 = FIELD_U8(a1, 86);
    v52.field_3 = FIELD_U8(a1, 87);
    v52.field_4 = 0;
    v52.field_8 = (int)&v53;
    v28 = TileCheck_ctor(&v51, &v52);
    v51.field_1C = 0;
    v51.field_18 = 0;
    ((void (__fastcall *)(TileCheck *, _DWORD, float *, float *, int))loc_6015D6F0)(v28, 0, v50, v49, 15);
    v29 = FIELD_F32(a1, 108);
    v30 = FIELD_F32(a1, 112);
    v53 = off_60BF7674;
    v54 = 0;
    *(_WORD *)&v52.field_0 = 256;
    v48[0] = v29 + 7.0;
    v47[0] = v29 + 7.0;
    v48[1] = v30 + -14.0;
    v47[1] = v30 + 14.0;
    v52.field_2 = FIELD_U8(a1, 86);
    v52.field_3 = FIELD_U8(a1, 87);
    v52.field_4 = 0;
    v52.field_8 = (int)&v53;
    v31 = TileCheck_ctor(&v51, &v52);
    v51.field_1C = 0;
    v51.field_18 = 0;
    ((void (__fastcall *)(TileCheck *, _DWORD, float *, float *, int))loc_6015D6F0)(v31, 0, v48, v47, 15);
  }
  if ( FIELD_U8(a1, 11728) )
    v5 = 1;
  if ( v5 == 1 )
  {
    CollisionMgr_setSensor((CollisionMgr *)(a1 + 11968), (CollisionMgr_Sensor *)&flt_60B00F4C[3 * *v10], 3);
    FIELD_U32(v8, 2556) |= 0x2000u;
  }
  (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 16))(v8);
  v32 = 17320;
  v33 = 0;
  v35 = (int *)(a1 + 17320);
  v34 = FIELD_U32(a1, 17320);
  if ( a4 )
    v32 = 0;
  *v35 = 0;
  FIELD_U32(a1, 17324) = v34;
  if ( a4 )
    *a4 = v32;
  v36 = FIELD_U32(v8, 2224);
  if ( (v36 & 1) != 0 )
  {
    if ( a4 )
      *a4 = sub_6014B69C(v8);
    v37 = sub_6014C4A4(v8);
    FIELD_U32(a1, 17328) = sub_6014C57C(v8, v37);
    v33 = 1;
    FIELD_U32(a1, 17332) = sub_6014C540(v8);
    v36 = FIELD_U32(v8, 2224);
  }
  v38 = FIELD_F32(a1, 120);
  v39 = 0x40000;
  if ( v38 < 0.0 )
    v39 = 0x80000;
  if ( (v39 & v36) != 0 )
    goto LABEL_41;
  v40 = 0x400000;
  if ( v38 < 0.0 )
    v40 = 0x800000;
  if ( (v40 & v36) != 0 )
  {
LABEL_41:
    v41 = 0x10000000;
    if ( v38 < 0.0 )
      v41 = 0x20000000;
    if ( (v36 & v41) == 0 )
      v33 |= 4u;
  }
  if ( (v36 & 0x10400) == 0x400 )
    v33 |= 2u;
  if ( v5 == 1 )
  {
    CollisionMgr_process((_BYTE *)(a1 + 11968), v38);
    if ( (FIELD_U8(a1, 14192) & 1) != 0 )
    {
      if ( a4 )
        *a4 = sub_6014B69C(a1 + 11968);
      v33 |= 1u;
      v42 = sub_6014C4A4(a1 + 11968);
      FIELD_U32(a1, 17328) = sub_6014C57C(a1 + 11968, v42);
      FIELD_U32(a1, 17332) = sub_6014C540(a1 + 11968);
    }
  }
  if ( sub_603CC15C(a1, v5) == 1 )
    SE_EMY_DOWN_ref_2A7624(a1);
  *v35 = v33;
  v44 = FIELD_U32(a1, 11932);
  v43 = (_DWORD *)(a1 + 11932);
  v45 = v43[1349];
  if ( v45 > v44 )
    *v43 = v45;
  return v33;
}
