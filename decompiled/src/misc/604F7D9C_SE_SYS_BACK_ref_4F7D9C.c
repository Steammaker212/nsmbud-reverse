/* SE_SYS_BACK_ref_4F7D9C
 * address: 0x604F7D9C   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_BACK_ref_4F7D9C(int a1, int a2)
{
  int result; // r0
  int v4; // t1
  int v5; // r1
  int v6; // r1
  int v7; // r1

  v4 = FIELD_U8(a1, 4763);
  result = a1 + 4763;
  if ( v4 )
  {
    result = FIELD_U32(a1, 4748);
    if ( result != 1 )
    {
      if ( !result )
      {
LABEL_4:
        result = 2;
LABEL_21:
        FIELD_U32(a1, 5804) = result;
        return result;
      }
      return result;
    }
LABEL_20:
    result = 1;
    goto LABEL_21;
  }
  if ( FIELD_U8(a1, 4766) || FIELD_U8(a1, 4762) )
    return result;
  *(_BYTE *)result = 0;
  v5 = FIELD_U32(a2, 4);
  if ( (v5 & 0x40) != 0 )
  {
    FIELD_U32(a1, 4748) = 0;
    return 4748;
  }
  if ( (v5 & 0x80) != 0 )
  {
    result = 4748;
    v6 = 1;
LABEL_14:
    *(_DWORD *)(a1 + result) = v6;
    return result;
  }
  if ( (v5 & 0x2000) == 0 )
  {
    if ( (v5 & 0x4000) == 0 )
      return result;
    sub_60807EF0(SoundSystem_instance, "SE_SYS_BACK", 0, 1);
    result = 5804;
    v6 = 2;
    goto LABEL_14;
  }
  result -= 1043;
  v7 = FIELD_U32(a1, 4748);
  if ( v7 == 1 )
  {
    sub_60502694(result);
    goto LABEL_20;
  }
  if ( !v7 )
  {
    sub_60502694(result);
    goto LABEL_4;
  }
  return result;
}
