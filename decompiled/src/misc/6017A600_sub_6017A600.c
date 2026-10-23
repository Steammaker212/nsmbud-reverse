/* sub_6017A600
 * address: 0x6017A600   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6017A600(int a1)
{
  sub_601861EC(a1);
  if ( FIELD_U8(a1, 416) )
    ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 268));
  if ( (FIELD_U8(a1, 216) & 8) == 0 )
  {
    sub_6017A3E0(a1);
    if ( FIELD_U8(a1, 416) )
    {
      ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 268));
      if ( FIELD_U8(a1, 418) )
      {
        ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 272));
        ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 272));
      }
    }
    if ( FIELD_U8(a1, 419) )
    {
      ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 276));
      ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 276));
    }
  }
  return 1;
}
