/* sub_605A6BFC
 * address: 0x605A6BFC   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605A6BFC(int a1)
{
  int v1; // r4
  int v2; // r5
  int v3; // r5
  int v4; // r5
  int result; // r0
  int v6; // r5
  _DWORD v7[5]; // [sp+4h] [bp-14h] BYREF

  v1 = a1 + 72992;
  v2 = FIELD_U32(PlayerMgr_instance, 32);
  if ( v2 && sub_605C2F58(v1, FIELD_U32(PlayerMgr_instance, 32), v7) == 1 )
    (*(void (__fastcall **)(int, int, _DWORD, _DWORD, float, float, _DWORD))(*(_DWORD *)v2 + 1176))(
      v2,
      4,
      v7[0],
      0,
      1.0,
      4.5,
      0);
  v3 = FIELD_U32(PlayerMgr_instance, 36);
  if ( v3 && sub_605C2F58(v1, FIELD_U32(PlayerMgr_instance, 36), v7) == 1 )
    (*(void (__fastcall **)(int, int, _DWORD, _DWORD, float, float, _DWORD))(*(_DWORD *)v3 + 1176))(
      v3,
      4,
      v7[0],
      0,
      1.0,
      4.5,
      0);
  v4 = FIELD_U32(PlayerMgr_instance, 40);
  if ( v4 && sub_605C2F58(v1, FIELD_U32(PlayerMgr_instance, 40), v7) == 1 )
    (*(void (__fastcall **)(int, int, _DWORD, _DWORD, float, float, _DWORD))(*(_DWORD *)v4 + 1176))(
      v4,
      4,
      v7[0],
      0,
      1.0,
      4.5,
      0);
  result = PlayerMgr_instance;
  v6 = FIELD_U32(PlayerMgr_instance, 44);
  if ( v6 )
  {
    result = sub_605C2F58(v1, FIELD_U32(PlayerMgr_instance, 44), v7);
    if ( result == 1 )
      return (*(int (__fastcall **)(int, int, _DWORD, _DWORD, float, float, _DWORD))(*(_DWORD *)v6 + 1176))(
               v6,
               4,
               v7[0],
               0,
               1.0,
               4.5,
               0);
  }
  return result;
}
