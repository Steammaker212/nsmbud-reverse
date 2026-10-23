/* SE_SYS_CH_RESULT_GET_ref
 * address: 0x605208F8   size: 480   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_SYS_CH_RESULT_GET_ref(int a1)
{
  int v2; // r8
  int v3; // r6
  int v4; // r0
  const char *v5; // r1
  int v6; // r0
  bool v7; // zf
  StateMethodExecuter *result; // r0
  int a5[8]; // [sp+0h] [bp-20h] BYREF

  v2 = FIELD_U8(dword_60C9A1F0, 6560);
  v3 = a1 + 4296;
  v4 = FIELD_U32(a1, 4296) + 1;
  *(_DWORD *)v3 = v4;
  if ( FIELD_U8(v3, 12) )
  {
    if ( v4 == 40 )
    {
      if ( FIELD_U8(a1, 4311) )
      {
        FIELD_U8(a1, 4321) = 1;
        sub_603F63F8(a1 + 3868);
        sub_603FDEBC(a1 + 3868, (int)&dword_60CA9344);
      }
      FIELD_U8(a1, 4311) = 0;
    }
  }
  else if ( !FIELD_U8(a1, 4321) )
  {
    if ( v4 == 40 )
    {
      sub_603F63BC(a1 + 3868);
      sub_603FDEBC(a1 + 3868, (int)&dword_60CA92EC);
    }
    FIELD_U8(a1, 4311) = 0;
  }
  if ( FIELD_U8(a1, 4309) && *(_DWORD *)v3 == 20 )
  {
    if ( v2 )
    {
      if ( v2 == 1 )
      {
        v5 = "SE_SYS_CH_RESULT_GET_SILVER";
      }
      else
      {
        if ( v2 != 2 )
          goto LABEL_19;
        v5 = "SE_SYS_CH_RESULT_GET_GOLD";
      }
    }
    else
    {
      v5 = "SE_SYS_CH_RESULT_GET_BRONZE";
    }
    sub_60807EF0(SoundSystem_instance, v5, 0, 1);
  }
LABEL_19:
  v6 = sub_6047482C(a1 + 36, 4u);
  v7 = v6 == 0;
  if ( v6 )
    v7 = (FIELD_U8(v6, 51) & 1) == 0;
  if ( !v7 )
  {
    a5[0] = (int)&sead__SafeStringBase__vtable;
    a5[1] = sub_6052283C(15);
    sub_60473DE4((_DWORD *)(a1 + 36), 0xAu, a5, 1);
  }
  if ( *(_DWORD *)v3 == 140 )
    FIELD_U8(a1, 4300) = 1;
  result = (StateMethodExecuter *)FIELD_U8(a1, 4301);
  if ( FIELD_U8(a1, 4301) )
    return StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&dword_60CA92CC);
  return result;
}
