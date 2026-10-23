/* sub_605B0124
 * address: 0x605B0124   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605B0124(int result)
{
  bool *v1; // r4
  float v2; // s16
  float v3; // s18
  _DWORD v4[10]; // [sp+0h] [bp-28h] BYREF

  v1 = (bool *)(result + 6840);
  v2 = FIELD_F32(result, 112);
  v3 = FIELD_F32(TileMgr_instance, 24);
  if ( FIELD_U8(result, 6840) != v2 <= v3 )
  {
    v4[0] = FIELD_U32(result, 108);
    *(float *)&v4[1] = v3;
    result = TileMgr_splashRelated(TileMgr_instance, v4, 4);
    *v1 = v2 <= v3;
  }
  return result;
}
