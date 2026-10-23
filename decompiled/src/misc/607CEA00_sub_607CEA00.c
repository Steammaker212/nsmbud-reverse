/* sub_607CEA00
 * address: 0x607CEA00   size: 608   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607CEA00(int *a1, int a2)
{
  int v4; // r1
  int *v5; // r7
  int result; // r0
  int v7; // r0
  int v8; // r6
  int v9; // r0
  int v10; // r1
  int v11; // r0
  int v12; // r1
  int v13; // r0
  bool v14; // zf
  _DWORD **v15; // r0
  int v16; // r0

  v5 = a1 + 2452;
  v4 = a1[2452];
  result = 1;
  switch ( v4 )
  {
    case 0:
      v7 = sub_607D6C28(a1);
      v8 = v7;
      if ( v7 )
      {
        v9 = *(_DWORD *)(*(_DWORD *)(FIELD_U32(v7, 648) + 4) + 164);
        if ( (unsigned int)(v9 - 2) >= 3 && ((v10 = FIELD_U32(v8, 1320), v9 != 6) || v10 == 9) )
        {
          if ( v10 == 5 )
          {
            v11 = 2;
            v12 = 96;
          }
          else if ( v10 == 4 )
          {
            v11 = 2;
            v12 = 95;
          }
          else if ( (unsigned int)(v10 - 7) > 1 )
          {
            if ( v9 == 8 )
            {
              v11 = 2;
              v12 = 99;
            }
            else
            {
              v11 = 1;
              v12 = 91;
            }
          }
          else
          {
            v11 = 2;
            v12 = 97;
          }
        }
        else
        {
          v11 = 3;
          v12 = 98;
        }
        *v5 = v11;
        sub_60794954((int)(a1 + 2841), v12, 0.0, 0.0);
        sub_6076DC6C(v8, a2);
      }
      return 0;
    case 1:
      v13 = sub_607D6C28(a1);
      v14 = v13 == 0;
      if ( v13 )
      {
        a2 = FIELD_U32(v13, 648);
        v14 = a2 == 0;
      }
      if ( !v14 )
      {
        if ( sub_60793DA0(FIELD_U32(a2, 4), 50.0) == 1 )
          (**(void (__fastcall ***)(int, int))a2)(a2, 1);
        if ( sub_60793DA0(FIELD_U32(a2, 4), 129.0) == 1 )
          (**(void (__fastcall ***)(int, _DWORD))a2)(a2, 0);
        if ( sub_60793CA8(FIELD_U32(a2, 4)) == 1 )
          goto LABEL_2;
      }
      return 0;
    case 2:
    case 3:
LABEL_2:
      if ( sub_60793CA8(a1[2842]) != 1 )
        return 0;
      goto LABEL_23;
    case 5:
      if ( a2 == 2 )
      {
        *v5 = 9;
        a1[308] &= ~0x20u;
      }
      else if ( !sub_60779818() )
      {
        v16 = sub_607D6C28(a1);
        if ( v16 )
        {
          *v5 = 6;
          sub_607A9040(v16);
        }
      }
      return 0;
    case 6:
      v15 = (_DWORD **)sub_607D6C28(a1);
      if ( v15 && sub_607A9054(v15) == 1 )
LABEL_23:
        (*(void (__fastcall **)(int *))(*a1 + 704))(a1);
      return 0;
    case 9:
      return result;
    default:
      return 0;
  }
}
