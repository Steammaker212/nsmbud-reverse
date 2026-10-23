/* SE_PLY_PRPL_FLY_ref_2_helper
 * address: 0x607B6954   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall SE_PLY_PRPL_FLY_ref_2_helper(int a1)
{
  int v3; // r0
  _DWORD *v4; // r6
  int v5; // r0
  int *v6; // r5
  int v7; // t1
  int v8; // r0
  int v10; // r0
  int v11; // r0
  Vec3 v12; // [sp+4h] [bp-24h] BYREF
  int (**v13)(); // [sp+10h] [bp-18h]
  const char *v14; // [sp+14h] [bp-14h]

  v4 = (_DWORD *)(a1 + 12464);
  v3 = FIELD_U32(a1, 12464);
  if ( v3 )
  {
    v5 = v3 - 1;
    *v4 = v5;
  }
  else
  {
    v5 = 0;
  }
  v7 = FIELD_U32(a1, 12460);
  v6 = (int *)(a1 + 12460);
  switch ( v7 )
  {
    case 1:
      if ( (FIELD_U8(a1, 1212) & 0x10) == 0 )
        goto LABEL_9;
      return 0;
    case 2:
      if ( sub_6079D894(a1) )
        goto LABEL_8;
      sub_602360C0(a1 + 12484);
      *v4 = 0;
      *v6 = 0;
      return 0;
    case 3:
LABEL_8:
      if ( (FIELD_U8(a1, 1212) & 0x10) != 0 )
      {
        v10 = sub_6079D894(a1);
        if ( v10 )
        {
          v11 = sub_6075EDC8(v10);
          v13 = &sead__SafeStringBase__vtable;
          v14 = "skl_root";
        }
        else
        {
          v13 = &sead__SafeStringBase__vtable;
          v14 = "skl_root";
          v11 = FIELD_U32(a1, 11360);
        }
        sub_60793F04(v11, &v12);
        return sub_60237208(a1 + 12468, &v12, 0, 0) != 0;
      }
      else
      {
LABEL_9:
        v8 = 4;
LABEL_13:
        *v6 = v8;
        return 0;
      }
    case 4:
      *v6 = 5;
      *v4 = 20;
      return 0;
    case 5:
      if ( v5 )
        return 0;
      v8 = 0;
      goto LABEL_13;
    default:
      return 0;
  }
}
