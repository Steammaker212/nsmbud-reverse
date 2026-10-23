/* sub_608E67A4
 * address: 0x608E67A4   size: 440   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E67A4(unsigned __int8 *a1, int a2)
{
  int v4; // r4
  int v5; // r9
  int v6; // r6
  int v7; // r8
  int v8; // r0
  bool v9; // zf
  int v10; // r5
  bool v11; // zf
  _DWORD v13[11]; // [sp+8h] [bp-50h] BYREF
  int v14; // [sp+34h] [bp-24h]

  if ( !FIELD_U32(a2, 8) )
    return 0;
  memset(&v13[1], 0, 40);
  v4 = 0;
  v13[0] = &off_60BF9CF0;
  v14 = 0;
  if ( a1[76] )
  {
    v4 = 0;
    v5 = 1;
    v14 = 0;
    v13[1] = (*(int (__fastcall **)(unsigned __int8 *, _DWORD *, int, int))(*(_DWORD *)a1 + 48))(a1, v13, a2, 1);
    if ( v13[1] )
    {
      v13[2] = a1;
      v6 = FIELD_U32(a2, 12);
      if ( v6 )
      {
        v7 = FIELD_U32(a2, 8);
        v8 = a1[76];
        v5 = 0;
        v9 = v7 == 0;
        if ( v7 )
          v9 = v8 == 0;
        if ( v9 )
          goto LABEL_11;
        v5 = 0;
        if ( (*(int (__fastcall **)(unsigned __int8 *, _DWORD *))(*(_DWORD *)a1 + 32))(a1, v13) == 1 )
          v5 = (*(int (__fastcall **)(unsigned __int8 *, int, _DWORD *, int, int))(*(_DWORD *)a1 + 68))(
                 a1,
                 a2 + 16,
                 v13,
                 v7,
                 v6);
      }
      v8 = a1[76];
LABEL_11:
      if ( v8
        && (*(int (__fastcall **)(unsigned __int8 *, _DWORD *))(*(_DWORD *)a1 + 32))(a1, v13) == 1
        && (*(int (__fastcall **)(unsigned __int8 *, _DWORD *))(*(_DWORD *)a1 + 52))(a1, v13) == 1 )
      {
        v4 = v5;
        v13[1] = 0;
        v13[2] = 0;
      }
    }
  }
  v13[0] = &off_60BF9CF0;
  v10 = v13[2];
  v11 = v13[2] == 0;
  if ( v13[2] )
    v11 = *(_BYTE *)(v13[2] + 76) == 0;
  if ( !v11
    && (*(int (__fastcall **)(_DWORD, _DWORD *))(*(_DWORD *)v13[2] + 32))(v13[2], v13) == 1
    && (*(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v10 + 52))(v10, v13) == 1 )
  {
    v13[1] = 0;
    v13[2] = 0;
  }
  return v4;
}
