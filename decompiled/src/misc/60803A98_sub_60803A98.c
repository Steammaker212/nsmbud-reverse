/* sub_60803A98
 * address: 0x60803A98   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60803A98(int a1)
{
  int v1; // r4
  int v2; // r1
  int v3; // r0
  bool v4; // zf

  v1 = FIELD_U32(a1, 48);
  if ( v1 != 24 || (v2 = 1, (FIELD_U8(a1, 29) & 2) == 0) )
  {
    v3 = *(_DWORD *)sub_60804418(a1);
    v4 = v3 == 4;
    if ( v3 != 4 )
      v4 = v3 == 1;
    if ( v4 )
      return v1 != 24;
    return 0;
  }
  return v2;
}
