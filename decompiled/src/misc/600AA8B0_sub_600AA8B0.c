/* sub_600AA8B0
 * address: 0x600AA8B0   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600AA8B0(int result)
{
  int v1; // r2
  float v2; // s6
  int v3; // r2
  float v4; // s0

  v1 = FIELD_U16(result, 6276);
  if ( (unsigned int)v1 <= 1 )
    v1 = 1;
  v2 = (float)v1;
  v3 = dword_60CC6484;
  v4 = FIELD_F32(result, 19828)
     + (float)((float)(FIELD_F32(result, 19824) - FIELD_F32(result, 19828)) * (float)(1.0 / v2));
  FIELD_F32(result, 19828) = v4;
  FIELD_F32(result, 19816) = FIELD_F32(result, 19816)
                             + (float)((float)(FIELD_F32(v3, 248) - FIELD_F32(result, 19816)) * (float)(1.0 / v2));
  FIELD_F32(result, 19820) = FIELD_F32(result, 19820)
                             + (float)((float)(FIELD_F32(v3, 252) - FIELD_F32(result, 19820)) * (float)(1.0 / v2));
  FIELD_F32(v3, 260) = v4;
  FIELD_U32(v3, 264) = FIELD_U32(result, 19816);
  FIELD_U32(v3, 268) = FIELD_U32(result, 19820);
  if ( !FIELD_U16(result, 6276) )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)result + 192))(result, &dword_60C82B04);
  return result;
}
