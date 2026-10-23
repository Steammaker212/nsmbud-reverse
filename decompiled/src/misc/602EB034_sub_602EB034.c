/* sub_602EB034
 * address: 0x602EB034   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602EB034(int a1)
{
  float *v1; // r4
  ActiveCollider *v2; // r6
  ActiveColliderMgr *v3; // r5
  int v4; // r5
  float v5; // s0
  int v6; // t1

  v1 = (float *)a1;
  v2 = (ActiveCollider *)(a1 + 188);
  v3 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188));
  ActiveColldierMgr_removeFromCreateList(v3, v2);
  ActiveColldierMgr_removeFromList3(v3, (int)v2);
  v4 = *((_DWORD *)v1 + 1842);
  FIELD_U8(v4, 69) = 1;
  sub_602F4044(v5);
  v6 = *((_DWORD *)v1 + 1860);
  v1 += 1860;
  *(_DWORD *)v1 = v6 & 0xFFFFFFFC;
  *(v1 - 1834) = 0.35;
  *(v1 - 1827) = 0.0;
  *(v1 - 1829) = *(v1 - 1829) * 0.25;
  *(v1 - 1831) = -2500.0;
  *(v1 - 1819) = 0.0;
  *(v1 - 1835) = -0.1875;
  sub_602F43A0(v4);
  *((_BYTE *)v1 - 76) = 32;
  *((_BYTE *)v1 - 7356) = -1;
  return -7356;
}
