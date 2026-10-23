/* sub_60766858
 * address: 0x60766858   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool sub_60766858()
{
  _DWORD *v0; // r1
  int v1; // r0
  int v2; // r1
  _BOOL4 result; // r0
  int v4; // r0
  int v5; // r1
  int v6; // r0
  int v7; // r1
  int v8; // r0

  v0 = (_DWORD *)PlayerMgr_instance;
  v1 = FIELD_U32(PlayerMgr_instance, 32);
  if ( v1 )
  {
    v2 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v1 + 640))(v1, 5);
    result = 1;
    if ( v2 )
      return result;
    v0 = (_DWORD *)PlayerMgr_instance;
  }
  v4 = v0[9];
  if ( v4 )
  {
    v5 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v4 + 640))(v4, 5);
    result = 1;
    if ( v5 )
      return result;
    v0 = (_DWORD *)PlayerMgr_instance;
  }
  v6 = v0[10];
  if ( v6 )
  {
    v7 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v6 + 640))(v6, 5);
    result = 1;
    if ( v7 )
      return result;
    v0 = (_DWORD *)PlayerMgr_instance;
  }
  v8 = v0[11];
  return v8 && (*(int (__fastcall **)(int, int))(*(_DWORD *)v8 + 640))(v8, 5) != 0;
}
