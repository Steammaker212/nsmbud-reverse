/* sub_608FCB98
 * address: 0x608FCB98   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608FCB98(int a1, int *a2)
{
  int result; // r0
  int v5; // r7
  int v6; // r0
  int v7; // r1
  int v8; // r1
  int v9; // r0
  int v10; // r0
  int v11; // r5
  int v12; // r0
  _DWORD v13[2]; // [sp+0h] [bp-70h] BYREF
  int (**v14)(); // [sp+8h] [bp-68h] BYREF
  int v15; // [sp+Ch] [bp-64h]
  int v16; // [sp+10h] [bp-60h]
  int v17; // [sp+14h] [bp-5Ch]
  _BYTE v18[88]; // [sp+18h] [bp-58h] BYREF

  result = FIELD_U8(a1, 32);
  if ( !result )
  {
    memset(v18, 0, 64);
    v14 = (int (**)())v18;
    v5 = 0;
    v17 = 0;
    v16 = 0;
    v15 = 16;
    v6 = *a2;
    v13[0] = &sead__SafeStringBase__vtable;
    v13[1] = v6;
    if ( !sub_608FC5E0(v6, &v14, v13) )
    {
      do
      {
        v7 = v17;
        if ( v17 < v15 )
        {
          ++v17;
          v8 = v16 + v7;
          v9 = v8 - v15;
          if ( v8 < v15 )
            v9 = v8;
          v14[v9] = (int (*)())v5;
        }
        v10 = v5 + 1;
        if ( v5 > 15 )
          v10 = 16;
        v5 = v10;
      }
      while ( v10 != 16 );
    }
    sead__SafeStringBase__operator_assign(a1 + 20, (int)(a2 + 1));
    if ( a2[3] )
      sub_608FC14C(a1, &v14, (int)a2);
    v11 = sub_608FCCAC();
    v12 = sub_608FCF50();
    sub_608FCA38(a1, v11, v12, (int)&v14);
    FIELD_U8(a1, 32) = 1;
    return 1;
  }
  return result;
}
