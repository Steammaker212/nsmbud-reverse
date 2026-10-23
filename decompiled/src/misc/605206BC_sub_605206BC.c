/* sub_605206BC
 * address: 0x605206BC   size: 524   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605206BC(int a1)
{
  int *v2; // r6
  int result; // r0
  int v4; // r0
  _DWORD *v5; // r5
  unsigned int v6; // r6
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int (**v10)(); // [sp+8h] [bp-28h] BYREF
  int v11; // [sp+Ch] [bp-24h]
  int (**v12)(); // [sp+10h] [bp-20h] BYREF
  int v13; // [sp+14h] [bp-1Ch]

  v2 = (int *)(a1 + 4296);
  result = FIELD_U32(a1, 4296) + 1;
  *v2 = result;
  if ( result == 40 )
  {
    if ( FIELD_U8(a1, 4311) )
    {
      FIELD_U8(a1, 4321) = 1;
      sub_603F63F8(a1 + 3868);
      sub_603FDEBC(a1 + 3868, (int)&dword_60CA9344);
      result = *v2;
    }
    else
    {
      result = 40;
    }
    FIELD_U8(a1, 4311) = 0;
  }
  if ( result == 120 )
  {
    v4 = FIELD_U8(dword_60C9A1F0, 6560);
    if ( FIELD_U8(dword_60C9A1F0, 6560) )
    {
      if ( v4 == 1 )
      {
        v12 = &sead__SafeStringBase__vtable;
        v13 = sub_6052283C(12);
        v5 = (_DWORD *)(a1 + 36);
        v10 = &sead__SafeStringBase__vtable;
        v11 = sub_605231B8(8);
        v6 = sub_604746E4(a1 + 36, &v12, &v10);
        v7 = 12;
      }
      else
      {
        if ( v4 != 2 )
        {
          v5 = (_DWORD *)(a1 + 36);
          goto LABEL_15;
        }
        v12 = &sead__SafeStringBase__vtable;
        v13 = sub_6052283C(11);
        v5 = (_DWORD *)(a1 + 36);
        v10 = &sead__SafeStringBase__vtable;
        v11 = sub_605231B8(8);
        v6 = sub_604746E4(a1 + 36, &v12, &v10);
        v7 = 11;
      }
    }
    else
    {
      v12 = &sead__SafeStringBase__vtable;
      v13 = sub_6052283C(13);
      v5 = (_DWORD *)(a1 + 36);
      v10 = &sead__SafeStringBase__vtable;
      v11 = sub_605231B8(8);
      v6 = sub_604746E4(a1 + 36, &v12, &v10);
      v7 = 13;
    }
    v8 = sub_6052283C(v7);
    v12 = &sead__SafeStringBase__vtable;
    v13 = v8;
    sub_604742D0(v5, 8u, &v12, v6, 1.0, 0);
LABEL_15:
    v9 = sub_6052283C(4);
    v12 = &sead__SafeStringBase__vtable;
    v13 = v9;
    sub_60473DE4(v5, 4u, &v12, 0);
    return (int)StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&dword_60CA928C);
  }
  return result;
}
