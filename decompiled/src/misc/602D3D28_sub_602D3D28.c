/* sub_602D3D28
 * address: 0x602D3D28   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602D3D28(int a1)
{
  int v2; // r5
  float v3; // s0
  float v4; // s0
  int v5; // r1
  unsigned int v6; // r0
  int result; // r0

  v2 = a1 + 6856;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6856));
  CollisionActor__handleGravity((CollisionActor *)a1);
  v3 = CollisionActor__handleSpeed((CollisionActor *)a1);
  v4 = CollisionMgr_process((_BYTE *)(a1 + 648), v3);
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    FIELD_U32(a1, 124) = 0;
  v5 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v6 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v6 )
    v5 += 4 * v6;
  result = *(unsigned __int8 *)(*(_DWORD *)v5 + 28);
  if ( (result & 0x20) != 0 )
    return (*(int (__fastcall **)(int, int *, float))(*(_DWORD *)a1 + 192))(a1, &dword_60C91BC0, v4);
  return result;
}
