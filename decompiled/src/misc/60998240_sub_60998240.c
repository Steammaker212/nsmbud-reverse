/* sub_60998240
 * address: 0x60998240   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60998240(int a1, int a2)
{
  int v2; // r0
  bool v3; // zf

  v2 = FIELD_U32(a1, 4);
  v3 = v2 == 0;
  if ( v2 )
    v3 = FIELD_U32(v2, 868) == 0;
  if ( v3 )
    return sub_6093EA98(dword_60CD09F8, a2);
  else
    return sub_609A6D4C(v2);
}
