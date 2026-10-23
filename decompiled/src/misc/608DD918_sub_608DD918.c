/* sub_608DD918
 * address: 0x608DD918   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608DD918(int a1)
{
  *(_DWORD *)a1 = off_60C5BD18;
  FIELD_U32(a1, 4) = &off_60C5BD60;
  FIELD_U32(a1, 8) = 0;
  FIELD_U32(a1, 12) = 0;
  sub_608AD2C8(a1 + 16);
  FIELD_U32(a1, 116) = 0;
  FIELD_U32(a1, 120) = 0;
  FIELD_U8(a1, 124) = 0;
  FIELD_U32(a1, 128) = a1 + 128;
  FIELD_U32(a1, 132) = a1 + 128;
  FIELD_U32(a1, 136) = 0;
  FIELD_U32(a1, 140) = -1;
  sead__CriticalSection__ctor((sead_IDisposer *)(a1 + 144));
  FIELD_U32(a1, 180) = 0;
  FIELD_U8(a1, 184) = 0;
  FIELD_U32(a1, 188) = 17;
  FIELD_U8(a1, 192) = 1;
  FIELD_U32(a1, 140) = 4;
  return a1;
}
