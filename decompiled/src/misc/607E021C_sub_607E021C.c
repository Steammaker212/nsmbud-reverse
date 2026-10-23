/* sub_607E021C
 * address: 0x607E021C   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607E021C(int a1, int *a2)
{
  int result; // r0
  float v4; // r1
  int v5; // r2
  int v6; // r2
  int v7; // r0
  int v8; // r1
  float v9; // [sp+0h] [bp-18h] BYREF
  int v10; // [sp+4h] [bp-14h]
  int v11; // [sp+8h] [bp-10h]

  result = *a2;
  switch ( *a2 )
  {
    case 0:
      FIELD_U32(a1, 4244) = 3;
      v4 = FIELD_F32(PlayerMgr_instance, 192);
      v5 = FIELD_U32(PlayerMgr_instance, 196);
      v11 = FIELD_U32(PlayerMgr_instance, 200);
      v9 = v4;
      v10 = v5;
      sub_60833074(&v9);
      v6 = v10;
      v7 = dword_60CC62E4 + 116;
      FIELD_F32(dword_60CC62E4, 116) = v9;
      FIELD_U32(v7, 4) = v6;
      FIELD_U32(v7, 8) = 0;
      sub_60517004(a1 + 568);
      result = sub_60023FA8(60);
      break;
    case 1:
      result = 4244;
      v8 = 5;
      goto LABEL_6;
    case 2:
      FIELD_U32(a1, 4244) = 0;
      result = (int)sub_60516CE0(a1 + 568);
      break;
    case 3:
      result = 4244;
      v8 = 2;
LABEL_6:
      FIELD_U32(a1, 4244) = v8;
      break;
    default:
      return result;
  }
  return result;
}
