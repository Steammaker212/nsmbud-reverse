/* sub_6034D990
 * address: 0x6034D990   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6034D990(int a1)
{
  float v2; // s0
  int v3; // r5
  int v4; // r0
  int result; // r0

  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648), v2);
  v3 = 0;
  sub_6039F328(a1, 0);
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
  {
    v3 = 1;
    FIELD_U32(a1, 124) = 0;
  }
  v4 = sub_603A24A8(a1, Enemy_CommonRotations[FIELD_U32(a1, 80)], dword_60C94CE8);
  result = sub_603A2430(a1, dword_60C94CE4, v3, v4);
  if ( result == 1 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C94B50);
  return result;
}
