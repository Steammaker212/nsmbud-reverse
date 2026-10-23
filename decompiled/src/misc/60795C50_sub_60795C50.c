/* sub_60795C50
 * address: 0x60795C50   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

char *__fastcall sub_60795C50(_DWORD *a1)
{
  _BOOL4 v2; // r0
  int v3; // r1
  _BOOL4 v4; // r0

  if ( (*(int (__fastcall **)(_DWORD *))(*a1 + 152))(a1) == 1 && (*(int (__fastcall **)(_DWORD *))(*a1 + 1464))(a1) == 1 )
  {
    v2 = sub_6075F914(a1);
    v3 = 2;
    if ( v2 )
      v3 = 3;
  }
  else
  {
    v4 = sub_6075F914(a1);
    v3 = 1;
    if ( !v4 )
    {
      v3 = 0;
      if ( a1[330] == 9 )
        v3 = 5;
    }
  }
  return (char *)&unk_60B0B0DC + 72 * v3;
}
