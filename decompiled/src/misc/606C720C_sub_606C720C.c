/* sub_606C720C
 * address: 0x606C720C   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606C720C(int a1)
{
  FIELD_U32(a1, 7176) = 0;
  FIELD_U16(a1, 7090) = 0;
  FIELD_U32(a1, 136) = -1065353216;
  FIELD_U32(a1, 100) = -1103101952;
  FIELD_U32(a1, 124) = 1077936128;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 1098907648;
  ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6112));
  FIELD_U32(a1, 7056) = 0;
  FIELD_U32(a1, 7060) = 0;
  return 7060;
}
