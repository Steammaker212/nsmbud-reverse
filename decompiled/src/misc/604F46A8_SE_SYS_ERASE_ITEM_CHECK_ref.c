/* SE_SYS_ERASE_ITEM_CHECK_ref
 * address: 0x604F46A8   size: 1560   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_SYS_ERASE_ITEM_CHECK_ref(int a1)
{
  int v2; // r1
  _BYTE *v3; // r7
  int v4; // r0
  StateMethodExecuter *result; // r0
  unsigned int v6; // r5
  unsigned int v7; // t1
  int v8; // r8
  int v9; // r10
  unsigned int v10; // r0
  int v11; // r5
  int *v12; // r6
  int v13; // r4
  int v14; // r10
  int v15; // r5
  int v16; // r1
  int v17; // r1
  int v18; // r2
  _DWORD *v19; // r0
  int v20; // r2
  unsigned int v21; // r0
  unsigned int v22; // r1
  StateBase *v23; // r1
  int v24; // r8
  int v25; // r10
  unsigned int v26; // r0
  int v27; // r6
  int *v28; // r7
  _DWORD *v29; // r4
  int v30; // r10
  int v31; // r6
  int v32; // r1
  _DWORD *v33; // r0
  int v34; // r2
  _DWORD *v35; // r0
  int v36; // r1
  int v37; // r1
  int v38; // r1
  int v39; // r1
  int v40; // r0
  unsigned int v41; // r7
  unsigned int v42; // r2
  int v43; // r6
  void *v44; // r4
  unsigned int v45; // r3
  unsigned int v46; // r1
  unsigned int v47; // r6
  unsigned int v48; // r2
  unsigned int v49; // r7
  unsigned int v50; // r6
  void *v51; // r3
  bool v52; // zf
  unsigned int v53; // r1

  v3 = (_BYTE *)(a1 + 8591);
  v2 = FIELD_U8(a1, 8591);
  v4 = a1 + 8591;
  v7 = *(_DWORD *)(v4 - 15);
  result = (StateMethodExecuter *)(v4 - 15);
  v6 = v7;
  if ( v2 )
  {
    if ( v6 < 0xA )
    {
      v13 = a1 + 9628;
      v14 = FIELD_U32(a1, 9628);
      v12 = (int *)(v14 + 4 * v6);
      v15 = *v12;
      if ( *(_BYTE *)(*v12 + 3596) )
      {
        sub_604741D8((_DWORD *)v15, 1u, dword_60CA6ABC, 0);
        FIELD_U8(v15, 3596) = 0;
      }
      else
      {
        sub_60473DE4((_DWORD *)v15, 1u, dword_60CA6ABC, 0);
        FIELD_U8(v15, 3596) = 1;
        sub_60807EF0(SoundSystem_instance, "SE_SYS_ERASE_ITEM_CHECK", 0, 1);
      }
      FIELD_U8(v15, 3598) = 1;
      v8 = a1 + 9632;
      v19 = (_DWORD *)(v14 + 44);
    }
    else
    {
      v8 = a1 + 9632;
      v9 = FIELD_U32(a1, 9632);
      v10 = v6 - 10;
      if ( v6 - 10 >= 5 )
        v10 = 0;
      v12 = (int *)(v9 + 4 * v10);
      v11 = *v12;
      if ( *(_BYTE *)(*v12 + 3596) )
      {
        sub_604741D8(*(_DWORD **)(v9 + 4 * v10), 1u, dword_60CA6ABC, 0);
        FIELD_U8(v11, 3596) = 0;
      }
      else
      {
        sub_60473DE4(*(_DWORD **)(v9 + 4 * v10), 1u, dword_60CA6ABC, 0);
        FIELD_U8(v11, 3596) = 1;
        sub_60807EF0(SoundSystem_instance, "SE_SYS_ERASE_ITEM_CHECK", 0, 1);
      }
      FIELD_U8(v11, 3598) = 1;
      v13 = a1 + 9628;
      v19 = (_DWORD *)(v9 + 24);
    }
    v20 = -1;
    if ( *(_BYTE *)(*v12 + 3596) )
      v20 = 1;
    *v19 += v20;
    *v3 = 0;
    v21 = *(_DWORD *)(*(_DWORD *)v8 + 20);
    v22 = *(_DWORD *)(*(_DWORD *)v8 + 24) + *(_DWORD *)(*(_DWORD *)v13 + 44);
    if ( v21 > v22 )
      return (StateMethodExecuter *)ItemStock_DelItem_ref(a1, v21 - v22);
    v23 = (StateBase *)&unk_60CA699C;
    return StateMgr__changeState((StateMgr *)(a1 + 24), v23);
  }
  if ( FIELD_U8(a1, 8594) || FIELD_U8(a1, 8590) )
    return result;
  *v3 = 0;
  v16 = FIELD_U32(a1, 7148);
  if ( (v16 & 0x2000) != 0 )
  {
    if ( v6 < 0xA )
    {
      v29 = (_DWORD *)(a1 + 9628);
      v30 = FIELD_U32(a1, 9628);
      v28 = (int *)(v30 + 4 * v6);
      v31 = *v28;
      if ( *(_BYTE *)(*v28 + 3596) )
      {
        sub_604741D8(*(_DWORD **)(FIELD_U32(a1, 9628) + 4 * v6), 1u, dword_60CA6AB4, 0);
        FIELD_U8(v31, 3596) = 0;
      }
      else
      {
        sub_60473DE4(*(_DWORD **)(FIELD_U32(a1, 9628) + 4 * v6), 1u, dword_60CA6AB4, 0);
        FIELD_U8(v31, 3596) = 1;
        sub_60807EF0(SoundSystem_instance, "SE_SYS_ERASE_ITEM_CHECK", 0, 1);
      }
      FIELD_U8(v31, 3598) = 0;
      v24 = a1 + 9632;
      v33 = (_DWORD *)(v30 + 44);
    }
    else
    {
      v24 = a1 + 9632;
      v25 = FIELD_U32(a1, 9632);
      v26 = v6 - 10;
      if ( v6 - 10 >= 5 )
        v26 = 0;
      v28 = (int *)(v25 + 4 * v26);
      v27 = *v28;
      if ( *(_BYTE *)(*v28 + 3596) )
      {
        sub_604741D8(*(_DWORD **)(v25 + 4 * v26), 1u, dword_60CA6AB4, 0);
        FIELD_U8(v27, 3596) = 0;
      }
      else
      {
        sub_60473DE4(*(_DWORD **)(v25 + 4 * v26), 1u, dword_60CA6AB4, 0);
        FIELD_U8(v27, 3596) = 1;
        sub_60807EF0(SoundSystem_instance, "SE_SYS_ERASE_ITEM_CHECK", 0, 1);
      }
      FIELD_U8(v27, 3598) = 0;
      v29 = (_DWORD *)(a1 + 9628);
      v33 = (_DWORD *)(v25 + 24);
    }
    v34 = -1;
    if ( *(_BYTE *)(*v28 + 3596) )
      v34 = 1;
    *v33 += v34;
    FIELD_U32(a1, 7136) = v6;
    sub_604F79C0(*v29);
    v35 = *(_DWORD **)v24;
    v36 = *(_DWORD *)(**(_DWORD **)v24 + 3588);
    if ( v36 )
      FIELD_U8(v36, 64) &= ~1u;
    v37 = *(_DWORD *)(v35[1] + 3588);
    if ( v37 )
      FIELD_U8(v37, 64) &= ~1u;
    v38 = *(_DWORD *)(v35[2] + 3588);
    if ( v38 )
      FIELD_U8(v38, 64) &= ~1u;
    v39 = *(_DWORD *)(v35[3] + 3588);
    if ( v39 )
      FIELD_U8(v39, 64) &= ~1u;
    v40 = *(_DWORD *)(v35[4] + 3588);
    if ( v40 )
      FIELD_U8(v40, 64) &= ~1u;
    v23 = (StateBase *)&unk_60CA695C;
    return StateMgr__changeState((StateMgr *)(a1 + 24), v23);
  }
  v17 = FIELD_U32(a1, 7156) | v16;
  if ( (v17 & 0x10) != 0 )
  {
    if ( v6 > 9 )
      return result;
    v18 = dword_60B0337C[10 * *(_DWORD *)(FIELD_U32(a1, 9632) + 20) - 10 + v6];
    goto LABEL_42;
  }
  if ( (v17 & 0x20) != 0 )
  {
    if ( v6 < 0xA )
      return result;
    v18 = dword_60B03444[5 * *(_DWORD *)(FIELD_U32(a1, 9632) + 20) - 15 + v6];
    goto LABEL_42;
  }
  if ( (v17 & 0x40) == 0 )
  {
    if ( (v17 & 0x80) == 0 )
      return result;
    if ( v6 < 0xA )
    {
      v47 = v6 % 0xA;
      v48 = 10 * (v6 / 0xA);
      do
      {
        v49 = 0;
        if ( v47 < 9 )
          v49 = v47 + 1;
        v50 = 0;
        v51 = (void *)(v49 + v48);
        if ( v49 + v48 < 0xA )
          v50 = v49 + v48;
        v52 = *(_DWORD *)(*(_DWORD *)(FIELD_U32(a1, 9628) + 4 * v50) + 3592) == 10;
        v47 = v49;
      }
      while ( v52 );
      v53 = v6;
      if ( v51 != (void *)v6 )
      {
        v53 = v49 + v48;
        FIELD_U32(result, 0x0) = v51;
      }
      if ( v6 == v53 )
        return (StateMethodExecuter *)sub_60807EF0(SoundSystem_instance, "SE_SYS_INVALID", 0, 1);
      return result;
    }
    v18 = 10;
    if ( v6 < *(_DWORD *)(FIELD_U32(a1, 9632) + 20) + 9 )
      v18 = v6 + 1;
LABEL_42:
    v32 = v6;
    if ( v18 == v6 )
      goto LABEL_44;
    goto LABEL_43;
  }
  if ( v6 < 0xA )
  {
    v41 = v6 % 0xA;
    v42 = 10 * (v6 / 0xA);
    do
    {
      v43 = v41 - 1;
      if ( !v41 )
        v43 = 9;
      v44 = (void *)(v43 + v42);
      v41 = v43;
      v45 = v43 + v42;
      if ( v43 + v42 >= 0xA )
        v45 = 0;
    }
    while ( *(_DWORD *)(*(_DWORD *)(FIELD_U32(a1, 9628) + 4 * v45) + 3592) == 10 );
    v46 = v6;
    if ( v44 != (void *)v6 )
    {
      FIELD_U32(result, 0x0) = v44;
      v46 = v43 + v42;
    }
    if ( v6 == v46 )
      return (StateMethodExecuter *)sub_60807EF0(SoundSystem_instance, "SE_SYS_INVALID", 0, 1);
    return result;
  }
  if ( v6 != 10 )
  {
    v18 = v6 - 1;
LABEL_43:
    FIELD_U32(result, 0x0) = (void *)v18;
    v32 = v18;
    goto LABEL_44;
  }
  v18 = *(_DWORD *)(FIELD_U32(a1, 9632) + 20) + 9;
  v32 = 10;
  if ( *(_DWORD *)(FIELD_U32(a1, 9632) + 20) != 1 )
    goto LABEL_43;
LABEL_44:
  if ( v6 == v32 )
    return (StateMethodExecuter *)sub_60807EF0(SoundSystem_instance, "SE_SYS_INVALID", 0, 1);
  return result;
}
