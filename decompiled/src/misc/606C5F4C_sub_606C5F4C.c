/* sub_606C5F4C
 * address: 0x606C5F4C   size: 1680   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606C5F4C(unsigned int a1, int a2, int a3, int *a4, int a5)
{
  int v6; // r11
  unsigned int v7; // r7
  unsigned int v8; // r8
  char v9; // r12
  int v10; // r9
  int v11; // r0
  int *v12; // r2
  int v13; // t1
  unsigned int v14; // r10
  int v15; // r7
  int *v16; // r1
  int v17; // t1
  unsigned int v18; // r5
  _BOOL4 v19; // r0
  bool v20; // zf
  unsigned int v21; // r5
  int v22; // r0
  unsigned int v23; // r0
  bool v24; // cc
  int v25; // r10
  int *v26; // r1
  int v27; // t1
  int (__fastcall ***v28)(_DWORD, int *); // r9
  unsigned int v29; // r5
  _BOOL4 v30; // r0
  char v31; // r12
  bool v32; // zf
  unsigned int v33; // r5
  int v34; // r5
  char v35; // r12
  unsigned int v36; // r10
  int v37; // r7
  unsigned int v38; // r5
  _BOOL4 v39; // r0
  bool v40; // zf
  unsigned int v41; // r5
  int v42; // r6
  char v43; // r9
  unsigned int v44; // r5
  _BOOL4 v45; // r0
  bool v46; // zf
  unsigned int v47; // r7
  _DWORD *v48; // r5
  int ProfileId; // r0
  int v51; // r6
  unsigned int v52; // r5
  _BOOL4 v53; // r0
  bool v54; // zf

  v6 = a2;
  v7 = a1;
  if ( a2 )
  {
    v8 = a1 + 1016;
    while ( 1 )
    {
      if ( Actor__getProfileId((Actor *)v6) == 392 )
      {
        v10 = 1;
        if ( (unsigned int)a5 <= 0x7F )
        {
          v11 = FIELD_U32(v6, 8);
          if ( v11 )
          {
            if ( a5 < 1 )
            {
LABEL_65:
              v36 = v7;
              a4[a5] = v11;
              v37 = sub_602EF2C8(v6);
              if ( v37 )
              {
                v38 = v36;
                do
                {
                  v39 = sub_606C5A90(v38);
                  v40 = v39;
                  if ( v39 )
                    v40 = v37 == *(_DWORD *)v38;
                  if ( v40 )
                  {
                    FIELD_U16(v38, 4) = 286;
                    goto LABEL_89;
                  }
                  v38 += 8;
                }
                while ( v38 <= v8 );
                v41 = v36;
                while ( sub_606C5A90(v41) )
                {
                  v41 += 8;
                  if ( v41 > v8 )
                    goto LABEL_89;
                }
                sub_606C5A7C(v41, v37, 1);
              }
LABEL_89:
              v48 = *(_DWORD **)(v6 + 6360);
              ++a5;
              for ( ; v48; v48 = (_DWORD *)v48[1] )
              {
                if ( *v48 )
                  a5 = sub_606C5F4C(v36, *(_DWORD *)(*v48 + 2196), a3, a4, a5);
              }
              return a5;
            }
            v12 = a4;
            while ( 1 )
            {
              v13 = *v12++;
              if ( v11 == v13 )
                break;
              if ( v12 >= &a4[a5] )
                goto LABEL_65;
            }
          }
        }
      }
      else
      {
        v10 = 0;
        if ( Actor__getProfileId((Actor *)v6) == 387 )
        {
          v10 = 1;
          if ( (unsigned int)a5 <= 0x7F )
          {
            v14 = v7;
            v15 = FIELD_U32(v6, 8);
            if ( v15 )
            {
              if ( a5 < 1 )
              {
LABEL_18:
                v18 = v14;
                a4[a5++] = v15;
                do
                {
                  v19 = sub_606C5A90(v18);
                  v20 = v19;
                  if ( v19 )
                    v20 = v15 == *(_DWORD *)v18;
                  if ( v20 )
                  {
                    FIELD_U16(v18, 4) = 286;
                    goto LABEL_29;
                  }
                  v18 += 8;
                }
                while ( v18 <= v8 );
                v21 = v14;
                while ( sub_606C5A90(v21) )
                {
                  v21 += 8;
                  if ( v21 > v8 )
                    goto LABEL_29;
                }
                v10 = 1;
                sub_606C5A7C(v21, v15, 1);
              }
              else
              {
                v16 = a4;
                while ( 1 )
                {
                  v17 = *v16++;
                  if ( v15 == v17 )
                    break;
                  if ( v16 >= &a4[a5] )
                    goto LABEL_18;
                }
              }
            }
LABEL_29:
            v7 = v14;
          }
        }
      }
      v22 = FIELD_U8(v6, 533);
      if ( v22 != 1 )
        break;
      v23 = FIELD_U8(v6, 84);
      v24 = v23 > 3;
      if ( v23 <= 3 )
        v24 = (unsigned int)a5 > 0x7F;
      if ( v24 )
        return a5;
      v25 = FIELD_U32(v6, 8);
      if ( !v25 )
        return a5;
      if ( a5 >= 1 )
      {
        v26 = a4;
        do
        {
          v27 = *v26++;
          if ( v25 == v27 )
            return a5;
        }
        while ( v26 < &a4[a5] );
      }
      a4[a5] = v25;
      if ( ((unsigned int)&dword_60C7B37C & ~(1617715724 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
      {
        dword_60C7B378 = (int)&off_60BC00BC;
        _cxa_guard_release(&dword_60C7B37C);
      }
      ++a5;
      v28 = (int (__fastcall ***)(_DWORD, int *))(**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C7B378);
      v29 = v7;
      if ( v28 )
        v28 = (int (__fastcall ***)(_DWORD, int *))v6;
      do
      {
        v30 = sub_606C5A90(v29);
        v32 = v30;
        if ( v30 )
          v32 = v25 == *(_DWORD *)v29;
        if ( v32 )
        {
          FIELD_U16(v29, 4) = 30;
          goto LABEL_54;
        }
        v29 += 8;
      }
      while ( v29 <= v8 );
      v33 = v7;
      while ( sub_606C5A90(v33) )
      {
        v33 += 8;
        if ( v33 > v8 )
          goto LABEL_54;
      }
      sub_606C5A7C(v33, v25, 0);
LABEL_54:
      if ( ((unsigned int)&dword_60C7B374 & ~(1617715916 << v31) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
      {
        dword_60C7B370 = (int)&off_60BC00B0;
        _cxa_guard_release(&dword_60C7B374);
      }
      v34 = (int)(v28 + 2852);
      if ( !(**v28)(v28, &dword_60C7B370) )
        v34 = 11408;
      v6 = ActorMgrRelated_getById(ActorMgr__instance + 27168, *(_DWORD *)v34);
      if ( ((unsigned int)&dword_60C7B364 & ~(1617716032 << v35) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( !v6 || (**(int (__fastcall ***)(int, int *))v6)(v6, &StageActor_RTTI) != 1 )
        return a5;
    }
    if ( FIELD_U8(v6, 533) )
    {
      if ( v22 == 3 )
      {
        v42 = FIELD_U32(v6, 8);
        v43 = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 228))(v6);
        if ( v42 )
        {
          v44 = v7;
          do
          {
            v45 = sub_606C5A90(v7);
            v46 = v45;
            if ( v45 )
              v46 = v42 == *(_DWORD *)v7;
            if ( v46 )
            {
              FIELD_U8(v7, 4) = 30;
              FIELD_U8(v7, 5) = v43;
              return a5;
            }
            v7 += 8;
          }
          while ( v7 <= v8 );
          v47 = v44;
          while ( sub_606C5A90(v47) )
          {
            v47 += 8;
            if ( v47 > v8 )
              return a5;
          }
          sub_606C5A7C(v47, v42, v43);
        }
      }
    }
    else
    {
      ProfileId = Actor__getProfileId((Actor *)v6);
      if ( !(v10 | (ProfileId == 476 || ProfileId == 474)) )
      {
        v51 = FIELD_U32(v6, 8);
        if ( v51 )
        {
          v52 = v7;
          do
          {
            v53 = sub_606C5A90(v52);
            v54 = v53;
            if ( v53 )
              v54 = v51 == *(_DWORD *)v52;
            if ( v54 )
            {
              FIELD_U16(v52, 4) = 286;
              return a5;
            }
            v52 += 8;
          }
          while ( v52 <= v8 );
          while ( sub_606C5A90(v7) )
          {
            v7 += 8;
            if ( v7 > v8 )
              return a5;
          }
          sub_606C5A7C(v7, v51, 1);
        }
      }
    }
  }
  return a5;
}
