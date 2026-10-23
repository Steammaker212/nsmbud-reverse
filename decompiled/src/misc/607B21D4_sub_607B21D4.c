/* sub_607B21D4
 * address: 0x607B21D4   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607B21D4(int a1)
{
  int result; // r0
  float v3; // s0
  int v4; // r0
  float v5; // s0
  int v6; // r1

  FIELD_U32(a1, 1212) |= 0x20000u;
  result = sub_60793CA8(FIELD_U32(a1, 11360));
  if ( result == 1 )
  {
    if ( sub_6075EDF8(a1) )
    {
      FIELD_U32(a1, 1212) &= ~0x40000u;
      v3 = sub_6079B208((_DWORD *)a1);
      v4 = FIELD_U32(a1, 108);
      v5 = FIELD_F32(a1, 112) - v3;
      FIELD_F32(a1, 112) = v5;
      v6 = FIELD_U32(a1, 116);
      FIELD_U32(a1, 584) = v4;
      FIELD_F32(a1, 588) = v5;
      FIELD_U32(a1, 592) = v6;
      FIELD_U32(a1, 608) = v4;
      FIELD_F32(a1, 612) = v5;
      FIELD_U32(a1, 616) = v6;
      FIELD_U32(a1, 11480) = 10;
      return Player_changeState(a1, (StateBase *)&dword_60CC4F2C, 3);
    }
    else
    {
      sub_60794954(a1 + 11356, 66, 0.0, 0.0);
      FIELD_U32(a1, 1212) &= ~0x40000u;
      FIELD_U32(a1, 9940) = 3;
      return 9940;
    }
  }
  return result;
}
