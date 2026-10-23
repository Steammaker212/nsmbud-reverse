/* sub_60794BDC
 * address: 0x60794BDC   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60794BDC(int a1, int a2, int a3, unsigned int a4, signed int a5)
{
  int result; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r2
  unsigned int v15; // r0
  int v16; // r0
  int v17; // r7
  int v18; // r10
  int v19; // r0

  result = 0;
  switch ( a1 )
  {
    case 0:
    case 1:
      v11 = operator_new(0x248u);
      result = LuigiAnm_ref(v11, a1, a2, a3, a5);
      break;
    case 2:
    case 3:
    case 4:
      v10 = operator_new(0x234u);
      result = sub_607578C8(v10, a1, a2, a3, a5);
      break;
    case 5:
      v12 = operator_new(0x244u);
      result = shadowkun_player_ref(v12, 5, a2, a3, a5);
      break;
    case 6:
      v13 = operator_new(0x424u);
      result = sub_60751808(v13, 6, a2, a3, a5);
      break;
    case 8:
      v14 = dword_60C99DD4 + 272;
      if ( !dword_60C99DD4 )
        v14 = dword_60C99DEC + 16;
      v15 = 0;
      if ( a4 < 6 )
        v15 = a4;
      v16 = v14 + 72 * v15;
      v17 = FIELD_U32(v16, 36);
      v18 = FIELD_U32(v16, 44);
      v19 = operator_new(0x4A0u);
      result = MiiAnm_ref(v19, 8, a2, a3, v17, v18, a4, 0, a5, 0);
      break;
    default:
      return result;
  }
  return result;
}
