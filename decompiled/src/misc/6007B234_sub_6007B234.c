/* sub_6007B234
 * address: 0x6007B234   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_6007B234()
{
  int result; // r0
  _DWORD *v1; // r1
  int v2; // r2
  int v3; // r2
  int v4; // r2
  int v5; // r1

  FIELD_U8(dword_60C9CF0C, 1393) = 0;
  result = dword_60C99DD4;
  FIELD_U32(dword_60C99DD4, 1376) &= ~2u;
  v1 = (_DWORD *)PlayerMgr_instance;
  v2 = FIELD_U32(PlayerMgr_instance, 32);
  if ( v2 )
    FIELD_U32(v2, 1236) &= ~2u;
  v3 = v1[9];
  if ( v3 )
    FIELD_U32(v3, 1236) &= ~2u;
  v4 = v1[10];
  if ( v4 )
    FIELD_U32(v4, 1236) &= ~2u;
  v5 = v1[11];
  if ( v5 )
    FIELD_U32(v5, 1236) &= ~2u;
  FIELD_U8(result, 848) |= 2u;
  return result;
}
