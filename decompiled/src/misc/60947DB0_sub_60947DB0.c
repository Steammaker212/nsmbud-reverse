/* sub_60947DB0
 * address: 0x60947DB0   size: 560   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60947DB0(_DWORD *a1, int a2, int a3, int a4, float a5, _DWORD *a6)
{
  int v6; // r4
  int result; // r0
  int v11; // r6
  int v12; // r8
  int v13; // r7
  int v14; // r0
  int v15; // r4
  int v16; // r0
  bool v17; // zf
  int v18; // r0
  int v19; // r0
  int v20; // [sp+10h] [bp-40h] BYREF
  _DWORD v21[15]; // [sp+14h] [bp-3Ch] BYREF

  v6 = a3;
  v20 = a4;
  v21[0] = a3;
  result = (*(int (__fastcall **)(_DWORD *, float))(*a1 + 16))(a1, a5);
  if ( result == 1 )
  {
    v11 = a1[1];
    if ( v11 )
    {
      while ( 1 )
      {
        v12 = FIELD_U32(v11, 4);
        v13 = 0;
        if ( v6 )
        {
          v14 = sub_609515BC(v21, FIELD_U32(v11, 4));
          if ( v14 != -1 )
            v13 = v21[0] + ((4 * *(_DWORD *)(v21[0] + 4)) & 0x3FFFC) + 8 * v14;
        }
        if ( a2 == 1 && sub_6094352C(v11) == 1 )
        {
          v15 = 0;
          if ( !v20 )
            goto LABEL_29;
          v16 = sub_609515BC(&v20, v12);
          if ( v16 == -1 )
            goto LABEL_29;
          v17 = v13 == 0;
          v15 = v20 + ((4 * FIELD_U32(v20, 4)) & 0x3FFFC) + 8 * v16;
          if ( v13 )
            v17 = v15 == 0;
          if ( v17 )
          {
LABEL_29:
            if ( a6 )
            {
              (*(void (__fastcall **)(_DWORD *, _DWORD *, int, _DWORD, float, int, int, int))(*a6 + 32))(
                a6,
                a1,
                v11,
                v21[0],
                a5,
                v20,
                v13,
                v15);
              v19 = a6[7];
              if ( v19 )
                (*(void (__fastcall **)(int, _DWORD *, int, _DWORD, float, int, int, int))(*(_DWORD *)v19 + 32))(
                  v19,
                  a1,
                  v11,
                  v21[0],
                  a5,
                  v20,
                  v13,
                  v15);
            }
          }
          else
          {
            sub_60943560(v11);
            sub_609424C4(v11, v13, 1.0 - a5);
            sub_609424C4(v11, v15, a5);
          }
        }
        else if ( v13 )
        {
          sub_60942358(v11, v13);
        }
        else if ( a6 )
        {
          (*(void (__fastcall **)(_DWORD *, _DWORD *, int, _DWORD))(*a6 + 28))(a6, a1, v11, v21[0]);
          v18 = a6[7];
          if ( v18 )
            (*(void (__fastcall **)(int, _DWORD *, int, _DWORD))(*(_DWORD *)v18 + 28))(v18, a1, v11, v21[0]);
        }
        v11 = FIELD_U32(v11, 8);
        if ( !v11 )
          break;
        v6 = v21[0];
      }
    }
    return (*(int (__fastcall **)(_DWORD *))(*a1 + 20))(a1);
  }
  return result;
}
