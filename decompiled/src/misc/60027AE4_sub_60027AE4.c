/* sub_60027AE4
 * address: 0x60027AE4   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60027AE4(int result)
{
  int v1; // r1
  int v2; // r3

  FIELD_U8(EnemyCounterMaybe_instance, 20) = 1;
  v1 = dword_60C99DD4;
  if ( FIELD_U32(dword_60C99DD4, 764) != 1 )
  {
    v2 = dword_60C99D88;
    FIELD_U32(dword_60C99D88, 32) = 1;
    FIELD_U8(v2, 31) = 0;
  }
  FIELD_U32(v1, 1376) |= 2u;
  FIELD_U32(PlayerMgr_instance, 140) = -1;
  FIELD_U32(result, 6108) = 0;
  return result;
}
