/* sub_608B0B70
 * address: 0x608B0B70   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608B0B70(_DWORD *a1, int a2)
{
  int v4; // r0
  bool v5; // zf
  _DWORD *v7; // r5
  _DWORD *v8; // r6
  _DWORD *v9; // r0
  bool v10; // zf

  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  if ( *(_DWORD *)a2 != 1347569478 )
    return a1;
  v4 = FIELD_U16(a2, 4);
  v5 = v4 == 65279;
  if ( v4 == 65279 )
    v5 = FIELD_U32(a2, 8) == 0x10000;
  if ( !v5 )
    return a1;
  v7 = (_DWORD *)sub_608D3E88(a2);
  v8 = (_DWORD *)sub_608D3ED8(a2);
  v9 = (_DWORD *)sub_608D3F30(a2);
  v10 = v7 == 0;
  if ( v7 )
    v10 = v8 == 0;
  if ( v10 || *v7 != 1330007625 || *v8 != 1162627398 )
    return a1;
  if ( v9 )
  {
    if ( *v9 == 1481002569 )
    {
      a1[2] = v9 + 2;
      goto LABEL_14;
    }
    return a1;
  }
LABEL_14:
  *a1 = v7 + 2;
  a1[1] = v8 + 2;
  return a1;
}
