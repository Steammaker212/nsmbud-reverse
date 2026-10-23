/* sub_60946F84
 * address: 0x60946F84   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60946F84(_DWORD *a1, int a2, int a3)
{
  int v6; // r0
  int v7; // r6
  int v8; // r7
  _DWORD *v9; // r4
  int v10; // r5
  int v12; // [sp+4h] [bp-464h] BYREF
  int v13; // [sp+8h] [bp-460h] BYREF
  _DWORD v14[253]; // [sp+Ch] [bp-45Ch] BYREF
  _BYTE v15[16]; // [sp+418h] [bp-50h] BYREF
  int v16; // [sp+428h] [bp-40h] BYREF
  _BYTE v17[8]; // [sp+430h] [bp-38h] BYREF
  _DWORD *v18; // [sp+438h] [bp-30h]

  v6 = agl_default_ref(v15);
  sead__SafeStringBase__operator_assign(v6, (int)(a1 + 9));
  sead__SafeStringBase__operator_assign((int)&v16, (int)(a1 + 9));
  sead__SafeStringBase__operator_assign((int)v17, a2);
  v18 = a1 + 30;
  v7 = dword_60CD0B48;
  v8 = sub_60968528(dword_60CD0B48, v15);
  if ( v8 < 0 )
    return 0;
  v9 = v18;
  (*(void (__fastcall **)(_DWORD *))(*v18 + 12))(v18);
  sub_604209A4(
    v14,
    "File = %s, Arg = %s %%AGL_ROOT%%/tools/temporary/param_temp, WaitEnd = True, WindowStyle = Hidden",
    "%AGL_ROOT%/tools/bin/Win32/aglParameterBinaryConverter.exe",
    (const char *)v9[1]);
  sub_60968868(v7, v8);
  (*(void (__fastcall **)(_DWORD *))(a1[9] + 12))(a1 + 9);
  sub_604209A4(v14, "%%AGL_ROOT%%/tools/temporary/param_temp.b%s", (const char *)a1[10]);
  sead__SafeStringBase__operator_assign((int)v17, (int)v14);
  v10 = 0;
  v18 = 0;
  if ( sub_60968528(v7, v15) >= 0 )
  {
    sub_60951E50(&v13);
    if ( a3 == 1 )
    {
      v12 = v13 + FIELD_U32(v13, 20) + 48;
      s_0x_08x_ref(&v12, 0, 0);
    }
    (*(void (__fastcall **)(_DWORD *, int))(*a1 + 40))(a1, v13);
    return 1;
  }
  return v10;
}
