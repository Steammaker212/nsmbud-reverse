/* sub_600A69D0
 * address: 0x600A69D0   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600A69D0(int a1)
{
  int v2; // r0
  int result; // r0
  void *v4; // r1

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  CollisionMgr_process((_BYTE *)(a1 + 648));
  FIELD_U32(a1, 7124) = sub_600B2FD4(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1040))(a1);
  FIELD_U32(a1, 80) = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  v2 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1108))(a1);
  sub_600B33DC(a1, v2);
  result = FIELD_U16(a1, 6276);
  if ( !FIELD_U16(a1, 6276) )
  {
    if ( FIELD_S32(a1, 7180) < 1 )
      v4 = &unk_60C82C78;
    else
      v4 = &unk_60C82CD8;
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, v4);
  }
  return result;
}
