/* sub_604ECEA4
 * address: 0x604ECEA4   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604ECEA4(_DWORD *a1)
{
  int result; // r0
  int v3; // r0
  bool v4; // zf
  int v5; // r0
  bool v6; // zf

  result = sub_607F6ABC(dword_60CC62E4);
  if ( !result )
  {
    if ( sub_60502D80(a1 + 3599) != 1 )
      return sub_604ED028(a1);
    v3 = sub_608DE61C(a1 + 3612, a1[4119]);
    v4 = v3 == 0;
    if ( v3 )
    {
      v3 -= a1[3615];
      v4 = v3 == 0;
    }
    if ( !v4 && (FIELD_U32(v3, 4) | 2) == 3 )
      return sub_6047459C((int)(a1 + 2702), 1u);
    v5 = sub_608DE61C(a1 + 3612, a1[4120]);
    v6 = v5 == 0;
    if ( v5 )
    {
      v5 -= a1[3615];
      v6 = v5 == 0;
    }
    if ( !v6 && (FIELD_U32(v5, 4) | 2) == 3 )
      return sub_6047459C((int)(a1 + 2702), 2u);
    else
      return sub_604ED028(a1);
  }
  return result;
}
