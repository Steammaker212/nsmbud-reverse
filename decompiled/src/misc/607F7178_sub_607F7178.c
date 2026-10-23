/* sub_607F7178
 * address: 0x607F7178   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__int16 __fastcall sub_607F7178(int a1, int *a2)
{
  int v3; // r0
  float v4; // r1
  int v5; // r2
  int v6; // r2
  int v7; // r0
  int v8; // r1
  float v10; // [sp+0h] [bp-18h] BYREF
  int v11; // [sp+4h] [bp-14h]
  int v12; // [sp+8h] [bp-10h]

  v3 = *a2;
  switch ( *a2 )
  {
    case 0:
      FIELD_U32(a1, 84808) = 3;
      v4 = FIELD_F32(PlayerMgr_instance, 192);
      v5 = FIELD_U32(PlayerMgr_instance, 196);
      v12 = FIELD_U32(PlayerMgr_instance, 200);
      v10 = v4;
      v11 = v5;
      sub_60833074(&v10);
      v6 = v11;
      v7 = dword_60CC62E4 + 116;
      FIELD_F32(dword_60CC62E4, 116) = v10;
      FIELD_U32(v7, 4) = v6;
      FIELD_U32(v7, 8) = 0;
      sub_6051BD50(a1 + 568);
      LOWORD(v3) = sub_60023FA8(0);
      break;
    case 1:
      v8 = 5;
      goto LABEL_6;
    case 2:
      FIELD_U32(a1, 84808) = 0;
      LOWORD(v3) = (unsigned __int16)sub_6051B860(a1 + 568);
      break;
    case 3:
      v8 = 2;
LABEL_6:
      FIELD_U32(a1, 84808) = v8;
      LOWORD(v3) = 19272;
      break;
    default:
      return v3;
  }
  return v3;
}
