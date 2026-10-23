/* sub_601C19BC
 * address: 0x601C19BC   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C19BC(_DWORD *a1)
{
  int v2; // r0
  bool v3; // zf
  int result; // r0
  int v5; // r0

  v2 = sub_6019112C(dword_60C8996C);
  v3 = v2 == 320;
  if ( v2 == 320 )
    v3 = (a1[66] | 1) == 7;
  if ( v3 )
  {
    result = (*(int (__fastcall **)(_DWORD *))(*a1 + 120))(a1);
    if ( result == 1 )
      return (*(int (__fastcall **)(_DWORD *))(*a1 + 72))(a1);
  }
  else
  {
    v5 = a1[261];
    if ( v5 < 2 )
    {
      if ( v5 != 1 )
        return sub_601C2CF8(a1);
      a1[59] = 3;
      if ( sub_6019112C(dword_60C8996C) == 320 )
        sub_601C2A9C(a1, &unk_60AFC418);
      else
        sub_601C2BE0(a1, &unk_60AFC404);
      v5 = a1[261];
    }
    result = v5 - 1;
    a1[261] = result;
  }
  return result;
}
