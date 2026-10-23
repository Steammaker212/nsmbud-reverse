/* sub_6006D134
 * address: 0x6006D134   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6006D134(int a1)
{
  int v2; // r5
  int v3; // r1
  unsigned int v4; // r0
  int result; // r0
  int v6; // [sp+0h] [bp-18h] BYREF
  int target; // [sp+4h] [bp-14h] BYREF

  v2 = a1 + 7112;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7112));
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 7116));
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648));
  target = dword_60C817A0;
  v6 = dword_60C817A4;
  moveValueTo((int *)(a1 + 26108), &target, &v6);
  FIELD_U32(a1, 160) += FIELD_U32(a1, 26108);
  v3 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v4 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v4 )
    v3 += 4 * v4;
  result = *(unsigned __int8 *)(*(_DWORD *)v3 + 28);
  if ( (result & 0x20) != 0 )
  {
    FIELD_U32(a1, 7144) &= ~1u;
    result = FIELD_U8(a1, 2872);
    if ( (result & 1) != 0 )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C815EC);
  }
  return result;
}
