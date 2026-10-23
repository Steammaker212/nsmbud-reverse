/* sub_60361430
 * address: 0x60361430   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ColliderBase *__fastcall sub_60361430(int a1)
{
  ColliderBase *v1; // r4

  v1 = (ColliderBase *)a1;
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6300));
  v1 = (ColliderBase *)((char *)v1 + 6328);
  sub_601601B8(v1);
  return sub_601603E8(v1);
}
