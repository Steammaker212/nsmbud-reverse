/* sub_6098F0E0
 * address: 0x6098F0E0   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6098F0E0(void *a1, int a2, int a3)
{
  const char **v5; // r6
  int v6; // r4
  int v7; // r0
  int v8; // r0
  bool v9; // zf
  int v10; // r5
  int *v11; // r1
  int *v13[73]; // [sp+4h] [bp-124h] BYREF

  v5 = sub_6085982C(a2, "MultiFilterFile");
  if ( v5 || (v6 = 0, FIELD_U32(a3, 72)) && sub_6098BE18() )
  {
    v6 = operator_new_8DE25C(0x790u, a1, 4);
    v7 = sub_609A6840();
    mf_root_param_ref(v7, a1, a1);
    v8 = 1;
    v9 = v5 == 0;
    FIELD_U8(v6, 1698) = 1;
    if ( v5 )
    {
      v8 = FIELD_U32(a3, 72);
      v9 = v8 == 0;
    }
    if ( !v9 )
    {
      v10 = FIELD_U32(v8, 20);
      sub_6017D5C0(v13, "%s.baglmf", &v5[1][(_DWORD)v5]);
      v11 = (int *)sub_6098D8F8(v10, (int)v13);
      if ( v11 )
      {
        sub_60951E50(v13, v11);
        (*(void (__fastcall **)(int, int *))(FIELD_U32(v6, 4) + 40))(v6 + 4, v13[0]);
      }
    }
  }
  return v6;
}
