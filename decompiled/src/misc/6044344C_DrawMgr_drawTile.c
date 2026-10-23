/* DrawMgr_drawTile
 * address: 0x6044344C   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall DrawMgr_drawTile(int this, int tile, Vec3 *position, int *rotation, Vec3 *a5)
{
  float zPos; // s0
  int layer; // r1
  Vec3i rotationVec; // [sp+Ch] [bp-14h] BYREF

  zPos = FIELD_F32(position, 0x8);
  rotationVec.x = 0;
  rotationVec.y = 0;
  rotationVec.z = *rotation;
  layer = 3;
  if ( zPos < 3600.0 )
    layer = 0;
  if ( zPos < 0.0 )
    layer = 1;
  return sub_60720018(dword_60CBD830, layer, tile, position, &rotationVec, a5);
}
