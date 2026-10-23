/* sub_601561AC
 * address: 0x601561AC   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601561AC(int a1, int a2, int a3)
{
  int v4; // r1

  if ( a3 != 2 )
  {
    if ( a3 != 3 )
      return (*(int (__fastcall **)(int, float))(*(_DWORD *)a1 + 28))(
               a1,
               (float)(*(float *)(FIELD_U32(a2, 152) + 4) + FIELD_F32(a2, 176)) + FIELD_F32(a2, 208));
    return FIELD_U32(a1, 2196);
  }
  v4 = FIELD_S8(a1, 5360);
  if ( (unsigned __int8)v4 == 255 )
    return FIELD_U32(a1, 2196);
  if ( (unsigned __int8)v4 >= 4u )
    v4 = 0;
  return *(_DWORD *)(PlayerMgr_instance + 4 * v4 + 32);
}
