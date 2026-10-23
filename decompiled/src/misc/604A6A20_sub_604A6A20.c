/* sub_604A6A20
 * address: 0x604A6A20   size: 924   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_604A6A20(int a1, int a2, float a3)
{
  _DWORD *v5; // r10
  int v6; // r9
  _BYTE *v7; // r5
  unsigned int result; // r0
  unsigned int v9; // r7
  int (*v10)(void); // r1
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int (*v15)(void); // r1
  int v16; // r0
  int v17; // r0
  int v18; // r0
  _DWORD v20[14]; // [sp+8h] [bp-38h] BYREF

  v5 = (_DWORD *)(a1 + 48);
  v20[0] = &sead__SafeStringBase__vtable;
  v20[1] = dword_60CA12EC;
  if ( a3 < 0.0 )
  {
    v6 = 0;
    v7 = (_BYTE *)(a1 + 20553);
    while ( 1 )
    {
      result = dword_60B02D00[v6];
      if ( result == 2 && *v7 )
        goto LABEL_14;
      v9 = dword_60B02D10[v6];
      if ( result >= 0x12 )
        result = 0;
      result = sub_6047467C(v5, v9, v20, (int)&dword_60CA1330[2 * result], a3, 0);
      if ( result != 1 )
        goto LABEL_14;
      result = sub_6047482C((int)v5, v9);
      if ( !result )
        goto LABEL_14;
      if ( a2 == 1 )
        break;
      if ( a2 == 2 )
      {
        v10 = *(int (**)(void))(*(_DWORD *)result + 104);
LABEL_13:
        result = v10();
      }
LABEL_14:
      if ( ++v6 == 4 )
        return result;
    }
    v10 = *(int (**)(void))(*(_DWORD *)result + 108);
    goto LABEL_13;
  }
  v11 = sub_6047467C((_DWORD *)(a1 + 48), 0, v20, (int)dword_60CA1330, a3, 0);
  if ( a2 == 1 )
  {
    if ( v11 == 1 )
    {
      v12 = sub_6047482C((int)v5, 0);
      if ( v12 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 108))(v12);
    }
    if ( sub_6047467C(v5, 1u, v20, (int)&unk_60CA1338, a3, 0) )
    {
      v13 = sub_6047482C((int)v5, 1u);
      if ( v13 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 108))(v13);
    }
    if ( sub_6047467C(v5, 2u, v20, (int)&dword_60CA1340, a3, 0) == 1 )
    {
      v14 = sub_6047482C((int)v5, 2u);
      if ( v14 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 108))(v14);
    }
    result = sub_6047467C(v5, 8u, v20, (int)&dword_60CA1370, a3, 0);
    if ( result == 1 )
    {
      result = sub_6047482C((int)v5, 8u);
      if ( result )
      {
        v15 = *(int (**)(void))(*(_DWORD *)result + 108);
        return v15();
      }
    }
  }
  else
  {
    if ( v11 )
    {
      v16 = sub_6047482C((int)v5, 0);
      if ( v16 )
      {
        if ( a2 == 2 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 104))(v16);
      }
    }
    if ( sub_6047467C(v5, 1u, v20, (int)&unk_60CA1338, a3, 0) )
    {
      v17 = sub_6047482C((int)v5, 1u);
      if ( v17 )
      {
        if ( a2 == 2 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 104))(v17);
      }
    }
    if ( sub_6047467C(v5, 2u, v20, (int)&dword_60CA1340, a3, 0) == 1 )
    {
      v18 = sub_6047482C((int)v5, 2u);
      if ( v18 )
      {
        if ( a2 == 2 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 104))(v18);
      }
    }
    result = sub_6047467C(v5, 8u, v20, (int)&dword_60CA1370, a3, 0);
    if ( result == 1 )
    {
      result = sub_6047482C((int)v5, 8u);
      if ( result )
      {
        if ( a2 == 2 )
        {
          v15 = *(int (**)(void))(*(_DWORD *)result + 104);
          return v15();
        }
      }
    }
  }
  return result;
}
