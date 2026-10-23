/* sub_6077A518
 * address: 0x6077A518   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_6077A518()
{
  int v0; // r4
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0

  v0 = 0;
  if ( (FIELD_U8(PlayerMgr_instance, 66) & 1) != 0 )
  {
    v0 = 0;
    v1 = sub_60788F54(PlayerMgr_instance, 0);
    if ( v1 )
      v0 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v1 + 640))(v1, 4) ^ 1;
  }
  if ( (FIELD_U8(PlayerMgr_instance, 66) & 2) != 0 )
  {
    v2 = sub_60788F54(PlayerMgr_instance, 1);
    if ( v2 )
    {
      if ( !(*(int (__fastcall **)(int, int))(*(_DWORD *)v2 + 640))(v2, 4) )
        ++v0;
    }
  }
  if ( (FIELD_U8(PlayerMgr_instance, 66) & 4) != 0 )
  {
    v3 = sub_60788F54(PlayerMgr_instance, 2);
    if ( v3 )
    {
      if ( !(*(int (__fastcall **)(int, int))(*(_DWORD *)v3 + 640))(v3, 4) )
        ++v0;
    }
  }
  if ( (FIELD_U8(PlayerMgr_instance, 66) & 8) != 0 )
  {
    v4 = sub_60788F54(PlayerMgr_instance, 3);
    if ( v4 )
    {
      if ( !(*(int (__fastcall **)(int, int))(*(_DWORD *)v4 + 640))(v4, 4) )
        ++v0;
    }
  }
  return v0;
}
