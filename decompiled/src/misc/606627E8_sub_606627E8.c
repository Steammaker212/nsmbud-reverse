/* sub_606627E8
 * address: 0x606627E8   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606627E8(int a1)
{
  int result; // r0
  int v3; // r1
  int v4; // r1
  _DWORD *v5; // r6
  _DWORD *v6; // r5
  int v7; // r0
  int v8; // r4
  int v9; // t1
  bool v10; // cc
  int v11; // [sp+0h] [bp-20h] BYREF
  int target[7]; // [sp+4h] [bp-1Ch] BYREF

  result = FIELD_U8(a1, 7192);
  if ( result )
  {
    v3 = ((unsigned __int8)FIELD_U32(a1, 7188) + 1) & 7;
    FIELD_U32(a1, 7188) = v3;
    v4 = dword_60AF4D90[v3];
    FIELD_U32(a1, 7180) = v4;
    if ( !FIELD_U32(a1, 80) )
      FIELD_U32(a1, 7180) = -v4;
    v5 = (_DWORD *)(a1 + 7184);
    v6 = (_DWORD *)(a1 + 7196);
    if ( FIELD_U32(a1, 7184) )
    {
      v11 = 0x2000000;
      target[0] = 0;
      if ( moveValueTo((int *)(a1 + 7196), target, &v11) )
      {
        *v5 = 0;
        *v6 = 0;
      }
    }
    else
    {
      target[0] = 201326592;
      v11 = 0x2000000;
      if ( moveValueTo((int *)(a1 + 7196), target, &v11) )
        *v5 = 1;
    }
    v9 = FIELD_U32(a1, 7176);
    v8 = a1 + 7176;
    v7 = v9;
    if ( !v9 || (v10 = v7 <= 1, result = v7 - 1, *(_DWORD *)v8 = result, v10) )
    {
      *v6 = 0;
      FIELD_U8(v8, 16) = 0;
      *(_DWORD *)v8 = 0;
      FIELD_U32(v8, 4) = 0;
      FIELD_U32(v8, 8) = 0;
      FIELD_U32(v8, 12) = 0;
      return 0;
    }
  }
  return result;
}
