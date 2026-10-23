/* StageActor__accelerateX
 * address: 0x60000FA8   size: 84   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StageActor *__fastcall StageActor__accelerateX(StageActor *result)
{
  float xSpeed; // s0
  float xSpeedMax; // s2
  float xSpeedNew; // s0

  xSpeed = FIELD_F32(result, 0x78);
  xSpeedMax = FIELD_F32(result, 0x84);
  if ( xSpeed >= xSpeedMax )
  {
    if ( xSpeed > xSpeedMax )
    {
      xSpeed = xSpeed - FIELD_F32(result, 0x68);
      if ( xSpeed < xSpeedMax )
        xSpeed = FIELD_F32(result, 0x84);
    }
    FIELD_F32(result, 0x78) = xSpeed;
  }
  else
  {
    xSpeedNew = xSpeed + FIELD_F32(result, 0x68);
    if ( xSpeedNew > xSpeedMax )
      xSpeedNew = FIELD_F32(result, 0x84);
    FIELD_F32(result, 0x78) = xSpeedNew;
  }
  return result;
}
