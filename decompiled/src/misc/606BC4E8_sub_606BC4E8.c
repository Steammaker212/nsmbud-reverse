/* sub_606BC4E8
 * address: 0x606BC4E8   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606BC4E8(int a1)
{
  int v1; // r4
  ActiveCollider *v2; // r5
  ActiveColliderMgr *v3; // r6

  FIELD_U32(a1, 328) = 9;
  FIELD_F32(a1, 120) = (float)byte_60B057DC[FIELD_U32(a1, 80)] * 1.1;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 100) = -1102263091;
  v1 = a1 + 6304;
  FIELD_U32(a1, 6304) |= 0x1000u;
  v2 = (ActiveCollider *)(a1 + 188);
  v3 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188));
  ActiveColldierMgr_removeFromCreateList(v3, v2);
  ActiveColldierMgr_removeFromList3(v3, (int)v2);
  *(_BYTE *)(v1 - 248) = 1;
  return 1;
}
