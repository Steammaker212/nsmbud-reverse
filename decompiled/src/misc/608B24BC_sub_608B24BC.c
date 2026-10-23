/* sub_608B24BC
 * address: 0x608B24BC   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B24BC(int a1, int a2, int a3)
{
  _DWORD *v4; // r0
  _DWORD *v5; // r5

  v4 = (_DWORD *)sub_608B18A4(FIELD_U32(a1, 60), a2);
  v5 = v4;
  if ( !v4 )
    return 0;
  *(_DWORD *)a3 = *v4;
  FIELD_U32(a3, 4) = sub_608B2080((int)v4);
  FIELD_U8(a3, 8) = *((_BYTE *)v5 + 4);
  return 1;
}
