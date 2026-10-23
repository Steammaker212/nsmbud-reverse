/* Seaweed_onExecute
 * address: 0x606D4F08   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall Seaweed_onExecute(Seaweed *this)
{
  int v2; // r5
  int v3; // r0
  ModelWrapper **v4; // r6

  if ( FIELD_U32(this, 0x294) >= 1 )
  {
    v2 = 0;
    do
    {
      v3 = 0;
      if ( (unsigned int)v2 < 3 )
        v3 = v2;
      v4 = (ModelWrapper **)(&FIELD_U32(this, 0x0)._.vtable + v3);
      ModelWrapper_updateAnims(v4[0xA1]);
      ModelWrapper_updateModel(v4[0xA1]);
      ++v2;
    }
    while ( v2 < FIELD_U32(this, 0x294) );
  }
  return 1;
}
