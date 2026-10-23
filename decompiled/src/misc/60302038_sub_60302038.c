/* sub_60302038
 * address: 0x60302038   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60302038(int a1, float a2)
{
  int v3; // r0
  int *v4; // r5
  float v5; // s0
  _DWORD *v6; // r0
  int v7; // r1
  unsigned int v8; // r2
  unsigned int v9; // r0
  int result; // r0

  v4 = (int *)(a1 + 8484);
  v3 = FIELD_U32(a1, 8484);
  if ( !v3 )
  {
    CollisionActor__handleGravity((CollisionActor *)a1);
    v5 = CollisionActor__handleSpeed((CollisionActor *)a1);
    a2 = CollisionMgr_process((_BYTE *)(a1 + 648), v5);
    if ( (FIELD_U8(a1, 2872) & 1) != 0 )
      FIELD_U32(a1, 124) = 0;
    v3 = *v4;
  }
  if ( v3 != 1 )
    a2 = CollisionMgr_process((_BYTE *)(a1 + 648), a2);
  v6 = *(_DWORD **)(a1 + 6300);
  v7 = v6[3];
  v8 = v6[2];
  v9 = v6[17];
  if ( v8 > v9 )
    v7 += 4 * v9;
  result = *(unsigned __int8 *)(*(_DWORD *)v7 + 28);
  if ( (result & 0x20) != 0 )
    return (*(int (__fastcall **)(int, float))(*(_DWORD *)a1 + 656))(a1, a2);
  return result;
}
