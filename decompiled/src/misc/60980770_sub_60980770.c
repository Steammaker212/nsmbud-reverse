/* sub_60980770
 * address: 0x60980770   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60980770(_DWORD *a1, int a2, int a3, unsigned __int8 a4)
{
  int v8; // r0
  int v9; // r4
  int v10; // r0
  int v11; // r5
  _BYTE *v12; // r1
  bool v13; // zf
  _DWORD *v14; // r0

  v8 = sub_60855BC8(4 * a3 + 16);
  v9 = v8;
  if ( !v8 )
    return 0;
  v10 = sub_6098A108(v8);
  sub_6098A224(v10, a3, v9 + 16);
  if ( a3 )
  {
    v11 = 0;
    do
    {
      v12 = *(_BYTE **)(a2 + 4 * v11);
      v13 = v12 == 0;
      if ( v12 )
        v13 = *v12 == 0;
      if ( !v13 )
      {
        v14 = sub_60980684(a1, (int)v12, (v11 == 0) & a4);
        sub_6098A2E0(v9, v11, v14);
      }
      ++v11;
    }
    while ( a3 != v11 );
  }
  return v9;
}
