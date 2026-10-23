/* sub_6098F408
 * address: 0x6098F408   size: 2988   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6098F408(_DWORD *a1, int a2, int a3)
{
  char v3; // r12
  int *v7; // r0
  int *v8; // r0
  int *v9; // r0
  int *v10; // r0
  int *v11; // r0
  int *v12; // r0
  int *v13; // r0
  int *v14; // r0
  unsigned int v15; // r0
  int *v16; // r0
  int v17; // r7
  _DWORD *v18; // r0
  int v19; // r7
  _DWORD *v20; // r0
  int v21; // r7
  _DWORD *v22; // r0
  _DWORD *v23; // r0
  int v24; // r6
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r0
  int v31; // r0
  int v32; // r0
  int v33; // r7
  int v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int *v38; // r7
  char v39; // r12
  int *v40; // r0
  int *v41; // r0
  char v42; // r12
  int *v43; // r0
  int v44; // r0
  int v45; // r0
  int v46; // r0
  _DWORD *v47; // r7
  _DWORD *i; // r5
  int v49; // r0
  int v51; // r0
  int v52; // r0
  int v53; // r0
  int v54; // r7
  _DWORD *v55; // r6
  _DWORD *v56; // r4
  int *v57; // r5
  int *j; // r0

  if ( ((unsigned int)&dword_60CD0BBC & ~(1620636712 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0BBC) )
  {
    if ( ((unsigned int)&dword_60C9D9D4 & ~(1620636752 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9D4) )
    {
      dword_60C9D9D0 = 0;
      _cxa_guard_release(&dword_60C9D9D4);
    }
    dword_60CD0BB8 = (int)&dword_60C9D9D0;
    _cxa_guard_release(&dword_60CD0BBC);
  }
  if ( a1 )
  {
    v7 = (int *)(*(int (__fastcall **)(_DWORD *))(*a1 + 8))(a1);
    if ( v7 )
    {
      while ( v7 != &dword_60CD0BB8 )
      {
        v7 = (int *)*v7;
        if ( !v7 )
          goto LABEL_11;
      }
      v25 = sub_60855BA4(640, 16);
      v24 = v25;
      if ( v25 )
        sub_6097DBC4(v25, (int)a1, a2);
      else
        v24 = 0;
      goto LABEL_142;
    }
  }
LABEL_11:
  if ( ((unsigned int)&dword_60CD0BC4 & ~(1620636912 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0BC4) )
  {
    if ( ((unsigned int)&dword_60C9D9D4 & ~(1620636952 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9D4) )
    {
      dword_60C9D9D0 = 0;
      _cxa_guard_release(&dword_60C9D9D4);
    }
    dword_60CD0BC0 = (int)&dword_60C9D9D0;
    _cxa_guard_release(&dword_60CD0BC4);
  }
  if ( a1 )
  {
    v8 = (int *)(*(int (__fastcall **)(_DWORD *))(*a1 + 8))(a1);
    if ( v8 )
    {
      while ( v8 != &dword_60CD0BC0 )
      {
        v8 = (int *)*v8;
        if ( !v8 )
          goto LABEL_21;
      }
      v26 = sub_60855BA4(640, 16);
      v24 = v26;
      if ( v26 )
        sub_6097F7CC(v26, (int)a1, a2);
      else
        v24 = 0;
      goto LABEL_142;
    }
  }
LABEL_21:
  if ( ((unsigned int)&dword_60CD0C1C & ~(1620637112 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0C1C) )
  {
    if ( ((unsigned int)&dword_60C9D9D4 & ~(1620637152 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9D4) )
    {
      dword_60C9D9D0 = 0;
      _cxa_guard_release(&dword_60C9D9D4);
    }
    dword_60CD0C18 = (int)&dword_60C9D9D0;
    _cxa_guard_release(&dword_60CD0C1C);
  }
  if ( a1 )
  {
    v9 = (int *)(*(int (__fastcall **)(_DWORD *))(*a1 + 8))(a1);
    if ( v9 )
    {
      while ( v9 != &dword_60CD0C18 )
      {
        v9 = (int *)*v9;
        if ( !v9 )
          goto LABEL_31;
      }
      v27 = sub_60855BA4(176, 16);
      v24 = v27;
      if ( v27 )
        sub_60984F18(v27, (int)a1);
      else
        v24 = 0;
      goto LABEL_142;
    }
  }
LABEL_31:
  if ( ((unsigned int)&dword_60CD0BEC & ~(1620637312 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0BEC) )
  {
    dword_60CD0BE8 = sub_60990CDC(0x2EA83Cu);
    _cxa_guard_release(&dword_60CD0BEC);
  }
  if ( a1 )
  {
    v10 = (int *)(*(int (__fastcall **)(_DWORD *))(*a1 + 8))(a1);
    if ( v10 )
    {
      while ( v10 != &dword_60CD0BE8 )
      {
        v10 = (int *)*v10;
        if ( !v10 )
          goto LABEL_38;
      }
      v28 = sub_60855BA4(512, 16);
      v24 = v28;
      if ( v28 )
        sub_60982448(v28, a1);
      else
        v24 = 0;
      goto LABEL_142;
    }
  }
LABEL_38:
  if ( ((unsigned int)&dword_60CD0BF4 & ~(1620637440 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0BF4) )
  {
    dword_60CD0BF0 = sub_60990CDC(0x2EA7D0u);
    _cxa_guard_release(&dword_60CD0BF4);
  }
  if ( a1 )
  {
    v11 = (int *)(*(int (__fastcall **)(_DWORD *))(*a1 + 8))(a1);
    if ( v11 )
    {
      while ( v11 != &dword_60CD0BF0 )
      {
        v11 = (int *)*v11;
        if ( !v11 )
          goto LABEL_45;
      }
      v29 = sub_60855BA4(240, 16);
      v24 = v29;
      if ( v29 )
      {
        sub_60983F04(v29);
        goto LABEL_142;
      }
LABEL_141:
      v24 = 0;
      goto LABEL_142;
    }
  }
LABEL_45:
  if ( ((unsigned int)&dword_60CD0BFC & ~(1620637568 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0BFC) )
  {
    dword_60CD0BF8 = sub_60990A9C(0x2EA75Cu);
    _cxa_guard_release(&dword_60CD0BFC);
  }
  if ( a1 )
  {
    v12 = (int *)(*(int (__fastcall **)(_DWORD *))(*a1 + 8))(a1);
    if ( v12 )
    {
      while ( v12 != &dword_60CD0BF8 )
      {
        v12 = (int *)*v12;
        if ( !v12 )
          goto LABEL_52;
      }
      v30 = sub_60855BA4(272, 16);
      v24 = v30;
      if ( v30 )
      {
        sub_609842C8(v30);
        goto LABEL_142;
      }
      goto LABEL_141;
    }
  }
LABEL_52:
  if ( ((unsigned int)&dword_60CD0BCC & ~(1620637696 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0BCC) )
  {
    dword_60CD0BC8 = sub_60990CDC(0x2EA690u);
    _cxa_guard_release(&dword_60CD0BCC);
  }
  if ( a1 )
  {
    v13 = (int *)(*(int (__fastcall **)(_DWORD *))(*a1 + 8))(a1);
    if ( v13 )
    {
      while ( v13 != &dword_60CD0BC8 )
      {
        v13 = (int *)*v13;
        if ( !v13 )
          goto LABEL_59;
      }
      v35 = sub_60855BA4(208, 16);
      v24 = v35;
      if ( v35 )
      {
        sub_6097FFC0(v35, (int)a1);
        goto LABEL_142;
      }
      goto LABEL_141;
    }
  }
LABEL_59:
  if ( ((unsigned int)&dword_60CD0BD4 & ~(1620637824 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0BD4) )
  {
    dword_60CD0BD0 = sub_60990A9C(0x2EA61Cu);
    _cxa_guard_release(&dword_60CD0BD4);
  }
  if ( a1 )
  {
    v14 = (int *)(*(int (__fastcall **)(_DWORD *))(*a1 + 8))(a1);
    if ( v14 )
    {
      while ( v14 != &dword_60CD0BD0 )
      {
        v14 = (int *)*v14;
        if ( !v14 )
          goto LABEL_66;
      }
      v36 = sub_60855BA4(240, 16);
      v24 = v36;
      if ( v36 )
      {
        sub_60980254(v36, (int)a1);
        goto LABEL_142;
      }
      goto LABEL_141;
    }
  }
LABEL_66:
  v15 = (unsigned int)&dword_60CD0C14 & ~(1620637952 << v3);
  if ( (v15 & 1) == 0 )
  {
    v15 = _cxa_guard_acquire(&dword_60CD0C14);
    if ( v15 )
    {
      dword_60CD0C10 = sub_60990BBC(0x2EA5FCu);
      _cxa_guard_release(&dword_60CD0C14);
    }
  }
  if ( a1 )
  {
    v16 = (int *)(*(int (__fastcall **)(_DWORD *))(*a1 + 8))(a1);
    if ( v16 )
    {
      while ( v16 != &dword_60CD0C10 )
      {
        v16 = (int *)*v16;
        if ( !v16 )
          goto LABEL_73;
      }
      v37 = sub_60855BA4(288, 16);
      v24 = v37;
      if ( v37 )
      {
        sub_60984AB8(v37, (int)a1, a2);
        goto LABEL_142;
      }
      goto LABEL_141;
    }
LABEL_73:
    v17 = sub_60990CDC(v16);
    v18 = (_DWORD *)(*(int (__fastcall **)(_DWORD *))(*a1 + 8))(a1);
    if ( v18 )
    {
      while ( v18 != (_DWORD *)v17 )
      {
        v18 = (_DWORD *)*v18;
        if ( !v18 )
          goto LABEL_76;
      }
      v45 = sub_60855BA4(208, 16);
      v24 = v45;
      if ( v45 )
      {
        sub_609847CC(v45, (int)a1);
        goto LABEL_142;
      }
      goto LABEL_141;
    }
LABEL_76:
    v19 = sub_60990A9C(v18);
    v20 = (_DWORD *)(*(int (__fastcall **)(_DWORD *))(*a1 + 8))(a1);
    if ( v20 )
    {
      while ( v20 != (_DWORD *)v19 )
      {
        v20 = (_DWORD *)*v20;
        if ( !v20 )
          goto LABEL_79;
      }
      v46 = sub_60855BA4(240, 16);
      v24 = v46;
      if ( v46 )
      {
        sub_6098625C(v46, (int)a1);
        goto LABEL_142;
      }
      goto LABEL_141;
    }
LABEL_79:
    v21 = sub_60990BBC(v20);
    v22 = (_DWORD *)(*(int (__fastcall **)(_DWORD *))(*a1 + 8))(a1);
    if ( v22 )
    {
      while ( v22 != (_DWORD *)v21 )
      {
        v22 = (_DWORD *)*v22;
        if ( !v22 )
          goto LABEL_99;
      }
      v23 = (_DWORD *)sub_60855BA4(272, 16);
      v24 = (int)v23;
      if ( v23 )
        LetterAnimOn_ref_98530C(v23, (int)a1, a2);
      else
        v24 = 0;
      goto LABEL_142;
    }
  }
  else
  {
    v31 = sub_60990CDC(v15);
    v32 = sub_60990A9C(v31);
    sub_60990BBC(v32);
  }
LABEL_99:
  v33 = sub_609900F4(a1);
  if ( v33 )
  {
    v34 = sub_60855BA4(176, 16);
    v24 = v34;
    if ( v34 )
    {
      sub_6097D880(v34, v33);
      goto LABEL_142;
    }
    goto LABEL_141;
  }
  v38 = sub_604ED25C();
  if ( !a1 || (v40 = (int *)(*(int (__fastcall **)(_DWORD *))(*a1 + 8))(a1)) == 0 )
  {
LABEL_115:
    if ( ((unsigned int)dword_60CA13C4 & ~(1620638828 << v39) & 1) == 0 && _cxa_guard_acquire(dword_60CA13C4) )
    {
      if ( ((unsigned int)&dword_60C9D9D4 & ~(1620638868 << v39) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9D4) )
      {
        dword_60C9D9D0 = 0;
        _cxa_guard_release(&dword_60C9D9D4);
      }
      dword_60CA13C0 = (int)&dword_60C9D9D0;
      _cxa_guard_release(dword_60CA13C4);
    }
    if ( a1 && (v41 = (int *)(*(int (__fastcall **)(_DWORD *))(*a1 + 8))(a1)) != 0 )
    {
      while ( v41 != &dword_60CA13C0 )
      {
        v41 = (int *)*v41;
        if ( !v41 )
          goto LABEL_125;
      }
      v52 = sub_60855BA4(192, 16);
      v24 = v52;
      if ( v52 )
      {
        sub_6097CADC(v52, (int)a1, a2);
        goto LABEL_142;
      }
    }
    else
    {
LABEL_125:
      if ( ((unsigned int)&dword_60CD0C0C & ~(1620639028 << v39) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0C0C) )
      {
        if ( ((unsigned int)&dword_60C9D9D4 & ~(1620639068 << v42) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9D4) )
        {
          dword_60C9D9D0 = 0;
          _cxa_guard_release(&dword_60C9D9D4);
        }
        dword_60CD0C08 = (int)&dword_60C9D9D0;
        _cxa_guard_release(&dword_60CD0C0C);
      }
      if ( !a1 || (v43 = (int *)(*(int (__fastcall **)(_DWORD *))(*a1 + 8))(a1)) == 0 )
      {
LABEL_135:
        v44 = sub_60855BA4(176, 16);
        v24 = v44;
        if ( v44 )
        {
          sub_6085852C(v44, (int)a1);
          goto LABEL_142;
        }
        goto LABEL_141;
      }
      while ( v43 != &dword_60CD0C08 )
      {
        v43 = (int *)*v43;
        if ( !v43 )
          goto LABEL_135;
      }
      v53 = sub_60855BA4(176, 16);
      v24 = v53;
      if ( v53 )
      {
        sub_6098495C(v53, (int)a1, a2);
        goto LABEL_142;
      }
    }
    v24 = 0;
    goto LABEL_142;
  }
  while ( v40 != v38 )
  {
    v40 = (int *)*v40;
    if ( !v40 )
      goto LABEL_115;
  }
  if ( a3 == 1 )
  {
    v51 = sub_60855BA4(192, 16);
    v24 = v51;
    if ( v51 )
      sub_60984624(v51, (int)a1);
    else
      v24 = 0;
    FIELD_U32(v24, 180) = a2;
    FIELD_U32(a2, 12) = v24;
LABEL_142:
    v47 = a1 + 4;
    for ( i = (_DWORD *)a1[5]; i != v47; i = (_DWORD *)i[1] )
    {
      v49 = sub_6098F408(i - 1, a2, 0);
      sub_608589FC(v24, v49);
    }
    return v24;
  }
  v54 = a1[45];
  v55 = (_DWORD *)sub_60855BA4(84, 16);
  sub_60980508(v55, v54, (unsigned __int8 *)a1 + 136, a2);
  v56 = (_DWORD *)v55[3];
  v57 = sub_604ED25C();
  for ( j = (int *)(*(int (__fastcall **)(_DWORD *))(*v56 + 8))(v56); j != v57; j = (int *)*j )
    ;
  v56[45] = v55;
  return v55[3];
}
