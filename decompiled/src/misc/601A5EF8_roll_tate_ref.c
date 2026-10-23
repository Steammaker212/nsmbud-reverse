/* roll_tate_ref
 * address: 0x601A5EF8   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall roll_tate_ref(int a1)
{
  int v2; // r5
  _DWORD *v3; // r0
  int v4; // r1
  _DWORD *v5; // r0
  int *v6; // r1
  unsigned int v7; // r2
  unsigned int v8; // r0
  int v9; // r0
  int v10; // r1
  _DWORD *v11; // r0
  int v12; // r1
  int *v13; // r1
  unsigned int v14; // r2
  unsigned int v15; // r0
  int (**v17)(); // [sp+0h] [bp-18h] BYREF
  const char *v18; // [sp+4h] [bp-14h]

  v2 = sub_601E0240(FIELD_U32(a1, 372), FIELD_U32(a1, 376));
  FIELD_U32(a1, 316) = v2;
  if ( FIELD_U8(a1, 368) == 5 )
  {
    v3 = *(_DWORD **)(a1 + 408);
    v4 = FIELD_U32(a1, 412);
    v17 = &sead__SafeStringBase__vtable;
    v18 = "wait";
    sub_60421938(v3, v4, (int)&v17);
    if ( v2 == 4 )
    {
LABEL_3:
      v5 = *(_DWORD **)(a1 + 408);
      v6 = (int *)v5[3];
      v7 = v5[2];
      v8 = v5[17];
      if ( v7 > v8 )
        v6 += v8;
      v9 = *v6;
      v10 = -1072483533;
LABEL_13:
      FIELD_U32(v9, 24) = v10;
      goto LABEL_14;
    }
    v11 = *(_DWORD **)(a1 + 408);
    if ( v2 == 5 )
    {
LABEL_10:
      v13 = (int *)v11[3];
      v14 = v11[2];
      v15 = v11[17];
      if ( v14 > v15 )
        v13 += v15;
      v9 = *v13;
      v10 = 1075000115;
      goto LABEL_13;
    }
    v12 = FIELD_U32(a1, 412);
    v17 = &sead__SafeStringBase__vtable;
    v18 = "roll_tate";
    sub_60421938(v11, v12, (int)&v17);
    if ( v2 == 3 )
      goto LABEL_3;
    if ( v2 == 2 )
    {
      v11 = *(_DWORD **)(a1 + 408);
      goto LABEL_10;
    }
  }
LABEL_14:
  FIELD_U32(a1, 432) = sub_608332B0(a1 + 80, FIELD_U32(a1, 376) + 72);
  FIELD_U32(a1, 200) = 0;
  FIELD_U32(a1, 448) = 0;
  return 0;
}
