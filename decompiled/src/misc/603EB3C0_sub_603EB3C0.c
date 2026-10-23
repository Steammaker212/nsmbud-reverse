/* sub_603EB3C0
 * address: 0x603EB3C0   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_603EB3C0(int a1)
{
  _DWORD *result; // r0
  int v3; // r5
  int v4; // r5
  int v5; // r5
  int v6; // r5

  result = (_DWORD *)PlayerMgr_instance;
  v3 = FIELD_U32(PlayerMgr_instance, 32);
  if ( v3 )
  {
    sub_60768D14(FIELD_U32(PlayerMgr_instance, 32), FIELD_F32(v3, 108) > *(float *)(FIELD_U32(a1, 24) + 108));
    sub_60768F98(v3, 1);
    result = (_DWORD *)PlayerMgr_instance;
  }
  v4 = result[9];
  if ( v4 )
  {
    sub_60768D14(result[9], FIELD_F32(v4, 108) > *(float *)(FIELD_U32(a1, 24) + 108));
    sub_60768F98(v4, 1);
    result = (_DWORD *)PlayerMgr_instance;
  }
  v5 = result[10];
  if ( v5 )
  {
    sub_60768D14(result[10], FIELD_F32(v5, 108) > *(float *)(FIELD_U32(a1, 24) + 108));
    sub_60768F98(v5, 1);
    result = (_DWORD *)PlayerMgr_instance;
  }
  v6 = result[11];
  if ( v6 )
  {
    sub_60768D14(result[11], FIELD_F32(v6, 108) > *(float *)(FIELD_U32(a1, 24) + 108));
    return (_DWORD *)sub_60768F98(v6, 1);
  }
  return result;
}
