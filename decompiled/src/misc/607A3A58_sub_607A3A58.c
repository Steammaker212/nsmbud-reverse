/* sub_607A3A58
 * address: 0x607A3A58   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607A3A58(int a1)
{
  sub_607620B4(a1);
  if ( (FIELD_U8(a1, 6902) & 4) == 0 )
    return sub_607681C8(a1);
  sub_607BBA3C(a1);
  return sub_60766314(a1, (StateBase *)&unk_60CBF40C, 0);
}
