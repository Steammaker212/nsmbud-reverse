/* sub_607B85EC
 * address: 0x607B85EC   size: 988   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607B85EC(int *a1)
{
  int result; // r0
  int *v3; // r6
  int (__fastcall ***v4)(_DWORD, int *); // r0
  int (__fastcall **v5)(_DWORD, int *); // r1
  int (__fastcall **v6)(_DWORD, int *); // r2
  int (__fastcall **v7)(_DWORD, int *); // r0
  _BOOL4 v8; // r0
  bool v9; // zf
  int v10; // r1
  _BOOL4 v11; // r0
  bool v12; // zf
  int v13; // r1
  _BOOL4 v14; // r0
  bool v15; // zf
  int v16; // r1
  int (__fastcall ***v17)(_DWORD, int *); // r0
  int (__fastcall **v18)(_DWORD, int *); // r1
  int (__fastcall **v19)(_DWORD, int *); // r2
  int (__fastcall **v20)(_DWORD, int *); // r0
  _BOOL4 v21; // r0
  bool v22; // zf
  int v23; // r1

  result = sub_607753D8((int)a1);
  if ( !result )
  {
    v3 = a1 + 2485;
    result = a1[2485];
    switch ( result )
    {
      case 0:
      case 5:
      case 8:
        if ( sub_60793CA8(a1[2840]) == 1 )
        {
          sub_607C18F4(a1);
          v4 = sub_607750B4((int)a1);
          if ( v4 )
          {
            v5 = v4[39];
            v6 = v4[40];
            v7 = v4[41];
            a1[39] = (int)v5;
            a1[40] = (int)v6;
            a1[41] = (int)v7;
          }
          v8 = sub_6075EE0C((int)a1);
          v9 = v8;
          if ( v8 )
            v9 = a1[330] == 9;
          if ( v9 )
            v10 = 236;
          else
            v10 = 0;
          PlayerBase_dispatchVirtual3((int)(a1 + 2839), v10, 0.0);
          *v3 = 1;
        }
        goto LABEL_29;
      case 1:
LABEL_29:
        if ( sub_607AA954((int)a1) == 1 )
        {
          PlayerBase_dispatchVirtual3((int)(a1 + 2839), 33, 0.0);
          sub_60793114((_DWORD *)a1[2840], 0.0);
          a1[40] = sub_60773F3C((int)a1, a1[20]);
          a1[3012] = a1[20];
          result = 4;
        }
        else if ( sub_607C1600(a1) == 1 )
        {
          sub_607C1784(a1);
          v17 = sub_607750B4((int)a1);
          if ( v17 )
          {
            v18 = v17[39];
            v19 = v17[40];
            v20 = v17[41];
            a1[39] = (int)v18;
            a1[40] = (int)v19;
            a1[41] = (int)v20;
          }
          result = 7;
        }
        else
        {
          result = sub_60786974((int)(a1 + 172));
          if ( result != 1 )
            return result;
          result = (*(int (__fastcall **)(int *))(*a1 + 1064))(a1);
          if ( result )
            return result;
          a1[304] |= 0x4000000u;
          v21 = sub_6075EE0C((int)a1);
          v22 = v21;
          if ( v21 )
            v22 = a1[330] == 9;
          if ( v22 )
            v23 = 237;
          else
            v23 = 21;
          PlayerBase_dispatchVirtual3((int)(a1 + 2839), v23, 0.0);
          result = 2;
        }
LABEL_50:
        *v3 = result;
        return result;
      case 2:
        if ( sub_60793CA8(a1[2840]) == 1 )
        {
          v11 = sub_6075EE0C((int)a1);
          v12 = v11;
          if ( v11 )
            v12 = a1[330] == 9;
          if ( v12 )
            v13 = 238;
          else
            v13 = 20;
          PlayerBase_dispatchVirtual3((int)(a1 + 2839), v13, 0.0);
          if ( sub_6075EDF8((int)a1) )
            sub_60793114((_DWORD *)a1[2840], 12.0);
        }
        result = sub_60786974((int)(a1 + 172));
        if ( result )
          return result;
        sub_60794954((int)(a1 + 2839), 0, 10.0, 0.0);
        a1[2486] = 10;
        a1[304] &= ~0x4000000u;
        result = 3;
        goto LABEL_50;
      case 3:
        if ( sub_607AA954((int)a1) == 1 )
        {
          PlayerBase_dispatchVirtual3((int)(a1 + 2839), 33, 0.0);
          sub_60793114((_DWORD *)a1[2840], 0.0);
          a1[40] = sub_60773F3C((int)a1, a1[20]);
          a1[3012] = a1[20];
          *v3 = 4;
        }
        result = a1[2486];
        if ( result )
          return result;
        v14 = sub_6075EE0C((int)a1);
        v15 = v14;
        if ( v14 )
          v15 = a1[330] == 9;
        if ( v15 )
          v16 = 236;
        else
          v16 = 0;
        PlayerBase_dispatchVirtual3((int)(a1 + 2839), v16, 0.0);
        result = 1;
        goto LABEL_50;
      case 4:
        result = sub_60793DA0(a1[2840], 4.0);
        if ( result != 1 )
          return result;
        SE_PLY_THROW_ICEBALL_ref((int)a1, 0);
        result = 5;
        goto LABEL_50;
      case 7:
        result = sub_60793DA0(a1[2840], 5.0);
        if ( result == 1 )
        {
          *v3 = 8;
          return SE_PLY_ref_5_helper(a1, 0);
        }
        return result;
      default:
        return result;
    }
  }
  return result;
}
