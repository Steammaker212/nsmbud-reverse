/* sub_60154C70
 * address: 0x60154C70   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60154C70(int a1)
{
  int v2; // r2
  int v3; // r3
  int v4; // r4
  int v5; // r5
  _DWORD *v6; // r7
  int v7; // r3
  int v8; // r4
  int v9; // r3
  int v10; // r4
  int v11; // r5
  int result; // r0
  unsigned int v13; // r1
  _DWORD *v14; // r6
  unsigned int v15; // t1
  int v16; // r0

  CollisionMgr_vf18((_BYTE *)a1);
  v2 = FIELD_U32(a1, 5380);
  v3 = FIELD_U32(a1, 5384);
  v4 = FIELD_U32(a1, 5388);
  v5 = FIELD_U32(a1, 5392);
  FIELD_U32(a1, 5396) = FIELD_U32(a1, 5376);
  FIELD_U32(a1, 5400) = v2;
  FIELD_U32(a1, 5404) = v3;
  FIELD_U32(a1, 5408) = v4;
  FIELD_U32(a1, 5412) = v5;
  FIELD_U32(a1, 5480) = FIELD_U32(a1, 5424);
  FIELD_U32(a1, 5476) = FIELD_U32(a1, 5420);
  v6 = (_DWORD *)(a1 + 5416);
  FIELD_U32(a1, 5472) = FIELD_U32(a1, 5416);
  FIELD_U32(a1, 5484) = FIELD_U32(a1, 5428);
  FIELD_U32(a1, 5488) = FIELD_U32(a1, 5432);
  FIELD_U32(a1, 5492) = FIELD_U32(a1, 5436);
  FIELD_U32(a1, 5496) = FIELD_U32(a1, 5440);
  v7 = FIELD_U32(a1, 5448);
  v8 = FIELD_U32(a1, 5452);
  FIELD_U32(a1, 5500) = FIELD_U32(a1, 5444);
  FIELD_U32(a1, 5504) = v7;
  FIELD_U32(a1, 5508) = v8;
  v9 = FIELD_U32(a1, 5460);
  v10 = FIELD_U32(a1, 5464);
  v11 = FIELD_U32(a1, 5468);
  result = 5532;
  FIELD_U32(a1, 5512) = FIELD_U32(a1, 5456);
  FIELD_U32(a1, 5516) = v9;
  FIELD_U32(a1, 5520) = v10;
  FIELD_U32(a1, 5524) = v11;
  v15 = FIELD_U32(a1, 5532);
  v14 = (_DWORD *)(a1 + 5532);
  v13 = v15;
  if ( v15 )
  {
    v16 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v13);
    if ( !v16 || (result = FIELD_U8(v16, 19)) != 0 )
    {
      *v14 = 0;
      return (int)sub_6014A278(v6);
    }
  }
  return result;
}
