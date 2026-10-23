/* sub_605643B8
 * address: 0x605643B8   size: 876   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605643B8(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  int result; // r0
  int v5; // r5
  int v6; // r0
  int v7; // r1
  bool v8; // zf
  int *p_a2; // r3
  int v10; // r6
  Actor *v11; // r1
  Actor **v12; // r5
  Actor *v13; // t1
  int v14; // r0
  int v15; // r0
  int v16; // r1
  bool v17; // zf
  int *v18; // r3
  int v19; // r6
  Actor *v20; // r1
  Actor **v21; // r6
  Actor *v22; // t1
  bool v23; // zf
  int *v24; // r6
  _DWORD *v25; // r5
  int v26; // r0
  int a2; // [sp+0h] [bp-30h] BYREF
  int v28; // [sp+4h] [bp-2Ch] BYREF
  int v29; // [sp+8h] [bp-28h]
  int v30; // [sp+Ch] [bp-24h]
  int v31; // [sp+10h] [bp-20h]
  int v32; // [sp+14h] [bp-1Ch]
  int v33; // [sp+18h] [bp-18h]
  int v34; // [sp+1Ch] [bp-14h]

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (*(int (**)(void))(dword_60CAE2F8 + 8))();
  if ( v3 != result )
    return result;
  result = sub_605B4CC4(a1);
  v5 = result;
  if ( !result )
    return result;
  if ( FIELD_U32(a1, 6828) )
  {
    if ( FIELD_U8(a1, 6878) )
    {
      v34 = 0;
      v33 = 0;
      v32 = 0;
      v31 = 0;
      v30 = 0;
      v29 = 0;
      v28 = 0;
      a2 = 0;
      v6 = FIELD_U32(a1, 40);
      if ( v6 >= 1 )
      {
        v7 = FIELD_U32(a1, 36);
        v8 = v7 == 0;
        if ( v7 )
        {
          v6 = FIELD_U32(a1, 44);
          v7 -= v6;
          v8 = v7 == 0;
        }
        if ( !v8 )
        {
          p_a2 = &a2;
          do
          {
            *p_a2++ = v7;
            v10 = *(_DWORD *)(v7 + v6 + 4);
            v7 = v10 - v6;
            if ( v10 == a1 + 32 )
              v7 = 0;
          }
          while ( v7 );
          v11 = (Actor *)a2;
          if ( a2 )
          {
            v12 = (Actor **)&v28;
            do
            {
              Actor__removeChild((Actor *)a1, v11);
              v13 = *v12++;
              v11 = v13;
            }
            while ( v13 );
          }
        }
      }
    }
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 380))(a1);
  }
  v14 = FIELD_U32(a1, 6824);
  if ( FIELD_U8(a1, 6841) )
  {
    if ( v14 == -1 )
      goto LABEL_22;
  }
  else if ( v14 == -1 )
  {
    goto LABEL_36;
  }
  FIELD_U8(a1, 6849) = v14;
LABEL_22:
  if ( FIELD_U8(a1, 6878) )
  {
    v34 = 0;
    v33 = 0;
    v32 = 0;
    v31 = 0;
    v30 = 0;
    v29 = 0;
    v28 = 0;
    a2 = 0;
    v15 = FIELD_U32(a1, 40);
    if ( v15 >= 1 )
    {
      v16 = FIELD_U32(a1, 36);
      v17 = v16 == 0;
      if ( v16 )
      {
        v15 = FIELD_U32(a1, 44);
        v16 -= v15;
        v17 = v16 == 0;
      }
      if ( !v17 )
      {
        v18 = &a2;
        do
        {
          *v18++ = v16;
          v19 = *(_DWORD *)(v16 + v15 + 4);
          v16 = v19 - v15;
          if ( v19 == a1 + 32 )
            v16 = 0;
        }
        while ( v16 );
        v20 = (Actor *)a2;
        if ( a2 )
        {
          v21 = (Actor **)&v28;
          do
          {
            Actor__removeChild((Actor *)a1, v20);
            v22 = *v21++;
            v20 = v22;
          }
          while ( v22 );
        }
      }
    }
  }
  result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 380))(a1);
  if ( v5 != 3 )
  {
LABEL_36:
    if ( FIELD_U32(a1, 7368) == 1 )
    {
      v23 = v5 == 3;
      if ( v5 == 3 )
        v23 = FIELD_U32(a1, 6856) == 21;
      if ( v23 )
        return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 376))(a1);
    }
    FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + 1.0;
    if ( v5 == 1 )
    {
      v24 = (int *)(a1 + 6864);
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB0534);
      v25 = (_DWORD *)(a1 + 6904);
      FIELD_U32(a1, 7380) = FIELD_U32(a1, 6904);
      FIELD_U8(a1, 6846) = 1;
      v26 = 2;
    }
    else
    {
      if ( v5 != 2 )
      {
        v25 = (_DWORD *)(a1 + 6904);
LABEL_48:
        if ( !*v25 && (FIELD_U32(a1, 6856) & 0xFFFFFFFE) == 0xC )
          sub_6040B3B0((_BYTE *)dword_60C9A1F0, FIELD_U8(dword_60C9A1F0, 6551));
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 356))(a1);
        return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 364))(a1);
      }
      v24 = (int *)(a1 + 6864);
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB0558);
      v25 = (_DWORD *)(a1 + 6904);
      FIELD_U32(a1, 7380) = FIELD_U32(a1, 6904);
      FIELD_U8(a1, 6846) = 2;
      v26 = 3;
    }
    *v24 = v26;
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 392))(a1);
    goto LABEL_48;
  }
  return result;
}
