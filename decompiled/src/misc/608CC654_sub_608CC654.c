/* sub_608CC654
 * address: 0x608CC654   size: 460   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CC654(int a1)
{
  int result; // r0
  _DWORD *v3; // r5
  int v4; // r1
  bool v5; // zf
  int *v6; // r2
  int v7; // r3
  int v8; // r0
  int v9; // r5
  int v10; // r6
  int *v11; // r0
  int v12; // r0
  int v13; // r0
  bool v14; // zf
  int *v15; // r0

  result = FIELD_U8(a1, 276);
  if ( result == 1 )
  {
    v4 = FIELD_U32(a1, 280);
    v5 = v4 == 0;
    if ( v4 )
    {
      result = FIELD_U32(v4, 24);
      v5 = result == v4 + 20;
    }
    if ( v5 )
      return result;
    v6 = *(int **)(result + 4);
    v7 = *v6;
    *(_DWORD *)(*(_DWORD *)result + 4) = v6;
    *v6 = *(_DWORD *)result;
    FIELD_U32(v7, 4) = result;
    *(_DWORD *)result = v7;
    FIELD_U32(a1, 284) = result - 784;
    v3 = (_DWORD *)(a1 + 284);
    FIELD_U8(a1, 276) = 2;
    sub_608D9B94();
  }
  else
  {
    if ( result != 2 )
      goto LABEL_16;
    v3 = (_DWORD *)(a1 + 284);
  }
  result = sub_608D9C20(*v3);
  if ( result != 1 )
    return result;
  v8 = *v3;
  if ( !*(_BYTE *)(*v3 + 88) )
    goto LABEL_28;
  v9 = FIELD_U32(v8, 72);
  v10 = FIELD_U32(v8, 76);
  if ( FIELD_U8(a1, 36) )
  {
    FIELD_U8(a1, 39) = 1;
    if ( FIELD_U8(a1, 278) )
    {
      v11 = sub_608C3C60();
      sub_608C411C((int)v11, a1 + 176);
      FIELD_U8(a1, 278) = 0;
    }
    if ( FIELD_U8(a1, 37) )
      FIELD_U8(a1, 37) = 0;
  }
  FIELD_U32(a1, 196) = v9;
  FIELD_U32(a1, 200) = v10;
  FIELD_U8(a1, 191) = 0;
  FIELD_U8(a1, 276) = 3;
  FIELD_U8(a1, 36) = 1;
  v12 = sub_608D3D58();
  sub_608D3DBC(v12, a1 + 164);
LABEL_16:
  v13 = FIELD_U32(a1, 216);
  if ( v13 >= 1 )
  {
    result = v13 - 1;
    FIELD_U32(a1, 216) = result;
    return result;
  }
  result = FIELD_U8(a1, 36);
  v14 = result == 0;
  if ( FIELD_U8(a1, 36) )
  {
    result = FIELD_U8(a1, 37);
    v14 = result == 0;
  }
  if ( !v14 )
  {
    if ( FIELD_U8(a1, 38) )
      return sub_608CC99C(a1);
    if ( FIELD_U8(a1, 188) )
    {
      if ( FIELD_U32(a1, 268) )
        return sub_608CC99C(a1);
      FIELD_U8(a1, 39) = 1;
      if ( !FIELD_U8(a1, 278) )
      {
LABEL_31:
        FIELD_U8(a1, 37) = 0;
        return 0;
      }
LABEL_29:
      v15 = sub_608C3C60();
      sub_608C411C((int)v15, a1 + 176);
      FIELD_U8(a1, 278) = 0;
LABEL_30:
      result = FIELD_U8(a1, 37);
      if ( !FIELD_U8(a1, 37) )
        return result;
      goto LABEL_31;
    }
    if ( sub_608CC820(a1) )
      return sub_608CC99C(a1);
LABEL_28:
    FIELD_U8(a1, 39) = 1;
    if ( !FIELD_U8(a1, 278) )
      goto LABEL_30;
    goto LABEL_29;
  }
  return result;
}
