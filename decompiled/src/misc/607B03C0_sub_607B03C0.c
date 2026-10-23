/* sub_607B03C0
 * address: 0x607B03C0   size: 684   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607B03C0(int a1)
{
  _DWORD *v2; // r5
  bool v3; // zf
  int result; // r0
  int *v5; // r1
  int v6; // r0
  int v7; // r1

  if ( (FIELD_U8(a1, 1207) & 8) != 0
    && ((*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1204))(a1) != 1
     || (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1064))(a1) == 1) )
  {
    FIELD_U32(a1, 1204) &= 0xF7FFEFFF;
    sub_60794954(a1 + 11356, 6, 10.0, 0.0);
    FIELD_U32(a1, 15064) = 6;
  }
  v2 = (_DWORD *)(a1 + 12072);
  if ( FIELD_U32(a1, 12072) == 2 )
  {
    if ( FIELD_U32(a1, 9940) != 1 )
      goto LABEL_13;
    goto LABEL_12;
  }
  v3 = (FIELD_U8(a1, 1207) & 0x10) == 0;
  if ( (FIELD_U8(a1, 1207) & 0x10) == 0 )
    v3 = (FIELD_U8(a1, 1211) & 0x20) == 0;
  if ( v3 )
LABEL_12:
    sub_60773F4C(a1);
LABEL_13:
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1144))(a1);
  ((void (__fastcall *)(int))loc_60771320)(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1148))(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1104))(a1);
  sub_607BA534(a1);
  ((void (__fastcall *)(int))loc_60764488)(a1);
  result = FIELD_U8(a1, 6900);
  if ( (result & 1) != 0 )
  {
    sub_6076F0E0(a1);
    FIELD_U32(a1, 156) = 0;
    result = sub_60773298(a1);
    if ( !result )
    {
      if ( (FIELD_U8(a1, 1207) & 8) != 0 && ((int (__fastcall *)(int))loc_60763E28)(a1) == 1 )
      {
        v5 = (int *)&unk_60CC4C4C;
        return Player_changeState(a1, (StateBase *)v5, 0);
      }
      result = sub_6075FC38(a1);
      if ( !result )
      {
        result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1016))(a1);
        if ( !result )
        {
          v6 = FIELD_U32(a1, 1204);
          if ( (v6 & 0x40000000) != 0 )
          {
            return Player_changeState(a1, (StateBase *)&unk_60CC4C4C, 2);
          }
          else
          {
            if ( (v6 < 0 || *v2 == 2) && !sub_607868D4(a1 + 688, 0) && sub_60771D48(a1, 0) != 1 )
              FIELD_U32(a1, 88) = 0;
            if ( FIELD_F32(a1, 88) == 0.0 )
            {
              if ( (FIELD_U8(a1, 1207) & 0x10) != 0 )
              {
                sub_60794954(a1 + 11356, 71, 10.0, 0.0);
              }
              else
              {
                if ( *v2 )
                  v7 = 10;
                else
                  v7 = 7;
                PlayerBase_dispatchVirtual3(a1 + 11356, v7, 0.0);
              }
              v5 = &dword_60CC4C28;
              return Player_changeState(a1, (StateBase *)v5, 0);
            }
            if ( sub_607868D4(a1 + 688, 0) != 1
              || (float)(FIELD_F32(a1, 88) * FIELD_F32(a1, 92)) >= 0.0
              || (result = ((int (__fastcall *)(int))loc_607743E8)(a1)) == 0 )
            {
              v5 = &dword_60CC4BBC;
              return Player_changeState(a1, (StateBase *)v5, 0);
            }
          }
        }
      }
    }
  }
  return result;
}
