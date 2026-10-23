/* sub_609397B4
 * address: 0x609397B4   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_609397B4(_DWORD *a1)
{
  int v2; // r1
  bool v3; // zf

  *a1 = &off_60C5E308;
  v2 = a1[16];
  v3 = v2 == 0;
  if ( v2 )
    v3 = *((_BYTE *)a1 + 85) == 0;
  if ( !v3 )
    sub_6093EA98(dword_60CD09F8, v2);
  operator_delete(a1);
}
