/* LavaDown_type_d_mode_d_IsPassingDown_s_ref
 * address: 0x607A1198   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LavaDown_type_d_mode_d_IsPassingDown_s_ref(int a1, int a2)
{
  const char *v3; // r1
  int v4; // r0
  int v5; // r0
  int v6; // r1
  int v8; // [sp+4h] [bp-54h] BYREF

  if ( a2 == 9 )
  {
    v4 = FIELD_U32(a1, 1320);
    if ( v4 != 3 )
    {
      if ( v4 == 1 )
      {
        v5 = a1;
        v6 = 0;
      }
      else
      {
        if ( !v4 )
          goto LABEL_9;
        v5 = a1;
        v6 = 1;
      }
      sub_607A2894(v5, v6);
      return 1;
    }
LABEL_9:
    sub_60777FB4(dword_60CBFA90, (int *)a1, 2);
    return 1;
  }
  if ( a2 == 10 )
  {
    sub_60777FB4(dword_60CBFA90, (int *)a1, 2);
    v3 = "false";
    if ( FIELD_U8(a1, 15076) )
      v3 = "true";
    sub_6016ACE0(&v8, "[LavaDown] type=%d,mode=%d,IsPassingDown=%s", FIELD_U32(a1, 1316), FIELD_U32(a1, 1320), v3);
  }
  return 1;
}
