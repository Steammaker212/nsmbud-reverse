/* sub_60312850
 * address: 0x60312850   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60312850(int a1)
{
  float v2; // s0
  float v3; // s0
  _DWORD *v4; // r0
  int v5; // r1
  unsigned int v6; // r2
  unsigned int v7; // r0

  FIELD_U32(a1, 120) = 0;
  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  v3 = CollisionMgr_process((_BYTE *)(a1 + 648), v2);
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    FIELD_U32(a1, 124) = 0;
  v4 = *(_DWORD **)(a1 + 6300);
  v5 = v4[3];
  v6 = v4[2];
  v7 = v4[17];
  if ( v6 > v7 )
    v5 += 4 * v7;
  if ( (*(_BYTE *)(*(_DWORD *)v5 + 28) & 0x20) != 0 )
    (*(void (__fastcall **)(int, _DWORD, float))(*(_DWORD *)a1 + 192))(a1, FIELD_U32(a1, 7620), v3);
  DryBones_checkCollapse(a1);
  FIELD_U32(a1, 7628) = 0;
  JUMPOUT(0x603171E8);
}
