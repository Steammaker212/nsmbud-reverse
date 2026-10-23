/* sub_60301E54
 * address: 0x60301E54   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60301E54(int a1)
{
  int *v2; // r1
  int v3; // r3
  int v4; // r0
  int v5; // r1

  v2 = dword_60301EB4;
  if ( (FIELD_U8(a1, 87) & 2) != 0 )
    v2 = &dword_60301EB4[1];
  FIELD_U32(a1, 116) = *v2;
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v3 = FIELD_U32(a1, 164);
  v4 = FIELD_U32(a1, 6284);
  v5 = dword_60AF1FD0[v4];
  if ( FIELD_U32(a1, 80) == v4 )
    v5 = -v5;
  FIELD_U32(a1, 164) = v3 + v5;
  return v3 + v5;
}
