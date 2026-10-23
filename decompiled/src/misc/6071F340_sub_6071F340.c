/* sub_6071F340
 * address: 0x6071F340   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6071F340(int a1)
{
  int v2; // r1
  int result; // r0
  int v4; // r1
  _DWORD *v5; // r4
  int v6; // t1

  v2 = FIELD_U32(a1, 6632);
  if ( v2 )
  {
    sub_6093EA98(dword_60CD09F8, v2);
    FIELD_U32(a1, 6632) = 0;
  }
  result = 7880;
  v6 = FIELD_U32(a1, 7880);
  v5 = (_DWORD *)(a1 + 7880);
  v4 = v6;
  if ( v6 )
  {
    sub_6093EA98(dword_60CD09F8, v4);
    *v5 = 0;
    return 0;
  }
  return result;
}
