/* sub_607C1BE0
 * address: 0x607C1BE0   size: 552   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C1BE0(_DWORD *a1)
{
  _DWORD *v2; // r5
  int v3; // r1
  unsigned int v4; // r2
  int result; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r2
  int *v9; // r1
  int v10; // r0
  int v11; // r5

  v2 = a1 + 1725;
  if ( (*((_BYTE *)a1 + 6902) & 4) != 0 )
  {
    ((void (__fastcall *)(_DWORD *))loc_607BE9F8)(a1);
  }
  else
  {
    sub_607712D4((int)a1);
    (*(void (__fastcall **)(_DWORD *))(*a1 + 1104))(a1);
    ((void (__fastcall *)(_DWORD *))loc_60771D8C)(a1);
    sub_607711C8((int)a1);
  }
  a1[40] += a1[3025];
  v3 = *v2 & 1;
  v4 = a1[306] & 0xFFFFFFFB;
  if ( !v3 )
    v4 = a1[306] | 4;
  a1[306] = v4;
  result = a1[2485];
  switch ( result )
  {
    case 2:
      result = sub_60793CA8(a1[2840]);
      if ( result != 1 )
        return result;
      v8 = 0;
      v9 = &dword_60CC4D24;
      v10 = (int)a1;
      return Player_changeState(v10, (StateBase *)v9, v8);
    case 1:
      if ( v3 )
      {
        result = sub_6075FC38((int)a1);
        if ( result )
          return result;
      }
      if ( sub_60793184(a1[2840]) < 20.0 )
        goto LABEL_18;
      if ( (*(_BYTE *)v2 & 1) != 0 )
      {
        if ( *((float *)a1 + 22) == 0.0 )
        {
LABEL_18:
          result = sub_60793CA8(a1[2840]);
          if ( result != 1 )
            return result;
          v9 = &dword_60CC4BBC;
          goto LABEL_31;
        }
        v9 = &dword_60CC4BBC;
      }
      else
      {
        v9 = (int *)&unk_60CC4C04;
      }
LABEL_31:
      v10 = (int)a1;
      v8 = 1;
      return Player_changeState(v10, (StateBase *)v9, v8);
    case 0:
      v6 = a1[2840];
      if ( FIELD_U32(v6, 28) == 39 )
      {
        result = sub_60793DA0(v6, 12.0);
        if ( result == 1 )
        {
          v7 = 2;
LABEL_25:
          a1[2485] = v7;
          v11 = *((unsigned __int8 *)a1 + 12172);
          a1[40] = sub_60773F3C((int)a1, a1[20]);
          a1[3025] = 0;
          return (int)sub_607C195C(a1, v11);
        }
      }
      else
      {
        if ( v3 )
        {
          if ( sub_6078663C((int)(a1 + 172)) == 1 )
          {
            (*(void (__fastcall **)(_DWORD *, int))(*a1 + 1120))(a1, 1);
            sub_6076FE18((float *)a1);
            sub_607AFBB0((int)a1);
          }
        }
        result = sub_60793DA0(a1[2840], 5.0);
        if ( result == 1 )
        {
          v7 = 1;
          goto LABEL_25;
        }
      }
      break;
  }
  return result;
}
