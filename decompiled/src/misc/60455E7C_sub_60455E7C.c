/* sub_60455E7C
 * address: 0x60455E7C   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60455E7C(_DWORD *a1, void *a2)
{
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int result; // r0

  v3 = FIELD_U32(dword_60CC6D78, 128);
  if ( v3 )
  {
    a1[1] = 864136;
    a1[2] = v3;
  }
  v4 = operator_new_8DE25C(0x20u, a2, 4);
  v5 = sub_60905100(v4, a1[2], 864136, 0);
  a1[3] = v5;
  sub_609052F4(v5, 0);
  a1[58] = 0;
  result = dword_60CC6D78;
  FIELD_U32(dword_60CC6D78, 132) = 0;
  return result;
}
