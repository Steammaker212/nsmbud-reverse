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

  xSpeed = FIELD_U32(result, 0x78).x;
  xSpeedMax = FIELD_U32(result, 0x84).x;
  if ( xSpeed >= xSpeedMax )
  {
    if ( xSpeed > xSpeedMax )
    {
      xSpeed = xSpeed - FIELD_F32(result, 0x68);
      if ( xSpeed < xSpeedMax )
        xSpeed = FIELD_U32(result, 0x84).x;
    }
    FIELD_U32(result, 0x78).x = xSpeed;
  }
  else
  {
    xSpeedNew = xSpeed + FIELD_F32(result, 0x68);
    if ( xSpeedNew > xSpeedMax )
      xSpeedNew = FIELD_U32(result, 0x84).x;
    FIELD_U32(result, 0x78).x = xSpeedNew;
  }
  return result;
}
