/* sub_6078AFBC
 * address: 0x6078AFBC   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_6078AFBC()
{
  int v0; // r4
  int v1; // r0
  int v2; // r4
  int v3; // r0
  int v4; // r4
  int v5; // r0
  int result; // r0
  int v7; // r4
  int v8; // r0

  sub_6040B2B4(dword_60C9A1F0, FIELD_U32(dword_60C99DD4, 724));
  sub_6077A260(dword_60CBFA90);
  sub_6000A7E0(EnemyCounterMaybe_instance);
  v0 = FIELD_U32(PlayerMgr_instance, 32);
  if ( v0 )
  {
    v1 = sub_607C7184(FIELD_U32(PlayerMgr_instance, 32));
    if ( !v1 )
      v1 = v0;
    (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 1344))(v1);
  }
  v2 = FIELD_U32(PlayerMgr_instance, 36);
  if ( v2 )
  {
    v3 = sub_607C7184(FIELD_U32(PlayerMgr_instance, 36));
    if ( !v3 )
      v3 = v2;
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 1344))(v3);
  }
  v4 = FIELD_U32(PlayerMgr_instance, 40);
  if ( v4 )
  {
    v5 = sub_607C7184(FIELD_U32(PlayerMgr_instance, 40));
    if ( !v5 )
      v5 = v4;
    (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 1344))(v5);
  }
  result = PlayerMgr_instance;
  v7 = FIELD_U32(PlayerMgr_instance, 44);
  if ( v7 )
  {
    v8 = sub_607C7184(FIELD_U32(PlayerMgr_instance, 44));
    if ( !v8 )
      v8 = v7;
    return (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 1344))(v8);
  }
  return result;
}
