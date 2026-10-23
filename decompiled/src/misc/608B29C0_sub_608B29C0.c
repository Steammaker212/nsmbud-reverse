/* sub_608B29C0
 * address: 0x608B29C0   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B29C0(int a1, int a2, int a3)
{
  int v4; // r0
  int v5; // r6
  int v6; // r5
  _DWORD *v7; // r5
  int v8; // r0

  v4 = sub_608B175C(FIELD_U32(a1, 60), a2);
  v5 = v4;
  v6 = 0;
  if ( v4 && sub_608B1A60(v4) == 3 )
  {
    v7 = (_DWORD *)sub_608B1C3C(v5);
    *(_DWORD *)a3 = *v7;
    FIELD_U32(a3, 4) = v7[1];
    FIELD_U8(a3, 8) = sub_608B1F68((int)v7);
    v8 = sub_608B1F80((int)v7);
    v6 = 1;
    FIELD_U8(a3, 9) = v8 != 0;
  }
  return v6;
}
