/* sub_606817F8
 * address: 0x606817F8   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606817F8(int a1)
{
  float v2; // s0
  _DWORD *v3; // r0
  int v4; // r1
  unsigned int v5; // r2
  unsigned int v6; // r0
  int result; // r0
  float v8; // s0

  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  if ( FIELD_U32(a1, 7512) )
  {
    v3 = *(_DWORD **)(a1 + 6112);
    v4 = v3[3];
    v5 = v3[2];
    v6 = v3[17];
    if ( v5 > v6 )
      v4 += 4 * v6;
    if ( (*(_BYTE *)(*(_DWORD *)v4 + 28) & 0x20) != 0 )
      (*(void (__fastcall **)(int, float))(*(_DWORD *)a1 + 204))(a1, v2);
  }
  result = a1 + 7456;
  v8 = FIELD_F32(a1, 7456) + 200.0;
  if ( FIELD_F32(a1, 112) >= v8 )
  {
    FIELD_F32(a1, 112) = v8;
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB8258);
  }
  return result;
}
