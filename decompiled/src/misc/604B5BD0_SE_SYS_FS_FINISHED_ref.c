/* SE_SYS_FS_FINISHED_ref
 * address: 0x604B5BD0   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_FS_FINISHED_ref(int a1)
{
  int v2; // r0
  bool v3; // zf
  const char *v4; // r0
  int v5; // r1

  sub_604B8814();
  sub_604B8984(a1);
  ((void (__fastcall *)(int))loc_604B8D98)(a1);
  ModelPlayWindow_WinText_03_ref(a1);
  SE_SYS_CE_BTN_OVER_ref(a1);
  v2 = FIELD_U32(a1, 3724);
  v3 = v2 == 7;
  if ( v2 != 7 )
    v3 = v2 == 4;
  if ( v3 )
  {
    v4 = "SE_SYS_FS_FINISHED";
LABEL_6:
    v5 = 9;
    goto LABEL_7;
  }
  if ( (unsigned int)(v2 - 5) > 7 || ((0xE1u >> (v2 - 5)) & 1) == 0 )
  {
    if ( (v2 | 1) == 0x15 )
    {
      v5 = 15;
      v4 = "SE_SYS_DIALOGUE_IN";
      goto LABEL_7;
    }
    v4 = "SE_SYS_DIALOGUE_IN";
    goto LABEL_6;
  }
  v5 = 5;
  if ( v2 == 11 )
    v4 = "SE_SYS_FS_FINISHED";
  else
    v4 = "SE_SYS_DIALOGUE_IN";
LABEL_7:
  sub_60478680((int)v4, v5);
  FIELD_U8(a1, 3720) = 1;
  FIELD_U8(a1, 3777) = 1;
  FIELD_U32(a1, 3780) = 4;
  return 4;
}
