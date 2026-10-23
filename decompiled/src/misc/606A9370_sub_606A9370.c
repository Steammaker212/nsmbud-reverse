/* sub_606A9370
 * address: 0x606A9370   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606A9370(int a1, int a2)
{
  Actor *v2; // r5
  bool v4; // zf

  v4 = FIELD_U8(dword_60CC6D8C, 17) == 0;
  if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    v2 = *(Actor **)(a2 + 144);
    v4 = v2 == 0;
  }
  if ( v4 || Actor__getProfileId(v2) != 72 || !sub_606AD01C(v2) )
    *(_BYTE *)(FIELD_U32(a2, 144) + 6113) = 1;
  return 1;
}
