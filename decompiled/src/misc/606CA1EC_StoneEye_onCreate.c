/* StoneEye_onCreate
 * address: 0x606CA1EC   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall StoneEye_onCreate(_DWORD *a1)
{
  int v2; // r1
  signed int result; // r0
  int v4; // r1
  int v5; // r0
  int v6; // r5
  int v7; // r0
  int v8; // r1
  int v9; // r2
  StateMgr *v10; // r0
  int *v11; // r1
  int a3; // [sp+4h] [bp-14h] BYREF

  v2 = (*(int (__fastcall **)(_DWORD *))(*a1 + 200))(a1);
  result = 2;
  if ( v2 == 1 )
  {
    v4 = *((unsigned __int8 *)a1 + 28);
    *((_BYTE *)a1 + 6144) = v4;
    v5 = sub_606D4384(&a3, v4);
    v6 = v5;
    a1[1537] = a3;
    if ( v5 )
    {
      (*(void (__fastcall **)(_DWORD *, int))(*a1 + 192))(a1, v5);
      (*(void (__fastcall **)(_DWORD *, int))(*a1 + 196))(a1, v6);
      v7 = a1[27];
      v8 = a1[28];
      v9 = a1[29];
      a1[146] = v7;
      a1[147] = v8;
      a1[148] = v9;
      a1[152] = v7;
      a1[153] = v8;
      a1[154] = v9;
      a1[1534] = a1[1533];
      (*(void (__fastcall **)(_DWORD *))(*a1 + 220))(a1);
      v10 = (StateMgr *)(a1 + 1521);
      v11 = &dword_60CBADDC;
    }
    else
    {
      v10 = (StateMgr *)(a1 + 1521);
      v11 = &dword_60CBADBC;
    }
    StateMgr__changeState(v10, (StateBase *)v11);
    return 1;
  }
  return result;
}
