/* sub_60904BFC
 * address: 0x60904BFC   size: 8   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60904BFC(int a1, int a2, int a3)
{
  int v5; // r1
  _BYTE *v6; // r0
  int v8; // r8
  int v9; // r5
  int v10; // r10
  int v11; // r7
  int v12; // r4
  bool v13; // zf
  int v14; // r0
  signed int v15; // r6
  int v16; // r0
  int v17; // [sp+4h] [bp-2Ch] BYREF
  _DWORD v18[10]; // [sp+8h] [bp-28h] BYREF

  v5 = FIELD_U32(a1, 4);
  v6 = *(_BYTE **)(v5 + 4);
  if ( !v6 )
    return 0;
  v8 = v5;
  v9 = 0;
  v10 = FIELD_U32(v5, 4);
  v11 = a3;
  v12 = a2;
  v17 = 0;
  v13 = v5 == 0;
  if ( v5 )
    v13 = v6[76] == 0;
  if ( !v13 )
  {
    v14 = (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)v6 + 32))(v6, v5);
    if ( v12 )
    {
      if ( v14 == 1 )
      {
        v15 = FIELD_U32(v8, 44);
        if ( v15 )
        {
          v9 = 0;
          v18[0] = 0;
          if ( v15 > v11 )
            v15 = v11;
          if ( (*(int (__fastcall **)(int, _DWORD *, int, int, signed int))(*(_DWORD *)v10 + 64))(
                 v10,
                 v18,
                 v8,
                 v12,
                 v15) == 1 )
          {
            v9 = 0;
            do
            {
              v16 = v18[0];
              v9 += v18[0];
              if ( v18[0] < (unsigned int)v15 )
                break;
              v11 -= v15;
              if ( !v11 )
                break;
              v15 = FIELD_U32(v8, 44);
              v18[0] = 0;
              v12 += v16;
              if ( v11 < v15 )
                v15 = v11;
            }
            while ( (*(int (__fastcall **)(int, _DWORD *, int, int, signed int))(*(_DWORD *)v10 + 64))(
                      v10,
                      v18,
                      v8,
                      v12,
                      v15) );
          }
          v17 = v9;
        }
        else
        {
          (*(void (__fastcall **)(int, int *, int, int, int))(*(_DWORD *)v10 + 64))(v10, &v17, v8, v12, v11);
          return v17;
        }
      }
    }
  }
  return v9;
}
