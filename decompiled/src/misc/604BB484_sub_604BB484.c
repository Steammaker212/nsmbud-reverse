/* sub_604BB484
 * address: 0x604BB484   size: 480   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_604BB484(int a1)
{
  signed int result; // r0
  int *v3; // r2
  int a5; // [sp+0h] [bp-18h] BYREF
  const char *v5; // [sp+4h] [bp-14h]

  FIELD_U8(a1, 3633) = 1;
  result = FIELD_U32(a1, 3636);
  if ( result > 119 )
  {
    if ( result == 120 )
    {
      sub_60807EF0(SoundSystem_instance, "SE_SYS_VS_COUNT", 0, 1);
      a5 = (int)&sead__SafeStringBase__vtable;
      v5 = "CountDownStart_Count_00";
      sub_6047E0EC(&a5, FIELD_U32(a1, 16), 1, 1);
      v3 = &dword_60CA26B8;
    }
    else
    {
      if ( result != 180 )
        goto LABEL_11;
      sub_60807EF0(SoundSystem_instance, "SE_SYS_VS_COUNT_LAST", 0, 1);
      v3 = &dword_60CA26C0;
    }
  }
  else if ( result )
  {
    if ( result != 60 )
      goto LABEL_11;
    sub_60807EF0(SoundSystem_instance, "SE_SYS_VS_COUNT", 0, 1);
    a5 = (int)&sead__SafeStringBase__vtable;
    v5 = "CountDownStart_Count_00";
    sub_6047E0EC(&a5, FIELD_U32(a1, 16), 1, 2);
    v3 = &dword_60CA26B8;
  }
  else
  {
    sub_60807EF0(SoundSystem_instance, "SE_SYS_VS_COUNT", 0, 1);
    a5 = (int)&sead__SafeStringBase__vtable;
    v5 = "CountDownStart_Count_00";
    sub_6047E0EC(&a5, FIELD_U32(a1, 16), 1, 3);
    v3 = &dword_60CA26B8;
  }
  sub_60473DE4((_DWORD *)(a1 + 84), 0, v3, 0);
  result = FIELD_U32(a1, 3636);
LABEL_11:
  FIELD_U32(a1, 3636) = result + 1;
  if ( result >= 180 )
  {
    result = *(unsigned __int8 *)(sub_6047482C(a1 + 84, 0) + 51);
    if ( (result & 1) != 0 )
    {
      StateMgr__changeState((StateMgr *)(a1 + 68), (StateBase *)&dword_60CA2678);
      FIELD_U32(a1, 3636) = 0;
      FIELD_U16(a1, 3632) = 0;
      return 3632;
    }
  }
  return result;
}
