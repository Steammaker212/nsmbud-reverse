/* sub_60515690
 * address: 0x60515690   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60515690(int a1)
{
  sub_60514AA4(a1);
  *(_DWORD *)a1 = off_60BFF944;
  sub_60514AA4(a1 + 14984);
  FIELD_U32(a1, 14984) = off_60BFF96C;
  FIELD_U32(a1, 29968) = 21;
  FIELD_U8(a1, 29972) = 0;
  return a1;
}
