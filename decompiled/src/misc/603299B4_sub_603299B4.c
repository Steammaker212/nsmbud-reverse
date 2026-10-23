/* sub_603299B4
 * address: 0x603299B4   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603299B4(int a1)
{
  int v2; // r1
  int v3; // r0
  int v4; // s0
  int *v5; // r1
  int v6; // s4
  _DWORD *v7; // r4
  int v8; // r0
  int result; // r0

  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BEB70C, 0);
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
  ActiveCollider__init((ActiveCollider *)(a1 + 86964), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BEB70C, 0);
  v4 = 1115684864;
  FIELD_U32(a1, 87284) = 0;
  v5 = (int *)(a1 + 87284);
  v6 = 1121976320;
  FIELD_U32(a1, 87288) = 0;
  v7 = (_DWORD *)(a1 + 87288);
  if ( *(v7 - 21802) < 2u )
  {
    v6 = 1115684864;
    v4 = 1121976320;
  }
  v7[1] = v6;
  v7[2] = v4;
  v8 = *v5;
  *(v7 - 51) = *v7;
  *(v7 - 52) = v8;
  result = v7[1];
  *(v7 - 49) = v7[2];
  *(v7 - 50) = result;
  return result;
}
