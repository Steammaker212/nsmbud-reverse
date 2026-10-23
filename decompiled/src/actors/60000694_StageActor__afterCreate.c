/* StageActor__afterCreate
 * address: 0x60000694   size: 48   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Actor : 0x60002F08
// 
// Overridden by:
//   - 0x60003140 : CollisionActor
void __fastcall StageActor__afterCreate(StageActor *this, unsigned int onCreateVal)
{
  float posX; // r12
  float y; // r3
  float z; // r2

  if ( onCreateVal == 2 )
  {
    posX = FIELD_F32(this, 0x6C);
    FIELD_F32(this, 0x248) = posX;
    y = FIELD_F32(this, 0x70);
    FIELD_F32(this, 0x24C) = y;
    z = FIELD_F32(this, 0x74);
    FIELD_F32(this, 0x250) = z;
    FIELD_F32(this, 0x260) = posX;
    FIELD_F32(this, 0x264) = y;
    FIELD_F32(this, 0x268) = z;
  }
  Actor__afterCreate();
}
