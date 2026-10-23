/* sub_60193D64
 * address: 0x60193D64   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60193D64(int a1)
{
  sub_601861EC((Actor *)a1);
  Animation_update(**(_DWORD **)(FIELD_U32(a1, 268) + 12));
  if ( (FIELD_U8(a1, 216) & 8) == 0 )
    ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 268));
  return 1;
}
