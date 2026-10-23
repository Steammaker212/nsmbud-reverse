/* sub_608E65F8
 * address: 0x608E65F8   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E65F8(_BYTE *a1, _DWORD *a2, int a3, int a4, int a5)
{
  int v9; // r8
  bool v10; // zf
  int v11; // r4
  int v12; // r0
  signed int v13; // r7
  int v14; // r6
  bool v15; // zf
  _DWORD v17[10]; // [sp+8h] [bp-28h] BYREF

  v9 = 0;
  v10 = a3 == 0;
  if ( a3 )
    v10 = a1[76] == 0;
  if ( !v10 )
  {
    v11 = a5;
    v12 = (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)a1 + 32))(a1, a3);
    if ( a4 )
    {
      if ( v12 == 1 )
      {
        v13 = FIELD_U32(a3, 44);
        if ( !v13 )
          return (*(int (__fastcall **)(_BYTE *, _DWORD *, int, int))(*(_DWORD *)a1 + 64))(a1, a2, a3, a4);
        v14 = 0;
        v17[0] = 0;
        if ( v13 > a5 )
          v13 = a5;
        if ( (*(int (__fastcall **)(_BYTE *, _DWORD *, int, int, signed int))(*(_DWORD *)a1 + 64))(a1, v17, a3, a4, v13) == 1 )
        {
          v14 = 0;
          while ( 1 )
          {
            v14 += v17[0];
            if ( v17[0] < (unsigned int)v13 )
              break;
            v11 -= v13;
            if ( !v11 )
              break;
            v13 = FIELD_U32(a3, 44);
            a4 += v17[0];
            v17[0] = 0;
            if ( v11 < v13 )
              v13 = v11;
            if ( !(*(int (__fastcall **)(_BYTE *, _DWORD *, int, int, signed int))(*(_DWORD *)a1 + 64))(
                    a1,
                    v17,
                    a3,
                    a4,
                    v13) )
              goto LABEL_16;
          }
          v9 = 1;
          v15 = a2 == 0;
        }
        else
        {
LABEL_16:
          v15 = a2 == 0;
          v9 = 0;
        }
        if ( !v15 )
          *a2 = v14;
      }
    }
  }
  return v9;
}
