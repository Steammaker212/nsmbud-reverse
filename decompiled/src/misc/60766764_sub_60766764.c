/* sub_60766764
 * address: 0x60766764   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60766764(int a1)
{
  _DWORD *v2; // r1
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0

  v2 = (_DWORD *)PlayerMgr_instance;
  v3 = FIELD_U32(PlayerMgr_instance, 32);
  if ( v3 )
  {
    if ( (*(int (__fastcall **)(int, int))(*(_DWORD *)v3 + 640))(v3, 5) )
      return 1;
    v2 = (_DWORD *)PlayerMgr_instance;
  }
  v4 = v2[9];
  if ( v4 )
  {
    if ( (*(int (__fastcall **)(int, int))(*(_DWORD *)v4 + 640))(v4, 5) )
      return 1;
    v2 = (_DWORD *)PlayerMgr_instance;
  }
  v5 = v2[10];
  if ( v5 )
  {
    if ( !(*(int (__fastcall **)(int, int))(*(_DWORD *)v5 + 640))(v5, 5) )
    {
      v2 = (_DWORD *)PlayerMgr_instance;
      goto LABEL_10;
    }
    return 1;
  }
LABEL_10:
  v6 = v2[11];
  if ( v6 && (*(int (__fastcall **)(int, int))(*(_DWORD *)v6 + 640))(v6, 5) )
    return 1;
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 636))(a1);
}
