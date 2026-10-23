/* sub_605865F8
 * address: 0x605865F8   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605865F8(int a1)
{
  int result; // r0
  float v3; // s0
  char v4; // r0
  _BYTE *v5; // r5
  int *v6; // r4
  int v7; // [sp+0h] [bp-18h] BYREF
  int target; // [sp+4h] [bp-14h] BYREF

  if ( sub_6057A3E4(a1) )
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 336))(a1);
  CollisionActor__handleGravity((CollisionActor *)a1);
  v3 = CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648), v3);
  v4 = ((int (__fastcall *)(int, _DWORD, int, float))loc_6057AC94)(a1, 0, 1, FIELD_F32(a1, 7492));
  if ( (v4 & 1) != 0 && FIELD_U32(a1, 7380) == 1 )
    FIELD_U8(a1, 7488) = 1;
  if ( (v4 & 4) != 0 )
    FIELD_F32(a1, 7492) = -FIELD_F32(a1, 7492);
  v5 = (_BYTE *)(a1 + 7488);
  result = FIELD_U8(a1, 7488);
  if ( FIELD_U8(a1, 7488) )
  {
    v6 = (int *)(a1 + 164);
    v7 = 0x4000000;
    target = 0;
    result = moveValueTo(v6, &target, &v7);
    if ( result == 1 )
    {
      *v5 = 0;
      *v6 = 0;
    }
  }
  return result;
}
