/* sub_60244BDC
 * address: 0x60244BDC   size: 1444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60244BDC(int a1)
{
  int result; // r0
  _BYTE *v3; // r7
  StateBase *CurrentState; // r0
  int v5; // r5
  int v6; // r0
  int *v7; // r6
  char *v8; // r4
  int v9; // t1
  char *v10; // r4
  int v11; // t1
  char *v12; // r5
  int v13; // r1
  char v14; // r1
  int v15; // r1
  int v16; // r2
  int v17; // r1
  int v18; // r5
  int v19; // r0
  int v20; // r1
  char *v21; // r4
  int v22; // t1

  result = FIELD_U8(a1, 6526);
  if ( !result )
    return result;
  v3 = (_BYTE *)(a1 + 6313);
  if ( !FIELD_U8(a1, 6313) && FIELD_U8(PlayerMgr_instance, 156)
    || (CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
        v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState),
        v5 == (*(int (**)(void))(dword_60C8DBA4 + 8))()) )
  {
    v11 = FIELD_S8(a1, 6314);
    v10 = (char *)(a1 + 6314);
    sub_603F01A0(dword_60C99D6C, v11, 20, 0);
    sub_603F01A0(dword_60C99D6C, *v10, 26, 0);
    sub_603F01A0(dword_60C99D6C, *v10, 25, 0);
    result = sub_603F01A0(dword_60C99D6C, *v10, 30, 0);
    FIELD_U32(v10, 214) = 0;
    return result;
  }
  v7 = (int *)(a1 + 6528);
  v6 = FIELD_U32(a1, 6528);
  if ( !v6 )
  {
    v12 = (char *)(a1 + 6314);
    result = sub_603F056C(dword_60C99D6C, FIELD_S8(a1, 6314));
    if ( result )
      return result;
    if ( FIELD_U32(a1, 6320) == 1 || (v13 = *v12, (FIELD_U8(dword_60C9CF0C, 1404) & (1 << v13)) != 0) )
    {
      *v7 = 4;
LABEL_22:
      result = sub_603F056C(dword_60C99D6C, *v12);
      if ( !result )
      {
        result = sub_603F056C(dword_60C99D6C, *v12);
        if ( !result )
        {
          result = FIELD_U8(dword_60C99D88, 31);
          if ( FIELD_U8(dword_60C99D88, 31) )
          {
            *v7 = 5;
            if ( *v3 )
            {
              v16 = ((int (__fastcall *)(int))loc_60245C6C)(a1);
              v17 = *v12;
              if ( v16 )
              {
                sub_603EFEAC(dword_60C99D6C, v17, 30);
                result = 4;
              }
              else
              {
                sub_603EFEAC(dword_60C99D6C, v17, 20);
                result = 2;
              }
              FIELD_U32(a1, 6540) = result;
            }
            else
            {
              return sub_603EFEAC(dword_60C99D6C, *v12, 20);
            }
          }
        }
      }
      return result;
    }
    *v7 = 2;
    sub_603EFEAC(dword_60C99D6C, v13, 25);
    v6 = *v7;
  }
  result = v6 - 1;
  switch ( result )
  {
    case 0:
      v9 = FIELD_S8(a1, 6314);
      v8 = (char *)(a1 + 6314);
      result = sub_603F056C(dword_60C99D6C, v9);
      if ( !result )
      {
        *v7 = 2;
        return sub_603EFEAC(dword_60C99D6C, *v8, 25);
      }
      return result;
    case 1:
      if ( FIELD_U32(a1, 6320) == 1 )
      {
        v14 = FIELD_U8(a1, 6314);
      }
      else
      {
        result = FIELD_S8(a1, 6314);
        if ( (FIELD_U8(dword_60C9CF0C, 1404) & (1 << result)) == 0 )
          return result;
        v14 = FIELD_U8(a1, 6314);
      }
      *v7 = 3;
      sub_603F0768(dword_60C99D6C, v14, 26, 0);
      FIELD_U32(a1, 6532) = 120;
      result = 6532;
      break;
    case 2:
      if ( FIELD_U32(a1, 6320) != 1 )
      {
        v15 = FIELD_S8(a1, 6314);
        if ( (FIELD_U8(dword_60C9CF0C, 1404) & (1 << v15)) == 0 )
        {
          sub_603F01A0(dword_60C99D6C, v15, 26, 0);
          *v7 = 1;
        }
      }
      result = FIELD_U32(a1, 6532);
      if ( !result )
      {
        *v7 = 4;
        return sub_603F01A0(dword_60C99D6C, FIELD_S8(a1, 6314), 26, 0);
      }
      return result;
    case 3:
      v12 = (char *)(a1 + 6314);
      goto LABEL_22;
    case 4:
      if ( FIELD_U8(dword_60C99D88, 31) )
      {
        if ( *v3 )
        {
          v18 = dword_60C99D6C;
          if ( dword_60C99D6C )
          {
            switch ( FIELD_U32(a1, 6540) )
            {
              case 1:
                result = sub_603F0658(dword_60C99D6C, FIELD_S8(a1, 6314));
                if ( result == 30 )
                  return result;
                sub_603EFEAC(v18, FIELD_S8(a1, 6314), 20);
                v19 = 2;
                break;
              case 2:
                if ( ((int (__fastcall *)(int))loc_60245C6C)(a1) != 1 )
                  goto LABEL_49;
                sub_603F01A0(v18, FIELD_S8(a1, 6314), 20, 0);
                v19 = 3;
                break;
              case 3:
                result = sub_603F0658(dword_60C99D6C, FIELD_S8(a1, 6314));
                if ( result == 20 )
                  return result;
                sub_603EFEAC(v18, FIELD_S8(a1, 6314), 30);
                v19 = 4;
                break;
              case 4:
                if ( ((int (__fastcall *)(int))loc_60245C6C)(a1) )
                  goto LABEL_49;
                sub_603F01A0(v18, FIELD_S8(a1, 6314), 30, 0);
                v19 = 1;
                break;
              default:
                goto LABEL_49;
            }
            FIELD_U32(a1, 6540) = v19;
          }
        }
      }
      else
      {
        sub_603F01A0(dword_60C99D6C, FIELD_S8(a1, 6314), 30, 0);
        sub_603F01A0(dword_60C99D6C, FIELD_S8(a1, 6314), 20, 0);
      }
LABEL_49:
      result = FIELD_U32(a1, 6320);
      if ( result != 1 )
      {
        v22 = FIELD_S8(a1, 6314);
        v21 = (char *)(a1 + 6314);
        v20 = v22;
        result = FIELD_U8(dword_60C9CF0C, 1404);
        if ( (result & (1 << v22)) == 0 )
        {
          sub_603F01A0(dword_60C99D6C, v20, 30, 0);
          result = sub_603F01A0(dword_60C99D6C, *v21, 20, 0);
          *v7 = 1;
        }
      }
      return result;
    default:
      return result;
  }
  return result;
}
