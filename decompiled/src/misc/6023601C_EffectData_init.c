/* EffectData_init
 * address: 0x6023601C   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall EffectData_init(EffectData *this)
{
  int *v2; // r0
  int v3; // r1
  int v4; // t1
  int v5; // r0

  v4 = FIELD_U32(this, 0x34);
  v2 = &FIELD_U32(this, 0x34);
  v3 = v4;
  if ( v4 )
  {
    if ( FIELD_U32(this, 0x38) == FIELD_U32(v3, 32) )
    {
      v5 = sub_60881DE8(v2);
      if ( FIELD_S32(v5, 352) >= 1 )
      {
        if ( FIELD_U8(v5, 8) )
          EffectData_init_helper();
      }
    }
  }
  FIELD_U32(this, 0x34) = 0;
  FIELD_U32(this, 0x38) = -1;
}
