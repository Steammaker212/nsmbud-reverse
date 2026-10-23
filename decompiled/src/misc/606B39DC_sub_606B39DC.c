/* sub_606B39DC
 * address: 0x606B39DC   size: 3060   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606B39DC(int result, float a2)
{
  char v2; // r12
  unsigned __int8 *v3; // r5
  unsigned int v4; // r1
  int Area; // r0
  int v6; // r1
  int v7; // r4
  int v8; // r2
  int v9; // r1
  int v10; // r3
  int v11; // r2
  int v12; // r1
  int v13; // r11
  int v14; // r1
  int v15; // r1
  int v16; // r1
  int v17; // r1
  int v18; // r1
  unsigned int v19; // r11
  int v20; // r0
  int v21; // r0
  int i; // r5
  int v23; // r6
  int v24; // r0
  bool v25; // zf
  int v26; // r2
  int v27; // r2
  int v28; // r2
  int v29; // r5
  _DWORD *v30; // r6
  unsigned int v31; // r0
  int v32; // r0
  int v33; // r2
  int v34; // r1
  bool v35; // zf
  bool v36; // zf
  _DWORD *v37; // r0
  unsigned int v38; // r1
  int v39; // r0
  int v40; // r0
  int v41; // r2
  bool v42; // zf
  bool v43; // zf
  int (__fastcall ***v44)(_DWORD, int *); // r5
  int (__fastcall ***v45)(_DWORD, int *); // r5
  int (__fastcall ***v46)(_DWORD, int *); // r5
  int (__fastcall ***v47)(_DWORD, int *); // r4
  int v48; // r3
  __int64 v49; // r4
  int v50; // r1
  int v51; // r2
  unsigned int v52; // r1
  int v53; // r3
  unsigned int v54; // r1
  int v55; // r3
  unsigned __int8 *v56; // [sp+30h] [bp-38h]
  float v57; // [sp+34h] [bp-34h] BYREF
  float v58; // [sp+38h] [bp-30h]
  float v59; // [sp+3Ch] [bp-2Ch]
  float v60; // [sp+40h] [bp-28h]

  if ( FIELD_U8(result, 30) )
    return result;
  v3 = (unsigned __int8 *)result;
  if ( FIELD_U8(result, 26) == 255 )
  {
    v14 = FIELD_U32(PlayerMgr_instance, 48);
    if ( v14 )
    {
      v15 = FIELD_U16(PlayerMgr_instance, 66) & (1 << FIELD_U8(v14, 84));
      v7 = (unsigned __int16)v15;
      if ( (_WORD)v15 )
        v7 = 1;
    }
    else
    {
      v7 = 0;
    }
    v16 = FIELD_U32(PlayerMgr_instance, 52);
    if ( v16 && (FIELD_U16(PlayerMgr_instance, 66) & (unsigned __int16)(1 << FIELD_U8(v16, 84))) != 0 )
      v7 |= 2u;
    v17 = FIELD_U32(PlayerMgr_instance, 56);
    if ( v17 && (FIELD_U16(PlayerMgr_instance, 66) & (unsigned __int16)(1 << FIELD_U8(v17, 84))) != 0 )
      v7 |= 4u;
    v18 = FIELD_U32(PlayerMgr_instance, 60);
    if ( v18 )
    {
      v13 = 1;
      if ( (FIELD_U16(PlayerMgr_instance, 66) & (unsigned __int16)(1 << FIELD_U8(v18, 84))) != 0 )
        v7 |= 8u;
    }
    else
    {
      v13 = 1;
    }
  }
  else
  {
    v4 = FIELD_U8(LevelInfo_instance, 18);
    v57 = 3.4028e38;
    v58 = 3.4028e38;
    v59 = -3.4028e38;
    v60 = -3.4028e38;
    Area = Level_getArea(Level_instance, v4);
    LevelArea_getLocation(Area, &v57, v3[26]);
    a2 = v60;
    v6 = FIELD_U32(PlayerMgr_instance, 48);
    v7 = v6
      && (FIELD_U16(PlayerMgr_instance, 66) & (unsigned __int16)(1 << FIELD_U8(v6, 84))) != 0
      && v57 <= FIELD_F32(v6, 108)
      && FIELD_F32(v6, 108) <= v59
      && v58 <= FIELD_F32(v6, 112)
      && FIELD_F32(v6, 112) <= v60;
    v8 = FIELD_U32(PlayerMgr_instance, 52);
    if ( v8 && (v9 = 1, (FIELD_U16(PlayerMgr_instance, 66) & (unsigned __int16)(1 << FIELD_U8(v8, 84))) != 0) )
    {
      if ( v57 > FIELD_F32(v8, 108)
        || FIELD_F32(v8, 108) > v59
        || v58 > FIELD_F32(v8, 112)
        || FIELD_F32(v8, 112) > v60 )
      {
        v9 = v7;
      }
      else
      {
        v7 |= 2u;
      }
    }
    else
    {
      v9 = v7;
    }
    v10 = FIELD_U32(PlayerMgr_instance, 56);
    if ( v10 && (v11 = 1, (FIELD_U16(PlayerMgr_instance, 66) & (unsigned __int16)(1 << FIELD_U8(v10, 84))) != 0) )
    {
      if ( v57 > FIELD_F32(v10, 108)
        || FIELD_F32(v10, 108) > v59
        || v58 > FIELD_F32(v10, 112)
        || FIELD_F32(v10, 112) > v60 )
      {
        v11 = v9;
      }
      else
      {
        v7 |= 4u;
      }
    }
    else
    {
      v11 = v9;
    }
    v12 = FIELD_U32(PlayerMgr_instance, 60);
    if ( v12 && (v13 = 1, (FIELD_U16(PlayerMgr_instance, 66) & (unsigned __int16)(1 << FIELD_U8(v12, 84))) != 0) )
    {
      if ( v57 > FIELD_F32(v12, 108)
        || FIELD_F32(v12, 108) > v59
        || v58 > FIELD_F32(v12, 112)
        || FIELD_F32(v12, 112) > v60 )
      {
        v13 = v11;
      }
      else
      {
        v7 |= 8u;
      }
    }
    else
    {
      v13 = v11;
    }
  }
  if ( v3[27] == 255 )
    v19 = v13 | 2;
  else
    v19 = v13 & 0xFFFFFFFD | (2 * (sub_606B4C80(v3, a2) & 1));
  v56 = v3;
  if ( !v3[25] )
  {
    v19 |= 0x10u;
    goto LABEL_77;
  }
  if ( v3[25] == 15 )
  {
    v20 = FIELD_U32(PlayerMgr_instance, 48);
    if ( v20 )
      v21 = (unsigned __int16)(FIELD_U16(PlayerMgr_instance, 66) & (1 << FIELD_U8(v20, 84))) != 0;
    else
      v21 = 0;
    v26 = FIELD_U32(PlayerMgr_instance, 52);
    if ( v26 && (FIELD_U16(PlayerMgr_instance, 66) & (unsigned __int16)(1 << FIELD_U8(v26, 84))) != 0 )
      v21 |= 2u;
    v27 = FIELD_U32(PlayerMgr_instance, 56);
    if ( v27 && (FIELD_U16(PlayerMgr_instance, 66) & (unsigned __int16)(1 << FIELD_U8(v27, 84))) != 0 )
      v21 |= 4u;
    v28 = FIELD_U32(PlayerMgr_instance, 60);
    if ( v28 && (FIELD_U16(PlayerMgr_instance, 66) & (unsigned __int16)(1 << FIELD_U8(v28, 84))) != 0 )
      v21 |= 8u;
    v25 = v7 == v21;
LABEL_75:
    if ( v25 )
      v19 |= 0x10u;
    goto LABEL_77;
  }
  if ( sub_608FBB8C(FIELD_U16(PlayerMgr_instance, 66)) < 2 )
  {
    v24 = sub_606B46B8();
    if ( !v24 )
      goto LABEL_77;
    v25 = dword_60B086D8[v3[25] - 1] == FIELD_U32(v24, 1316);
    goto LABEL_75;
  }
  for ( i = 0; i != 4; ++i )
  {
    if ( (v7 & (1 << i)) != 0 )
    {
      v23 = *(_DWORD *)(PlayerMgr_instance + 4 * i + 48);
      if ( v23 )
      {
        if ( (FIELD_U16(PlayerMgr_instance, 66) & (unsigned __int16)(1 << FIELD_U8(v23, 84))) != 0 )
        {
          if ( ((unsigned int)&dword_60C7B37C & ~(1617641088 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
          {
            dword_60C7B378 = (int)&off_60BC00BC;
            _cxa_guard_release(&dword_60C7B37C);
          }
          if ( (**(int (__fastcall ***)(int, int *))v23)(v23, &dword_60C7B378) == 1
            && dword_60B086D8[v56[25] - 1] == FIELD_U32(v23, 1316) )
          {
            v19 |= 0x10u;
          }
        }
      }
    }
  }
LABEL_77:
  if ( v56[28] )
  {
    if ( sub_608FBB8C(FIELD_U16(PlayerMgr_instance, 66)) >= 2 )
    {
      v29 = 0;
      while ( 1 )
      {
        if ( (v7 & (1 << v29)) == 0 )
          goto LABEL_105;
        v30 = *(_DWORD **)(PlayerMgr_instance + 4 * v29 + 48);
        if ( !v30 )
          goto LABEL_105;
        if ( ((unsigned int)&dword_60C7B37C & ~(1617641580 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
        {
          dword_60C7B378 = (int)&off_60BC00BC;
          _cxa_guard_release(&dword_60C7B37C);
        }
        if ( (*(int (__fastcall **)(_DWORD *, int *))*v30)(v30, &dword_60C7B378) != 1 )
          goto LABEL_105;
        v31 = v56[28];
        if ( FIELD_U8(dword_60CC6D8C, 17) && v31 == 14 )
        {
          v32 = v30[330];
          if ( v32 && v32 != 3 )
            v19 |= 4u;
        }
        else if ( v31 < 0xF )
        {
          v33 = word_60B086EC[v31 - 1];
          v34 = v30[330];
          if ( v31 != 8 )
          {
            v36 = v34 == v33;
LABEL_103:
            if ( v36 )
              v19 |= 4u;
            goto LABEL_105;
          }
          v35 = v34 == v33;
          if ( v34 != v33 )
            v35 = v34 == 9;
          if ( !v35 )
          {
            v36 = v34 == word_60B086EC[8];
            goto LABEL_103;
          }
          v19 |= 4u;
        }
        else if ( (*(int (__fastcall **)(_DWORD *))(*v30 + 1204))(v30) )
        {
          v19 |= 4u;
        }
LABEL_105:
        if ( ++v29 == 4 )
          goto LABEL_129;
      }
    }
    if ( (v19 & 1) == 0 )
      goto LABEL_129;
    v37 = (_DWORD *)sub_606B46B8();
    if ( !v37 )
      goto LABEL_129;
    v38 = v56[28];
    if ( FIELD_U8(dword_60CC6D8C, 17) && v38 == 14 )
    {
      v39 = v37[330];
      if ( v39 && v39 != 3 )
        v19 = (unsigned __int8)v19 | 4;
      goto LABEL_129;
    }
    if ( v38 >= 0xF )
    {
      if ( (*(int (__fastcall **)(_DWORD *))(*v37 + 1204))(v37) )
        v19 |= 4u;
      goto LABEL_129;
    }
    v40 = v37[330];
    v41 = word_60B086EC[v38 - 1];
    if ( v38 != 8 )
    {
      v43 = v40 == v41;
LABEL_127:
      if ( v43 )
        v19 |= 4u;
      goto LABEL_129;
    }
    v42 = v40 == v41;
    if ( v40 != v41 )
      v42 = v40 == 9;
    if ( !v42 )
    {
      v43 = v40 == word_60B086EC[8];
      goto LABEL_127;
    }
    v19 |= 4u;
  }
  else
  {
    v19 |= 4u;
  }
LABEL_129:
  if ( v56[29] )
  {
    if ( (v19 & 1) != 0 )
    {
      if ( (v7 & 1) != 0 )
      {
        v44 = *(int (__fastcall ****)(_DWORD, int *))(PlayerMgr_instance + 48);
        if ( v44 )
        {
          if ( ((unsigned int)&dword_60C7B37C & ~(1617642112 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
          {
            dword_60C7B378 = (int)&off_60BC00BC;
            _cxa_guard_release(&dword_60C7B37C);
          }
          if ( (**v44)(v44, &dword_60C7B378) == 1 )
            v19 |= sub_606B4928(v56, v44, v56[29]);
        }
      }
      if ( (v7 & 2) != 0 )
      {
        v45 = *(int (__fastcall ****)(_DWORD, int *))(PlayerMgr_instance + 52);
        if ( v45 )
        {
          if ( ((unsigned int)&dword_60C7B37C & ~(1617642272 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
          {
            dword_60C7B378 = (int)&off_60BC00BC;
            _cxa_guard_release(&dword_60C7B37C);
          }
          if ( (**v45)(v45, &dword_60C7B378) == 1 )
            v19 |= sub_606B4928(v56, v45, v56[29]);
        }
      }
      if ( (v7 & 4) != 0 )
      {
        v46 = *(int (__fastcall ****)(_DWORD, int *))(PlayerMgr_instance + 56);
        if ( v46 )
        {
          if ( ((unsigned int)&dword_60C7B37C & ~(1617642432 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
          {
            dword_60C7B378 = (int)&off_60BC00BC;
            _cxa_guard_release(&dword_60C7B37C);
          }
          if ( (**v46)(v46, &dword_60C7B378) == 1 )
            v19 |= sub_606B4928(v56, v46, v56[29]);
        }
      }
      if ( (v7 & 8) != 0 )
      {
        v47 = *(int (__fastcall ****)(_DWORD, int *))(PlayerMgr_instance + 60);
        if ( v47 )
        {
          if ( ((unsigned int)&dword_60C7B37C & ~(1617642592 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
          {
            dword_60C7B378 = (int)&off_60BC00BC;
            _cxa_guard_release(&dword_60C7B37C);
          }
          if ( (**v47)(v47, &dword_60C7B378) == 1 )
            LOBYTE(v19) = sub_606B4928(v56, v47, v56[29]) | v19;
        }
      }
    }
  }
  else
  {
    LOBYTE(v19) = v19 | 8;
  }
  v48 = *(_DWORD *)v56;
  result = EventMgr__instance;
  v49 = *(_QWORD *)(EventMgr__instance + 16);
  v50 = *((_DWORD *)v56 + 3) & HIDWORD(v49);
  v51 = *((_DWORD *)v56 + 2) & v49;
  if ( (unsigned __int8)v19 == 31 )
  {
    if ( (v48 & 1) != 0 )
    {
      if ( !(v51 | v50) )
        goto LABEL_171;
      v52 = v56[24];
      v53 = 0;
    }
    else
    {
      if ( v51 | v50 )
        goto LABEL_171;
      v52 = v56[24];
      v53 = 1;
    }
    EventMgr_set(EventMgr__instance, v52, 0, v53, 0, 0, 0, 0);
LABEL_171:
    result = *v56;
    if ( (result & 0xF0) == 0 )
    {
      v56[30] = 1;
      return 1;
    }
    return result;
  }
  if ( (*(_DWORD *)v56 & 0xF0) != 0x20 )
    return result;
  if ( (v48 & 1) != 0 )
  {
    if ( v51 | v50 )
      return result;
    v54 = v56[24];
    v55 = 1;
  }
  else
  {
    if ( !(v51 | v50) )
      return result;
    v54 = v56[24];
    v55 = 0;
  }
  return EventMgr_set(EventMgr__instance, v54, 0, v55, 0, 0, 0, 0);
}
