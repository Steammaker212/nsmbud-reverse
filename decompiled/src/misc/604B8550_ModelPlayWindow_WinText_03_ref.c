/* ModelPlayWindow_WinText_03_ref
 * address: 0x604B8550   size: 664   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall ModelPlayWindow_WinText_03_ref(int *a1)
{
  unsigned int result; // r0
  unsigned int v3; // r1
  unsigned int v4; // r7
  int v5; // r5
  _BYTE *v6; // r1
  _BYTE *v7; // r1
  unsigned int v8; // r1
  unsigned int v9; // r7
  _BYTE *v10; // r1
  _BYTE *v11; // r1
  _DWORD *v12; // r4
  bool v13; // zf
  _DWORD v14[2]; // [sp+0h] [bp-28h] BYREF
  int (**v15)(); // [sp+8h] [bp-20h] BYREF
  _BYTE *v16; // [sp+Ch] [bp-1Ch]

  result = a1[931];
  if ( result != 44 )
  {
    v3 = 0;
    v4 = 0;
    v5 = 0;
    if ( result < 0x2C )
      v3 = result;
    v6 = (_BYTE *)dword_60CA1E08[9 * v3 + 1];
    if ( *v6 )
    {
      v15 = &sead__SafeStringBase__vtable;
      v16 = v6;
      sub_6047E0EC(&v15, a1[917], 0);
      sub_6047E0EC(&v15, a1[920], 0);
      sub_6047E0EC(&v15, a1[923], 0);
      sub_6047E0EC(&v15, a1[926], 0);
      result = a1[931];
      v5 = 1;
    }
    if ( result < 0x2C )
      v4 = result;
    v7 = (_BYTE *)dword_60CA1E08[9 * v4 + 3];
    if ( *v7 )
    {
      v15 = &sead__SafeStringBase__vtable;
      v16 = v7;
      sub_6047E0EC(&v15, a1[918], 0);
      sub_6047E0EC(&v15, a1[921], 0);
      sub_6047E0EC(&v15, a1[924], 0);
      sub_6047E0EC(&v15, a1[927], 0);
      result = a1[931];
      v5 = 1;
    }
    v8 = 0;
    v9 = 0;
    if ( result < 0x2C )
      v8 = result;
    v10 = (_BYTE *)dword_60CA1E08[9 * v8 + 5];
    if ( *v10 )
    {
      v15 = &sead__SafeStringBase__vtable;
      v16 = v10;
      sub_6047E0EC(&v15, a1[919], 0);
      sub_6047E0EC(&v15, a1[922], 0);
      sub_6047E0EC(&v15, a1[925], 0);
      sub_6047E0EC(&v15, a1[928], 0);
      result = a1[931];
      v5 = 1;
    }
    if ( result < 0x2C )
      v9 = result;
    v11 = (_BYTE *)dword_60CA1E08[9 * v9 + 7];
    if ( *v11 )
    {
      v15 = &sead__SafeStringBase__vtable;
      v16 = v11;
      if ( result == 35 && *(_DWORD *)(sub_60834614(35) + 32) == 1 )
      {
        v14[0] = &sead__SafeStringBase__vtable;
        v14[1] = "ModelPlayWindow_WinText_03";
        sead__SafeStringBase__operator_assign((int)&v15, (int)v14);
      }
      sub_6047E0EC(&v15, a1[915], 0);
      sub_6047E0EC(&v15, a1[916], 0);
      v5 = 1;
    }
    v12 = a1 + 1;
    result = sub_60474F28((int)v12);
    v13 = v5 == 1;
    if ( v5 == 1 )
      v13 = result == 1;
    if ( v13 )
      return sub_60474EEC(v12);
  }
  return result;
}
