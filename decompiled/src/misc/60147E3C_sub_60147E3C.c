/* sub_60147E3C
 * address: 0x60147E3C   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60147E3C(int a1, int a2, int a3)
{
  Actor *v4; // r7

  if ( FIELD_U32(a3, 140) != 9 )
  {
    v4 = *(Actor **)(a3 + 64);
    if ( Actor__getProfileId(v4) == 646 || Actor__getProfileId(v4) == 647 )
      ((void (__fastcall *)(int))loc_60147BB0)(a1);
    else
      SE_EMY_DOWN_ref_2A58B4(v4, a1);
  }
  Enemy__collisionEnemy();
}
