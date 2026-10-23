/* sub_600F891C
 * address: 0x600F891C   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600F891C(int a1)
{
  signed int v2; // r0
  int v3; // r1

  FIELD_U32(a1, 116) = 1161936896;
  FIELD_U32(a1, 6132) = FIELD_U32(a1, 108);
  happy_end_st_wait_ref(a1);
  v2 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 80) = v2;
  v3 = dword_60C85BBC;
  if ( v2 )
    v3 = -dword_60C85BBC;
  FIELD_U32(a1, 160) = v3;
  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C85BD8);
  face_1_ref_F8AB0(a1);
  return 1;
}
