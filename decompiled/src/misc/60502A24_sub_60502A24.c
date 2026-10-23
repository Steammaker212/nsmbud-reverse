/* sub_60502A24
 * address: 0x60502A24   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60502A24(int result, _DWORD *a2, int a3, int a4)
{
  int v4; // r4
  int v6; // r10
  int v7; // r0
  int v8; // r7
  _BYTE *v9; // r6
  int v10; // r0
  int v11; // r1
  int v12; // r6
  _BYTE *v13; // r6
  int v14; // t1
  int v15; // r0
  int v16; // r0

  v4 = a3;
  v6 = result;
  if ( a3 >= 1 )
  {
    if ( a4 )
    {
      do
      {
        v7 = 0;
        if ( *a2 < 0x100u )
          v7 = *a2;
        v8 = v6 + v7;
        v9 = (_BYTE *)(v6 + v7 + 500);
        result = (unsigned __int8)*v9;
        if ( *v9 )
        {
          v10 = sub_608DE61C(v6 + 52, *a2);
          result = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)(v10 - FIELD_U32(v6, 64)) + 40))(
                     v10 - FIELD_U32(v6, 64),
                     0);
          FIELD_U8(v8, 756) = 0;
          *v9 = 0;
        }
        ++a2;
        --v4;
      }
      while ( v4 );
    }
    else
    {
      do
      {
        v11 = *a2;
        v12 = v6;
        if ( *a2 < 0x100u )
          v12 = v6 + v11;
        v14 = FIELD_U8(v12, 500);
        v13 = (_BYTE *)(v12 + 500);
        result = v14;
        if ( v14 )
        {
          v15 = sub_608DE61C(v6 + 52, v11);
          if ( v15 )
            v16 = v15 - FIELD_U32(v6, 64);
          else
            v16 = 0;
          result = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)v16 + 40))(v16, 0);
          *v13 = 0;
        }
        --v4;
        ++a2;
      }
      while ( v4 );
    }
  }
  return result;
}
