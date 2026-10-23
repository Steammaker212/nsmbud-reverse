/* BrosBase__vf2E4
 * address: 0x60264FEC   size: 160   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall BrosBase__vf2E4(int result)
{
  float v1; // s4
  float v2; // s0
  float v3; // s2
  int v4; // r1
  int v5; // r1

  v1 = FIELD_F32(result, 120);
  v2 = FIELD_F32(result, 108);
  v3 = FIELD_F32(result, 6592);
  if ( FIELD_U32(result, 80) )
  {
    if ( v1 >= 0.0 )
    {
      v4 = 6580;
      goto LABEL_6;
    }
    v5 = 6576;
LABEL_10:
    if ( v2 > (float)(v3 - *(float *)(result + v5)) )
      return result;
    goto LABEL_11;
  }
  if ( v1 < 0.0 )
  {
    v5 = 6580;
    goto LABEL_10;
  }
  v4 = 6576;
LABEL_6:
  if ( v2 < (float)(v3 + *(float *)(result + v4)) )
    return result;
LABEL_11:
  FIELD_U8(result, 6604) ^= 1u;
  return (*(int (__fastcall **)(int))(*(_DWORD *)result + 720))(result);
}
