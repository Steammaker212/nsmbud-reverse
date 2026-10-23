/* sub_60997AF4
 * address: 0x60997AF4   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60997AF4(int a1, void *a2, int a3, int a4)
{
  const char **v6; // r0
  unsigned int v7; // r11
  const char *v8; // r4
  int v9; // r8
  int v10; // r6
  int v11; // r9
  int i; // r7
  int v13; // r0
  int v14; // r0
  int v15; // r3
  void *v16; // r0
  int v17; // r2
  int result; // r0
  __int16 v19; // r1

  v6 = sub_6085982C(a3, "FrameBufferUse");
  v7 = *((unsigned __int16 *)v6 + 4);
  v8 = &v6[1][(_DWORD)v6];
  v9 = *(_DWORD *)v8;
  v10 = (*(int (__fastcall **)(int))(*(_DWORD *)a3 + 40))(a3);
  v11 = 0;
  if ( v10 )
  {
    for ( i = 0; i != v10; ++i )
    {
      v13 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a3 + 44))(a3, i);
      v14 = FIELD_U32(v13, 16) & 3;
      if ( v14 > v11 )
        v11 = v14;
    }
  }
  if ( v9 >= 0 && v9 < v11 )
  {
    FIELD_U8(a1, 422) = v9;
    if ( v7 <= 1 )
    {
      LOWORD(v15) = 0;
      FIELD_U16(a1, 416) = 0;
      v16 = a2;
      v17 = a4;
    }
    else
    {
      LOWORD(v15) = 0;
      FIELD_U16(a1, 416) = 2 * *((_WORD *)v8 + 2);
      v16 = a2;
      v17 = a4;
      if ( v7 != 2 )
        v15 = 2 * *((_DWORD *)v8 + 2);
    }
    FIELD_U16(a1, 418) = v15;
    FIELD_U32(a1, 4) = sub_6098F0E0(v16, a3, v17);
  }
  FIELD_U32(a1, 36) = a1 + 72;
  result = (int)sub_6085982C(a3, "FrameBufferAlpha");
  if ( result )
  {
    result = *(_DWORD *)(result + FIELD_U32(result, 4));
    if ( result == 255 )
    {
      result = 420;
      v19 = 1;
    }
    else
    {
      if ( result )
        return result;
      result = 420;
      v19 = 0;
    }
    FIELD_U16(a1, 420) = v19;
  }
  return result;
}
