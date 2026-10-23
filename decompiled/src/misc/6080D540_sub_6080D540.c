/* sub_6080D540
 * address: 0x6080D540   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6080D540(_DWORD *a1, int a2, float a3)
{
  int v6; // r6
  unsigned int v7; // r2
  _DWORD *v8; // r0
  unsigned int v9; // r1
  int v10; // r1
  int v11; // r5
  int v13; // [sp+0h] [bp-20h] BYREF
  _DWORD v14[7]; // [sp+4h] [bp-1Ch] BYREF

  v6 = SoundSystem_instance + 64;
  sub_608AE380(v14, SoundSystem_instance + 64);
  if ( v14[0] )
    sub_608AF208(v14[0], 1);
  v7 = 16777744;
  if ( a2 == 1024 )
  {
    v7 = 16777745;
    v8 = a1;
    v9 = 16;
    goto LABEL_7;
  }
  if ( a2 == 512 )
  {
    v8 = a1;
    v9 = 15;
LABEL_7:
    STRM_BGM_MENU_ref(v8, v9, v7);
    v11 = sub_6080B284((int)a1, 0);
    goto LABEL_12;
  }
  STRM_BGM_MENU_ref(a1, 8u, 0x1000B13u);
  v11 = sub_6080B284((int)a1, 0);
  sub_608A8604(&v13, v6);
  if ( v13 )
  {
    sub_608B7240(v13, a2, a3);
    if ( v13 )
      sub_608B7240(v13, ~a2, 0.0);
  }
  sub_608A86F0(&v13);
LABEL_12:
  sub_608AE46C(v14, v10);
  return v11;
}
