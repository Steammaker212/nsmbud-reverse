/* SolidOnTopCollider_init2
 * address: 0x6015E138   size: 604   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall SolidOnTopCollider_init2(
        SolidOnTopCollider *a1,
        StageActor *owner,
        SolidOnTopColliderInfo *info,
        signed int numPoints,
        int heap)
{
  __int64 v9; // r0
  int v10; // r0
  int v11; // r9
  int v12; // r10
  int v13; // r0
  unsigned int v14; // r4
  int v15; // r6
  int v16; // r8
  int v17; // r6
  int v18; // r4
  int v19; // r7
  int v20; // r0
  int v21; // r1
  _DWORD *v22; // r1
  int v23; // r0
  int v24; // r1
  int v25; // r3
  int v26; // r7
  int v27; // r7
  int *v28; // r0
  int v29; // r1
  unsigned int v30; // r2
  int v31; // r7
  int v32; // r3
  int v33; // r7
  bool v34; // cc
  int v35; // r3
  SolidOnTopColliderInfo *v36; // [sp+4h] [bp-3Ch]
  ColliderOwnerInfo a2a; // [sp+8h] [bp-38h] BYREF

  if ( numPoints <= 0 )
  {
    v12 = numPoints - 1;
LABEL_24:
    v11 = 0;
    goto LABEL_25;
  }
  v9 = 8LL * (unsigned int)numPoints;
  if ( !is_mul_ok(8u, numPoints) )
    HIDWORD(v9) = 1;
  if ( HIDWORD(v9) )
    LODWORD(v9) = -1;
  v10 = sub_608DE334(v9, heap, 4);
  v11 = 0;
  v12 = numPoints - 1;
  if ( v10 )
  {
    FIELD_U32(a1, 0x154) = numPoints;
    FIELD_U32(a1, 0x158) = v10;
  }
  if ( numPoints > 1 )
    v11 = 1;
  if ( numPoints < 2 )
    goto LABEL_24;
  __SET_PAIR__(v13, v14, 0x20LL * (unsigned int)v12);
  if ( !is_mul_ok(0x20u, v12) )
    v13 = 1;
  if ( v13 )
    v14 = -1;
  v15 = sub_608DE334(v14, heap, 4);
  if ( v15 )
  {
    v36 = info;
    v16 = 0;
    do
    {
      ColliderNode_ctor((ColliderNode *)(v15 + v16));
      v16 += 0x20;
    }
    while ( 32 * numPoints - 32 != v16 );
    FIELD_U32(a1, 0x15C) = v12;
    FIELD_U32(a1, 0x160) = v15;
    info = v36;
  }
  v17 = sub_608DE334(v14, heap, 4);
  if ( v17 )
  {
    v18 = 0;
    v19 = 32 * numPoints - 32;
    do
    {
      ColliderNode_ctor((ColliderNode *)(v17 + v18));
      v18 += 0x20;
    }
    while ( v19 != v18 );
    FIELD_U32(a1, 0x164) = v12;
    FIELD_U32(a1, 0x168) = v17;
  }
LABEL_25:
  v20 = FIELD_U32(a1, 0x154);
  if ( v20 >= 1 )
  {
    v21 = 0;
    if ( (v20 & 1) != 0 )
    {
      v22 = (_DWORD *)FIELD_U32(a1, 0x158);
      *v22 = 0;
      v22[1] = 0;
      v21 = 1;
    }
    if ( v20 != 1 )
    {
      v23 = v21 - v20;
      v24 = 8 * v21;
      v25 = 0;
      do
      {
        v26 = FIELD_U32(a1, 0x158) + v24;
        *(_DWORD *)(v26 - 8 * v25) = 0;
        *(_DWORD *)(v26 - 8 * v25 + 4) = 0;
        v27 = FIELD_U32(a1, 0x158) + v24 - 8 * v25;
        v25 -= 2;
        FIELD_U32(v27, 8) = 0;
        FIELD_U32(v27, 12) = 0;
      }
      while ( v23 != v25 );
    }
  }
  if ( v11 == 1 )
  {
    v28 = &FIELD_U32(a1, 0x130);
    v29 = 0;
    v30 = 0;
    do
    {
      v31 = FIELD_U32(a1, 0x160);
      v32 = FIELD_U32(a1, 0x134);
      if ( FIELD_U32(a1, 0x15C) > v30 )
        v31 += v29;
      FIELD_U32(v31, 24) = *v28;
      FIELD_U32(v31, 28) = v32;
      v33 = FIELD_U32(a1, 0x168);
      v34 = FIELD_U32(a1, 0x164) > v30;
      v35 = FIELD_U32(a1, 0x134);
      ++v30;
      if ( v34 )
        v33 += v29;
      v29 += 32;
      FIELD_U32(v33, 24) = *v28;
      FIELD_U32(v33, 28) = v35;
    }
    while ( v12 != v30 );
  }
  a2a.positionPtr = &FIELD_U32(owner, 0x6C);
  a2a._248Ptr = &FIELD_U32(owner, 0x248);
  a2a._56Ptr = &FIELD_U8(owner, 0x56);
  a2a._57Ptr = &FIELD_U8(owner, 0x57);
  a2a.playerIdPtr = &FIELD_U8(owner, 0x54);
  SolidOnTopCollider_initImpl(a1, &a2a, info);
  FIELD_U32(a1, 0x90) = owner;
}
