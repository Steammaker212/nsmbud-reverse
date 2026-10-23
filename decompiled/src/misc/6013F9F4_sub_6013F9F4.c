/* sub_6013F9F4
 * address: 0x6013F9F4   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6013F9F4(int a1)
{
  _BYTE *v2; // r0
  int v3; // r1
  int v4; // t1
  int v5; // r0
  unsigned int v6; // r0
  float v7; // s0

  v4 = FIELD_U8(a1, 11845);
  v2 = (_BYTE *)(a1 + 11845);
  v3 = v4;
  if ( *(v2 - 5745) )
  {
    if ( !v3 )
    {
      *v2 = 1;
      FIELD_U32(a1, 136) = -1077936128;
      if ( FIELD_F32(a1, 124) <= -1.5 )
        FIELD_U32(a1, 124) = -1077936128;
      v5 = -1115684864;
      goto LABEL_8;
    }
  }
  else if ( v3 )
  {
    *v2 = 0;
    FIELD_U32(a1, 136) = -1061158912;
    v5 = -1107296256;
LABEL_8:
    FIELD_U32(a1, 100) = v5;
  }
  CollisionActor__handleGravity((CollisionActor *)a1);
  if ( FIELD_U32(a1, 11900) == 2 )
  {
    if ( (nullsub_7(a1 + 6472), v6 = FIELD_U32(a1, 8696), (v6 & 0x10400) == 0x400)
      || (v6 & 0x440000) != 0 && (v6 & 0x10000000) == 0
      || !(((v6 & 0x880000) == 0) | (v6 >> 29) & 1)
      || (v6 & 1) != 0 )
    {
      FIELD_U32(a1, 120) = 0;
      FIELD_U32(a1, 124) = 0;
    }
  }
  v7 = CollisionActor__handleSpeed((CollisionActor *)a1);
  return (*(int (__fastcall **)(int, float))(*(_DWORD *)a1 + 196))(a1, v7);
}
