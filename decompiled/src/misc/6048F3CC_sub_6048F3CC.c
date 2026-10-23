/* sub_6048F3CC
 * address: 0x6048F3CC   size: 1304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6048F3CC(int a1)
{
  _BYTE *v2; // r6
  int v3; // r2
  int v4; // r0
  int *v5; // r8
  int v6; // r1
  int v7; // r1
  int v8; // r7
  int v9; // r3
  int v10; // r3
  int v11; // r2
  int v12; // r7
  int v13; // r7
  int v15; // r0
  int v16; // r5
  int v17; // r0
  unsigned int v18; // r1
  int v19; // r2
  int v20; // r5
  unsigned int *v21; // r1
  unsigned int v22; // r7
  bool v23; // zf
  int v24; // r7
  unsigned int v25; // r3
  int v26; // r0
  int v27; // r3
  unsigned int v28; // r1
  int v29; // r5
  StateBase *v30; // r1
  StateMgr *v31; // r0
  unsigned int *v32; // r1
  unsigned int v33; // r3
  unsigned int v34; // r3
  int v35; // r5
  int v36; // r3
  unsigned int v37; // r7
  bool v38; // zf
  int v39; // r7
  unsigned int v40; // r2
  unsigned int v41; // r7
  int v42; // r0
  int v43; // r2
  unsigned int v44; // r1

  v2 = (_BYTE *)(a1 + 4811);
  if ( !FIELD_U8(a1, 4811) )
  {
    if ( FIELD_U8(a1, 4814) )
    {
      v15 = FIELD_U32(a1, 4796);
      if ( v15 == FIELD_U32(a1, 5868) )
      {
        v16 = 1;
        if ( !FIELD_U8(a1, 47817) )
          return v16;
        FIELD_U8(a1, 47817) = 0;
        v17 = a1 + 36;
        v18 = 6;
LABEL_46:
        sub_6047459C(v17, v18);
        return 1;
      }
      if ( v15 == FIELD_U32(a1, 5872) )
      {
        v16 = 1;
        if ( !FIELD_U8(a1, 47816) )
          return v16;
        FIELD_U8(a1, 47816) = 0;
        v17 = a1 + 36;
        v18 = 7;
        goto LABEL_46;
      }
      v32 = (unsigned int *)(a1 + 14228);
      v33 = FIELD_U32(a1, 14228);
      if ( v33 >= 4 )
        v33 = 0;
      if ( v15 == *(_DWORD *)(a1 + 4 * v33 + 6260) )
      {
        v34 = *v32;
        if ( *v32 >= 4 )
          v34 = 0;
        if ( *(int *)(*(_DWORD *)(a1 + 4 * v34 + 47800) + 84) > 1 )
        {
          sub_6048E23C(a1, 0, 256);
          sub_6048EBD4(a1, 256);
          v30 = (StateBase *)&unk_60C9F760;
          goto LABEL_77;
        }
      }
      v35 = 0;
      v36 = -1;
      do
      {
        v37 = *v32;
        if ( *v32 >= 4 )
          v37 = 0;
        v38 = *(_DWORD *)(a1 + 5876 + 96 * v37 + 4 * v35) == v15;
        v39 = 0;
        if ( v38 )
          v36 = v35;
        ++v35;
        if ( !v38 )
          v39 = 1;
      }
      while ( v35 <= 23 && v39 );
      if ( v36 >= 0 )
      {
        v40 = *v32;
        v41 = 0;
        v42 = a1 + 47800;
        if ( *v32 >= 4 )
          v40 = 0;
        v43 = *(_DWORD *)(v42 + 4 * v40);
        v44 = *v32;
        if ( v44 < 4 )
          v41 = v44;
        FIELD_U32(v43, 52) = *(_DWORD *)(*(_DWORD *)(v42 + 4 * v41) + 44) + ((unsigned int)v36 >> 2);
        return 1;
      }
    }
    return 0;
  }
  v3 = 0;
  v5 = (int *)(a1 + 4796);
  v4 = FIELD_U32(a1, 4796);
  v6 = dword_60C9FDDC;
  if ( (unsigned int)dword_60C9FDDC >= 7 )
    v6 = 0;
  if ( v4 == *(_DWORD *)(a1 + 4 * v6 + 5848) )
  {
    v7 = 1;
  }
  else
  {
    v8 = dword_60C9FDE0;
    if ( (unsigned int)dword_60C9FDE0 >= 7 )
      v8 = 0;
    v9 = *(_DWORD *)(a1 + 4 * v8 + 5848);
    if ( v4 == v9 )
      v3 = 1;
    v7 = v3;
    if ( v4 != v9 )
    {
      v10 = dword_60C9FDE4;
      v11 = 0;
      if ( (unsigned int)dword_60C9FDE4 >= 7 )
        v10 = 0;
      v12 = *(_DWORD *)(a1 + 4 * v10 + 5848);
      v7 |= v4 == v12;
      if ( v4 != v12 )
      {
        v13 = dword_60C9FDE8;
        if ( (unsigned int)dword_60C9FDE8 >= 7 )
          v13 = 0;
        if ( v4 == *(_DWORD *)(a1 + 4 * v13 + 5848) )
          v11 = 1;
        v7 |= v11;
      }
    }
  }
  if ( v7 == 1 )
  {
    FIELD_U32(a1, 14232) = v4 - FIELD_U32(a1, 5848);
    if ( FIELD_U32(a1, 14232) == FIELD_U32(a1, 14228) )
    {
      sub_60502548(v2 - 1043);
      FIELD_U16(a1, 4820) = 0;
      sub_6047EABC((_DWORD *)(a1 + 3808));
      *v2 = 0;
      FIELD_U8(a1, 4808) = 1;
      FIELD_U8(a1, 4812) = 1;
      return 1;
    }
    sub_6048E23C(a1, 0, 256);
    sub_6048EBD4(a1, 256);
    sub_6048F09C(a1, 0, 256);
    sub_6048EE54((_DWORD *)a1, 0);
    v31 = (StateMgr *)(a1 + 20);
    if ( FIELD_U32(a1, 14232) <= FIELD_U32(a1, 14228) )
      v30 = (StateBase *)&unk_60C9F500;
    else
      v30 = (StateBase *)&unk_60C9F540;
    goto LABEL_78;
  }
  v19 = -1;
  v20 = 0;
  v21 = (unsigned int *)(a1 + 14228);
  do
  {
    v22 = *v21;
    if ( *v21 >= 4 )
      v22 = 0;
    v23 = *(_DWORD *)(a1 + 5876 + 96 * v22 + 4 * v20) == v4;
    v24 = 0;
    if ( v23 )
      v19 = v20;
    ++v20;
    if ( !v23 )
      v24 = 1;
  }
  while ( v20 <= 23 && v24 );
  if ( v19 >= 0 )
  {
    v25 = *v21;
    v26 = a1 + 47800;
    if ( *v21 >= 4 )
      v25 = 0;
    v27 = *(_DWORD *)(v26 + 4 * v25);
    v28 = *v21;
    if ( v28 >= 4 )
      v28 = 0;
    FIELD_U32(v27, 52) = *(_DWORD *)(*(_DWORD *)(v26 + 4 * v28) + 44) + ((unsigned int)v19 >> 2);
    v29 = *v5;
    sub_6048E23C(a1, 0, *v5);
    sub_6048EBD4(a1, v29);
    sub_6048F09C(a1, 0, 256);
    sub_6048EE54((_DWORD *)a1, 0);
    v30 = (StateBase *)&unk_60C9F5E0;
    goto LABEL_77;
  }
  if ( v4 == FIELD_U32(a1, 5864) )
  {
    sub_6048E23C(a1, 0, 256);
    sub_6048EBD4(a1, 256);
    sub_6048F09C(a1, 0, *v5);
    sub_6048EE54((_DWORD *)a1, 0);
    v30 = &stru_60C9F680;
LABEL_77:
    v31 = (StateMgr *)(a1 + 20);
LABEL_78:
    StateMgr__changeState(v31, v30);
    return 1;
  }
  if ( v4 == FIELD_U32(a1, 5868) )
  {
    FIELD_U32(a1, 14232) = *v21 + 1;
    v30 = (StateBase *)&unk_60C9F520;
    goto LABEL_77;
  }
  v16 = 0;
  if ( v4 == FIELD_U32(a1, 5872) )
  {
    FIELD_U32(a1, 14232) = *v21 - 1;
    v30 = (StateBase *)&unk_60C9F4E0;
    goto LABEL_77;
  }
  return v16;
}
