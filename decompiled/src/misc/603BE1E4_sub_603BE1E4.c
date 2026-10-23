/* sub_603BE1E4
 * address: 0x603BE1E4   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603BE1E4(int a1)
{
  int v2; // r1
  int v3; // r5
  _BOOL4 v4; // r0

  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionActor__sub_600034C8((CollisionActor *)a1);
  sub_6039F328(a1, 0);
  v2 = 786432000;
  v3 = FIELD_U32(a1, 2872);
  if ( FIELD_U32(a1, 80) == 1 )
    v2 = -786432000;
  v4 = sub_603A24A8(a1, v2, dword_60C98440);
  if ( sub_603A2430(a1, dword_60C98444, v3 & 1, v4) == 1 )
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C982F0);
  return Animation_update(**(_DWORD **)(FIELD_U32(a1, 6824) + 12));
}
