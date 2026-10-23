/* sub_608CC238
 * address: 0x608CC238   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CC238(int a1)
{
  int *v2; // r0
  int v3; // r0
  int v4; // r0
  int result; // r0
  int v6; // r5
  int v7; // r6
  int v8; // r0
  int v9; // r6
  int v10; // t1
  int v11; // t1
  _DWORD *v12; // r5
  int v13; // t1

  FIELD_U8(a1, 39) = 1;
  if ( FIELD_U8(a1, 278) )
  {
    v2 = sub_608C3C60();
    sub_608C411C((int)v2, a1 + 176);
    FIELD_U8(a1, 278) = 0;
  }
  if ( FIELD_U8(a1, 37) )
    FIELD_U8(a1, 37) = 0;
  if ( FIELD_U8(a1, 36) )
  {
    v3 = sub_608D3D58();
    sub_608D3DDC(v3, a1 + 164);
    v4 = FIELD_U32(a1, 268);
    if ( v4 )
    {
      if ( !FIELD_U8(v4, 177)
        || (sub_608CC99C(a1), sub_608C7BA4(FIELD_U32(a1, 268)), (v4 = FIELD_U32(a1, 268)) != 0) )
      {
        sub_608C7E5C(v4);
        FIELD_U32(a1, 268) = 0;
      }
    }
    FIELD_U8(a1, 36) = 0;
  }
  result = FIELD_U8(a1, 277);
  if ( FIELD_U8(a1, 277) )
  {
    sub_608D3B00(a1);
    result = 0;
    FIELD_U8(a1, 277) = 0;
  }
  v6 = FIELD_U32(a1, 284);
  if ( v6 )
  {
    v7 = FIELD_U32(a1, 280);
    if ( sub_608D9C7C(FIELD_U32(a1, 284)) == 1 )
    {
      v10 = FIELD_U32(v7, 28);
      v9 = v7 + 28;
      v8 = v10;
    }
    else
    {
      sub_608D9BFC(v6);
      v11 = FIELD_U32(v7, 20);
      v9 = v7 + 20;
      v8 = v11;
    }
    v13 = FIELD_U32(v6, 784);
    v12 = (_DWORD *)(v6 + 784);
    *v12 = v8;
    FIELD_U32(v13, 4) = v9;
    *(_DWORD *)(*(_DWORD *)v9 + 4) = v12;
    *(_DWORD *)v9 = v13;
    FIELD_U32(a1, 284) = 0;
    return 0;
  }
  return result;
}
