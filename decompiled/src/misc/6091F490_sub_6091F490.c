/* sub_6091F490
 * address: 0x6091F490   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6091F490(_DWORD *result)
{
  int v1; // r3
  int v2; // r1
  int v3; // r7
  int v4; // r6
  int v5; // r9
  int v6; // r11
  int v7; // r8
  void *v8; // r0
  void *v9; // [sp+4h] [bp-2Ch]
  _DWORD *v10; // [sp+8h] [bp-28h]

  v1 = result[1];
  if ( v1 )
  {
    v10 = result;
    v9 = (void *)(v1 - 8);
    v2 = *(_DWORD *)(v1 - 4);
    if ( v2 )
    {
      v3 = 0;
      v4 = v1 + 312 * v2;
      v5 = 312 * v2;
      v6 = v4 - 8;
      do
      {
        v7 = v4 + v3;
        *(_DWORD *)(v4 + v3 - 312) = off_60C5D6B4;
        v8 = *(void **)(v4 + v3 - 8);
        if ( v8 )
        {
          operator_delete_8DE3FC(v8);
          *(_DWORD *)(v7 - 12) = 0;
          *(_DWORD *)(v7 - 8) = 0;
        }
        sub_60973B54(v6 + v3 - 76);
        sub_60973B54(v6 + v3 - 148);
        sub_60973B54(v6 + v3 - 220);
        sub_60973B54(v6 + v3 - 292);
        v3 -= 312;
      }
      while ( v5 + v3 );
    }
    operator_delete_8DE3FC(v9);
    *v10 = 0;
    v10[1] = 0;
    return 0;
  }
  return result;
}
