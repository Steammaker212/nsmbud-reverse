/* sub_6097FDF0
 * address: 0x6097FDF0   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6097FDF0(int a1)
{
  int v2; // r0
  bool v3; // zf
  _DWORD *v4; // r4
  int v5; // t1

  v2 = FIELD_U32(a1, 188);
  v3 = v2 == 0;
  if ( v2 )
    v3 = FIELD_U32(v2, 868) == 0;
  if ( v3 )
  {
    v5 = FIELD_U32(a1, 216);
    v4 = (_DWORD *)(a1 + 216);
    sub_6093EA98(dword_60CD09F8, v5);
  }
  else
  {
    sub_609A6D4C(v2);
    v4 = (_DWORD *)(a1 + 216);
  }
  *v4 = 0;
  return 0;
}
