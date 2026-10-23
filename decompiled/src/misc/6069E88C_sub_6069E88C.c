/* sub_6069E88C
 * address: 0x6069E88C   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6069E88C(int a1)
{
  int v2; // r0
  float v3; // s0

  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 192))(a1) != 1 || (StageActor__cullCheck((StageActor *)a1, 16), !v2) )
  {
    FIELD_U32(a1, 6808) = FIELD_U32(a1, 164);
    sub_6069E56C(a1 + 6104, (_DWORD *)a1);
    if ( FIELD_U8(a1, 6841) )
    {
      CollisionActor__handleGravity((CollisionActor *)a1);
      v3 = CollisionActor__handleSpeed((CollisionActor *)a1);
      CollisionMgr_process((_BYTE *)(a1 + 648), v3);
    }
  }
  return 1;
}
