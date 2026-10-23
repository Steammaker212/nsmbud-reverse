/* sub_60946EA0
 * address: 0x60946EA0   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60946EA0(int a1, int a2, int a3)
{
  int v6; // r0
  int v7; // r5
  _DWORD v9[2]; // [sp+0h] [bp-10h] BYREF
  _DWORD v10[2]; // [sp+8h] [bp-8h] BYREF
  _BYTE v11[16]; // [sp+10h] [bp+0h] BYREF
  int v12; // [sp+20h] [bp+10h] BYREF
  _DWORD v13[6]; // [sp+28h] [bp+18h] BYREF

  v6 = agl_default_ref(v11);
  sead__SafeStringBase__operator_assign(v6, a1 + 36);
  sead__SafeStringBase__operator_assign((int)&v12, a1 + 36);
  sead__SafeStringBase__operator_assign((int)v13, a2);
  v13[2] = a1 + 120;
  v7 = 0;
  if ( sub_60967F54(dword_60CD0B48, a3, v11, 0x1000000) == 1 )
  {
    v7 = 1;
    if ( FIELD_U32(a1, 116) )
    {
      v10[0] = &sead__SafeStringBase__vtable;
      v10[1] = &byte_60B3BA34;
      v9[0] = 0;
      v9[1] = a1;
      sead__SafeStringBase__operator_assign((int)v10, a1 + 120);
      (**(void (__fastcall ***)(int, _DWORD *))(FIELD_U32(a1, 116) + 4))(FIELD_U32(a1, 116) + 4, v9);
    }
  }
  return v7;
}
