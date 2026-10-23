/* sub_605EC8F0
 * address: 0x605EC8F0   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_605EC8F0(int a1)
{
  float v2; // s0
  int v3; // r0
  int v4; // r0

  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648), v2);
  StageActor__cullCheck((StageActor *)a1, 2);
  if ( v3 == 1 )
  {
    ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6104));
    v4 = FIELD_U32(a1, 6556);
    FIELD_U32(v4, 20) = 0;
    FIELD_U32(v4, 28) |= 2u;
    FIELD_U32(a1, 6596) = 0;
    FIELD_U32(a1, 144) = 0;
    FIELD_U32(a1, 148) = 0;
    FIELD_U32(a1, 152) = 0;
    (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60CB1D98);
  }
}
