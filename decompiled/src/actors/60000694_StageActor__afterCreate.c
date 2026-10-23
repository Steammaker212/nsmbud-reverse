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
    posX = FIELD_U32(this, 0x6C).x;
    FIELD_U32(this, 0x248).x = posX;
    y = FIELD_U32(this, 0x6C).y;
    FIELD_U32(this, 0x248).y = y;
    z = FIELD_U32(this, 0x6C).z;
    FIELD_U32(this, 0x248).z = z;
    FIELD_U32(this, 0x260).x = posX;
    FIELD_U32(this, 0x260).y = y;
    FIELD_U32(this, 0x260).z = z;
  }
  Actor__afterCreate();
}
