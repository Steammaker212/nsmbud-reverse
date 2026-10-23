/* sub_60299268
 * address: 0x60299268   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool sub_60299268()
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
    v2 = sub_60766708(v1);
    result = 1;
    if ( v2 )
      return result;
    v0 = (_DWORD *)PlayerMgr_instance;
  }
  v4 = v0[9];
  if ( v4 )
  {
    v5 = sub_60766708(v4);
    result = 1;
    if ( v5 )
      return result;
    v0 = (_DWORD *)PlayerMgr_instance;
  }
  v6 = v0[10];
  if ( v6 )
  {
    v7 = sub_60766708(v6);
    result = 1;
    if ( v7 )
      return result;
    v0 = (_DWORD *)PlayerMgr_instance;
  }
  v8 = v0[11];
  return v8 && sub_60766708(v8) != 0;
}
