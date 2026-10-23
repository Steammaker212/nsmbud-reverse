/* sub_608E7C10
 * address: 0x608E7C10   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E7C10(int a1, _DWORD *a2, int a3, int a4)
{
  int v8; // r9
  _BYTE *v9; // r11
  bool v10; // zf
  int v11; // r0
  signed int v12; // r4
  int v13; // r6
  bool v14; // zf
  _DWORD v16[10]; // [sp+8h] [bp-28h] BYREF

  v8 = 0;
  v9 = *(_BYTE **)(a1 + 4);
  v10 = v9 == 0;
  if ( v9 )
    v10 = v9[76] == 0;
  if ( !v10 )
  {
    v11 = (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)v9 + 32))(v9, a1);
    if ( a3 )
    {
      if ( v11 == 1 )
      {
        v12 = FIELD_U32(a1, 44);
        if ( !v12 )
          return (*(int (__fastcall **)(_BYTE *, _DWORD *, int, int, int))(*(_DWORD *)v9 + 64))(v9, a2, a1, a3, a4);
        v13 = 0;
        v16[0] = 0;
        if ( v12 > a4 )
          v12 = a4;
        if ( (*(int (__fastcall **)(_BYTE *, _DWORD *, int, int, signed int))(*(_DWORD *)v9 + 64))(v9, v16, a1, a3, v12) == 1 )
        {
          v13 = 0;
          while ( 1 )
          {
            v13 += v16[0];
            if ( v16[0] < (unsigned int)v12 )
              break;
            a4 -= v12;
            if ( !a4 )
              break;
            v12 = FIELD_U32(a1, 44);
            a3 += v16[0];
            v16[0] = 0;
            if ( a4 < v12 )
              v12 = a4;
            if ( !(*(int (__fastcall **)(_BYTE *, _DWORD *, int, int, signed int))(*(_DWORD *)v9 + 64))(
                    v9,
                    v16,
                    a1,
                    a3,
                    v12) )
              goto LABEL_16;
          }
          v8 = 1;
          v14 = a2 == 0;
        }
        else
        {
LABEL_16:
          v14 = a2 == 0;
          v8 = 0;
        }
        if ( !v14 )
          *a2 = v13;
      }
    }
  }
  return v8;
}
