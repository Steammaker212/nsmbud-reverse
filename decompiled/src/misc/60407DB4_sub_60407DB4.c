/* sub_60407DB4
 * address: 0x60407DB4   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60407DB4(int a1, int a2, int a3)
{
  int v3; // r12
  int v4; // r0
  int v5; // r3
  bool v7; // zf
  int v8; // r1
  bool v9; // zf

  v3 = -a2;
  v4 = a1 + 3808;
  v5 = 0;
  while ( 1 )
  {
    v7 = v4 + v3 == 3792;
    if ( v4 + v3 != 3792 )
      v7 = FIELD_U8(v4, 24) == 0;
    if ( !v7 && (unsigned int)(*(_DWORD *)v4 - 27) <= 4 )
    {
      v8 = FIELD_U32(v4, 32);
      v9 = v8 == a3;
      if ( v8 == a3 )
        v9 = FIELD_U8(v4, 48) == 0;
      if ( v9 )
        break;
    }
    ++v5;
    v4 += 3856;
    if ( v5 >= 60 )
      return 0;
  }
  return v4 - 3792;
}
