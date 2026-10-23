/* sub_601C5F50
 * address: 0x601C5F50   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C5F50(_DWORD *a1)
{
  int v2; // r6
  int v3; // r0
  _DWORD *v4; // r5
  bool v5; // zf
  int v6; // r6
  int v7; // r0
  int v8; // r0
  bool v9; // zf
  int v10; // r6
  int v11; // r7
  int v12; // r0
  bool v13; // zf

  v2 = (*(int (__fastcall **)(_DWORD *))(*a1 + 92))(a1);
  v3 = sub_601CF9C0(dword_60C8AEF0);
  v4 = (_DWORD *)v3;
  if ( v2 == 1 )
  {
    v5 = v3 == 0;
    v6 = 0;
    if ( v3 )
      v5 = v3 == (_DWORD)a1;
    if ( !v5 )
    {
      v6 = 0;
      do
      {
        v7 = (*(int (__fastcall **)(_DWORD *))(*v4 + 92))(v4);
        v4 = (_DWORD *)v4[68];
        if ( v7 )
          ++v6;
      }
      while ( v4 && v4 != a1 );
    }
  }
  else
  {
    v8 = sub_601D013C(dword_60C8AEF0);
    v9 = v4 == 0;
    v10 = v8;
    v11 = 0;
    if ( v4 )
      v9 = v4 == a1;
    if ( !v9 )
    {
      v11 = 0;
      do
      {
        v12 = (*(int (__fastcall **)(_DWORD *))(*v4 + 92))(v4);
        v4 = (_DWORD *)v4[68];
        if ( !v12 )
          ++v11;
        v13 = v4 == 0;
        if ( v4 )
          v13 = v4 == a1;
      }
      while ( !v13 );
    }
    return v11 + v10;
  }
  return v6;
}
