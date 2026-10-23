/* sub_6068C464
 * address: 0x6068C464   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6068C464(_DWORD *a1)
{
  int result; // r0
  bool v3; // zf
  int v4; // r0

  result = FIELD_U32(MaskMgr_instance, 16);
  v3 = (result & 0xF0) == 32;
  if ( (result & 0xF0) != 0x20 )
  {
    result = (unsigned __int8)result;
    v3 = (unsigned __int8)result == 48;
  }
  if ( v3 )
  {
    sub_6068CB4C(a1);
    switch ( FIELD_U32(MaskMgr_instance, 16) )
    {
      case ' ':
        a1[28] = a1[64];
        a1[29] = a1[65];
        a1[30] = a1[66];
        a1[31] = 1112014848;
        v4 = 1128792064;
        goto LABEL_9;
      case '"':
      case '$':
      case '0':
        a1[8] = a1[73];
        a1[10] = a1[64];
        a1[11] = a1[65];
        a1[12] = a1[66];
        LightMask__update((LightMask *)(a1 + 7));
        break;
      case '#':
        a1[28] = a1[64];
        a1[29] = a1[65];
        a1[30] = a1[66];
        a1[31] = 1106247680;
        v4 = 1114636288;
LABEL_9:
        a1[32] = v4;
        sub_6068B7CC(a1 + 27);
        break;
      default:
        break;
    }
    a1[18] = a1[74];
    a1[20] = a1[64];
    a1[21] = a1[65];
    a1[22] = a1[66];
    return LightMask__update((LightMask *)(a1 + 17));
  }
  return result;
}
