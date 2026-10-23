/* sub_607CF27C
 * address: 0x607CF27C   size: 592   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607CF27C(int a1)
{
  int result; // r0
  _DWORD *v3; // r5
  int v4; // r1
  int v5; // r4
  int v6; // t1
  unsigned int v7; // s0
  _DWORD *v8; // r6
  int v9; // r0

  result = FIELD_U32(a1, 11360);
  if ( !result )
    FIELD_U32(a1, 11424) = FIELD_U32(a1, 80);
  v3 = (_DWORD *)(a1 + 11428);
  switch ( FIELD_U32(a1, 11428) )
  {
    case 0:
      if ( !result )
        goto LABEL_29;
      if ( (FIELD_U8(a1, 1219) & 1) != 0 )
        goto LABEL_11;
      result = sub_60773F3C(a1, FIELD_U32(a1, 11424));
      v4 = FIELD_U32(a1, 160);
      if ( result < 0 )
        result = -result;
      if ( v4 < 0 )
        v4 = -v4;
      if ( result <= v4 )
LABEL_11:
        result = SE_PLY_YOSHI_TONGUE_ref(a1);
      break;
    case 1:
      sub_607CD08C(a1);
      v6 = FIELD_U32(a1, 11368);
      v5 = a1 + 11368;
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 116))(v6);
      if ( result == 1 )
      {
        if ( *(_DWORD *)(*(_DWORD *)v5 + 32) != 105 )
          sub_607949A4(v5 - 4, 105);
        *v3 = 5;
        result = 5;
      }
      break;
    case 2:
      result = sub_607D0A4C(a1);
      break;
    case 3:
      result = sub_607D0C14(a1);
      break;
    case 4:
      v7 = (int)(float)(9.0
                      - (*(float (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 11368) + 120))(FIELD_U32(a1, 11368)));
      if ( v7 <= 9 )
        FIELD_U32(a1, 11448) = v7;
      result = sub_607D1330(a1);
      if ( !result )
      {
        if ( (*(int (__fastcall **)(_DWORD, float))(**(_DWORD **)(a1 + 11368) + 132))(FIELD_U32(a1, 11368), 10.0) == 1 )
          result = sub_607D0F8C(a1);
        else
          result = sub_607D1438(a1);
      }
      break;
    case 5:
      v8 = (_DWORD *)(a1 + 11368);
      if ( (*(float (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 11368) + 120))(FIELD_U32(a1, 11368)) < 8.0 )
        sub_607CD08C(a1);
      if ( (*(int (__fastcall **)(_DWORD, float))(*(_DWORD *)*v8 + 132))(*v8, 9.0) == 1 )
      {
        FIELD_U32(a1, 1236) &= ~0x400000u;
        v9 = sub_607CBC00(a1);
        if ( v9 )
          FIELD_U32(v9, 324) = 0;
      }
      result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v8 + 116))(*v8);
      if ( result == 1 )
      {
LABEL_29:
        *v3 = 0;
        result = (int)StateMgr__changeState((StateMgr *)(a1 + 11404), (StateBase *)&dword_60CC5398);
      }
      break;
    default:
      return result;
  }
  return result;
}
