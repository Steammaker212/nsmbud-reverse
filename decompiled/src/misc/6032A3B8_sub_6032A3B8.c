/* sub_6032A3B8
 * address: 0x6032A3B8   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6032A3B8(int a1)
{
  int v2; // r1
  int v3; // r0
  int *v4; // r1
  _DWORD *v5; // r4
  int *v6; // r2
  int *v7; // r0
  int v8; // s2
  int v9; // r0
  int result; // r0

  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BEBA04, 0);
  FIELD_U32(a1, 320) = 1;
  FIELD_U32(a1, 87268) = 0;
  FIELD_U32(a1, 87272) = 0;
  FIELD_U32(a1, 87276) = 1121976320;
  FIELD_U32(a1, 87280) = 1121976320;
  v2 = FIELD_U32(a1, 87268);
  FIELD_U32(a1, 308) = FIELD_U32(a1, 87272);
  FIELD_U32(a1, 304) = v2;
  v3 = FIELD_U32(a1, 87276);
  FIELD_U32(a1, 316) = FIELD_U32(a1, 87280);
  FIELD_U32(a1, 312) = v3;
  ActiveCollider__init((ActiveCollider *)(a1 + 86964), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BEBA04, 0);
  FIELD_U32(a1, 87284) = 0;
  v4 = (int *)(a1 + 87284);
  FIELD_U32(a1, 87288) = 0;
  v5 = (_DWORD *)(a1 + 87288);
  v6 = dword_6032A4D8;
  v7 = dword_6032A4E0;
  if ( *(v5 - 21802) < 2u )
  {
    v6 = &dword_6032A4D8[1];
    v7 = &dword_6032A4E0[1];
  }
  v8 = *v6;
  v5[1] = *v7;
  v5[2] = v8;
  v9 = *v4;
  *(v5 - 51) = *v5;
  *(v5 - 52) = v9;
  result = v5[1];
  *(v5 - 49) = v5[2];
  *(v5 - 50) = result;
  return result;
}
