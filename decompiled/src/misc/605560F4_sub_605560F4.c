/* sub_605560F4
 * address: 0x605560F4   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605560F4(int a1)
{
  int v2; // r0
  bool v3; // zf
  bool v4; // zf
  bool v5; // zf
  bool v6; // zf
  bool v7; // zf
  bool v8; // zf
  bool v9; // zf
  int result; // r0

  sub_60502548(a1 + 5820);
  FIELD_U16(a1, 6872) = 0;
  sub_6047EABC((_DWORD *)(a1 + 5860));
  sub_60473DE4((_DWORD *)(a1 + 44), 0, &dword_60CAD450, 0);
  sub_604741D8((_DWORD *)(a1 + 44), 1u, &dword_60CAD460, 0);
  FIELD_U8(a1, 3648) = 1;
  FIELD_U8(a1, 3649) = 1;
  FIELD_U8(a1, 11587) = 1;
  v2 = FIELD_U32(a1, 5672);
  v3 = v2 == 0;
  if ( v2 )
    v3 = FIELD_U8(v2, 2689) == 0;
  if ( !v3 && !FIELD_U32(v2, 2540) )
    goto LABEL_29;
  v2 = FIELD_U32(a1, 5676);
  v4 = v2 == 0;
  if ( v2 )
    v4 = FIELD_U8(v2, 2689) == 0;
  if ( !v4 && !FIELD_U32(v2, 2540) )
    goto LABEL_29;
  v2 = FIELD_U32(a1, 5680);
  v5 = v2 == 0;
  if ( v2 )
    v5 = FIELD_U8(v2, 2689) == 0;
  if ( !v5 && !FIELD_U32(v2, 2540) )
    goto LABEL_29;
  v2 = FIELD_U32(a1, 5684);
  v6 = v2 == 0;
  if ( v2 )
    v6 = FIELD_U8(v2, 2689) == 0;
  if ( !v6 && !FIELD_U32(v2, 2540) )
    goto LABEL_29;
  v2 = FIELD_U32(a1, 5688);
  v7 = v2 == 0;
  if ( v2 )
    v7 = FIELD_U8(v2, 2689) == 0;
  if ( !v7 && !FIELD_U32(v2, 2540) )
    goto LABEL_29;
  v2 = FIELD_U32(a1, 5692);
  v8 = v2 == 0;
  if ( v2 )
    v8 = FIELD_U8(v2, 2689) == 0;
  if ( !v8 && !FIELD_U32(v2, 2540) )
    goto LABEL_29;
  v2 = FIELD_U32(a1, 5696);
  v9 = v2 == 0;
  if ( v2 )
    v9 = FIELD_U8(v2, 2689) == 0;
  if ( !v9 && !FIELD_U32(v2, 2540) )
LABEL_29:
    FIELD_U8(v2, 2694) = 1;
  result = FIELD_U32(a1, 3644);
  FIELD_U8(result, 64) &= ~1u;
  return result;
}
