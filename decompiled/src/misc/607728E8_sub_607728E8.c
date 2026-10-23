/* sub_607728E8
 * address: 0x607728E8   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607728E8(int a1)
{
  float v1; // s16
  int result; // r0

  v1 = 0.0;
  FIELD_U32(a1, 9940) = 0;
  PlayerBase_dispatchVirtual3(FIELD_U32(a1, 648), 22);
  if ( (FIELD_U8(a1, 6906) & 1) != 0 )
    v1 = flt_60B0A898[sub_6014C540(a1 + 1328)] * 4.0;
  FIELD_F32(a1, 92) = v1;
  FIELD_U32(a1, 9944) = 8;
  FIELD_U32(a1, 9968) = 0;
  FIELD_U32(a1, 1212) |= 0x400u;
  FIELD_U32(a1, 1228) |= 0x400u;
  result = FIELD_U32(a1, 1220) | 0x100;
  FIELD_U32(a1, 1220) = result;
  return result;
}
