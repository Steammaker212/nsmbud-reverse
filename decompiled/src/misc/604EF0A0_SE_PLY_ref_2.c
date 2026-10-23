/* SE_PLY_ref_2
 * address: 0x604EF0A0   size: 416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_ref_2(int a1)
{
  unsigned int v2; // r0
  int v3; // r1
  const char *v4; // r0

  v2 = FIELD_U32(a1, 47116) - 1;
  v3 = dword_60CC6D78;
  FIELD_U32(a1, 74464) = v2;
  if ( v2 >= 0xA )
    v2 = 0;
  FIELD_U32(a1, 74460) = *(_DWORD *)(v3 + 4 * v2 + 98488);
  SE_PLY_ref_2_helper(a1, 0);
  SE_PLY_ref_2_helper(a1, 1);
  SE_PLY_ref_2_helper(a1, 2);
  SE_PLY_ref_2_helper(a1, 3);
  SE_PLY_ref_2_helper(a1, 4);
  SE_PLY_ref_2_helper(a1, 5);
  switch ( FIELD_U32(a1, 74460) )
  {
    case 0:
    case 1:
    case 3:
      v4 = "SE_PLY_CS_CHANGE_BIG";
      goto LABEL_11;
    case 5:
      v4 = "SE_PLY_CS_CHANGE_PRPL";
      goto LABEL_11;
    case 6:
      v4 = "SE_PLY_CS_CHANGE_MAME";
      goto LABEL_11;
    case 7:
      v4 = "SE_PLY_CS_CHANGE_PNGN";
      goto LABEL_11;
    case 8:
      v4 = "SE_PLY_CS_CHANGE_MSSB";
      goto LABEL_11;
    case 9:
      v4 = "SE_PLY_CS_CHANGE_P_MSSB";
      goto LABEL_11;
    case 0xE:
      v4 = "SE_PLY_CHANGE_KINOPEACH";
LABEL_11:
      sub_60478680((int)v4, 9);
      break;
    default:
      break;
  }
  sub_604741D8((_DWORD *)(a1 + 42520), 1u, &dword_60CA6304, 0);
  FIELD_U8(a1, 74479) = 1;
  return sub_6082C054(dword_60CC6E04);
}
