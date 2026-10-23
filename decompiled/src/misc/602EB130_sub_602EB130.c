/* sub_602EB130
 * address: 0x602EB130   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602EB130(int a1)
{
  float v2; // s0
  float v3; // s0
  int result; // r0
  int v5; // [sp+4h] [bp-14h] BYREF

  StageActor__accelerateX((StageActor *)a1);
  if ( FIELD_U32(a1, 7520) )
  {
    if ( ((float (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 124, -0.33, 0.3, 0.75, 0.0) < 0.25 )
      FIELD_U32(a1, 124) = -1096223293;
  }
  else
  {
    CollisionActor__handleGravity((CollisionActor *)a1);
  }
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  v3 = CollisionMgr_process((_BYTE *)(a1 + 648), v2);
  ((void (__fastcall *)(int *, int, int, int, float, _DWORD))physics_21893E8)(
    &v5,
    a1 + 7432,
    a1 + 7504,
    a1 + 108,
    v3,
    FIELD_U8(a1, 86));
  result = v5;
  FIELD_U32(a1, 7520) = v5;
  return result;
}
