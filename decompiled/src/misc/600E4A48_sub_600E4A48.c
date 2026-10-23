/* sub_600E4A48
 * address: 0x600E4A48   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600E4A48(CollisionActor *a1)
{
  CollisionActor *v1; // r4

  v1 = a1;
  CollisionActor__handleGravity(a1);
  CollisionActor__handleSpeed(v1);
  FIELD_U32(v1, 0xA4) += (int)(float)((float)(v1[1]._.field_1EC * 2147500000.0) / 180.0);
  FIELD_U8(v1, 0x288)[2224] = 0;
  v1 = (CollisionActor *)((char *)v1 + 2872);
  LOBYTE(FIELD_U32(v1, 0x4)) = 0;
  v1 = (CollisionActor *)((char *)v1 + 4);
  HIBYTE(FIELD_U32(v1, 0x0)) = 0;
  BYTE2(FIELD_U32(v1, 0x0)) = 0;
  BYTE1(FIELD_U32(v1, 0x0)) = 0;
  HIBYTE(v1[-1].field_17AC) = 0;
  BYTE2(v1[-1].field_17AC) = 0;
  BYTE1(v1[-1].field_17AC) = 0;
  return 0;
}
