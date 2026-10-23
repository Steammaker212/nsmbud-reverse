/* sub_60452D84
 * address: 0x60452D84   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60452D84(int a1, int a2)
{
  int v4; // r6
  _DWORD v6[18]; // [sp+8h] [bp-48h] BYREF

  if ( FIELD_U8(a1, 1320) )
    sub_60452EDC(a1);
  if ( FIELD_U32(a1, 1316) == 1 )
    sub_60456918(FIELD_U32(a1, 1388));
  if ( !**(_BYTE **)(a2 + 4) )
    goto LABEL_9;
  v4 = FIELD_U32(dword_60CC6D78, 132);
  memset(&v6[1], 0, 44);
  v6[0] = &off_60BF9CF0;
  if ( sub_608E86B8(dword_60CCEBD0, v6, a2, 1, 0) )
  {
    sub_608E7D54(v6, *(_DWORD *)(FIELD_U32(a1, 1388) + 8), v4);
    sub_608E7A54(v6);
    v6[0] = &off_60BF9CF0;
    if ( v6[2] )
      sub_608E6738(v6[2]);
LABEL_9:
    FIELD_U32(a1, 1316) = 3;
    return 1;
  }
  FIELD_U32(a1, 1316) = 3;
  v6[0] = &off_60BF9CF0;
  if ( v6[2] )
    sub_608E6738(v6[2]);
  return 0;
}
