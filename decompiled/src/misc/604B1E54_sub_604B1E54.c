/* sub_604B1E54
 * address: 0x604B1E54   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604B1E54(int result)
{
  _BYTE *v1; // r4
  int v2; // r2
  int v3; // r1
  int v4; // r2
  int v5; // r1
  int v6; // r0
  int v7; // r1
  int v8; // r0
  int v9; // r1
  _DWORD *v10; // r5
  _DWORD *v11; // r0
  _DWORD v12[2]; // [sp+0h] [bp-20h] BYREF
  _DWORD v13[6]; // [sp+8h] [bp-18h] BYREF

  v1 = (_BYTE *)(result + 38103);
  if ( FIELD_U8(result, 38103) )
  {
    v2 = FIELD_U32(result, 3532);
    if ( FIELD_U32(result, 3528) > 2u )
      v2 += 40;
    if ( FIELD_U8(v2, 16) )
    {
      *v1 = 0;
      v3 = FIELD_U32(result, 6148);
      v4 = FIELD_U32(v3, 92);
      v5 = FIELD_U32(v3, 108);
      v13[0] = v4;
      v13[1] = v5;
      v6 = FIELD_U32(result, 6184);
      v7 = FIELD_U32(v6, 56);
      v8 = FIELD_U32(v6, 60);
      v12[0] = v7;
      v12[1] = v8;
      return ((int (__fastcall *)(int, _DWORD *, _DWORD *, _DWORD))sub_606EA1A4)(dword_60CBC000, v13, v12, 0);
    }
  }
  else
  {
    v10 = (_DWORD *)(result + 38084);
    v9 = FIELD_U32(result, 38084);
    if ( v9 )
    {
      v11 = (_DWORD *)(result + 20);
      if ( v9 == 1 )
        sub_60473DE4(v11, 2u, &dword_60CA1944, 0);
      else
        sub_604741D8(v11, 2u, &dword_60CA1944, 0);
      *v1 = 1;
      *v10 = 0;
      return 0;
    }
  }
  return result;
}
