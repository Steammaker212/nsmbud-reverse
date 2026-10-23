/* sub_60087458
 * address: 0x60087458   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60087458(CollisionActor *a1)
{
  int result; // r0

  CollisionActor__handleGravity(a1);
  CollisionActor__handleSpeed(a1);
  CollisionMgr_process(FIELD_U8(a1, 0x288));
  if ( (FIELD_U8(a1, 0x288)[2224] & 1) != 0 )
    return (*(int (__fastcall **)(CollisionActor *, void *))(FIELD_U32(a1, 0x0) + 192))(a1, &unk_60C81E0C);
  result = dword_60CC6484;
  if ( (float)(FIELD_F32(a1, 0x70) + 36.0) <= FIELD_F32(dword_60CC6484, 132) )
    return (*(int (__fastcall **)(CollisionActor *, void *))(FIELD_U32(a1, 0x0) + 192))(a1, &unk_60C81E0C);
  return result;
}
