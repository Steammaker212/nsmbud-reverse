/* sub_600A5378
 * address: 0x600A5378   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600A5378(int a1)
{
  int v2; // r0
  int result; // r0

  CollisionMgr_process((_BYTE *)(a1 + 648));
  FIELD_U32(a1, 80) = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  v2 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1108))(a1);
  sub_600B33DC(a1, v2);
  result = FIELD_U16(a1, 6276);
  if ( !FIELD_U16(a1, 6276) )
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C82BA8);
  return result;
}
