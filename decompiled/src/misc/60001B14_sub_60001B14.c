/* sub_60001B14
 * address: 0x60001B14   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60001B14(StageActor *a1, int a2)
{
  int v4; // r4
  Actor *v5; // r7
  Actor *v6; // r0
  bool v7; // zf
  Actor *parent; // r1
  bool v9; // zf
  Actor *v10; // r1
  bool v11; // zf
  bool v12; // zf

  v4 = 0;
  if ( (FIELD_U32(a2, 2224) & 0x34621) != 0x401 )
    return v4;
  v5 = (Actor *)sub_6014B69C(a2);
  v6 = (Actor *)sub_6014B6F8(a2);
  v7 = v5 == 0;
  if ( v5 )
    v7 = v6 == 0;
  if ( v7 )
  {
    if ( !v6 )
      goto LABEL_14;
  }
  else if ( v5 == v6 || v5[1].field_40 == v6[1].field_40 )
  {
    return v4;
  }
  parent = v6[1].parent;
  if ( ((unsigned __int16)parent & 0x1000) != 0 )
    return v4;
  v9 = ((int)v6[1].parent & 0x800) == 0;
  if ( ((unsigned __int16)parent & 0x800) != 0 )
    v9 = v6[3].field_3C == 31;
  if ( !v9 )
    return v4;
LABEL_14:
  if ( v5 )
  {
    v10 = v5[1].parent;
    if ( ((unsigned __int16)v10 & 0x1000) != 0 )
      return v4;
    v11 = ((int)v5[1].parent & 0x800) == 0;
    if ( ((unsigned __int16)v10 & 0x800) != 0 )
      v11 = v5[3].field_3C == 31;
    if ( !v11 )
      return v4;
  }
  v12 = v6 == 0;
  if ( v6 )
  {
    v6 = (Actor *)v6[1].field_40;
    v12 = v6 == 0;
  }
  if ( !v12 && Actor__getProfileId(v6) == 350 )
    return v4;
  if ( (FIELD_U32(a2, 5308) & 0xFF00) == 0x300 )
    return v4;
  v4 = 1;
  if ( sub_60001C34(a1, a2) )
    return v4;
  return sub_60001DB8((int)a1, a2);
}
