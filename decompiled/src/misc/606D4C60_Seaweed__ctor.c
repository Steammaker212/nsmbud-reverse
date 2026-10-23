/* Seaweed__ctor
 * address: 0x606D4C60   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Seaweed *__fastcall Seaweed__ctor(ActorBuildInfo *a1)
{
  Seaweed *this; // r0
  Seaweed *result; // r0

  this = (Seaweed *)operator_new(0x298u);
  result = (Seaweed *)StageActor__ctor(&FIELD_U32(this, 0x0), a1);
  FIELD_U32(result, 0x0) = (int)Seaweed_vtable;
  FIELD_U32(result, 0x284)[0] = 0;
  FIELD_U32(result, 0x284)[1] = 0;
  FIELD_U32(result, 0x284)[2] = 0;
  FIELD_U32(result, 0x290) = 0;
  FIELD_U32(result, 0x294) = 0;
  return result;
}
