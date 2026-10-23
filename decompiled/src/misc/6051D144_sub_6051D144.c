/* sub_6051D144
 * address: 0x6051D144   size: 1164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6051D144(int a1)
{
  _DWORD *v2; // r8
  _BYTE *v3; // r0
  int v4; // r2
  char v5; // r1
  _DWORD *v6; // r2
  int v7; // r2
  int v8; // r3
  int v9; // r7
  int v10; // r3
  bool v11; // vf
  int v12; // r2
  int v13; // r2
  int v14; // r3
  int v15; // r7
  int v16; // r3
  int v17; // r2
  int v18; // r2
  int v19; // r3
  int v20; // r7
  int v21; // r3
  int v22; // r2
  int v23; // r2
  int v24; // r3
  int v25; // r7
  int v26; // r3
  int v27; // r2
  _BYTE *v28; // r0
  int v29; // t1
  int v30; // r1
  int v31; // r2
  int v32; // r3
  int v33; // r2
  int v34; // r1
  int v35; // r1
  int i; // r2
  int v37; // r6
  int v38; // r7
  int v39; // r3
  unsigned int v40; // r7
  _DWORD *v41; // r4
  int v42; // r6
  int v43; // r5
  int v44; // r7
  int v45; // r6
  int v46; // r12
  int v47; // lr
  int v48; // r2
  int v49; // r5
  int v50; // r10
  int v51; // r6
  int v52; // r0
  int v53; // r3
  int v54; // r4
  int v55; // r3
  bool v56; // zf
  _BOOL4 v57; // r0
  int v58; // r3
  int v59; // r1
  unsigned int v60; // r2
  unsigned int v61; // r0
  int v62; // r3
  int v64; // [sp+4h] [bp-2Ch]
  int (**v65)(); // [sp+8h] [bp-28h] BYREF
  const char *v66; // [sp+Ch] [bp-24h]

  v2 = (_DWORD *)(a1 + 36);
  FIELD_U8(a1, 4012) = 0;
  sub_60473B58((_DWORD *)(a1 + 36), 0xEu, 0);
  v3 = (_BYTE *)dword_60C99DEC;
  v4 = dword_60C99DD4 + 272;
  if ( !dword_60C99DD4 )
    v4 = dword_60C99DEC + 16;
  v5 = FIELD_U8(v4, 514);
  FIELD_U8(a1, 4014) = v5 != 0;
  FIELD_U32(a1, 3876) = 0;
  FIELD_U32(a1, 3880) = 0;
  if ( v3[36] && FIELD_S32(a1, 3872) >= 1 )
  {
    FIELD_U32(a1, 3880) = 1;
    v6 = *(_DWORD **)(a1 + 3868);
    *v6 = v3 + 36;
    v6[1] = -1;
  }
  if ( v3[108] )
  {
    v7 = FIELD_U32(a1, 3872);
    v8 = FIELD_U32(a1, 3880);
    if ( v8 < v7 )
    {
      FIELD_U32(a1, 3880) = v8 + 1;
      v9 = FIELD_U32(a1, 3868);
      v10 = FIELD_U32(a1, 3876) + v8;
      v11 = __OFSUB__(v10, v7);
      v12 = v10 - v7;
      if ( v12 < 0 != v11 )
        v12 = v10;
      *(_DWORD *)(v9 + 16 * v12) = v3 + 108;
      *(_DWORD *)(v9 + 16 * v12 + 4) = -1;
    }
  }
  if ( v3[180] )
  {
    v13 = FIELD_U32(a1, 3872);
    v14 = FIELD_U32(a1, 3880);
    if ( v14 < v13 )
    {
      FIELD_U32(a1, 3880) = v14 + 1;
      v15 = FIELD_U32(a1, 3868);
      v16 = FIELD_U32(a1, 3876) + v14;
      v11 = __OFSUB__(v16, v13);
      v17 = v16 - v13;
      if ( v17 < 0 != v11 )
        v17 = v16;
      *(_DWORD *)(v15 + 16 * v17) = v3 + 180;
      *(_DWORD *)(v15 + 16 * v17 + 4) = -1;
    }
  }
  if ( v3[252] )
  {
    v18 = FIELD_U32(a1, 3872);
    v19 = FIELD_U32(a1, 3880);
    if ( v19 < v18 )
    {
      FIELD_U32(a1, 3880) = v19 + 1;
      v20 = FIELD_U32(a1, 3868);
      v21 = FIELD_U32(a1, 3876) + v19;
      v11 = __OFSUB__(v21, v18);
      v22 = v21 - v18;
      if ( v22 < 0 != v11 )
        v22 = v21;
      *(_DWORD *)(v20 + 16 * v22) = v3 + 252;
      *(_DWORD *)(v20 + 16 * v22 + 4) = -1;
    }
  }
  if ( v3[324] )
  {
    v23 = FIELD_U32(a1, 3872);
    v24 = FIELD_U32(a1, 3880);
    if ( v24 < v23 )
    {
      FIELD_U32(a1, 3880) = v24 + 1;
      v25 = FIELD_U32(a1, 3868);
      v26 = FIELD_U32(a1, 3876) + v24;
      v11 = __OFSUB__(v26, v23);
      v27 = v26 - v23;
      if ( v27 < 0 != v11 )
        v27 = v26;
      *(_DWORD *)(v25 + 16 * v27) = v3 + 324;
      *(_DWORD *)(v25 + 16 * v27 + 4) = -1;
    }
  }
  v29 = (unsigned __int8)v3[396];
  v28 = v3 + 396;
  if ( v29 )
  {
    v30 = FIELD_U32(a1, 3872);
    v31 = FIELD_U32(a1, 3880);
    if ( v31 < v30 )
    {
      FIELD_U32(a1, 3880) = v31 + 1;
      v32 = FIELD_U32(a1, 3868);
      v33 = FIELD_U32(a1, 3876) + v31;
      v11 = __OFSUB__(v33, v30);
      v34 = v33 - v30;
      if ( v34 < 0 != v11 )
        v34 = v33;
      *(_DWORD *)(v32 + 16 * v34) = v28;
      *(_DWORD *)(v32 + 16 * v34 + 4) = -1;
    }
  }
  FIELD_U32(a1, 3960) = 0;
  FIELD_U32(a1, 3956) = 0;
  FIELD_U32(a1, 3988) = 0;
  FIELD_U32(a1, 3992) = 0;
  v35 = FIELD_U32(a1, 3880);
  if ( v35 )
  {
    for ( i = 0; i != v35; ++i )
    {
      v37 = FIELD_U32(a1, 3876);
      v38 = FIELD_U32(a1, 3872);
      if ( i + v37 >= v38 )
        v37 -= v38;
      v39 = FIELD_U32(a1, 3868) + 16 * (i + v37);
      v40 = *(_DWORD *)(*(_DWORD *)v39 + 20);
      if ( v40 >= 2 )
        v40 = 0;
      v41 = (_DWORD *)(a1 + 32 * v40);
      v42 = v41[990];
      v43 = v41[988];
      if ( v42 < v43 )
      {
        v41[990] = v42 + 1;
        v44 = v41[989] + v42;
        v45 = v44 - v43;
        if ( v44 < v43 )
          v45 = v44;
        *(_DWORD *)(v41[987] + 4 * v45) = v39;
      }
    }
    v46 = FIELD_U32(a1, 3880);
    if ( v46 )
    {
      v47 = 0;
      v48 = FIELD_U32(a1, 3880);
      do
      {
        v49 = FIELD_U32(a1, 3876);
        v50 = 0;
        v51 = FIELD_U32(a1, 3868) + 16 * v49;
        v52 = -1;
        do
        {
          v53 = FIELD_U32(a1, 3872);
          if ( v49 < v53 )
            v53 = 0;
          v54 = v51 - 16 * v53;
          if ( FIELD_S32(v54, 4) < 0 )
          {
            v55 = *(_DWORD *)(*(_DWORD *)(v51 - 16 * v53) + 52);
            if ( v52 < v55 )
            {
              v50 = v54;
              v52 = v55;
            }
          }
          --v48;
          ++v49;
          v51 += 16;
        }
        while ( v48 );
        v56 = v50 == 0;
        if ( v50 )
        {
          FIELD_U32(v50, 4) = v47++;
          v56 = v47 == v46;
        }
        if ( v56 )
          break;
        v48 = FIELD_U32(a1, 3880);
      }
      while ( v48 );
    }
  }
  v57 = FIELD_S32(a1, 3960) >= 1 && FIELD_U32(a1, 3992) > 0;
  FIELD_U8(a1, 4013) = v57;
  if ( FIELD_U8(a1, 4014) )
  {
    sub_6051D7E8(a1);
  }
  else if ( v57 )
  {
    sub_6051D93C(a1);
  }
  else
  {
    sub_6051DA60(a1);
  }
  if ( !FIELD_U8(a1, 4014) )
    goto LABEL_74;
  v58 = dword_60C99DD4 + 272;
  v59 = FIELD_U32(a1, 3672);
  if ( !dword_60C99DD4 )
    v58 = dword_60C99DEC + 16;
  v60 = FIELD_U8(v58, 515);
  v61 = FIELD_U8(v58, 516) + 1;
  if ( v61 == v60 )
  {
    v65 = &sead__SafeStringBase__vtable;
    v66 = "PreGameVS_Round_01";
    sub_6047E0EC(&v65, v59, 0);
  }
  else
  {
    v65 = &sead__SafeStringBase__vtable;
    v66 = "PreGameVS_Round_00";
    v62 = 9;
    if ( v60 >= 9 )
      v60 = 9;
    if ( v61 < 9 )
      v62 = v61;
    sub_6047E0EC(&v65, v59, 2, v62, v60);
  }
  if ( !FIELD_U8(a1, 4014) )
  {
LABEL_74:
    v65 = &sead__SafeStringBase__vtable;
    v66 = "PreGameVS_World_00";
    sub_6047DE6C(3, (int)&v65, v2, FIELD_U32(a1, 3668), 0, v64);
  }
  ((void (__fastcall *)(int))loc_6051D5FC)(a1);
  return StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&dword_60CA8D9C);
}
