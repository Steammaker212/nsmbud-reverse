/* CollisionActor__sub_600034C8
 * address: 0x600034C8   size: 132   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall CollisionActor__sub_600034C8(CollisionActor *this)
{
  int v2; // r1
  int result; // r0
  int v4; // r2
  float x; // s0
  int v6; // r2
  int v7; // r2

  CollisionMgr_process(FIELD_U8(this, 0x288));
  v2 = *(_DWORD *)&FIELD_U8(this, 0x288)[2224];
  result = 0;
  if ( (v2 & 1) != 0 )
  {
    FIELD_U32(this, 0x0).speed.y = 0.0;
    result = 1;
  }
  v4 = 0x40000;
  x = FIELD_U32(this, 0x0).speed.x;
  if ( (v2 & 0x10400) == 0x400 )
    result |= 2u;
  if ( x < 0.0 )
    v4 = 0x80000;
  if ( (v4 & v2) != 0 )
    goto LABEL_11;
  v6 = 0x400000;
  if ( x < 0.0 )
    v6 = 0x800000;
  if ( (v6 & v2) != 0 )
  {
LABEL_11:
    v7 = 0x10000000;
    if ( x < 0.0 )
      v7 = 0x20000000;
    if ( (v7 & v2) == 0 )
      return result | 4;
  }
  return result;
}
