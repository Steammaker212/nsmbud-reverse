/* sub_60101718
 * address: 0x60101718   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60101718(int a1)
{
  float result; // s0
  unsigned int v2; // r0
  int v3; // r0

  result = 0.0;
  v2 = FIELD_U32(a1, 6960);
  if ( v2 <= 3 )
  {
    v3 = *(_DWORD *)(PlayerMgr_instance + 4 * v2 + 32);
    if ( v3 )
      return (float)((float)(FIELD_F32(v3, 108) - FIELD_F32(v3, 584)) * 50.0) + 0.0;
  }
  return result;
}
