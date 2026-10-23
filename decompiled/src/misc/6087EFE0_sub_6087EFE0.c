/* sub_6087EFE0
 * address: 0x6087EFE0   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6087EFE0(_DWORD *a1, int (__fastcall *a2)(_DWORD *))
{
  int v3; // r8
  int v4; // r6
  _DWORD *v5; // r0
  int v6; // r4
  int v7; // r7
  int v8; // r0
  bool v9; // zf
  bool v10; // zf
  int v11; // r0

  v3 = 1;
  v4 = 1;
  v5 = (_DWORD *)*a1;
  v6 = v5[176];
  v7 = v5[177];
  v8 = v5[178];
  if ( v8 )
  {
    a2 = *(int (__fastcall **)(_DWORD *))(v8 + 4);
    v4 = 1;
    if ( a2 )
      v4 = a2(a1);
  }
  v9 = v6 == 0;
  if ( v6 )
  {
    a2 = *(int (__fastcall **)(_DWORD *))(v6 + 4);
    v9 = a2 == 0;
  }
  if ( !v9 )
    v3 = a2(a1);
  v10 = v7 == 0;
  v11 = 1;
  if ( v7 )
  {
    a2 = *(int (__fastcall **)(_DWORD *))(v7 + 4);
    v10 = a2 == 0;
  }
  if ( !v10 )
    v11 = a2(a1);
  if ( v4 == 1 )
    return v3 & v11;
  else
    return 0;
}
