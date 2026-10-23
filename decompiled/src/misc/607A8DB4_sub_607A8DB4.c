/* sub_607A8DB4
 * address: 0x607A8DB4   size: 636   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A8DB4(int *a1, int a2)
{
  int v4; // r1
  int *v5; // r6
  int result; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r1
  int *v11; // r5
  void (*v12)(void); // r2
  int v13; // r0
  int v14; // r0
  int v15; // r1

  v5 = a1 + 2452;
  v4 = a1[2452];
  result = 1;
  switch ( v4 )
  {
    case 0:
      v8 = a1[330];
      if ( (unsigned int)(v8 - 7) < 2 )
      {
        v9 = 2;
        v10 = 94;
      }
      else if ( v8 == 5 )
      {
        v9 = 2;
        v10 = 93;
      }
      else
      {
        if ( v8 != 4 )
        {
          v14 = *(_DWORD *)(a1[2840] + 164);
          v15 = v14 | 1;
          if ( (v14 | 1) != 3 )
            v15 = 1;
          if ( v14 == 4 )
            v15 = 3;
          v13 = (int)(a1 + 2839);
          *v5 = v15;
          v10 = 91;
          goto LABEL_28;
        }
        v9 = 4;
        v10 = 92;
      }
      *v5 = v9;
      v13 = (int)(a1 + 2839);
LABEL_28:
      PlayerBase_dispatchVirtual3(v13, v10, 0.0);
      sub_6076DC6C((int)a1, a2);
      return 0;
    case 1:
      v11 = a1 + 2840;
      if ( sub_60793DA0(a1[2840], 41.0) == 1 )
      {
        v12 = *(void (**)(void))(*(_DWORD *)a1[2842] + 184);
      }
      else
      {
        if ( sub_60793DA0(*v11, 107.0) != 1 )
          goto LABEL_20;
        v12 = *(void (**)(void))(*(_DWORD *)a1[2842] + 184);
      }
      v12();
      goto LABEL_20;
    case 2:
    case 3:
      v7 = a1[2840];
      goto LABEL_21;
    case 4:
      v11 = a1 + 2840;
      if ( sub_60793DA0(a1[2840], 5.0) == 1 )
      {
        a1[308] |= 0x400u;
      }
      else if ( sub_60793DA0(*v11, 12.0) == 1 )
      {
        a1[308] &= ~0x400u;
      }
      else
      {
LABEL_20:
        v7 = *v11;
LABEL_21:
        if ( sub_60793CA8(v7) == 1 )
LABEL_22:
          (*(void (__fastcall **)(int *))(*a1 + 704))(a1);
      }
      return 0;
    case 5:
      if ( a2 == 2 )
      {
        *v5 = 9;
        a1[308] &= ~0x20u;
      }
      else if ( sub_607799C0() )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)a1[2842] + 192))(a1[2842]);
        *v5 = 6;
      }
      return 0;
    case 6:
      if ( sub_6078F110((_DWORD *)a1[2842]) != 1 )
        return 0;
      (*(void (__fastcall **)(int *, int, _DWORD))(*a1 + 144))(a1, 7, 0);
      sub_6078F2B0(a1[2842]);
      goto LABEL_22;
    case 9:
      return result;
    default:
      return 0;
  }
}
