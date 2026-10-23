/* sub_6034A364
 * address: 0x6034A364   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6034A364(int a1)
{
  float v2; // s0
  int result; // r0

  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648), v2);
  sub_6039F328(a1, 0);
  if ( (FIELD_U32(a1, 2872) & 0x10400) == 0x400 )
    FIELD_U32(a1, 124) = 0;
  result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 724))(a1);
  if ( result == 1 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C94B90);
  return result;
}
