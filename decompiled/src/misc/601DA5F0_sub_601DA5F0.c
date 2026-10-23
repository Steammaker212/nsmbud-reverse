/* sub_601DA5F0
 * address: 0x601DA5F0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601DA5F0(int a1)
{
  int v2; // r5
  int v3; // r6

  v2 = sub_601A443C(dword_60C89E18, *(_DWORD *)a1, FIELD_U32(a1, 4));
  v3 = 0x20000;
  if ( !sub_60183054(v2, FIELD_U32(a1, 8), 0x20000) )
  {
    v3 = sub_60183054(v2, FIELD_U32(a1, 8), 0x40000);
    if ( v3 )
      return 0x40000;
  }
  return v3;
}
