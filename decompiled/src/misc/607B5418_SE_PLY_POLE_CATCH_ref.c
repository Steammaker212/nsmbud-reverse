/* SE_PLY_POLE_CATCH_ref
 * address: 0x607B5418   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall SE_PLY_POLE_CATCH_ref(int a1)
{
  unsigned int result; // r0

  FIELD_U32(a1, 1212) |= 0x8000u;
  FIELD_U32(a1, 1228) |= 0x400u;
  FIELD_U32(a1, 1224) |= 0x400u;
  FIELD_U32(a1, 100) = 0;
  FIELD_U32(a1, 88) = 0;
  FIELD_U32(a1, 104) = 0;
  FIELD_U32(a1, 92) = 0;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 96) = -1065353216;
  FIELD_U32(a1, 160) = sub_60773FCC(a1, FIELD_U32(a1, 80));
  FIELD_F32(a1, 12384) = (float)((float)(int)(float)(FIELD_F32(a1, 108) * 0.0625) * 16.0) + 8.0;
  if ( (FIELD_U8(a1, 6907) & 4) != 0 )
    FIELD_U32(a1, 12388) = FIELD_U32(a1, 112);
  if ( (FIELD_U8(a1, 6900) & 1) != 0 )
  {
    FIELD_U32(a1, 9940) = 2;
    PlayerBase_dispatchVirtual3(a1 + 11356, 47, 0.0);
    FIELD_U32(a1, 124) = 1065353216;
    FIELD_U32(a1, 6900) &= ~1u;
    FIELD_U32(a1, 80) ^= 1u;
    result = FIELD_U32(a1, 1228) & 0xFFFFFBFF;
    FIELD_U32(a1, 1228) = result;
  }
  else
  {
    PlayerBase_dispatchVirtual3(a1 + 11356, 45, 0.0);
    sub_607734E8((unsigned __int8 *)a1, (int)"SE_PLY_POLE_CATCH", 0, 0);
    sub_60773630(a1, 28, 0);
    FIELD_U32(a1, 9940) = 0;
    return 9940;
  }
  return result;
}
