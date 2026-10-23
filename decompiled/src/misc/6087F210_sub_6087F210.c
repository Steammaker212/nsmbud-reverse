/* sub_6087F210
 * address: 0x6087F210   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6087F210(_DWORD *a1, int (__fastcall *a2)(_DWORD *))
{
  _DWORD *v3; // r0
  int v4; // r6
  int v5; // r5
  int result; // r0
  bool v7; // zf
  bool v8; // zf
  bool v9; // zf

  v3 = (_DWORD *)*a1;
  v4 = v3[176];
  v5 = v3[177];
  result = v3[178];
  v7 = result == 0;
  if ( result )
  {
    a2 = *(int (__fastcall **)(_DWORD *))(result + 24);
    v7 = a2 == 0;
  }
  if ( !v7 )
    result = a2(a1);
  v8 = v4 == 0;
  if ( v4 )
  {
    a2 = *(int (__fastcall **)(_DWORD *))(v4 + 24);
    v8 = a2 == 0;
  }
  if ( !v8 )
    result = a2(a1);
  v9 = v5 == 0;
  if ( v5 )
  {
    a2 = *(int (__fastcall **)(_DWORD *))(v5 + 24);
    v9 = a2 == 0;
  }
  if ( !v9 )
    return a2(a1);
  return result;
}
